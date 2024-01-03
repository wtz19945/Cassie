% OSC Block
% Copy Rights: Tianze Wang, tw19j@fsu.edu, Optimal Robotics Lab, Florida
% State University


classdef Adaptive_MPCStep_Control < ...
        matlab.System & ...
        matlab.system.mixin.Propagates %#codegen
    
    % PRIVATE PROPERTIES =========================================================
    properties (Access = public)
        is_sim
        is_IK
    end
    properties (Access = private)
        
        % Global time
        globalTime
        % Trajectory time
        trajectoryTime
        % Shutdown time
        shutdownTime
        % Test Motion
        BustAMoveTime
        % Filter Data
        FilterDataSize
        PrevVelError
        % Initial Heading
        Heading
        %
        tree
        % 
        x_old
        %
        pelpos
        %
        pelvel
        %
        swing_x_co_left 
        swing_x_co_right
        swing_y_co_left
        swing_y_co_right
        %
        y_offset
        x_offset
        z_offset
        head_offset
        pel_world_init
        QP_Out
        foot_init_x
        foot_init_y
        foot_cur_x
        foot_des_x
        foot_cur_y
        foot_des_y
        foot_offx_left
        foot_offy_left
        foot_offx_right
        foot_offy_right
        xp
        yp
        foot_pos_prev
        foot_vel_prev
        % Lock matrix
        G_lock
        M_lock
        Jfl_lock
        Jfr_lock
        Jfldt_lock
        Jfrdt_lock
    end % private properties
    
    % PROTECTED METHODS ==========================================================
    methods (Access = protected)
        % SYSTEM CLASS METHODS =====================================================
        function setupImpl(obj)
            %SETUPIMPL Initialize System objects
            % Initialize Input Variables
            obj.globalTime = 0;
            obj.trajectoryTime = 0;
            obj.BustAMoveTime = 0;
            obj.shutdownTime = 0;
            obj.Heading = 0;
            obj.tree = RigidBodyTreeSimulink(cassie_tree_str_withrod);
            obj.x_old = zeros(46,1);
            obj.pelpos = [0;0;1];
            obj.pelvel = zeros(3,1);
            obj.swing_x_co_left = zeros(6,1);
            obj.swing_x_co_right = zeros(6,1);
            obj.swing_y_co_left = zeros(6,1);
            obj.swing_y_co_right = zeros(6,1);
            obj.y_offset=0;
            obj.x_offset =0;
            obj.head_offset = 0;
            obj.z_offset = 0;
            obj.pel_world_init = zeros(3,1);
            obj.QP_Out = zeros(11,1);
            obj.foot_init_x = zeros(3,1);
            obj.foot_init_y = zeros(3,1);
            obj.foot_cur_x = zeros(3,1);
            obj.foot_des_x = zeros(3,1);
            obj.foot_cur_y = zeros(3,1);
            obj.foot_des_y = zeros(3,1);
            obj.foot_offx_left = 0;
            obj.foot_offy_left = 0;
            obj.foot_offx_right = 0;
            obj.foot_offy_right = 0;
            obj.xp = zeros(6,1);
            obj.yp = zeros(6,1);
            obj.foot_pos_prev = zeros(12,1);
            obj.foot_vel_prev = zeros(12,1);
        end % setupImpl
        
        function [userInputs, Data, Inertia, Jaco, contact_comd, acc_comd, other_info, states, MPC_Data] = stepImpl(obj, cassieOutputs,pos_vel_port,...
                pel_pos_traj,pel_vel_traj,pel_acc_traj,contact_traj,contact_switch,traj_time, gains, stepping_command, sec_QP_Data)
            %STEPIMPL System output and state update equations
            
            % Initialize the user input structure
            userInputs = CassieModule.getUserInStruct;
            % Initialize the ouput variables
            des_pelv_pos = zeros(3,1);
            pelv_pos = zeros(3,1);
            des_pelv_vel = zeros(3,1);
            pelv_vel = zeros(3,1);
            pel_vel = zeros(3,1);
            des_theta = zeros(3,1);
            theta = zeros(3,1);
            des_dtheta = zeros(3,1);
            dtheta = zeros(3,1);
            torque = zeros(10,1);
            pos = zeros(3,1);
            vel = zeros(3,1);
            qdot = zeros(10,1);
            force = zeros(12,1);
            q = zeros(10,1);
            transddot_cmd = zeros(3,1);
            rotddot_cmd = zeros(3,1);
            
            states = zeros(40,1);
            
            pos_feet = zeros(12,1);
            acc_feet = zeros(12,1);
            des_pelv_acc = zeros(3,1);
            des_pos_feet_output = zeros(12,1);
            es_pelv_vel = zeros(3,1);
            vel_feet = zeros(12,1);
            qj_l = zeros(2,1);
            qj_r = zeros(2,1);
            a = zeros(20,1);
            b = 0;
            new_Heading = 0;
            old = zeros(46,1);
            flag = 0;
            orig_pel_traj = zeros(3,1);
            
            des_task_acc = zeros(15,1);
            act_task_acc = zeros(15,1);
            desdd_feet = zeros(6,1);
            des_feet_pos = zeros(12,1);
            des_feet_vel = zeros(12,1);
            left_acc_feet = zeros(6,1);
            right_acc_feet = zeros(6,1);
            result = zeros(46,1);
            x_coeff = zeros(6,1);
            y_coeff = zeros(6,1);
            
            ekf_info = zeros(48,1);
            MPC_Data = zeros(13,1);
            % QP Information
            Inertia = zeros(20,20);
            Jaco = zeros(24,20);
            contact_comd = zeros(4,1);
            acc_comd= zeros(18,1);
            other_info = zeros(81,1);
            sec_QP = sec_QP_Data(43:56,1);
            MPC_ref = zeros(12,1);
            vel_feets = zeros(12,1);
            vel_feet = zeros(12,1);

            % Check if the robot is calibrated and fully operational
            if cassieOutputs.isCalibrated
                %% pre-configuration
                % Get local copies of common variables
                ch = cassieOutputs.pelvis.radio.channel;
                
                % Get system sample time
                dt = 0.0005;
                
                % Update global time (Time since cassie has been calibrated)
                obj.globalTime = obj.globalTime + dt;
                
                % Check radio STO switch
                if ch(RadioButtonMap.SA) == 1
                    % Update trajectory time
                    obj.trajectoryTime = obj.trajectoryTime + dt;
                else
                    % Reset time variables & speed
                    obj.trajectoryTime = 0;
                    obj.shutdownTime = 0;
                    obj.Heading = 0;
                end
                
                %% USER INPUTS
                % Standing Control
                % Define the desired pelvis angle [ThetaZ ThetaY ThetaX]
                des_theta = [0.0; 0; 0];
                des_dtheta = [0; 0; 0];
                
                % Get desired pelvis trajectory
                des_pelv_pos = pel_pos_traj + [.01;0;0];
                des_pelv_vel = pel_vel_traj;
                des_pelv_acc = pel_acc_traj;

                % Retrieve the motor and pelvis properties,
                q = CassieModule.getDriveProperty(cassieOutputs, 'position');  % Radians
                qdot = CassieModule.getDriveProperty(cassieOutputs, 'velocity'); % Radians/sec
                % in world frame
                PelvAngles = cassieOutputs.pelvis.vectorNav.orientation;
                % z-y-x convention euler, but in rx-ry-rz order, transform to rz-ry-rx order
                [R1,~,theta] = QuatConversion(PelvAngles);
                dtheta = cassieOutputs.pelvis.vectorNav.angularVelocity;
                acc = cassieOutputs.pelvis.vectorNav.linearAcceleration;
                sj = CassieModule.getJointProperty(cassieOutputs, 'position');  % Radians
                dsj = CassieModule.getJointProperty(cassieOutputs, 'velocity'); % Radians/sec  
                theta = theta(end:-1:1);

                
               % Transform -pi~pi to 0 - 2*pi
                if theta(1) < 0
                    theta(1) = theta(1) + 2*pi;
                end                
                % Set the Pelvis Initial Heading (Z Rotation)
                if obj.trajectoryTime < 0.01 && obj.trajectoryTime > 0
                    obj.Heading = theta(1);
                end
                
                % Test for 
