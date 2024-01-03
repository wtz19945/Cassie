close all
clear
clc
k_his = zeros(100,1);

p = 1;
k_his(1) = 1;
for i = 2:100
    pnew = p*0.64 + 0.36;
    k = pnew * (pnew^-1 + 1)^-1;
    p = pnew - k * pnew;
    k_his(i,1) = k;
end
plot(k_his)
