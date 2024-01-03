% This Block Calculate all the kinematics information for the following
% blocks(including foot position, jacobian, jacobian derivative and so on)
% Copyright 2020

classdef Kinematics_Info < ...
        matlab.System & ...
        matlab.system.mixin.Propagates %#codegen
    
    % PRIVATE PROPERTIES =========================================================
    properties (Access = private)
        
        % Global timeq
        globalTime
    end % private properties
    
    % PROTECTED METHODS ==========================================================
    methods (Access = protected)
        % SYSTEM CLASS METHODS =====================================================
        function setupImpl(obj)
            %SETUPIMPL Initialize System objects
            % Initialize Input Variables
            obj.globalTime = 0;
        end % setupImpl
        
        % Output: left foot midpoint position, right foot midpoint
        % position, left foot midpoint jacobian, right foot midpoint jacobian
        function [lfm_pos, rfm_pos,lfm_jaco,rfm_jaco] = stepImpl(obj, cassieOutputs)
            %STEPIMPL System output and state update equations
            
            % Initialize the ouput variables
            lfm_pos = zeros(3,1);
            rfm_pos = zeros(3,1);
            lfm_jaco = zeros(3,14);
            rfm_jaco = zeros(3,14);

            % Check if the robot is calibrated and fully operational
            if cassieOutputs.isCalibrated
                obj.globalTime = obj.globalTime + 0.0005;
                q = CassieModule.getDriveProperty(cassieOutputs, 'position');  % Radians
                dq = CassieModule.getDriveProperty(cassieOutputs, 'velocity'); % Radians/sec
                sj = CassieModule.getJointProperty(cassieOutputs, 'position');  % Radians
                dsj = CassieModule.getJointProperty(cassieOutputs, 'velocity'); % Radians/sec
                
                qm_l = q(1:5);
                qm_r = q(6:10);
                dqm_l = dq(1:5);
                dqm_r = dq(6:10);
                
                % Get Spring Joint Value
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
                qj_ls = sj(1:2);
                qj_rs = sj(4:5);
                % Compute Kinematic Information
%                 if obj.globalTime >= 1
%                     J_l = zeros(6,20);
%                     J_r = zeros(6,20);
%                     [T_l,~] = generatedLeftLegKinematics(qm_l,qj_l);
%                     [T_r,~] = generatedRightLegKinematics(qm_r,qj_r);
%                 else
%                     [T_l,J_l] = generatedLeftLegKinematics(qm_l,qj_l);
%                     [T_r,J_r] = generatedRightLegKinematics(qm_r,qj_r);
%                 end
                [T_l,J_l] = generatedLeftLegKinematics(qm_l,qj_l);
                [T_r,J_r] = generatedRightLegKinematics(qm_r,qj_r);
%                 [T_ls,J_l] = generatedLeftLegKinematics(qm_l,qj_ls);
%                 [T_rs,J_r] = generatedRightLegKinematics(qm_r,qj_rs);
                                
                % foot midpoint position in pelvis frame
                lfm_pos = T_l(1:3,4);
                rfm_pos = T_r(1:3,4);

                % foot midpoint jacobian in pelvis frame
                lfm_jaco= [J_l(4:6,1:4) J_l(4:6,6:7) J_l(4:6,5) zeros(3,7)];
                rfm_jaco = [zeros(3,7) J_r(4:6,1:4) J_r(4:6,6:7) J_r(4:6,5)];

                
            end % if
        end % stepImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states
        end % resetImpl
        
        function name = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name = '';
        end % getInputNamesImpl

        function [name_1, name_2, name_3, name_4] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'lfmp';
            name_2 = 'rfmp';
            name_3 = 'lfmj';
            name_4 = 'rfmj';

        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS =================================================
        function [sz_1, sz_2, sz_3, sz_4] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports
            sz_1 = [3,1];
            sz_2 = [3 1];
            sz_3 = [3 14];
            sz_4 = [3 14];
        end % getOutputSizeImpl
        
        function [dt_1, dt_2, dt_3, dt_4] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports
            dt_1 = 'double';
            dt_2 = 'double';
            dt_3 = 'double';
            dt_4 = 'double';
        end % getOutputDataTypeImpl
        
        function [cp_1, cp_2, cp_3, cp_4] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports
            cp_1 = false;
            cp_2 = false;
            cp_3 = false;
            cp_4 = false;

        end % isOutputComplexImpl
        
        function [flag_1, flag_2, flag_3, flag_4] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports
            flag_1 = true;
            flag_2 = true;
            flag_3 = true;
            flag_4 = true;

        end % isOutputFixedSizeImpl
    end % protected methods
end % classdef
