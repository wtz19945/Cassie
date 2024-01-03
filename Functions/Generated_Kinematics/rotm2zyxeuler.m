function [euler] = rotm2zyxeuler(R)
%ROTM2ZYXEULER Summary of this function goes here
%   Detailed explanation goes here
x = atan2(R(3,2),R(3,3));
y = asin(-R(3,1));
z = atan2(R(2,1),R(1,1));
euler = [x;y;z];
end

