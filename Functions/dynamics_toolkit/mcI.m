function [rbi] = mcI(m,c,Ic)
%MCI(M,C,IC) Summary of this function goes here
%   Detailed explanation goes here
I = [Ic(1) Ic(4) Ic(5);Ic(4) Ic(2) Ic(6);Ic(5) Ic(6) Ic(3)];
C = [  0,    -c(3),  c(2);
       c(3),  0,    -c(1);
      -c(2),  c(1),  0 ];

rbi = [ I + m*(C)*C', m*C; m*C', m*eye(3) ];
end

