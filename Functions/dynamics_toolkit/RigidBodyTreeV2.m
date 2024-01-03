classdef RigidBodyTreeV2< handle
    %RIGIDBODYTREE Summary of this class goes here
    %   Detailed explanation goes here
    
    properties
        tree_descriptor
        joint_num
    end
    
    methods
        function obj = RigidBodyTreeV2(Descriptor)
            %RIGIDBODYTREE Construct an instance of this class
            %   Detailed explanation goes here
            obj.tree_descriptor = Descriptor;
            obj.joint_num = 0;
            for i = 1 : size(obj.tree_descriptor, 2)
                obj.tree_descriptor(i).jointName = strcat(obj.tree_descriptor(i).name , '-joint');
                % default value of joint pos,vel and acc
                obj.tree_descriptor(i).jointPos = 0;
                obj.tree_descriptor(i).jointVel = 0;
                obj.tree_descriptor(i).jointAcc = 0;
                obj.tree_descriptor(i).hc = zeros(6,1);
                if sum(obj.tree_descriptor(i).Sv) ~= 0 || sum(obj.tree_descriptor(i).Sw) ~= 0
                    obj.joint_num = obj.joint_num + 1;
                    obj.tree_descriptor(i).joint_index = obj.joint_num;
                end
            end
        end
        
        function setTreeStateFromVector(q,dq)
            
        end
        
        function setTreeAccFromVector(ddq)
        end
        
        function setMotorTorqueFromVector(tau)
        end
        
        function tau = inverseDynamics(obj, is_symbolic)
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
            for i = 1:size(tree_copy, 2)
                % get basic info
                p = tree_copy(i).p;
                sv = tree_copy(i).Sv;
                sw = tree_copy(i).Sw;
                r = tree_copy(i).r;
                R = tree_copy(i).R;
                q = tree_copy(i).jointPos;
                dq = tree_copy(i).jointVel;
                ddq = tree_copy(i).jointAcc;
                [Xj,vj] = jcalc(sv,sw,q,dq);
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                Xc = Xj * Xt;
                % first link
                if p == 0
                    vel =  vj;
                    acc = Xc * [0;0;0;0;0;9.81] + [sw sv]' * ddq;
                    tree_copy(i).vel = vel;
                    tree_copy(i).acc = acc;
                else
                    vel = Xc * tree_copy(p).vel + vj;
                    acc = Xc * tree_copy(p).acc + [sw sv]' * ddq + crm(vel)*vj;
                    tree_copy(i).vel = vel;
                    tree_copy(i).acc = acc;
                end
                tree_copy(i).Xc = Xc;
                m = tree_copy(i).m;
                c = tree_copy(i).c;
                Ic = tree_copy(i).Ic;
                I = mcI(m,c,Ic);
                f = I * acc + crf(vel) * I * vel;
                tree_copy(i).f = f;
            end
            % second pass, transform joint force to joint torque
            in = obj.joint_num;
            for i = size(tree_copy, 2) :-1: 1
                sv = tree_copy(i).Sv;
                sw = tree_copy(i).Sw;
                p = tree_copy(i).p;
                f = tree_copy(i).f;
                Xc = tree_copy(i).Xc;
                % for fixed joint, don't need to output
                if sum(sv) == 0 && sum(sw) == 0
                    if p ~=0
                        tree_copy(p).f = tree_copy(p).f + Xc.' * f;
                    end
                else
                    taui = [sw sv] * f;
                    tau(in,1) = taui;
                    in = in - 1;
                    if p ~=0
                        tree_copy(p).f = tree_copy(p).f + Xc.' * f;
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
        
        function h_w = get_Momentum(obj)
            tree_copy = obj.tree_descriptor;
            htot = zeros(6,1);
            for i = 1:size(tree_copy, 2)
                p = tree_copy(i).p;
                sv = tree_copy(i).Sv;
                sw = tree_copy(i).Sw;
                r = tree_copy(i).r;
                R = tree_copy(i).R;
                q = tree_copy(i).jointPos;
                dq = tree_copy(i).jointVel;
                [Xj,vj] = jcalc(sv,sw,q,dq);
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                Xc = Xj * Xt;
                m = tree_copy(i).m;
                c = tree_copy(i).c;
                Ic = tree_copy(i).Ic;
                I = mcI(m,c,Ic);
                
                % first link
                if p == 0
                    vel =  vj;
                    tree_copy(i).vel = vel;
                else
                    vel = Xc * tree_copy(p).vel + vj;
                    tree_copy(i).vel = vel;
                end
                
                tree_copy(i).Xc = Xc;
                tree_copy(i).I = I;
                tree_copy(i).hc = I * vel;
                
            end
            
            for i = size(tree_copy, 2):-1:1
                i
                p = tree_copy(i).p;
                Xc = tree_copy(i).Xc;
                hc = tree_copy(i).hc;
                if p ~= 0
                    tree_copy(p).hc = tree_copy(p).hc + Xc.' * hc;
                else
                    % inertia matrix and momentum at base
                    htot = htot + Xc.' * tree_copy(i).hc;
                end
            end
            h_w = htot(1:3);
        end
        
        function [KE,PE,htot,Itot,mass,cm,vcm] = get_EnerMo(obj)
            tree_copy = obj.tree_descriptor;
            KE = 0;
            PE = 0;
            htot = zeros(6,1);
            Itot = zeros(6,6);
            mass = 0;
            cm = zeros(3,1);
            vcm = zeros(3,1);
            for i = 1:size(tree_copy, 2)
                i
                p = tree_copy(i).p;
                sv = tree_copy(i).Sv;
                sw = tree_copy(i).Sw;
                r = tree_copy(i).r;
                R = tree_copy(i).R;
                q = tree_copy(i).jointPos;
                dq = tree_copy(i).jointVel;
                [Xj,vj] = jcalc(sv,sw,q,dq);
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                Xc = Xj * Xt;
                m = tree_copy(i).m;
                c = tree_copy(i).c;
                Ic = tree_copy(i).Ic;
                I = mcI(m,c,Ic);
                
                % first link
                if p == 0
                    vel =  vj;
                    tree_copy(i).vel = vel;
                else
                    vel = Xc * tree_copy(p).vel + vj;
                    tree_copy(i).vel = vel;
                end
                
                tree_copy(i).Xc = Xc;
                tree_copy(i).I = I;
                tree_copy(i).hc = I * vel;
                KE = KE + .5 * vel.' * I * vel;
            end
            
            for i = size(tree_copy, 2):-1:1
                i
                p = tree_copy(i).p;
                Xc = tree_copy(i).Xc;
                hc = tree_copy(i).hc;
                I = tree_copy(i).I;
                if p ~= 0
                    tree_copy(p).hc = tree_copy(p).hc + Xc.' * hc;
                    tree_copy(p).I = tree_copy(p).I + Xc.' * I * Xc;
                else
                    % inertia matrix and momentum at base
                    htot = htot + Xc.' * tree_copy(i).hc;
                    Itot = Itot + Xc.' * I * Xc;
                end
            end
            
            h = htot(4:6);
            g = [0;0;9.81];
            [mass,cm] = mcI_rbi(Itot);
            PE = -mass * cm.' * g;
            vcm = h / mass;
        end
        
        function [H,C] = getHandC(obj, is_symbolic)
            % Compute H and C in dynamics equation
            % is_symbolic? whether the equation contains symbolic variable
            tree_copy = obj.tree_descriptor;
            if is_symbolic == 1
                C = sym(zeros(obj.joint_num,1));
                H = sym(zeros(obj.joint_num,obj.joint_num));
            elseif is_symbolic == 2
                import casadi.*
                C = MX.sym('C',obj.joint_num);
                H = MX.sym('H',obj.joint_num,obj.joint_num);
            else
                C = zeros(obj.joint_num,1);
                H = zeros(obj.joint_num,obj.joint_num);
            end
            
            %% compute C, use inverse dynamics method to compute the offset term
            for i = 1:size(tree_copy, 2)
                % get basic info
                p = tree_copy(i).p;
                sv = tree_copy(i).Sv;
                sw = tree_copy(i).Sw;
                r = tree_copy(i).r;
                R = tree_copy(i).R;
                q = tree_copy(i).jointPos;
                dq = tree_copy(i).jointVel;
                ddq = tree_copy(i).jointAcc;
                [Xj,vj] = jcalc(sv,sw,q,dq);
                Xt = [R' zeros(3,3);zeros(3,3) R'] * Xtrans(r);
                Xc = Xj * Xt;
                % first link
                if p == 0
                    vel =  vj;
                    acc = Xc * [0;0;0;0;0;9.81] + [sw sv]' * ddq;
                    tree_copy(i).vel = vel;
                    tree_copy(i).acc = acc;
                else
                    vel = Xc * tree_copy(p).vel + vj;
                    acc = Xc * tree_copy(p).acc + [sw sv]' * ddq + crm(vel)*vj;
                    tree_copy(i).vel = vel;
                    tree_copy(i).acc = acc;
                end
                tree_copy(i).Xc = Xc;
                m = tree_copy(i).m;
                c = tree_copy(i).c;
                Ic = tree_copy(i).Ic;
                I = mcI(m,c,Ic);
                f = I * acc + crf(vel) * I * vel;
                % whether to add this
