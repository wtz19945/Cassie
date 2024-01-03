function s = TestWalkerDescriptor
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
    ,'Ic', [] ... % inertia vector at center of mass, aligned with body frame
    ,'Sw', [] ... % angular joint motion subspace, rotation x,y and z
    ,'Sv', [] ... % linear joint motion subspace,   x,y and z axis
    );
  

  % ROOT =======================================================================
  s(1).name = 'basex';
  s(end).p  = 0; 
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0] ;
  s(end).Sw = [0 0 0];
  s(end).Sv = [1 0 0];
  
  s(end+1).name = 'basey';
  s(end).p  = bodyIndex(s, 'basex');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0] ;
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 1 0];

  s(end+1).name = 'baserotz';
  s(end).p  = bodyIndex(s, 'basey');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0] ;
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'base';
  s(end).p  = bodyIndex(s, 'baserotz');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 0];
  s(end).Ic = [1 1 1 0 0 0] ;
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 0];
  
  % LEFT LEG ===================================================================
  s(end+1).name = 'pendulum1';
  s(end).p  = bodyIndex(s, 'base');
  s(end).r  = [0 0 -2.0];
  s(end).R  = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0] ;
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];

  s(end+1).name = 'pendulum2';
  s(end).p  = bodyIndex(s, 'pendulum1');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum3';
  s(end).p  = bodyIndex(s, 'pendulum1');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1.0];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum4';
  s(end).p  = bodyIndex(s, 'pendulum3');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum5';
  s(end).p  = bodyIndex(s, 'pendulum4');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum6';
  s(end).p  = bodyIndex(s, 'pendulum3');
  s(end).r = [0.0 0.0 -3.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1.5];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum7';
  s(end).p  = bodyIndex(s, 'pendulum6');
  s(end).r = [0.0 0.0 -3.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1.5];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];

  
   % Right LEG ===================================================================
  s(end+1).name = 'pendulum8';
  s(end).p  = bodyIndex(s, 'base');
  s(end).r  = [0 0 -2.0];
  s(end).R  = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0] ;
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];

  s(end+1).name = 'pendulum9';
  s(end).p  = bodyIndex(s, 'pendulum8');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum10';
  s(end).p  = bodyIndex(s, 'pendulum8');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1.0];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum11';
  s(end).p  = bodyIndex(s, 'pendulum10');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum12';
  s(end).p  = bodyIndex(s, 'pendulum11');
  s(end).r = [0.0 0.0 -2.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum13';
  s(end).p  = bodyIndex(s, 'pendulum10');
  s(end).r = [0.0 0.0 -3.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1.5];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'pendulum14';
  s(end).p  = bodyIndex(s, 'pendulum13');
  s(end).r = [0.0 0.0 -3.0];
  s(end).R = eye(3);
  s(end).m  = 1;
  s(end).c  = [0 0 -1.5];
  s(end).Ic = [1 1 1 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  
end % CassieDescriptor
