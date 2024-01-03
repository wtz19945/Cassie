% still time consuming
syms x y z rx ry rz dx dy dz drx dry drz ... 
     q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14 ...
     dq1 dq2 dq3 dq4 dq5 dq6 dq7 dq8 dq9 dq10 dq11 dq12 dq13 dq14
 
theta = [x y z rz ry rx q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14];
g = [0;0;9.81];
tree = RigidBodyTree(FloatBaseCassieDescriptor);

% base
tree.set_joint_position_by_name('basex-joint',x);
tree.set_joint_velocity_by_name('basex-joint',dx);

tree.set_joint_position_by_name('basey-joint',y);
tree.set_joint_velocity_by_name('basey-joint',dy);

tree.set_joint_position_by_name('basez-joint',z);
tree.set_joint_velocity_by_name('basez-joint',dz);

tree.set_joint_position_by_name('baserotz-joint',rz);
tree.set_joint_velocity_by_name('baserotz-joint',drz);

tree.set_joint_position_by_name('baseroty-joint',ry);
tree.set_joint_velocity_by_name('baseroty-joint',dry);

tree.set_joint_position_by_name('baserotx-joint',rx);
tree.set_joint_velocity_by_name('baserotx-joint',drx);

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


% compute transformation to foot
[pL,RL] = tree.get_body_position_by_name('left-foot');
[pR,RR] = tree.get_body_position_by_name('right-foot');

% compute contact foot on each foot
p = [17.62; 52.19; 0] / 1000;
R = [-0.766044443118978, 0, -0.642787609686539; 0.642787609686539, 0 -0.766044443118978; 0, -1, 0];

pos_LeftContact = pL + RL * p;
pos_RightContact = pR + RR * p;

%matlabFunction(pos_LeftContact, pos_RightContact,RL*R,RR*R, 'file','GeneratedMidContactPoint.m', 'Outputs', {'pos_LeftContact', 'pos_RightContact','RL','RR'}, 'vars', theta)

%compute jacobian
jaco_left = jacobian(pos_LeftContact, theta);
jaco_right = jacobian(pos_RightContact, theta);

matlabFunction(jaco_left, jaco_right, 'file','GeneratedMidContactPointJaco.m', 'Outputs', {'jaco_left', 'jaco_right'}, 'vars', theta);
% Rl = RL*R;
% Rr = RR*R;
% 
% % XYZ euler angle convention
% c1 = atan2(Rl(2,3), Rl(3,3));
% c2 = atan2(-Rl(1,3), sqrt(Rl(1,1)^2 + Rl(1,2)^2));
% c3 = atan2(sin(c1)*Rl(3,1)-cos(c1)*Rl(2,1), cos(c1)*Rl(2,2)-sin(c1)*Rl(3,2));
% Left_Ang = real(-[c1(1,:); c2(1,:); c3(1,:)]);
%  
% d1 = atan2(Rr(2,3), Rr(3,3));
% d2 = atan2(-Rr(1,3), sqrt(Rr(1,1)^2 + Rr(1,2)^2));
% d3 = atan2(sin(d1)*Rr(3,1)-cos(d1)*Rr(2,1), cos(d1)*Rr(2,2)-sin(d1)*Rr(3,2));
% Right_Ang = real(-[d1(1,:); d2(1,:); d3(1,:)]);
% 
% %matlabFunction(Left_Ang,Right_Ang, 'file','GeneratedMidContactPointAngle.m', 'Outputs', {'Left_Ang', 'Right_Ang'}, 'vars', theta)
% 
% Left_Jac  = jacobian(Left_Ang, theta); 
% Right_Jac = jacobian(Right_Ang, theta); 
% matlabFunction(Left_Jac, 'file','GeneratedMidContactPointAngleJaco1.m', 'Outputs', {'Left_Jac'}, 'vars', theta)
% matlabFunction(Right_Jac, 'file','GeneratedMidContactPointAngleJaco2.m', 'Outputs', {'Right_Jac'}, 'vars', theta)

% same joint

% % test for fixed-base version. MatlabGeneratedPotentialEnergy and
% MatlabGeneratedKinematicEnergy are derived from symbolic tools. 
% % potential energy is same
% tree.get_tree_pontential_energy(g);
% qm_l = q(1:5);
% qj_l = [0; 13*pi/180 - qm_l(4)];
% qm_r = q(6:10);
% qj_r = [0; 13*pi/180 - qm_r(4)];
% MatlabGeneratedPotentialEnergy(qm_l,qj_l,qm_r,qj_r) - tree.get_tree_pontential_energy(g) + 10.33 * 28.41/1000 * 9.81
% %
% dqm_l = dq(1:5);
% dqj_l = [0; - dqm_l(4)];
% dqm_r = dq(6:10);
% dqj_r = [0;- dqm_r(4)];
% % kinematic energy is also the same
% MatlabGeneratedKinematicEnergy(qm_l,qj_l,qm_r,qj_r,dqm_l,dqj_l,dqm_r,dqj_r) - tree.get_tree_kinematic_energy
