classdef RigidBodyTreeSimulinkV2< handle
    %RIGIDBODYTREE Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        tree_descriptor
        joint_num
    end
    
    methods
        function obj = RigidBodyTreeSimulinkV2(Descriptor)
            %RIGIDBODYTREE Construct an instance of this class
            %   Detailed explanation goes here
            obj.tree_descriptor = Descriptor;
            obj.joint_num = 0;
            for i = 1 : size(obj.tree_descriptor.p, 1)
                if obj.tree_descriptor.ismoving(i) == 1
                    obj.joint_num = obj.joint_num + 1;
                    obj.tree_descriptor.joint_index(i) = obj.joint_num;
                end
            end
            
        end
        
      function setTreeStateFromVector(obj,q,dq)
            in = 1;
            for i = 1 : size(obj.tree_descriptor.p, 1)
                if obj.tree_descriptor.ismoving(i) == 1
                    obj.tree_descriptor.jointPos(i) = q(in,1);
                    obj.tree_descriptor.jointVel(i) = dq(in,1);
                    in = in + 1;
                end
            end
        end
        
        function setTreeAccFromVector(ddq)
        end
        
        function setMotorTorqueFromVector(tau)
        end
        
       
        function tau = inverseDynamics(obj, is_symbolic, g)
            % inverse dynamics function(i.e. given q,dq,ddq, find torque).
            % Note that current q,dq,ddq need to be set before calling this
            % function
            
            tree_copy = obj.tree_descriptor;
            if is_symbolic
                tau = sym(zeros(obj.joint_num,1));
            else
                tau = zeros(obj.joint_num,1);
            end
            
            % first pass, compute force on each joint
            for i = 1:size(tree_copy.p, 1)
                % get basic info
                p = tree_copy.p(i);
                sv = tree_copy.Sv(i,:);
                sw = tree_copy.Sw(i,:);
                r = tree_copy.r(i,:);
                R = tree_copy.R(:,:,i);
                q = tree_copy.jointPos(i);
                dq = tree_copy.jointVel(i);
                ddq = tree_copy.jointAcc(i);
                [Xj,vj] = jcalc(sv,sw,q,dq);
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                Xc = Xj * Xt;
                % first link
                if p == 0
                    vel =  vj;
                    acc = Xc * g + [sw sv]' * ddq;
                    tree_copy.vel(:,i) = vel;
                    tree_copy.acc(:,i) = acc;
                else
                    vel = Xc * tree_copy.vel(:,p) + vj;
                    acc = Xc * tree_copy.acc(:,p) + [sw sv]' * ddq + crm(vel)*vj;
                    tree_copy.vel(:,i) = vel;
                    tree_copy.acc(:,i) = acc;
                end
                tree_copy.Xc(:,:,i) = Xc;
                m = tree_copy.m(i);
                c = tree_copy.c(i,:);
                Ic = tree_copy.Ic(i,:);
                I = mcI(m,c,Ic);
                f = I * acc + crf(vel) * I * vel;
                tree_copy.f(:,i) = f;
            end
            % second pass, transform joint force to joint torque
            in = obj.joint_num;
            for i = size(tree_copy.p, 1) :-1: 1
                sv = tree_copy.Sv(i,:);
                sw = tree_copy.Sw(i,:);
                p = tree_copy.p(i);
                f = tree_copy.f(:,i);
                Xc = tree_copy.Xc(:,:,i);
                % for fixed joint, don't need to output
                if sum(sv) == 0 && sum(sw) == 0
                    if p ~=0
                        tree_copy.f(:,p) = tree_copy.f(:,p) + Xc.' * f;
                    end
                else
                    taui = [sw sv] * f;
                    tau(in,1) = taui;
                    in = in - 1;
                    if p ~=0
                        tree_copy.f(:,p) = tree_copy.f(:,p) + Xc.' * f;
                    end
                end
            end
        end
        %
        
        %         function [H,C,qdd] = forwardDynamics(obj, is_symbolic)
        %             % Compute joint acceleration given the torque(Note torque needs to be set beforehead)
        %             % Need since H can only be a double array or a sym array.
        %             tree_copy = obj.tree_descriptor;
        %
        %         end
        
        function [H,C] = getHandC(obj, is_symbolic, g)
            % Compute H and C in dynamics equation
            % is_symbolic? whether the equation contains symbolic variable
            tree_copy = obj.tree_descriptor;
            if is_symbolic
                C = sym(zeros(obj.joint_num,1));
                H = sym(zeros(obj.joint_num,obj.joint_num));
            else
                C = zeros(obj.joint_num,1);
                H = zeros(obj.joint_num,obj.joint_num);
            end
            %% compute C
            for i = 1:size(tree_copy.p, 1)
                i
                % get basic info
                p = tree_copy.p(i);
                sv = tree_copy.Sv(i,:);
                sw = tree_copy.Sw(i,:);
                r = tree_copy.r(i,:);
                R = tree_copy.R(:,:,i);
                q = tree_copy.jointPos(i);
                dq = tree_copy.jointVel(i);
                ddq = tree_copy.jointAcc(i);
                [Xj,vj] = jcalc(sv,sw,q,dq);
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                Xc = Xj * Xt;
                % first link
                if p == 0
                    vel =  vj;
                    acc = Xc * g + [sw sv]' * ddq;
                    tree_copy.vel(:,i) = vel;
                    tree_copy.acc(:,i) = acc;
                else
                    vel = Xc * tree_copy.vel(:,p) + vj;
                    acc = Xc * tree_copy.acc(:,p) + [sw sv]' * ddq + crm(vel)*vj;
                    tree_copy.vel(:,i) = vel;
                    tree_copy.acc(:,i) = acc;
                end
                tree_copy.Xc(:,:,i) = Xc;
                m = tree_copy.m(i);
                c = tree_copy.c(i,:);
                Ic = tree_copy.Ic(i,:);
                I = mcI(m,c,Ic);
                f = I * acc + crf(vel) * I * vel;
                % probably spring force or joint value is considered???
