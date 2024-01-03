function [x_hat] = skew(x)
%SKEW Summary of this function goes here
%   Detailed explanation goes here
%   Transform a 3*1 vector into a 3X3 skew symmetric matrix
x_hat = [0 -x(3) x(2) ; x(3) 0 -x(1) ; -x(2) x(1) 0 ];
end

