function [res,flag] = FastAvoidance_QP2(M,G,B,Jfl,Jfr,Js,A,Adot,xddot_cmd,q,dq,Jfldot,Jfrdot,x_old,acc_feet,contact,contact_lam,weights,torque_bound,qdd_range,traj_time)
%QP_CONTROLLER Summary of this function goes here
%   Detailed explanation goes here
%   Function Inputs:
%   M,G : Inertia Matrix and Gravity Terms
%   B   : Robot Input 
%   Jfl, Jfr: Jacobian of left foot, right foot contact point
%   Js  : Jacobian for Spring constraint
%   A, Adot : Jacobian and derivative of jacobian for pelvis
%   xddot_cmd: desired task space acceleration
%   dq  : joint velocity
%   Jfldot,Jfrdot: 
%   x_old: Previous solution for warm start
%   contact: contact index for which foot is in contact with ground
%   contact_lam: Currently, contact_lam should equal to contact
%   Js_acc     : Currently, Js_acc should be zero vector

%   OSC tracking target is different
cost_cons = xddot_cmd - Adot * dq;
if contact(2) == 1 && contact(1) == 1 
    W = 1*diag([2800 2400 2500 3250 3250 3300]);
else
    W = diag(weights(1:6,1));
end

% cost on states
Rq = 0.0 * blkdiag(eye(6),eye(7),eye(7));
Rt = 0.0 * diag([1; 1; 1; 1; 1; 1; 1; 1; 1; 1]);
Rf = 0.0 * diag([1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1]);

% set the bound of variables
qddot_min = -qdd_range * [8;8;8;8;8;8;12*ones(14,1)];
qddot_max =  qdd_range * [8;8;8;8;8;8;12*ones(14,1)];
torque_min = torque_bound(1:10,1);
torque_max = torque_bound(11:20,1);

min_force = 50;
max_force = 250;
max_force_left = max_force * contact(1);
max_force_right = max_force * contact(2);


contact_force_min = [-max_force_left;-max_force_left;0;-max_force_left;-max_force_left;0;-max_force_right;-max_force_right;0;-max_force_right;-max_force_right;0];
contact_force_max = [max_force_left;max_force_left;max_force_left;max_force_left;max_force_left;max_force_left;max_force_right;max_force_right;max_force_right;max_force_right;max_force_right;max_force_right];
if contact(1) == 0 && contact(2) == 1
    if traj_time <= 0.1
        contact_force_max(9)  = 60 + 260 * min(traj_time/0.1,1);
        contact_force_max(12) = 60 + 260 * min(traj_time/0.1,1);
        contact_force_max(9)  = min_force + (max_force-min_force) * min(traj_time/0.1,1);
        contact_force_max(12) = min_force + (max_force-min_force) * min(traj_time/0.1,1);
        
    end
end
if contact(2) == 0 && contact(1) == 1
    if traj_time <= 0.1
        contact_force_max(3) = 60 + 260 * min(traj_time/0.1,1);
        contact_force_max(6) = 60 + 260 * min(traj_time/0.1,1);
        contact_force_max(3) = min_force + (max_force-min_force) * min(traj_time/0.1,1);
        contact_force_max(6) = min_force + (max_force-min_force) * min(traj_time/0.1,1);
    end
end

spring_force_min = 100*[-100;-100;-100;-100];
spring_force_max = 100*[100;100;100;100];

LB = [qddot_min;torque_min;contact_force_min;spring_force_min];
UB = [qddot_max;torque_max;contact_force_max;spring_force_max];

Aslip = [Jfl zeros(6,26);Jfr zeros(6,26)];
bslip = [Jfldot * dq;Jfrdot * dq];

on_ground_weight = weights(7:12,1);
off_ground_weight = weights(13:18,1);
Standing_weight = diag([on_ground_weight;on_ground_weight]);
Slipping_weight = Standing_weight;
if contact(2) == 1 && contact(1) == 1
    Slipping_weight = Standing_weight;
    acc_feet = zeros(12,1);
end

if contact(2) == 0 && contact(1) == 1
    left_weight = on_ground_weight;
    if contact_lam(2) > 0
        lambda = 1;
    else
        lambda = 0;
    end
    right_weight = (1 - lambda) * off_ground_weight + lambda * on_ground_weight;
%     right_weight(1:3) = zeros(3,1);
    Slipping_weight = diag([left_weight;right_weight]);
end

if contact(2) == 1 && contact(1) == 0 
    if contact_lam(1) > 0
        lambda = 1;
    else
        lambda = 0;
    end
    left_weight = (1 - lambda) * off_ground_weight + lambda * on_ground_weight;
    right_weight = on_ground_weight;
%     left_weight(1:3) = zeros(3,1);
    Slipping_weight = diag([left_weight;right_weight]);
end

% Add Force Difference
temp = [[eye(3) -eye(3)] zeros(3,6);zeros(3,6) [eye(3) -eye(3)]];
fd_mat = [zeros(6,30) temp zeros(6,4)];
if contact(1) == 1 && contact(2) == 1
    fd_w = diag([0 0 0 0 0 0]);
