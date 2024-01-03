%BREAKINCONTROLLER Break in procedure for Cassie mounted to build stand
% State Estimation based on Cassie Forward Kinematics
% Copyright 2020

classdef Adaptive_StepTime_TrajV32 < ...
        matlab.System & ...
        matlab.system.mixin.Propagates %#codegen
    
    % PRIVATE PROPERTIES =========================================================
    properties (Access = public)
        is_sim
        x_obs_int
    end
    properties (Access = private)
        
        % Global timeq
        globalTime
        % Trajectory time
        trajectoryTime
        % Robot Heading 
        Heading
        traj_time
        stand
        step_start
        stepping
        step_end
        walking
        step_mode
        swing_foot
        % acc
        x_acc
        y_acc
        z_acc
        
        y_acc_04
        z_acc_04
        % vel
        x_vel
        y_vel
        z_vel
        
        y_vel_04
        z_vel_04
        % pos
        x_pos
        y_pos
        z_pos
        
        y_pos_04
        z_pos_04

        y_off
        y_off_04
        x_off
        nn
        %
        new_traj_start_time;
        z_start;
        
        % MPC step information
        step_index
        MPC_index
        MPC_Info
        MPC_Switch
        MPC_Command
        start_foot
        % MPC variable for warm start
        result_old
        result_old2
        result_y_old0
        result_y_old1
        result_y_old2
        result_y_old3
        
        result_y_old01
        result_y_old11
        result_y_old21
        result_y_old31
        result_y_stand
        result_y_step
        elip_prev
    end % private properties
    
    % PROTECTED METHODS ==========================================================
    methods (Access = protected)
        % SYSTEM CLASS METHODS =====================================================
        function setupImpl(obj)
            %SETUPIMPL Initialize System objects
            % Initialize Input Variables
            obj.globalTime = 0;
            obj.trajectoryTime = 0;
            obj.Heading = 0;
            obj.step_index = -1;
            obj.start_foot = 0;
            obj.result_old = zeros(170 ,1);
            obj.result_old2 = zeros(170 ,1);
            obj.result_y_old0 = zeros(227,1);
            obj.result_y_old1 = zeros(223,1);
            obj.result_y_old2 = zeros(219,1);
            obj.result_y_old3 = zeros(215,1);
            
            obj.result_y_old01 = zeros(211,1);
            obj.result_y_old11 = zeros(207,1);
            obj.result_y_old21 = zeros(203,1);
            obj.result_y_old31 = zeros(199,1);

            obj.result_y_stand = zeros(235,1);
            obj.result_y_step  = zeros(227,1);
            
            obj.MPC_Info = zeros(15,1);
            obj.MPC_index = 0;
            obj.MPC_Switch = 1;
            obj.MPC_Command = zeros(4,1);
            
            temp = coder.load('walking_traj_pos5001v3.mat','zData');
            obj.z_pos = temp.zData;
            temp = coder.load('walking_traj_vel5001v3.mat','dzData');
            obj.z_vel = temp.dzData;
            temp = coder.load('walking_traj_acc5001v3.mat','ddzData');
            obj.z_acc = temp.ddzData;
            
            
            temp = coder.load('walking_traj_pos4001v3.mat','zData');
            obj.z_pos_04 = temp.zData;
            temp = coder.load('walking_traj_vel4001v3.mat','dzData');
            obj.z_vel_04 = temp.dzData;
            temp = coder.load('walking_traj_acc4001v3.mat','ddzData');
            obj.z_acc_04 = temp.ddzData;
