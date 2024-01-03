
% figure(1)
% filename = 'testnew51.gif';
% for n = 1:200:size(data,2)
%       y = x.^n;
%       plot(x,y)
%       drawnow
%       frame = getframe(1);
%       im = frame2im(frame);
%       [imind,cm] = rgb2ind(im,256);
%       if n == 1
%           imwrite(imind,cm,filename,'gif', 'Loopcount',inf);
%       else
%           imwrite(imind,cm,filename,'gif','WriteMode','append');
%       end
% end
data = load('./Data/QP_Data.MAT');
data = data.data;
x = 0:0.01:1;
figure(1)
filename = './Data/Avoidance.gif';
Ts = 0.1;
axis_limit = 1;
for n = 1:100:size(data,2)
      cla
      x_traj = data(1 + 42 + 14 + 1:1 + 42 + 14 + 16,n);
      y_traj = data(1 + 42 + 14 + 17:1 + 42 + 14 + 32,n);
      x_obs  = data(104,n);
      y_obs  = data(105,n);
      
      plot(y_traj,x_traj,'LineWidth',2)
      hold on
      circle(y_obs,x_obs,.3)
      circle(y_obs,x_obs,1)
%       plot(y_obs,x_obs,'MarkerSize',15)
      xlim([-axis_limit axis_limit])
      ylim([-axis_limit axis_limit])
      drawnow
      frame = getframe(1);
      im = frame2im(frame);
      [imind,cm] = rgb2ind(im,256);
      if n == 1
          imwrite(imind,cm,filename,'gif','DelayTime',Ts, 'Loopcount',inf);
      else
          imwrite(imind,cm,filename,'gif','DelayTime',Ts,'WriteMode','append');
      end
end