function [newv] = Xinvtimev(X,v)
%XINVTIMEV Summary of this function goes here
%   Detailed explanation goes here
% X is a transformation matrix
% this function returns inv(X) * v without computing inv(X)
newE = X(1:3,1:3).';
temp = X(4:6,1:3).';
w = newE * v(1:3,1);
vel = newE * v(4:6,1) + temp * v(1:3,1);
newv = [w;vel];
end