%             temp = load('./traj_lib_refine/walking_traj_pos5001v2.mat','xData');
%             obj.y_pos = temp.xData;
%             obj.y_pos  = obj.y_pos - obj.y_pos(1);
%             temp = load('./traj_lib_refine/walking_traj_vel5001v2.mat','dxData');
%             obj.y_vel = temp.dxData;
%             temp = load('./traj_lib_refine/walking_traj_acc5001v2.mat','ddxData');
%             obj.y_acc = temp.ddxData;
%             
%             temp = load('./traj_lib_refine/walking_traj_pos5001v2.mat','zData');
%             obj.z_pos = temp.zData;
%             temp = load('./traj_lib_refine/walking_traj_vel5001v2.mat','dzData');
%             obj.z_vel = temp.dzData;
%             temp = load('./traj_lib_refine/walking_traj_acc5001v2.mat','ddzData');
%             obj.z_acc = temp.ddzData;
%             
%             temp = load('./traj_lib_refine/walking_traj_pos5001v2.mat','yData');
%             obj.x_pos = temp.yData;
%             temp = load('./traj_lib_refine/walking_traj_vel5001v2.mat','dyData');
%             obj.x_vel = temp.dyData;
%             temp = load('./traj_lib_refine/walking_traj_acc5001v2.mat','ddyData');
%             obj.x_acc = temp.ddyData;
            
            obj.step_mode = 0;
            obj.x_off = 0;
            obj.nn = 0;
            obj.new_traj_start_time = 1;
            obj.stand = 1;
            obj.step_start = 0;
            obj.step_end = 0;
            obj.stepping = 0;
            obj.walking = 0;
            obj.traj_time = 0;
            obj.z_start = 0;
            obj.elip_prev = zeros(2,1);
            obj.swing_foot = 1;
        end % setupImpl
        
        function [des_pos, des_vel,des_acc,contact,contact_switch, traj_time, sc_Data, MPC_Slack, MPC_Data, ch_stepTime] = stepImpl(obj, cassieOutputs, stepping_command, state)
            %STEPIMPL System output and state update equations
            
            % Initialize the user input structure
            userInputs = CassieModule.getUserInStruct;
            % Initialize the ouput variables
            des_pos = zeros(3,1);
            des_pos(1) = 0.03;
            des_pos(3) = 0.9;
            des_vel = zeros(3,1);
            des_acc = zeros(3,1);
            contact = ones(2,1);
            contact_switch = zeros(4,1);
            traj_time = 0;
            step_length = 0;
            pel_states = zeros(6,1);
            sc_Data = zeros(56,1);
            MPC_Slack = zeros(15,1);
            MPC_Data = zeros(76,1);
            Tstep = 0.4; % step time is 0.5, fixed for now
            Tstep_1 = 0.5;
            dt = 0.1; % MPC sample Time,
            dt_1 = 0.1;
            Npred = 4; % Number of steps
            Nodes = floor(Tstep_1 / dt_1) + (Npred-1) * floor(Tstep / dt) + 1;
            
            foot_y_goal = 0;
            des_traj = zeros(4 * 17 + 42, 1);
            xn = 0;
            yn = 0;
            ch_stepTime = 1;
            qd_next = zeros(170,1);
            if cassieOutputs.isCalibrated
                ch = cassieOutputs.pelvis.radio.channel;
                % Get system sample time
                dt = 0.0005;
                % Update global time (Time since cassie has been calibrated)
                if ch(RadioButtonMap.SA) == 1
                    obj.globalTime = obj.globalTime + dt;
                else
                    obj.globalTime = 0;
                    obj.z_start = 0;
                end
                
                obj.traj_time = obj.traj_time + dt;
                step_time = stepping_command(2);
                Tstep = step_time;
                
                
                if obj.traj_time >= step_time
                    obj.traj_time = 0;
                    if obj.swing_foot == 2
                        change_state = 1;
                        obj.swing_foot = 0;
                    else
                        change_state = 0;
                    end
                    obj.swing_foot = obj.swing_foot + 1;
                    
                    if obj.MPC_Info(1) == 0 && obj.MPC_Info(2) == 0
                    	obj.step_mode = 0;
                    elseif obj.MPC_Info(1) == 1 && obj.MPC_Info(2) == 0
                        obj.step_mode = 2;
                    elseif obj.MPC_Info(1) == 0 && obj.MPC_Info(2) == 1
                        obj.step_mode = 1;
                    else
                        obj.step_mode = 1;
                    end
                else
                    change_state = 0;
                end
                
                ch_stepTime = obj.step_mode;
                % command change

                % state change for a single step
