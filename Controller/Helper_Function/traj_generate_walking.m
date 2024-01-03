function [a,b] = traj_generate_walking(n,h,t,zint,dzend)
%traj_generate
% n: order
% h: stepping height
% t: stepping time
% z0: ground height
%   this function is used to generate trajecories for foot height
if n == 3
    tmid = 0.2;
    z0 = -0.08; 
    dz0 = 0;
    zmid = 0.;
    dzmid = -0.02;
    zend = -0.08;
    dzend = -0.0;
    
    %% first part
    a0 = z0;
    a1 = dz0;
    sol = [tmid^2 tmid^3;2*tmid 3*tmid^2] \ [zmid - a0 - a1*tmid;dzmid - a1];
    a2 = sol(1);
    a3 = sol(2);
    
    %%
    b0 = zmid;
    b1 = dzmid;
    sol = [tmid^2 tmid^3;2*tmid 3*tmid^2] \ [zend - b0 - b1*tmid;dzend - b1];
    b2 = sol(1);
    b3 = sol(2);
    
    a = [a0;a1;a2;a3];
    b = [b0;b1;b2;b3];
else
    tmid = t/2;
    z0 = zint;
    dz0 = 0;
    ddz0 = 0;
    zmid = zint + h;
    dzmid = -0.0;
    ddzmid = 0;
    zend = zint - 0.03;
    %dzend = -0.3;
    ddzend = -10;
    %% first part
    a0 = z0;
    a1 = dz0;
    a2 = ddz0/2;
    sol = [tmid^3 tmid^4 tmid^5;3*tmid^2 4*tmid^3 5*tmid^4;6*tmid 12*tmid^2 20*tmid^3]...
        \ [zmid - a0 - a1*tmid - a2*tmid^2;dzmid - a1 - 2*a2*tmid;ddzmid - 2*a2];
    a3 = sol(1);
    a4 = sol(2);
    a5 = sol(3);
    
    %%
    b0 = zmid;
    b1 = dzmid;
    b2 = ddzmid;
    sol = [tmid^3 tmid^4 tmid^5;3*tmid^2 4*tmid^3 5*tmid^4;6*tmid 12*tmid^2 20*tmid^3]...
        \ [zend - b0 - b1*tmid - b2*tmid^2;dzend - b1 - 2*b2*tmid;ddzend - 2*b2];
    b3 = sol(1);
    b4 = sol(2);
    b5 = sol(3);
    a = [a0;a1;a2;a3;a4;a5];
    b = [b0;b1;b2;b3;b4;b5];
    
end
end

