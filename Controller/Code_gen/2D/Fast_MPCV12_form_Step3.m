function [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV12_form_Step3(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info)
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
CP_x = states(5);
CP_y = states(6);

x_ref = states_ref(1:5,1);
y_ref = states_ref(6:10,1);

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
cWy = weights(9:10);

ftx = foot_info(1:3,1);
fty = foot_info(4:6,1);
d_foot = foot_info(7:8,1);

r1 = r_min.*ones(1,Nodes);
r2 = r_min2.*ones(1,Nodes);



% [Aeq,beq] = EqualityConstraints_LeftStartV4(CoM_x,CoM_y);
% [Aiq,biq] = InequalityConstraints_LeftStartV4(CoM_x, CoM_y, qo, r1, r2, ob_cost ,CP_x,CP_y,foot_dis);
% 
% % Develop The Objective Function Matrix and Vector
% [H,f] = ObjectiveFunction_LeftStart0V4(CP_x,CP_y,vel_des(1), vel_des(2),Qx,Qy,cRx,cRy,cWx,cWy);

if step_index == 1
    
    % Develop the Constraints Matrix and Vector
    [Aeq,beq] = EqFast_LeftStart3V12(CoM_x,CoM_y,CP_x,CP_y,ftx,fty);
    [Aiq,biq] = IqFast_LeftStart3V12(CoM_x, CoM_y, qo, r1, r2 ,CP_x,CP_y,ftx,fty,d_foot,Obs_Info);
    
    % Develop The Objective Function Matrix and Vector
    [H,f] = ObjFast_LeftStart3V12(CP_x,CP_y,x_ref, y_ref,Qx,Qy,cRx,cRy,cWx,cWy, ob_cost, ftx);
else
    % Develop the Constraints Matrix and Vector
    [Aeq,beq] = EqFast_RightStart3V12(CoM_x,CoM_y,CP_x,CP_y,ftx,fty);
    [Aiq,biq] = IqFast_RightStart3V12(CoM_x, CoM_y, qo, r1, r2, CP_x,CP_y,ftx,fty,d_foot,Obs_Info);
    
    % Develop The Objective Function Matrix and Vector
    [H,f] = ObjFast_RightStart3V12(CP_x,CP_y,x_ref, y_ref,Qx,Qy,cRx,cRy,cWx,cWy, ob_cost, ftx);
end
end

