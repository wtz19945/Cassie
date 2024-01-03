% still time consuming
syms fx fy fz rx ry rz dx dy dz drx dry drz ... 
     q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14 ...
     dq1 dq2 dq3 dq4 dq5 dq6 dq7 dq8 dq9 dq10 dq11 dq12 dq13 dq14
 
theta = [fx fy fz rz ry rx q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14];
g = [0;0;9.81];
tree = RigidBodyTree(FloatBaseCassieDescriptor);

% base
tree.set_joint_position_by_name('basex-joint',0);
tree.set_joint_velocity_by_name('basex-joint',0);

tree.set_joint_position_by_name('basey-joint',0);
tree.set_joint_velocity_by_name('basey-joint',0);

tree.set_joint_position_by_name('basez-joint',0);
tree.set_joint_velocity_by_name('basez-joint',0);

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

[ppelL,RpelL] = tree.get_pel_position_by_name('left-foot');
[ppelR,RpelR] = tree.get_pel_position_by_name('right-foot');

% disp('check reverse order check')
% matlabFunction(RpelL.' * (ppelL + [fx;fy;fz]),RpelR.' * (ppelR + [fx;fy;fz]),  ...
%      'file','GeneratedToetoPelvisKinematics.m', 'Outputs', {'left_pel','right_pel'}, 'vars', theta);

%%
% pos_LeftToeToPelvis = pL + RL * (R * [0.08;0;0] + p);
% pos_LeftHeelToPelvis = pL + RL * (R * [-0.08;0;0]+ p);

% compute transformation to foot
[pL,RL] = tree.get_body_position_by_name('left-foot');
[pR,RR] = tree.get_body_position_by_name('right-foot');

% compute contact foot on each foot
p = [17.62; 52.19; 0] / 1000;
R = [-0.766044443118978, 0, -0.642787609686539; 0.642787609686539, 0 -0.766044443118978; 0, -1, 0];

pos_LeftToeToPelvis = ([fx;fy;fz] - pL) - RL *( R*[0.08;0;0] + p);
pos_LeftHeelToPelvis = ([fx;fy;fz]- pL) - RL *( R*[-0.08;0;0] + p);

pos_RightToeToPelvis = ([fx;fy;fz] - pR) - RR *( R*[0.08;0;0] + p);
pos_RightHeelToPelvis = ([fx;fy;fz]- pR) - RR *( R*[-0.08;0;0] + p);

toetoPelvisjaco_left = jacobian(pos_LeftToeToPelvis, theta);
toetoPelvisjaco_right = jacobian(pos_RightToeToPelvis, theta);

heeltoPelvisjaco_left = jacobian(pos_LeftHeelToPelvis, theta);
heeltoPelvisjaco_right = jacobian(pos_RightHeelToPelvis, theta);




disp('start to generate kinematics function')
matlabFunction(pos_LeftToeToPelvis,pos_LeftHeelToPelvis,toetoPelvisjaco_left,heeltoPelvisjaco_left,  ...
    'file','GeneratedLeftPelvisKinematics.m', 'Outputs', {'toepos_left','heelpos_left','toejaco_left','heeljaco_left'}, 'vars', theta);
matlabFunction(pos_RightToeToPelvis,pos_RightHeelToPelvis,toetoPelvisjaco_right,heeltoPelvisjaco_right,...
    'file','GeneratedRightPelvisKinematics.m', 'Outputs', {'toepos_right','heelpos_right','toejaco_right','heeljaco_right'}, 'vars', theta);

