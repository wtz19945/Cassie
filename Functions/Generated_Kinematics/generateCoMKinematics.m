% still time consuming
syms x y z rx ry rz dx dy dz drx dry drz ... 
     q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14 ...
     dq1 dq2 dq3 dq4 dq5 dq6 dq7 dq8 dq9 dq10 dq11 dq12 dq13 dq14
 
theta = [x y z rz ry rx q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14];
dtheta = [dx dy dz drz dry drx dq1 dq2 dq3 dq4 dq5 dq6 dq7 dq8 dq9 dq10 dq11 dq12 dq13 dq14];
g = [0;0;9.81];
tree = RigidBodyTreeV2(FloatBaseCassieDescriptor);

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

% [KE,PE,htot,Itot,mass,cm,vcm] = tree.get_EnerMo;
htot = tree.get_Momentum;
disp('generating 1')
matlabFunction(htot(1), 'file','GeneratedAM1.m', 'Outputs', {'htot'}, 'vars', [theta dtheta]);
disp('generating 2')
matlabFunction(htot(2), 'file','GeneratedAM2.m', 'Outputs', {'htot'}, 'vars', [theta dtheta]);
disp('generating 3')
matlabFunction(htot(3), 'file','GeneratedAM3.m', 'Outputs', {'htot'}, 'vars', [theta dtheta]);
% matlabFunction(cm,vcm, 'file','GeneratedCoM.m', 'Outputs', {'p_com,v_com'}, 'vars', [theta dtheta]);
% [M, p] = tree.getCoM(1);
% matlabFunction(p, 'file','GeneratedCoM.m', 'Outputs', {'p'}, 'vars', theta);
% jaco = jacobian(p,theta);
% matlabFunction(jaco, 'file','GeneratedCoMJaco.m', 'Outputs', {'jaco'}, 'vars', theta);