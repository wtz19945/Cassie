/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV98_form_Step0.cpp
 *
 * Code generation for function 'temp_MPC3DFootV98_form_Step0'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step0.h"
#include "temp_MPC3DFootV98_form_Step0_emxutil.h"
#include "Iq_RightStart03DFootV98.h"
#include "Iq_LeftStart03DFootV98.h"
#include "Obj_LeftStart03DFootV98.h"
#include "linspace.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 54,    /* lineNo */
  "temp_MPC3DFootV98_form_Step0",      /* fcnName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 55,  /* lineNo */
  "temp_MPC3DFootV98_form_Step0",      /* fcnName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 88,  /* lineNo */
  "temp_MPC3DFootV98_form_Step0",      /* fcnName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 95,  /* lineNo */
  "temp_MPC3DFootV98_form_Step0",      /* fcnName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 20,  /* lineNo */
  "cat",                               /* fcnName */
  "D:\\Matlab\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 100, /* lineNo */
  "cat",                               /* fcnName */
  "D:\\Matlab\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  34,                                  /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 54,/* lineNo */
  1,                                   /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 54,    /* lineNo */
  40,                                  /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 55,  /* lineNo */
  41,                                  /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "D:\\Matlab\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 54,  /* lineNo */
  21,                                  /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 54,  /* lineNo */
  21,                                  /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 55,  /* lineNo */
  22,                                  /* colNo */
  "temp_MPC3DFootV98_form_Step0",      /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\Code_gen\\temp_MPC3DFootV98_form_Step0.m",/* pName */
  1                                    /* checkKind */
};