%                 if obj.MPC_Command(1) == 1 && obj.MPC_Command(2) == 1 && obj.MPC_Command(3) == 0
%                     % switch to stepping mode
%                     obj.MPC_Command(3) = 1;
%                     obj.MPC_Switch = 0;
%                     obj.stand = 0;
%                     obj.step_start = 0;
%                     obj.stepping = 1;
%                     obj.traj_time = 0.0; % .2 seconds stepping prepare time
%                 end
%                 sc = obj.MPC_Switch;
                sc = 0;
                if change_state
                    if sc == 1
                        obj.stand = 1;
                        obj.step_start = 0;
                        obj.stepping = 0;
                        obj.step_end = 0;
                            
                    elseif sc == 0
                        if obj.stand == 1
                            obj.step_start = 1;
                            obj.stepping = 0;
                            obj.stand = 0;
                            obj.step_end = 0;
                        elseif obj.step_start == 1
                            obj.step_start = 0;
                            obj.stepping = 1;
                            obj.stand = 0;
                            obj.step_end = 0;
                        elseif obj.stepping == 1
                            obj.step_start = 0;
                            obj.stepping = 1;
                            obj.stand = 0;
                            obj.step_end = 0;
                        elseif obj.step_end == 1
                            obj.step_start = 0;
                            obj.stepping = 0;
                            obj.stand = 0;
                            obj.step_end = 1;
                        else
                            obj.step_start = obj.step_start;
                            obj.stepping = obj.stepping;
                            obj.step_end = obj.step_end;
                            obj.stand = obj.stand;
                        end
                    else
                        obj.step_start = obj.step_start;
                        obj.stepping = obj.stepping;
                        obj.step_end = obj.step_end;
                        obj.stand = obj.stand;
                    end
                end
                contact_switch(4) = obj.stepping;
                
                if obj.stand == 1
                    %% TODO: Add Standing Offset for hardware test
                    des_pos = [.03;0;.9];
                    des_vel = [0;0;0];
                    des_acc = zeros(3,1);
                    contact = ones(2,1);
                    ct = obj.traj_time;
                    if ct<=step_time
                        st = ct - 0.0;
                    else
                        st = ct - step_time;
                    end
                    traj_time = st;
                end
                
                init_vel = 0.2;
                if obj.step_start == 1
                    if obj.traj_time > 2 * step_time - 0.3 && obj.traj_time < 2 * step_time
                        ct = obj.traj_time  - (2 * step_time - 0.3);
                        contact = [1;1];
                        % use constant y,z or y,z from the trajectory
                        des_pos = [.03;-ct * init_vel;.9];
                        des_vel = [0;-init_vel;0];
                        des_acc = zeros(3,1);
                    else
                        des_pos = [.03;0;.9];
                        des_vel = [0;0;0];
                        des_acc = zeros(3,1);
                        contact = ones(2,1);
                    end
                end
                
                if obj.is_sim == 0
                    if obj.globalTime <= 0.1 && ch(RadioButtonMap.SA) == 1
                        obj.z_start = state(3);
                    end
                    des_pos(3) = obj.z_start + (.9 - obj.z_start) * (ch(RadioButtonMap.RS) + 1)/2;
                end
                
                if obj.stepping == 1
                    ct = obj.traj_time;
                    if obj.swing_foot == 1
                        if obj.start_foot == 1
                            contact = [0;1];
                        else
                            contact = [1;0];
                        end
                        st = ct - 0.0;
                        if st < 0.0006
                            contact_switch(2) = 1;
                        end
                        traj_time = st;
                        node_current = st / 0.005;
                        node_index = floor(node_current);
                        node_offset = node_current - node_index;
                        
                        if step_time == 0.5
                            if node_index< 100
                                des_z_pos = (1 - node_offset) * obj.z_pos(node_index + 1) + node_offset * obj.z_pos(node_index + 2);
                                des_z_vel = (1 - node_offset) * obj.z_vel(node_index + 1) + node_offset * obj.z_vel(node_index + 2);
                                des_z_acc = (1 - node_offset) * obj.z_acc(node_index + 1) + node_offset * obj.z_acc(node_index + 2);
                            else
                                des_z_pos = obj.z_pos(node_index + 1);
                                des_z_vel = obj.z_vel(node_index + 1);
                                des_z_acc = obj.z_acc(node_index + 1);
                            end
                        else
                            if node_index< 80
                                des_z_pos = (1 - node_offset) * obj.z_pos_04(node_index + 1) + node_offset * obj.z_pos_04(node_index + 2);
                                des_z_vel = (1 - node_offset) * obj.z_vel_04(node_index + 1) + node_offset * obj.z_vel_04(node_index + 2);
                                des_z_acc = (1 - node_offset) * obj.z_acc_04(node_index + 1) + node_offset * obj.z_acc_04(node_index + 2);
                            else
                                des_z_pos = obj.z_pos_04(node_index + 1);
                                des_z_vel = obj.z_vel_04(node_index + 1);
                                des_z_acc = obj.z_acc_04(node_index + 1);
                            end
                        end
                        des_x_pos = 0.03;
                        des_x_vel = 0;
                        des_x_acc = 0;
                        des_y_pos = 0.0;
                        des_y_vel = 0;
                        des_y_acc = 0;
                        des_pos(1) = des_x_pos;
                        des_pos(2) = des_y_pos;
                        des_pos(3) = des_z_pos;
                        des_vel(1) = des_x_vel;
                        des_vel(2) = des_y_vel;
                        des_vel(3) = des_z_vel;
                        des_acc(1) = des_x_acc;
                        des_acc(2) = des_y_acc;
                        des_acc(3) = des_z_acc;

                    else
                        if obj.start_foot == 1
                            contact = [1;0];
                        else
                            contact = [0;1];
                        end
                        st = ct - 0;
                        if st < 0.0006
                            contact_switch(3) = 1;
                        end
                        traj_time = st;
                        node_current = st / 0.005;
                        node_index = floor(node_current);
                        node_offset = node_current - node_index;
                        if step_time == 0.5
                            if node_index< 100
                                des_z_pos = (1 - node_offset) * obj.z_pos(node_index + 1) + node_offset * obj.z_pos(node_index + 2);
                                des_z_vel = (1 - node_offset) * obj.z_vel(node_index + 1) + node_offset * obj.z_vel(node_index + 2);
                                des_z_acc = (1 - node_offset) * obj.z_acc(node_index + 1) + node_offset * obj.z_acc(node_index + 2);
                            else
                                des_z_pos = obj.z_pos(node_index + 1);
                                des_z_vel = obj.z_vel(node_index + 1);
                                des_z_acc = obj.z_acc(node_index + 1);
                            end
                        else
                            if node_index< 80
                                des_z_pos = (1 - node_offset) * obj.z_pos_04(node_index + 1) + node_offset * obj.z_pos_04(node_index + 2);
                                des_z_vel = (1 - node_offset) * obj.z_vel_04(node_index + 1) + node_offset * obj.z_vel_04(node_index + 2);
                                des_z_acc = (1 - node_offset) * obj.z_acc_04(node_index + 1) + node_offset * obj.z_acc_04(node_index + 2);
                            else
                                des_z_pos = obj.z_pos_04(node_index + 1);
                                des_z_vel = obj.z_vel_04(node_index + 1);
                                des_z_acc = obj.z_acc_04(node_index + 1);
                            end
                        end
                        des_x_pos = 0.03;
                        des_x_vel = 0;
                        des_x_acc = 0;
                        des_y_pos = 0.0;
                        des_y_vel = 0;
                        des_y_acc = 0;
                        des_pos(1) = des_x_pos;
                        des_pos(2) = des_y_pos;
                        des_pos(3) = des_z_pos;
                        des_vel(1) = des_x_vel;
                        des_vel(2) = des_y_vel;
                        des_vel(3) = des_z_vel;
                        des_acc(1) = des_x_acc;
                        des_acc(2) = des_y_acc;
                        des_acc(3) = des_z_acc;
                    end
                end
                if obj.is_sim == 1
                    des_pos(1) = des_pos(1);
                    des_pos(2) = des_pos(2);
                else
                    % TODO: Use s1,s2 to adjust the pelvis reference
                    % position
                    s1 = 0.0 * ch(RadioButtonMap.S1) + .04;
                    s2 = 0.0 * ch(RadioButtonMap.S2);
                    des_pos(1) = des_pos(1) + s1 - 0.03;
                    des_pos(2) = des_pos(2) + s2;
                end
                
                %% Solving Trajectory Generation MPC
                q = CassieModule.getDriveProperty(cassieOutputs, 'position');  % Radians
                sj = CassieModule.getJointProperty(cassieOutputs, 'position');  % Radians
                
                dq = CassieModule.getDriveProperty(cassieOutputs, 'velocity');  % Radians
                dsj = CassieModule.getJointProperty(cassieOutputs, 'velocity');  % Radians
                dtheta = cassieOutputs.pelvis.vectorNav.angularVelocity;
                
                qm_l = q(1:5);
                qm_r = q(6:10);
                dqm_l = dq(1:5);
                dqm_r = dq(6:10);

                PelvAngles = cassieOutputs.pelvis.vectorNav.orientation;
                [R,~,theta] = QuatConversion(PelvAngles);
                
                theta = theta(end:-1:1);
                if theta(1) < 0
                    theta(1) = theta(1) + 2*pi;
                end
                % Set the Pelvis Initial Heading (Z Rotation)
                if obj.trajectoryTime < 0.01 && obj.trajectoryTime > 0
                    obj.Heading = theta(1);
                end
                R = euler2rotMat(0, 0, obj.Heading);
                theta(1) = Wrap_theta(theta(1),obj.Heading);
                
                dtheta = inv(GenrateEulerDiffToOmega(theta)) \ dtheta;
                
                pel_states(1:3,1) = R' * state(1:3,1);
                pel_states(4:6,1) = R' * state(4:6,1);
                
                base = [pel_states(1:3);theta];
                qls = [qm_l(1:4,1);sj(1:2);qm_l(5)];
                qrs = [qm_r(1:4,1);sj(4:5);qm_r(5)];
                dbase = [pel_states(4:6);dtheta];
                dqls = [dqm_l(1:4,1);dsj(1:2);dqm_l(5)];
                dqrs = [dqm_r(1:4,1);dsj(4:5);dqm_r(5)];

                if contact(1) == 0 || contact(2) == 0
                    standing = 0;
                else
                    standing = 1;
                end
                % Only Do Update once per step
                if contact(1) == 1
                    obj.step_index = 1;
                end
                if contact(2) == 1
                    obj.step_index = -1;
                end
                
                CoM_x = [pel_states(1);pel_states(4)];
                CoM_y = [pel_states(2);pel_states(5)];
                
                [pos_lt,pos_rt,pos_lh,pos_rh,toejaco_left,toejaco_right,heeljaco_left,heeljaco_right] = GeneratedFootKinematics(base,qls,qrs);
                vel_lt = toejaco_left * [dbase;dqls;dqrs];
                vel_lh = heeljaco_left * [dbase;dqls;dqrs];
                vel_rt = toejaco_right * [dbase;dqls;dqrs];
                vel_rh = heeljaco_right * [dbase;dqls;dqrs];
                
                if standing == 0
                    if obj.step_index == 1
                        %                     [T_l,~] = generatedLeftLegKinematics(qm_l,qj_l);
                        %                     foot_pos_left =  pel_states(1:3,1) + R * T_l(1:3,4);
                        % Start with Left Foot, Left Foot on the Ground
                        Cp_x = (pos_lh(1) + pos_lt(1))/2;
                        Cp_y = (pos_lh(2) + pos_lt(2))/2;
                    else
                        % Start with Right Foot, Right Foot on the Ground
                        %                     [T_r,~] = generatedRightLegKinematics(qm_r,qj_r);
                        %                     foot_pos_right = pel_states(1:3,1) + R * T_r(1:3,4);
                        Cp_x = (pos_rh(1) + pos_rt(1))/2;
                        Cp_y = (pos_rh(2) + pos_rt(2))/2;
                    end
                else
                    Cp_x = (pos_rh(1) + pos_rt(1) + pos_lh(1) + pos_lt(1))/4;
                    Cp_y = (pos_rh(2) + pos_rt(2) + pos_lh(2) + pos_lt(2))/4;
                end
