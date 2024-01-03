function [qd,flag,dual] = Sim_FastAvoidanceV3(Tstep,Nodes,r_min,r_min2,cost,CoM_x,CoM_y,CP_x,CP_y,qo_i,states_ref,step_index...
    ,Qx,Qy,cRx,cRy,cWx,cWy, MPC_index, x_old,y_old0,y_old1,y_old2,y_old3,standing,Obs_Info)
   % Optimization Options
    coder.extrinsic('quadprog');
    coder.extrinsic('osqp');
    coder.extrinsic('solve');
    coder.extrinsic('warm_start');
    coder.extrinsic('temp_MPCV60_form_Step0_mex');
    coder.extrinsic('temp_MPCV60_form_Step1_mex');
    coder.extrinsic('temp_MPCV60_form_Step2_mex');
    coder.extrinsic('temp_MPCV60_form_Step3_mex');
    coder.extrinsic('Fast_MPCV30_form_Step0_mex');
    coder.extrinsic('Fast_MPCV30_form_Step1_mex');
    coder.extrinsic('Fast_MPCV30_form_Step2_mex');
    coder.extrinsic('Fast_MPCV30_form_Step3_mex');
    coder.extrinsic('Fast_MPCV30_form_Step4_mex');
    
    coder.extrinsic('Fast_MPCV12_form_Step0_mex');
    coder.extrinsic('Fast_MPCV12_form_Step1_mex');
    coder.extrinsic('Fast_MPCV12_form_Step2_mex');
    coder.extrinsic('Fast_MPCV12_form_Step3_mex');
    options = optimset('Display','off');
    
    % Create a minimum radius vector for the optimization
    % Neither Radius Increases
%     r1 = r_min.*ones(1,Nodes);  
%     r2 = r_min2.*ones(1,Nodes);
    
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
    
    h = 0.9;
    width = .14 + (vel_des(2) - .5) * .0;
    x0_ref = (2 - exp(sqrt(9.81/h)*Tstep) - exp(-sqrt(9.81/h)*Tstep))/(exp(sqrt(9.81/h)*Tstep)...
        - exp(-sqrt(9.81/h)*Tstep)*vel_des(1))/sqrt(9.81/h);
    dy_des = sqrt(9.81/h) * width * tanh(sqrt(9.81/h) * Tstep/2);
    
    if Foot_index(1) == 1
        s_ref = [states_ref(1);vel_des(1) * ones(4,1);states_ref(3);dy_des * (-1).^(1:4).' + vel_des(2)];
    else
        s_ref = [states_ref(1);vel_des(1) * ones(4,1);states_ref(3);dy_des * (-1).^(2:5).' + vel_des(2)];
    end
    states_ref = s_ref;
    if standing == 1
        ftx = [0.05;0;0];
        fty = [0.10;0;0];
    else
        ftx = [0.00;0;x0_ref];
        fty = [0;0.10;width];
    end
    foot_info = [ftx;fty;d_ft];
    
    if standing == 1
        switch MPC_index
            case 0
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step0_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
            case 1
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step1_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
            case 2
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step2_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
            case 3
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step3_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
            otherwise
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step4_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
        end
        y_old = y_old0(1:end-4*MPC_index);
        temp = [zeros(8,102) eye(8) zeros(8,60)];
        Aeq = [Aeq;temp];
        beq = [beq;zeros(8,1)];
    else
        if Tstep == 0.1
            MPC_index = MPC_index + 4;
            y_old = y_old0(1:end-4*MPC_index);
        elseif Tstep == 0.2
            MPC_index = MPC_index + 3;
            y_old = y_old0(1:end-4*MPC_index);
        elseif Tstep == 0.3
            MPC_index = MPC_index + 2;
            y_old = y_old0(1:end-4*MPC_index);
        elseif Tstep == 0.4
            MPC_index = MPC_index+1;
            y_old = y_old0(1:end-4*MPC_index);
        else
            MPC_index = MPC_index;
            y_old = y_old0(1:end-4*MPC_index);
        end
        
        switch MPC_index
            case 0
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step0_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
%                 y_old = y_old0;
            case 1
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step1_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
%                 y_old = y_old1;
            case 2
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step2_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
%                 y_old = y_old2;
            case 3
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step3_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
%                 y_old = y_old3;
            otherwise
                [Aeq,beq,Aiq,biq,H,f] = Fast_MPCV30_form_Step4_mex(states,Nodes,r,qo,states_ref,Foot_index,weights,foot_info,Obs_Info);
%                 y_old = y_old0;
        end
    end
    prob = osqp;
%     setup(prob,H, f, [Aiq;Aeq], [-inf*ones(size(Aiq,1),1);beq], [biq;beq],'rho',rho,...,
%         'sigma',sigma,'eps_abs',eps_abs,'eps_rel',eps_rel,'eps_prim_inf',eps_prim_inf,'eps_dual_inf',eps_dual_inf,...
%         'polish',polish,'scaled_termination',scaled_termination);
    setup(prob,H, f, [Aiq;Aeq], [-inf*ones(size(Aiq,1),1);beq], [biq;beq],'verbose',false);
    warm_start(prob,'x',x_old,'y',y_old);
    [design_vector,flag,dual] = solve(prob);
        
        
    % Initialize trajectory matrix
    
    % Seperate the states in the design vector
    M = size(CoM_x,1) * 2;           
    % qd = zeros(M * Nodes, 1);        % Initialize the desired states
    qd = design_vector(1: 170, 1);
end
