% State Estimator

% Description: EKF which is used to estimate the pelvis position, velocity, left foot
% position, right foot position in the world frame

% 2020 Tianze Wang
classdef CassieEKF_Bias < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    %% Properties ==================================================
    
    % PUBLIC PROPERTIES
    properties
        % Enable Static Bias Initialization
        static_bias_initialization = true;
        % Enable Measurement Updates
        ekf_update_enabled = true;
        % Enable Kinematic measurements
        enable_kinematic_measurements = true;
        % Gyroscope Bias Initial Condition
        gyro_bias_init = zeros(3,1);
        % Accelerometer Bias Initial Condition
        accel_bias_init = zeros(3,1);
    end
    
    % PROTECTED PROPERTIES
    properties (Access = protected)
    end
    
    % PRIVATE PROPERTIES
    properties(Access = private)
        filter_enabled
        filter_initialized;
        bias_initialized;
        
        ba0 = zeros(3,1);
        bg0 = zeros(3,1);
        
        a_init_vec;
        w_init_vec;
        imu_init_count = 1;
        w_prev;
        a_prev;
        encoders_prev;
        contact_prev;
        R_prev;
        pos_lf_prev;
        pos_rf_prev;
        J_lf_prev;
        J_rf_prev;
        t_prev;
        psL_prev
        psR_prev
        %% Cassie Time Info
        % Global time
        globalTime
        % Trajectory time
        trajectoryTime
        % my own version
        Q;     % state variance matrix
        n;     % state mean
        Qn;    % prediction state noise covariance
        Rn;    % measurement state noise covariance
        encoder_Q; % encoder noise
        Qc;    % Contact Covariance Matrix
    end
    
    % PRIVATE CONSTANTS
    properties(Access = private, Constant)
        % EKF Noise Parameters
        g = [0;0;9.806]; % Gravity
        imu_init_total_count = 1000;
    end
    
    %% PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
            obj.filter_enabled = false;
            obj.filter_initialized = false;
            obj.bias_initialized = false;
            obj.a_init_vec = zeros(3, obj.imu_init_total_count);
            obj.w_init_vec = zeros(3, obj.imu_init_total_count);
            
            % Variables to store previous measurements
            obj.w_prev = zeros(3,1);
            obj.a_prev = zeros(3,1);
            obj.encoders_prev = zeros(14,1);
            obj.contact_prev = zeros(2,1);
            obj.t_prev = 0;
            obj.R_prev = eye(3);
            obj.pos_lf_prev = zeros(3,1);
            obj.pos_rf_prev = zeros(3,1);
            obj.J_lf_prev = zeros(3,14);
            obj.J_rf_prev = zeros(3,14);
            obj.psL_prev = zeros(2,1);
            obj.psR_prev = zeros(2,1);
            
            % Initialize bias estimates
            obj.bg0 = obj.gyro_bias_init;
            obj.ba0 = obj.accel_bias_init;
            
            % Initial filter information 
            obj.globalTime = 0;
            obj.trajectoryTime = 0;
            obj.Q = blkdiag(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
            obj.n = zeros(15,1);
            obj.Qn = .05*blkdiag(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
            obj.Rn = .03*blkdiag(1,1,1,1,1,1);
            obj.encoder_Q  = deg2rad(0.5) * blkdiag(1,1,1,1,1,1,1,1,1,1,1,1,1,1);
            obj.Qc = diag(0.1*ones(3,1).^2);  
        end % setupImpl
        
        function [pel_pos_estimation,pel_vel_estimation,other] = stepImpl(obj, cassieOutputs, ...
                lfm_pos, rfm_pos,lfm_jaco,rfm_jaco, pel_pos_vel)
            % Function that creates a state vector from sensor readings.
            %
            %   Inputs:
            %       cassieOutputs    - Cassie Robot Outputs
            %       pel_pos_vel      - measured pelvis position and
            %       velocity. Can be from simulation ground truth or other
            %       state estimation
            
            %
            %   Outputs:
            %       pel_pos_estimation       - pelvis position
            %       pel_vel_estimation       - pelvis velocity
            %       other                    - other state info
            %
            %   Original File: Ross Hartley. Modified by Tianze
            %
            
            % Enable filter after calibration
            pel_pos_estimation = zeros(3,1);
            pel_vel_estimation = zeros(3,1);
            other = zeros(15,1);
            
            if cassieOutputs.isCalibrated
                % Get local copies of common variables
                ch = cassieOutputs.pelvis.radio.channel;
                if ch(RadioButtonMap.SB) == 1
                    obj.filter_enabled = true;
                else
                    % reinitialize the filter when necesary
                    obj.filter_enabled = false;
                    obj.filter_initialized = false;
                    obj.bias_initialized = false;
                    obj.a_init_vec = zeros(3, obj.imu_init_total_count);
                    obj.w_init_vec = zeros(3, obj.imu_init_total_count);
                    
                    % Variables to store previous measurements
                    obj.w_prev = zeros(3,1);
                    obj.a_prev = zeros(3,1);
                    obj.encoders_prev = zeros(14,1);
                    obj.contact_prev = zeros(2,1);
                    obj.t_prev = 0;
                    obj.R_prev = eye(3);
                    obj.pos_lf_prev = zeros(3,1);
                    obj.pos_rf_prev = zeros(3,1);
                    obj.J_lf_prev = zeros(3,14);
                    obj.J_rf_prev = zeros(3,14);
                    obj.bg0 = obj.gyro_bias_init;
                    obj.ba0 = obj.accel_bias_init;
                    obj.Q = blkdiag(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
                    obj.n = zeros(15,1);
                    
                end
                
                % Get system sample time
                dt = 0.0005;
                % Update global time (Time since cassie has been calibrated)
                obj.globalTime = obj.globalTime + dt;

                % get joint measurement
                q = CassieModule.getDriveProperty(cassieOutputs, 'position');  % Radians
                dq = CassieModule.getDriveProperty(cassieOutputs, 'velocity'); % Radians/sec
                sj = CassieModule.getJointProperty(cassieOutputs, 'position');  % Radians
                dsj = CassieModule.getJointProperty(cassieOutputs, 'velocity'); % Radians/sec
                
                qm_l = q(1:5);
                qm_r = q(6:10);
                
                % whether assume zero spring deflection
                zero_spring_deflection = true;
                if zero_spring_deflection
                    qj_l = [0; 13*pi/180 - qm_l(4)];
                    qj_r = [0; 13*pi/180 - qm_r(4)];
%                     dqj_l = [0; - dqm_l(4)];
%                     dqj_r = [0; - dqm_r(4)];
                else
                    qj_l = sj(1:2);
                    qj_r = sj(4:5);
                end

                qj_l_real = sj(1:2);
                qj_r_real = sj(4:5);
                
                encoders = [qm_l(1:4,1);qj_l;qm_l(5);qm_r(1:4,1);qj_r;qm_r(5)];
                
                % get IMU measurement
                PelvAngles = cassieOutputs.pelvis.vectorNav.orientation;
                [R,~,~] = QuatConversion(PelvAngles);
                dtheta = cassieOutputs.pelvis.vectorNav.angularVelocity;
                acc = cassieOutputs.pelvis.vectorNav.linearAcceleration;

                % Contact vector 1--firm contact, 0--no contact, can be
                % within (0,1). Calculated based on spring deflection
                contact = ones(2,1);
                qsL = getSpringDeflectionAngle(qm_l(4),qj_l_real(1),qj_l_real(2));
                qsR = getSpringDeflectionAngle(qm_r(4),qj_r_real(1),qj_r_real(2));
                
                qsL = .8 * qsL + .2 * obj.psL_prev;
                qsR = .8 * qsR + .2 * obj.psR_prev;
                
                obj.psL_prev = qsL;
                obj.psR_prev = qsR;

                ub = 0.03;
                    
                if abs(qsL(1)) < .005 && abs(qsL(2)) < .005
                    contact(1) = 0;
                elseif abs(qsL(1)) > ub && abs(qsL(2)) > ub
                    contact(1) = 1;
                else
                    a1 = min(max((abs(qsL(1))-0.005)/(ub - 0.005),0),1);
                    a2 = min(max((abs(qsL(2))-0.005)/(ub - 0.005),0),1);
                    contact(1) = (a1 + a2)/2;
                end
                
                if abs(qsR(1)) < .005 && abs(qsR(2)) < .005
                    contact(2) = 0;
                elseif abs(qsR(1)) > ub && abs(qsR(2)) > ub
                    contact(2) = 1;
                else
                    a1 = min(max((abs(qsR(1))-0.005)/(ub - 0.005),0),1);
                    a2 = min(max((abs(qsR(2))-0.005)/(ub - 0.005),0),1);
                    contact(2) = (a1 + a2)/2;
                end
                
%                 if contact_traj(1) == 0
%                     contact(1) = min(contact(1) * .7, .95);
%                 end
% 
%                 if contact_traj(2) == 0
%                     contact(2) = min(contact(2) * .7, .95);
%                 end
                
                if ch(RadioButtonMap.SA) ~= 1
                    contact = ones(2,1);
                end
                % Initialize bias
                % (does nothing if bias is already initialized)
                if obj.filter_enabled
                    obj.InitializeBias(dtheta, acc, R);
                end
                % foot position in pelvis frame
                pos_rf = rfm_pos;
                pos_lf = lfm_pos;
                
                % foot jacobian in pelvis frame
                J_lf= lfm_jaco;
                J_rf = rfm_jaco;
                
                % If valid intial state is available, initialize vector
                if any(contact == 1) && obj.filter_enabled && obj.bias_initialized
                    if ~obj.filter_initialized
                        % Get Initial Pelvis Information
                        pos_pel = pel_pos_vel(1:3,1);
                        vel_pel = pel_pos_vel(4:6,1);
                        % Initial Vector
                        obj.n(1:3,1) = pos_pel;
                        obj.n(4:6,1) = vel_pel;
                        obj.n(7:9,1) = pos_pel + R * pos_lf;
                        obj.n(10:12,1) = pos_pel + R * pos_rf;
                        obj.n(13:15,1) = obj.ba0;
                        obj.filter_initialized = true;
                    end
                end
                
                % Use kalman filter if available
                if obj.filter_initialized
                    % Predict state using IMU and contact measurements
                    
                    obj.Predict_State(obj.w_prev, obj.a_prev, obj.encoders_prev, obj.contact_prev, dt,...
                        obj.pos_lf_prev,obj.pos_rf_prev,R,obj.J_lf_prev,obj.J_rf_prev);
                    % Update using other measurements
                    if obj.ekf_update_enabled
                        % Update state using forward kinematic measurements
                        if obj.enable_kinematic_measurements
                            error = obj.Update_ForwardKinematics(encoders, contact,pos_lf,pos_rf,...
                                R,J_lf,J_rf);
                        end
                        obj.Update_FlatGround(contact);
                    end
                    pel_pos_estimation = obj.n(1:3,1);
                    % Remove spikes from previous calculation
                    if contact(2) == 1 && contact(1) == 1
                        pel_pos_estimation(3) = pel_pos_estimation(3) - ((obj.n(9,1) + obj.n(12,1))/2 + 0.08);
                    elseif contact(2) == 1
                        pel_pos_estimation(3) = pel_pos_estimation(3) - (obj.n(12,1) + 0.08);
                    elseif contact(1) == 1
                        pel_pos_estimation(3) = pel_pos_estimation(3) - (obj.n(9,1) + 0.08);
                    else
                        pel_pos_estimation = obj.n(1:3,1);
                    end
                    pel_vel_estimation = obj.n(4:6,1);
                    
                    % initialized
%                     pel_pos_estimation = pel_pos_vel(1:3,1);
%                     pel_vel_estimation = pel_pos_vel(4:6,1);
                    other(:,1) = obj.n(:,1);
                    other(14:15,1) = contact;
                else
                    % Use other measurement when the filter is not well
                    % initialized
                    pel_pos_estimation = pel_pos_vel(1:3,1);
                    pel_pos_estimation(3) = pel_pos_estimation(3) - 0.02;
                    pel_vel_estimation = pel_pos_vel(4:6,1);
                    other(1:2,1) = contact;
                end
                
                % Store last values
                obj.w_prev = dtheta;
                obj.a_prev = acc;
                obj.R_prev = R;
                obj.encoders_prev = encoders;
                obj.contact_prev = contact;
                obj.pos_lf_prev = pos_lf;
                obj.pos_rf_prev = pos_rf;
                obj.J_lf_prev = J_lf;
                obj.J_rf_prev = J_rf;
                obj.t_prev = obj.globalTime - 0.0005;
                %                 other(1:3,1) = pel_theta;

%                 other(9:10,1) = qsL;
%                 other(11:12,1) = qsR;
            end
            
            
        end % stepImpl
        
        % Define Outputs =====================================================
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [pel_pos_estimation,pel_vel_estimation,other] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            pel_pos_estimation = [3,1];
            pel_vel_estimation = [3,1];
            other = [15,1];
        end % getOutputSizeImpl
        
        function [pel_pos_estimation,pel_vel_estimation,other] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            pel_pos_estimation = 'double';
            pel_vel_estimation = 'double';
            other = 'double';
        end % getOutputDataTypeImpl
        
        function [pel_pos_estimation,pel_vel_estimation,other] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            pel_pos_estimation = false;
            pel_vel_estimation = false;
            other = false;
        end % isOutputComplexImpl
        
        function [pel_pos_estimation,pel_vel_estimation,other] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports.
            pel_pos_estimation = true;
            pel_vel_estimation = true;
            other = true;
        end % isOutputFixedSizeImpl
        
    end
    
    %% PRIVATE METHODS =====================================================
    methods (Access = private)
        function [] = InitializeBias(obj, w, a, R)
            % Function to initiaze IMU bias
            if obj.static_bias_initialization
                if ~obj.bias_initialized
                    if norm(a) > 0 && norm(w) > 0 % Wait for valid signal
                        if obj.imu_init_count <= obj.imu_init_total_count
                            % Accumulate vector of imu data
                            obj.a_init_vec(:,obj.imu_init_count) = -(R*a - [0;0;9.81]);
                            obj.w_init_vec(:,obj.imu_init_count) = w;
                            obj.imu_init_count = obj.imu_init_count + 1;
                        else
                            % Use imu data vector to estimate initial biases
                            obj.ba0 = mean(obj.a_init_vec,2);
                            obj.bg0 = mean(obj.w_init_vec,2);
%                             obj.ba0 = zeros(3,1);
%                             obj.bg0 = zeros(3,1);
                            obj.bias_initialized = true;
                        end
                    end
                end
            else
                obj.bias_initialized = true;
            end
        end
        
        
        function [] = Predict_State(obj, w, a, encoders, contact, dt,pos_lf,pos_rf,R,J_lf,J_rf)
            
            dt = 5.0000e-04;
            % Bias corrected IMU information
%             w = w - bg;    % {I}_w_{WI}
%           a = a - ba;    % {I}_a_{WI}

            % based on current R and w, predict the new R
%             R_pred = R * expm(obj.skew(w*dt));
            R_pred = R;
            a_k = (R_pred*a - [0;0;9.81]);
            
            lm1 = contact(1);
            lm2 = contact(2);
            %z
            A = [eye(3) dt*eye(3) zeros(3,6) 1/2*eye(3)*dt^2;zeros(3,3) eye(3) zeros(3,6) eye(3)*dt;...
                (1-lm1)*eye(3) (1-lm1)*dt*eye(3) lm1*eye(3) zeros(3,3) .5*(1-lm1)*eye(3)*dt^2;...
                (1-lm2)*eye(3) (1-lm2)*dt*eye(3) zeros(3,3) lm2*eye(3) .5*(1-lm2)*eye(3)*dt^2;...
                zeros(3,12) eye(3)];
            
            b = [.5*a_k*dt^2;a_k*dt;(1-lm1)*.5*a_k*dt^2 + (1-lm1)*R_pred*pos_lf;...
                (1-lm2)*.5*a_k*dt^2 + (1-lm2)*R_pred*pos_rf;zeros(3,1)];
            
            obj.n = A * obj.n + b;
            encoder_trans = [zeros(6,14);(1-lm1)*R*J_lf;(1-lm2)*R*J_rf;zeros(3,14)];
            swing_foot_noise_Q = blkdiag(zeros(3,3),zeros(3,3),obj.Qc+0*eye(3)*(1-lm1),obj.Qc+0*eye(3)*(1-lm2),zeros(3,3));
            obj.Q = A * obj.Q * A' + obj.Qn +  encoder_trans*obj.encoder_Q*encoder_trans' + swing_foot_noise_Q;
        end
        
        function [] = Update_FlatGround(obj,contact)
            % Flat ground assumption
            if contact(2) == 1 && contact(1) == 1
                % Double Support
                A = eye(15);
                A(3,9) = -1/2;
                A(3,12) = -1/2;
                A(9,12) = -1/2;
                A(9,9)  = 1/2;
                A(12,9) = -1/2;
                A(12,12)= 1/2;
                b = zeros(15,1);
                b(3) = -0.08;
                b(9) = -0.08;
                b(12) = -0.08;
                obj.n = A*obj.n + b;
                obj.Q = A * obj.Q * A';
                
            elseif contact(2) == 1
                % Right Support
                A = eye(15);
                A(3,12) = -1;
                A(12,12) = 0;
                b = zeros(15,1);
                b(3) = -0.08;
                b(12) = -0.08;
                obj.n = A*obj.n + b;
                obj.Q = A * obj.Q * A';
                
            elseif contact(1) == 1
                % Left Support
                A = eye(15);
                A(3,9) = -1;
                A(9,9) = 0;
                b = zeros(15,1);
                b(3) = -0.08;
                b(9) = -0.08;
                obj.n = A*obj.n + b;
                obj.Q = A * obj.Q * A';
                
            else
                obj.n = obj.n;
                obj.Q = obj.Q;
            end         
        end
        
        function [error] = Update_ForwardKinematics(obj, encoders, contact,pos_lf,pos_rf,R,J_lf,J_rf)
            % Function to perform Right-Invariant EKF update from forward
            % kinematic measurements
            error = zeros(6,1);
            
            if contact(2) == 1 && contact(1) == 1
                % Double Support
                C = [-eye(3)' zeros(3,3) eye(3)' zeros(3,3) zeros(3,3);-eye(3)' zeros(3,3)  zeros(3,3) eye(3)' zeros(3,3)];
                Rnn = obj.Rn + [J_lf;J_rf]*obj.encoder_Q*[J_lf;J_rf]';
                z = [R*pos_lf;R*pos_rf];
                error = (z-C*obj.n);
%                 K = obj.Q * C' / (C*obj.Q*C' + Rnn);
%                 obj.n = obj.n + K*(z-C*obj.n);
%                 obj.Q = obj.Q - K*C*obj.Q;
                obj.n = obj.n + obj.Q * C' * ((C*obj.Q*C' + Rnn)\(z-C*obj.n));
                obj.Q = obj.Q - obj.Q * C' * ((C*obj.Q*C' + Rnn)\C)*obj.Q;
            elseif contact(2) == 1 && contact(1) == 0
                % Double Support
                C = [-eye(3)' zeros(3,3)  zeros(3,3) eye(3)' zeros(3,3)];
                Rnn = obj.Rn(4:6,4:6) + [J_rf]*obj.encoder_Q*[J_rf]';
                z = [R*pos_rf];