%                 if obj.globalTime >= 6 
%                     if obj.z_offset >= -0.08
%                         obj.z_offset = obj.z_offset - 0.1 /3 * dt;
%                     end
%                 end
%                 
%                 if obj.globalTime >= 6
% %                     obj.head_offset = pi * min((obj.globalTime - 12)/16,1);
%                     if obj.globalTime <= 9
%                         obj.head_offset = obj.head_offset + pi / 16 * dt;
%                     elseif obj.globalTime <= 15
%                         obj.head_offset = obj.head_offset - pi / 16 * dt;
%                     elseif obj.globalTime <= 21
%                         obj.head_offset = obj.head_offset + pi / 16 * dt;
%                     elseif obj.globalTime <= 27
%                         obj.head_offset = obj.head_offset - pi / 16 * dt;
%                     else
%                         obj.head_offset = obj.head_offset;
%                     end
%                 end
                des_pelv_pos(3) = des_pelv_pos(3) + obj.z_offset;
                new_Heading = obj.Heading - obj.head_offset;
                
                if new_Heading <0
                    new_Heading = new_Heading + 2 *pi;
                end
                if new_Heading >2*pi
                    new_Heading = new_Heading - 2 *pi;
                end
                
                R = euler2rotMat(0, 0, new_Heading);
                theta(1) = Wrap_theta(theta(1),new_Heading);
                % Angular velocity transfer: velocity in the fixed frame to
                % the devirative of euler angle 
                dtheta = GenrateEulerDiffToOmega(theta) * dtheta;
                
                % Parse the state vector into its left/right components
                qm_l = q(1:5);
                qm_r = q(6:10);
                qj_l = [0; 13*pi/180 - qm_l(4)];
                qj_r = [0; 13*pi/180 - qm_r(4)];
                dqm_l = qdot(1:5);
                dqm_r = qdot(6:10);
                dqj_l = [0; - dqm_l(4)];
                dqj_r = [0; - dqm_r(4)];
                
                % Transform the robot state to the desired frame
                pel_pos = R' * pos_vel_port(1:3,1);
                pel_vel = R' * pos_vel_port(4:6,1);
                pelv_pos = pel_pos;
                pelv_vel = pel_vel;
                
                % Get Gains
                if contact_traj(1) == 1 && contact_traj(2) == 1
                    Kp = diag(gains(1:6,1));
                    Kd = diag(gains(7:12,1));
                else
                    Kp = diag(gains(25:30,1));
                    Kd = diag(gains(31:36,1));
                end
                    
                % Assemble state vector to get Kin/Dyn information
                base = [pel_pos;theta];
                ql = [qm_l(1:4,1);qj_l;qm_l(5)]; % no spring deflection ver
                qr = [qm_r(1:4,1);qj_r;qm_r(5)];
                dbase = [pel_vel;dtheta];
                dql = [dqm_l(1:4,1);dqj_l;dqm_l(5)];
                dqr = [dqm_r(1:4,1);dqj_r;dqm_r(5)];
                states = [base;dbase;ql;qr;dql;dqr];
                qls = [qm_l(1:4,1);sj(1:2);qm_l(5)]; % spring deflection ver
                qrs = [qm_r(1:4,1);sj(4:5);qm_r(5)];
                dqls = [dqm_l(1:4,1);dsj(1:2);dqm_l(5)];
                dqrs = [dqm_r(1:4,1);dsj(4:5);dqm_r(5)];

                % Equation of motion
                qnew = [ql(1:6);ql(7);ql(7);qr(1:6);qr(7);qr(7)];
                dqnew = [dql(1:6);dql(7);dql(7);dqr(1:6);dqr(7);dqr(7)];
                qnews = [qls(1:6);qls(7);qls(7);qrs(1:6);qrs(7);qrs(7)];
                dqnews = [dqls(1:6);dqls(7);dqls(7);dqrs(1:6);dqrs(7);dqrs(7)];
                obj.tree.setTreeStateFromVector([base;qnew], [dbase;dqnew]);
                g = [0;0;0;0;0;9.806];
                [H,C] = obj.tree.getHandC(0,g);
                [newH,G] = compressHandC(H,C,0);
                M_f = diag([61 61 365 365 0 0 4.9].*[25 25 16 16 0 0 50].^2)/1000^2;
                M = blkdiag(zeros(6,6),M_f,M_f) + newH; % % Add reflected rotor inertias
                
                B = getTorqueSelectionMat; % Torque input matrix
                
                % Kinematics information
                [pos_lt,pos_rt,pos_lh,pos_rh,toejaco_left,toejaco_right,heeljaco_left,heeljaco_right] = GeneratedFootKinematics(base,qls,qrs);
