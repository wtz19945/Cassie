function [a] = cubic_fitting(x0,xend, t)
%QUINTIC_FITTING Summary of this function goes here
%   Detailed explanation goes here
%   Given states, fitting a third order polynomial with duration t
a = zeros(4,1);
a(1) = x0(1);
a(2) = x0(2);
                    
sol = [t^2 t^3;2*t 3*t^2] \ [xend(1) - a(1) - a(2)*t;xend(2) - a(2)];
a(3) = sol(1);
a(4) = sol(2);
end

