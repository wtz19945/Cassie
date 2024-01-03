clear 
clc
x = rand;
y = rand;
z = rand;
rotz = rand;
roty = rand;
rotx = rand;

q1 = rand;
q2 = rand;
q3 = rand;
q4 = rand;
q5 = rand;
q6 = rand;
q7 = rand;

q8 = rand;
q9 = rand;
q10 = rand;
q11 = rand;
q12 = rand;
q13 = rand;
q14 = rand;

x = 0;
y = 0;
z = 1;
rotz = 0;
roty = 0;
rotx = 0;

q1 = 0;
q2 = 0;
q3 = 0.5;
q4 = -1.2;
q5 = 0;
q6 = 13*pi/180 - q4;
q7 = -1.6;

q8 = 0;
q9 = 0;
q10 = 0.5;
q11 = -1.2;
q12 = 0;
q13 = 13*pi/180 - q4;
q14 = -1.6;


tree = RigidBodyTreeSimulink(cassie_tree_str_withrod);
q = [q1;q2;q3;q4;q5;q6;q7;q7;q8;q9;q10;q11;q12;q13;q14;q14];
tree.setTreeStateFromVector([[x;y;z;rotz;roty;rotx];q], [zeros(6,1);(zeros(16,1))]);
g = [0;0;0;0;0;9.806];

%         xyz=".05066 0.000346 .02841"
p_LeftToe([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14])
[pos_LeftToeContact,pos_RightToeContact] = GeneratedToeContactPoint([x;y;z;rotz;roty;rotx],[q1;q2;q3;q4;q5;q6;q7],...
    [q8;q9;q10;q11;q12;q13;q14]);
pos_LeftToeContact + p_LeftToe([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14])
pos_LeftToeContact - p_LeftToe([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14])
% pos_LeftToeContact - p_LeftToe([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14])
% t0 = tic();
% [H,C] = tree.getHandC(0,g);
% [newH,G] = compressHandC(H,C,0);
% dt = toc(t0)
% 
% t1 = tic();
% InertiaMatrix([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14]);
% % GravityVector([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14]);
% GeneratedGravityTerm([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14]);
% dt = toc(t1)

% G - GeneratedGravityTerm([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14])
% G
% GravityVector([x;y;z;rotz;roty;rotx;q1;q2;q3;q4;q5;q6;q7;q8;q9;q10;q11;q12;q13;q14])