%                 if strcmp(tree_copy(i).jointName,'left-knee-spring-joint')
%                     f = I * acc + crf(vel) * I * vel - [0;0;0;0;0;1] * 2300  * tree_copy(i).jointPos;
%                 end
%                 if strcmp(tree_copy(i).jointName,'left-heel-spring-joint')
%                     f = I * acc + crf(vel) * I * vel - [0;0;0;0;0;1] * 2000  * tree_copy(i).jointPos;
%                 end        
                tree_copy(i).f = f;
                tree_copy(i).I = I;
            end
            % second pass, transform joint force to joint torque
            in = obj.joint_num;
            for i = size(tree_copy, 2) :-1: 1
                sv = tree_copy(i).Sv;
                sw = tree_copy(i).Sw;
                p = tree_copy(i).p;
                f = tree_copy(i).f;
                Xc = tree_copy(i).Xc;
                % for fixed joint, don't need to output
                if sum(sv) == 0 && sum(sw) == 0
                    if p ~=0
                        tree_copy(p).f = tree_copy(p).f + Xc.' * f;
                    end
                    
                else
                    taui = [sw sv] * f;
                    C(in,1) = taui;
                    in = in - 1;
                    if p ~=0
                        tree_copy(p).f = tree_copy(p).f + Xc.' * f;
                    end
                end
            end
            %% compute inertia Matrix
            in = obj.joint_num;
            for i = size(tree_copy, 2) :-1: 1
                sv = tree_copy(i).Sv;
                sw = tree_copy(i).Sw;
                p = tree_copy(i).p;
                Xc = tree_copy(i).Xc;
                I = tree_copy(i).I;
                % Current Inertia will be transformed to the previous Inertia
                if p ~= 0
                    tree_copy(p).I = tree_copy(p).I + Xc.' * I * Xc;
                end
                % if current joint is not a fixed joint
                if sum(sw)~=0 || sum(sv)~=0
                    F = I * [sw sv]';
                    H(in,in) = [sw sv] * F;
                    j = i;
                    while tree_copy(j).p >0
                        F = tree_copy(j).Xc.' * F;
                        j = tree_copy(j).p;
                        % if this is a moving joint
                        if sum(tree_copy(j).Sw)~=0 || sum(tree_copy(j).Sv)~=0
                            jn = tree_copy(j).joint_index;
                            H(in,jn) = F.' * [tree_copy(j).Sw tree_copy(j).Sv]';
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
        
        
        function [pos,R] = get_pel_position_by_name(obj,bodyname)
            % get the position of body in the individual link frame
            index = find(strcmp({obj.tree_descriptor.name}, bodyname)==1);
            % trace back to the base
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            
            % find the homogeneous transformation
            H = eye(4);
            
            if contains(bodyname,'foot')
                p = [17.62; 52.19; 0] / 1000;
                R = [-0.766044443118978, 0, -0.642787609686539; 0.642787609686539, 0 -0.766044443118978; 0, -1, 0];
                off = R * [0.08;0;0] + p;
                H = [eye(3) -off;0 0 0 1];
            end
            
            for i = length(in) : -1 : 1
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                HJ = get_transformation(q,sv,sw);
                HB = [R r';0 0 0 1];
                invHJ = [HJ(1:3,1:3).' -HJ(1:3,1:3).' * HJ(1:3,4);0 0 0 1];
                invHB = [HB(1:3,1:3).' -HB(1:3,1:3).' * HB(1:3,4);0 0 0 1];

                H = H * invHJ * invHB;
            end
            % get position and rotation from homogeneous transformation
            pos = H(1:3,4);
            R = H(1:3,1:3);
        end
        
        function [] = Animate_CassieTree(obj,base,gif_i,h, Ts,filename, time)
            % Define foot contact point offset
            p_off = [17.62; 52.19; 0] / 1000;
            R_off = [-0.766044443118978, 0, -0.642787609686539; 0.642787609686539, 0 -0.766044443118978; 0, -1, 0];
            % plot base
            cla
            grid on
            plot3(base(1),base(2),base(3),'o','MarkerSize',20,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor','b');
            hold on
            text(.8,.8,1.4,strcat('Time:',string(time)))
            ylim([-1 1])
            xlim([-1 1])
            zlim([-.5 1.5])
            
            % plot left foot
            index = find(strcmp({obj.tree_descriptor.name}, 'left-foot')==1);
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            H = eye(4);
            pos_prev = base(1:3,1);
            for i = 1:length(in)
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                HJ = get_transformation(q,sv,sw);
                HB = [R r';0 0 0 1];
                H = H * HB * HJ;
                
                if i >=8
                    plot3(H(1,4),H(2,4),H(3,4),'o','MarkerSize',8,...
                        'MarkerEdgeColor','k',...
                        'MarkerFaceColor',[125 125 125]/255);
                    plot3([pos_prev(1) H(1,4)],[pos_prev(2) H(2,4)],[pos_prev(3) H(3,4)],'k','LineWidth',1);
                    pos_prev = H(1:3,4);
                end
            end
            
            left_toe = H(1:3,4) + H(1:3,1:3) * (R_off * [0.08;0;0] + p_off);
            left_heel = H(1:3,4) + H(1:3,1:3) * (R_off * [-0.08;0;0] + p_off);
            plot3(left_toe(1),left_toe(2),left_toe(3),'o','MarkerSize',5,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor','r');
            plot3([left_toe(1) H(1,4)],[left_toe(2) H(2,4)],[left_toe(3) H(3,4)],'k','LineWidth',1);
            
            plot3(left_heel(1),left_heel(2),left_heel(3),'o','MarkerSize',5,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor','r');
            plot3([left_heel(1) H(1,4)],[left_heel(2) H(2,4)],[left_heel(3) H(3,4)],'k','LineWidth',1);
            
            % plot right foot
            index = find(strcmp({obj.tree_descriptor.name}, 'right-foot')==1);
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            
            H = eye(4);
            pos_prev = base(1:3,1);
            for i = 1:length(in)
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                HJ = get_transformation(q,sv,sw);
                HB = [R r';0 0 0 1];
                H = H * HB * HJ;
                
                if i >= 8
                    plot3(H(1,4),H(2,4),H(3,4),'o','MarkerSize',8,...
                        'MarkerEdgeColor','k',...
                        'MarkerFaceColor',[125 125 125]/255);
                    plot3([pos_prev(1) H(1,4)],[pos_prev(2) H(2,4)],[pos_prev(3) H(3,4)],'k','LineWidth',1);
                    pos_prev = H(1:3,4);
                end
            end
            
            right_toe = H(1:3,4) + H(1:3,1:3) * (R_off * [0.08;0;0] + p_off);
            right_heel = H(1:3,4) + H(1:3,1:3) * (R_off * [-0.08;0;0] + p_off);
            plot3(right_toe(1),right_toe(2),right_toe(3),'o','MarkerSize',5,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor','r');
            plot3([right_toe(1) H(1,4)],[right_toe(2) H(2,4)],[right_toe(3) H(3,4)],'k','LineWidth',1);
            
            plot3(right_heel(1),right_heel(2),right_heel(3),'o','MarkerSize',5,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor','r');
            plot3([right_heel(1) H(1,4)],[right_heel(2) H(2,4)],[right_heel(3) H(3,4)],'k','LineWidth',1);
            
            drawnow;
            frame = getframe(h);
            im = frame2im(frame);
            [imind,cm] = rgb2ind(im,256);
            if gif_i == 1
                imwrite(imind,cm,filename,'gif','DelayTime',Ts,'Loopcount',inf);
            elseif gif_i == numel(gif_i)
                imwrite(imind,cm,filename,'gif','DelayTime',Ts,'WriteMode','append');
            else
                imwrite(imind,cm,filename,'gif','DelayTime',Ts,'WriteMode','append');
            end
        end
        
        function [] = plot_CassieTree(obj,base)
            % Define foot contact point offset
            p_off = [17.62; 52.19; 0] / 1000;
            R_off = [-0.766044443118978, 0, -0.642787609686539; 0.642787609686539, 0 -0.766044443118978; 0, -1, 0];
            % plot base
            plot3(base(1),base(2),base(3),'o','MarkerSize',20,...
            'MarkerEdgeColor','k',...
            'MarkerFaceColor','b');
            hold on
            ylim([-0.6 0.6])
            xlim([-0.6 0.6])
            zlim([-.2 1.5])
    
            % plot left foot
            index = find(strcmp({obj.tree_descriptor.name}, 'left-foot')==1);
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            H = eye(4);
            pos_prev = base(1:3,1);
            for i = 1:length(in)
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                HJ = get_transformation(q,sv,sw);
                HB = [R r';0 0 0 1];
                H = H * HB * HJ;
                
                if i >=8    
                    plot3(H(1,4),H(2,4),H(3,4),'o','MarkerSize',8,...
                        'MarkerEdgeColor','k',...
                        'MarkerFaceColor',[125 125 125]/255);
                    plot3([pos_prev(1) H(1,4)],[pos_prev(2) H(2,4)],[pos_prev(3) H(3,4)],'k','LineWidth',1);
                    pos_prev = H(1:3,4);
                end
            end
            
            left_toe = H(1:3,4) + H(1:3,1:3) * (R_off * [0.08;0;0] + p_off);
            left_heel = H(1:3,4) + H(1:3,1:3) * (R_off * [-0.08;0;0] + p_off);
            plot3(left_toe(1),left_toe(2),left_toe(3),'o','MarkerSize',8,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor',[125 125 125]/255);
            plot3([left_toe(1) H(1,4)],[left_toe(2) H(2,4)],[left_toe(3) H(3,4)],'k','LineWidth',1);
     
            plot3(left_heel(1),left_heel(2),left_heel(3),'o','MarkerSize',8,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor',[125 125 125]/255);
            plot3([left_heel(1) H(1,4)],[left_heel(2) H(2,4)],[left_heel(3) H(3,4)],'k','LineWidth',1);
            
            % plot right foot
            index = find(strcmp({obj.tree_descriptor.name}, 'right-foot')==1);
            in = index;
            while obj.tree_descriptor(index).p ~= 0
                index = obj.tree_descriptor(index).p;
                in = [index;in];
            end
            
            H = eye(4);
            pos_prev = base(1:3,1);
            for i = 1:length(in)
                sv = obj.tree_descriptor(in(i)).Sv;
                sw = obj.tree_descriptor(in(i)).Sw;
                r = obj.tree_descriptor(in(i)).r;
                R = obj.tree_descriptor(in(i)).R;
                q = obj.tree_descriptor(in(i)).jointPos;
                HJ = get_transformation(q,sv,sw);
                HB = [R r';0 0 0 1];
                H = H * HB * HJ;

                if i >= 8
                    plot3(H(1,4),H(2,4),H(3,4),'o','MarkerSize',8,...
                        'MarkerEdgeColor','k',...
                        'MarkerFaceColor',[125 125 125]/255);
                    plot3([pos_prev(1) H(1,4)],[pos_prev(2) H(2,4)],[pos_prev(3) H(3,4)],'k','LineWidth',1);
                    pos_prev = H(1:3,4);
                end
            end
            
            right_toe = H(1:3,4) + H(1:3,1:3) * (R_off * [0.08;0;0] + p_off);
            right_heel = H(1:3,4) + H(1:3,1:3) * (R_off * [-0.08;0;0] + p_off);
            plot3(right_toe(1),right_toe(2),right_toe(3),'o','MarkerSize',8,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor',[125 125 125]/255);
            plot3([right_toe(1) H(1,4)],[right_toe(2) H(2,4)],[right_toe(3) H(3,4)],'k','LineWidth',1);
     
            plot3(right_heel(1),right_heel(2),right_heel(3),'o','MarkerSize',8,...
                'MarkerEdgeColor','k',...
                'MarkerFaceColor',[125 125 125]/255);
            plot3([right_heel(1) H(1,4)],[right_heel(2) H(2,4)],[right_heel(3) H(3,4)],'k','LineWidth',1);
            
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
            % find the homogeneous transformation
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