%                 qo_i = [obj.x_obs_int;1.5;-3;-0.3] + [0; -.25 * (obj.globalTime);.25 * (obj.globalTime);0];
%                     qo_i = [3;0.5;3;0.5];
                qo_i = [obj.x_obs_int;5.5] + [0; -1 * (obj.globalTime)];
                qo_i = [20;.2] + 1*[-5 * (obj.globalTime);0 * (obj.globalTime)];
%                 qo_i = [3.1;3.5] + [-.7 * (obj.globalTime); -.7 * (obj.globalTime)];
                v = [-5;0];
                phi = atan2(v(2),v(1));
                Relip = [cos(phi) -sin(phi); sin(phi) cos(phi)];
                error = [CoM_x(1);CoM_y(1)] - qo_i; % should be based on
                error = Relip' * error;
                if error(1) >= 0 && error(2) >= 0
                    x0 = 0.25 * pi;
                elseif error(1) < 0 && error(2) >= 0
                    x0 = 0.75 * pi;
                elseif error(1) < 0 && error(2) < 0
                    x0 = -0.75 * pi;
                else
                    x0 = -0.25 * pi;
                end
                a = norm(v,2);
                b = .1;
                
                if obj.globalTime <= 1
                    xn = qo_i(1) + a*cos(x0)*cos(phi) - b*sin(x0)*sin(phi);
                    yn = qo_i(2) + a*cos(x0)*sin(phi) + b*sin(x0)*cos(phi);
                else
                    xn = obj.elip_prev(1);
                    yn = obj.elip_prev(2);
                end
                
                [xn,yn,tn] = ellipse_solverV2(a,b,qo_i(1),qo_i(2),CoM_x(1),CoM_y(1),1e-3,2,xn,yn,phi);
                obj.elip_prev = [xn;yn];
                
