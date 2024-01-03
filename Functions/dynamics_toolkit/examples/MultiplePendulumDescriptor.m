function s = MultiplePendulumDescriptor
  %CASSIEDESCRIPTOR Rigid body model descriptor for Cassie
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
  s(end).p  = 0; 
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0] ;
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
  % Pendulum 2 ===================================================================
  %
  s(end+1).name = 'pendulum2';
  s(end).p  = bodyIndex(s, 'pendulum1');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];

end % CassieDescriptor
