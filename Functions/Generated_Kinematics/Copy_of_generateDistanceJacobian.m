% still time consuming
syms x y z rx ry rz dx dy dz drx dry drz ... 
     q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14 ...
     dq1 dq2 dq3 dq4 dq5 dq6 dq7 dq8 dq9 dq10 dq11 dq12 dq13 dq14
 
Rz = @(t) [cosd(t) -sind(t) 0; sind(t) cosd(t) 0; 0 0 1]; % degrees
ql = [0; 0; 0.5; -1.2; -1.6];

q1 = ql(1);
q2 = ql(2);
q3 = ql(3);
q4 = ql(4);
q5 = 0;
q6 = 13*pi/180 - q4;
q7 = ql(5);

dq1 = 0;
dq2 = 0;
dq3 = 0;
dq4 = 0; 
dq5 = 0;
dq6 = 0; 
dq7 = 0;
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

[p1,R1] = tree.get_body_position_by_name('left-hip-pitch');
[p2,R2] = tree.get_body_position_by_name('left-achilles-rod');
[p3,R3] = tree.get_body_position_by_name('left-heel-spring');
[p4,R4] = tree.get_body_position_by_name('left-tarsus');

%%
close all
angle = -.1 : 0.001 : 0.1;
dis = [];
for n = 1:length(angle)    
p_end_nospring = p3 + R3 * (Rz(-0.0/pi * 180) * [0.11877; -0.01; 0]);
p_end1 = p3 + R3 * (Rz(angle(n)/pi * 180) * [0.11877; -0.01; 0]);
p_start = p2;

d1 = norm(p_start - p_end_nospring);
d2 = norm(p_start - p_end1);

dis = [dis;d2];
end
plot(angle,dis)
hold on
plot(angle, d1 * ones(size(angle)))

(dis(2) - dis(1)) / (angle(2) - angle(1))


