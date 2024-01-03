%% get dynamic info
syms t p1 dp1 ddp1 p2 dp2 ddp2 p3 dp3 ddp3 p4 dp4 ddp4...
       p5 dp5 ddp5 p6 dp6 ddp6 p7 dp7 ddp7 p8 dp8 ddp8...
       p9 dp9 ddp9 p10 dp10 ddp10 
g = [0;0;9.81];

tree = RigidBodyTree(Copy_of_TestWalkerDescriptor);


tree.set_joint_position_by_name('pendulum1-joint',p1);
tree.set_joint_velocity_by_name('pendulum1-joint',dp1);

tree.set_joint_position_by_name('pendulum3-joint',p2);
tree.set_joint_velocity_by_name('pendulum3-joint',dp2);

tree.set_joint_position_by_name('pendulum4-joint',p3);
tree.set_joint_velocity_by_name('pendulum4-joint',dp3);

tree.set_joint_position_by_name('pendulum6-joint',p4);
tree.set_joint_velocity_by_name('pendulum6-joint',dp4);

% tree.set_joint_position_by_name('pendulum7-joint',p5);
% tree.set_joint_velocity_by_name('pendulum7-joint',dp5);

% tree.set_joint_position_by_name('pendulum8-joint',p6);
% tree.set_joint_velocity_by_name('pendulum8-joint',dp6);
% 
% tree.set_joint_position_by_name('pendulum10-joint',p7);
% tree.set_joint_velocity_by_name('pendulum10-joint',dp7);
% 
% tree.set_joint_position_by_name('pendulum11-joint',p8);
% tree.set_joint_velocity_by_name('pendulum11-joint',dp8);
% 
% tree.set_joint_position_by_name('pendulum13-joint',p9);
% tree.set_joint_velocity_by_name('pendulum13-joint',dp9);
% 
% tree.set_joint_position_by_name('pendulum14-joint',p10);
% tree.set_joint_velocity_by_name('pendulum14-joint',dp10);

% two versions of kinematics energy
% get energy
L = (tree.get_tree_lagrangian(g));

V = [p1 dp1 ddp1 p2 dp2 ddp2 p3 dp3 ddp3 p4 dp4 ddp4];
% get dynamics
L = Lagrange(L,V);
M = jacobian(L,[ddp1 ddp2 ddp3 ddp4 ]);

% when acceleration is zero, term C should equal to the result of inverse
% dynamics
C = subs(L, [ddp1 ddp2 ddp3 ddp4], zeros(1,4));
C1 = L - M * [ddp1 ddp2 ddp3 ddp4].';
% 
% % zeros torque should give L = Mddq + C
% % works fine
[nH,nC] = tree.getHandC(1);

simplify(nC - C)
% simplify(C);
simplify(nH - M)

%% modify the matrix in case that two links share a same joint but have different position in parent frame
% newC = sym(zeros(9,1));
% combine_joint = 8;
% 
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
% newM = sym(zeros(9,9));
% newM(1:combine_joint-1,1:combine_joint-1) = nH(1:combine_joint-1,1:combine_joint-1);
% for i = 1:combine_joint
%     newM(combine_joint,i) = nH(combine_joint,i)  + nH(combine_joint+1,i+1);
%     newM(i,combine_joint) = newM(combine_joint,i);
% end
% 
% for j = combine_joint + 1 : size(newM,1)
%     for i = 1:size(newM,1)
%         newM(j,i) = nH(j+1,i+1);
%         newM(i,j) = newM(j,i);
%     end
% end
% 
% nC = newC;
% nH = newM;
% newC = sym(zeros(8,1));
% combine_joint = 3;
% 
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
% newM = sym(zeros(8,8));
% newM(1:combine_joint-1,1:combine_joint-1) = nH(1:combine_joint-1,1:combine_joint-1);
% for i = 1:combine_joint
%     newM(combine_joint,i) = nH(combine_joint,i)  + nH(combine_joint+1,i+1);
%     newM(i,combine_joint) = newM(combine_joint,i);
% end
% 
% for j = combine_joint + 1 : size(newM,1)
%     for i = 1:size(newM,1)
%         newM(j,i) = nH(j+1,i+1);
%         newM(i,j) = newM(j,i);
%     end
% end
% 
% simplify(newM-M)
% simplify(newC-C)
