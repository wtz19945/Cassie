Tstep = 0.4; % step time is 0.5, fixed for now
Tstep_1 = 0.5;
dt = 0.1; % MPC sample Time, 
dt_1 = 0.1;
Npred = 4; % Number of steps
Nodes = round(Tstep_1 / dt_1) + (Npred-1) * round(Tstep / dt) + 1;

CoM_x = [0;0.0];
CoM_y = [0;-0.0];
CP_y = -0.05;
CP_x = -0.05;

cost = 1000;
r1 = 0.1;
r2 = 0.2;
r3 = 3.2;
qo = [.1;0.1;0;0];

states = [CoM_x;CoM_y;CP_x;CP_y];
r = [r1;r2;r3];

MPC_index = [1;0];
weights = [cost;0;2500;0;2500;10000;10000;1800;1800;1800];

vel_des = [.3;0];
x0_ref = (2 - exp(sqrt(9.81/.9)*0.4) - exp(-sqrt(9.81/.9)*0.4))/(exp(sqrt(9.81/.9)*0.4)...
    - exp(-sqrt(9.81/.9)*0.4)*vel_des(1))/sqrt(9.81/0.9);
dy_des = sqrt(9.81/0.9) * 0.14 * tanh(sqrt(9.81/0.9) * Tstep/2);
states_ref = [vel_des(1) * ones(5,1);0;dy_des * (-1).^(2:5).'];
x_ref = states_ref(1:5,1);
y_ref = states_ref(6:10,1);
ftx = [0.001;0;x0_ref];
fty = [0.001;0.00;.14];
Obs_Info = [1;1;-1;-1];

foot_info = [ftx;fty;.8;.3];
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step0(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step1(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step2(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step3(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step4(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])



[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step0_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step1_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step2_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step3_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])
[Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step4_mex(states,Nodes,r,qo,states_ref,MPC_index,weights,foot_info,Obs_Info);
size([Aeq;Aiq])

%%
% Find the decision vector
prob = osqp;
% Find the decision vector
rho =0.0001; % default .1                new 0.0001;
sigma = 1e-6; % default 1e-6          new 1e-6
eps_abs = 1e-6; % default 1e-3        new 1e-7
eps_rel = 1e-6; % default 1e-3        new 1e-7
eps_prim_inf = 1e-5; % default 1e-4   new 1e-5
eps_dual_inf = 1e-5; % default 1e-4   new 1e-5
polish = false; % default false       new true
scaled_termination  = false; % default false new true
setup(prob,H, f, [Aiq;Aeq], [-inf*ones(size(Aiq,1),1);beq], [biq;beq])
% setup(prob,H, f, [Aiq;Aeq], [-inf*ones(size(Aiq,1),1);beq], [biq;beq],'rho',rho,...,
%     'sigma',sigma,'eps_abs',eps_abs,'eps_rel',eps_rel,'eps_prim_inf',eps_prim_inf,'eps_dual_inf',eps_dual_inf,...
%     'polish',polish,'scaled_termination',scaled_termination);
[design_vector,flag,dual] = prob.solve();
close all
x = design_vector(1:2:32);
dx = design_vector(2:2:32);

y = design_vector(35:2:66);
dy = design_vector(36:2:66);



actual_foot_x = [CP_x;CP_x + cumsum(design_vector(103:105))];
actual_foot_y = [CP_y;CP_y + cumsum(design_vector(107:109))];

figure

plot(x,y,'LineWidth',2)
hold on
plot(actual_foot_x,actual_foot_y)
plot(CP_x,CP_y,'o','MarkerSize',10,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor','r')
plot(actual_foot_x(2),actual_foot_y(2),'o','MarkerSize',10,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor','g')
plot(actual_foot_x(3),actual_foot_y(3),'o','MarkerSize',10,...
    'MarkerEdgeColor','b',...
    'MarkerFaceColor','r')
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