%                 [toejaco_left,toejaco_right] = GeneratedToeContactPointJaco(base,qls,qrs);
%                 [heeljaco_left,heeljaco_right] = GeneratedHeelContactPointJaco(base,qls,qrs);
                dt = 1e-7;
                [toejaco_leftdt,toejaco_rightdt,heeljaco_leftdt,heeljaco_rightdt] = GeneratedFootJacobian(base + dt*dbase,qls + dt*dqls,qrs + dt*dqrs);
%                 [toejaco_leftdt,toejaco_rightdt] = GeneratedToeContactPointJaco(base + dt*dbase,qls + dt*dqls,qrs + dt*dqrs);
%                 [heeljaco_leftdt,heeljaco_rightdt] = GeneratedHeelContactPointJaco(base + dt*dbase,qls + dt*dqls,qrs + dt*dqrs);
%                 
                Jfl = [toejaco_left;heeljaco_left];
                Jfr = [toejaco_right;heeljaco_right];
                Jfldt = [toejaco_leftdt;heeljaco_leftdt];
                Jfrdt = [toejaco_rightdt;heeljaco_rightdt];
                Jfldot = (Jfldt - Jfl) / dt;
                Jfrdot = (Jfrdt - Jfr) / dt;
                
                A = [eye(6) zeros(6,14)]; % Pelvis task space jacobian
                qs = [base;qls;qrs];
                dq = [dbase;dql;dqr]; % Compute foot position
                dqs = [dbase;dqls;dqrs]; % Compute foot position
                vel_feet(1:6,1) = Jfl * dq;
                vel_feet(7:12,1) = Jfr * dq;
                
                vel_feets(1:6,1) = Jfl * dqs;
                vel_feets(7:12,1) = Jfr * dqs;
                
                p = 0.0;
                pos_lt = p*obj.foot_pos_prev(1:3,1) + (1-p)*pos_lt;
                pos_lh = p*obj.foot_pos_prev(4:6,1) + (1-p)*pos_lh;
                pos_rt = p*obj.foot_pos_prev(7:9,1) + (1-p)*pos_rt; 
                pos_rh = p*obj.foot_pos_prev(10:12,1) + (1-p)*pos_rh;
                obj.foot_pos_prev = [pos_lt;pos_lh;pos_rt;pos_rh];
                
                p2 = 0.0;
                vel_feet = p2*obj.foot_vel_prev  + (1-p2)*vel_feet;
                obj.foot_vel_prev = vel_feet;
                % get the position info of feet
