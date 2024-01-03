%% get dynamic info
syms t x dx ddx y dy ddy rz drz ddrz...
       p1 dp1 ddp1 p2 dp2 ddp2 p3 dp3 ddp3 p4 dp4 ddp4...
       p5 dp5 ddp5 p6 dp6 ddp6 p7 dp7 ddp7 p8 dp8 ddp8 
g = [0;0;9.81];

% create tree from descriptor
tree = RigidBodyTree(TestWalkerDescriptor);
% set joint values. Default position, velocity and acceleration are 0
tree.set_joint_position_by_name('basex-joint',x);
tree.set_joint_velocity_by_name('basex-joint',dx);

tree.set_joint_position_by_name('basey-joint',y);
tree.set_joint_velocity_by_name('basey-joint',dy);

tree.set_joint_position_by_name('baserotz-joint',rz);
tree.set_joint_velocity_by_name('baserotz-joint',drz);

tree.set_joint_position_by_name('pendulum1-joint',p1);
tree.set_joint_velocity_by_name('pendulum1-joint',dp1);

tree.set_joint_position_by_name('pendulum3-joint',p2);
tree.set_joint_velocity_by_name('pendulum3-joint',dp2);

tree.set_joint_position_by_name('pendulum4-joint',p3);
tree.set_joint_velocity_by_name('pendulum4-joint',dp3);


tree.set_joint_position_by_name('pendulum6-joint',p3);
tree.set_joint_velocity_by_name('pendulum6-joint',dp3);

tree.set_joint_position_by_name('pendulum7-joint',p4);
tree.set_joint_velocity_by_name('pendulum7-joint',dp4);

tree.set_joint_position_by_name('pendulum8-joint',p5);
tree.set_joint_velocity_by_name('pendulum8-joint',dp5);

tree.set_joint_position_by_name('pendulum10-joint',p6);
tree.set_joint_velocity_by_name('pendulum10-joint',dp6);

tree.set_joint_position_by_name('pendulum11-joint',p7);
tree.set_joint_velocity_by_name('pendulum11-joint',dp7);


tree.set_joint_position_by_name('pendulum13-joint',p7);
tree.set_joint_velocity_by_name('pendulum13-joint',dp7);

tree.set_joint_position_by_name('pendulum14-joint',p8);
tree.set_joint_velocity_by_name('pendulum14-joint',dp8);

%% Lagrangian method
L = (tree.get_tree_lagrangian(g));

V = [x dx ddx y dy ddy rz drz ddrz p1 dp1 ddp1 p2 dp2 ddp2 p3 dp3 ddp3 p4 dp4 ddp4 p5 dp5 ddp5 p6 dp6 ddp6 p7 dp7 ddp7 p8 dp8 ddp8];
% get dynamics
L = Lagrange(L,V);
M = jacobian(L,[ddx ddy ddrz ddp1 ddp2 ddp3 ddp4 ddp5 ddp6 ddp7 ddp8]);

% when acceleration is zero, term C should equal to the result of inverse
% dynamics
C = subs(L, [ddx ddy ddrz ddp1 ddp2 ddp3 ddp4 ddp5 ddp6 ddp7 ddp8], zeros(1,11));
% 

%% spatial vector algebra(Composite-Rigid-Body Method)
[nH,nC] = tree.getHandC(1);

% simplify(nC);
% simplify(C);
% simplify(nH);
% simplify(M);

%% modify the matrix in case that two links share a same joint but have different position in parent frame. Designed for Cassie
[newM,newC] = compressHandC(nH,nC,1);

simplify(newM-M)
simplify(newC-C)
