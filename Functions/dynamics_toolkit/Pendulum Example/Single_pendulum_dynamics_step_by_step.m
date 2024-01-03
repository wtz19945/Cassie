%% Example 1, Compute the dynamics equation of a single pendulum with a point mass concentrated
%  at the end of the pendulum.

%% System Parameters
% Pendulum Length : L1 = 1
% Pendulum Mass : m1
% States (position, velocity, acceleration) : q1, dq1, ddq1 
% System input: torque tau

%% Problem Setting (Forward Dynamics):
% Find the relationship between system acceleration ddq1 and input torque
% tau

%% The procedure is:
% 1: Define motion vector
% 2: Do rigid body transformation to compute transformation matrix between
%    parent frame and pendulum frame
% 3: Compute pendulum velocity and acceleration using the transformation
%    matrix obtained above
% 4?Compute the spatial inertia matrix in world frame from inertia defined
%    in body frame
% 5: Compute the forces by using: force = I * acc + cross_star(vel) * I * vel
% 6: Relate force in spatial vector and generalized force (torque) 
%    by using: torque = [sw sv] * force

% Note: For multi-body system, repeat the procedure for each link. 
% Check double_pendulum_dynamics.m and single_pendulum_dynamics.m

%% Define System Variables
syms t q1 dq1 ddq1 m1 tau

%% Define Motion Vector, the joint only rotates about x-axis
sv = [0 0 0];
sw = [1 0 0];

%% Define Transformation matrix introduced by rotation about x-axis with angle q1 and angular velocity dq1
R = eye(3); % Initially, pendulum frame aligns with world frame
r = [0 0 0]; % Pendulum origin aligns with world origin
vj = [sw';sv'] * dq1; % get joint velocity v
Xj = Xrotx(q1); % Transformation introduced by joint rotation 
Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r); % Transformation introduced by the
% offset between the body frame and parent frame, for this example, no
% offset , so Xt is the Identity matrix
Xc = Xj * Xt; % Transformation matrix from world frame to pendulum frame


%% Compute Acceleration Vector
acc = Xc * [0;0;0;0;0;9.81] + [sw sv]' * ddq1; % Gravity is simulated as a offset vector in world frame
vel = vj; % For the first link, velocity is trivial since it is linked to the world
% frame

%% Compute Inertia Term
c = [0 0 -1]; % Center of mass is at the end of pendulum which is in the negative direction of z

% Notes
%   - Inertia matrices are taken as 6d vectors [xx yy zz xy xz yz]
%   - Populating 3x3 inertia tensor from inertia vector indices
%       [xx xy xz]
%       [.  yy yz]
%       [.  .  zz]
  
Ic = [0 m1 m1 0 0 0]; % Need to check if this is correct: Inertia of single point mass has form m*R^2, 
                      % Since it only rotates in the y-z plane, therefore no
                      % inertia term in x direction
                      
I = mcI(m1,c,Ic); % Compute the inertia matrix in spatial vector form (6D)

%% Compute forces using equation of motion
f = I * acc + crf(vel) * I * vel; % Compute the force acting on the body
                     
%% Transform the force acting on the body to the torque at the joint via motion vector 
fprintf('\n *********single pendulum system equation is defined as: *********')
tau = [sw sv] * f