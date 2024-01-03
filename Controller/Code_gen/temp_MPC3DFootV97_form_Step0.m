function [Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV97_form_Step0(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info)
%TEMP_MPC_FORM Summary of this function goes here
%   Detailed explanation goes here
%   This function formulates all the matrices for MPC QP

%   states: current robot states, include CoM states and foot placement
%   Nodes: Number of nodes in MPC prediction
%   r: radius for obstacle avoidance
%   qo: obstacle states
%   states_ref: desired robot states
%   MPC_index : left/right step index, contact sequence index
%   weights   : weight in the MPC cost function

% unpack inputs
CoM_x = states(1:2,1);
CoM_y = states(3:4,1);
CoM_z = states(7:8,1);
CP_x = states(5);
CP_y = states(6);

x_ref = states_ref(1:2,1);
y_ref = states_ref(3:4,1);
z_ref = states_ref(5:6,1);

x_ref = states_ref(1:2,1);
y_ref = states_ref(3:4,1);
z_ref = states_ref(5:6,1);
zh = states_ref(7,1);
x_traj = states_ref(8:24,1)';
y_traj = states_ref(25:41,1)';
z_traj = states_ref(42:58,1)';

r_min  = r(1);
r_min2 = r(2);

step_index = MPC_index(1);
con_index  = MPC_index(2);

ob_cost = weights(1);
Qx = weights(2:3);
Qy = weights(4:5);
cRx = weights(6);
cRy = weights(7);
cWx = weights(8);
cWy = weights(9);
Qz = weights(10:11);
cRz = weights(12);
p2 = weights(13:16);

ftx = foot_info(1:3,1);
fty = foot_info(4:6,1);
d_foot = foot_info(7:8,1);

r1 = [r_min.*ones(1,Nodes);r(3)*ones(1,Nodes)];
r2 = [r_min2.*ones(1,Nodes);r(4)*ones(1,Nodes)];


foot_ic = foot_obs_info(1:7,1);
fobs_ic = foot_obs_info(8:22,1);
step_height = foot_obs_info(23);

x_foot_traj = linspace(foot_ic(4),foot_ic(6),5).';
if step_index == 1
    y_foot_traj = linspace(foot_ic(5),foot_ic(7),5).';
else
    y_foot_traj = linspace(foot_ic(5),foot_ic(7),5).';
end

z_foot_traj = [0;step_height/2;step_height;step_height/2;0];

eq_in = [CP_x;CP_y;foot_ic];
iq_in = [fobs_ic;x_foot_traj;y_foot_traj;z_foot_traj];
obj_in = [p2;x_foot_traj;y_foot_traj;z_foot_traj;foot_ic];


% [Aeq,beq] = EqualityConstraints_LeftStartV4(CoM_x,CoM_y);
% [Aiq,biq] = InequalityConstraints_LeftStartV4(CoM_x, CoM_y, qo, r1, r2, ob_cost ,CP_x,CP_y,foot_dis);
% 
% % Develop The Objective Function Matrix and Vector
% [H,f] = ObjectiveFunction_LeftStart0V4(CP_x,CP_y,vel_des(1), vel_des(2),Qx,Qy,cRx,cRy,cWx,cWy);

if step_index == 1
    % Develop the Constraints Matrix and Vector
    [Aeq,beq] = Eq_LeftStart03DFootV97(CoM_x,CoM_y, CoM_z, zh,fty, eq_in);
    [Aiq,biq] = Iq_LeftStart03DFootV97(CoM_x, CoM_y,CoM_z,x_traj,y_traj,z_traj, qo, r1, r2 ,CP_x,CP_y,ftx,fty,d_foot, iq_in);
    
    % Develop The Objective Function Matrix and Vector
    [H,f] = Obj_LeftStart03DFootV97(CP_x,CP_y,x_ref, y_ref,z_ref, Qx,Qy,Qz,cRx,cRy,cRz,cWx,cWy, ob_cost, ftx, obj_in);
else
    % Develop the Constraints Matrix and Vector
    [Aeq,beq] = Eq_RightStart03DFootV97(CoM_x,CoM_y, CoM_z, zh,fty, eq_in);
    [Aiq,biq] = Iq_RightStart03DFootV97(CoM_x, CoM_y, CoM_z,x_traj,y_traj,z_traj, qo, r1, r2, CP_x,CP_y,ftx,fty,d_foot, iq_in);
    
    % Develop The Objective Function Matrix and Vector
    [H,f] = Obj_RightStart03DFootV97(CP_x,CP_y,x_ref, y_ref,z_ref,Qx,Qy,Qz,cRx,cRy,cRz,cWx,cWy,ob_cost, ftx, obj_in);
end


end

