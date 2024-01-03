function [J] = generateSpringJacobian
%GENERATESPRINGJACOBIAN Summary of this function goes here
% jacobian of the spring constraint
%   Detailed explanation goes here
%   the constraints are: q5 = 0, q4 + q6 = 13/180 * pi of each leg
J = [zeros(1,6) 0 0 0 0 1 0 0 zeros(1,7);...
     zeros(1,6) 0 0 0 1 1 1 0 zeros(1,7);...
     zeros(1,13) 0 0 0 0 1 0 0;
     zeros(1,13) 0 0 0 1 1 1 0];
end

