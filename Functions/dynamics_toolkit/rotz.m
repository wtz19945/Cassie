function [R] = rotz(theta)
%ROTX Summary of this function goes here
%   Detailed explanation goes here
c = cos(theta);
s = sin(theta);
R = [c -s 0;
    s c 0;
    0 0 1];
end

