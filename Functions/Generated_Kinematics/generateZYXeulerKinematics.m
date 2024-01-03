syms rx(t) ry(t) rz(t) phi theta psi drx dry drz

rotz = [cos(rz(t)) -sin(rz(t)) 0;sin(rz(t)) cos(rz(t)) 0;0 0 1];
roty = [cos(ry(t)) 0 sin(ry(t));0 1 0;-sin(ry(t)) 0 cos(ry(t))];
rotx = [1 0 0;0 cos(rx(t)) -sin(rx(t));0 sin(rx(t)) cos(rx(t))];

% z-y-x rotation, world to pelvis frame, this transform pelvis frame to
% world frame
R = rotz * roty * rotx;
Rdot = diff(R,t);
Rdot = subs(Rdot,str2sym('diff(rx(t), t)'),drx);
Rdot = subs(Rdot,str2sym('diff(ry(t), t)'),dry);
Rdot = subs(Rdot,str2sym('diff(rz(t), t)'),drz);

Rdot = subs(Rdot,rx(t),phi);
Rdot = subs(Rdot,ry(t),theta);
Rdot = subs(Rdot,rz(t),psi);

R = subs(R,rx(t),phi);
R = subs(R,ry(t),theta);
R = subs(R,rz(t),psi);
% matlabFunction(Rdot, 'file','GeneratedPelvisRotdot3.m', 'Outputs', {'Rdot'}, 'vars', [phi,theta,psi,drx,dry,drz])
matlabFunction(R, 'file','GeneratedPelvisRot.m', 'Outputs', {'Rdot'}, 'vars', [psi,theta,phi])





    