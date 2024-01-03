function [Xj,Vj] = jcalc(sv,sw,q,dq)
%JCALC Summary of this function goes here
%   Detailed explanation goes here
Vj = [sw';sv'] * dq;
Xj = eye(6);
% revolute joint
if sum(sv) == 0 && sum(sw) == 1
    %
    if sw(1) == 1
        Xj = Xrotx(q);
    end
    if sw(2) == 1
        Xj = Xroty(q);
    end
    if sw(3) == 1
        Xj = Xrotz(q);
    end
end

% No transmission joint on Cassie
% if sum(sv) == 1 && sum(sw) == 0
%     Xj = Xtrans(sv' * q);
% end
% 
% if sum(sv) == 0 && sum(sw) == 0
%     Xj = eye(6);
% end

end

