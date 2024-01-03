function [newM,newC] = fixedB_compressHandC(nH,nC,is_symbolic)
%COMPRESSHANDC Summary of this function goes here
%   Detailed explanation goes here
dim = 15;
if is_symbolic
    newC = sym(zeros(dim,1));
else
    newC = zeros(dim,1);
end
combine_joint = 15;
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

if is_symbolic
    H1 = sym(zeros(dim,dim+1));
else
    H1 = zeros(dim,dim+1);
end

in = 1;
for i = 1: dim
    if i ~= combine_joint
        H1(i,:) = nH(in,:);
        in = in + 1;
    else
        H1(i,:) = nH(in,:) + nH(in+1,:);
        in = in + 2;
    end
end

if is_symbolic
    newM = sym(zeros(dim,dim));
else
    newM = zeros(dim,dim);
end

in = 1;
for i = 1: dim
    if i ~= combine_joint
        newM(:,i) = H1(:,in);
        in = in + 1;
    else
        newM(:,i) = H1(:,in) + H1(:,in+1);
        in = in + 2;
    end
end


nC = newC;
nH = newM;
dim = 14;
if is_symbolic
    newC = sym(zeros(dim,1));
else
    newC = zeros(dim,1);
end
combine_joint = 7;
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
if is_symbolic
    H1 = sym(zeros(dim,dim+1));
else
    H1 = zeros(dim,dim+1);
end
in = 1;
for i = 1:dim
    if i ~= combine_joint
        H1(i,:) = nH(in,:);
        in = in + 1;
    else
        H1(i,:) = nH(in,:) + nH(in+1,:);
        in = in + 2;
    end
end
if is_symbolic
    newM = sym(zeros(dim,dim));
else
    newM = zeros(dim,dim);
end
in = 1;
for i = 1: dim
    if i ~= combine_joint
        newM(:,i) = H1(:,in);
        in = in + 1;
    else
        newM(:,i) = H1(:,in) + H1(:,in+1);
        in = in + 2;
    end
end

end
