function Rdot = GeneratedPelvisRot(th)
%GENERATEDPELVISROT
%    RDOT = GENERATEDPELVISROT(PSI,THETA,PHI)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    01-Feb-2020 19:53:16

psi = th(1,1);
theta = th(2,1);
phi = th(3,1);

t2 = cos(psi);
t3 = sin(phi);
t4 = sin(psi);
t5 = cos(phi);
t6 = sin(theta);
t7 = cos(theta);
Rdot = reshape([t2.*t7,t4.*t7,-t6,-t4.*t5+t2.*t3.*t6,t2.*t5+t3.*t4.*t6,t3.*t7,t3.*t4+t2.*t5.*t6,-t2.*t3+t4.*t5.*t6,t5.*t7],[3,3]);