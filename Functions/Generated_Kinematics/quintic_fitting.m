function [a] = quintic_fitting(x0,xend, t)
%QUINTIC_FITTING Summary of this function goes here
%   Detailed explanation goes here
%   Given states, fitting a fifth order polynomial with duration t
a = zeros(6,1);
a(1) = x0(1);
a(2) = x0(2);
a(3) = x0(3);

sol = [t^3 t^4 t^5;3*t^2 4*t^3 5*t^4;6*t 12*t^2 20*t^3]...
                        \ [xend(1) - a(1) - a(2)*t - a(3)*t^2;xend(2) - a(2) - 2*a(3)*t;xend(3) - 2*a(3)];
a(4) = sol(1);
a(5) = sol(2);
a(6) = sol(3);
end

