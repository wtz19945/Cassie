function [qd,flag,dual] = Sim_IROS_StepAvoid(Tstep,Nodes,r_min,r_min2,cost,CoM_x,CoM_y,CP_x,CP_y,qo_i,states_ref,step_index...
    ,Qx,Qy,cRx,cRy,cWx,cWy, MPC_index, x_old,y_old0,y_old1,y_old2,y_old3,standing)
   % Optimization Options
    coder.extrinsic('quadprog');
    coder.extrinsic('osqp');
    coder.extrinsic('solve');
    coder.extrinsic('warm_start');
    coder.extrinsic('temp_MPCV61Multi_form_Step0_mex');
    coder.extrinsic('temp_MPCV61Multi_form_Step1_mex');
    coder.extrinsic('temp_MPCV61Multi_form_Step2_mex');
    coder.extrinsic('temp_MPCV61Multi_form_Step3_mex');
    
    options = optimset('Display','off');
    
    % Create a minimum radius vector for the optimization
    % Neither Radius Increases
    r1 = r_min.*ones(1,Nodes);  
    r2 = r_min2.*ones(1,Nodes);
    
    d_ft = [.8;.3];
    
    % use OSQP
    rho =0.0001; % default .1                new 0.0001;
    sigma = 1e-6; % default 1e-6          new 1e-6
    eps_abs = 1e-5; % default 1e-3        new 1e-7
    eps_rel = 1e-5; % default 1e-3        new 1e-7
    eps_prim_inf = 1e-4; % default 1e-4   new 1e-5
    eps_dual_inf = 1e-4; % default 1e-4   new 1e-5
    polish = false; % default false       new true
    scaled_termination  = false; % default false new true
        
    states = [CoM_x;CoM_y;CP_x;CP_y];
    vel_des = [states_ref(2);states_ref(4)];
    r = [r_min;r_min2];
    qo = qo_i;
    Foot_index = [step_index;0];
    weights = [cost;Qx;Qy;cRx;cRy;cWx;cWy];
    
    if standing == 1
        ftx = [0.05;0;0];
        fty = [0.10;0;0];
    else
        ftx = [0.00;0;vel_des(1) * Tstep];
        fty = [0;0.02;.16];
    end
    foot_info = [ftx;fty;d_ft];
    
    if standing == 1
        switch MPC_index
            case 0
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step0_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old0;
            case 1
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step1_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old1;
            case 2
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step2_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old2;
            case 3
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step3_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old3;
            otherwise
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step0_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old0;
        end
        temp = [zeros(8,102) eye(8) zeros(8,85)];
        Aeq = [Aeq;temp];
        beq = [beq;zeros(8,1)];
    else
        switch MPC_index
            case 0
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step0_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old0;
            case 1
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step1_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old1;
            case 2
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step2_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old2;
            case 3
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step3_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old3;
            otherwise
                [Aeq,beq,Aiq,biq,H,f] = temp_MPCV61Multi_form_Step0_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info);
                y_old = y_old0;
        end
    end
    prob = osqp;
%     setup(prob,H, f, [Aiq;Aeq], [-inf*ones(size(Aiq,1),1);beq], [biq;beq],'rho',rho,...,
%         'sigma',sigma,'eps_abs',eps_abs,'eps_rel',eps_rel,'eps_prim_inf',eps_prim_inf,'eps_dual_inf',eps_dual_inf,...
%         'polish',polish,'scaled_termination',scaled_termination);
    setup(prob,H, f, [Aiq;Aeq], [-inf*ones(size(Aiq,1),1);beq], [biq;beq]);
    warm_start(prob,'x',x_old,'y',y_old);
    [design_vector,flag,dual] = solve(prob);
        
        
    % Initialize trajectory matrix
    
    % Seperate the states in the design vector
    M = size(CoM_x,1) * 2;           
    % qd = zeros(M * Nodes, 1);        % Initialize the desired states
    qd = design_vector(1: 195, 1);
end
