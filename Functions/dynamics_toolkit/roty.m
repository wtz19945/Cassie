function [R] = roty(theta)
%ROTX Summary of this function goes here
%   Detailed explanation goes here
c = cos(theta);
s = sin(theta);
R = [c 0 s;
    0 1 0;
    -s 0 c];
end