else
    fd_w = 1*diag([1 0 0 1 0 0]);
end


% spring constraints
As = [Js zeros(4,26)];
Spring_Weight = on_ground_weight(1)*eye(4);
% swing foot yaw
% Remember to reduce swing foot z tracking weight
if contact(1) == 0 && contact(2) == 0
    Ayaw = [zeros(1,14) 1 zeros(1,31)];
    yaw_acc = -40 * (q(15)) - 0.5 * dq(15); 
    Wyaw = 1000;
    
    toe_des = -q(16) - 1.1;
    dtoe_des = -dq(16);
    
%     toe_des = q(5) - 1.6;
%     dtoe_des = dq(5);
    
    Atoe = [zeros(1,19) 1 zeros(1,26)];
    toe_acc = -1500 * (q(20) - toe_des) - 10 * (dq(20) - dtoe_des); 
    Wtoe = 1000;
elseif contact(1) == 0 && contact(2) == 0
    Ayaw = [zeros(1,7) 1 zeros(1,38)];
    yaw_acc = -40 * (q(8)) - 0.5 * dq(8); 
    Wyaw = 1000;
    
    toe_des = -q(9) - 1.1;
    dtoe_des = -dq(9);
    
%     toe_des = q(5) - 1.6;
%     dtoe_des = dq(5);
    
    Atoe = [zeros(1,12) 1 zeros(1,33)];
    toe_acc = -1500 * (q(13) - toe_des) - 10 * (dq(13) - dtoe_des); 
    Wtoe = 1000;
else
    Ayaw = zeros(1,46);
    Wyaw = 0;
    yaw_acc = 0;
    
    Atoe = zeros(1,46);
    toe_acc = 0;
    Wtoe = 0;
end
%     Ayaw = zeros(1,46);
%     Wyaw = 0;
%     yaw_acc = 0;
% Compute Hessian Matrix
H = blkdiag(A' * W * A + Rq,blkdiag(Rt,Rf)) + (Aslip') * Slipping_weight * Aslip + (As)' * Spring_Weight * As...
     + (Ayaw)' * Wyaw * Ayaw + (Atoe)' * Wtoe * Atoe;
H = (H+H')/2;
% dynamic constraint
f = [-A' * W * cost_cons;zeros(26,1)] + (Aslip')* Slipping_weight * (bslip - acc_feet)...
    + (Ayaw')* Wyaw * (0 - yaw_acc) + (Atoe)' * Wtoe * (0 - toe_acc);
Aeq = [M -B -Jfl' -Jfr' -Js'];
beq = -G;

% Aeq = [Aeq;As];
% beq = [beq;zeros(4,1)];
% Contact force Constraint
mu = .75; % coefficient of friction
temp = [1 1 -mu;1 -1 -mu;-1 1 -mu;-1 -1 -mu];
cone_con = [[temp;zeros(12,3)] [zeros(4,3);temp;zeros(8,3)] [zeros(8,3);temp;zeros(4,3)] [zeros(12,3);temp]];
Ain = [zeros(16,30) cone_con zeros(16,4)];
bin = [zeros(16,1)];




% options = qpOASES_options('maxIter',150);
% a=[1;1;0;0;0;1;0;1;0;0;1;0;0;0;0;1;1;1;1;-1;1;-1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1;1];
% auxInput = qpOASES_auxInput('x0',x_old,'guessedWorkingSetC',zeros(46,1),'guessedWorkingSetC',a);
% [torque,value,exitflag,iter,~,auxOutput] = qpOASES(H,f,[Ain;Aeq],LB,UB,[-inf*ones(16,1);beq],[bin;beq],options,auxInput);
% torque(21:30)
% auxOutput
rho =0.0001;
sigma = 1e-6;
eps_abs = 1e-7;
eps_rel = 1e-7;
eps_prim_inf = 1e-5;
eps_dual_inf = 1e-5;
polish = true;
scaled_termination  = true;
% 
coder.extrinsic('osqp');
coder.extrinsic('solve');
% super helpful 
coder.extrinsic('warm_start');
prob = osqp;
setup(prob,H, f, [Ain;Aeq;eye(46)], [-inf*ones(16,1);beq;LB], [bin;beq;UB],'verbose',false);
% setup(prob,H, f, [Ain;Aeq;eye(46)], [-inf*ones(16,1);beq;LB], [bin;beq;UB],'rho',rho,...,
%     'sigma',sigma,'eps_abs',eps_abs,'eps_rel',eps_rel,'eps_prim_inf',eps_prim_inf,'eps_dual_inf',eps_dual_inf,...
%     'polish',polish,'scaled_termination',scaled_termination);

warm_start(prob,'x',x_old);
[res,flag] = solve(prob);


% solve OSC QP
% coder.extrinsic('quadprog');
% % set the maximum iteration
% options = optimset('Display','off');
% [res,flag] = quadprog(H,f,Ain,bin,Aeq,beq,LB,UB,x_old,options);

end