/* Function Definitions */
void temp_MPC3DFootV98_form_Step0(c_temp_MPC3DFootV98_form_Step0S *SD, const
  emlrtStack *sp, const real_T states[8], real_T Nodes, const real_T r[4], const
  real_T qo[3], const real_T states_ref[63], const real_T MPC_index[2], const
  real_T weights[16], const real_T foot_info[8], const real_T foot_obs_info[23],
  const real_T foot_future_info[20], real_T Aeq[29512], real_T beq[124], real_T
  Aiq[34748], real_T biq[146], real_T H[56644], real_T f[238])
{
  int32_T i;
  real_T x_ref[5];
  real_T y_ref[5];
  emxArray_real_T *varargin_1;
  int32_T loop_ub;
  emxArray_real_T *varargin_2;
  boolean_T b0;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  real_T dv0[5];
  real_T dv1[5];
  real_T z_foot_traj[5];
  real_T x_foot_traj[5];
  real_T y_foot_traj[5];
  real_T eq_in[9];
  real_T iq_in[30];
  real_T obj_in[26];
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* TEMP_MPC_FORM Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*    This function formulates all the matrices for MPC QP */
  /*    states: current robot states, include CoM states and foot placement */
  /*    Nodes: Number of nodes in MPC prediction */
  /*    r: radius for obstacle avoidance */
  /*    qo: obstacle states */
  /*    states_ref: desired robot states */
  /*    MPC_index : left/right step index, contact sequence index */
  /*    weights   : weight in the MPC cost function */
  /*  unpack inputs */
  for (i = 0; i < 2; i++) {
    x_ref[i] = states_ref[i];
  }

  for (i = 0; i < 3; i++) {
    x_ref[i + 2] = states_ref[58];
  }

  y_ref[0] = states_ref[2];
  for (i = 0; i < 4; i++) {
    y_ref[i + 1] = states_ref[i + 59];
  }

  emxInit_real_T(sp, &varargin_1, 2, &emlrtRTEI, true);
  i = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  if (!(Nodes >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Nodes, (emlrtDCInfo *)&d_emlrtDCI, sp);
  }

  if (Nodes != (int32_T)muDoubleScalarFloor(Nodes)) {
    emlrtIntegerCheckR2012b(Nodes, (emlrtDCInfo *)&c_emlrtDCI, sp);
  }

  varargin_1->size[1] = (int32_T)Nodes;
  emxEnsureCapacity_real_T(sp, varargin_1, i, &emlrtRTEI);
  if (!(Nodes >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Nodes, (emlrtDCInfo *)&d_emlrtDCI, sp);
  }

  if (Nodes != (int32_T)muDoubleScalarFloor(Nodes)) {
    emlrtIntegerCheckR2012b(Nodes, (emlrtDCInfo *)&c_emlrtDCI, sp);
  }

  loop_ub = (int32_T)Nodes;
  for (i = 0; i < loop_ub; i++) {
    varargin_1->data[i] = r[0];
  }

  emxInit_real_T(sp, &varargin_2, 2, &emlrtRTEI, true);
  if (Nodes != (int32_T)muDoubleScalarFloor(Nodes)) {
    emlrtIntegerCheckR2012b(Nodes, (emlrtDCInfo *)&emlrtDCI, sp);
  }

  i = varargin_2->size[0] * varargin_2->size[1];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = (int32_T)Nodes;
  emxEnsureCapacity_real_T(sp, varargin_2, i, &emlrtRTEI);
  loop_ub = (int32_T)Nodes;
  for (i = 0; i < loop_ub; i++) {
    varargin_2->data[i] = r[2];
  }

  st.site = &emlrtRSI;
  b_st.site = &e_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  b0 = true;
  if (varargin_2->size[1] != varargin_1->size[1]) {
    b0 = false;
  }

  if (!b0) {
    emlrtErrorWithMessageIdR2012b(&c_st, &d_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &r1, 2, &b_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 2;
  r1->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&b_st, r1, i, &emlrtRTEI);
  loop_ub = varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[r1->size[0] * i] = varargin_1->data[varargin_1->size[0] * i];
  }

  loop_ub = varargin_2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[1 + r1->size[0] * i] = varargin_2->data[varargin_2->size[0] * i];
  }

  i = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  if (Nodes != (int32_T)muDoubleScalarFloor(Nodes)) {
    emlrtIntegerCheckR2012b(Nodes, (emlrtDCInfo *)&e_emlrtDCI, sp);
  }

  varargin_1->size[1] = (int32_T)Nodes;
  emxEnsureCapacity_real_T(sp, varargin_1, i, &emlrtRTEI);
  if (Nodes != (int32_T)muDoubleScalarFloor(Nodes)) {
    emlrtIntegerCheckR2012b(Nodes, (emlrtDCInfo *)&e_emlrtDCI, sp);
  }

  loop_ub = (int32_T)Nodes;
  for (i = 0; i < loop_ub; i++) {
    varargin_1->data[i] = r[1];
  }

  if (Nodes != (int32_T)muDoubleScalarFloor(Nodes)) {
    emlrtIntegerCheckR2012b(Nodes, (emlrtDCInfo *)&b_emlrtDCI, sp);
  }

  i = varargin_2->size[0] * varargin_2->size[1];
  varargin_2->size[0] = 1;
  varargin_2->size[1] = (int32_T)Nodes;
  emxEnsureCapacity_real_T(sp, varargin_2, i, &emlrtRTEI);
  loop_ub = (int32_T)Nodes;
  for (i = 0; i < loop_ub; i++) {
    varargin_2->data[i] = r[3];
  }

  st.site = &b_emlrtRSI;
  b_st.site = &e_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  b0 = true;
  if (varargin_2->size[1] != varargin_1->size[1]) {
    b0 = false;
  }

  if (!b0) {
    emlrtErrorWithMessageIdR2012b(&c_st, &d_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&c_st, &r2, 2, &c_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 2;
  r2->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&b_st, r2, i, &emlrtRTEI);
  loop_ub = varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[r2->size[0] * i] = varargin_1->data[varargin_1->size[0] * i];
  }

  emxFree_real_T(&varargin_1);
  loop_ub = varargin_2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[1 + r2->size[0] * i] = varargin_2->data[varargin_2->size[0] * i];
  }

  emxFree_real_T(&varargin_2);
  linspace(foot_obs_info[3], foot_obs_info[5], dv0);
  linspace(foot_obs_info[4], foot_obs_info[6], dv1);
  for (i = 0; i < 5; i++) {
    x_foot_traj[i] = dv0[i];
    y_foot_traj[i] = dv1[i];
  }

  z_foot_traj[0] = 0.0;
  z_foot_traj[1] = foot_obs_info[22] / 2.0;
  z_foot_traj[2] = foot_obs_info[22];
  z_foot_traj[3] = foot_obs_info[22] / 2.0;
  z_foot_traj[4] = 0.0;
  eq_in[0] = states[4];
  eq_in[1] = states[5];
  for (i = 0; i < 7; i++) {
    eq_in[i + 2] = foot_obs_info[i];
  }

  memcpy(&iq_in[0], &foot_obs_info[7], 15U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    iq_in[i + 15] = x_foot_traj[i];
    iq_in[i + 20] = y_foot_traj[i];
    iq_in[i + 25] = z_foot_traj[i];
  }

  for (i = 0; i < 4; i++) {
    obj_in[i] = weights[i + 12];
  }

  for (i = 0; i < 5; i++) {
    obj_in[i + 4] = x_foot_traj[i];
    obj_in[i + 9] = y_foot_traj[i];
    obj_in[i + 14] = z_foot_traj[i];
  }

  for (i = 0; i < 7; i++) {
    obj_in[i + 19] = foot_obs_info[i];
  }

  /*  [Aeq,beq] = EqualityConstraints_LeftStartV4(CoM_x,CoM_y); */
  /*  [Aiq,biq] = InequalityConstraints_LeftStartV4(CoM_x, CoM_y, qo, r1, r2, ob_cost ,CP_x,CP_y,foot_dis); */
  /*   */
  /*  % Develop The Objective Function Matrix and Vector */
  /*  [H,f] = ObjectiveFunction_LeftStart0V4(CP_x,CP_y,vel_des(1), vel_des(2),Qx,Qy,cRx,cRy,cWx,cWy); */
  if (MPC_index[0] == 1.0) {
    /*  Develop the Constraints Matrix and Vector */
    /* EQ_LEFTSTART03DFOOTV98 */
    /*     [AEQ,BEQ] = EQ_LEFTSTART03DFOOTV98(IN1,IN2,IN3,ZH1,IN5,IN6,IN7) */
    /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
    /*     06-Jul-2023 15:22:35 */
    t2 = 1.0 / states_ref[6];
    t3 = t2 * 0.981;
    SD->f3.dv2[0] = -1.0;
    SD->f3.dv2[1] = t2 * -0.981;
    memset(&SD->f3.dv2[2], 0, 94U * sizeof(real_T));
    SD->f3.dv2[96] = 1.0;
    memset(&SD->f3.dv2[97], 0, 27U * sizeof(real_T));
    SD->f3.dv2[124] = -0.1;
    SD->f3.dv2[125] = -1.0;
    memset(&SD->f3.dv2[126], 0, 95U * sizeof(real_T));
    SD->f3.dv2[221] = 1.0;
    memset(&SD->f3.dv2[222], 0, 26U * sizeof(real_T));
    SD->f3.dv2[248] = 1.0;
    SD->f3.dv2[249] = 0.0;
    SD->f3.dv2[250] = -1.0;
    SD->f3.dv2[251] = -t3;
    memset(&SD->f3.dv2[252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[373] = 1.0;
    SD->f3.dv2[374] = -0.1;
    SD->f3.dv2[375] = -1.0;
    memset(&SD->f3.dv2[376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[498] = 1.0;
    SD->f3.dv2[499] = 0.0;
    SD->f3.dv2[500] = -1.0;
    SD->f3.dv2[501] = -t3;
    memset(&SD->f3.dv2[502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[623] = 1.0;
    SD->f3.dv2[624] = -0.1;
    SD->f3.dv2[625] = -1.0;
    memset(&SD->f3.dv2[626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[748] = 1.0;
    SD->f3.dv2[749] = 0.0;
    SD->f3.dv2[750] = -1.0;
    SD->f3.dv2[751] = -t3;
    memset(&SD->f3.dv2[752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[873] = 1.0;
    SD->f3.dv2[874] = -0.1;
    SD->f3.dv2[875] = -1.0;
    memset(&SD->f3.dv2[876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[998] = 1.0;
    SD->f3.dv2[999] = 0.0;
    SD->f3.dv2[1000] = -1.0;
    SD->f3.dv2[1001] = -t3;
    memset(&SD->f3.dv2[1002], 0, 98U * sizeof(real_T));
    SD->f3.dv2[1100] = 1.0;
    memset(&SD->f3.dv2[1101], 0, 22U * sizeof(real_T));
    SD->f3.dv2[1123] = 1.0;
    SD->f3.dv2[1124] = -0.1;
    SD->f3.dv2[1125] = -1.0;
    memset(&SD->f3.dv2[1126], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1248] = 1.0;
    SD->f3.dv2[1249] = 0.0;
    SD->f3.dv2[1250] = -1.0;
    SD->f3.dv2[1251] = -t3;
    memset(&SD->f3.dv2[1252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[1373] = 1.0;
    SD->f3.dv2[1374] = -0.1;
    SD->f3.dv2[1375] = -1.0;
    memset(&SD->f3.dv2[1376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1498] = 1.0;
    SD->f3.dv2[1499] = 0.0;
    SD->f3.dv2[1500] = -1.0;
    SD->f3.dv2[1501] = -t3;
    memset(&SD->f3.dv2[1502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[1623] = 1.0;
    SD->f3.dv2[1624] = -0.1;
    SD->f3.dv2[1625] = -1.0;
    memset(&SD->f3.dv2[1626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1748] = 1.0;
    SD->f3.dv2[1749] = 0.0;
    SD->f3.dv2[1750] = -1.0;
    SD->f3.dv2[1751] = -t3;
    memset(&SD->f3.dv2[1752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[1873] = 1.0;
    SD->f3.dv2[1874] = -0.1;
    SD->f3.dv2[1875] = -1.0;
    memset(&SD->f3.dv2[1876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1998] = 1.0;
    SD->f3.dv2[1999] = 0.0;
    SD->f3.dv2[2000] = -1.0;
    SD->f3.dv2[2001] = -t3;
    memset(&SD->f3.dv2[2002], 0, 91U * sizeof(real_T));
    SD->f3.dv2[2093] = 1.0;
    memset(&SD->f3.dv2[2094], 0, 29U * sizeof(real_T));
    SD->f3.dv2[2123] = 1.0;
    SD->f3.dv2[2124] = -0.1;
    SD->f3.dv2[2125] = -1.0;
    memset(&SD->f3.dv2[2126], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2248] = 1.0;
    SD->f3.dv2[2249] = 0.0;
    SD->f3.dv2[2250] = -1.0;
    SD->f3.dv2[2251] = -t3;
    memset(&SD->f3.dv2[2252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[2373] = 1.0;
    SD->f3.dv2[2374] = -0.1;
    SD->f3.dv2[2375] = -1.0;
    memset(&SD->f3.dv2[2376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2498] = 1.0;
    SD->f3.dv2[2499] = 0.0;
    SD->f3.dv2[2500] = -1.0;
    SD->f3.dv2[2501] = -t3;
    memset(&SD->f3.dv2[2502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[2623] = 1.0;
    SD->f3.dv2[2624] = -0.1;
    SD->f3.dv2[2625] = -1.0;
    memset(&SD->f3.dv2[2626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2748] = 1.0;
    SD->f3.dv2[2749] = 0.0;
    SD->f3.dv2[2750] = -1.0;
    SD->f3.dv2[2751] = -t3;
    memset(&SD->f3.dv2[2752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[2873] = 1.0;
    SD->f3.dv2[2874] = -0.1;
    SD->f3.dv2[2875] = -1.0;
    memset(&SD->f3.dv2[2876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2998] = 1.0;
    SD->f3.dv2[2999] = 0.0;
    SD->f3.dv2[3000] = -1.0;
    SD->f3.dv2[3001] = -t3;
    memset(&SD->f3.dv2[3002], 0, 84U * sizeof(real_T));
    SD->f3.dv2[3086] = 1.0;
    memset(&SD->f3.dv2[3087], 0, 36U * sizeof(real_T));
    SD->f3.dv2[3123] = 1.0;
    SD->f3.dv2[3124] = -0.1;
    SD->f3.dv2[3125] = -1.0;
    memset(&SD->f3.dv2[3126], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3248] = 1.0;
    SD->f3.dv2[3249] = 0.0;
    SD->f3.dv2[3250] = -1.0;
    SD->f3.dv2[3251] = -t3;
    memset(&SD->f3.dv2[3252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[3373] = 1.0;
    SD->f3.dv2[3374] = -0.1;
    SD->f3.dv2[3375] = -1.0;
    memset(&SD->f3.dv2[3376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3498] = 1.0;
    SD->f3.dv2[3499] = 0.0;
    SD->f3.dv2[3500] = -1.0;
    SD->f3.dv2[3501] = -t3;
    memset(&SD->f3.dv2[3502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[3623] = 1.0;
    SD->f3.dv2[3624] = -0.1;
    SD->f3.dv2[3625] = -1.0;
    memset(&SD->f3.dv2[3626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3748] = 1.0;
    SD->f3.dv2[3749] = 0.0;
    SD->f3.dv2[3750] = -1.0;
    SD->f3.dv2[3751] = -t3;
    memset(&SD->f3.dv2[3752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[3873] = 1.0;
    SD->f3.dv2[3874] = -0.1;
    SD->f3.dv2[3875] = -1.0;
    memset(&SD->f3.dv2[3876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3998] = 1.0;
    memset(&SD->f3.dv2[3999], 0, 80U * sizeof(real_T));
    SD->f3.dv2[4079] = 1.0;
    memset(&SD->f3.dv2[4080], 0, 43U * sizeof(real_T));
    SD->f3.dv2[4123] = 1.0;
    memset(&SD->f3.dv2[4124], 0, 124U * sizeof(real_T));
    SD->f3.dv2[4248] = -1.0;
    SD->f3.dv2[4249] = -t3;
    memset(&SD->f3.dv2[4250], 0, sizeof(real_T) << 6);
    SD->f3.dv2[4314] = 1.0;
    memset(&SD->f3.dv2[4315], 0, 57U * sizeof(real_T));
    SD->f3.dv2[4372] = -0.1;
    SD->f3.dv2[4373] = -1.0;
    memset(&SD->f3.dv2[4374], 0, 65U * sizeof(real_T));
    SD->f3.dv2[4439] = 1.0;
    memset(&SD->f3.dv2[4440], 0, 56U * sizeof(real_T));
    SD->f3.dv2[4496] = 1.0;
    SD->f3.dv2[4497] = 0.0;
    SD->f3.dv2[4498] = -1.0;
    SD->f3.dv2[4499] = -t3;
    memset(&SD->f3.dv2[4500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[4621] = 1.0;
    SD->f3.dv2[4622] = -0.1;
    SD->f3.dv2[4623] = -1.0;
    memset(&SD->f3.dv2[4624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[4746] = 1.0;
    SD->f3.dv2[4747] = 0.0;
    SD->f3.dv2[4748] = -1.0;
    SD->f3.dv2[4749] = -t3;
    memset(&SD->f3.dv2[4750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[4871] = 1.0;
    SD->f3.dv2[4872] = -0.1;
    SD->f3.dv2[4873] = -1.0;
    memset(&SD->f3.dv2[4874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[4996] = 1.0;
    SD->f3.dv2[4997] = 0.0;
    SD->f3.dv2[4998] = -1.0;
    SD->f3.dv2[4999] = -t3;
    memset(&SD->f3.dv2[5000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[5121] = 1.0;
    SD->f3.dv2[5122] = -0.1;
    SD->f3.dv2[5123] = -1.0;
    memset(&SD->f3.dv2[5124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5246] = 1.0;
    SD->f3.dv2[5247] = 0.0;
    SD->f3.dv2[5248] = -1.0;
    SD->f3.dv2[5249] = -t3;
    memset(&SD->f3.dv2[5250], 0, 70U * sizeof(real_T));
    SD->f3.dv2[5320] = 1.0;
    memset(&SD->f3.dv2[5321], 0, 50U * sizeof(real_T));
    SD->f3.dv2[5371] = 1.0;
    SD->f3.dv2[5372] = -0.1;
    SD->f3.dv2[5373] = -1.0;
    memset(&SD->f3.dv2[5374], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5496] = 1.0;
    SD->f3.dv2[5497] = 0.0;
    SD->f3.dv2[5498] = -1.0;
    SD->f3.dv2[5499] = -t3;
    memset(&SD->f3.dv2[5500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[5621] = 1.0;
    SD->f3.dv2[5622] = -0.1;
    SD->f3.dv2[5623] = -1.0;
    memset(&SD->f3.dv2[5624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5746] = 1.0;
    SD->f3.dv2[5747] = 0.0;
    SD->f3.dv2[5748] = -1.0;
    SD->f3.dv2[5749] = -t3;
    memset(&SD->f3.dv2[5750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[5871] = 1.0;
    SD->f3.dv2[5872] = -0.1;
    SD->f3.dv2[5873] = -1.0;
    memset(&SD->f3.dv2[5874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5996] = 1.0;
    SD->f3.dv2[5997] = 0.0;
    SD->f3.dv2[5998] = -1.0;
    SD->f3.dv2[5999] = -t3;
    memset(&SD->f3.dv2[6000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[6121] = 1.0;
    SD->f3.dv2[6122] = -0.1;
    SD->f3.dv2[6123] = -1.0;
    memset(&SD->f3.dv2[6124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6246] = 1.0;
    SD->f3.dv2[6247] = 0.0;
    SD->f3.dv2[6248] = -1.0;
    SD->f3.dv2[6249] = -t3;
    memset(&SD->f3.dv2[6250], 0, 63U * sizeof(real_T));
    SD->f3.dv2[6313] = 1.0;
    memset(&SD->f3.dv2[6314], 0, 57U * sizeof(real_T));
    SD->f3.dv2[6371] = 1.0;
    SD->f3.dv2[6372] = -0.1;
    SD->f3.dv2[6373] = -1.0;
    memset(&SD->f3.dv2[6374], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6496] = 1.0;
    SD->f3.dv2[6497] = 0.0;
    SD->f3.dv2[6498] = -1.0;
    SD->f3.dv2[6499] = -t3;
    memset(&SD->f3.dv2[6500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[6621] = 1.0;
    SD->f3.dv2[6622] = -0.1;
    SD->f3.dv2[6623] = -1.0;
    memset(&SD->f3.dv2[6624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6746] = 1.0;
    SD->f3.dv2[6747] = 0.0;
    SD->f3.dv2[6748] = -1.0;
    SD->f3.dv2[6749] = -t3;
    memset(&SD->f3.dv2[6750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[6871] = 1.0;
    SD->f3.dv2[6872] = -0.1;
    SD->f3.dv2[6873] = -1.0;
    memset(&SD->f3.dv2[6874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6996] = 1.0;
    SD->f3.dv2[6997] = 0.0;
    SD->f3.dv2[6998] = -1.0;
    SD->f3.dv2[6999] = -t3;
    memset(&SD->f3.dv2[7000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[7121] = 1.0;
    SD->f3.dv2[7122] = -0.1;
    SD->f3.dv2[7123] = -1.0;
    memset(&SD->f3.dv2[7124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7246] = 1.0;
    SD->f3.dv2[7247] = 0.0;
    SD->f3.dv2[7248] = -1.0;
    SD->f3.dv2[7249] = -t3;
    memset(&SD->f3.dv2[7250], 0, 56U * sizeof(real_T));
    SD->f3.dv2[7306] = 1.0;
    memset(&SD->f3.dv2[7307], 0, sizeof(real_T) << 6);
    SD->f3.dv2[7371] = 1.0;
    SD->f3.dv2[7372] = -0.1;
    SD->f3.dv2[7373] = -1.0;
    memset(&SD->f3.dv2[7374], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7496] = 1.0;
    SD->f3.dv2[7497] = 0.0;
    SD->f3.dv2[7498] = -1.0;
    SD->f3.dv2[7499] = -t3;
    memset(&SD->f3.dv2[7500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[7621] = 1.0;
    SD->f3.dv2[7622] = -0.1;
    SD->f3.dv2[7623] = -1.0;
    memset(&SD->f3.dv2[7624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7746] = 1.0;
    SD->f3.dv2[7747] = 0.0;
    SD->f3.dv2[7748] = -1.0;
    SD->f3.dv2[7749] = -t3;
    memset(&SD->f3.dv2[7750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[7871] = 1.0;
    SD->f3.dv2[7872] = -0.1;
    SD->f3.dv2[7873] = -1.0;
    memset(&SD->f3.dv2[7874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7996] = 1.0;
    SD->f3.dv2[7997] = 0.0;
    SD->f3.dv2[7998] = -1.0;
    SD->f3.dv2[7999] = -t3;
    memset(&SD->f3.dv2[8000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[8121] = 1.0;
    SD->f3.dv2[8122] = -0.1;
    SD->f3.dv2[8123] = -1.0;
    memset(&SD->f3.dv2[8124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[8246] = 1.0;
    memset(&SD->f3.dv2[8247], 0, 52U * sizeof(real_T));
    SD->f3.dv2[8299] = 1.0;
    memset(&SD->f3.dv2[8300], 0, 71U * sizeof(real_T));
    SD->f3.dv2[8371] = 1.0;
    memset(&SD->f3.dv2[8372], 0, 124U * sizeof(real_T));
    SD->f3.dv2[8496] = -1.0;
    memset(&SD->f3.dv2[8497], 0, 35U * sizeof(real_T));
    SD->f3.dv2[8532] = 1.0;
    memset(&SD->f3.dv2[8533], 0, 87U * sizeof(real_T));
    SD->f3.dv2[8620] = -0.1;
    SD->f3.dv2[8621] = -1.0;
    memset(&SD->f3.dv2[8622], 0, 35U * sizeof(real_T));
    SD->f3.dv2[8657] = 1.0;
    memset(&SD->f3.dv2[8658], 0, 86U * sizeof(real_T));
    SD->f3.dv2[8744] = 1.0;
    SD->f3.dv2[8745] = 0.0;
    SD->f3.dv2[8746] = -1.0;
    memset(&SD->f3.dv2[8747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[8869] = 1.0;
    SD->f3.dv2[8870] = -0.1;
    SD->f3.dv2[8871] = -1.0;
    memset(&SD->f3.dv2[8872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[8994] = 1.0;
    SD->f3.dv2[8995] = 0.0;
    SD->f3.dv2[8996] = -1.0;
    memset(&SD->f3.dv2[8997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9119] = 1.0;
    SD->f3.dv2[9120] = -0.1;
    SD->f3.dv2[9121] = -1.0;
    memset(&SD->f3.dv2[9122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9244] = 1.0;
    SD->f3.dv2[9245] = 0.0;
    SD->f3.dv2[9246] = -1.0;
    memset(&SD->f3.dv2[9247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9369] = 1.0;
    SD->f3.dv2[9370] = -0.1;
    SD->f3.dv2[9371] = -1.0;
    memset(&SD->f3.dv2[9372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9494] = 1.0;
    SD->f3.dv2[9495] = 0.0;
    SD->f3.dv2[9496] = -1.0;
    memset(&SD->f3.dv2[9497], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9619] = 1.0;
    SD->f3.dv2[9620] = -0.1;
    SD->f3.dv2[9621] = -1.0;
    memset(&SD->f3.dv2[9622], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9744] = 1.0;
    SD->f3.dv2[9745] = 0.0;
    SD->f3.dv2[9746] = -1.0;
    memset(&SD->f3.dv2[9747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9869] = 1.0;
    SD->f3.dv2[9870] = -0.1;
    SD->f3.dv2[9871] = -1.0;
    memset(&SD->f3.dv2[9872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9994] = 1.0;
    SD->f3.dv2[9995] = 0.0;
    SD->f3.dv2[9996] = -1.0;
    memset(&SD->f3.dv2[9997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10119] = 1.0;
    SD->f3.dv2[10120] = -0.1;
    SD->f3.dv2[10121] = -1.0;
    memset(&SD->f3.dv2[10122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10244] = 1.0;
    SD->f3.dv2[10245] = 0.0;
    SD->f3.dv2[10246] = -1.0;
    memset(&SD->f3.dv2[10247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10369] = 1.0;
    SD->f3.dv2[10370] = -0.1;
    SD->f3.dv2[10371] = -1.0;
    memset(&SD->f3.dv2[10372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10494] = 1.0;
    SD->f3.dv2[10495] = 0.0;
    SD->f3.dv2[10496] = -1.0;
    memset(&SD->f3.dv2[10497], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10619] = 1.0;
    SD->f3.dv2[10620] = -0.1;
    SD->f3.dv2[10621] = -1.0;
    memset(&SD->f3.dv2[10622], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10744] = 1.0;
    SD->f3.dv2[10745] = 0.0;
    SD->f3.dv2[10746] = -1.0;
    memset(&SD->f3.dv2[10747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10869] = 1.0;
    SD->f3.dv2[10870] = -0.1;
    SD->f3.dv2[10871] = -1.0;
    memset(&SD->f3.dv2[10872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10994] = 1.0;
    SD->f3.dv2[10995] = 0.0;
    SD->f3.dv2[10996] = -1.0;
    memset(&SD->f3.dv2[10997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11119] = 1.0;
    SD->f3.dv2[11120] = -0.1;
    SD->f3.dv2[11121] = -1.0;
    memset(&SD->f3.dv2[11122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11244] = 1.0;
    SD->f3.dv2[11245] = 0.0;
    SD->f3.dv2[11246] = -1.0;
    memset(&SD->f3.dv2[11247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11369] = 1.0;
    SD->f3.dv2[11370] = -0.1;
    SD->f3.dv2[11371] = -1.0;
    memset(&SD->f3.dv2[11372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11494] = 1.0;
    SD->f3.dv2[11495] = 0.0;
    SD->f3.dv2[11496] = -1.0;
    memset(&SD->f3.dv2[11497], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11619] = 1.0;
    SD->f3.dv2[11620] = -0.1;
    SD->f3.dv2[11621] = -1.0;
    memset(&SD->f3.dv2[11622], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11744] = 1.0;
    SD->f3.dv2[11745] = 0.0;
    SD->f3.dv2[11746] = -1.0;
    memset(&SD->f3.dv2[11747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11869] = 1.0;
    SD->f3.dv2[11870] = -0.1;
    SD->f3.dv2[11871] = -1.0;
    memset(&SD->f3.dv2[11872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11994] = 1.0;
    SD->f3.dv2[11995] = 0.0;
    SD->f3.dv2[11996] = -1.0;
    memset(&SD->f3.dv2[11997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12119] = 1.0;
    SD->f3.dv2[12120] = -0.1;
    SD->f3.dv2[12121] = -1.0;
    memset(&SD->f3.dv2[12122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12244] = 1.0;
    SD->f3.dv2[12245] = 0.0;
    SD->f3.dv2[12246] = -1.0;
    memset(&SD->f3.dv2[12247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12369] = 1.0;
    SD->f3.dv2[12370] = -0.1;
    SD->f3.dv2[12371] = -1.0;
    memset(&SD->f3.dv2[12372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12494] = 1.0;
    memset(&SD->f3.dv2[12495], 0, 124U * sizeof(real_T));
    SD->f3.dv2[12619] = 1.0;
    memset(&SD->f3.dv2[12620], 0, 29U * sizeof(real_T));
    SD->f3.dv2[12649] = t3;
    memset(&SD->f3.dv2[12650], 0, 125U * sizeof(real_T));
    SD->f3.dv2[12775] = t3;
    memset(&SD->f3.dv2[12776], 0, 125U * sizeof(real_T));
    SD->f3.dv2[12901] = t3;
    memset(&SD->f3.dv2[12902], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13027] = t3;
    memset(&SD->f3.dv2[13028], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13153] = t3;
    memset(&SD->f3.dv2[13154], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13279] = t3;
    memset(&SD->f3.dv2[13280], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13405] = t3;
    memset(&SD->f3.dv2[13406], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13531] = t3;
    memset(&SD->f3.dv2[13532], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13657] = t3;
    memset(&SD->f3.dv2[13658], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13783] = t3;
    memset(&SD->f3.dv2[13784], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13909] = t3;
    memset(&SD->f3.dv2[13910], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14035] = t3;
    memset(&SD->f3.dv2[14036], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14161] = t3;
    memset(&SD->f3.dv2[14162], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14287] = t3;
    memset(&SD->f3.dv2[14288], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14413] = t3;
    memset(&SD->f3.dv2[14414], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14539] = t3;
    memset(&SD->f3.dv2[14540], 0, 249U * sizeof(real_T));
    SD->f3.dv2[14789] = t3;
    memset(&SD->f3.dv2[14790], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14915] = t3;
    memset(&SD->f3.dv2[14916], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15041] = t3;
    memset(&SD->f3.dv2[15042], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15167] = t3;
    memset(&SD->f3.dv2[15168], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15293] = t3;
    memset(&SD->f3.dv2[15294], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15419] = t3;
    memset(&SD->f3.dv2[15420], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15545] = t3;
    memset(&SD->f3.dv2[15546], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15671] = t3;
    memset(&SD->f3.dv2[15672], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15797] = t3;
    memset(&SD->f3.dv2[15798], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15923] = t3;
    memset(&SD->f3.dv2[15924], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16049] = t3;
    memset(&SD->f3.dv2[16050], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16175] = t3;
    memset(&SD->f3.dv2[16176], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16301] = t3;
    memset(&SD->f3.dv2[16302], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16427] = t3;
    memset(&SD->f3.dv2[16428], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16553] = t3;
    memset(&SD->f3.dv2[16554], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16679] = t3;
    memset(&SD->f3.dv2[16680], 0, 249U * sizeof(real_T));
    SD->f3.dv2[16929] = -0.1;
    memset(&SD->f3.dv2[16930], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17055] = -0.1;
    memset(&SD->f3.dv2[17056], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17181] = -0.1;
    memset(&SD->f3.dv2[17182], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17307] = -0.1;
    memset(&SD->f3.dv2[17308], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17433] = -0.1;
    memset(&SD->f3.dv2[17434], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17559] = -0.1;
    memset(&SD->f3.dv2[17560], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17685] = -0.1;
    memset(&SD->f3.dv2[17686], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17811] = -0.1;
    memset(&SD->f3.dv2[17812], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17937] = -0.1;
    memset(&SD->f3.dv2[17938], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18063] = -0.1;
    memset(&SD->f3.dv2[18064], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18189] = -0.1;
    memset(&SD->f3.dv2[18190], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18315] = -0.1;
    memset(&SD->f3.dv2[18316], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18441] = -0.1;
    memset(&SD->f3.dv2[18442], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18567] = -0.1;
    memset(&SD->f3.dv2[18568], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18693] = -0.1;
    memset(&SD->f3.dv2[18694], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18819] = -0.1;
    memset(&SD->f3.dv2[18820], 0, 254U * sizeof(real_T));
    SD->f3.dv2[19074] = -1.0;
    SD->f3.dv2[19075] = 0.0;
    SD->f3.dv2[19076] = 0.0;
    SD->f3.dv2[19077] = 0.0;
    SD->f3.dv2[19078] = 0.0;
    SD->f3.dv2[19079] = 0.0;
    SD->f3.dv2[19080] = -1.0;
    SD->f3.dv2[19081] = -1.0;
    SD->f3.dv2[19082] = -1.0;
    SD->f3.dv2[19083] = -1.0;
    SD->f3.dv2[19084] = 0.0;
    SD->f3.dv2[19085] = 0.0;
    SD->f3.dv2[19086] = 0.0;
    SD->f3.dv2[19087] = 0.0;
    SD->f3.dv2[19088] = -1.0;
    SD->f3.dv2[19089] = -1.0;
    SD->f3.dv2[19090] = -1.0;
    SD->f3.dv2[19091] = -1.0;
    memset(&SD->f3.dv2[19092], 0, 113U * sizeof(real_T));
    SD->f3.dv2[19205] = -1.0;
    SD->f3.dv2[19206] = -1.0;
    SD->f3.dv2[19207] = -1.0;
    SD->f3.dv2[19208] = 0.0;
    SD->f3.dv2[19209] = 0.0;
    SD->f3.dv2[19210] = 0.0;
    SD->f3.dv2[19211] = 0.0;
    SD->f3.dv2[19212] = 0.0;
    SD->f3.dv2[19213] = -1.0;
    SD->f3.dv2[19214] = -1.0;
    SD->f3.dv2[19215] = -1.0;
    memset(&SD->f3.dv2[19216], 0, 114U * sizeof(real_T));
    SD->f3.dv2[19330] = -1.0;
    SD->f3.dv2[19331] = -1.0;
    SD->f3.dv2[19332] = 0.0;
    SD->f3.dv2[19333] = 0.0;
    SD->f3.dv2[19334] = 0.0;
    SD->f3.dv2[19335] = 0.0;
    SD->f3.dv2[19336] = 0.0;
    SD->f3.dv2[19337] = 0.0;
    SD->f3.dv2[19338] = -1.0;
    SD->f3.dv2[19339] = -1.0;
    memset(&SD->f3.dv2[19340], 0, 115U * sizeof(real_T));
    SD->f3.dv2[19455] = -1.0;
    SD->f3.dv2[19456] = 0.0;
    SD->f3.dv2[19457] = 0.0;
    SD->f3.dv2[19458] = 0.0;
    SD->f3.dv2[19459] = 0.0;
    SD->f3.dv2[19460] = 0.0;
    SD->f3.dv2[19461] = 0.0;
    SD->f3.dv2[19462] = 0.0;
    SD->f3.dv2[19463] = -1.0;
    memset(&SD->f3.dv2[19464], 0, 107U * sizeof(real_T));
    SD->f3.dv2[19571] = -1.0;
    memset(&SD->f3.dv2[19572], 0, sizeof(real_T) << 3);
    SD->f3.dv2[19580] = -1.0;
    SD->f3.dv2[19581] = -1.0;
    SD->f3.dv2[19582] = -1.0;
    SD->f3.dv2[19583] = -1.0;
    SD->f3.dv2[19584] = 0.0;
    SD->f3.dv2[19585] = 0.0;
    SD->f3.dv2[19586] = 0.0;
    SD->f3.dv2[19587] = 0.0;
    SD->f3.dv2[19588] = -1.0;
    SD->f3.dv2[19589] = -1.0;
    SD->f3.dv2[19590] = -1.0;
    SD->f3.dv2[19591] = -1.0;
    memset(&SD->f3.dv2[19592], 0, 113U * sizeof(real_T));
    SD->f3.dv2[19705] = -1.0;
    SD->f3.dv2[19706] = -1.0;
    SD->f3.dv2[19707] = -1.0;
    SD->f3.dv2[19708] = 0.0;
    SD->f3.dv2[19709] = 0.0;
    SD->f3.dv2[19710] = 0.0;
    SD->f3.dv2[19711] = 0.0;
    SD->f3.dv2[19712] = 0.0;
    SD->f3.dv2[19713] = -1.0;
    SD->f3.dv2[19714] = -1.0;
    SD->f3.dv2[19715] = -1.0;
    memset(&SD->f3.dv2[19716], 0, 114U * sizeof(real_T));
    SD->f3.dv2[19830] = -1.0;
    SD->f3.dv2[19831] = -1.0;
    SD->f3.dv2[19832] = 0.0;
    SD->f3.dv2[19833] = 0.0;
    SD->f3.dv2[19834] = 0.0;
    SD->f3.dv2[19835] = 0.0;
    SD->f3.dv2[19836] = 0.0;
    SD->f3.dv2[19837] = 0.0;
    SD->f3.dv2[19838] = -1.0;
    SD->f3.dv2[19839] = -1.0;
    memset(&SD->f3.dv2[19840], 0, 115U * sizeof(real_T));
    SD->f3.dv2[19955] = -1.0;
    SD->f3.dv2[19956] = 0.0;
    SD->f3.dv2[19957] = 0.0;
    SD->f3.dv2[19958] = 0.0;
    SD->f3.dv2[19959] = 0.0;
    SD->f3.dv2[19960] = 0.0;
    SD->f3.dv2[19961] = 0.0;
    SD->f3.dv2[19962] = 0.0;
    SD->f3.dv2[19963] = -1.0;
    memset(&SD->f3.dv2[19964], 0, 5313U * sizeof(real_T));
    SD->f3.dv2[25277] = 1.0;
    memset(&SD->f3.dv2[25278], 0, 492U * sizeof(real_T));
    SD->f3.dv2[25770] = 1.0;
    memset(&SD->f3.dv2[25771], 0, 127U * sizeof(real_T));
    SD->f3.dv2[25898] = 1.0;
    memset(&SD->f3.dv2[25899], 0, 492U * sizeof(real_T));
    SD->f3.dv2[26391] = 1.0;
    memset(&SD->f3.dv2[26392], 0, 127U * sizeof(real_T));
    SD->f3.dv2[26519] = 1.0;
    memset(&SD->f3.dv2[26520], 0, 492U * sizeof(real_T));
    SD->f3.dv2[27012] = 1.0;
    memset(&SD->f3.dv2[27013], 0, 623U * sizeof(real_T));
    SD->f3.dv2[27636] = 1.0;
    memset(&SD->f3.dv2[27637], 0, 124U * sizeof(real_T));
    SD->f3.dv2[27761] = 1.0;
    memset(&SD->f3.dv2[27762], 0, 124U * sizeof(real_T));
    SD->f3.dv2[27886] = 1.0;
    memset(&SD->f3.dv2[27887], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28011] = 1.0;
    memset(&SD->f3.dv2[28012], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28136] = 1.0;
    memset(&SD->f3.dv2[28137], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28261] = 1.0;
    memset(&SD->f3.dv2[28262], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28386] = 1.0;
    memset(&SD->f3.dv2[28387], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28511] = 1.0;
    memset(&SD->f3.dv2[28512], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28636] = 1.0;
    memset(&SD->f3.dv2[28637], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28761] = 1.0;
    memset(&SD->f3.dv2[28762], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28886] = 1.0;
    memset(&SD->f3.dv2[28887], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29011] = 1.0;
    memset(&SD->f3.dv2[29012], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29136] = 1.0;
    memset(&SD->f3.dv2[29137], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29261] = 1.0;
    memset(&SD->f3.dv2[29262], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29386] = 1.0;
    memset(&SD->f3.dv2[29387], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29511] = 1.0;
    for (i = 0; i < 238; i++) {
      memcpy(&Aeq[i * 124], &SD->f3.dv2[i * 124], 124U * sizeof(real_T));
    }

    t4 = eq_in[0] - foot_info[2];
    t5 = eq_in[1] + foot_info[5];
    t6 = eq_in[1] - foot_info[5];
    memset(&beq[0], 0, 96U * sizeof(real_T));
    beq[96] = states[0];
    beq[97] = states[1];
    beq[98] = states[2];
    beq[99] = states[3];
    beq[100] = states[6];
    beq[101] = states[7];
    beq[102] = eq_in[0];
    beq[103] = eq_in[1];
    beq[104] = 0.0;
    beq[105] = eq_in[2];
    beq[106] = eq_in[3];
    beq[107] = eq_in[4];
    beq[108] = t4;
    beq[109] = t4;
    beq[110] = t4;
    beq[111] = t4;
    beq[112] = t5;
    beq[113] = t6;
    beq[114] = t5;
    beq[115] = t6;
    beq[116] = eq_in[0];
    beq[117] = eq_in[0];
    beq[118] = eq_in[0];
    beq[119] = eq_in[0];
    beq[120] = eq_in[1];
    beq[121] = eq_in[1];
    beq[122] = eq_in[1];
    beq[123] = eq_in[1];
    st.site = &c_emlrtRSI;
    Iq_LeftStart03DFootV98(SD, &st, *(real_T (*)[17])&states_ref[7], *(real_T (*)
      [17])&states_ref[24], *(real_T (*)[17])&states_ref[41], qo, r1, r2,
      states[4], states[5], *(real_T (*)[3])&foot_info[0], *(real_T (*)[3])&
      foot_info[3], *(real_T (*)[2])&foot_info[6], iq_in, *(real_T (*)[4])&
      foot_future_info[0], *(real_T (*)[4])&foot_future_info[4], *(real_T (*)[8])
      &foot_future_info[8], *(real_T (*)[4])&foot_future_info[16], Aiq, biq);

    /*  Develop The Objective Function Matrix and Vector */
    Obj_LeftStart03DFootV98(SD, states[4], states[5], x_ref, y_ref, *(real_T (*)
      [2])&states_ref[4], *(real_T (*)[2])&weights[1], *(real_T (*)[2])&weights
      [3], *(real_T (*)[2])&weights[9], weights[5], weights[6], weights[11],
      weights[7], weights[8], weights[0], obj_in, H, f);
  } else {
    /*  Develop the Constraints Matrix and Vector */
    /* EQ_RIGHTSTART03DFOOTV98 */
    /*     [AEQ,BEQ] = EQ_RIGHTSTART03DFOOTV98(IN1,IN2,IN3,ZH1,IN5,IN6,IN7) */
    /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
    /*     06-Jul-2023 15:29:06 */
    t2 = 1.0 / states_ref[6];
    t3 = t2 * 0.981;
    SD->f3.dv2[0] = -1.0;
    SD->f3.dv2[1] = t2 * -0.981;
    memset(&SD->f3.dv2[2], 0, 94U * sizeof(real_T));
    SD->f3.dv2[96] = 1.0;
    memset(&SD->f3.dv2[97], 0, 27U * sizeof(real_T));
    SD->f3.dv2[124] = -0.1;
    SD->f3.dv2[125] = -1.0;
    memset(&SD->f3.dv2[126], 0, 95U * sizeof(real_T));
    SD->f3.dv2[221] = 1.0;
    memset(&SD->f3.dv2[222], 0, 26U * sizeof(real_T));
    SD->f3.dv2[248] = 1.0;
    SD->f3.dv2[249] = 0.0;
    SD->f3.dv2[250] = -1.0;
    SD->f3.dv2[251] = -t3;
    memset(&SD->f3.dv2[252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[373] = 1.0;
    SD->f3.dv2[374] = -0.1;
    SD->f3.dv2[375] = -1.0;
    memset(&SD->f3.dv2[376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[498] = 1.0;
    SD->f3.dv2[499] = 0.0;
    SD->f3.dv2[500] = -1.0;
    SD->f3.dv2[501] = -t3;
    memset(&SD->f3.dv2[502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[623] = 1.0;
    SD->f3.dv2[624] = -0.1;
    SD->f3.dv2[625] = -1.0;
    memset(&SD->f3.dv2[626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[748] = 1.0;
    SD->f3.dv2[749] = 0.0;
    SD->f3.dv2[750] = -1.0;
    SD->f3.dv2[751] = -t3;
    memset(&SD->f3.dv2[752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[873] = 1.0;
    SD->f3.dv2[874] = -0.1;
    SD->f3.dv2[875] = -1.0;
    memset(&SD->f3.dv2[876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[998] = 1.0;
    SD->f3.dv2[999] = 0.0;
    SD->f3.dv2[1000] = -1.0;
    SD->f3.dv2[1001] = -t3;
    memset(&SD->f3.dv2[1002], 0, 98U * sizeof(real_T));
    SD->f3.dv2[1100] = 1.0;
    memset(&SD->f3.dv2[1101], 0, 22U * sizeof(real_T));
    SD->f3.dv2[1123] = 1.0;
    SD->f3.dv2[1124] = -0.1;
    SD->f3.dv2[1125] = -1.0;
    memset(&SD->f3.dv2[1126], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1248] = 1.0;
    SD->f3.dv2[1249] = 0.0;
    SD->f3.dv2[1250] = -1.0;
    SD->f3.dv2[1251] = -t3;
    memset(&SD->f3.dv2[1252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[1373] = 1.0;
    SD->f3.dv2[1374] = -0.1;
    SD->f3.dv2[1375] = -1.0;
    memset(&SD->f3.dv2[1376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1498] = 1.0;
    SD->f3.dv2[1499] = 0.0;
    SD->f3.dv2[1500] = -1.0;
    SD->f3.dv2[1501] = -t3;
    memset(&SD->f3.dv2[1502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[1623] = 1.0;
    SD->f3.dv2[1624] = -0.1;
    SD->f3.dv2[1625] = -1.0;
    memset(&SD->f3.dv2[1626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1748] = 1.0;
    SD->f3.dv2[1749] = 0.0;
    SD->f3.dv2[1750] = -1.0;
    SD->f3.dv2[1751] = -t3;
    memset(&SD->f3.dv2[1752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[1873] = 1.0;
    SD->f3.dv2[1874] = -0.1;
    SD->f3.dv2[1875] = -1.0;
    memset(&SD->f3.dv2[1876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[1998] = 1.0;
    SD->f3.dv2[1999] = 0.0;
    SD->f3.dv2[2000] = -1.0;
    SD->f3.dv2[2001] = -t3;
    memset(&SD->f3.dv2[2002], 0, 91U * sizeof(real_T));
    SD->f3.dv2[2093] = 1.0;
    memset(&SD->f3.dv2[2094], 0, 29U * sizeof(real_T));
    SD->f3.dv2[2123] = 1.0;
    SD->f3.dv2[2124] = -0.1;
    SD->f3.dv2[2125] = -1.0;
    memset(&SD->f3.dv2[2126], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2248] = 1.0;
    SD->f3.dv2[2249] = 0.0;
    SD->f3.dv2[2250] = -1.0;
    SD->f3.dv2[2251] = -t3;
    memset(&SD->f3.dv2[2252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[2373] = 1.0;
    SD->f3.dv2[2374] = -0.1;
    SD->f3.dv2[2375] = -1.0;
    memset(&SD->f3.dv2[2376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2498] = 1.0;
    SD->f3.dv2[2499] = 0.0;
    SD->f3.dv2[2500] = -1.0;
    SD->f3.dv2[2501] = -t3;
    memset(&SD->f3.dv2[2502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[2623] = 1.0;
    SD->f3.dv2[2624] = -0.1;
    SD->f3.dv2[2625] = -1.0;
    memset(&SD->f3.dv2[2626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2748] = 1.0;
    SD->f3.dv2[2749] = 0.0;
    SD->f3.dv2[2750] = -1.0;
    SD->f3.dv2[2751] = -t3;
    memset(&SD->f3.dv2[2752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[2873] = 1.0;
    SD->f3.dv2[2874] = -0.1;
    SD->f3.dv2[2875] = -1.0;
    memset(&SD->f3.dv2[2876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[2998] = 1.0;
    SD->f3.dv2[2999] = 0.0;
    SD->f3.dv2[3000] = -1.0;
    SD->f3.dv2[3001] = -t3;
    memset(&SD->f3.dv2[3002], 0, 84U * sizeof(real_T));
    SD->f3.dv2[3086] = 1.0;
    memset(&SD->f3.dv2[3087], 0, 36U * sizeof(real_T));
    SD->f3.dv2[3123] = 1.0;
    SD->f3.dv2[3124] = -0.1;
    SD->f3.dv2[3125] = -1.0;
    memset(&SD->f3.dv2[3126], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3248] = 1.0;
    SD->f3.dv2[3249] = 0.0;
    SD->f3.dv2[3250] = -1.0;
    SD->f3.dv2[3251] = -t3;
    memset(&SD->f3.dv2[3252], 0, 121U * sizeof(real_T));
    SD->f3.dv2[3373] = 1.0;
    SD->f3.dv2[3374] = -0.1;
    SD->f3.dv2[3375] = -1.0;
    memset(&SD->f3.dv2[3376], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3498] = 1.0;
    SD->f3.dv2[3499] = 0.0;
    SD->f3.dv2[3500] = -1.0;
    SD->f3.dv2[3501] = -t3;
    memset(&SD->f3.dv2[3502], 0, 121U * sizeof(real_T));
    SD->f3.dv2[3623] = 1.0;
    SD->f3.dv2[3624] = -0.1;
    SD->f3.dv2[3625] = -1.0;
    memset(&SD->f3.dv2[3626], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3748] = 1.0;
    SD->f3.dv2[3749] = 0.0;
    SD->f3.dv2[3750] = -1.0;
    SD->f3.dv2[3751] = -t3;
    memset(&SD->f3.dv2[3752], 0, 121U * sizeof(real_T));
    SD->f3.dv2[3873] = 1.0;
    SD->f3.dv2[3874] = -0.1;
    SD->f3.dv2[3875] = -1.0;
    memset(&SD->f3.dv2[3876], 0, 122U * sizeof(real_T));
    SD->f3.dv2[3998] = 1.0;
    memset(&SD->f3.dv2[3999], 0, 80U * sizeof(real_T));
    SD->f3.dv2[4079] = 1.0;
    memset(&SD->f3.dv2[4080], 0, 43U * sizeof(real_T));
    SD->f3.dv2[4123] = 1.0;
    memset(&SD->f3.dv2[4124], 0, 124U * sizeof(real_T));
    SD->f3.dv2[4248] = -1.0;
    SD->f3.dv2[4249] = -t3;
    memset(&SD->f3.dv2[4250], 0, sizeof(real_T) << 6);
    SD->f3.dv2[4314] = 1.0;
    memset(&SD->f3.dv2[4315], 0, 57U * sizeof(real_T));
    SD->f3.dv2[4372] = -0.1;
    SD->f3.dv2[4373] = -1.0;
    memset(&SD->f3.dv2[4374], 0, 65U * sizeof(real_T));
    SD->f3.dv2[4439] = 1.0;
    memset(&SD->f3.dv2[4440], 0, 56U * sizeof(real_T));
    SD->f3.dv2[4496] = 1.0;
    SD->f3.dv2[4497] = 0.0;
    SD->f3.dv2[4498] = -1.0;
    SD->f3.dv2[4499] = -t3;
    memset(&SD->f3.dv2[4500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[4621] = 1.0;
    SD->f3.dv2[4622] = -0.1;
    SD->f3.dv2[4623] = -1.0;
    memset(&SD->f3.dv2[4624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[4746] = 1.0;
    SD->f3.dv2[4747] = 0.0;
    SD->f3.dv2[4748] = -1.0;
    SD->f3.dv2[4749] = -t3;
    memset(&SD->f3.dv2[4750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[4871] = 1.0;
    SD->f3.dv2[4872] = -0.1;
    SD->f3.dv2[4873] = -1.0;
    memset(&SD->f3.dv2[4874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[4996] = 1.0;
    SD->f3.dv2[4997] = 0.0;
    SD->f3.dv2[4998] = -1.0;
    SD->f3.dv2[4999] = -t3;
    memset(&SD->f3.dv2[5000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[5121] = 1.0;
    SD->f3.dv2[5122] = -0.1;
    SD->f3.dv2[5123] = -1.0;
    memset(&SD->f3.dv2[5124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5246] = 1.0;
    SD->f3.dv2[5247] = 0.0;
    SD->f3.dv2[5248] = -1.0;
    SD->f3.dv2[5249] = -t3;
    memset(&SD->f3.dv2[5250], 0, 70U * sizeof(real_T));
    SD->f3.dv2[5320] = 1.0;
    memset(&SD->f3.dv2[5321], 0, 50U * sizeof(real_T));
    SD->f3.dv2[5371] = 1.0;
    SD->f3.dv2[5372] = -0.1;
    SD->f3.dv2[5373] = -1.0;
    memset(&SD->f3.dv2[5374], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5496] = 1.0;
    SD->f3.dv2[5497] = 0.0;
    SD->f3.dv2[5498] = -1.0;
    SD->f3.dv2[5499] = -t3;
    memset(&SD->f3.dv2[5500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[5621] = 1.0;
    SD->f3.dv2[5622] = -0.1;
    SD->f3.dv2[5623] = -1.0;
    memset(&SD->f3.dv2[5624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5746] = 1.0;
    SD->f3.dv2[5747] = 0.0;
    SD->f3.dv2[5748] = -1.0;
    SD->f3.dv2[5749] = -t3;
    memset(&SD->f3.dv2[5750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[5871] = 1.0;
    SD->f3.dv2[5872] = -0.1;
    SD->f3.dv2[5873] = -1.0;
    memset(&SD->f3.dv2[5874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[5996] = 1.0;
    SD->f3.dv2[5997] = 0.0;
    SD->f3.dv2[5998] = -1.0;
    SD->f3.dv2[5999] = -t3;
    memset(&SD->f3.dv2[6000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[6121] = 1.0;
    SD->f3.dv2[6122] = -0.1;
    SD->f3.dv2[6123] = -1.0;
    memset(&SD->f3.dv2[6124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6246] = 1.0;
    SD->f3.dv2[6247] = 0.0;
    SD->f3.dv2[6248] = -1.0;
    SD->f3.dv2[6249] = -t3;
    memset(&SD->f3.dv2[6250], 0, 63U * sizeof(real_T));
    SD->f3.dv2[6313] = 1.0;
    memset(&SD->f3.dv2[6314], 0, 57U * sizeof(real_T));
    SD->f3.dv2[6371] = 1.0;
    SD->f3.dv2[6372] = -0.1;
    SD->f3.dv2[6373] = -1.0;
    memset(&SD->f3.dv2[6374], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6496] = 1.0;
    SD->f3.dv2[6497] = 0.0;
    SD->f3.dv2[6498] = -1.0;
    SD->f3.dv2[6499] = -t3;
    memset(&SD->f3.dv2[6500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[6621] = 1.0;
    SD->f3.dv2[6622] = -0.1;
    SD->f3.dv2[6623] = -1.0;
    memset(&SD->f3.dv2[6624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6746] = 1.0;
    SD->f3.dv2[6747] = 0.0;
    SD->f3.dv2[6748] = -1.0;
    SD->f3.dv2[6749] = -t3;
    memset(&SD->f3.dv2[6750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[6871] = 1.0;
    SD->f3.dv2[6872] = -0.1;
    SD->f3.dv2[6873] = -1.0;
    memset(&SD->f3.dv2[6874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[6996] = 1.0;
    SD->f3.dv2[6997] = 0.0;
    SD->f3.dv2[6998] = -1.0;
    SD->f3.dv2[6999] = -t3;
    memset(&SD->f3.dv2[7000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[7121] = 1.0;
    SD->f3.dv2[7122] = -0.1;
    SD->f3.dv2[7123] = -1.0;
    memset(&SD->f3.dv2[7124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7246] = 1.0;
    SD->f3.dv2[7247] = 0.0;
    SD->f3.dv2[7248] = -1.0;
    SD->f3.dv2[7249] = -t3;
    memset(&SD->f3.dv2[7250], 0, 56U * sizeof(real_T));
    SD->f3.dv2[7306] = 1.0;
    memset(&SD->f3.dv2[7307], 0, sizeof(real_T) << 6);
    SD->f3.dv2[7371] = 1.0;
    SD->f3.dv2[7372] = -0.1;
    SD->f3.dv2[7373] = -1.0;
    memset(&SD->f3.dv2[7374], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7496] = 1.0;
    SD->f3.dv2[7497] = 0.0;
    SD->f3.dv2[7498] = -1.0;
    SD->f3.dv2[7499] = -t3;
    memset(&SD->f3.dv2[7500], 0, 121U * sizeof(real_T));
    SD->f3.dv2[7621] = 1.0;
    SD->f3.dv2[7622] = -0.1;
    SD->f3.dv2[7623] = -1.0;
    memset(&SD->f3.dv2[7624], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7746] = 1.0;
    SD->f3.dv2[7747] = 0.0;
    SD->f3.dv2[7748] = -1.0;
    SD->f3.dv2[7749] = -t3;
    memset(&SD->f3.dv2[7750], 0, 121U * sizeof(real_T));
    SD->f3.dv2[7871] = 1.0;
    SD->f3.dv2[7872] = -0.1;
    SD->f3.dv2[7873] = -1.0;
    memset(&SD->f3.dv2[7874], 0, 122U * sizeof(real_T));
    SD->f3.dv2[7996] = 1.0;
    SD->f3.dv2[7997] = 0.0;
    SD->f3.dv2[7998] = -1.0;
    SD->f3.dv2[7999] = -t3;
    memset(&SD->f3.dv2[8000], 0, 121U * sizeof(real_T));
    SD->f3.dv2[8121] = 1.0;
    SD->f3.dv2[8122] = -0.1;
    SD->f3.dv2[8123] = -1.0;
    memset(&SD->f3.dv2[8124], 0, 122U * sizeof(real_T));
    SD->f3.dv2[8246] = 1.0;
    memset(&SD->f3.dv2[8247], 0, 52U * sizeof(real_T));
    SD->f3.dv2[8299] = 1.0;
    memset(&SD->f3.dv2[8300], 0, 71U * sizeof(real_T));
    SD->f3.dv2[8371] = 1.0;
    memset(&SD->f3.dv2[8372], 0, 124U * sizeof(real_T));
    SD->f3.dv2[8496] = -1.0;
    memset(&SD->f3.dv2[8497], 0, 35U * sizeof(real_T));
    SD->f3.dv2[8532] = 1.0;
    memset(&SD->f3.dv2[8533], 0, 87U * sizeof(real_T));
    SD->f3.dv2[8620] = -0.1;
    SD->f3.dv2[8621] = -1.0;
    memset(&SD->f3.dv2[8622], 0, 35U * sizeof(real_T));
    SD->f3.dv2[8657] = 1.0;
    memset(&SD->f3.dv2[8658], 0, 86U * sizeof(real_T));
    SD->f3.dv2[8744] = 1.0;
    SD->f3.dv2[8745] = 0.0;
    SD->f3.dv2[8746] = -1.0;
    memset(&SD->f3.dv2[8747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[8869] = 1.0;
    SD->f3.dv2[8870] = -0.1;
    SD->f3.dv2[8871] = -1.0;
    memset(&SD->f3.dv2[8872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[8994] = 1.0;
    SD->f3.dv2[8995] = 0.0;
    SD->f3.dv2[8996] = -1.0;
    memset(&SD->f3.dv2[8997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9119] = 1.0;
    SD->f3.dv2[9120] = -0.1;
    SD->f3.dv2[9121] = -1.0;
    memset(&SD->f3.dv2[9122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9244] = 1.0;
    SD->f3.dv2[9245] = 0.0;
    SD->f3.dv2[9246] = -1.0;
    memset(&SD->f3.dv2[9247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9369] = 1.0;
    SD->f3.dv2[9370] = -0.1;
    SD->f3.dv2[9371] = -1.0;
    memset(&SD->f3.dv2[9372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9494] = 1.0;
    SD->f3.dv2[9495] = 0.0;
    SD->f3.dv2[9496] = -1.0;
    memset(&SD->f3.dv2[9497], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9619] = 1.0;
    SD->f3.dv2[9620] = -0.1;
    SD->f3.dv2[9621] = -1.0;
    memset(&SD->f3.dv2[9622], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9744] = 1.0;
    SD->f3.dv2[9745] = 0.0;
    SD->f3.dv2[9746] = -1.0;
    memset(&SD->f3.dv2[9747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9869] = 1.0;
    SD->f3.dv2[9870] = -0.1;
    SD->f3.dv2[9871] = -1.0;
    memset(&SD->f3.dv2[9872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[9994] = 1.0;
    SD->f3.dv2[9995] = 0.0;
    SD->f3.dv2[9996] = -1.0;
    memset(&SD->f3.dv2[9997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10119] = 1.0;
    SD->f3.dv2[10120] = -0.1;
    SD->f3.dv2[10121] = -1.0;
    memset(&SD->f3.dv2[10122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10244] = 1.0;
    SD->f3.dv2[10245] = 0.0;
    SD->f3.dv2[10246] = -1.0;
    memset(&SD->f3.dv2[10247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10369] = 1.0;
    SD->f3.dv2[10370] = -0.1;
    SD->f3.dv2[10371] = -1.0;
    memset(&SD->f3.dv2[10372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10494] = 1.0;
    SD->f3.dv2[10495] = 0.0;
    SD->f3.dv2[10496] = -1.0;
    memset(&SD->f3.dv2[10497], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10619] = 1.0;
    SD->f3.dv2[10620] = -0.1;
    SD->f3.dv2[10621] = -1.0;
    memset(&SD->f3.dv2[10622], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10744] = 1.0;
    SD->f3.dv2[10745] = 0.0;
    SD->f3.dv2[10746] = -1.0;
    memset(&SD->f3.dv2[10747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10869] = 1.0;
    SD->f3.dv2[10870] = -0.1;
    SD->f3.dv2[10871] = -1.0;
    memset(&SD->f3.dv2[10872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[10994] = 1.0;
    SD->f3.dv2[10995] = 0.0;
    SD->f3.dv2[10996] = -1.0;
    memset(&SD->f3.dv2[10997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11119] = 1.0;
    SD->f3.dv2[11120] = -0.1;
    SD->f3.dv2[11121] = -1.0;
    memset(&SD->f3.dv2[11122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11244] = 1.0;
    SD->f3.dv2[11245] = 0.0;
    SD->f3.dv2[11246] = -1.0;
    memset(&SD->f3.dv2[11247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11369] = 1.0;
    SD->f3.dv2[11370] = -0.1;
    SD->f3.dv2[11371] = -1.0;
    memset(&SD->f3.dv2[11372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11494] = 1.0;
    SD->f3.dv2[11495] = 0.0;
    SD->f3.dv2[11496] = -1.0;
    memset(&SD->f3.dv2[11497], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11619] = 1.0;
    SD->f3.dv2[11620] = -0.1;
    SD->f3.dv2[11621] = -1.0;
    memset(&SD->f3.dv2[11622], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11744] = 1.0;
    SD->f3.dv2[11745] = 0.0;
    SD->f3.dv2[11746] = -1.0;
    memset(&SD->f3.dv2[11747], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11869] = 1.0;
    SD->f3.dv2[11870] = -0.1;
    SD->f3.dv2[11871] = -1.0;
    memset(&SD->f3.dv2[11872], 0, 122U * sizeof(real_T));
    SD->f3.dv2[11994] = 1.0;
    SD->f3.dv2[11995] = 0.0;
    SD->f3.dv2[11996] = -1.0;
    memset(&SD->f3.dv2[11997], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12119] = 1.0;
    SD->f3.dv2[12120] = -0.1;
    SD->f3.dv2[12121] = -1.0;
    memset(&SD->f3.dv2[12122], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12244] = 1.0;
    SD->f3.dv2[12245] = 0.0;
    SD->f3.dv2[12246] = -1.0;
    memset(&SD->f3.dv2[12247], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12369] = 1.0;
    SD->f3.dv2[12370] = -0.1;
    SD->f3.dv2[12371] = -1.0;
    memset(&SD->f3.dv2[12372], 0, 122U * sizeof(real_T));
    SD->f3.dv2[12494] = 1.0;
    memset(&SD->f3.dv2[12495], 0, 124U * sizeof(real_T));
    SD->f3.dv2[12619] = 1.0;
    memset(&SD->f3.dv2[12620], 0, 29U * sizeof(real_T));
    SD->f3.dv2[12649] = t3;
    memset(&SD->f3.dv2[12650], 0, 125U * sizeof(real_T));
    SD->f3.dv2[12775] = t3;
    memset(&SD->f3.dv2[12776], 0, 125U * sizeof(real_T));
    SD->f3.dv2[12901] = t3;
    memset(&SD->f3.dv2[12902], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13027] = t3;
    memset(&SD->f3.dv2[13028], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13153] = t3;
    memset(&SD->f3.dv2[13154], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13279] = t3;
    memset(&SD->f3.dv2[13280], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13405] = t3;
    memset(&SD->f3.dv2[13406], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13531] = t3;
    memset(&SD->f3.dv2[13532], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13657] = t3;
    memset(&SD->f3.dv2[13658], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13783] = t3;
    memset(&SD->f3.dv2[13784], 0, 125U * sizeof(real_T));
    SD->f3.dv2[13909] = t3;
    memset(&SD->f3.dv2[13910], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14035] = t3;
    memset(&SD->f3.dv2[14036], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14161] = t3;
    memset(&SD->f3.dv2[14162], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14287] = t3;
    memset(&SD->f3.dv2[14288], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14413] = t3;
    memset(&SD->f3.dv2[14414], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14539] = t3;
    memset(&SD->f3.dv2[14540], 0, 249U * sizeof(real_T));
    SD->f3.dv2[14789] = t3;
    memset(&SD->f3.dv2[14790], 0, 125U * sizeof(real_T));
    SD->f3.dv2[14915] = t3;
    memset(&SD->f3.dv2[14916], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15041] = t3;
    memset(&SD->f3.dv2[15042], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15167] = t3;
    memset(&SD->f3.dv2[15168], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15293] = t3;
    memset(&SD->f3.dv2[15294], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15419] = t3;
    memset(&SD->f3.dv2[15420], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15545] = t3;
    memset(&SD->f3.dv2[15546], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15671] = t3;
    memset(&SD->f3.dv2[15672], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15797] = t3;
    memset(&SD->f3.dv2[15798], 0, 125U * sizeof(real_T));
    SD->f3.dv2[15923] = t3;
    memset(&SD->f3.dv2[15924], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16049] = t3;
    memset(&SD->f3.dv2[16050], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16175] = t3;
    memset(&SD->f3.dv2[16176], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16301] = t3;
    memset(&SD->f3.dv2[16302], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16427] = t3;
    memset(&SD->f3.dv2[16428], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16553] = t3;
    memset(&SD->f3.dv2[16554], 0, 125U * sizeof(real_T));
    SD->f3.dv2[16679] = t3;
    memset(&SD->f3.dv2[16680], 0, 249U * sizeof(real_T));
    SD->f3.dv2[16929] = -0.1;
    memset(&SD->f3.dv2[16930], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17055] = -0.1;
    memset(&SD->f3.dv2[17056], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17181] = -0.1;
    memset(&SD->f3.dv2[17182], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17307] = -0.1;
    memset(&SD->f3.dv2[17308], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17433] = -0.1;
    memset(&SD->f3.dv2[17434], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17559] = -0.1;
    memset(&SD->f3.dv2[17560], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17685] = -0.1;
    memset(&SD->f3.dv2[17686], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17811] = -0.1;
    memset(&SD->f3.dv2[17812], 0, 125U * sizeof(real_T));
    SD->f3.dv2[17937] = -0.1;
    memset(&SD->f3.dv2[17938], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18063] = -0.1;
    memset(&SD->f3.dv2[18064], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18189] = -0.1;
    memset(&SD->f3.dv2[18190], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18315] = -0.1;
    memset(&SD->f3.dv2[18316], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18441] = -0.1;
    memset(&SD->f3.dv2[18442], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18567] = -0.1;
    memset(&SD->f3.dv2[18568], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18693] = -0.1;
    memset(&SD->f3.dv2[18694], 0, 125U * sizeof(real_T));
    SD->f3.dv2[18819] = -0.1;
    memset(&SD->f3.dv2[18820], 0, 254U * sizeof(real_T));
    SD->f3.dv2[19074] = -1.0;
    SD->f3.dv2[19075] = 0.0;
    SD->f3.dv2[19076] = 0.0;
    SD->f3.dv2[19077] = 0.0;
    SD->f3.dv2[19078] = 0.0;
    SD->f3.dv2[19079] = 0.0;
    SD->f3.dv2[19080] = -1.0;
    SD->f3.dv2[19081] = -1.0;
    SD->f3.dv2[19082] = -1.0;
    SD->f3.dv2[19083] = -1.0;
    SD->f3.dv2[19084] = 0.0;
    SD->f3.dv2[19085] = 0.0;
    SD->f3.dv2[19086] = 0.0;
    SD->f3.dv2[19087] = 0.0;
    SD->f3.dv2[19088] = -1.0;
    SD->f3.dv2[19089] = -1.0;
    SD->f3.dv2[19090] = -1.0;
    SD->f3.dv2[19091] = -1.0;
    memset(&SD->f3.dv2[19092], 0, 113U * sizeof(real_T));
    SD->f3.dv2[19205] = -1.0;
    SD->f3.dv2[19206] = -1.0;
    SD->f3.dv2[19207] = -1.0;
    SD->f3.dv2[19208] = 0.0;
    SD->f3.dv2[19209] = 0.0;
    SD->f3.dv2[19210] = 0.0;
    SD->f3.dv2[19211] = 0.0;
    SD->f3.dv2[19212] = 0.0;
    SD->f3.dv2[19213] = -1.0;
    SD->f3.dv2[19214] = -1.0;
    SD->f3.dv2[19215] = -1.0;
    memset(&SD->f3.dv2[19216], 0, 114U * sizeof(real_T));
    SD->f3.dv2[19330] = -1.0;
    SD->f3.dv2[19331] = -1.0;
    SD->f3.dv2[19332] = 0.0;
    SD->f3.dv2[19333] = 0.0;
    SD->f3.dv2[19334] = 0.0;
    SD->f3.dv2[19335] = 0.0;
    SD->f3.dv2[19336] = 0.0;
    SD->f3.dv2[19337] = 0.0;
    SD->f3.dv2[19338] = -1.0;
    SD->f3.dv2[19339] = -1.0;
    memset(&SD->f3.dv2[19340], 0, 115U * sizeof(real_T));
    SD->f3.dv2[19455] = -1.0;
    SD->f3.dv2[19456] = 0.0;
    SD->f3.dv2[19457] = 0.0;
    SD->f3.dv2[19458] = 0.0;
    SD->f3.dv2[19459] = 0.0;
    SD->f3.dv2[19460] = 0.0;
    SD->f3.dv2[19461] = 0.0;
    SD->f3.dv2[19462] = 0.0;
    SD->f3.dv2[19463] = -1.0;
    memset(&SD->f3.dv2[19464], 0, 107U * sizeof(real_T));
    SD->f3.dv2[19571] = -1.0;
    memset(&SD->f3.dv2[19572], 0, sizeof(real_T) << 3);
    SD->f3.dv2[19580] = -1.0;
    SD->f3.dv2[19581] = -1.0;
    SD->f3.dv2[19582] = -1.0;
    SD->f3.dv2[19583] = -1.0;
    SD->f3.dv2[19584] = 0.0;
    SD->f3.dv2[19585] = 0.0;
    SD->f3.dv2[19586] = 0.0;
    SD->f3.dv2[19587] = 0.0;
    SD->f3.dv2[19588] = -1.0;
    SD->f3.dv2[19589] = -1.0;
    SD->f3.dv2[19590] = -1.0;
    SD->f3.dv2[19591] = -1.0;
    memset(&SD->f3.dv2[19592], 0, 113U * sizeof(real_T));
    SD->f3.dv2[19705] = -1.0;
    SD->f3.dv2[19706] = -1.0;
    SD->f3.dv2[19707] = -1.0;
    SD->f3.dv2[19708] = 0.0;
    SD->f3.dv2[19709] = 0.0;
    SD->f3.dv2[19710] = 0.0;
    SD->f3.dv2[19711] = 0.0;
    SD->f3.dv2[19712] = 0.0;
    SD->f3.dv2[19713] = -1.0;
    SD->f3.dv2[19714] = -1.0;
    SD->f3.dv2[19715] = -1.0;
    memset(&SD->f3.dv2[19716], 0, 114U * sizeof(real_T));
    SD->f3.dv2[19830] = -1.0;
    SD->f3.dv2[19831] = -1.0;
    SD->f3.dv2[19832] = 0.0;
    SD->f3.dv2[19833] = 0.0;
    SD->f3.dv2[19834] = 0.0;
    SD->f3.dv2[19835] = 0.0;
    SD->f3.dv2[19836] = 0.0;
    SD->f3.dv2[19837] = 0.0;
    SD->f3.dv2[19838] = -1.0;
    SD->f3.dv2[19839] = -1.0;
    memset(&SD->f3.dv2[19840], 0, 115U * sizeof(real_T));
    SD->f3.dv2[19955] = -1.0;
    SD->f3.dv2[19956] = 0.0;
    SD->f3.dv2[19957] = 0.0;
    SD->f3.dv2[19958] = 0.0;
    SD->f3.dv2[19959] = 0.0;
    SD->f3.dv2[19960] = 0.0;
    SD->f3.dv2[19961] = 0.0;
    SD->f3.dv2[19962] = 0.0;
    SD->f3.dv2[19963] = -1.0;
    memset(&SD->f3.dv2[19964], 0, 5313U * sizeof(real_T));
    SD->f3.dv2[25277] = 1.0;
    memset(&SD->f3.dv2[25278], 0, 492U * sizeof(real_T));
    SD->f3.dv2[25770] = 1.0;
    memset(&SD->f3.dv2[25771], 0, 127U * sizeof(real_T));
    SD->f3.dv2[25898] = 1.0;
    memset(&SD->f3.dv2[25899], 0, 492U * sizeof(real_T));
    SD->f3.dv2[26391] = 1.0;
    memset(&SD->f3.dv2[26392], 0, 127U * sizeof(real_T));
    SD->f3.dv2[26519] = 1.0;
    memset(&SD->f3.dv2[26520], 0, 492U * sizeof(real_T));
    SD->f3.dv2[27012] = 1.0;
    memset(&SD->f3.dv2[27013], 0, 623U * sizeof(real_T));
    SD->f3.dv2[27636] = 1.0;
    memset(&SD->f3.dv2[27637], 0, 124U * sizeof(real_T));
    SD->f3.dv2[27761] = 1.0;
    memset(&SD->f3.dv2[27762], 0, 124U * sizeof(real_T));
    SD->f3.dv2[27886] = 1.0;
    memset(&SD->f3.dv2[27887], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28011] = 1.0;
    memset(&SD->f3.dv2[28012], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28136] = 1.0;
    memset(&SD->f3.dv2[28137], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28261] = 1.0;
    memset(&SD->f3.dv2[28262], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28386] = 1.0;
    memset(&SD->f3.dv2[28387], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28511] = 1.0;
    memset(&SD->f3.dv2[28512], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28636] = 1.0;
    memset(&SD->f3.dv2[28637], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28761] = 1.0;
    memset(&SD->f3.dv2[28762], 0, 124U * sizeof(real_T));
    SD->f3.dv2[28886] = 1.0;
    memset(&SD->f3.dv2[28887], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29011] = 1.0;
    memset(&SD->f3.dv2[29012], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29136] = 1.0;
    memset(&SD->f3.dv2[29137], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29261] = 1.0;
    memset(&SD->f3.dv2[29262], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29386] = 1.0;
    memset(&SD->f3.dv2[29387], 0, 124U * sizeof(real_T));
    SD->f3.dv2[29511] = 1.0;
    for (i = 0; i < 238; i++) {
      memcpy(&Aeq[i * 124], &SD->f3.dv2[i * 124], 124U * sizeof(real_T));
    }

    t4 = eq_in[0] - foot_info[2];
    t5 = eq_in[1] - foot_info[5];
    t6 = eq_in[1] + foot_info[5];
    memset(&beq[0], 0, 96U * sizeof(real_T));
    beq[96] = states[0];
    beq[97] = states[1];
    beq[98] = states[2];
    beq[99] = states[3];
    beq[100] = states[6];
    beq[101] = states[7];
    beq[102] = eq_in[0];
    beq[103] = eq_in[1];
    beq[104] = 0.0;
    beq[105] = eq_in[2];
    beq[106] = eq_in[3];
    beq[107] = eq_in[4];
    beq[108] = t4;
    beq[109] = t4;
    beq[110] = t4;
    beq[111] = t4;
    beq[112] = t5;
    beq[113] = t6;
    beq[114] = t5;
    beq[115] = t6;
    beq[116] = eq_in[0];
    beq[117] = eq_in[0];
    beq[118] = eq_in[0];
    beq[119] = eq_in[0];
    beq[120] = eq_in[1];
    beq[121] = eq_in[1];
    beq[122] = eq_in[1];
    beq[123] = eq_in[1];
    st.site = &d_emlrtRSI;
    Iq_RightStart03DFootV98(SD, &st, *(real_T (*)[17])&states_ref[7], *(real_T (*)
      [17])&states_ref[24], *(real_T (*)[17])&states_ref[41], qo, r1, r2,
      states[4], states[5], *(real_T (*)[3])&foot_info[0], *(real_T (*)[3])&
      foot_info[3], *(real_T (*)[2])&foot_info[6], iq_in, *(real_T (*)[4])&
      foot_future_info[0], *(real_T (*)[4])&foot_future_info[4], *(real_T (*)[8])
      &foot_future_info[8], *(real_T (*)[4])&foot_future_info[16], Aiq, biq);

    /*  Develop The Objective Function Matrix and Vector */
    /* OBJ_RIGHTSTART03DFOOTV98 */
    /*     [H,F] = OBJ_RIGHTSTART03DFOOTV98(CPX1,CPY1,IN3,IN4,IN5,IN6,IN7,IN8,CRX1,CRY1,CRZ1,CWX1,CWY1,M1,IN15,IN16) */
    /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
    /*     06-Jul-2023 15:34:38 */
    t2 = weights[1] * 2.0;
    t3 = weights[2] * 2.0;
    t4 = weights[3] * 2.0;
    t5 = weights[4] * 2.0;
    t6 = weights[9] * 2.0;
    t7 = weights[10] * 2.0;
    t8 = weights[5] * 2.0;
    t9 = weights[6] * 2.0;
    t10 = weights[11] * 2.0;
    t11 = weights[5] * 18.0;
    t12 = weights[5] * 10.0;
    t13 = weights[6] * 18.0;
    t14 = weights[6] * 10.0;
    t15 = weights[0] * 2.0;
    t16 = obj_in[1] * 2.0;
    t17 = obj_in[2] * 2.0;
    t18 = obj_in[3] * 2.0;
    t19 = obj_in[0] * 2.0;
    t20 = weights[7] * 2.0;
    t21 = weights[8] * 2.0;
    SD->f3.t2[0] = t2;
    memset(&SD->f3.t2[1], 0, 477U * sizeof(real_T));
    SD->f3.t2[478] = t2;
    memset(&SD->f3.t2[479], 0, 477U * sizeof(real_T));
    SD->f3.t2[956] = t2;
    memset(&SD->f3.t2[957], 0, 477U * sizeof(real_T));
    SD->f3.t2[1434] = t2;
    memset(&SD->f3.t2[1435], 0, 477U * sizeof(real_T));
    SD->f3.t2[1912] = t2;
    memset(&SD->f3.t2[1913], 0, 238U * sizeof(real_T));
    SD->f3.t2[2151] = t3;
    memset(&SD->f3.t2[2152], 0, 238U * sizeof(real_T));
    SD->f3.t2[2390] = t2;
    memset(&SD->f3.t2[2391], 0, 477U * sizeof(real_T));
    SD->f3.t2[2868] = t2;
    memset(&SD->f3.t2[2869], 0, 477U * sizeof(real_T));
    SD->f3.t2[3346] = t2;
    memset(&SD->f3.t2[3347], 0, 477U * sizeof(real_T));
    SD->f3.t2[3824] = t2;
    memset(&SD->f3.t2[3825], 0, 238U * sizeof(real_T));
    SD->f3.t2[4063] = t3;
    memset(&SD->f3.t2[4064], 0, 238U * sizeof(real_T));
    SD->f3.t2[4302] = t2;
    memset(&SD->f3.t2[4303], 0, 477U * sizeof(real_T));
    SD->f3.t2[4780] = t2;
    memset(&SD->f3.t2[4781], 0, 477U * sizeof(real_T));
    SD->f3.t2[5258] = t2;
    memset(&SD->f3.t2[5259], 0, 477U * sizeof(real_T));
    SD->f3.t2[5736] = t2;
    memset(&SD->f3.t2[5737], 0, 238U * sizeof(real_T));
    SD->f3.t2[5975] = t3;
    memset(&SD->f3.t2[5976], 0, 238U * sizeof(real_T));
    SD->f3.t2[6214] = t2;
    memset(&SD->f3.t2[6215], 0, 477U * sizeof(real_T));
    SD->f3.t2[6692] = t2;
    memset(&SD->f3.t2[6693], 0, 477U * sizeof(real_T));
    SD->f3.t2[7170] = t2;
    memset(&SD->f3.t2[7171], 0, 477U * sizeof(real_T));
    SD->f3.t2[7648] = t2;
    memset(&SD->f3.t2[7649], 0, 238U * sizeof(real_T));
    SD->f3.t2[7887] = t3;
    memset(&SD->f3.t2[7888], 0, 238U * sizeof(real_T));
    SD->f3.t2[8126] = t4;
    memset(&SD->f3.t2[8127], 0, 477U * sizeof(real_T));
    SD->f3.t2[8604] = t4;
    memset(&SD->f3.t2[8605], 0, 477U * sizeof(real_T));
    SD->f3.t2[9082] = t4;
    memset(&SD->f3.t2[9083], 0, 477U * sizeof(real_T));
    SD->f3.t2[9560] = t4;
    memset(&SD->f3.t2[9561], 0, 477U * sizeof(real_T));
    SD->f3.t2[10038] = t4;
    memset(&SD->f3.t2[10039], 0, 238U * sizeof(real_T));
    SD->f3.t2[10277] = t5;
    memset(&SD->f3.t2[10278], 0, 238U * sizeof(real_T));
    SD->f3.t2[10516] = t4;
    memset(&SD->f3.t2[10517], 0, 477U * sizeof(real_T));
    SD->f3.t2[10994] = t4;
    memset(&SD->f3.t2[10995], 0, 477U * sizeof(real_T));
    SD->f3.t2[11472] = t4;
    memset(&SD->f3.t2[11473], 0, 477U * sizeof(real_T));
    SD->f3.t2[11950] = t4;
    memset(&SD->f3.t2[11951], 0, 238U * sizeof(real_T));
    SD->f3.t2[12189] = t5;
    memset(&SD->f3.t2[12190], 0, 238U * sizeof(real_T));
    SD->f3.t2[12428] = t4;
    memset(&SD->f3.t2[12429], 0, 477U * sizeof(real_T));
    SD->f3.t2[12906] = t4;
    memset(&SD->f3.t2[12907], 0, 477U * sizeof(real_T));
    SD->f3.t2[13384] = t4;
    memset(&SD->f3.t2[13385], 0, 477U * sizeof(real_T));
    SD->f3.t2[13862] = t4;
    memset(&SD->f3.t2[13863], 0, 238U * sizeof(real_T));
    SD->f3.t2[14101] = t5;
    memset(&SD->f3.t2[14102], 0, 238U * sizeof(real_T));
    SD->f3.t2[14340] = t4;
    memset(&SD->f3.t2[14341], 0, 477U * sizeof(real_T));
    SD->f3.t2[14818] = t4;
    memset(&SD->f3.t2[14819], 0, 477U * sizeof(real_T));
    SD->f3.t2[15296] = t4;
    memset(&SD->f3.t2[15297], 0, 477U * sizeof(real_T));
    SD->f3.t2[15774] = t4;
    memset(&SD->f3.t2[15775], 0, 238U * sizeof(real_T));
    SD->f3.t2[16013] = t5;
    memset(&SD->f3.t2[16014], 0, 238U * sizeof(real_T));
    SD->f3.t2[16252] = t6;
    memset(&SD->f3.t2[16253], 0, 238U * sizeof(real_T));
    SD->f3.t2[16491] = t7;
    memset(&SD->f3.t2[16492], 0, 238U * sizeof(real_T));
    SD->f3.t2[16730] = t6;
    memset(&SD->f3.t2[16731], 0, 238U * sizeof(real_T));
    SD->f3.t2[16969] = t7;
    memset(&SD->f3.t2[16970], 0, 238U * sizeof(real_T));
    SD->f3.t2[17208] = t6;
    memset(&SD->f3.t2[17209], 0, 238U * sizeof(real_T));
    SD->f3.t2[17447] = t7;
    memset(&SD->f3.t2[17448], 0, 238U * sizeof(real_T));
    SD->f3.t2[17686] = t6;
    memset(&SD->f3.t2[17687], 0, 238U * sizeof(real_T));
    SD->f3.t2[17925] = t7;
    memset(&SD->f3.t2[17926], 0, 238U * sizeof(real_T));
    SD->f3.t2[18164] = t6;
    memset(&SD->f3.t2[18165], 0, 238U * sizeof(real_T));
    SD->f3.t2[18403] = t7;
    memset(&SD->f3.t2[18404], 0, 238U * sizeof(real_T));
    SD->f3.t2[18642] = t6;
    memset(&SD->f3.t2[18643], 0, 238U * sizeof(real_T));
    SD->f3.t2[18881] = t7;
    memset(&SD->f3.t2[18882], 0, 238U * sizeof(real_T));
    SD->f3.t2[19120] = t6;
    memset(&SD->f3.t2[19121], 0, 238U * sizeof(real_T));
    SD->f3.t2[19359] = t7;
    memset(&SD->f3.t2[19360], 0, 238U * sizeof(real_T));
    SD->f3.t2[19598] = t6;
    memset(&SD->f3.t2[19599], 0, 238U * sizeof(real_T));
    SD->f3.t2[19837] = t7;
    memset(&SD->f3.t2[19838], 0, 238U * sizeof(real_T));
    SD->f3.t2[20076] = t6;
    memset(&SD->f3.t2[20077], 0, 238U * sizeof(real_T));
    SD->f3.t2[20315] = t7;
    memset(&SD->f3.t2[20316], 0, 238U * sizeof(real_T));
    SD->f3.t2[20554] = t6;
    memset(&SD->f3.t2[20555], 0, 238U * sizeof(real_T));
    SD->f3.t2[20793] = t7;
    memset(&SD->f3.t2[20794], 0, 238U * sizeof(real_T));
    SD->f3.t2[21032] = t6;
    memset(&SD->f3.t2[21033], 0, 238U * sizeof(real_T));
    SD->f3.t2[21271] = t7;
    memset(&SD->f3.t2[21272], 0, 238U * sizeof(real_T));
    SD->f3.t2[21510] = t6;
    memset(&SD->f3.t2[21511], 0, 238U * sizeof(real_T));
    SD->f3.t2[21749] = t7;
    memset(&SD->f3.t2[21750], 0, 238U * sizeof(real_T));
    SD->f3.t2[21988] = t6;
    memset(&SD->f3.t2[21989], 0, 238U * sizeof(real_T));
    SD->f3.t2[22227] = t7;
    memset(&SD->f3.t2[22228], 0, 238U * sizeof(real_T));
    SD->f3.t2[22466] = t6;
    memset(&SD->f3.t2[22467], 0, 238U * sizeof(real_T));
    SD->f3.t2[22705] = t7;
    memset(&SD->f3.t2[22706], 0, 238U * sizeof(real_T));
    SD->f3.t2[22944] = t6;
    memset(&SD->f3.t2[22945], 0, 238U * sizeof(real_T));
    SD->f3.t2[23183] = t7;
    memset(&SD->f3.t2[23184], 0, 238U * sizeof(real_T));
    SD->f3.t2[23422] = t6;
    memset(&SD->f3.t2[23423], 0, 238U * sizeof(real_T));
    SD->f3.t2[23661] = t7;
    memset(&SD->f3.t2[23662], 0, 238U * sizeof(real_T));
    SD->f3.t2[23900] = t6;
    memset(&SD->f3.t2[23901], 0, 238U * sizeof(real_T));
    SD->f3.t2[24139] = t7;
    memset(&SD->f3.t2[24140], 0, 1194U * sizeof(real_T));
    SD->f3.t2[25334] = t8;
    memset(&SD->f3.t2[25335], 0, 46U * sizeof(real_T));
    SD->f3.t2[25381] = -t8;
    memset(&SD->f3.t2[25382], 0, 191U * sizeof(real_T));
    SD->f3.t2[25573] = t8;
    memset(&SD->f3.t2[25574], 0, 45U * sizeof(real_T));
    SD->f3.t2[25619] = -t8;
    memset(&SD->f3.t2[25620], 0, 192U * sizeof(real_T));
    SD->f3.t2[25812] = t8;
    memset(&SD->f3.t2[25813], 0, 44U * sizeof(real_T));
    SD->f3.t2[25857] = -t8;
    memset(&SD->f3.t2[25858], 0, 193U * sizeof(real_T));
    SD->f3.t2[26051] = t8;
    memset(&SD->f3.t2[26052], 0, 43U * sizeof(real_T));
    SD->f3.t2[26095] = -t8;
    memset(&SD->f3.t2[26096], 0, 194U * sizeof(real_T));
    SD->f3.t2[26290] = t8;
    memset(&SD->f3.t2[26291], 0, 42U * sizeof(real_T));
    SD->f3.t2[26333] = -t8;
    SD->f3.t2[26334] = -t8;
    memset(&SD->f3.t2[26335], 0, 194U * sizeof(real_T));
    SD->f3.t2[26529] = t8;
    memset(&SD->f3.t2[26530], 0, 41U * sizeof(real_T));
    SD->f3.t2[26571] = -t8;
    SD->f3.t2[26572] = -t8;
    memset(&SD->f3.t2[26573], 0, 195U * sizeof(real_T));
    SD->f3.t2[26768] = t8;
    memset(&SD->f3.t2[26769], 0, 40U * sizeof(real_T));
    SD->f3.t2[26809] = -t8;
    SD->f3.t2[26810] = -t8;
    memset(&SD->f3.t2[26811], 0, 196U * sizeof(real_T));
    SD->f3.t2[27007] = t8;
    memset(&SD->f3.t2[27008], 0, 39U * sizeof(real_T));
    SD->f3.t2[27047] = -t8;
    SD->f3.t2[27048] = -t8;
    memset(&SD->f3.t2[27049], 0, 197U * sizeof(real_T));
    SD->f3.t2[27246] = t8;
    memset(&SD->f3.t2[27247], 0, 38U * sizeof(real_T));
    SD->f3.t2[27285] = -t8;
    SD->f3.t2[27286] = -t8;
    SD->f3.t2[27287] = -t8;
    memset(&SD->f3.t2[27288], 0, 197U * sizeof(real_T));
    SD->f3.t2[27485] = t8;
    memset(&SD->f3.t2[27486], 0, 37U * sizeof(real_T));
    SD->f3.t2[27523] = -t8;
    SD->f3.t2[27524] = -t8;
    SD->f3.t2[27525] = -t8;
    memset(&SD->f3.t2[27526], 0, 198U * sizeof(real_T));
    SD->f3.t2[27724] = t8;
    memset(&SD->f3.t2[27725], 0, 36U * sizeof(real_T));
    SD->f3.t2[27761] = -t8;
    SD->f3.t2[27762] = -t8;
    SD->f3.t2[27763] = -t8;
    memset(&SD->f3.t2[27764], 0, 199U * sizeof(real_T));
    SD->f3.t2[27963] = t8;
    memset(&SD->f3.t2[27964], 0, 35U * sizeof(real_T));
    SD->f3.t2[27999] = -t8;
    SD->f3.t2[28000] = -t8;
    SD->f3.t2[28001] = -t8;
    memset(&SD->f3.t2[28002], 0, 200U * sizeof(real_T));
    SD->f3.t2[28202] = t8;
    memset(&SD->f3.t2[28203], 0, 34U * sizeof(real_T));
    SD->f3.t2[28237] = -t8;
    SD->f3.t2[28238] = -t8;
    SD->f3.t2[28239] = -t8;
    SD->f3.t2[28240] = -t8;
    memset(&SD->f3.t2[28241], 0, 1156U * sizeof(real_T));
    SD->f3.t2[29397] = t9;
    memset(&SD->f3.t2[29398], 0, 33U * sizeof(real_T));
    SD->f3.t2[29431] = -t9;
    memset(&SD->f3.t2[29432], 0, 204U * sizeof(real_T));
    SD->f3.t2[29636] = t9;
    memset(&SD->f3.t2[29637], 0, sizeof(real_T) << 5);
    SD->f3.t2[29669] = -t9;
    memset(&SD->f3.t2[29670], 0, 205U * sizeof(real_T));
    SD->f3.t2[29875] = t9;
    memset(&SD->f3.t2[29876], 0, 31U * sizeof(real_T));
    SD->f3.t2[29907] = -t9;
    memset(&SD->f3.t2[29908], 0, 206U * sizeof(real_T));
    SD->f3.t2[30114] = t9;
    memset(&SD->f3.t2[30115], 0, 30U * sizeof(real_T));
    SD->f3.t2[30145] = -t9;
    memset(&SD->f3.t2[30146], 0, 207U * sizeof(real_T));
    SD->f3.t2[30353] = t9;
    memset(&SD->f3.t2[30354], 0, 29U * sizeof(real_T));
    SD->f3.t2[30383] = -t9;
    SD->f3.t2[30384] = -t9;
    memset(&SD->f3.t2[30385], 0, 207U * sizeof(real_T));
    SD->f3.t2[30592] = t9;
    memset(&SD->f3.t2[30593], 0, 28U * sizeof(real_T));
    SD->f3.t2[30621] = -t9;
    SD->f3.t2[30622] = -t9;
    memset(&SD->f3.t2[30623], 0, 208U * sizeof(real_T));
    SD->f3.t2[30831] = t9;
    memset(&SD->f3.t2[30832], 0, 27U * sizeof(real_T));
    SD->f3.t2[30859] = -t9;
    SD->f3.t2[30860] = -t9;
    memset(&SD->f3.t2[30861], 0, 209U * sizeof(real_T));
    SD->f3.t2[31070] = t9;
    memset(&SD->f3.t2[31071], 0, 26U * sizeof(real_T));
    SD->f3.t2[31097] = -t9;
    SD->f3.t2[31098] = -t9;
    memset(&SD->f3.t2[31099], 0, 210U * sizeof(real_T));
    SD->f3.t2[31309] = t9;
    memset(&SD->f3.t2[31310], 0, 25U * sizeof(real_T));
    SD->f3.t2[31335] = -t9;
    SD->f3.t2[31336] = -t9;
    SD->f3.t2[31337] = -t9;
    memset(&SD->f3.t2[31338], 0, 210U * sizeof(real_T));
    SD->f3.t2[31548] = t9;
    memset(&SD->f3.t2[31549], 0, 24U * sizeof(real_T));
    SD->f3.t2[31573] = -t9;
    SD->f3.t2[31574] = -t9;
    SD->f3.t2[31575] = -t9;
    memset(&SD->f3.t2[31576], 0, 211U * sizeof(real_T));
    SD->f3.t2[31787] = t9;
    memset(&SD->f3.t2[31788], 0, 23U * sizeof(real_T));
    SD->f3.t2[31811] = -t9;
    SD->f3.t2[31812] = -t9;
    SD->f3.t2[31813] = -t9;
    memset(&SD->f3.t2[31814], 0, 212U * sizeof(real_T));
    SD->f3.t2[32026] = t9;
    memset(&SD->f3.t2[32027], 0, 22U * sizeof(real_T));
    SD->f3.t2[32049] = -t9;
    SD->f3.t2[32050] = -t9;
    SD->f3.t2[32051] = -t9;
    memset(&SD->f3.t2[32052], 0, 213U * sizeof(real_T));
    SD->f3.t2[32265] = t9;
    memset(&SD->f3.t2[32266], 0, 21U * sizeof(real_T));
    SD->f3.t2[32287] = -t9;
    SD->f3.t2[32288] = -t9;
    SD->f3.t2[32289] = -t9;
    SD->f3.t2[32290] = -t9;
    memset(&SD->f3.t2[32291], 0, 213U * sizeof(real_T));
    SD->f3.t2[32504] = t10;
    memset(&SD->f3.t2[32505], 0, 238U * sizeof(real_T));
    SD->f3.t2[32743] = t10;
    memset(&SD->f3.t2[32744], 0, 238U * sizeof(real_T));
    SD->f3.t2[32982] = t10;
    memset(&SD->f3.t2[32983], 0, 238U * sizeof(real_T));
    SD->f3.t2[33221] = t10;
    memset(&SD->f3.t2[33222], 0, 238U * sizeof(real_T));
    SD->f3.t2[33460] = t10;
    memset(&SD->f3.t2[33461], 0, 238U * sizeof(real_T));
    SD->f3.t2[33699] = t10;
    memset(&SD->f3.t2[33700], 0, 238U * sizeof(real_T));
    SD->f3.t2[33938] = t10;
    memset(&SD->f3.t2[33939], 0, 238U * sizeof(real_T));
    SD->f3.t2[34177] = t10;
    memset(&SD->f3.t2[34178], 0, 238U * sizeof(real_T));
    SD->f3.t2[34416] = t10;
    memset(&SD->f3.t2[34417], 0, 238U * sizeof(real_T));
    SD->f3.t2[34655] = t10;
    memset(&SD->f3.t2[34656], 0, 238U * sizeof(real_T));
    SD->f3.t2[34894] = t10;
    memset(&SD->f3.t2[34895], 0, 238U * sizeof(real_T));
    SD->f3.t2[35133] = t10;
    memset(&SD->f3.t2[35134], 0, 238U * sizeof(real_T));
    SD->f3.t2[35372] = t10;
    memset(&SD->f3.t2[35373], 0, 238U * sizeof(real_T));
    SD->f3.t2[35611] = t10;
    memset(&SD->f3.t2[35612], 0, 238U * sizeof(real_T));
    SD->f3.t2[35850] = t10;
    memset(&SD->f3.t2[35851], 0, 238U * sizeof(real_T));
    SD->f3.t2[36089] = t10;
    memset(&SD->f3.t2[36090], 0, 238U * sizeof(real_T));
    SD->f3.t2[36328] = t10;
    memset(&SD->f3.t2[36329], 0, 191U * sizeof(real_T));
    SD->f3.t2[36520] = -t8;
    SD->f3.t2[36521] = -t8;
    SD->f3.t2[36522] = -t8;
    SD->f3.t2[36523] = -t8;
    SD->f3.t2[36524] = -t8;
    SD->f3.t2[36525] = -t8;
    SD->f3.t2[36526] = -t8;
    SD->f3.t2[36527] = -t8;
    SD->f3.t2[36528] = -t8;
    SD->f3.t2[36529] = -t8;
    SD->f3.t2[36530] = -t8;
    SD->f3.t2[36531] = -t8;
    SD->f3.t2[36532] = -t8;
    memset(&SD->f3.t2[36533], 0, 34U * sizeof(real_T));
    SD->f3.t2[36567] = weights[5] * 26.0;
    SD->f3.t2[36568] = t11;
    SD->f3.t2[36569] = t12;
    SD->f3.t2[36570] = t8;
    memset(&SD->f3.t2[36571], 0, 191U * sizeof(real_T));
    SD->f3.t2[36762] = -t8;
    SD->f3.t2[36763] = -t8;
    SD->f3.t2[36764] = -t8;
    SD->f3.t2[36765] = -t8;
    SD->f3.t2[36766] = -t8;
    SD->f3.t2[36767] = -t8;
    SD->f3.t2[36768] = -t8;
    SD->f3.t2[36769] = -t8;
    SD->f3.t2[36770] = -t8;
    memset(&SD->f3.t2[36771], 0, 34U * sizeof(real_T));
    SD->f3.t2[36805] = t11;
    SD->f3.t2[36806] = t11;
    SD->f3.t2[36807] = t12;
    SD->f3.t2[36808] = t8;
    memset(&SD->f3.t2[36809], 0, 195U * sizeof(real_T));
    SD->f3.t2[37004] = -t8;
    SD->f3.t2[37005] = -t8;
    SD->f3.t2[37006] = -t8;
    SD->f3.t2[37007] = -t8;
    SD->f3.t2[37008] = -t8;
    memset(&SD->f3.t2[37009], 0, 34U * sizeof(real_T));
    SD->f3.t2[37043] = t12;
    SD->f3.t2[37044] = t12;
    SD->f3.t2[37045] = t12;
    SD->f3.t2[37046] = t8;
    memset(&SD->f3.t2[37047], 0, 199U * sizeof(real_T));
    SD->f3.t2[37246] = -t8;
    memset(&SD->f3.t2[37247], 0, 34U * sizeof(real_T));
    SD->f3.t2[37281] = t8;
    SD->f3.t2[37282] = t8;
    SD->f3.t2[37283] = t8;
    SD->f3.t2[37284] = t8;
    memset(&SD->f3.t2[37285], 0, 204U * sizeof(real_T));
    SD->f3.t2[37489] = -t9;
    SD->f3.t2[37490] = -t9;
    SD->f3.t2[37491] = -t9;
    SD->f3.t2[37492] = -t9;
    SD->f3.t2[37493] = -t9;
    SD->f3.t2[37494] = -t9;
    SD->f3.t2[37495] = -t9;
    SD->f3.t2[37496] = -t9;
    SD->f3.t2[37497] = -t9;
    SD->f3.t2[37498] = -t9;
    SD->f3.t2[37499] = -t9;
    SD->f3.t2[37500] = -t9;
    SD->f3.t2[37501] = -t9;
    memset(&SD->f3.t2[37502], 0, 21U * sizeof(real_T));
    SD->f3.t2[37523] = weights[6] * 26.0;
    SD->f3.t2[37524] = t13;
    SD->f3.t2[37525] = t14;
    SD->f3.t2[37526] = t9;
    memset(&SD->f3.t2[37527], 0, 204U * sizeof(real_T));
    SD->f3.t2[37731] = -t9;
    SD->f3.t2[37732] = -t9;
    SD->f3.t2[37733] = -t9;
    SD->f3.t2[37734] = -t9;
    SD->f3.t2[37735] = -t9;
    SD->f3.t2[37736] = -t9;
    SD->f3.t2[37737] = -t9;
    SD->f3.t2[37738] = -t9;
    SD->f3.t2[37739] = -t9;
    memset(&SD->f3.t2[37740], 0, 21U * sizeof(real_T));
    SD->f3.t2[37761] = t13;
    SD->f3.t2[37762] = t13;
    SD->f3.t2[37763] = t14;
    SD->f3.t2[37764] = t9;
    memset(&SD->f3.t2[37765], 0, 208U * sizeof(real_T));
    SD->f3.t2[37973] = -t9;
    SD->f3.t2[37974] = -t9;
    SD->f3.t2[37975] = -t9;
    SD->f3.t2[37976] = -t9;
    SD->f3.t2[37977] = -t9;
    memset(&SD->f3.t2[37978], 0, 21U * sizeof(real_T));
    SD->f3.t2[37999] = t14;
    SD->f3.t2[38000] = t14;
    SD->f3.t2[38001] = t14;
    SD->f3.t2[38002] = t9;
    memset(&SD->f3.t2[38003], 0, 212U * sizeof(real_T));
    SD->f3.t2[38215] = -t9;
    memset(&SD->f3.t2[38216], 0, 21U * sizeof(real_T));
    SD->f3.t2[38237] = t9;
    SD->f3.t2[38238] = t9;
    SD->f3.t2[38239] = t9;
    SD->f3.t2[38240] = t9;
    memset(&SD->f3.t2[38241], 0, 238U * sizeof(real_T));
    SD->f3.t2[38479] = t15;
    memset(&SD->f3.t2[38480], 0, 238U * sizeof(real_T));
    SD->f3.t2[38718] = t15;
    memset(&SD->f3.t2[38719], 0, 238U * sizeof(real_T));
    SD->f3.t2[38957] = t15;
    memset(&SD->f3.t2[38958], 0, 238U * sizeof(real_T));
    SD->f3.t2[39196] = t15;
    memset(&SD->f3.t2[39197], 0, 238U * sizeof(real_T));
    SD->f3.t2[39435] = t15;
    memset(&SD->f3.t2[39436], 0, 238U * sizeof(real_T));
    SD->f3.t2[39674] = t15;
    memset(&SD->f3.t2[39675], 0, 238U * sizeof(real_T));
    SD->f3.t2[39913] = t15;
    memset(&SD->f3.t2[39914], 0, 238U * sizeof(real_T));
    SD->f3.t2[40152] = t15;
    memset(&SD->f3.t2[40153], 0, 238U * sizeof(real_T));
    SD->f3.t2[40391] = t15;
    memset(&SD->f3.t2[40392], 0, 238U * sizeof(real_T));
    SD->f3.t2[40630] = t15;
    memset(&SD->f3.t2[40631], 0, 238U * sizeof(real_T));
    SD->f3.t2[40869] = t15;
    memset(&SD->f3.t2[40870], 0, 238U * sizeof(real_T));
    SD->f3.t2[41108] = t15;
    memset(&SD->f3.t2[41109], 0, 238U * sizeof(real_T));
    SD->f3.t2[41347] = t15;
    memset(&SD->f3.t2[41348], 0, 238U * sizeof(real_T));
    SD->f3.t2[41586] = t15;
    memset(&SD->f3.t2[41587], 0, 238U * sizeof(real_T));
    SD->f3.t2[41825] = t15;
    memset(&SD->f3.t2[41826], 0, 238U * sizeof(real_T));
    SD->f3.t2[42064] = t15;
    memset(&SD->f3.t2[42065], 0, 238U * sizeof(real_T));
    SD->f3.t2[42303] = t15;
    memset(&SD->f3.t2[42304], 0, 4301U * sizeof(real_T));
    SD->f3.t2[46605] = t8;
    memset(&SD->f3.t2[46606], 0, 238U * sizeof(real_T));
    SD->f3.t2[46844] = t8;
    memset(&SD->f3.t2[46845], 0, 238U * sizeof(real_T));
    SD->f3.t2[47083] = t8;
    memset(&SD->f3.t2[47084], 0, 238U * sizeof(real_T));
    SD->f3.t2[47322] = t8;
    memset(&SD->f3.t2[47323], 0, 238U * sizeof(real_T));
    SD->f3.t2[47561] = t9;
    memset(&SD->f3.t2[47562], 0, 238U * sizeof(real_T));
    SD->f3.t2[47800] = t9;
    memset(&SD->f3.t2[47801], 0, 238U * sizeof(real_T));
    SD->f3.t2[48039] = t9;
    memset(&SD->f3.t2[48040], 0, 238U * sizeof(real_T));
    SD->f3.t2[48278] = t9;
    memset(&SD->f3.t2[48279], 0, 477U * sizeof(real_T));
    SD->f3.t2[48756] = t16;
    memset(&SD->f3.t2[48757], 0, 238U * sizeof(real_T));
    SD->f3.t2[48995] = t16;
    memset(&SD->f3.t2[48996], 0, 238U * sizeof(real_T));
    SD->f3.t2[49234] = t16;
    memset(&SD->f3.t2[49235], 0, 238U * sizeof(real_T));
    SD->f3.t2[49473] = t16;
    memset(&SD->f3.t2[49474], 0, 477U * sizeof(real_T));
    SD->f3.t2[49951] = t17;
    memset(&SD->f3.t2[49952], 0, 238U * sizeof(real_T));
    SD->f3.t2[50190] = t17;
    memset(&SD->f3.t2[50191], 0, 238U * sizeof(real_T));
    SD->f3.t2[50429] = t17;
    memset(&SD->f3.t2[50430], 0, 238U * sizeof(real_T));
    SD->f3.t2[50668] = t17;
    memset(&SD->f3.t2[50669], 0, 477U * sizeof(real_T));
    SD->f3.t2[51146] = t18;
    memset(&SD->f3.t2[51147], 0, 238U * sizeof(real_T));
    SD->f3.t2[51385] = t18;
    memset(&SD->f3.t2[51386], 0, 238U * sizeof(real_T));
    SD->f3.t2[51624] = t18;
    memset(&SD->f3.t2[51625], 0, 238U * sizeof(real_T));
    SD->f3.t2[51863] = t18;
    memset(&SD->f3.t2[51864], 0, 238U * sizeof(real_T));
    SD->f3.t2[52102] = t19;
    memset(&SD->f3.t2[52103], 0, 238U * sizeof(real_T));
    SD->f3.t2[52341] = t19;
    memset(&SD->f3.t2[52342], 0, 238U * sizeof(real_T));
    SD->f3.t2[52580] = t19;
    memset(&SD->f3.t2[52581], 0, 238U * sizeof(real_T));
    SD->f3.t2[52819] = t19;
    memset(&SD->f3.t2[52820], 0, 238U * sizeof(real_T));
    SD->f3.t2[53058] = t20;
    memset(&SD->f3.t2[53059], 0, 238U * sizeof(real_T));
    SD->f3.t2[53297] = t20;
    memset(&SD->f3.t2[53298], 0, 238U * sizeof(real_T));
    SD->f3.t2[53536] = t20;
    memset(&SD->f3.t2[53537], 0, 238U * sizeof(real_T));
    SD->f3.t2[53775] = t20;
    memset(&SD->f3.t2[53776], 0, 238U * sizeof(real_T));
    SD->f3.t2[54014] = t21;
    memset(&SD->f3.t2[54015], 0, 238U * sizeof(real_T));
    SD->f3.t2[54253] = t21;
    memset(&SD->f3.t2[54254], 0, 238U * sizeof(real_T));
    SD->f3.t2[54492] = t21;
    memset(&SD->f3.t2[54493], 0, 238U * sizeof(real_T));
    SD->f3.t2[54731] = t21;
    memset(&SD->f3.t2[54732], 0, 1912U * sizeof(real_T));
    for (i = 0; i < 238; i++) {
      memcpy(&H[i * 238], &SD->f3.t2[i * 238], 238U * sizeof(real_T));
    }

    f[0] = weights[1] * x_ref[0] * -2.0;
    f[1] = 0.0;
    f[2] = weights[1] * x_ref[0] * -2.0;
    f[3] = 0.0;
    f[4] = weights[1] * x_ref[0] * -2.0;
    f[5] = 0.0;
    f[6] = weights[1] * x_ref[0] * -2.0;
    f[7] = 0.0;
    f[8] = weights[1] * x_ref[0] * -2.0;
    f[9] = weights[2] * x_ref[1] * -2.0;
    f[10] = weights[1] * x_ref[0] * -2.0;
    f[11] = 0.0;
    f[12] = weights[1] * x_ref[0] * -2.0;
    f[13] = 0.0;
    f[14] = weights[1] * x_ref[0] * -2.0;
    f[15] = 0.0;
    f[16] = weights[1] * x_ref[0] * -2.0;
    f[17] = weights[2] * x_ref[2] * -2.0;
    f[18] = weights[1] * x_ref[0] * -2.0;
    f[19] = 0.0;
    f[20] = weights[1] * x_ref[0] * -2.0;
    f[21] = 0.0;
    f[22] = weights[1] * x_ref[0] * -2.0;
    f[23] = 0.0;
    f[24] = weights[1] * x_ref[0] * -2.0;
    f[25] = weights[2] * x_ref[3] * -2.0;
    f[26] = weights[1] * x_ref[0] * -2.0;
    f[27] = 0.0;
    f[28] = weights[1] * x_ref[0] * -2.0;
    f[29] = 0.0;
    f[30] = weights[1] * x_ref[0] * -2.0;
    f[31] = 0.0;
    f[32] = weights[1] * x_ref[0] * -2.0;
    f[33] = weights[2] * x_ref[4] * -2.0;
    f[34] = weights[3] * y_ref[0] * -2.0;
    f[35] = 0.0;
    f[36] = weights[3] * y_ref[0] * -2.0;
    f[37] = 0.0;
    f[38] = weights[3] * y_ref[0] * -2.0;
    f[39] = 0.0;
    f[40] = weights[3] * y_ref[0] * -2.0;
    f[41] = 0.0;
    f[42] = weights[3] * y_ref[0] * -2.0;
    f[43] = weights[4] * y_ref[1] * -2.0;
    f[44] = weights[3] * y_ref[0] * -2.0;
    f[45] = 0.0;
    f[46] = weights[3] * y_ref[0] * -2.0;
    f[47] = 0.0;
    f[48] = weights[3] * y_ref[0] * -2.0;
    f[49] = 0.0;
    f[50] = weights[3] * y_ref[0] * -2.0;
    f[51] = weights[4] * y_ref[2] * -2.0;
    f[52] = weights[3] * y_ref[0] * -2.0;
    f[53] = 0.0;
    f[54] = weights[3] * y_ref[0] * -2.0;
    f[55] = 0.0;
    f[56] = weights[3] * y_ref[0] * -2.0;
    f[57] = 0.0;
    f[58] = weights[3] * y_ref[0] * -2.0;
    f[59] = weights[4] * y_ref[3] * -2.0;
    f[60] = weights[3] * y_ref[0] * -2.0;
    f[61] = 0.0;
    f[62] = weights[3] * y_ref[0] * -2.0;
    f[63] = 0.0;
    f[64] = weights[3] * y_ref[0] * -2.0;
    f[65] = 0.0;
    f[66] = weights[3] * y_ref[0] * -2.0;
    f[67] = weights[4] * y_ref[4] * -2.0;
    f[68] = states_ref[4] * weights[9] * -2.0;
    f[69] = states_ref[5] * weights[10] * -2.0;
    f[70] = states_ref[4] * weights[9] * -2.0;
    f[71] = states_ref[5] * weights[10] * -2.0;
    f[72] = states_ref[4] * weights[9] * -2.0;
    f[73] = states_ref[5] * weights[10] * -2.0;
    f[74] = states_ref[4] * weights[9] * -2.0;
    f[75] = states_ref[5] * weights[10] * -2.0;
    f[76] = states_ref[4] * weights[9] * -2.0;
    f[77] = states_ref[5] * weights[10] * -2.0;
    f[78] = states_ref[4] * weights[9] * -2.0;
    f[79] = states_ref[5] * weights[10] * -2.0;
    f[80] = states_ref[4] * weights[9] * -2.0;
    f[81] = states_ref[5] * weights[10] * -2.0;
    f[82] = states_ref[4] * weights[9] * -2.0;
    f[83] = states_ref[5] * weights[10] * -2.0;
    f[84] = states_ref[4] * weights[9] * -2.0;
    f[85] = states_ref[5] * weights[10] * -2.0;
    f[86] = states_ref[4] * weights[9] * -2.0;
    f[87] = states_ref[5] * weights[10] * -2.0;
    f[88] = states_ref[4] * weights[9] * -2.0;
    f[89] = states_ref[5] * weights[10] * -2.0;
    f[90] = states_ref[4] * weights[9] * -2.0;
    f[91] = states_ref[5] * weights[10] * -2.0;
    f[92] = states_ref[4] * weights[9] * -2.0;
    f[93] = states_ref[5] * weights[10] * -2.0;
    f[94] = states_ref[4] * weights[9] * -2.0;
    f[95] = states_ref[5] * weights[10] * -2.0;
    f[96] = states_ref[4] * weights[9] * -2.0;
    f[97] = states_ref[5] * weights[10] * -2.0;
    f[98] = states_ref[4] * weights[9] * -2.0;
    f[99] = states_ref[5] * weights[10] * -2.0;
    f[100] = states_ref[4] * weights[9] * -2.0;
    f[101] = states_ref[5] * weights[10] * -2.0;
    f[102] = 0.0;
    f[103] = 0.0;
    f[104] = 0.0;
    f[105] = 0.0;
    f[106] = states[4] * weights[5] * -2.0;
    f[107] = states[4] * weights[5] * -2.0;
    f[108] = states[4] * weights[5] * -2.0;
    f[109] = states[4] * weights[5] * -2.0;
    f[110] = states[4] * weights[5] * -2.0;
    f[111] = states[4] * weights[5] * -2.0;
    f[112] = states[4] * weights[5] * -2.0;
    f[113] = states[4] * weights[5] * -2.0;
    f[114] = states[4] * weights[5] * -2.0;
    f[115] = states[4] * weights[5] * -2.0;
    f[116] = states[4] * weights[5] * -2.0;
    f[117] = states[4] * weights[5] * -2.0;
    f[118] = states[4] * weights[5] * -2.0;
    f[119] = 0.0;
    f[120] = 0.0;
    f[121] = 0.0;
    f[122] = 0.0;
    f[123] = states[5] * weights[6] * -2.0;
    f[124] = states[5] * weights[6] * -2.0;
    f[125] = states[5] * weights[6] * -2.0;
    f[126] = states[5] * weights[6] * -2.0;
    f[127] = states[5] * weights[6] * -2.0;
    f[128] = states[5] * weights[6] * -2.0;
    f[129] = states[5] * weights[6] * -2.0;
    f[130] = states[5] * weights[6] * -2.0;
    f[131] = states[5] * weights[6] * -2.0;
    f[132] = states[5] * weights[6] * -2.0;
    f[133] = states[5] * weights[6] * -2.0;
    f[134] = states[5] * weights[6] * -2.0;
    f[135] = states[5] * weights[6] * -2.0;
    memset(&f[136], 0, 17U * sizeof(real_T));
    f[153] = states[4] * weights[5] * 26.0;
    f[154] = states[4] * weights[5] * 18.0;
    f[155] = states[4] * weights[5] * 10.0;
    f[156] = states[4] * weights[5] * 2.0;
    f[157] = states[5] * weights[6] * 26.0;
    f[158] = states[5] * weights[6] * 18.0;
    f[159] = states[5] * weights[6] * 10.0;
    f[160] = states[5] * weights[6] * 2.0;
    memset(&f[161], 0, 43U * sizeof(real_T));
    f[204] = obj_in[1] * obj_in[5] * -2.0;
    f[205] = obj_in[1] * obj_in[6] * -2.0;
    f[206] = obj_in[1] * obj_in[7] * -2.0;
    f[207] = obj_in[1] * obj_in[8] * -2.0;
    f[208] = 0.0;
    f[209] = obj_in[2] * obj_in[10] * -2.0;
    f[210] = obj_in[2] * obj_in[11] * -2.0;
    f[211] = obj_in[2] * obj_in[12] * -2.0;
    f[212] = obj_in[2] * obj_in[13] * -2.0;
    f[213] = 0.0;
    f[214] = obj_in[3] * obj_in[15] * -2.0;
    f[215] = obj_in[3] * obj_in[16] * -2.0;
    f[216] = obj_in[3] * obj_in[17] * -2.0;
    f[217] = obj_in[3] * obj_in[18] * -2.0;
    memset(&f[218], 0, 20U * sizeof(real_T));
  }

  emxFree_real_T(&r2);
  emxFree_real_T(&r1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (temp_MPC3DFootV98_form_Step0.cpp) */