%                 a = [0;0;0;0;0;-1];
%                 if i == 13
%                     f = I * acc + crf(vel) * I * vel + a * 1500  * tree_copy.jointPos(i);
%                 end
%                 if i == 16
%                     f = I * acc + crf(vel) * I * vel + a * 1250  * (tree_copy.jointPos(i) - (13*pi/180 - tree_copy.jointPos(12)));
%                 end        
%                 if i == 25
%                     f = I * acc + crf(vel) * I * vel + a * 1500  * tree_copy.jointPos(i);
%                 end
%                 if i == 28
%                     f = I * acc + crf(vel) * I * vel + a * 1250  * (tree_copy.jointPos(i) - (13*pi/180 - tree_copy.jointPos(24)));
%                 end     
                
                tree_copy.f(:,i) = f;
                tree_copy.I(:,:,i) = I;
            end
            % second pass, transform joint force to joint torque
            in = obj.joint_num;
            for i = size(tree_copy.p, 1) :-1: 1
                i
                sv = tree_copy.Sv(i,:);
                sw = tree_copy.Sw(i,:);
                p = tree_copy.p(i);
                f = tree_copy.f(:,i);
                Xc = tree_copy.Xc(:,:,i);
                % for fixed joint, don't need to output
                if sum(sv) == 0 && sum(sw) == 0
                    if p ~=0
                        tree_copy.f(:,p) = tree_copy.f(:,p) + Xc.' * f;
                    end
                    
                else
                    taui = [sw sv] * f;
                    C(in,1) = taui;
                    in = in - 1;
                    if p ~=0
                        tree_copy.f(:,p) = tree_copy.f(:,p) + Xc.' * f;
                    end
                end
            end
            %% compute H
            in = obj.joint_num;
            for i = size(tree_copy.p, 1) :-1: 1
                i
                sv = tree_copy.Sv(i,:);
                sw = tree_copy.Sw(i,:);
                p = tree_copy.p(i);
                Xc = tree_copy.Xc(:,:,i);
                I = tree_copy.I(:,:,i);
                % Current Inertia will be transformed to the previous Inertia
                if p ~= 0
                    tree_copy.I(:,:,p) = tree_copy.I(:,:,p) + Xc.' * I * Xc;
                end
                % if current joint is not a fixed joint
                if sum(sw)~=0 || sum(sv)~=0
                    F = I * [sw sv]';
                    H(in,in) = [sw sv] * F;
                    j = i;
                    while tree_copy.p(j) >0
                        F = tree_copy.Xc(:,:,j).' * F;
                        j = tree_copy.p(j);
                        % if this is a moving joint
                        if sum(tree_copy.Sw(j,:))~=0 || sum(tree_copy.Sv(j,:))~=0
                            jn = tree_copy.joint_index(j);
                            H(in,jn) = F.' * [tree_copy.Sw(j,:) tree_copy.Sv(j,:)]';
                            H(jn,in) = H(in,jn).';
                        end
                    end
                    in = in - 1;
                end
            end
        end
        
        function P = get_tree_pontential_energy(obj, g)
            % compute the total potential energy of this tree
            % TODO: delete redundant code
            tree_copy = obj.tree_descriptor;
            P = 0;
            % start from the first body, compute potential
            for i = 1:size(tree_copy, 2)
                p = tree_copy(i).p;
                if p == 0
                    H = eye(4);
                    sv = tree_copy(i).Sv;
                    sw = tree_copy(i).Sw;
                    r = tree_copy(i).r;
                    R = tree_copy(i).R;
                    q = tree_copy(i).jointPos;
                    m = tree_copy(i).m;
                    c = tree_copy(i).c;
                    HJ = get_transformation(q,sv,sw);
                    HB = [R r';0 0 0 1];
                    tree_copy(i).Transform = H * HB * HJ;
                    Tcom = tree_copy(i).Transform * [eye(3) c';0 0 0 1];
                    P = P + m * g' * Tcom(1:3,4);
                else
                    H = tree_copy(p).Transform;
                    sv = tree_copy(i).Sv;
                    sw = tree_copy(i).Sw;
                    r = tree_copy(i).r;
                    R = tree_copy(i).R;
                    q = tree_copy(i).jointPos;
                    c = tree_copy(i).c;
                    m = tree_copy(i).m;
                    HJ = get_transformation(q,sv,sw);
                    HB = [R r';0 0 0 1];
                    tree_copy(i).Transform = H * HB * HJ;
                    Tcom = tree_copy(i).Transform * [eye(3) c';0 0 0 1];
                    P = P + m * g' * Tcom(1:3,4);
                end
            end
            
        end
        function K = get_tree_kinematic_energy(obj)
            tree_copy = obj.tree_descriptor;
            K = 0;
            % start from the first body, compute kinematic eneryg of each
            % body
            for i = 1:size(tree_copy, 2)
                p = tree_copy(i).p;
                if p == 0
                    % assume a fixed base
                    v = zeros(6,1);
                    % get relative info
                    sv = tree_copy(i).Sv;
                    sw = tree_copy(i).Sw;
                    r = tree_copy(i).r;
                    R = tree_copy(i).R;
                    q = tree_copy(i).jointPos;
                    dq = tree_copy(i).jointVel;
                    [Xj,vj] = jcalc(sv,sw,q,dq);
                    Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                    Xc = Xj * Xt;
                    % v is the spatial velocity
                    v = Xc * v + vj;
                    tree_copy(i).spatialv = v;
                    % get the inertia and kinematic energy
                    m = tree_copy(i).m;
                    c = tree_copy(i).c;
                    Ic = tree_copy(i).Ic;
                    I = mcI(m,c,Ic);
                    K = K + .5 * v.' * I * v;
                else
                    % get the velocity of parent frame
                    v = tree_copy(p).spatialv;
                    % get relative info
                    sv = tree_copy(i).Sv;
                    sw = tree_copy(i).Sw;
                    r = tree_copy(i).r;
                    R = tree_copy(i).R;
                    q = tree_copy(i).jointPos;
                    dq = tree_copy(i).jointVel;
                    [Xj,vj] = jcalc(sv,sw,q,dq);
                    Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                    Xc = Xj * Xt;
                    % get the spatial v in current frame
                    v = Xc * v + vj;
                    tree_copy(i).spatialv = v;
                    % get the inertia and kinematic energy
                    m = tree_copy(i).m;
                    c = tree_copy(i).c;
                    Ic = tree_copy(i).Ic;
                    I = mcI(m,c,Ic);
                    K = K + .5 * v.' * I * v;
                end
            end
        end
        function L = get_tree_lagrangian(obj,g)
            P = obj.get_tree_pontential_energy(g);
            K = obj.get_tree_kinematic_energy;
            L = K - P;
        end
        function [pos,R] = get_body_position_by_name(obj,bodyname)
            % get the position of a body in base frame
            % trace back to the base
            index = find(strcmp({obj.tree_descriptor.name}, bodyname)==1);
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            % find the homogeneous transformation recursively
            H = eye(4);
            for i = 1:length(in)
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                HJ = get_transformation(q,sv,sw);
                HB = [R r';0 0 0 1];
                H = H * HB * HJ;
            end
            % get pos and rotation from spatial transformation matrix
            pos = H(1:3,4);
            R = H(1:3,1:3);
        end
        
        function [pos] = get_body_com_by_name(obj,bodyname)
            % get the position of a body com in base frame
            [pos,R] = get_body_position_by_name(obj,bodyname);
            H = [R pos;0 0 0 1];
            index = find(strcmp({obj.tree_descriptor.name}, bodyname)==1);
            c = obj.tree_descriptor(index).c;
            H = H * [eye(3) c';0 0 0 1];
            pos = H(1:3,4);
        end
        
        function [P] = get_body_potetial_energy_by_name(obj,bodyname,g)
            % get the position of a specific body
            [pos] = get_body_com_by_name(obj,bodyname);
            index = find(strcmp({obj.tree_descriptor.name}, bodyname)==1);
            m = obj.tree_descriptor(index).m;
            P = m * g' * pos;
        end
        
        function [vel] = get_body_velocity_by_name(obj,bodyname)
            % spatial velocity of joint on each link
            % trace back to the base
            index = find(strcmp({obj.tree_descriptor.name}, bodyname)==1);
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            % compute the velocity recursively
            v = zeros(6,1);
            X = eye(6);
            for i = 1:length(in)
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                dq = obj.tree_descriptor(in(i)).jointVel;
                [Xj,vj] = jcalc(sv,sw,q,dq);
                c = obj.tree_descriptor(index).c;
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(c);
                Xc = Xj * Xt;
                X = Xc * X;
                v = v + Xinvtimev(X,vj);
            end
            vel = v;
        end
        
        function [P] = get_body_kinematic_by_name(obj,bodyname)
            % get the kinematic eneryg of each body
            % trace back to the base
            index = find(strcmp({obj.tree_descriptor.name}, bodyname)==1);
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            % compute the velocity recursively
            v = zeros(6,1);
            X = eye(6);
            for i = 1:length(in)
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                dq = obj.tree_descriptor(in(i)).jointVel;
                [Xj,vj] = jcalc(sv,sw,q,dq);
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                Xc = Xj * Xt;
                X = Xc * X;
                v = Xc * v + vj;
            end
            index = find(strcmp({obj.tree_descriptor.name}, bodyname)==1);
            m = obj.tree_descriptor(index).m;
            c = obj.tree_descriptor(index).c;
            Ic = obj.tree_descriptor(index).Ic;
            I = mcI(m,c,Ic);
            P = .5 * v.' * I * v;
        end
        
        function pos = get_joint_position_by_name(obj,jointname)
            index = strcmp({obj.tree_descriptor.jointName}, jointname)==1;
            pos = obj.tree_descriptor(index).jointPos;
        end
        
        function vel = get_joint_velocity_by_name(obj,jointname)
            index = strcmp({obj.tree_descriptor.jointName}, jointname)==1;
            vel = obj.tree_descriptor(index).jointVel;
        end
        
        function set_joint_position_by_name(obj,jointname,value)
            % set the position of a specific joint
            index = strcmp({obj.tree_descriptor.jointName}, jointname)==1;
            obj.tree_descriptor(index).jointPos = value;
        end
        
        function set_joint_velocity_by_name(obj,jointname,value)
            % set the velocity of a specific joint
            index = strcmp({obj.tree_descriptor.jointName}, jointname)==1;
            obj.tree_descriptor(index).jointVel = value;
        end
        
        function set_joint_acc_by_name(obj,jointname,value)
            % set the velocity of a specific joint
            index = strcmp({obj.tree_descriptor.jointName}, jointname)==1;
            obj.tree_descriptor(index).jointAcc = value;
        end
        
        function body = find_body_by_name(obj,body_name)
            %METHOD1 Get Body by its name. Empty struct returened for body
            %not in the tree
            index = strcmp({obj.tree_descriptor.name}, body_name)==1;
            body = obj.tree_descriptor(index);
        end
        
        function body_names = get_body_names(obj)
            body_names = {};
            for i = 1 : size(obj.tree_descriptor, 2)
                body_names{i} = obj.tree_descriptor(i).name;
            end
        end
        
        function joint_names = get_joint_names(obj)
            joint_names = {};
            for i = 1 : size(obj.tree_descriptor, 2)
                joint_names{i} = obj.tree_descriptor(i).jointName;
            end
        end
    end
    
end

