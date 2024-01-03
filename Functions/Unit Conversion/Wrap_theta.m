function [cur_theta] = Wrap_theta(theta,theta_des)
%WRAP_THETA Summary of this function goes here
%   Detailed explanation goes here
%   Wrap theta around theta_init which so the desired orietation for the
%   robot in OSC is 0
theta = theta - theta_des;

if theta > pi
    cur_theta = theta + theta_des - 2*pi;
elseif theta < -pi
    cur_theta = theta + theta_des;
else
    cur_theta = theta;
end
end