%                 [pos_lh,pos_rh] = GeneratedHeelContactPoint(base,qls,qrs);
%                 [pos_lt,pos_rt] = GeneratedToeContactPoint(base,qls,qrs);
                % Get desired acceleration, assume zero desired velocity
                if obj.trajectoryTime <= 0.1 && obj.is_sim == 0
                    obj.pel_world_init = pel_pos;
                end
                pel_pos(1:2,1) = pel_pos(1:2,1) - obj.pel_world_init(1:2,1);

                
                Kp_feet = diag(gains(13:18,1)); % get Foot PD gains
                Kd_feet = diag(gains(19:24,1));
                pos_feet = [pos_lt;pos_lh;pos_rt;pos_rh];
                contact = contact_traj;
                des_pos_feet_output = [0.08;0.145;-0.08;-0.08;0.145;-0.08;0.08;-0.145;-0.08;-0.08;-0.145;-0.08];
                contact_lam = contact; % soft contact switch
                step_time = stepping_command(2);
                step_height = stepping_command(3);
                % TODO: Add soft switch to the controller
                

                
                ramp_time = 0.00;
                if contact(1) == 0
                    if traj_time >= step_time - ramp_time
                        % step down part, ramp down
                        contact_lam(1) = min((traj_time - step_time + ramp_time)/ramp_time,1);
                    elseif traj_time <= ramp_time
                        % step up part
                        contact_lam(1) = 1 - min((traj_time/ramp_time),1);
                    else
                        % normal stepping
                        contact_lam(1) = 0;
                    end
                end
                if contact(2) == 0
                    if traj_time >= step_time - ramp_time
                        % step down part
                        contact_lam(2) = min((traj_time - step_time + ramp_time)/ramp_time,1);
                    elseif traj_time <= ramp_time
                        % step up part
                        contact_lam(2) = 1 - min((traj_time/ramp_time),1);
                    else
                        contact_lam(2) = 0;
                    end
                end

%                 K_cpx = -0.0;
%                 K_cpdx = 0.0 * sqrt(1/9.81); 
%                 cp_x  = gains(37);
%                 cp_dx = gains(38);
%                 cp_y = gains(39);
%                 cp_dy = gains(40);
%                 Step_frac = 0.95;
%                 x_trim = -0.04;
%                 y_trim = 0.00;
%                 Ttarx = .04;
%                 Ttary = .02;
%                 y_e = -.05*(des_pelv_pos(2) - pel_pos(2));
%                 dy_e = -.0*(des_pelv_vel(2) - pel_vel(2));   


                
                vel_des = [.0;0];
                
                CoM_x = [pel_pos(1);pel_vel(1)];
                CoM_y = [pel_pos(2);pel_vel(2)];
                vel_lt = vel_feet(1:3,1);
                vel_lh = vel_feet(4:6,1);
                vel_rt = vel_feet(7:9,1);
                vel_rh = vel_feet(10:12,1);
                Tstep = step_time;
                
                des_foot = zeros(11,1);
                lam = 1;
                % Generate MPC Info (Data out, fitting trajectory, replace MPC_ref)
                if contact(1) == 0
                    Cp_x = (pos_rh(1) + pos_rt(1))/2;
                    Cp_y = (pos_rh(2) + pos_rt(2))/2;
                    % Update the trajectory every 0.1s
                    mid_in = floor(traj_time/0.1);
                    if mod(traj_time,0.1) <= 5e-4 && traj_time <=0.39
                        obj.QP_Out = [lam*CoM_x + (1-lam)*obj.QP_Out(1);lam*CoM_y  + (1-lam)*obj.QP_Out(2);Cp_x;Cp_y;...
                            vel_des;contact;floor(traj_time/0.1)];
                        % fitting spline
                        footx_vel = (vel_lt(1) + vel_lh(1))/2;
                        footy_vel = (vel_lt(2) + vel_lh(2))/2;
%                         footx_vel = 0;
                        footy_vel = 0;
                        %                         foot_info(end) = mid_in;
                        obj.foot_cur_x = [(pos_lt(1) + pos_lh(1))/2;footx_vel;0];
                        obj.foot_des_x = [Cp_x,0,0];
                        obj.foot_cur_y = [(pos_lt(2) + pos_lh(2))/2;footy_vel;0];
                        obj.foot_des_y = [Cp_y,0,0];
                        
                        if floor(traj_time/0.1) == 0
                            obj.foot_init_y = obj.foot_cur_y;
                        end
                    end
                    % get foot change
                    obj.foot_offx_left = sec_QP(1);
                    obj.foot_offy_left = sec_QP(2);

                    y_pos_goal = obj.foot_des_y + [obj.foot_offy_left, 0, 0];
