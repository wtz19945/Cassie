syms x y z rotz roty rotx lsr lsp lsy lse rsr rsp rsy rse ...
     dx dy dz drotz droty drotx dlsr dlsp dlsy dlse drsr drsp drsy drse      
theta_left = [x y z rotz roty rotx lsr lsp lsy lse];
theta_right = [x y z rotz roty rotx rsr rsp rsy rse];


tree = RigidBodyTree(DigitDescriptor);

tree.set_joint_position_by_name('basex-joint',x);
tree.set_joint_velocity_by_name('basex-joint',dx);

tree.set_joint_position_by_name('basey-joint',y);
tree.set_joint_velocity_by_name('basey-joint',dy);

tree.set_joint_position_by_name('basez-joint',z);
tree.set_joint_velocity_by_name('basez-joint',dz);

tree.set_joint_position_by_name('baserotz-joint',rotz);
tree.set_joint_velocity_by_name('baserotz-joint',drotz);

tree.set_joint_position_by_name('baseroty-joint',roty);
tree.set_joint_velocity_by_name('baseroty-joint',droty);

tree.set_joint_position_by_name('baserotx-joint',rotx);
tree.set_joint_velocity_by_name('baserotx-joint',drotx);

tree.set_joint_position_by_name('left-shoulder-roll-joint',lsr);
tree.set_joint_velocity_by_name('left-shoulder-roll-joint',dlsr);

tree.set_joint_position_by_name('left-shoulder-pitch-joint',lsp);
tree.set_joint_velocity_by_name('left-shoulder-pitch-joint',dlsp);

tree.set_joint_position_by_name('left-shoulder-yaw-joint',lsy);
tree.set_joint_velocity_by_name('left-shoulder-yaw-joint',dlsy);

tree.set_joint_position_by_name('left-elbow-joint',lse);
tree.set_joint_velocity_by_name('left-elbow-joint',dlse);

tree.set_joint_position_by_name('left-hand-joint',0);
tree.set_joint_velocity_by_name('left-hand-joint',0);

tree.set_joint_position_by_name('right-shoulder-roll-joint',rsr);
tree.set_joint_velocity_by_name('right-shoulder-roll-joint',drsr);

tree.set_joint_position_by_name('right-shoulder-pitch-joint',rsp);
tree.set_joint_velocity_by_name('right-shoulder-pitch-joint',drsp);

tree.set_joint_position_by_name('right-shoulder-yaw-joint',rsy);
tree.set_joint_velocity_by_name('right-shoulder-yaw-joint',drsy);

tree.set_joint_position_by_name('right-elbow-joint',rse);
tree.set_joint_velocity_by_name('right-elbow-joint',drse);

tree.set_joint_position_by_name('right-hand-joint',0);
tree.set_joint_velocity_by_name('right-hand-joint',0);

[p_lefthand,~] = tree.get_body_position_by_name('left-hand');
Jp_lefthand = jacobian(p_lefthand,theta_left);

[p_righthand,~] = tree.get_body_position_by_name('right-hand');
Jp_righthand = jacobian(p_righthand,theta_right);

matlabFunction(p_lefthand,Jp_lefthand, 'file','kin_left_arm.m', 'Outputs', {'p_left_hand','Jp_left_hand'}, 'vars', theta_left);
matlabFunction(p_righthand,Jp_righthand, 'file','kin_right_arm.m', 'Outputs', {'p_right_hand','Jp_right_hand'}, 'vars', theta_right);
%%
[p,j] = kin_left_arm([0 0 1 0 0 0 -.3 .94 0 .36])
[p,j] = kin_right_arm([0 0 1 0 0 0 .3 -.94 0 -.36])

[p,j] = kin_left_arm([0.0529962
0.00358089
    1.01212
          0
  -0.193282
-0.00471689
  0.0802919
    1.72391
  -0.335142
  -0.454407])