%                 % cutoff angle
                cutoff_angle = 10 * pi / 180;
                xn1 = qo_i(1) + a*cos(cutoff_angle)*cos(phi) - b*sin(cutoff_angle)*sin(phi);
                yn1 = qo_i(2) + a*cos(cutoff_angle)*sin(phi) + b*sin(cutoff_angle)*cos(phi);
                xn2 = qo_i(1) + a*cos(2*pi-cutoff_angle)*cos(phi) - b*sin(2*pi-cutoff_angle)*sin(phi);
                yn2 = qo_i(2) + a*cos(2*pi-cutoff_angle)*sin(phi) + b*sin(2*pi-cutoff_angle)*cos(phi);
                
                % normal vector at the cutting point
                norm_vec_cut1 = [b*cos(cutoff_angle)*cos(phi)-a*sin(cutoff_angle)*sin(phi);...
                    b*cos(cutoff_angle)*sin(phi)+a*sin(cutoff_angle)*cos(phi)];
                norm_vec_cut2 = [b*cos(2*pi-cutoff_angle)*cos(phi)-a*sin(2*pi-cutoff_angle)*sin(phi);...
                    b*cos(2*pi-cutoff_angle)*sin(phi)+a*sin(2*pi-cutoff_angle)*cos(phi)];
                
                % check if the point is within the cutoff region. Easier in
                % the world frame
                p1 = Relip'*[xn-qo_i(1);yn-qo_i(2)];
                p2 = Relip'*[xn1-qo_i(1);yn1-qo_i(2)];
                p3 = Relip'*[xn2-qo_i(1);yn2-qo_i(2)];
                
                % Compute Normal Vector for the half-space
                if p1(1) > 0 && p1(2) >0 && p1(2) < p2(2)
                    norm_vec = norm_vec_cut1/norm(norm_vec_cut1,2);
                elseif p1(1) > 0 && p1(2) <0 && p1(2) >  p3(2)
                    norm_vec = norm_vec_cut2/norm(norm_vec_cut2,2);
                else
                    norm_vec = [CoM_x(1)-xn;CoM_y(1)-yn]/norm([CoM_x(1)-xn;CoM_y(1)-yn],2);
                end
                    
                
                Obs_Info = [xn;yn;norm_vec];
