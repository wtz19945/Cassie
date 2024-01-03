temp = coder.load('walking_traj_pos4001v3.mat','xData');
y_pos_04 = temp.xData;
temp = coder.load('walking_traj_vel4001v3.mat','dxData');
y_vel_04 = temp.dxData;
temp = coder.load('walking_traj_acc4001v3.mat','ddxData');
y_acc_04 = temp.ddxData;
figure
plot(y_pos_04)

figure
plot(y_vel_04)