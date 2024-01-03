function [eulerZYX, eulerZYZ, eulerXYZ] = rotMat2euler(R)
    a1 = atan2(R(3,2), R(3,3) );
    a2 = -atan(R(3,1) ./ sqrt(1-R(3,1).^2) );
    a3 = atan2(R(2,1), R(1,1) );

    eulerZYX = [a1(1,:); a2(1,:); a3(1,:)];
    
    b1 = atan2( R(3,2), R(3,1));
    b2 = acos( R(3,3));
    b3 = atan2( R(2,3), -R(1,3));
    
    eulerZYZ = [b1(1,:); b2(1,:); b3(1,:)];
    
    c1 = atan2(R(2,3),R(3,3));
    c2 = atan2(-R(1,3),sqrt(R(1,1)^2+R(1,2)^2));
    c3 = atan2(sin(c1)*R(3,1)-cos(c1)*R(2,1),cos(c1)*R(2,2)-sin(c1)*R(3,2));
    
    eulerXYZ = -[c1(1,:); c2(1,:); c3(1,:)];
end

