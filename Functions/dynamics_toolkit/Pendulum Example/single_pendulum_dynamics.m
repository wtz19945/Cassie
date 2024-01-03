%% Example 1, Compute the dynamics equation of a single pendulum with a point mass concentrated
%  at the end of the pendulum.
% Pendulum Length : 11 = 1
% Pendulum Mass : m1
% States (position, velocity, acceleration) : q1, dq1, ddq1 

% The dynamics equation has the following form: H*ddq + C = u
% H: Inertia Matrix, C: Gravity and Coriolis forces, u: Control input
syms t q1 dp1 m1

tree = RigidBodyTree(SinglePendulumDescriptor(m1)); % Initialze Tree with system description file
tree.set_joint_position_by_name('pendulum1-joint',q1); % Set robot joint position 
tree.set_joint_velocity_by_name('pendulum1-joint',dp1); % Set robot joint velocity

[nH,nC] = tree.getHandC(1); % Compute system dynamics

%% Check result
% Groundtruth: m1 * ddq1 + m1 * g * sin(q1) = u given pendulum length is 1
simplify(nH)
simplify(nC)