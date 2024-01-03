% This Block Calculate all the kinematics information for the following
% blocks(including foot position, jacobian, jacobian derivative and so on)
% Copyright 2020

classdef FastAvoidance_OnboardQPV2 < ...
        matlab.System & ...
        matlab.system.mixin.Propagates %#codegen
    
    % PRIVATE PROPERTIES =========================================================
    properties (Access = public)
        is_IK
    end
    properties (Access = private)
        
        % Global timeq
        globalTime
        sol_prev
    end % private properties
    
    % PROTECTED METHODS ==========================================================
    methods (Access = protected)
        % SYSTEM CLASS METHODS =====================================================
        function setupImpl(obj)
            %SETUPIMPL Initialize System objects
            % Initialize Input Variables
            obj.globalTime = 0;
            obj.sol_prev = zeros(46,1);
        end % setupImpl
        
        % Output: left foot midpoint position, right foot midpoint
        % position, left foot midpoint jacobian, right foot midpoint jacobian
        function [userInputs,result,foot_info] = stepImpl(obj, cassieOutputs, Inertia, Jaco,contact_comd,acc_comd,other_info, weights)
            %STEPIMPL System output and state update equations
            
            % Initialize the ouput variables
            userInputs = CassieModule.getUserInStruct;
            flag = 0;
            result = zeros(46,1);
            torque = zeros(10,1);
            foot_info = zeros(24,1);
            % Check if the robot is calibrated and fully operational
            if cassieOutputs.isCalibrated
                Js = generateSpringJacobian; % Spring acceleration constraint force
                A = [eye(6) zeros(6,14)]; % Pelvis task space jacobian
                Adot = zeros(6,20);
                B = getTorqueSelectionMat; % Torque input matrix
                
                M = Inertia;
                Jfl = Jaco(1:6,:);
                Jfr = Jaco(7:12,:);
                Jfldot = 1 * Jaco(13:18,:);
                Jfrdot = 1 * Jaco(19:24,:);
                contact = contact_comd(1:2,1);
                contact_lam = contact_comd(3:4,1);
                pelv_acc = acc_comd(1:6,1);
                acc_feet = acc_comd(7:18,1);
                G = other_info(1:20,1);
                dq = other_info(21:40,1);
                torque_bound = other_info(41:60,1);
                traj_time = other_info(61,1);
                q = other_info(62:81,1);
                if obj.is_IK == 1
                    qdd_range = 100000;
                else
                    qdd_range = 15.5;
                end
                [result,flag] = FastAvoidance_QP2(M,G,B,Jfl,Jfr,Js,A,Adot,pelv_acc,q,dq,Jfldot,Jfrdot,obj.sol_prev,acc_feet,contact,contact_lam,weights,torque_bound,qdd_range,traj_time);
                
                foot_info(1:12,1) = [Jfldot * dq;Jfrdot * dq];
                foot_info(13:24,1) = [Jfl * result(1:20,1); Jfr * result(1:20,1)];
                % if previous solution is valid, save that for warm-start
                if flag == 1
                    obj.sol_prev = result;
                end
                
%                 if contact(1) == 1 && contact(2) == 0
%                     result(25) = 0;
%                 end
%                 
%                 if contact(1) == 0 && contact(2) == 1
%                     result(30) = 0;
%                 end


                left_torque = result(21:25);
                right_torque = result(26:30);
                torque = result(21:30);
                userInputs.torque = [left_torque; right_torque];
            end % if
        end % stepImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states
        end % resetImpl
        
        function name = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name = '';
        end % getInputNamesImpl

        function [name_1] = getOutputNamesImpl(~)
            %GETOUTPUTNAMESIMPL Return output port names for System block
            name_1 = 'Input';
        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS =================================================
        function [sz_1,sz_2,sz_3] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports
            sz_1 = [1,1];
            sz_2 = [46,1];
            sz_3 = [24,1];
        end % getOutputSizeImpl
        
        function [dt_1,dt_2,dt_3] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports
            dt_1 = 'CassieUserInBus';
            dt_2 = 'double';
            dt_3 = 'double';
        end % getOutputDataTypeImpl
        
        function [cp_1, cp_2, cp_3] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports
            cp_1 = false;
            cp_2 = false;
            cp_3 = false;
        end % isOutputComplexImpl
        
        function [flag_1, flag_2, flag_3] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports
            flag_1 = true;
            flag_2 = true;
            flag_3 = true;
        end % isOutputFixedSizeImpl
    end % protected methods
end % classdef