%                     y_pos_goal = max(y_pos_goal,CoM_y(1) + 0.0); % avoid cross-step
                    
                    obj.xp = quintic_fitting(obj.foot_cur_x,obj.foot_des_x + [obj.foot_offx_left, 0, 0],Tstep - 0.1 * mid_in);
                    obj.yp = quintic_fitting(obj.foot_cur_y,y_pos_goal,Tstep - 0.1 * mid_in);

                    n = traj_time - mid_in * 0.1;
                    nt = Tstep - 0.1 * mid_in;
                    x_des = obj.xp'*[1;n;n^2;n^3;n^4;n^5];
                    dx_des = obj.xp(2:end)'*[1;2*n;3*n^2;4*n^3;5*n^4];
                    ddx_des = obj.xp(3:end)'*[2;6*n;12*n^2;20*n^3];
                    y_des = obj.yp'*[1;n;n^2;n^3;n^4;n^5];
                    dy_des = obj.yp(2:end)'*[1;2*n;3*n^2;4*n^3;5*n^4];
                    ddy_des = obj.yp(3:end)'*[2;6*n;12*n^2;20*n^3];
                    
                    des_foot = [x_des;dx_des;ddx_des;y_des;dy_des;ddy_des;contact;(pos_lh(1) + pos_lt(1))/2;(pos_lh(2) + pos_lt(2))/2;0];

                end
                
                if contact(2) == 0
                    Cp_x = (pos_lh(1) + pos_lt(1))/2;
                    Cp_y = (pos_lh(2) + pos_lt(2))/2;
                    mid_in = floor(traj_time/0.1);
                    if mod(traj_time,0.1) <= 5e-4 && traj_time <=0.39
                        obj.QP_Out = [lam*CoM_x + (1-lam)*obj.QP_Out(1);lam*CoM_y  + (1-lam)*obj.QP_Out(2);Cp_x;Cp_y;...
                            vel_des;contact;floor(traj_time/0.1)];

                        % fitting spline
                        footx_vel = (vel_rt(1) + vel_rh(1))/2;
                        footy_vel = (vel_rt(2) + vel_rh(2))/2;
%                         footx_vel = 0;
                        footy_vel = 0;
                        %                         foot_info(end) = mid_in;
                        obj.foot_cur_x = [(pos_rt(1) + pos_rh(1))/2;footx_vel;0];
                        obj.foot_des_x = [Cp_x,0,0];
                        obj.foot_cur_y = [(pos_rt(2) + pos_rh(2))/2;footy_vel;0];
                        obj.foot_des_y = [Cp_y,0,0];
                        
                        if floor(traj_time/0.1) == 0
                            obj.foot_init_y = obj.foot_cur_y;
                        end
                    end
                    % get foot change
                    obj.foot_offx_right  = sec_QP(1);
                    obj.foot_offy_right  = sec_QP(2);

                    y_pos_goal = obj.foot_des_y + [obj.foot_offy_right, 0, 0];
%                     y_pos_goal = min(y_pos_goal,CoM_y(1) - 0.0); % avoid cross-step
                    
                    obj.xp = quintic_fitting(obj.foot_cur_x,obj.foot_des_x + [obj.foot_offx_right, 0, 0],Tstep - 0.1 * mid_in);
                    obj.yp = quintic_fitting(obj.foot_cur_y,y_pos_goal,Tstep - 0.1 * mid_in);
                       
                    n = traj_time - mid_in * 0.1;
                    nt = Tstep - 0.1 * mid_in;
                    x_des = obj.xp'*[1;n;n^2;n^3;n^4;n^5];
                    dx_des = obj.xp(2:end)'*[1;2*n;3*n^2;4*n^3;5*n^4];
                    ddx_des = obj.xp(3:end)'*[2;6*n;12*n^2;20*n^3];
                    y_des = obj.yp'*[1;n;n^2;n^3;n^4;n^5];
                    dy_des = obj.yp(2:end)'*[1;2*n;3*n^2;4*n^3;5*n^4];
                    ddy_des = obj.yp(3:end)'*[2;6*n;12*n^2;20*n^3];

                    
                    des_foot = [x_des;dx_des;ddx_des;y_des;dy_des;ddy_des;contact;(pos_lh(1) + pos_lt(1))/2;(pos_lh(2) + pos_lt(2))/2;0];
                end
                
                % Data for MPC
                MPC_Data(1:11,1) = obj.QP_Out;
                if obj.globalTime >= 5
                    MPC_Data(12:13) = [obj.QP_Out(1) + .5;obj.QP_Out(3)+ .0];
                else
                    MPC_Data(12:13) = [-5;-5];
                end
                % Data for tracking
                n = traj_time;
                N = floor(traj_time/0.1);
                lambda = (n - N * 0.1)/0.0005;