%                 Obs_Info = [10;10;-1;-1];
                if standing == 0
                    x_ref = [0;-0 * CoM_x(1)];
                    y_ref = [0;-0 * CoM_y(1)];
%                     y_ref = [0;0.4];
%                     if obj.globalTime >= 2
%                         y_ref(2) = min(.1 * (obj.globalTime - 2),1.0);
%                     end
                    state_des = [x_ref;y_ref];
                else
                    x_ref = [0;0];
                    y_ref = [0;0];
                    state_des = [x_ref;y_ref];
                end
                
                r_min = 0.1; % Hard Constraint Radius,
                r_min2 = [.45;.45]; % Soft Constraint Radius
                cost = 5800; % Soft Constraint Cost (outter circle penalty), can modify here
                cost_step = 4000;
                Qx_st = 1.3 * [15000;100];
                Qx_sw = [0;500];
                Qy_st = 1.3 * [15000;100];
                Qy_sw = [0;500];
                
                cRx = 10000; % ZMP tracking. Depend on controllability during
                cWx = 1000; % step length
                
                cRy = 15000;
                cWy = [0000;3500]; % around 1300 - 2000 should be good
                
                
                
%                 if obj.globalTime >= 3 % Replace it with
%                     obj.MPC_Command(1) = 0;
%                     obj.MPC_Command(2) = 0;
%                     obj.start_foot = 0; % left foot start first 1, right foot start first 0
%                 else
%                     obj.MPC_Command(1) = 0;
%                     obj.MPC_Command(2) = 0;
%                 end
                obj.start_foot = obj.MPC_Command(4);
                % Solve Standing MPC
                norm1 = 0;
                norm2 = 0;
                qo_i = Obs_Info;
                
                if standing == 1
                    if mod(traj_time,0.1) <= 5e-4 && traj_time <=Tstep-0.01
                        mid_in = 0;
                        Cp_xst = (pos_rh(1) + pos_rt(1) + pos_lh(1) + pos_lt(1))/4;
                        Cp_yst = (pos_rh(2) + pos_rt(2) + pos_lh(2) + pos_lt(2))/4;
                        [qd,flag,sol_y] = Sim_FastAvoidanceV3(Tstep,Nodes,r_min,r_min2,cost,CoM_x,CoM_y,Cp_xst,Cp_yst,qo_i,state_des,obj.step_index,...
                            Qx_st,Qy_st,cRx,cRy,cWx,cWy,mid_in,obj.result_old,obj.result_y_stand,obj.result_y_old11,obj.result_y_old21,...
                            obj.result_y_old31,1,Obs_Info);
                        
                        obj.result_y_stand(1:end - 4*mid_in) =  sol_y.';
                        obj.result_old = qd;
                        %                     norm2 = norm(obj.result_old(162:178),2);
                        %                     obj.MPC_Command(1) = obj.MPC_Command(2);
                        %                     if norm2 > 10 * 1e-3
                        %                         %                         if obj.globalTime >= 3.2
                        %                         obj.MPC_Command(2) = 1;
                        %                     else
                        %                         obj.MPC_Command(2) = 0;
                        %                     end
                        %obj.MPC_Info(4:6,1) = [norm([CoM_x(1);CoM_y(1)] - qo_i(1:2)); norm(qd(145:161),2); norm(qd(162:178,1))];
                        obj.MPC_Info(7:14) = [CoM_x;CoM_y;Cp_xst;Cp_yst;qo_i(1:2)];
                    end
                    if standing == 1
                        obj.MPC_Command(4) = -sign(CoM_y(2));
                    end
                    MPC_Slack = obj.MPC_Info;
                end
                
                % Solve Stepping MPC
               if contact(1) == 0
                    % Update the trajectory every 0.1s
                    mid_in = floor(traj_time/0.1);
                    if mod(traj_time,0.1) <= 5e-4 && traj_time <=Tstep-0.01
                        [qd,flag,sol_y] = Sim_FastAvoidanceV3(Tstep,Nodes,r_min,r_min2,cost_step,CoM_x,CoM_y,Cp_x,Cp_y,qo_i,state_des,obj.step_index,...
                            Qx_sw,Qy_sw,cRx,cRy,cWx,cWy,mid_in,obj.result_old,obj.result_y_step,obj.result_y_old1,obj.result_y_old2,...
                            obj.result_y_old3,0,Obs_Info);
                        if Tstep == 0.5
                            obj.result_y_step(1:end - 4*mid_in) =  sol_y.';
                        elseif Tstep == 0.4
                            obj.result_y_step(1:end - 4*(mid_in+1)) =  sol_y.';
                        elseif Tstep == 0.3
                            obj.result_y_step(1:end - 4*(mid_in+2)) =  sol_y.';
                        elseif Tstep == 0.2
                            obj.result_y_step(1:end - 4*(mid_in+3)) =  sol_y.';
                        else
                            obj.result_y_step(1:end - 4*(mid_in+4)) =  sol_y.';
                        end
                        obj.result_old = qd;
