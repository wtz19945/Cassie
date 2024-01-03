base = [0;0;1;0;0;0];

ql = rand(7,1); 
qr = rand(7,1);
tic
for n = 1:100
[a,b,c,d,e,f,g,h] = GeneratedFootKinematics(base,ql,qr);
end
toc

tic
for n = 1:100
[aa,bb] = GeneratedToeContactPoint(base,ql,qr);
[cc,dd] = GeneratedHeelContactPoint(base,ql,qr);
[ee,ff] = GeneratedToeContactPointJaco(base,ql,qr);
[gg,hh] = GeneratedHeelContactPointJaco(base,ql,qr);
end
toc

%% 
base = [0;0;1;0;0;0];

ql = rand(7,1); 
qr = rand(7,1);
tic
for n = 1:100
[a,b,c,d] = GeneratedFootJacobian(base,ql,qr);
end
toc

tic
for n = 1:100
[aa,bb] = GeneratedToeContactPointJaco(base,ql,qr);
[cc,dd] = GeneratedHeelContactPointJaco(base,ql,qr);
end
toc

% norm(aa - a)
% norm(bb - b)
% norm(cc - c)
% norm(dd - d)
% norm(ee - e)
% norm(ff - f)
% norm(gg - g)
% norm(hh - h)