%                 acc_x = (1 - lambda/200) * sec_QP(11) + lambda/200 * sec_QP(12);
                MPC_ref(1:2,1) = [(1 - lambda/200) * sec_QP(3) + lambda/200 * sec_QP(5); (1 - lambda/200) * sec_QP(7) + lambda/200 * sec_QP(9)];
                MPC_ref(4:5,1) = [(1 - lambda/200) * sec_QP(4) + lambda/200 * sec_QP(6); (1 - lambda/200) * sec_QP(8) + lambda/200 * sec_QP(10)];
                MPC_ref(7:12) = des_foot(1:6,1);
                
                x_trim = .01;
                MPC_ref(1) = MPC_ref(1) + x_trim;
                % Interpret Trajectory and Compute Desired Accleration
                


                if obj.globalTime >= 4 * step_time - 0.3 && obj.globalTime <= 4 *step_time
                        MPC_ref(2) = (obj.globalTime - 4 *step_time + 0.3) * -.2;
                        MPC_ref(5) = -.2;
                end
                des_pelv_pos(1:2) = MPC_ref(1:2,1) + [0.00;0];
                des_pelv_vel(1:2) = MPC_ref(4:5,1);
                
                des_pelv_acc(1) = (1 - lambda/200) * sec_QP(11) + lambda/200 * sec_QP(12);
                des_pelv_acc(2) = (1 - lambda/200) * sec_QP(13) + lambda/200 * sec_QP(14);
                
                if obj.globalTime <= 4 * step_time - 0.3
                    des_pelv_pos = [.03;0;0.9];
                    des_pelv_vel = zeros(3,1);
                    des_pelv_acc = zeros(3,1);
                end
                des_pelv_pos(3) = 0.9; 
                des_pelv_vel(3) = 0;
                des_pelv_acc(3) = 0;
%                     des_pelv_acc(1) = acc_x;
%                 if obj.globalTime >= 8
%                     des_pelv_pos(3) = des_pelv_pos(3) - min((obj.globalTime - 8) /2 * 0.15, 0.15);
%                 end
                transddot_cmd = -Kp(1:3,1:3) * (pel_pos - des_pelv_pos) - Kd(1:3,1:3) * (pel_vel - des_pelv_vel) + des_pelv_acc;
                rotddot_cmd   = -Kp(4:6,4:6) * (theta - des_theta) - Kd(4:6,4:6) * (dtheta - des_dtheta); % 
                
                foot_x_off = 0.00;
                % MPC Tune
                if contact(1) == 1
                    left_acc_feet = zeros(6,1);
                else
                    [a,b] = traj_generate_walking(5,step_height,step_time,-.06,-0.5);
                    n = traj_time;
                    des_x = MPC_ref(7) + foot_x_off;
                    des_dx = MPC_ref(8);
                    des_ddx = MPC_ref(9);
                    des_y = MPC_ref(10);
                    des_dy = MPC_ref(11);
                    des_ddy = MPC_ref(12);
                    
                    if n<= step_time/2
                        des_z = a'*[1;n;n^2;n^3;n^4;n^5];
                        des_dz = a(2:end)'*[1;2*n;3*n^2;4*n^3;5*n^4];
                        des_ddz = a(3:end)'*[2;6*n;12*n^2;20*n^3];
                    elseif n<= step_time
                        cn = n - step_time/2;
                        des_z = b'*[1;cn;cn^2;cn^3;cn^4;cn^5];
                        des_dz = b(2:end)'*[1;2*cn;3*cn^2;4*cn^3;5*cn^4];
                        des_ddz = b(3:end)'*[2;6*cn;12*cn^2;20*cn^3];
                    else
                        des_z = -0.08;
                        des_dz = 0;
                        des_ddz = 0;
                    end
                    
                    des_pos_feet = [des_x+0.08;des_y;des_z;des_x-0.08;des_y;des_z];
                    des_vel_feet = [des_dx;des_dy;des_dz;des_dx;des_dy;des_dz];
                    desdd_feet = [des_ddx;des_ddy;des_ddz;des_ddx;des_ddy;des_ddz];
                    left_acc_feet2 = desdd_feet-Kp_feet * (pos_feet(1:6,1) - des_pos_feet) - Kd_feet * (vel_feet(1:6,1)  - des_vel_feet);
                    left_acc_feet(1) = left_acc_feet2(1);
                    left_acc_feet(4) = left_acc_feet2(4);
                    left_acc_feet(1:3) = left_acc_feet2(1:3);
                    left_acc_feet(4:6) = left_acc_feet2(4:6);
                    
                end
                
                if contact(2) == 1
                    right_acc_feet = zeros(6,1);
                else
                    [a,b] = traj_generate_walking(5,step_height,step_time,-.06,-0.5);
                    n = traj_time;
                    des_x = MPC_ref(7) + foot_x_off;
                    des_dx = MPC_ref(8);
                    des_ddx = MPC_ref(9);
                    des_y = MPC_ref(10);
                    des_dy = MPC_ref(11);
                    des_ddy = MPC_ref(12);
                    
                    if n<= step_time/2
                        des_z = a'*[1;n;n^2;n^3;n^4;n^5];
                        des_dz = a(2:end)'*[1;2*n;3*n^2;4*n^3;5*n^4];
                        des_ddz = a(3:end)'*[2;6*n;12*n^2;20*n^3];
                    elseif n<= step_time
                        cn = n - step_time/2;
                        des_z = b'*[1;cn;cn^2;cn^3;cn^4;cn^5];
                        des_dz = b(2:end)'*[1;2*cn;3*cn^2;4*cn^3;5*cn^4];
                        des_ddz = b(3:end)'*[2;6*cn;12*cn^2;20*cn^3];
                    else
                        des_z = -0.08;
                        des_dz = 0;
                        des_ddz = 0;
                    end
                    
                    des_pos_feet = [des_x+0.08;des_y;des_z;des_x-0.08;des_y;des_z];
                    des_vel_feet = [des_dx;des_dy;des_dz;des_dx;des_dy;des_dz];
                    desdd_feet = [des_ddx;des_ddy;des_ddz;des_ddx;des_ddy;des_ddz];
                    right_acc_feet2 = desdd_feet-Kp_feet * (pos_feet(7:12,1) - des_pos_feet) - Kd_feet * (vel_feet(7:12,1)  - des_vel_feet);
                    right_acc_feet(1) = right_acc_feet2(1);
                    right_acc_feet(4) = right_acc_feet2(4);
                    right_acc_feet(1:3) = right_acc_feet2(1:3);
                    right_acc_feet(4:6) = right_acc_feet2(4:6);
                    
                end
                
                acc_feet = [left_acc_feet;right_acc_feet];
                torque_lb = 1 * [-4.5;-4.5;-12.2;-12.2;-0.9;-4.5;-4.5;-12.2;-12.2;-0.9] .* [25;25;16;16;50;25;25;16;16;50];
                torque_ub = 1 * [4.5;4.5;12.2;12.2;0.9;4.5;4.5;12.2;12.2;0.9] .* [25;25;16;16;50;25;25;16;16;50];
                
