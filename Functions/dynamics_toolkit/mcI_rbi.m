function [m,c] = mcI_rbi(rbi)
% Given spatial Inertia matrix, generate mass and center of mass
%   Detailed explanation goes here;

m = rbi(6,6);
c = [rbi(3,5);rbi(1,6);rbi(2,4)]/m;
end