%                         obj.MPC_Info(7:15) = [CoM_x;CoM_y;Cp_x;Cp_y;qo_i;obj.step_index];
                        step1_cross = 0;
                        step2_cross = 0;
                        if mid_in == round(Tstep/0.1) - 1
                            mid_in_next = 0;
                            step_index_next = obj.step_index * -1;
                            Cp_x_next = Cp_x + obj.result_old(6*Nodes+1);
                            Cp_y_next = Cp_y + obj.result_old(6*Nodes+5);
                            CoM_x_next = obj.result_old(3:4,1);
                            CoM_y_next = obj.result_old(2*Nodes+3:2*Nodes+4,1);
                            Tstep_next = 0.4;
                            [qd_next,~,~] = Sim_FastAvoidanceV3(Tstep_next,Nodes,r_min,r_min2,cost_step,CoM_x_next,CoM_y_next,Cp_x_next,Cp_y_next,qo_i,state_des,step_index_next,...
                                Qx_sw,Qy_sw,cRx,cRy,cWx,cWy,mid_in_next,obj.result_old,obj.result_y_step,obj.result_y_old1,obj.result_y_old2,...
                                obj.result_y_old3,0,Obs_Info);
                            % Left foot is in swing, plan a right swing
                            % step
                            if qd_next(6*Nodes+5) > 0
                                step1_cross = 1;
                            end
                            if qd_next(6*Nodes+6) < 0
                                step2_cross = 1;
                            end
                            
                            obj.MPC_Info(1:2,1) = [step1_cross;step2_cross];
                        end
                    end
                    n = traj_time - mid_in * 0.1;
                    
                    
                end
                
                if contact(2) == 0
                    mid_in = floor(traj_time/0.1);
                    if mod(traj_time,0.1) <= 5e-4 && traj_time <=Tstep-0.01
                        [qd,flag,sol_y] = Sim_FastAvoidanceV3(Tstep,Nodes,r_min,r_min2,cost_step,CoM_x,CoM_y,Cp_x,Cp_y,qo_i,state_des,obj.step_index,...
                            Qx_sw,Qy_sw,cRx,cRy,cWx,cWy,mid_in,obj.result_old,obj.result_y_step,obj.result_y_old1,obj.result_y_old2,...
                            obj.result_y_old3,0,Obs_Info);
                        obj.result_old = qd;
%                         obj.MPC_Info(7:15) = [CoM_x;CoM_y;Cp_x;Cp_y;qo_i;obj.step_index];
                        if Tstep == 0.5
                            obj.result_y_step(1:end - 4*mid_in) =  sol_y.';
                        elseif Tstep == 0.4
                            obj.result_y_step(1:end - 4*(mid_in+1)) =  sol_y.';
                        elseif Tstep == 0.3
                            obj.result_y_step(1:end - 4*(mid_in+2)) =  sol_y.';
                        elseif Tstep == 0.2
                            obj.result_y_step(1:end - 4*(mid_in+3)) =  sol_y.';
                        else
                            obj.result_y_step(1:end - 4*(mid_in+4)) =  sol_y.';
                        end    
                        step1_cross = 0;
                        step2_cross = 0;
                        if mid_in == round(Tstep/0.1) - 1
                            mid_in_next = 0;
                            step_index_next = obj.step_index * -1;
                            Cp_x_next = Cp_x + obj.result_old(6*Nodes+1);
                            Cp_y_next = Cp_y + obj.result_old(6*Nodes+5);
                            CoM_x_next = obj.result_old(3:4,1);
                            CoM_y_next = obj.result_old(2*Nodes+3:2*Nodes+4,1);
                            Tstep_next = 0.4;
                            [qd_next,~,~] = Sim_FastAvoidanceV3(Tstep_next,Nodes,r_min,r_min2,cost_step,CoM_x_next,CoM_y_next,Cp_x_next,Cp_y_next,qo_i,state_des,step_index_next,...
                                Qx_sw,Qy_sw,cRx,cRy,cWx,cWy,mid_in_next,obj.result_old,obj.result_y_step,obj.result_y_old1,obj.result_y_old2,...
                                obj.result_y_old3,0,Obs_Info);
                            
                            % Right foot is in swing, plan a left swing
                            % step
                            if qd_next(6*Nodes+5) < 0
                                step1_cross = 1;
                            end
                            if qd_next(6*Nodes+6) > 0
                                step2_cross = 1;
                            end
                            obj.MPC_Info(1:2,1) = [step1_cross;step2_cross];
                        end