%                 if contact(2) == 0 && contact(1) == 1
%                     if traj_time < .1
%                         torque_lb(5) = 0 + torque_lb(5) * min(traj_time/.1,1);
%                         torque_ub(5) = 0 + torque_ub(5) * min(traj_time/.1,1);
%                         torque_lb(5) = 0 ;
%                         torque_ub(5) = 0 ;
%                         
%                     end
%                 end
%                 if contact(2) == 1 && contact(1) == 0
%                     if traj_time < .1
%                         torque_lb(10) = 0 + torque_lb(10) * min(traj_time/.1,1);
%                         torque_ub(10) = 0 + torque_ub(10) * min(traj_time/.1,1);
%                         torque_lb(10) = 0 ;
%                         torque_ub(10) = 0 ;
%                     end
%                 end
                % Try a fixed bound for knee joint
%                 if contact(1) == 1 && contact(2) == 0
%                     if traj_time <= 0.08
%                         torque_lb(4) = 70;
%                     end
%                 end
%                 if contact(2) == 1 && contact(1) == 0
%                     if traj_time <= 0.08
%                         torque_lb(9) = 70;
%                     end
%                 end
%                 
%                 if obj.is_IK == 1
%                     joint_P = [[180; 200; 200; 200];10];
%                     joint_D = [.3 * [10; 10; 20; 20];2];
%                     if contact(1) == 0
%                         % left foot in swing, compute torque based on PD IK
%                         Jc_toel = [toejaco_left(:,7:9) toejaco_left(:,10) - toejaco_left(:,12) toejaco_left(:,13)];
%                         Jc_heell = [heeljaco_left(:,7:9) heeljaco_left(:,10) - heeljaco_left(:,12) heeljaco_left(:,13)];
%                         Jc = [Jc_toel;Jc_heell];
%                         error = des_feet_pos(1:6,1) - [pos_lt;pos_lh];
%                         step = Jc \ error;
%                         ql_des = [qm_l(1:4,1); qm_l(5)] + step;
%                         torque_l = joint_P.* (ql_des - qm_l) + joint_D.* (zeros(5,1) - dqm_l);
%                         % check torque limit
%                         torque_lb(1:5,1) = max(min(torque_l,torque_ub(1:5,1)),torque_lb(1:5,1));
%                         torque_ub(1:5,1) = max(min(torque_l,torque_ub(1:5,1)),torque_lb(1:5,1));
%                     end
%                     if contact(2) == 0
%                         % right foot in swing, compute torque based on PD IK
%                         Jc_toer = [toejaco_right(:,14:16) toejaco_right(:,17) - toejaco_right(:,19) toejaco_right(:,20)];
%                         Jc_heelr = [heeljaco_right(:,14:16) heeljaco_right(:,17) - heeljaco_right(:,19) heeljaco_right(:,20)];
%                         Jc = [Jc_toer;Jc_heelr];
%                         error = des_feet_pos(7:12,1) - [pos_rt;pos_rh];
%                         step = Jc \ error;
%                         qr_des = [qm_r(1:4,1); qm_r(5)] + step;
%                         torque_r = joint_P.* (qr_des - qm_r) + joint_D.* (zeros(5,1) - dqm_r);
%                         % check torque limit
%                         torque_lb(6:10,1) = max(min(torque_r,torque_ub(6:10,1)),torque_lb(6:10,1));
%                         torque_ub(6:10,1) = max(min(torque_r,torque_ub(6:10,1)),torque_lb(6:10,1));
%                     end
%                 end
                % solve optimization problem
                Inertia = M;
                Jaco = [Jfl;Jfr;Jfldot;Jfrdot];
                contact_comd = [contact;contact_lam];
                acc_comd = [[transddot_cmd;rotddot_cmd];acc_feet];
                other_info = [G;dqs;torque_lb;torque_ub;traj_time;qs];
                
