function [H] = get_transformation(q,sv,sw)
%GET_TRANSFORMATION Summary of this function goes here
%   Detailed explanation goes here
% q is the joint value
% three joint trpe: revolute, prismatic or fixed joint

% revolute joint
if norm(sv) == 0 && norm(sw) == 1
    %
    R = eye(3);
    Rx= eye(3);
    Ry= eye(3);
    Rz= eye(3);
    if sw(1) == 1
        Rx = rotx(q);
    end
    if sw(2) == 1
        Ry = roty(q);
    end
    if sw(3) == 1
        Rz = rotz(q);
    end
    if sw(3) == -1
        Rz = rotz(-q);
    end
    R = R * Rx * Ry * Rz;
    H = [R zeros(3,1);0 0 0 1];
end

% prismatic joint
if norm(sv) == 1 && norm(sw) == 0
    r = sv * q;
    H = [eye(3) r.';0 0 0 1];
end

% fixed joint
if norm(sv) == 0 && norm(sw) == 0
    H = eye(4);
end
end

