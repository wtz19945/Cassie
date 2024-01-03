function s = DigitDescriptor
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
  

  % ROOT =======================================================================
  s(1).name = 'basex';
  s(end).p  = 0; % base
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0];
  s(end).Sw = [0 0 0];
  s(end).Sv = [1 0 0];

  s(end+1).name = 'basey';
  s(end).p  = bodyIndex(s, 'basex');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0];
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 1 0];

  s(end+1).name = 'basez';
  s(end).p  = bodyIndex(s, 'basey');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0];
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 1];

  s(end+1).name = 'baserotz';
  s(end).p  = bodyIndex(s, 'basez');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0];
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'baseroty';
  s(end).p  = bodyIndex(s, 'baserotz');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0];
  s(end).Sw = [0 1 0];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'baserotx';
  s(end).p  = bodyIndex(s, 'baseroty');
  s(end).r  = [0 0 0] / 1000;
  s(end).R  = eye(3);
  s(end).m  = 0;
  s(end).c  = [0 0 0];
  s(end).Ic = [0 0 0 0 0 0];
  s(end).Sw = [1 0 0];
  s(end).Sv = [0 0 0];
  % 
  
  % Left Arm
  s(end+1).name = 'left-shoulder-roll';
  s(end).p  = bodyIndex(s, 'baserotx'); % left shoulder roll
  s(end).r  = [-1 120 400] / 1000;
  s(end).R  = Rxyz([-10 -90 0]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'left-shoulder-pitch';
  s(end).p  = bodyIndex(s, 'left-shoulder-roll'); % left shoulder pitch
  s(end).r  = [-3.17 -11.055 55.5] / 1000;
  s(end).R  = Rxyz([90 -16 -45]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 -1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'left-shoulder-yaw';
  s(end).p  = bodyIndex(s, 'left-shoulder-pitch'); % left shoulder yaw
  s(end).r  = [0 -165 -100] / 1000;
  s(end).R  = Rxyz([90 0 -0]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'left-elbow';
  s(end).p  = bodyIndex(s, 'left-shoulder-yaw'); % left elbow
  s(end).r  = [0 -38.5 185] / 1000;
  s(end).R  = Rxyz([90 1.590277341e-15 22.5]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'left-hand';
  s(end).p  = bodyIndex(s, 'left-elbow'); % left hand
  s(end).r  = [369 0 -79.12] / 1000;
  s(end).R  = Rxyz([90 0 -10]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 0];
  
  % Right Arm
  s(end+1).name = 'right-shoulder-roll';
  s(end).p  = bodyIndex(s, 'baserotx'); % left shoulder roll
  s(end).r  = [-1 -120 400] / 1000;
  s(end).R  = Rxyz([10 -90 0]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'right-shoulder-pitch';
  s(end).p  = bodyIndex(s, 'right-shoulder-roll'); % left shoulder pitch
  s(end).r  = [-3.17 11.055 55.5] / 1000;
  s(end).R  = Rxyz([-90 -16 45]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 -1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'right-shoulder-yaw';
  s(end).p  = bodyIndex(s, 'right-shoulder-pitch'); % left shoulder yaw
  s(end).r  = [0 165 -100] / 1000;
  s(end).R  = Rxyz([-90 0 0]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'right-elbow';
  s(end).p  = bodyIndex(s, 'right-shoulder-yaw'); % left elbow
  s(end).r  = [0 38.5 185] / 1000;
  s(end).R  = Rxyz([-90 1.590277341e-15 -22.5]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 1];
  s(end).Sv = [0 0 0];
  
  s(end+1).name = 'right-hand';
  s(end).p  = bodyIndex(s, 'right-elbow'); % left hand
  s(end).r  = [369 0 -79.12] / 1000;
  s(end).R  = Rxyz([-90 0 10]);
  s(end).m  = 10.33;
  s(end).c  = [50.66 0.346 28.41] / 1000;
  s(end).Ic = [85821 49222 86260 12.76 -160.22 -414] / 1000000;
  s(end).Sw = [0 0 0];
  s(end).Sv = [0 0 0];
  
end % CassieDescriptor
