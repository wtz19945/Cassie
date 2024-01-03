%% Example 2, Compute the dynamics equation of a double pendulum system with point masses concentrated
%  at the end of the pendulum.
% Pendulum Length : 11 = 1,l2 = 1
% Pendulum Mass : m1, m2
% States (position, velocity, acceleration) : q1, dq1, ddq1  q2, dq2, ddq2 

% The dynamics equation has the following form: H*ddq + C = u
% H: Inertia Matrix, C: Gravity and Coriolis forces, u: Control input
syms t q1 dp1 ddp1 q2 dp2 ddp2 m1 m2


tree = RigidBodyTree(DoublePendulumDescriptor(m1,m2)); % Initialze Tree with system description file
tree.set_joint_position_by_name('pendulum1-joint',q1); % Set robot first joint position 
tree.set_joint_velocity_by_name('pendulum1-joint',dp1); % Set robot first joint velocity 

tree.set_joint_position_by_name('pendulum2-joint',q2); % Set robot second joint position 
tree.set_joint_velocity_by_name('pendulum2-joint',dp2);% Set robot second joint velocity 

[nH,nC] = tree.getHandC(1);


%% Check result
% GroundTruth: Check Website http://underactuated.mit.edu/multibody.html
simplify(nH)
simplify(nC)