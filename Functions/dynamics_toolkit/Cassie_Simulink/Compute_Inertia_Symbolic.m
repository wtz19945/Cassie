%% 
clear
clc

%% symbolic version
syms x y z rotx roty rotz q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14

tree = RigidBodyTreeSimulinkV2(cassie_tree_str_withrod_sym);

% For Gravity and Mass Matrix, should be able to substitute zero velocity
q = [q1;q2;q3;q4;q5;q6;q7;q7;q8;q9;q10;q11;q12;q13;q14;q14];
tree.setTreeStateFromVector([[x;y;z;rotz;roty;rotx];q], [zeros(6,1);zeros(16,1)]);
g = [0;0;0;0;0;9.806];

disp('Generating Dynamics Matrix')
[H,C] = tree.getHandC(1,g);
disp('Compressing Dynamics Matrix')
[newH,G] = compressHandC(H,C,1);
disp('Take Upper Triangular Part')
H_triu = triu(newH);

% file = fopen('H1.txt', 'w');
% for i = 1:smds.NB
%     fprintf(file, '%s\r\n\n', char(qdd(i)));
% end
% fclose(file);
%% matlab Gravity Function Generation
% disp('Generating Gravity Vector')
% matlabFunction(G, 'file','GeneratedGravityTerm.m', 'Outputs', {'G'}, 'vars', [x y z rotx roty rotz q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14]);
% disp('Generating Inertia Matrix')
% matlabFunction(H_triu, 'file','GeneratedInertiaTerm.m', 'Outputs', {'M'}, 'vars', [x y z rotx roty rotz q1 q2 q3 q4 q5 q6 q7 q8 q9 q10 q11 q12 q13 q14]);
%% numerical version
% base = rand(6,1);
% dbase = rand(6,1);
% qnew = rand(16,1);
% dqnew = rand(16,1);
% g = [0;0;0;0;0;9.806];
% 
% 
% tree = RigidBodyTreeSimulink(cassie_tree_str_withrod);
% tree.setTreeStateFromVector([base;qnew], [dbase;dqnew]);
% [H,C] = tree.getHandC(0,g);
% [newH,G] = compressHandC(H,C,0)