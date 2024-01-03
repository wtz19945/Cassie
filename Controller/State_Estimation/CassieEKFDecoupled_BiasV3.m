% State Estimator

% Description: EKF which is used to estimate the pelvis position, velocity, left foot
% position, right foot position in the world frame

% 2020 Tianze Wang
classdef CassieEKFDecoupled_BiasV3 < matlab.System & matlab.system.mixin.Propagates %#codegen
    
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
        
        Qx;    % Covairance Matrix in x
        Qy;    % Covairance Matrix in y
        Qz;    % Covairance Matrix in z
        nx;    % State in x
        ny;    % State in y
        nz;    % State in z
        stance_prev;
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
            obj.Qn = .005*blkdiag(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
            obj.Rn = .003*blkdiag(1,1,1,1,1,1);
            obj.encoder_Q  = deg2rad(0.5) * blkdiag(1,1,1,1,1,1,1,1,1,1,1,1,1,1);
            obj.Qc = diag(0.001*ones(3,1).^2);  
            
            % State Index [1-4]: pos, vel, left foot pos, right
            % foot pos
            obj.Qx = 7500 * blkdiag(1,1,1,1);    % Covairance Matrix in x
            obj.Qy = 7500 * blkdiag(1,1,1,1);    % Covairance Matrix in y
            obj.Qz = 7500 * blkdiag(1,1,1,1);    % Covairance Matrix in z
            obj.nx = zeros(4,1);    % State in x
            obj.ny = zeros(4,1);    % State in y
            obj.nz = zeros(4,1);    % State in z
            obj.stance_prev = 0;
        end % setupImpl
        
        function [pel_pos_estimation,pel_vel_estimation,other] = stepImpl(obj, cassieOutputs, ...
                lfm_pos, rfm_pos,lfm_jaco,rfm_jaco, pel_pos_vel, stepping_command)
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
            other = zeros(6,1);
            
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
                    obj.imu_init_count = 1;
                    % Reset EKF
                    obj.Qx = 5000 * blkdiag(1,1,1,1);    % Covairance Matrix in x
                    obj.Qy = 5000 * blkdiag(1,1,1,1);    % Covairance Matrix in y
                    obj.Qz = 5000 * blkdiag(1,1,1,1);    % Covairance Matrix in z
                    obj.nx = zeros(4,1);    % State in x
                    obj.ny = zeros(4,1);    % State in y
                    obj.nz = zeros(4,1);    % State in z
                    obj.stance_prev = 0;
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
                [R,~,theta] = QuatConversion(PelvAngles);
                dtheta = cassieOutputs.pelvis.vectorNav.angularVelocity;
                acc = cassieOutputs.pelvis.vectorNav.linearAcceleration;

                % Contact vector 1--firm contact, 0--no contact, can be
                % within (0,1). Calculated based on spring deflection
                contact = ones(2,1);
                qsL = getSpringDeflectionAngle(qm_l(4),qj_l_real(1),qj_l_real(2));
                qsR = getSpringDeflectionAngle(qm_r(4),qj_r_real(1),qj_r_real(2));
                
                qsL = 1 * qsL + .0 * obj.psL_prev;
                qsR = 1 * qsR + .0 * obj.psR_prev;
                
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
                
                stance_leg = 1;
                if stepping_command(1) ~= 1
                    if abs(qsR(1)) + abs(qsR(2)) >= (abs(qsL(1)) + abs(qsL(2)))
                        contact = [0;1];
                        stance_leg = -1;
                    else
                        contact = [1;0];
                        stance_leg = 1;
                    end
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
                        % Initial EKF
                        obj.n(1:3,1) = pos_pel;
                        obj.n(4:6,1) = vel_pel;
                        obj.n(7:9,1) = pos_pel + R * pos_lf;
                        obj.n(10:12,1) = pos_pel + R * pos_rf;
                        obj.n(13:15,1) = 0 * obj.ba0;
                        obj.filter_initialized = true;
                        
                        % Initialize EKF
                        left_foot_pos = pos_pel + R * pos_lf;
                        right_foot_pos = pos_pel + R * pos_rf;
                        obj.nx(1) = pos_pel(1);
                        obj.ny(1) = pos_pel(2);
                        obj.nz(1) = pos_pel(3);
                        obj.nx(2) = vel_pel(1);
                        obj.ny(2) = vel_pel(2);
                        obj.nz(2) = vel_pel(3);
                        obj.nx(3) = left_foot_pos(1);
                        obj.ny(3) = left_foot_pos(2);
                        obj.nz(3) = left_foot_pos(3);
                        obj.nx(4) = right_foot_pos(1);
                        obj.ny(4) = right_foot_pos(2);
                        obj.nz(4) = right_foot_pos(3);
                    end
                end
                
                % Use kalman filter if available
                if obj.filter_initialized
                    contact_switch = 0;
                    if obj.stance_prev ~= stance_leg
                        contact_switch = 1;
                        contact = [1;1];
                    end
                    obj.stance_prev = stance_leg;
                    fscov = ch(RadioButtonMap.LS);
                    fucov = (ch(RadioButtonMap.RS) + 1 + 1e-6) * 5e3;
                    Rz = euler2rotMat(0, 0, theta(3));
                    
                    theta = theta(end:-1:1);
                    base = [0;0;0;theta];
                    ql = [qm_l(1:4,1);0; 13*pi/180 - qm_l(4);qm_l(5)]; % no spring deflection ver
                    qr = [qm_r(1:4,1);0; 13*pi/180 - qm_r(4);qm_r(5)];

                    pos_lf = R * pos_lf;
                    pos_rf = R * pos_rf;
                    
%                     rp_Origin2LToe = p_LeftToeJoint([0;0;0;theta;ql;qr]);
%                     rp_Origin2RToe = p_RightToeJoint([0;0;0;theta;ql;qr]);
%                     pos_lf(1:2) = rp_Origin2LToe(1:2);
%                     pos_rf(1:2) = rp_Origin2RToe(1:2);
                    
                    % Predict state using IMU and contact measurements
                    obj.Predict_State(obj.w_prev, acc, obj.encoders_prev, contact, dt,...
                        pos_lf,pos_rf,R,obj.J_lf_prev,obj.J_rf_prev,contact_switch,fscov,fucov,Rz);
                    % Update using other measurements
                    if obj.ekf_update_enabled
                        % Update state using forward kinematic measurements
                        if obj.enable_kinematic_measurements
                            error = obj.Update_ForwardKinematics(encoders, contact,pos_lf,pos_rf,...
                                R,J_lf,J_rf);
                        end
                        obj.Update_FlatGround(contact);
                    end
                    pel_pos_estimation = [obj.nx(1);obj.ny(1);obj.nz(1)];
                    % Remove spikes from previous calculation
%                     if contact(2) == 1 && contact(1) == 1
%                         pel_pos_estimation(3) = pel_pos_estimation(3) - ((obj.nz(3,1) + obj.nz(4,1))/2 + 0.08);
%                     elseif contact(2) == 1
%                         pel_pos_estimation(3) = pel_pos_estimation(3) - (obj.nz(4,1) + + 0.08);
%                     elseif contact(1) == 1
%                         pel_pos_estimation(3) = pel_pos_estimation(3) - (obj.nz(3,1) + + 0.08);
%                     else
%                         pel_pos_estimation = [obj.nx(1);obj.ny(1);obj.nz(1)];
%                     end
                    
                    
                    % Pelvis velocity and other measurement
                    pel_vel_estimation = [obj.nx(2);obj.ny(2);obj.nz(2)];
                    % initialized
%                     pel_pos_estimation = pel_pos_vel(1:3,1);
%                     pel_vel_estimation = pel_pos_vel(4:6,1);
                    ave = mean(obj.a_init_vec,2);
                    other(1:2,1) = [ave(1);obj.ba0(1)];
                    other(3:4,1) = [ave(2);obj.ba0(2)];

                    other(5:6,1) = obj.nx(3:4,1);
                    other(1:3,1) = R*acc - [0;0;9.806];
                    other(4:6,1) = obj.ba0;
                else
                    % Use other measurement when the filter is not well
                    % initialized
                    pel_pos_estimation = pel_pos_vel(1:3,1);
                    pel_pos_estimation(3) = pel_pos_estimation(3) - 0.02;
                    pel_vel_estimation = pel_pos_vel(4:6,1);
                    ave = mean(obj.a_init_vec,2);
                    other(1:2,1) = [ave(1);obj.ba0(1)];
                    other(3:4,1) = [ave(2);obj.ba0(2)];
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
            other = [6,1];
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
                            obj.a_init_vec(:,obj.imu_init_count) = -(R*a - [0;0;9.806]);
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
        
        
        function [] = Predict_State(obj, w, a, encoders, contact, dt,pos_lf,pos_rf,R,J_lf,J_rf,contact_switch,fscov,fucov,Rz)
            
            dt = 5.0000e-04;
            % Bias corrected IMU information
%             w = w - bg;    % {I}_w_{WI}
%           a = a - ba;    % {I}_a_{WI}

            % based on current R and w, predict the new R
%             R_pred = R * expm(obj.skew(w*dt));
            R_pred = R;
            manual_off = Rz * fscov * [-1;0;0] * 0.2;
            a_k = (R_pred*a - [0;0;9.806]);
            a_k(1:2,1) = a_k(1:2,1) + manual_off(1:2,1);
            lm1 = contact(1);
            lm2 = contact(2);

            left_pos = pos_lf;
            right_pos = pos_rf;
            
            if contact_switch == 1
                % reset foot position
                obj.nx(3) = obj.nx(1) + left_pos(1);
                obj.nx(4) = obj.nx(1) + right_pos(1);
                
                obj.ny(3) = obj.ny(1) + left_pos(2);
                obj.ny(4) = obj.ny(1) + right_pos(2);
                
                obj.nz(3) = obj.nz(1) + left_pos(3);
                obj.nz(4) = obj.nz(1) + right_pos(3);

%                 if lm1 == 1
%                 obj.nx(1) = obj.nx(3) - left_pos(1);
%                 obj.ny(1) = obj.ny(3) - left_pos(2);
%                 obj.nz(1) = obj.nz(3) - left_pos(3);
%                 else
%                 obj.nx(1) = obj.nx(4) - right_pos(1);
%                 obj.ny(1) = obj.ny(4) - right_pos(2);
%                 obj.nz(1) = obj.nz(4) - right_pos(3);
%                 end
                
                obj.Qx(3,3) = obj.Qx(1,1) + fucov;
                obj.Qx(4,4) = obj.Qx(1,1) + fucov;
                obj.Qy(3,3) = obj.Qy(1,1) + fucov;
                obj.Qy(4,4) = obj.Qy(1,1) + fucov;
                obj.Qz(3,3) = obj.Qz(1,1) + fucov;
                obj.Qz(4,4) = obj.Qz(1,1) + fucov;
            end
            encoder_trans = [zeros(6,14);(1-lm1)*R*J_lf;(1-lm2)*R*J_rf];
            At = [1 dt 0 0; 0 1 0 0; 0 0 1 0; 0 0 0 1];
            At(1:2,1:2) = [1 -.5 * dt;0 1] \ [1 .5 * dt;0 1];
            swing_foot_noise_Q = blkdiag(0,0,obj.Qc(1,1)+0*(1-lm1),obj.Qc(1,1)+0*(1-lm2));
            % Update x
            bx = [.0 * a_k(1)*dt^2;a_k(1)*dt;0;0];
            bx(1:2,1) = [1 -.5 * dt;0 1] \ [0;1] * dt * a_k(1);
            obj.nx = At * obj.nx + bx + [1/2*dt^2;dt;0;0] * obj.n(13);
            obj.Qx = At * obj.Qx * At' + obj.Qn(1:4,1:4) + swing_foot_noise_Q;
            % Update y
            by = [.0 * a_k(2)*dt^2;a_k(2)*dt;0;0];
            by(1:2,1) = [1 -.5 * dt;0 1] \ [0;1] * dt * a_k(2);
            obj.ny = At * obj.ny + by + [1/2*dt^2;dt;0;0] * obj.n(14) ;
            obj.Qy = At * obj.Qy * At' + obj.Qn(1:4,1:4) + swing_foot_noise_Q;
            % Update z
            bz = [.0 * a_k(3)*dt^2;a_k(3)*dt;0;0];
            bz(1:2,1) = [1 -.5 * dt;0 1] \ [0;1] * dt * a_k(3);
            obj.nz = At * obj.nz + bz;
            obj.Qz = At * obj.Qz * At' + obj.Qn(1:4,1:4) + swing_foot_noise_Q;

%             
%             encoder_trans = [zeros(6,14);(1-lm1)*R*J_lf;(1-lm2)*R*J_rf];
%             At = [1 dt 0 0; 0 1 0 0; 1-lm1 (1-lm1)*dt lm1 0; 1-lm2 (1-lm2)*dt 0 lm2];
%             swing_foot_noise_Q = blkdiag(0,0,obj.Qc(1,1)+1e4*(1-lm1),obj.Qc(1,1)+1e4*(1-lm2));
%             % Update x
%             bx = [.5 * a_k(1)*dt^2;a_k(1)*dt;(1-lm1)*.5*a_k(1)*dt^2 + (1-lm1)*left_pos(1);(1-lm2)*.5*a_k(1)*dt^2 + (1-lm2)*right_pos(1)];
%             obj.nx = At * obj.nx + bx + [1/2*dt^2;dt;.5*(1-lm1)*dt^2;.5*(1-lm2)*dt^2] * obj.n(13);
%             obj.Qx = At * obj.Qx * At' + obj.Qn(1:4,1:4) + encoder_trans(1:3:12,:)*obj.encoder_Q*encoder_trans(1:3:12,:)' + swing_foot_noise_Q;
%             % Update y
%             by = [.5 * a_k(2)*dt^2;a_k(2)*dt;(1-lm1)*.5*a_k(2)*dt^2 + (1-lm1)*left_pos(2);(1-lm2)*.5*a_k(2)*dt^2 + (1-lm2)*right_pos(2)];
%             obj.ny = At * obj.ny + by + [1/2*dt^2;dt;.5*(1-lm1)*dt^2;.5*(1-lm2)*dt^2] * obj.n(14) ;
%             obj.Qy = At * obj.Qy * At' + obj.Qn(1:4,1:4) + encoder_trans(2:3:12,:)*obj.encoder_Q*encoder_trans(2:3:12,:)'+ swing_foot_noise_Q;
%             % Update z
%             bz = [.5 * a_k(3)*dt^2;a_k(3)*dt;(1-lm1)*.5*a_k(3)*dt^2 + (1-lm1)*left_pos(3);(1-lm2)*.5*a_k(3)*dt^2 + (1-lm2)*right_pos(3)];
%             obj.nz = At * obj.nz + bz + [1/2*dt^2;dt;.5*(1-lm1)*dt^2;.5*(1-lm2)*dt^2] * obj.n(15);
%             obj.Qz = At * obj.Qz * At' + obj.Qn(1:4,1:4) + encoder_trans(3:3:12,:)*obj.encoder_Q*encoder_trans(3:3:12,:)'+ swing_foot_noise_Q;

        end
        
        function [] = Update_FlatGround(obj,contact)
            % Flat ground assumption
             if contact(2) == 1 && contact(1) == 1
                % Update height
                Az = eye(4);
                Az(1,3) = -1/2;
                Az(1,4) = -1/2;
                Az(3,3) = 1/2;
                Az(3,4) = -1/2;
                Az(4,3) = -1/2;
                Az(4,4) = 1/2;
                bz = zeros(4,1);
                bz(1) = -0.08;
                bz(3) = -0.08;
                bz(4) = -0.08;
                obj.nz = Az*obj.nz + bz;
                obj.Qz = Az * obj.Qz * Az';
                
            elseif contact(2) == 1
                Az = eye(4);
                Az(1,4) = -1;
                Az(4,4) = 0;
                bz = zeros(4,1);
                bz(1) = -0.08;
                bz(4) = -0.08;
                obj.nz = Az*obj.nz + bz;
                obj.Qz = Az * obj.Qz * Az';
                
            elseif contact(1) == 1
                Az = eye(4);
                Az(1,3) = -1;
                Az(3,3) = 0;
                bz = zeros(4,1);
                bz(1) = -0.08;
                bz(3) = -0.08;
                obj.nz = Az*obj.nz + bz;
                obj.Qz = Az * obj.Qz * Az';
                
            else
                obj.nz = obj.nz;
                obj.Qz = obj.Qz;
            end         
        end
        
        function [error] = Update_ForwardKinematics(obj, encoders, contact,pos_lf,pos_rf,R,J_lf,J_rf)
            % Function to perform Right-Invariant EKF update from forward
            % kinematic measurements
            error = zeros(6,1);
            
            if contact(2) == 1 && contact(1) == 1
%                 left_pos = R*pos_lf;
%                 right_pos = R*pos_rf;
%                 Ct = [-1 0 1 0;-1 0 0 1];
%                 Rnnx = obj.Rn(1:2,1:2) + [J_lf(1,:);J_rf(1,:)]*obj.encoder_Q*[J_lf(1,:);J_rf(1,:)]';
%                 Rnny = obj.Rn(1:2,1:2) + [J_lf(2,:);J_rf(2,:)]*obj.encoder_Q*[J_lf(2,:);J_rf(2,:)]';
%                 Rnnz = obj.Rn(1:2,1:2) + [J_lf(3,:);J_rf(3,:)]*obj.encoder_Q*[J_lf(3,:);J_rf(3,:)]';
%                 zx = [left_pos(1);right_pos(1)];
%                 zy = [left_pos(2);right_pos(2)];
%                 zz = [left_pos(3);right_pos(3)];
%                 obj.nx = obj.nx + obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\(zx-Ct*obj.nx));
%                 obj.Qx = obj.Qx - obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\Ct)*obj.Qx;
%                 obj.ny = obj.ny + obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\(zy-Ct*obj.ny));
%                 obj.Qy = obj.Qy - obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\Ct)*obj.Qy;
%                 obj.nz = obj.nz + obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\(zz-Ct*obj.nz));
%                 obj.Qz = obj.Qz - obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\Ct)*obj.Qz;
                % Replace with two update
                left_pos = pos_lf;
                right_pos = pos_rf;
                Ct = [-1 0 1 0];
                Rnnx = obj.Rn(1,1) + [J_lf(1,:)]*obj.encoder_Q*[J_lf(1,:)]';
                Rnny = obj.Rn(1,1) + [J_lf(2,:)]*obj.encoder_Q*[J_lf(2,:)]';
                Rnnz = obj.Rn(1,1) + [J_lf(3,:)]*obj.encoder_Q*[J_lf(3,:)]';
                zx = [left_pos(1)];
                zy = [left_pos(2)];
                zz = [left_pos(3)];
                obj.nx = obj.nx + obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\(zx-Ct*obj.nx));
                obj.Qx = obj.Qx - obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\Ct)*obj.Qx;
                obj.ny = obj.ny + obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\(zy-Ct*obj.ny));
                obj.Qy = obj.Qy - obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\Ct)*obj.Qy;
                obj.nz = obj.nz + obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\(zz-Ct*obj.nz));
                obj.Qz = obj.Qz - obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\Ct)*obj.Qz;
                
                Ct = [-1 0 0 1];
                Rnnx = obj.Rn(1,1) + [J_rf(1,:)]*obj.encoder_Q*[J_rf(1,:)]';
                Rnny = obj.Rn(1,1) + [J_rf(2,:)]*obj.encoder_Q*[J_rf(2,:)]';
                Rnnz = obj.Rn(1,1) + [J_rf(3,:)]*obj.encoder_Q*[J_rf(3,:)]';
                zx = [right_pos(1)];
                zy = [right_pos(2)];
                zz = [right_pos(3)];
                obj.nx = obj.nx + obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\(zx-Ct*obj.nx));
                obj.Qx = obj.Qx - obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\Ct)*obj.Qx;
                obj.ny = obj.ny + obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\(zy-Ct*obj.ny));
                obj.Qy = obj.Qy - obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\Ct)*obj.Qy;
                obj.nz = obj.nz + obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\(zz-Ct*obj.nz));
                obj.Qz = obj.Qz - obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\Ct)*obj.Qz;
                
            elseif contact(2) == 1 && contact(1) == 0
                right_pos = pos_rf;
                Ct = [-1 0 0 1];
                Rnnx = obj.Rn(1,1) + [J_rf(1,:)]*obj.encoder_Q*[J_rf(1,:)]';
                Rnny = obj.Rn(1,1) + [J_rf(2,:)]*obj.encoder_Q*[J_rf(2,:)]';
                Rnnz = obj.Rn(1,1) + [J_rf(3,:)]*obj.encoder_Q*[J_rf(3,:)]';
                zx = [right_pos(1)];
                zy = [right_pos(2)];
                zz = [right_pos(3)];
                obj.nx = obj.nx + obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\(zx-Ct*obj.nx));
                obj.Qx = obj.Qx - obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\Ct)*obj.Qx;
                obj.ny = obj.ny + obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\(zy-Ct*obj.ny));
                obj.Qy = obj.Qy - obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\Ct)*obj.Qy;
                obj.nz = obj.nz + obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\(zz-Ct*obj.nz));
                obj.Qz = obj.Qz - obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\Ct)*obj.Qz;

            elseif contact(1) == 1 && contact(2) == 0
                left_pos = pos_lf;
                Ct = [-1 0 1 0];
                Rnnx = obj.Rn(1,1) + [J_lf(1,:)]*obj.encoder_Q*[J_lf(1,:)]';
                Rnny = obj.Rn(1,1) + [J_lf(2,:)]*obj.encoder_Q*[J_lf(2,:)]';
                Rnnz = obj.Rn(1,1) + [J_lf(3,:)]*obj.encoder_Q*[J_lf(3,:)]';
                zx = [left_pos(1)];
                zy = [left_pos(2)];
                zz = [left_pos(3)];
                obj.nx = obj.nx + obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\(zx-Ct*obj.nx));
                obj.Qx = obj.Qx - obj.Qx * Ct' * ((Ct*obj.Qx*Ct' + Rnnx)\Ct)*obj.Qx;
                obj.ny = obj.ny + obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\(zy-Ct*obj.ny));
                obj.Qy = obj.Qy - obj.Qy * Ct' * ((Ct*obj.Qy*Ct' + Rnny)\Ct)*obj.Qy;
                obj.nz = obj.nz + obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\(zz-Ct*obj.nz));
                obj.Qz = obj.Qz - obj.Qz * Ct' * ((Ct*obj.Qz*Ct' + Rnnz)\Ct)*obj.Qz;

            else
                obj.nx = obj.nx;
                obj.Qx = obj.Qx;
                obj.ny = obj.ny;
                obj.Qy = obj.Qy;
                obj.nz = obj.nz;
                obj.Qz = obj.Qz;
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