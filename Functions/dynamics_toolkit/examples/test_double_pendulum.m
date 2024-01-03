clear 
clc
syms t p1 dp1 ddp1 p2 dp2 ddp2 p3 dp3 ddp3 p4 dp4 ddp4


tree = RigidBodyTreeV2(MultiplePendulumDescriptor);
tree.set_joint_position_by_name('pendulum1-joint',p1);
tree.set_joint_velocity_by_name('pendulum1-joint',dp1);

tree.set_joint_position_by_name('pendulum2-joint',p2);
tree.set_joint_velocity_by_name('pendulum2-joint',dp2);

[nH,nC] = tree.getHandC(1);

[KE,PE,htot,Itot,mass,cm,vcm] = tree.get_EnerMo;
htot1 = tree.get_Momentum;

aa = simplify(tree.get_tree_pontential_energy([0;0;9.81]))
simplify(PE)
simplify(cm)
simplify(vcm)
simplify(KE)

v1 = [cos(p1)*dp1;sin(p1)*dp1];
v2 = [2*cos(p1)*dp1 + cos(p1+p2)*dp1 + cos(p1+p2)*dp2;2*sin(p1)*dp1 + sin(p1+p2)*dp1 + sin(p1+p2)*dp2];

simplify(0.5 * (v1.' * v1) + 0.5 * (v2.' * v2) + .5 * dp1^2 + .5 * (dp1 + dp2)^2 )

simplify(1*cross([0;sin(p1);-cos(p1)],[0;v1]) + 1*cross([0;2*sin(p1)+sin(p1+p2);-2*cos(p1)-cos(p1+p2)],[[0;v2]]) + [dp1 + dp1 + dp2;0;0])
simplify(htot)
% simplify(htot1)
% simplify(htot)
% ans1 = double(subs(htot,{p1,p2,dp1,dp2},{0.2,0.8,0.5,0.2}));

%%














% two versions of kinematics energy
% get energy
g = [0;0;9.81];
L = simplify(tree.get_tree_lagrangian(g));

V = [p1 dp1 ddp1 p2 dp2 ddp2 p3 dp3 ddp3 p4 dp4 ddp4];
% get dynamics
L = Lagrange(L,V);
M = jacobian(L,[ddp1 ddp2 ddp3 ddp4]);

% when acceleration is zero, term C should equal to the result of inverse
% dynamics
C = subs(L, [ddp1 ddp2 ddp3 ddp4], zeros(1,4));
C1 = L - M * [ddp1 ddp2 ddp3 ddp4].';

% zeros torque should give L = Mddq + C
% works fine


simplify(nC)

simplify(nH)
simplify(M);

%% modify the matrix in case that two links share a same joint but have different position in parent frame

newC = sym(zeros(4,1));
combine_joint = 3;
i = 1;
in = 1;
while i <= size(nC,1)
    if i~= combine_joint
        newC(in) = nC(i);
        i = i+1;
        in = in + 1;
    else
        newC(in) = nC(i) + nC(i+1);
        i = i + 2;
        in = in + 1;
    end
end

H1 = sym(zeros(4,5));
in = 1;
for i = 1: 4
    if i ~= combine_joint
        H1(i,:) = nH(in,:);
        in = in + 1;
    else
        H1(i,:) = nH(in,:) + nH(in+1,:);
        in = in + 2;
    end
end
newM = sym(zeros(4,4));
in = 1;
for i = 1: 4
    if i ~= combine_joint
        newM(:,i) = H1(:,in);
        in = in + 1;
    else
        newM(:,i) = H1(:,in) + H1(:,in+1);
        in = in + 2;
    end
end

% simplify(newM-M)
simplify(newM-M)
simplify(newC-C)
