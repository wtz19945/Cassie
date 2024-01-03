function [eul] = rotm2xyzeuler(R)
%ROTM2XYZEULER Summary of this function goes here
%   Detailed explanation goes here
%   Only count for the normal case since the singularity configuration
%   should not happen
beta = asin(R(1,3));
gamma = atan2(-R(1,2), R(1,1));
alpha = atan2(-R(2,3), R(3,3));
eul = [alpha;beta;gamma];
end

