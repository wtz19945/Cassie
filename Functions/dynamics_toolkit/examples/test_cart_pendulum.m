syms x dx ddx phi dphi ddphi
g = [0;0;9.81];

tree = RigidBodyTree(CartPendulumDescriptor);
tree.set_joint_position_by_name('cart-joint',x);
tree.set_joint_velocity_by_name('cart-joint',dx);

tree.set_joint_position_by_name('pendulum-joint',phi);
tree.set_joint_velocity_by_name('pendulum-joint',dphi);

tree.get_body_com_by_name('pendulum');
tree.get_body_com_by_name('pendulum');
simplify(tree.get_body_kinematic_by_name('pendulum'));

tree.get_body_potetial_energy_by_name('cart',g);
tree.get_body_potetial_energy_by_name('pendulum',g);

tree.get_tree_pontential_energy(g);
simplify(tree.get_tree_kinematic_energy);
% get energy
L = simplify(tree.get_tree_lagrangian(g));

V = [x dx ddx phi dphi ddphi];
% get dynamics
L = Lagrange(L,V);
M = jacobian(L,[ddx ddphi])

% when acceleration is zero, term C should equal to the result of inverse
% dynamics
C = subs(L, [ddx ddphi], zeros(1,2))

% zeros torque should give L = Mddq + C
% works fine
[nH,nC] = tree.getHandC(1);
simplify(nC) - C
simplify(nH) - M