%                 K = obj.Q * C' / (C*obj.Q*C' + Rnn);
%                 obj.n = obj.n + K*(z-C*obj.n);
%                 obj.Q = obj.Q - K*C*obj.Q;
                obj.n = obj.n + obj.Q * C' * ((C*obj.Q*C' + Rnn)\(z-C*obj.n));
                obj.Q = obj.Q - obj.Q * C' * ((C*obj.Q*C' + Rnn)\C)*obj.Q;       
            elseif contact(1) == 1 && contact(2) == 0
                % Double Support
                C = [-eye(3)' zeros(3,3) eye(3)' zeros(3,3) zeros(3,3)];
                Rnn = obj.Rn(1:3,1:3) + [J_lf]*obj.encoder_Q*[J_lf]';
                z = [R*pos_lf];
%                 K = obj.Q * C' / (C*obj.Q*C' + Rnn);
%                 obj.n = obj.n + K*(z-C*obj.n);
%                 obj.Q = obj.Q - K*C*obj.Q;
                obj.n = obj.n + obj.Q * C' * ((C*obj.Q*C' + Rnn)\(z-C*obj.n));
                obj.Q = obj.Q - obj.Q * C' * ((C*obj.Q*C' + Rnn)\C)*obj.Q;
            else
                obj.n = obj.n;
                obj.Q = obj.Q;
            end
        end
        
        function [A] = skew(~, v)
            % Convert from vector to skew symmetric matrix
            A = [    0, -v(3),  v(2);
                v(3),     0, -v(1);
                -v(2),  v(1),   0];
        end
        
    end % methods
end % classdef