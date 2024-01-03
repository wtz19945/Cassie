g = [0;0;9.81];
tree = RigidBodyTree(FixedBaseCassieDescriptor);

q = rand(10,1);
dq = rand(10,1);
% left foot
tree.set_joint_position_by_name('left-hip-roll-joint',q(1));
tree.set_joint_velocity_by_name('left-hip-roll-joint',dq(1));

tree.set_joint_position_by_name('left-hip-yaw-joint',q(2));
tree.set_joint_velocity_by_name('left-hip-yaw-joint',dq(2));

tree.set_joint_position_by_name('left-hip-pitch-joint',q(3));
tree.set_joint_velocity_by_name('left-hip-pitch-joint',dq(3));

tree.set_joint_position_by_name('left-knee-joint',q(4));
tree.set_joint_velocity_by_name('left-knee-joint',dq(4));

tree.set_joint_position_by_name('left-foot-joint',q(5));
tree.set_joint_velocity_by_name('left-foot-joint',dq(5));

tree.set_joint_position_by_name('left-foot-crank-joint',q(5));
tree.set_joint_velocity_by_name('left-foot-crank-joint',dq(5));

tree.set_joint_position_by_name('left-shin-joint',0);
tree.set_joint_velocity_by_name('left-shin-joint',0);

tree.set_joint_position_by_name('left-tarsus-joint',-q(4) + 13*pi/180);
tree.set_joint_velocity_by_name('left-tarsus-joint',-dq(4));


% right foot
tree.set_joint_position_by_name('right-hip-roll-joint',q(6));
tree.set_joint_velocity_by_name('right-hip-roll-joint',dq(6));

tree.set_joint_position_by_name('right-hip-yaw-joint',q(7));
tree.set_joint_velocity_by_name('right-hip-yaw-joint',dq(7));

tree.set_joint_position_by_name('right-hip-pitch-joint',q(8));
tree.set_joint_velocity_by_name('right-hip-pitch-joint',dq(8));

tree.set_joint_position_by_name('right-knee-joint',q(9));
tree.set_joint_velocity_by_name('right-knee-joint',dq(9));

tree.set_joint_position_by_name('right-foot-joint',q(10));
tree.set_joint_velocity_by_name('right-foot-joint',dq(10));

tree.set_joint_position_by_name('right-foot-crank-joint',q(10));
tree.set_joint_velocity_by_name('right-foot-crank-joint',dq(10));

tree.set_joint_position_by_name('right-shin-joint',0);
tree.set_joint_velocity_by_name('right-shin-joint',0);

tree.set_joint_position_by_name('right-tarsus-joint',-q(9) + 13*pi/180);
tree.set_joint_velocity_by_name('right-tarsus-joint',-dq(9));

[H,C] = tree.getHandC(0)
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
