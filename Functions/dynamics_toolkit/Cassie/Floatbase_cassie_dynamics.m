clear all
clc
g = [0;0;9.81];
tree = RigidBodyTree(FloatBaseCassieDescriptor);

% value of joint position and velocity
x = 0;
dx = 0;
y = 0;
dy = 0;
z = 0;
dz = 0;
rotz = 0;
drotz = 0;
roty = 0;
droty = 0;
rotx = 0;
drotx = 0;
q = rand(14,1);
dq = rand(14,1);

qnew = [q(1:6);q(7);q(7);q(8:13);q(14);q(14)];
dqnew = [dq(1:6);dq(7);dq(7);dq(8:13);dq(14);dq(14)];
tree.setTreeStateFromVector([x;y;z;rotz;roty;rotx;qnew], [dx;dy;dz;drotz;droty;drotx;dqnew]);
[nH,nC] = tree.getHandC(0);
% 
% dim = 21;
% newC = zeros(dim,1);
% combine_joint = 21;
% i = 1;
% in = 1;
% while i <= size(nC,1)
%     if i~= combine_joint
%         newC(in) = nC(i);
%         i = i+1;
%         in = in + 1;
%     else
%         newC(in) = nC(i) + nC(i+1);
%         i = i + 2;
%         in = in + 1;
%     end
% end
% 
% H1 = zeros(dim,dim+1);
% in = 1;
% for i = 1: dim
%     if i ~= combine_joint
%         H1(i,:) = nH(in,:);
%         in = in + 1;
%     else
%         H1(i,:) = nH(in,:) + nH(in+1,:);
%         in = in + 2;
%     end
% end
% 
% newM = zeros(dim,dim);
% in = 1;
% for i = 1: dim
%     if i ~= combine_joint
%         newM(:,i) = H1(:,in);
%         in = in + 1;
%     else
%         newM(:,i) = H1(:,in) + H1(:,in+1);
%         in = in + 2;
%     end
% end
% 
% 
% nC = newC;
% nH = newM;
% dim = 20;
% newC = zeros(dim,1);
% combine_joint = 13;
% i = 1;
% in = 1;
% while i <= size(nC,1)
%     if i~= combine_joint
%         newC(in) = nC(i);
%         i = i+1;
%         in = in + 1;
%     else
%         newC(in) = nC(i) + nC(i+1);
%         i = i + 2;
%         in = in + 1;
%     end
% end
% 
% H1 = zeros(dim,dim+1);
% in = 1;
% for i = 1:dim
%     if i ~= combine_joint
%         H1(i,:) = nH(in,:);
%         in = in + 1;
%     else
%         H1(i,:) = nH(in,:) + nH(in+1,:);
%         in = in + 2;
%     end
% end
% newM = zeros(dim,dim);
% in = 1;
% for i = 1: dim
%     if i ~= combine_joint
%         newM(:,i) = H1(:,in);
%         in = in + 1;
%     else
%         newM(:,i) = H1(:,in) + H1(:,in+1);
%         in = in + 2;
%     end
% end

% % base
tree.set_joint_position_by_name('basex-joint',x);
tree.set_joint_velocity_by_name('basex-joint',dx);

tree.set_joint_position_by_name('basey-joint',y);
tree.set_joint_velocity_by_name('basey-joint',dy);

tree.set_joint_position_by_name('basez-joint',z);
tree.set_joint_velocity_by_name('basez-joint',dz);

tree.set_joint_position_by_name('baserotz-joint',rotz);
tree.set_joint_velocity_by_name('baserotz-joint',drotz);

tree.set_joint_position_by_name('baseroty-joint',roty);
tree.set_joint_velocity_by_name('baseroty-joint',droty);

tree.set_joint_position_by_name('baserotx-joint',rotx);
tree.set_joint_velocity_by_name('baserotx-joint',drotx);

% left foot
tree.set_joint_position_by_name('left-hip-roll-joint',q(1));
tree.set_joint_velocity_by_name('left-hip-roll-joint',dq(1));

tree.set_joint_position_by_name('left-hip-yaw-joint',q(2));
tree.set_joint_velocity_by_name('left-hip-yaw-joint',dq(2));

tree.set_joint_position_by_name('left-hip-pitch-joint',q(3));
tree.set_joint_velocity_by_name('left-hip-pitch-joint',dq(3));

tree.set_joint_position_by_name('left-knee-joint',q(4));
tree.set_joint_velocity_by_name('left-knee-joint',dq(4));

tree.set_joint_position_by_name('left-foot-joint',q(7));
tree.set_joint_velocity_by_name('left-foot-joint',dq(7));

tree.set_joint_position_by_name('left-foot-crank-joint',q(7));
tree.set_joint_velocity_by_name('left-foot-crank-joint',dq(7));

tree.set_joint_position_by_name('left-shin-joint',q(5));
tree.set_joint_velocity_by_name('left-shin-joint',dq(5));

tree.set_joint_position_by_name('left-tarsus-joint',q(6));
tree.set_joint_velocity_by_name('left-tarsus-joint',dq(6));


% right foot
tree.set_joint_position_by_name('right-hip-roll-joint',q(8));
tree.set_joint_velocity_by_name('right-hip-roll-joint',dq(8));

tree.set_joint_position_by_name('right-hip-yaw-joint',q(9));
tree.set_joint_velocity_by_name('right-hip-yaw-joint',dq(9));

tree.set_joint_position_by_name('right-hip-pitch-joint',q(10));
tree.set_joint_velocity_by_name('right-hip-pitch-joint',dq(10));

tree.set_joint_position_by_name('right-knee-joint',q(11));
tree.set_joint_velocity_by_name('right-knee-joint',dq(11));

tree.set_joint_position_by_name('right-foot-joint',q(14));
tree.set_joint_velocity_by_name('right-foot-joint',dq(14));

tree.set_joint_position_by_name('right-foot-crank-joint',q(14));
tree.set_joint_velocity_by_name('right-foot-crank-joint',dq(14));

tree.set_joint_position_by_name('right-shin-joint',q(12));
tree.set_joint_velocity_by_name('right-shin-joint',dq(12));

tree.set_joint_position_by_name('right-tarsus-joint',q(13));
tree.set_joint_velocity_by_name('right-tarsus-joint',dq(13));

[H,C] = tree.getHandC(0);

H - nH
C - nC


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
