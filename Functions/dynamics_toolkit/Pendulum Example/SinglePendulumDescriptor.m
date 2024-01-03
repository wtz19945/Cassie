function s = SinglePendulumDescriptor(m1)
  % A system description for a single pendulum system with 
  %
  % Notes:
  %   - Units are metric (m, kg, s)
  %   - Inertia matrices are taken as 6d vectors [xx yy zz xy xz yz]
  %   - Populating 3x3 inertia tensor from inertia vector indices
  %       [1 4 5]
  %       [. 2 6]
  %       [. . 3]
  
  % Copyright 2018 Agility Robotics
  
  % Define helper functions
  Rx = @(t) [1 0 0; 0 cosd(t) -sind(t); 0 sind(t) cosd(t)]; % degrees
  Ry = @(t) [cosd(t) 0 sind(t); 0 1 0; -sind(t) 0 cosd(t)]; % degrees
  Rz = @(t) [cosd(t) -sind(t) 0; sind(t) cosd(t) 0; 0 0 1]; % degrees
  Rxyz = @(v) Rx(v(1))*Ry(v(2))*Rz(v(3));
  bodyIndex = @(s, name) find(arrayfun(@(s)isequal(s.name, name), s));
  
  % Initialize body structure format
  s = struct('name', [] ... % string
    ,'p',  [] ... % parent index
    ,'r',  [] ... % position in parent's frame
    ,'R',  [] ... % rotation in parent's frame
    ,'m',  [] ... % total mass of body
    ,'c',  [] ... % center of mass in body frame
    ,'Ic', [] ... % inertia vector @ CoM, aligned with body frame
    ,'Sw', [] ... % angular joint motion subspace
    ,'Sv', [] ... % linear joint motion subspace
    );
  

  % Pendulum 1 =======================================================================
  s(1).name = 'pendulum1';
  s(end).p  = 0;    % Index of parent link, p = 0 since it's the first joint
  s(end).r  = [0 0 0] / 1000; % Position of the link frame in the parent frame
  s(end).R  = eye(3); % Rotation of the link frame in the parent frame (Same as the world frame)
  s(end).m  = m1; % Mass
  s(end).c  = [0 0 -1]; % Center of mass position in the link frame, [0;0;-1]
  s(end).Ic = [0 m1 m1 0 0 0] ; % Inertia Matrix, for point mass is m*R^2 = m
  s(end).Sw = [1 0 0]; % Motion vector, rotation about x axis
  s(end).Sv = [0 0 0]; % Motion vector, no translation motion for this joint

end % CassieDescriptor
