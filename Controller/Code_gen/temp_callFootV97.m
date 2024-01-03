Tstep = 0.4; % step time is 0.5, fixed for now
dt = 0.1; % MPC sample Time, 
Npred = 4; % Number of steps
Nodes = Npred * Tstep / dt + 1;

CoM_x = [0;0.0];
CoM_y = [0;-0.0];
CoM_z = [.9;0];
CP_y = -0.10;
CP_x = -0.05;

cost = 1;
r1 = 0.1;
r2 = 0.2;
r3 = 0.1;
r4 = 0.2;
qo = [1;0.1;1];

states = [CoM_x;CoM_y;CP_x;CP_y;CoM_z];
r = [r1;r2;r3;r4];

MPC_index = [0;0];
states_ref = [0.0;0.3;0;0;0.9;0;0.9;CoM_x(1)*ones(17,1);CoM_y(1)*ones(17,1);CoM_z(1)*ones(17,1)];
weights = [cost;0;2500;0;2500;10000;10000;1800;5800;500;1;10;50000;10000;10000;100000];

vel_des = [.0;0];
ftx = [0;0;Tstep * states_ref(2)];
fty = [0;.1;0.14];

foot_ic = [-.0;0.14;0;-.0;.14;CP_x + Tstep * states_ref(2);0.15];
fobs_ic = repmat([1.05;0.075;0],5,1);
foot_obs_info = [foot_ic;fobs_ic;0.1];

foot_info = [ftx;fty;.8;.3];
[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV97_form_Step0(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV97_form_Step1(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV97_form_Step2(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV97_form_Step3(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])


[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV94_form_Step0_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV94_form_Step1_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV94_form_Step2_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = temp_MPC3DFootV94_form_Step3_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,foot_obs_info);
size([Aeq;Aiq])

%%
prob = osqp;
setup(prob,H, f, [Aiq;Aeq], [-inf*ones(size(Aiq,1),1);beq], [biq;beq])
[design_vector,flag,dual] = prob.solve();

close all
x = design_vector(1:2:32);
dx = design_vector(2:2:32);

y = design_vector(35:2:66);
dy = design_vector(36:2:66);

z = design_vector(69:2:100);
dz = design_vector(70:2:100);

actual_foot_x = [CP_x;CP_x + cumsum(design_vector(154:156))];
actual_foot_y = [CP_y;CP_y + cumsum(design_vector(158:160))];

swing_foot_x = design_vector(204:208);
swing_foot_y = design_vector(209:213);
swing_foot_z = design_vector(214:218);
figure

plot(x,y,'LineWidth',2)
hold on
plot(actual_foot_x,actual_foot_y)
plot(swing_foot_x,swing_foot_y)
plot(CP_x,CP_y,'o','MarkerSize',10,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor','r')
plot(actual_foot_x(2),actual_foot_y(2),'o','MarkerSize',10,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor','g')
plot(actual_foot_x(3),actual_foot_y(3),'o','MarkerSize',10,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor','r')
% plot(foot_ic(1),foot_ic(2),'o','MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor','g')
% plot(fobs_ic(1),fobs_ic(2),'o','MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor','b')
% plot(actual_foot_x(4),actual_foot_y(4),'o','MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor','r')

legend('CoM Traj','Foot Transition', 'Right Step', 'Left Step')
xlabel('x (m)')
ylabel('y (m)')
ylim([-0.4 0.4])

figure
plot(swing_foot_z)
title('swing foot trajectory')


% 
% design_vector = quadprog(H,f,Aiq,biq,Aeq,beq,[],[],[],[]);
% 
% [Aeq,beq,Aiq,biq,H,f] = temp_MPCV4_form_Step3(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info);
% 
% design_vector1 = quadprog(H,f,Aiq,biq,Aeq,beq,[],[],[],[]);
% design_vector1 - design_vector
% 
% 
% x = design_vector(1:2:34);
% x1 = design_vector1(1:2:34)
% close all
% figure
% plot(x)
% hold on 
% plot(x1)


% 
% x = design_vector(1:2:34);
% dx = design_vector(2:2:34);
% 
% y = design_vector(35:2:66);
% dy = design_vector(36:2:66);
% 
% foot_px = design_vector(69:84);
% foot_py = design_vector(86:101);
% 
% actual_foot_x = [CP_x;CP_x + cumsum(design_vector(103:105))];
% actual_foot_y = [CP_y;CP_y + cumsum(design_vector(107:109))];
% 
% figure
% 
% subplot(2,1,1)
% plot(x)
% title('MPC Position Prediction')
% 
% subplot(2,1,2)
% plot(dx)
% title('MPC Velocity Prediction')
% 
% figure
% plot(actual_foot_x,actual_foot_y)
% hold on
% plot(CP_x,CP_y,'o','MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor','r')
% plot(actual_foot_x(2),actual_foot_y(2),'o','MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor','g')
% plot(actual_foot_x(3),actual_foot_y(3),'o','MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor','r')
% plot(actual_foot_x(4),actual_foot_y(4),'o','MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor','g')
