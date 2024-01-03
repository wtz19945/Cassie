% still time consuming
syms x y z rx ry rz dx dy dz drx dry drz ... 
     q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14 ...
     dq1 dq2 dq3 dq4 dq5 dq6 dq7 dq8 dq9 dq10 dq11 dq12 dq13 dq14
theta = [x y z rz ry rx q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14];
g = [0;0;9.81];
tree = RigidBodyTree(FloatBaseCassieDescriptor);

% base
tree.set_joint_position_by_name('basex-joint',0);
tree.set_joint_velocity_by_name('basex-joint',0);

tree.set_joint_position_by_name('basey-joint',0);
tree.set_joint_velocity_by_name('basey-joint',0);

tree.set_joint_position_by_name('basez-joint',0);
tree.set_joint_velocity_by_name('basez-joint',0);

tree.set_joint_position_by_name('baserotz-joint',0);
tree.set_joint_velocity_by_name('baserotz-joint',0);

tree.set_joint_position_by_name('baseroty-joint',0)
tree.set_joint_velocity_by_name('baseroty-joint',0);

tree.set_joint_position_by_name('baserotx-joint',0);
tree.set_joint_velocity_by_name('baserotx-joint',0);

% left foot
tree.set_joint_position_by_name('left-hip-roll-joint',q1);
tree.set_joint_velocity_by_name('left-hip-roll-joint',dq1);

tree.set_joint_position_by_name('left-hip-yaw-joint',q2);
tree.set_joint_velocity_by_name('left-hip-yaw-joint',dq2);

tree.set_joint_position_by_name('left-hip-pitch-joint',q3);
tree.set_joint_velocity_by_name('left-hip-pitch-joint',dq3);

tree.set_joint_position_by_name('left-knee-joint',q4);
tree.set_joint_velocity_by_name('left-knee-joint',dq4);

tree.set_joint_position_by_name('left-foot-joint',q7);
tree.set_joint_velocity_by_name('left-foot-joint',dq7);

tree.set_joint_position_by_name('left-foot-crank-joint',q7);
tree.set_joint_velocity_by_name('left-foot-crank-joint',dq7);

tree.set_joint_position_by_name('left-shin-joint',q5);
tree.set_joint_velocity_by_name('left-shin-joint',dq5);

tree.set_joint_position_by_name('left-tarsus-joint',q6);
tree.set_joint_velocity_by_name('left-tarsus-joint',dq6);


% right foot
tree.set_joint_position_by_name('right-hip-roll-joint',q8);
tree.set_joint_velocity_by_name('right-hip-roll-joint',dq8);

tree.set_joint_position_by_name('right-hip-yaw-joint',q9);
tree.set_joint_velocity_by_name('right-hip-yaw-joint',dq9);

tree.set_joint_position_by_name('right-hip-pitch-joint',q10);
tree.set_joint_velocity_by_name('right-hip-pitch-joint',dq10);

tree.set_joint_position_by_name('right-knee-joint',q11);
tree.set_joint_velocity_by_name('right-knee-joint',dq11);

tree.set_joint_position_by_name('right-foot-joint',q14);
tree.set_joint_velocity_by_name('right-foot-joint',dq14);

tree.set_joint_position_by_name('right-foot-crank-joint',q14);
tree.set_joint_velocity_by_name('right-foot-crank-joint',dq14);

tree.set_joint_position_by_name('right-shin-joint',q12);
tree.set_joint_velocity_by_name('right-shin-joint',dq12);

tree.set_joint_position_by_name('right-tarsus-joint',q13);
tree.set_joint_velocity_by_name('right-tarsus-joint',dq13);


[pl_start,Rl2] = tree.get_body_position_by_name('left-achilles-rod');
[pl_spring,Rl3] = tree.get_body_position_by_name('left-heel-spring');
pl_end = pl_spring + Rl3 * (Rz(-0.0/pi * 180) * [0.11877; -0.01; 0]);

[pr_start,Rr2] = tree.get_body_position_by_name('right-achilles-rod');
[pr_spring,Rr3] = tree.get_body_position_by_name('right-heel-spring');
pr_end = pr_spring + Rr3 * (Rz(-0.0/pi * 180) * [0.11877; -0.01; 0]);

% left_dis = norm(pl_end - pl_start,2);
% right_dis = norm(pr_end - pr_start,2);

left_dis = (pl_end - pl_start).'*(pl_end - pl_start);
right_dis = (pr_end - pr_start).'*(pr_end - pr_start);
% simplify(left_dis)
disjaco_left = jacobian(left_dis, theta);
disjaco_right = jacobian(right_dis, theta);

matlabFunction(disjaco_left, disjaco_right,'file','GeneratedDistanceConJacobianV2.m', ...
    'Outputs', {'disjaco_left', 'disjaco_right'}, 'vars', theta);
% 