%                         foot_info(end) = mid_in;
                    end
                    n = traj_time - mid_in * 0.1;
                end
                obj.MPC_Info(3:4,1) = contact;
                MPC_Slack = obj.MPC_Info;
                
                g = 9.81;
                z0= .9;
                A = [0 1;g/z0 0];
                B = [0;-g/z0];
                des_traj = obj.result_old(1:6*Nodes+8,1);
                MPC_Data = [des_traj(1:68,1);Cp_x;Cp_y;des_traj(103 : 105,1);des_traj(107 : 109,1)];
                if standing == 1
                    temp1 = A * des_traj(1:2,1) + B * des_traj(4*Nodes+1);
                    temp2 = A * des_traj(3:4,1) + B * des_traj(4*Nodes+2);
                    acc_x1 = temp1(2);
                    acc_x2 = temp2(2);
                    temp1 = A * des_traj(2*Nodes+1:2*Nodes+2,1) + B * des_traj(5*Nodes+1);
                    temp2 = A * des_traj(2*Nodes+3:2*Nodes+4,1) + B * des_traj(5*Nodes+2);
                    acc_y1 = temp1(2);
                    acc_y2 = temp2(2);
                    acc_y1 = 0;
                    acc_y2 = 0;
                else
                    temp1 = A * des_traj(1:2,1) + B * des_traj(4*Nodes+1);
                    temp2 = A * des_traj(3:4,1) + B * des_traj(4*Nodes+2);
                    acc_x1 = temp1(2);
                    acc_x2 = temp2(2);
                    temp1 = A * des_traj(2*Nodes+1:2*Nodes+2,1) + B * des_traj(5*Nodes+1);
                    temp2 = A * des_traj(2*Nodes+3:2*Nodes+4,1) + B * des_traj(5*Nodes+2);
                    acc_y1 = temp1(2);
                    acc_y2 = temp2(2);
                end
                acc_des = [acc_x1;acc_x2;acc_y1;acc_y2];
                sc_Data = [zeros(42,1);des_traj(6*Nodes+1);des_traj(6*Nodes+5);des_traj(1:4,1);des_traj(2*Nodes+1:2*Nodes+4);acc_des];
            end
            
            
        end % stepImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states
        end % resetImpl
        
        function name = getInputNamesImpl(~)
            %GETINPUTNAMESIMPL Return input port names for System block
            name = '';
        end % getInputNamesImpl
        
        
        % PROPAGATES CLASS METHODS =================================================
        function [sz_1, sz_2,sz_3,sz_4,sz_5,sz_6,sz_7,sz_8, sz_9,sz_10] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports
            sz_1 = [3, 1];
            sz_2 = [3 1];
            sz_3 = [3 1];
            sz_4 = [2 1];
            sz_5 = [4 1];
            sz_6 = [1 1];
            sz_7 = [56 1];
            sz_8 = [15 1];
            sz_9 = [76 1];
            sz_10 = [1 1];
        end % getOutputSizeImpl
        
        function [dt_1, dt_2,dt_3,dt_4,dt_5,dt_6,dt_7,dt_8, dt_9,dt_10] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports
            dt_1 = 'double';
            dt_2 = 'double';
            dt_3 = 'double';
            dt_4 = 'double';
            dt_5 = 'double';
            dt_6 = 'double';
            dt_7 = 'double';
            dt_8 = 'double';
            dt_9 = 'double';
            dt_10 = 'double';
        end % getOutputDataTypeImpl
        
        function [cp_1, cp_2,cp_3,cp_4,cp_5,cp_6,cp_7,cp_8, cp_9,cp_10] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports
            cp_1 = false;
            cp_2 = false;
            cp_3 = false;
            cp_4 = false;
            cp_5 = false;
            cp_6 = false;
            cp_7 = false;
            cp_8 = false;
            cp_9 = false;
            cp_10 = false;
        end % isOutputComplexImpl
        
        function [flag_1, flag_2,flag_3,flag_4,flag_5,flag_6,flag_7,flag_8, flag_9,flag_10] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports
            flag_1 = true;
            flag_2 = true;
            flag_3 = true;
            flag_4 = true;
            flag_5 = true;
            flag_6 = true;
            flag_7 = true;
            flag_8 = true;
            flag_9 = true;
            flag_10 = true;
        end % isOutputFixedSizeImpl
    end % protected methods
end % classdef
