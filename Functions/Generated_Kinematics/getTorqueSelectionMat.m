function [B] = getTorqueSelectionMat
%GETTORQUESELECTIONMAT Summary of this function goes here
%   Detailed explanation goes here
B = zeros(20,10);
B(7,1) = 1;
B(8,2) = 1;
B(9,3) = 1;
B(10,4) = 1;
B(13,5) = 1;

B(14,6) = 1;
B(15,7) = 1;
B(16,8) = 1;
B(17,9) = 1;
B(20,10) = 1;
end

