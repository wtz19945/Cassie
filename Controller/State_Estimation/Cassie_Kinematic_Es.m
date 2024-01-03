%BREAKINCONTROLLER Break in procedure for Cassie mounted to build stand
% State Estimation based on Cassie Forward Kinematics
% Copyright 2020

classdef Cassie_Kinematic_Es < ...
        matlab.System & ...
        matlab.system.mixin.Propagates %#codegen
    
    % PRIVATE PROPERTIES =========================================================
    properties (Access = private)
        
        % Global timeq
        globalTime
        % Trajectory time
        trajectoryTime
        % Initial Heading
        Heading
        %
        a
        %
        b
        %
        a1
        %
        b1
        %
        joint_pos
        %
        joint_vel
        %
        filtered_joint_pos
        %
        filtered_joint_vel
    end % private properties
    
    % PROTECTED METHODS ==========================================================
    methods (Access = protected)
        % SYSTEM CLASS METHODS =====================================================
        function setupImpl(obj)
            %SETUPIMPL Initialize System objects
            % Initialize Input Variables
            obj.globalTime = 0;
            obj.trajectoryTime = 0;
            
            fc = 8;
            fc1 = 10;
            fs = 2000;
            % USe Chebyshev or butterworth algorithm to derive the filter
            [obj.b1,obj.a1] = butter(6,fc1/(fs/2));
            [obj.b,obj.a] = cheby2(6,40,8/1000);
            
            obj.joint_pos = zeros(4,7);
            obj.joint_pos(1:3,:) = [zeros(2,7);ones(1,7)];
            obj.joint_vel = zeros(4,7);
            obj.filtered_joint_pos = zeros(4,6);
            obj.filtered_joint_pos(1:3,:) = [zeros(2,6);ones(1,6)];
            obj.filtered_joint_vel = zeros(4,6);
        end % setupImpl
        
        function [pel_pos, pel_vel] = stepImpl(obj, cassieOutputs, lfm_pos, rfm_pos,lfm_jaco,rfm_jaco)
            %STEPIMPL System output and state update equations
            
            % Initialize the user input structure
            userInputs = CassieModule.getUserInStruct;
            % Initialize the ouput variables
            pel_pos = zeros(3,1);
            pel_vel = zeros(3,1);
            % Check if the robot is calibrated and fully operational
            if cassieOutputs.isCalibrated
                %% pre-configuration
                % Get local copies of common variables
                ch = cassieOutputs.pelvis.radio.channel;
                
                % Get system sample time
                dt = 0.0005;
                
                % Update global time (Time since cassie has been calibrated)
                obj.globalTime = obj.globalTime + dt;
                
                % CALCULATED VALUES
                % Retrieve the motor and pelvis properties,
                q = CassieModule.getDriveProperty(cassieOutputs, 'position');  % Radians
                dq = CassieModule.getDriveProperty(cassieOutputs, 'velocity'); % Radians/sec
                sj = CassieModule.getJointProperty(cassieOutputs, 'position');  % Radians
                dsj = CassieModule.getJointProperty(cassieOutputs, 'velocity'); % Radians/sec
                PelvAngles = cassieOutputs.pelvis.vectorNav.orientation;
                % z-y-x convention euler, but in rx-ry-rz order, transform to rz-ry-rx order
                [R1,~,theta] = QuatConversion(PelvAngles);
                olddtheta = cassieOutputs.pelvis.vectorNav.angularVelocity;
                theta = theta(end:-1:1);
                dtheta = inv(GenrateEulerDiffToOmega(theta)) \ olddtheta;
                
                
                % Parse the state vector into its left/right components
                qm_l = q(1:5);
                qm_r = q(6:10);
                dqm_l = dq(1:5);
                dqm_r = dq(6:10);
                
                % whether assume zero spring deflection
                zero_spring_deflection = false;
                if zero_spring_deflection
                    qj_l = [0; 13*pi/180 - qm_l(4)];
                    qj_r = [0; 13*pi/180 - qm_r(4)];
                    dqj_l = [0; - dqm_l(4)];
                    dqj_r = [0; - dqm_r(4)];
                else
                    qj_l = sj(1:2);
                    qj_r = sj(4:5);
                    dqj_l = dsj(1:2);
                    dqj_r = dsj(4:5);
                end
                
                % Calculate pelvis info
                Rdot = GeneratedPelvisRotdot(theta,dtheta);
                pel_vel_left = -Rdot * lfm_pos - R1*lfm_jaco(:,1:7)*[dqm_l(1:4,1);dqj_l;dqm_l(5,1)];
                pel_vel_right = -Rdot * rfm_pos - R1*rfm_jaco(:,8:14)*[dqm_r(1:4,1);dqj_r;dqm_r(5,1)];
                pel_vel_unfiltered = (pel_vel_left + pel_vel_right)/2;
                
                pel_pos_left = -R1 * lfm_pos;
                pel_pos_right = -R1 * rfm_pos;
                pel_pos_unfiltered = (pel_pos_left + pel_pos_right)/2;
                
                % do filter
                obj.joint_pos(:,2:7) = obj.joint_pos(:,1:6);
                obj.joint_pos(1,1) = pel_pos_unfiltered(1);
                obj.joint_pos(2,1) = pel_pos_unfiltered(2);
                obj.joint_pos(3,1) = pel_pos_unfiltered(3);
                
                obj.joint_vel(:,2:7) = obj.joint_vel(:,1:6);
                obj.joint_vel(1,1) = pel_vel_unfiltered(1);
                obj.joint_vel(2,1) = pel_vel_unfiltered(2);
                obj.joint_vel(3,1) = pel_vel_unfiltered(3);
                
                % posisiton filter
                filtered_pos_x = (obj.b * obj.joint_pos(1,:)' - obj.a(1,2:7) * obj.filtered_joint_pos(1,:)') / obj.a(1);
                obj.filtered_joint_pos(1,2:6) = obj.filtered_joint_pos(1,1:5);
                obj.filtered_joint_pos(1,1) = filtered_pos_x;
                
                filtered_pos_y = (obj.b * obj.joint_pos(2,:)' - obj.a(1,2:7) * obj.filtered_joint_pos(2,:)') / obj.a(1);
                obj.filtered_joint_pos(2,2:6) = obj.filtered_joint_pos(2,1:5);
                obj.filtered_joint_pos(2,1) = filtered_pos_y;
                
                filtered_pos_z = (obj.b * obj.joint_pos(3,:)' - obj.a(1,2:7) * obj.filtered_joint_pos(3,:)') / obj.a(1);
                obj.filtered_joint_pos(3,2:6) = obj.filtered_joint_pos(3,1:5);
                obj.filtered_joint_pos(3,1) = filtered_pos_z;
                
                % velocity filter
                filtered_vel_x = (obj.b * obj.joint_vel(1,:)' - obj.a(1,2:7) * obj.filtered_joint_vel(1,:)') / obj.a(1);
                obj.filtered_joint_vel(1,2:6) = obj.filtered_joint_vel(1,1:5);
                obj.filtered_joint_vel(1,1) = filtered_vel_x;
                
                filtered_vel_y = (obj.b * obj.joint_vel(2,:)' - obj.a(1,2:7) * obj.filtered_joint_vel(2,:)') / obj.a(1);
                obj.filtered_joint_vel(2,2:6) = obj.filtered_joint_vel(2,1:5);
                obj.filtered_joint_vel(2,1) = filtered_vel_y;

                filtered_vel_z = (obj.b * obj.joint_vel(3,:)' - obj.a(1,2:7) * obj.filtered_joint_vel(3,:)') / obj.a(1);
                obj.filtered_joint_vel(3,2:6) = obj.filtered_joint_vel(3,1:5);
                obj.filtered_joint_vel(3,1) = filtered_vel_z;
               
                
                pel_pos(1) = filtered_pos_x;
                pel_pos(2) = filtered_pos_y;
                pel_pos(3) = filtered_pos_z;
                
                pel_vel(1) = filtered_vel_x;
                pel_vel(2) = filtered_vel_y;
                pel_vel(3) = filtered_vel_z;
                
            end % if
        end % stepImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states
        end % resetImpl
        
        function [name_1, name_2,name_3,name_4,name_5] = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name_1 = 'CassieOutput';
            name_2 = 'lfmp';
            name_3 = 'rfmp';
            name_4 = 'lfmj';
            name_5 = 'rfmj';
        end % getInputNamesImpl
        
        function [name_1, name_2] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = '';
            name_2 = '';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS =================================================
        function [sz_1, sz_2] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports
            sz_1 = [3, 1];
            sz_2 = [3, 1];
        end % getOutputSizeImpl
        
        function [dt_1, dt_2] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports
            dt_1 = 'double';
            dt_2 = 'double';
        end % getOutputDataTypeImpl
        
        function [cp_1, cp_2] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports
            cp_1 = false;
            cp_2 = false;
        end % isOutputComplexImpl
        
        function [flag_1, flag_2] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports
            flag_1 = true;
            flag_2 = true;
        end % isOutputFixedSizeImpl
    end % protected methods
end % classdef
