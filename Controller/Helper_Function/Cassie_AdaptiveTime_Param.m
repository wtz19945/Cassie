% This Block Calculate all the kinematics information for the following
% blocks(including foot position, jacobian, jacobian derivative and so on)
% Copyright 2020

classdef Cassie_AdaptiveTime_Param < ...
        matlab.System & ...
        matlab.system.mixin.Propagates %#codegen
    
    % PRIVATE PROPERTIES =========================================================
    properties (Access = private)
            
        % Global timeq
        globalTime
    end % private properties

    properties (Access = public)
        is_sim
        is_IK
    end

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
        function [gains,weights,stepping_command,velocity_command] = stepImpl(obj, cassieOutputs, step_time_mode)
            %STEPIMPL System output and state update equations
            
            % Initialize the ouput variables
            gains = zeros(40,1);
            weights = zeros(18,1);
            stepping_command = zeros(3,1);
            velocity_command = zeros(3,1);
            % Check if the robot is calibrated and fully operational
            if cassieOutputs.isCalibrated
                ch = cassieOutputs.pelvis.radio.channel;
                dt = 0.0005;
                obj.globalTime = obj.globalTime + dt;
                % set controller gains
                % Pelvis, x y z rotz roty rotx
                if obj.is_sim == 1
                    st_CoM_P_gain = .1 * [170; 165; 160; 250; 260; 230]; % stance phase gain
                    st_CoM_D_gain = .1 * ([30; 25; 35; 20; 30; 20]);
                    sw_CoM_P_gain = 0.2 * [170; 165; 320; 250; 260; 230]; % swing  phase gain
                    sw_CoM_D_gain = 0.2 * [30; 25; 25; 5; 25; 25];
                    % Foot
                    x_pgain = 2*25;
                    x_dgain = 2*2;
                    y_pgain = 2*25;
                    y_dgain = 2*2;
                    z_pgain = 15;
                    z_dgain = 2.5;
                    Foot_P_gain = 1 * 2.5 * [x_pgain; y_pgain; 3*z_pgain; x_pgain; y_pgain; 3*z_pgain];
                    Foot_D_gain = 1 * 2.5 * [x_dgain; y_dgain; 3*z_dgain; x_dgain; y_dgain; 3*z_dgain];
                    % Capture point/ Balancing parameters
                    cp_x  = 1;
                    cp_dx = 1;
                    cp_y  = 1;
                    cp_dy = 1;
                    cp = [cp_x;cp_dx;cp_y;cp_dy];
                    gains = [st_CoM_P_gain;st_CoM_D_gain;Foot_P_gain;Foot_D_gain;sw_CoM_P_gain;sw_CoM_D_gain;cp];
                    % set QP weights
                    pelvis_weight = 1.4 * [62800 ;82400 ; 184000; 6250 ;6250 ;8300];
                    stance_foot_weight = 21000 *[10; 10; 10; 10; 10; 10];
                    if obj.is_IK == 1
                        swing_foot_weight = .1*[15; 20; 20; 15; 20; 20];
                    else
                        swing_foot_weight = 2450*[20; 20; 20; 20; 20; 20];
                    end
                    weights = [pelvis_weight;stance_foot_weight;swing_foot_weight];

                    % set stepping command based on time or based on
                    stepping_command(1) = 1;
                    if obj.globalTime >= 2
                        stepping_command(1) = 1;
                    end
%                     if obj.globalTime <= 1
%                         stepping_command(1) = 1;
%                     else
%                         stepping_command(1) = 0; % 1 for standing, 0 for stepping
%                     end
                        

                    if step_time_mode == 0 
                        stepping_command(2) = 0.4;
                    elseif step_time_mode == 1
                        stepping_command(2) = 0.5;
                    else
                        stepping_command(2) = 0.2;
                    end
                    
