syms t p1(t) p2(t) p3(t) dp1(t) dp2(t) dp3(t)...
    x(t) y(t) z(t) q1(t) q2(t) q3(t) q4(t) dx(t) dy(t) dz(t) dq1(t) dq2(t) dq3(t) dq4(t)
g = [0;0;-9.81];
Rx = @(t) [1 0 0; 0 cos(t) -sin(t); 0 sin(t) cos(t)]; % degrees
Ry = @(t) [cos(t) 0 sin(t); 0 1 0; -sin(t) 0 cos(t)]; % degrees
Rz = @(t) [cos(t) -sin(t) 0; sin(t) cos(t) 0; 0 0 1]; % degrees
Rxyz = @(v) Rx(v(1))*Ry(v(2))*Rz(v(3));
Rzyx = @(v) Rz(v(3))*Ry(v(2))*Rx(v(1));


tree = RigidBodyTree(FourLinkWalkerDescriptor);

tree.set_joint_position_by_name('rot_x-joint',p1(t));
tree.set_joint_velocity_by_name('rot_x-joint',dp1(t));

tree.set_joint_position_by_name('rot_y-joint',p2(t));
tree.set_joint_velocity_by_name('rot_y-joint',dp2(t));

tree.set_joint_position_by_name('rot_z-joint',p3(t));
tree.set_joint_velocity_by_name('rot_z-joint',dp3(t));

tree.set_joint_position_by_name('base_x-joint',x(t));
tree.set_joint_velocity_by_name('base_x-joint',dx(t));

tree.set_joint_position_by_name('base_y-joint',y(t));
tree.set_joint_velocity_by_name('base_y-joint',dy(t));

tree.set_joint_position_by_name('base_z-joint',z(t));
tree.set_joint_velocity_by_name('base_z-joint',dz(t));

tree.set_joint_position_by_name('left1-joint',q1(t));
tree.set_joint_velocity_by_name('left1-joint',dq1(t));

tree.set_joint_position_by_name('left2-joint',q2(t));
tree.set_joint_velocity_by_name('left2-joint',dq2(t));

tree.set_joint_position_by_name('right1-joint',q3(t));
tree.set_joint_velocity_by_name('right1-joint',dq3(t));

tree.set_joint_position_by_name('right2-joint',q4(t));
tree.set_joint_velocity_by_name('right2-joint',dq4(t));

%  tree.get_body_kinematic_by_name('base_x')
%  tree.get_body_kinematic_by_name('base_y')
%  tree.get_body_kinematic_by_name('base_z')

[~,R] = tree.get_body_position_by_name('left2');
[p] = tree.get_body_com_by_name('left2');
v = diff(p,t);
dR = diff(R,t);
w_skew = R.' * dR;
w = ([-w_skew(2,3);w_skew(1,3);-w_skew(1,2)]);
K = .5*(v.' * v + w.' * w);
K = subs(K,str2sym('diff(x(t), t)'),dx(t));
K = subs(K,str2sym('diff(y(t), t)'),dy(t));
K = subs(K,str2sym('diff(z(t), t)'),dz(t));
K = subs(K,str2sym('diff(p1(t), t)'),dp1(t));
K = subs(K,str2sym('diff(p2(t), t)'),dp2(t));
K = subs(K,str2sym('diff(p3(t), t)'),dp3(t));
K = subs(K,str2sym('diff(q1(t), t)'),dq1(t));
K = subs(K,str2sym('diff(q2(t), t)'),dq2(t));
a = simplify(tree.get_body_kinematic_by_name('left2') - K);
% make sure to define the right inertial matrix!!!
% double(subs(a,[p1(t) p2(t) p3(t) dp1(t) dp2(t) dp3(t) x(t) y(t) z(t) dx(t) dy(t) dz(t) q1(t) dq1(t) q2(t) dq2(t)], ones(1,16)))