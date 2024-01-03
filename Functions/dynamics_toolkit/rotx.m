function [R] = rotx(theta)
%ROTX Summary of this function goes here
%   Detailed explanation goes here
c = cos(theta);
s = sin(theta);
R = [1 0 0;
     0 c -s;
     0 s c];
end