%                     stepping_command(2) = 0.4;
%                     if obj.globalTime >= 4.6 && obj.globalTime <= 4.9
%                         stepping_command(2) = 0.4;
%                     end
%                     
                    if obj.is_IK == 1
                        stepping_command(3) = .14; % stepping height
                    else
                        stepping_command(3) = .06; % stepping height
                        if stepping_command(2) == 0.1
                            stepping_command(3) = .04;
                        end
                    end
                else
                    % tune z gain
                    SE = ch(RadioButtonMap.SE);
                    % Define pelvis gains
                    if SE == 1
                        z_p = 320;
                        z_d = 25;
                    elseif SE == 0
                        z_p = 205;
                        z_d = 20;
                    else
                        z_p = 105;
                        z_d = 10;
                    end
                    st_CoM_P_gain = .1 * [270; 265; z_p; 250; 260; 230]; % stance phase gain
                    st_CoM_D_gain = .1 * ([30; 25; z_d; 20; 30; 20]);
                    
                    pel_off = ch(RadioButtonMap.LS);
                    pel_off = 0;
                    x_pgain_off = 150 * pel_off;
                    x_dgain_off = 10 * pel_off;
                    
                    y_pgain_off = 100 * pel_off;
                    y_dgain_off = 10 * pel_off;
                    
                    sw_CoM_P_gain = 0.2 * [270 + x_pgain_off; 265 + y_pgain_off; z_p; 250; 260; 230]; % swing  phase gain
                    sw_CoM_D_gain = 0.2 * [30 + x_dgain_off; 25 + y_dgain_off; z_d; 10; 20 ; 10];
                    % Foot
                    rs = ch(RadioButtonMap.RS) + 1.1;
%                     ls = ch(RadioButtonMap.LS) + 1.1;
                    zls = ch(RadioButtonMap.LS) + 1.1;
                    ls = 1.0;
                    zls = 1.0;
%                     rs = 1.0;
                    x_pgain = 2*25;
                    x_dgain = 2*2;
                    y_pgain = 2*25;
                    y_dgain = 2*2;
                    z_pgain = 15;
                    z_dgain = 2.5;
                    Foot_P_gain = rs * 2.5 * [x_pgain; y_pgain; 3/rs*z_pgain; x_pgain; y_pgain; 3/rs*z_pgain];
                    Foot_D_gain = min(rs,.5 + ch(RadioButtonMap.LS) * .3 ) * 2.5 * [x_dgain; y_dgain; zls/min(rs,.5)*3*z_dgain; x_dgain; y_dgain; zls/min(rs,.5)*3*z_dgain];
                    % Capture point/ Balancing parameters
                    % Currently, turn off capture point gains
                    cp_x  = 1;
                    cp_dx = 1;
                    cp_y  = 1;
                    cp_dy = 1;
                    cp = [cp_x;cp_dx;cp_y;cp_dy];
                    gains = [st_CoM_P_gain;st_CoM_D_gain;Foot_P_gain;Foot_D_gain;sw_CoM_P_gain;sw_CoM_D_gain;cp];
                    
                    % set QP weights
                    rot_x_weight = 16250;
                    rot_y_weight = 16250;
                    rot_z_weight = 16250;
                    pelvis_weight = 1.4 * [62800;82400  ;184000; rot_z_weight ;rot_y_weight ;rot_x_weight];
                    if ch(RadioButtonMap.SG) == 1
                        sfw = 25000;
                    elseif ch(RadioButtonMap.SG) == 0
                        sfw = 15000;
                    else
                        sfw = 7500;
                    end
                    sfw = 21000;
                    stance_foot_weight = sfw *[10; 10; 10; 10; 10; 10]; % different weight for swing/stand mode
                    swing_foot_weight = 2450*[15; 20; 20; 15; 20; 20];
                    weights = [pelvis_weight;stance_foot_weight;swing_foot_weight];
                    % set stepping command based on time or based on
                    if ch(RadioButtonMap.SC) == 1
                        stepping_command(1) = 1; % 1 for standing, 0 for stepping
                    else
                        stepping_command(1) = 0;
                    end
                    stepping_command(2) = 0.4; % stepping time
                    stepping_command(3) = .06; % stepping height
                end

                % set velocity commands
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
            name_1 = 'gain';
            name_2 = 'weight';
            name_3 = 'stepping_command';
            name_4 = 'velocity_command';

        end % getOutputNamesImpl
        
        % PROPAGATES CLASS METHODS =================================================
        function [sz_1, sz_2, sz_3, sz_4] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports
            sz_1 = [40,1];
            sz_2 = [18 1];
            sz_3 = [3 1];
            sz_4 = [3 1];
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