%                 [result,flag] = OSC_qp_controller_walking(M,G,B,Jfl,Jfr,Js,A,Adot,[transddot_cmd;rotddot_cmd],dq,Jfldot,Jfrdot,obj.x_old,acc_feet,contact,contact_lam);
% 
%                 % if previous solution is valid, save that for warm-start
%                 if flag == 1
%                     obj.x_old = result;
%                 end
                % Using the Jacobian and Desired forces to find motor torques
%                 left_torque = result(21:25);
%                 right_torque = result(26:30);
                left_torque = zeros(5,1);
                right_torque = zeros(5,1);
                torque = [left_torque; right_torque];
                force = result(31:42);
               
                ddq = result(1:20);
                userInputs.torque = [left_torque; right_torque];
                %         torques = [left_torque(1), right_torque(1); Left_Force(6), Right_Force(6)]
                des_task_acc = [transddot_cmd;acc_feet];
                act_task_acc = [A(1:3,:)*result(1:20);[Jfl;Jfr]*result(1:20) + [Jfldot;Jfrdot]*[dbase;dql;dqr]];
                
                % Ramp up/Shut down Desired Torques over 5 seconds
                if ch(RadioButtonMap.SF) ~= 0 && obj.trajectoryTime < 15
                    userInputs.torque = (obj.trajectoryTime/15).*userInputs.torque;
                elseif ch(RadioButtonMap.SH) < 0 && obj.shutdownTime < 1.5
                    obj.shutdownTime = obj.shutdownTime + dt;
                    userInputs.torque = userInputs.torque - (obj.shutdownTime/1.5).*userInputs.torque;
                elseif obj.shutdownTime >= 1.5
                    obj.shutdownTime = obj.shutdownTime + dt;
                    userInputs.torque = zeros(10,1);
                end
                
                
            end % if
            %Data = [des_feet_pos;pos_feet;pelv_pos;pelv_vel;des_pelv_pos;des_pelv_vel;des_theta; theta; des_dtheta; dtheta; acc_comd;des_feet_vel;vel_feet;new_Heading;obj.Heading;theta(1)];
            Data = [pelv_vel;pel_vel;vel_feets;vel_feet];
            
            %       Data = [q; userInputs.torque; PelvAngles]; % used for Cassie Sim
            %Data = [des_pelv_pos; pelv_pos; des_pelv_vel; pelv_vel; des_theta; theta; des_dtheta; dtheta];
            %Data = [data;force_actual;force_pred;dtheta];
        end % stepImpl
        
        function resetImpl(~)
            %RESETIMPL Reset System object states
        end % resetImpl
        
        
        
        % PROPAGATES CLASS METHODS =================================================
        function [sz_1, sz_2,sz_3, sz_4,sz_5, sz_6,sz_7, sz_8, sz_9] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports
            sz_1 = [1, 1];
            sz_2 = [30, 1];
            sz_3 = [20, 20];
            sz_4 = [24, 20];
            sz_5 = [4, 1];
            sz_6 = [18, 1];
            sz_7 = [81, 1];
            sz_8 = [40, 1];
            sz_9 = [13, 1];
        end % getOutputSizeImpl
        
        function [dt_1,dt_2,dt_3,dt_4,dt_5,dt_6,dt_7,dt_8, dt_9] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports
            dt_1 = 'CassieUserInBus';
            dt_2 = 'double';
            dt_3 = 'double';
            dt_4 = 'double';
            dt_5 = 'double';
            dt_6 = 'double';
            dt_7 = 'double';
            dt_8 = 'double';
            dt_9 = 'double';
        end % getOutputDataTypeImpl
        
        function [cp_1, cp_2, cp_3, cp_4, cp_5, cp_6, cp_7, cp_8, cp_9] = isOutputComplexImpl(~)
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
        end % isOutputComplexImpl
        
        function [flag_1, flag_2, flag_3, flag_4, flag_5, flag_6, flag_7,flag_8, flag_9] = isOutputFixedSizeImpl(~)
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
        end % isOutputFixedSizeImpl
    end % protected methods
end % classdef

