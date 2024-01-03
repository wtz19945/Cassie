/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart23DFootV97.cpp
 *
 * Code generation for function 'Iq_LeftStart23DFootV97'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV97_form_Step2.h"
#include "Iq_LeftStart23DFootV97.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV97.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart23DFootV97(c_temp_MPC3DFootV97_form_Step2S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], real_T Aiq[29606], real_T biq[131])
{
  int32_T i0;
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
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t50;
  real_T t51;
  real_T t52;
  real_T t53;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t57;
  real_T t58;
  real_T t59;
  real_T a;
  real_T t67;
  real_T t68;
  real_T t76;
  real_T t77;
  real_T t85;
  real_T t86;
  real_T t94;
  real_T t95;
  real_T t103;
  real_T t104;
  real_T t112;
  real_T t113;
  real_T t121;
  real_T t122;
  real_T t130;
  real_T t131;
  real_T t139;
  real_T t140;
  real_T t148;
  real_T t149;
  real_T t157;
  real_T t158;
  real_T t167;

  /* IQ_LEFTSTART23DFOOTV97 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART23DFOOTV97(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     29-Jun-2023 16:17:01 */
  i0 = in8->size[1] << 1;
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, (emlrtBCInfo *)&kb_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(3 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i0, (emlrtBCInfo *)&jb_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(5 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i0, (emlrtBCInfo *)&ib_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(7 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i0, (emlrtBCInfo *)&hb_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(9 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i0, (emlrtBCInfo *)&gb_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(11 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i0, (emlrtBCInfo *)&fb_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(13 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i0, (emlrtBCInfo *)&eb_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(15 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i0, (emlrtBCInfo *)&db_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(17 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i0, (emlrtBCInfo *)&cb_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(2 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i0, (emlrtBCInfo *)&bb_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, (emlrtBCInfo *)&ab_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(3 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i0, (emlrtBCInfo *)&y_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(5 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i0, (emlrtBCInfo *)&x_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(7 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i0, (emlrtBCInfo *)&w_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(9 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i0, (emlrtBCInfo *)&v_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(11 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i0, (emlrtBCInfo *)&u_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(13 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i0, (emlrtBCInfo *)&t_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(15 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i0, (emlrtBCInfo *)&s_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(17 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i0, (emlrtBCInfo *)&r_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(2 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i0, (emlrtBCInfo *)&q_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(19 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i0, (emlrtBCInfo *)&p_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(21 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i0, (emlrtBCInfo *)&o_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(23 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i0, (emlrtBCInfo *)&n_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(25 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(25, 1, i0, (emlrtBCInfo *)&m_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(27 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(27, 1, i0, (emlrtBCInfo *)&l_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(29 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(29, 1, i0, (emlrtBCInfo *)&k_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(31 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(31, 1, i0, (emlrtBCInfo *)&j_emlrtBCI, sp);
  }

  i0 = in8->size[1] << 1;
  if (!(33 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(33, 1, i0, (emlrtBCInfo *)&i_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(19 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i0, (emlrtBCInfo *)&h_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(21 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i0, (emlrtBCInfo *)&g_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(23 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i0, (emlrtBCInfo *)&f_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(25 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(25, 1, i0, (emlrtBCInfo *)&e_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(27 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(27, 1, i0, (emlrtBCInfo *)&d_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(29 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(29, 1, i0, (emlrtBCInfo *)&c_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(31 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(31, 1, i0, (emlrtBCInfo *)&b_emlrtBCI, sp);
  }

  i0 = in9->size[1] << 1;
  if (!(33 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(33, 1, i0, (emlrtBCInfo *)&emlrtBCI, sp);
  }

  t2 = -in4[0] + in7[0];
  t3 = in7[1] - in5[0];
  t4 = in7[2] - in6[0];
  t5 = -in4[1] + in7[0];
  t6 = in7[1] - in5[1];
  t7 = in7[2] - in6[1];
  t8 = -in4[2] + in7[0];
  t9 = in7[1] - in5[2];
  t10 = in7[2] - in6[2];
  t11 = -in4[3] + in7[0];
  t12 = in7[1] - in5[3];
  t13 = in7[2] - in6[3];
  t14 = -in4[4] + in7[0];
  t15 = in7[1] - in5[4];
  t16 = in7[2] - in6[4];
  t17 = -in4[5] + in7[0];
  t18 = in7[1] - in5[5];
  t19 = in7[2] - in6[5];
  t20 = -in4[6] + in7[0];
  t21 = in7[1] - in5[6];
  t22 = in7[2] - in6[6];
  t23 = -in4[7] + in7[0];
  t24 = in7[1] - in5[7];
  t25 = in7[2] - in6[7];
  t26 = -in4[8] + in7[0];
  t27 = in7[1] - in5[8];
  t28 = in7[2] - in6[8];
  t29 = -in4[9] + in7[0];
  t30 = in7[1] - in5[9];
  t31 = in7[2] - in6[9];
  t32 = -in4[10] + in7[0];
  t33 = in7[1] - in5[10];
  t34 = in7[2] - in6[10];
  t35 = -in4[11] + in7[0];
  t36 = in7[1] - in5[11];
  t37 = in7[2] - in6[11];
  t38 = -in4[12] + in7[0];
  t39 = in7[1] - in5[12];
  t40 = in7[2] - in6[12];
  t41 = -in4[13] + in7[0];
  t42 = in7[1] - in5[13];
  t43 = in7[2] - in6[13];
  t44 = -in4[14] + in7[0];
  t45 = in7[1] - in5[14];
  t46 = in7[2] - in6[14];
  t47 = -in4[15] + in7[0];
  t48 = in7[1] - in5[15];
  t49 = in7[2] - in6[15];
  t50 = -in4[16] + in7[0];
  t51 = in7[1] - in5[16];
  t52 = in7[2] - in6[16];
  t53 = in15[0] - in15[18];
  t54 = in15[1] - in15[23];
  t55 = in15[2] - in15[28];
  t56 = in15[3] - in15[19];
  t57 = in15[4] - in15[24];
  t58 = in15[5] - in15[29];
  SD->u1.f0.dv3[0] = -1.0;
  memset(&SD->u1.f0.dv3[1], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[34] = 1.0;
  memset(&SD->u1.f0.dv3[35], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[68] = t2;
  memset(&SD->u1.f0.dv3[69], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[102] = t2;
  memset(&SD->u1.f0.dv3[103], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[263] = -1.0;
  memset(&SD->u1.f0.dv3[264], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[297] = 1.0;
  memset(&SD->u1.f0.dv3[298], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[331] = t5;
  memset(&SD->u1.f0.dv3[332], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[365] = t5;
  memset(&SD->u1.f0.dv3[366], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[526] = -1.0;
  memset(&SD->u1.f0.dv3[527], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[560] = 1.0;
  memset(&SD->u1.f0.dv3[561], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[594] = t8;
  memset(&SD->u1.f0.dv3[595], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[628] = t8;
  memset(&SD->u1.f0.dv3[629], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[789] = -1.0;
  memset(&SD->u1.f0.dv3[790], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[823] = 1.0;
  memset(&SD->u1.f0.dv3[824], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[857] = t11;
  memset(&SD->u1.f0.dv3[858], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[891] = t11;
  memset(&SD->u1.f0.dv3[892], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[1052] = -1.0;
  memset(&SD->u1.f0.dv3[1053], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1086] = 1.0;
  memset(&SD->u1.f0.dv3[1087], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1120] = t14;
  memset(&SD->u1.f0.dv3[1121], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1154] = t14;
  memset(&SD->u1.f0.dv3[1155], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[1315] = -1.0;
  memset(&SD->u1.f0.dv3[1316], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1349] = 1.0;
  memset(&SD->u1.f0.dv3[1350], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1383] = t17;
  memset(&SD->u1.f0.dv3[1384], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1417] = t17;
  memset(&SD->u1.f0.dv3[1418], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[1578] = -1.0;
  memset(&SD->u1.f0.dv3[1579], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1612] = 1.0;
  memset(&SD->u1.f0.dv3[1613], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1646] = t20;
  memset(&SD->u1.f0.dv3[1647], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1680] = t20;
  memset(&SD->u1.f0.dv3[1681], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[1841] = -1.0;
  memset(&SD->u1.f0.dv3[1842], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1875] = 1.0;
  memset(&SD->u1.f0.dv3[1876], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1909] = t23;
  memset(&SD->u1.f0.dv3[1910], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1943] = t23;
  memset(&SD->u1.f0.dv3[1944], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[2104] = -1.0;
  memset(&SD->u1.f0.dv3[2105], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2138] = 1.0;
  memset(&SD->u1.f0.dv3[2139], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2172] = t26;
  memset(&SD->u1.f0.dv3[2173], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2206] = t26;
  memset(&SD->u1.f0.dv3[2207], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[2367] = -1.0;
  memset(&SD->u1.f0.dv3[2368], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2401] = 1.0;
  memset(&SD->u1.f0.dv3[2402], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2435] = t29;
  memset(&SD->u1.f0.dv3[2436], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2469] = t29;
  memset(&SD->u1.f0.dv3[2470], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[2630] = -1.0;
  memset(&SD->u1.f0.dv3[2631], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2664] = 1.0;
  memset(&SD->u1.f0.dv3[2665], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2698] = t32;
  memset(&SD->u1.f0.dv3[2699], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2732] = t32;
  memset(&SD->u1.f0.dv3[2733], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[2893] = -1.0;
  memset(&SD->u1.f0.dv3[2894], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2927] = 1.0;
  memset(&SD->u1.f0.dv3[2928], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2961] = t35;
  memset(&SD->u1.f0.dv3[2962], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2995] = t35;
  memset(&SD->u1.f0.dv3[2996], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[3156] = -1.0;
  memset(&SD->u1.f0.dv3[3157], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3190] = 1.0;
  memset(&SD->u1.f0.dv3[3191], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3224] = t38;
  memset(&SD->u1.f0.dv3[3225], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3258] = t38;
  memset(&SD->u1.f0.dv3[3259], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[3419] = -1.0;
  memset(&SD->u1.f0.dv3[3420], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3453] = 1.0;
  memset(&SD->u1.f0.dv3[3454], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3487] = t41;
  memset(&SD->u1.f0.dv3[3488], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3521] = t41;
  memset(&SD->u1.f0.dv3[3522], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[3682] = -1.0;
  memset(&SD->u1.f0.dv3[3683], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3716] = 1.0;
  memset(&SD->u1.f0.dv3[3717], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3750] = t44;
  memset(&SD->u1.f0.dv3[3751], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3784] = t44;
  memset(&SD->u1.f0.dv3[3785], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[3945] = -1.0;
  memset(&SD->u1.f0.dv3[3946], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3979] = 1.0;
  memset(&SD->u1.f0.dv3[3980], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4013] = t47;
  memset(&SD->u1.f0.dv3[4014], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4047] = t47;
  memset(&SD->u1.f0.dv3[4048], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[4208] = -1.0;
  memset(&SD->u1.f0.dv3[4209], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4242] = 1.0;
  memset(&SD->u1.f0.dv3[4243], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4276] = t50;
  memset(&SD->u1.f0.dv3[4277], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4310] = t50;
  memset(&SD->u1.f0.dv3[4311], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv3[4471] = -1.0;
  memset(&SD->u1.f0.dv3[4472], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4505] = 1.0;
  memset(&SD->u1.f0.dv3[4506], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[4522] = t3;
  memset(&SD->u1.f0.dv3[4523], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4556] = t3;
  memset(&SD->u1.f0.dv3[4557], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[4734] = -1.0;
  memset(&SD->u1.f0.dv3[4735], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4768] = 1.0;
  memset(&SD->u1.f0.dv3[4769], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[4785] = t6;
  memset(&SD->u1.f0.dv3[4786], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4819] = t6;
  memset(&SD->u1.f0.dv3[4820], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[4997] = -1.0;
  memset(&SD->u1.f0.dv3[4998], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5031] = 1.0;
  memset(&SD->u1.f0.dv3[5032], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5048] = t9;
  memset(&SD->u1.f0.dv3[5049], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5082] = t9;
  memset(&SD->u1.f0.dv3[5083], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[5260] = -1.0;
  memset(&SD->u1.f0.dv3[5261], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5294] = 1.0;
  memset(&SD->u1.f0.dv3[5295], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5311] = t12;
  memset(&SD->u1.f0.dv3[5312], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5345] = t12;
  memset(&SD->u1.f0.dv3[5346], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[5523] = -1.0;
  memset(&SD->u1.f0.dv3[5524], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5557] = 1.0;
  memset(&SD->u1.f0.dv3[5558], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5574] = t15;
  memset(&SD->u1.f0.dv3[5575], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5608] = t15;
  memset(&SD->u1.f0.dv3[5609], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[5786] = -1.0;
  memset(&SD->u1.f0.dv3[5787], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5820] = 1.0;
  memset(&SD->u1.f0.dv3[5821], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5837] = t18;
  memset(&SD->u1.f0.dv3[5838], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5871] = t18;
  memset(&SD->u1.f0.dv3[5872], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[6049] = -1.0;
  memset(&SD->u1.f0.dv3[6050], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6083] = 1.0;
  memset(&SD->u1.f0.dv3[6084], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6100] = t21;
  memset(&SD->u1.f0.dv3[6101], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6134] = t21;
  memset(&SD->u1.f0.dv3[6135], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[6312] = -1.0;
  memset(&SD->u1.f0.dv3[6313], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6346] = 1.0;
  memset(&SD->u1.f0.dv3[6347], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6363] = t24;
  memset(&SD->u1.f0.dv3[6364], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6397] = t24;
  memset(&SD->u1.f0.dv3[6398], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[6575] = -1.0;
  memset(&SD->u1.f0.dv3[6576], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6609] = 1.0;
  memset(&SD->u1.f0.dv3[6610], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6626] = t27;
  memset(&SD->u1.f0.dv3[6627], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6660] = t27;
  memset(&SD->u1.f0.dv3[6661], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[6838] = -1.0;
  memset(&SD->u1.f0.dv3[6839], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6872] = 1.0;
  memset(&SD->u1.f0.dv3[6873], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6889] = t30;
  memset(&SD->u1.f0.dv3[6890], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6923] = t30;
  memset(&SD->u1.f0.dv3[6924], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[7101] = -1.0;
  memset(&SD->u1.f0.dv3[7102], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7135] = 1.0;
  memset(&SD->u1.f0.dv3[7136], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7152] = t33;
  memset(&SD->u1.f0.dv3[7153], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7186] = t33;
  memset(&SD->u1.f0.dv3[7187], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[7364] = -1.0;
  memset(&SD->u1.f0.dv3[7365], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7398] = 1.0;
  memset(&SD->u1.f0.dv3[7399], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7415] = t36;
  memset(&SD->u1.f0.dv3[7416], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7449] = t36;
  memset(&SD->u1.f0.dv3[7450], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[7627] = -1.0;
  memset(&SD->u1.f0.dv3[7628], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7661] = 1.0;
  memset(&SD->u1.f0.dv3[7662], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7678] = t39;
  memset(&SD->u1.f0.dv3[7679], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7712] = t39;
  memset(&SD->u1.f0.dv3[7713], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[7890] = -1.0;
  memset(&SD->u1.f0.dv3[7891], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7924] = 1.0;
  memset(&SD->u1.f0.dv3[7925], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7941] = t42;
  memset(&SD->u1.f0.dv3[7942], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7975] = t42;
  memset(&SD->u1.f0.dv3[7976], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[8153] = -1.0;
  memset(&SD->u1.f0.dv3[8154], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8187] = 1.0;
  memset(&SD->u1.f0.dv3[8188], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[8204] = t45;
  memset(&SD->u1.f0.dv3[8205], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8238] = t45;
  memset(&SD->u1.f0.dv3[8239], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[8416] = -1.0;
  memset(&SD->u1.f0.dv3[8417], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8450] = 1.0;
  memset(&SD->u1.f0.dv3[8451], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[8467] = t48;
  memset(&SD->u1.f0.dv3[8468], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8501] = t48;
  memset(&SD->u1.f0.dv3[8502], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv3[8679] = -1.0;
  memset(&SD->u1.f0.dv3[8680], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8713] = 1.0;
  memset(&SD->u1.f0.dv3[8714], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[8730] = t51;
  memset(&SD->u1.f0.dv3[8731], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8764] = t51;
  memset(&SD->u1.f0.dv3[8765], 0, 211U * sizeof(real_T));
  SD->u1.f0.dv3[8976] = t4;
  memset(&SD->u1.f0.dv3[8977], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9010] = t4;
  memset(&SD->u1.f0.dv3[9011], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[9239] = t7;
  memset(&SD->u1.f0.dv3[9240], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9273] = t7;
  memset(&SD->u1.f0.dv3[9274], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[9502] = t10;
  memset(&SD->u1.f0.dv3[9503], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9536] = t10;
  memset(&SD->u1.f0.dv3[9537], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[9765] = t13;
  memset(&SD->u1.f0.dv3[9766], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9799] = t13;
  memset(&SD->u1.f0.dv3[9800], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[10028] = t16;
  memset(&SD->u1.f0.dv3[10029], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10062] = t16;
  memset(&SD->u1.f0.dv3[10063], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[10291] = t19;
  memset(&SD->u1.f0.dv3[10292], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10325] = t19;
  memset(&SD->u1.f0.dv3[10326], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[10554] = t22;
  memset(&SD->u1.f0.dv3[10555], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10588] = t22;
  memset(&SD->u1.f0.dv3[10589], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[10817] = t25;
  memset(&SD->u1.f0.dv3[10818], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10851] = t25;
  memset(&SD->u1.f0.dv3[10852], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[11080] = t28;
  memset(&SD->u1.f0.dv3[11081], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11114] = t28;
  memset(&SD->u1.f0.dv3[11115], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[11343] = t31;
  memset(&SD->u1.f0.dv3[11344], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11377] = t31;
  memset(&SD->u1.f0.dv3[11378], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[11606] = t34;
  memset(&SD->u1.f0.dv3[11607], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11640] = t34;
  memset(&SD->u1.f0.dv3[11641], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[11869] = t37;
  memset(&SD->u1.f0.dv3[11870], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11903] = t37;
  memset(&SD->u1.f0.dv3[11904], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[12132] = t40;
  memset(&SD->u1.f0.dv3[12133], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12166] = t40;
  memset(&SD->u1.f0.dv3[12167], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[12395] = t43;
  memset(&SD->u1.f0.dv3[12396], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12429] = t43;
  memset(&SD->u1.f0.dv3[12430], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[12658] = t46;
  memset(&SD->u1.f0.dv3[12659], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12692] = t46;
  memset(&SD->u1.f0.dv3[12693], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[12921] = t49;
  memset(&SD->u1.f0.dv3[12922], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12955] = t49;
  memset(&SD->u1.f0.dv3[12956], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv3[13184] = t52;
  memset(&SD->u1.f0.dv3[13185], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13218] = t52;
  memset(&SD->u1.f0.dv3[13219], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv3[13362] = 1.0;
  memset(&SD->u1.f0.dv3[13363], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13396] = -1.0;
  memset(&SD->u1.f0.dv3[13397], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv3[13481] = 1.0;
  SD->u1.f0.dv3[13482] = 0.0;
  SD->u1.f0.dv3[13483] = -1.0;
  memset(&SD->u1.f0.dv3[13484], 0, 10U * sizeof(real_T));
  SD->u1.f0.dv3[13494] = 1.0;
  memset(&SD->u1.f0.dv3[13495], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13528] = -1.0;
  memset(&SD->u1.f0.dv3[13529], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv3[13613] = 1.0;
  SD->u1.f0.dv3[13614] = 0.0;
  SD->u1.f0.dv3[13615] = -1.0;
  memset(&SD->u1.f0.dv3[13616], 0, 10U * sizeof(real_T));
  SD->u1.f0.dv3[13626] = 1.0;
  memset(&SD->u1.f0.dv3[13627], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13660] = -1.0;
  memset(&SD->u1.f0.dv3[13661], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[13758] = 1.0;
  memset(&SD->u1.f0.dv3[13759], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13792] = -1.0;
  memset(&SD->u1.f0.dv3[13793], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[13890] = 1.0;
  memset(&SD->u1.f0.dv3[13891], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13924] = -1.0;
  memset(&SD->u1.f0.dv3[13925], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14022] = 1.0;
  memset(&SD->u1.f0.dv3[14023], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14056] = -1.0;
  memset(&SD->u1.f0.dv3[14057], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14154] = 1.0;
  memset(&SD->u1.f0.dv3[14155], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14188] = -1.0;
  memset(&SD->u1.f0.dv3[14189], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14286] = 1.0;
  memset(&SD->u1.f0.dv3[14287], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14320] = -1.0;
  memset(&SD->u1.f0.dv3[14321], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14418] = 1.0;
  memset(&SD->u1.f0.dv3[14419], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14452] = -1.0;
  memset(&SD->u1.f0.dv3[14453], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14550] = 1.0;
  memset(&SD->u1.f0.dv3[14551], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14584] = -1.0;
  memset(&SD->u1.f0.dv3[14585], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14682] = 1.0;
  memset(&SD->u1.f0.dv3[14683], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14716] = -1.0;
  memset(&SD->u1.f0.dv3[14717], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14814] = 1.0;
  memset(&SD->u1.f0.dv3[14815], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14848] = -1.0;
  memset(&SD->u1.f0.dv3[14849], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[14946] = 1.0;
  memset(&SD->u1.f0.dv3[14947], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14980] = -1.0;
  memset(&SD->u1.f0.dv3[14981], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[15078] = 1.0;
  memset(&SD->u1.f0.dv3[15079], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15112] = -1.0;
  memset(&SD->u1.f0.dv3[15113], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[15210] = 1.0;
  memset(&SD->u1.f0.dv3[15211], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15244] = -1.0;
  memset(&SD->u1.f0.dv3[15245], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[15342] = 1.0;
  memset(&SD->u1.f0.dv3[15343], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15376] = -1.0;
  memset(&SD->u1.f0.dv3[15377], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[15474] = 1.0;
  memset(&SD->u1.f0.dv3[15475], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15508] = -1.0;
  memset(&SD->u1.f0.dv3[15509], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[15606] = 1.0;
  memset(&SD->u1.f0.dv3[15607], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15640] = -1.0;
  memset(&SD->u1.f0.dv3[15641], 0, 71U * sizeof(real_T));
  SD->u1.f0.dv3[15712] = 1.0;
  SD->u1.f0.dv3[15713] = 0.0;
  SD->u1.f0.dv3[15714] = -1.0;
  memset(&SD->u1.f0.dv3[15715], 0, 23U * sizeof(real_T));
  SD->u1.f0.dv3[15738] = 1.0;
  memset(&SD->u1.f0.dv3[15739], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15772] = -1.0;
  memset(&SD->u1.f0.dv3[15773], 0, 71U * sizeof(real_T));
  SD->u1.f0.dv3[15844] = 1.0;
  SD->u1.f0.dv3[15845] = 0.0;
  SD->u1.f0.dv3[15846] = -1.0;
  memset(&SD->u1.f0.dv3[15847], 0, 23U * sizeof(real_T));
  SD->u1.f0.dv3[15870] = 1.0;
  memset(&SD->u1.f0.dv3[15871], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15904] = -1.0;
  memset(&SD->u1.f0.dv3[15905], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16002] = 1.0;
  memset(&SD->u1.f0.dv3[16003], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16036] = -1.0;
  memset(&SD->u1.f0.dv3[16037], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16134] = 1.0;
  memset(&SD->u1.f0.dv3[16135], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16168] = -1.0;
  memset(&SD->u1.f0.dv3[16169], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16266] = 1.0;
  memset(&SD->u1.f0.dv3[16267], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16300] = -1.0;
  memset(&SD->u1.f0.dv3[16301], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16398] = 1.0;
  memset(&SD->u1.f0.dv3[16399], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16432] = -1.0;
  memset(&SD->u1.f0.dv3[16433], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16530] = 1.0;
  memset(&SD->u1.f0.dv3[16531], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16564] = -1.0;
  memset(&SD->u1.f0.dv3[16565], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16662] = 1.0;
  memset(&SD->u1.f0.dv3[16663], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16696] = -1.0;
  memset(&SD->u1.f0.dv3[16697], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16794] = 1.0;
  memset(&SD->u1.f0.dv3[16795], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16828] = -1.0;
  memset(&SD->u1.f0.dv3[16829], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[16926] = 1.0;
  memset(&SD->u1.f0.dv3[16927], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16960] = -1.0;
  memset(&SD->u1.f0.dv3[16961], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[17058] = 1.0;
  memset(&SD->u1.f0.dv3[17059], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[17092] = -1.0;
  memset(&SD->u1.f0.dv3[17093], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[17190] = 1.0;
  memset(&SD->u1.f0.dv3[17191], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[17224] = -1.0;
  memset(&SD->u1.f0.dv3[17225], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[17322] = 1.0;
  memset(&SD->u1.f0.dv3[17323], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[17356] = -1.0;
  memset(&SD->u1.f0.dv3[17357], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[17454] = 1.0;
  memset(&SD->u1.f0.dv3[17455], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[17488] = -1.0;
  memset(&SD->u1.f0.dv3[17489], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[17586] = 1.0;
  memset(&SD->u1.f0.dv3[17587], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[17620] = -1.0;
  memset(&SD->u1.f0.dv3[17621], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv3[17718] = 1.0;
  memset(&SD->u1.f0.dv3[17719], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[17752] = -1.0;
  memset(&SD->u1.f0.dv3[17753], 0, 3423U * sizeof(real_T));
  SD->u1.f0.dv3[21176] = -1.0;
  memset(&SD->u1.f0.dv3[21177], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21193] = -1.0;
  memset(&SD->u1.f0.dv3[21194], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[21308] = -1.0;
  memset(&SD->u1.f0.dv3[21309], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21325] = -1.0;
  memset(&SD->u1.f0.dv3[21326], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[21440] = -1.0;
  memset(&SD->u1.f0.dv3[21441], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21457] = -1.0;
  memset(&SD->u1.f0.dv3[21458], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[21572] = -1.0;
  memset(&SD->u1.f0.dv3[21573], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21589] = -1.0;
  memset(&SD->u1.f0.dv3[21590], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[21704] = -1.0;
  memset(&SD->u1.f0.dv3[21705], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21721] = -1.0;
  memset(&SD->u1.f0.dv3[21722], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[21836] = -1.0;
  memset(&SD->u1.f0.dv3[21837], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21853] = -1.0;
  memset(&SD->u1.f0.dv3[21854], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[21968] = -1.0;
  memset(&SD->u1.f0.dv3[21969], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21985] = -1.0;
  memset(&SD->u1.f0.dv3[21986], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[22100] = -1.0;
  memset(&SD->u1.f0.dv3[22101], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22117] = -1.0;
  memset(&SD->u1.f0.dv3[22118], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[22232] = -1.0;
  memset(&SD->u1.f0.dv3[22233], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22249] = -1.0;
  memset(&SD->u1.f0.dv3[22250], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[22364] = -1.0;
  memset(&SD->u1.f0.dv3[22365], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22381] = -1.0;
  memset(&SD->u1.f0.dv3[22382], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[22496] = -1.0;
  memset(&SD->u1.f0.dv3[22497], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22513] = -1.0;
  memset(&SD->u1.f0.dv3[22514], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[22628] = -1.0;
  memset(&SD->u1.f0.dv3[22629], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22645] = -1.0;
  memset(&SD->u1.f0.dv3[22646], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[22760] = -1.0;
  memset(&SD->u1.f0.dv3[22761], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22777] = -1.0;
  memset(&SD->u1.f0.dv3[22778], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[22892] = -1.0;
  memset(&SD->u1.f0.dv3[22893], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22909] = -1.0;
  memset(&SD->u1.f0.dv3[22910], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[23024] = -1.0;
  memset(&SD->u1.f0.dv3[23025], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[23041] = -1.0;
  memset(&SD->u1.f0.dv3[23042], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[23156] = -1.0;
  memset(&SD->u1.f0.dv3[23157], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[23173] = -1.0;
  memset(&SD->u1.f0.dv3[23174], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv3[23288] = -1.0;
  memset(&SD->u1.f0.dv3[23289], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[23305] = -1.0;
  memset(&SD->u1.f0.dv3[23306], 0, 2358U * sizeof(real_T));
  SD->u1.f0.dv3[25664] = -1.0;
  SD->u1.f0.dv3[25665] = 0.0;
  SD->u1.f0.dv3[25666] = -1.0;
  memset(&SD->u1.f0.dv3[25667], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv3[25796] = -1.0;
  SD->u1.f0.dv3[25797] = 0.0;
  SD->u1.f0.dv3[25798] = -1.0;
  memset(&SD->u1.f0.dv3[25799], 0, 393U * sizeof(real_T));
  SD->u1.f0.dv3[26192] = -1.0;
  SD->u1.f0.dv3[26193] = 0.0;
  SD->u1.f0.dv3[26194] = -1.0;
  memset(&SD->u1.f0.dv3[26195], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv3[26324] = -1.0;
  SD->u1.f0.dv3[26325] = 0.0;
  SD->u1.f0.dv3[26326] = -1.0;
  memset(&SD->u1.f0.dv3[26327], 0, 786U * sizeof(real_T));
  SD->u1.f0.dv3[27113] = t53;
  SD->u1.f0.dv3[27114] = 0.0;
  SD->u1.f0.dv3[27115] = t53;
  memset(&SD->u1.f0.dv3[27116], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv3[27245] = t56;
  SD->u1.f0.dv3[27246] = 0.0;
  SD->u1.f0.dv3[27247] = t56;
  memset(&SD->u1.f0.dv3[27248], 0, 520U * sizeof(real_T));
  SD->u1.f0.dv3[27768] = t54;
  SD->u1.f0.dv3[27769] = 0.0;
  SD->u1.f0.dv3[27770] = t54;
  memset(&SD->u1.f0.dv3[27771], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv3[27900] = t57;
  SD->u1.f0.dv3[27901] = 0.0;
  SD->u1.f0.dv3[27902] = t57;
  memset(&SD->u1.f0.dv3[27903], 0, 520U * sizeof(real_T));
  SD->u1.f0.dv3[28423] = t55;
  SD->u1.f0.dv3[28424] = 0.0;
  SD->u1.f0.dv3[28425] = t55;
  memset(&SD->u1.f0.dv3[28426], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv3[28555] = t58;
  SD->u1.f0.dv3[28556] = 0.0;
  SD->u1.f0.dv3[28557] = t58;
  memset(&SD->u1.f0.dv3[28558], 0, 389U * sizeof(real_T));
  SD->u1.f0.dv3[28947] = -1.0;
  memset(&SD->u1.f0.dv3[28948], 0, 131U * sizeof(real_T));
  SD->u1.f0.dv3[29079] = -1.0;
  memset(&SD->u1.f0.dv3[29080], 0, 526U * sizeof(real_T));
  for (i0 = 0; i0 < 226; i0++) {
    memcpy(&Aiq[i0 * 131], &SD->u1.f0.dv3[i0 * 131], 131U * sizeof(real_T));
  }

  t59 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t59);
  t2 = muDoubleScalarAbs(t3);
  t5 = muDoubleScalarAbs(t4);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t67 = 1.0 / t2;
  t68 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t68);
  t2 = muDoubleScalarAbs(t6);
  t5 = muDoubleScalarAbs(t7);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t76 = 1.0 / t2;
  t77 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t77);
  t2 = muDoubleScalarAbs(t9);
  t5 = muDoubleScalarAbs(t10);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t85 = 1.0 / t2;
  t86 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t86);
  t2 = muDoubleScalarAbs(t12);
  t5 = muDoubleScalarAbs(t13);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t94 = 1.0 / t2;
  t95 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t95);
  t2 = muDoubleScalarAbs(t15);
  t5 = muDoubleScalarAbs(t16);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t103 = 1.0 / t2;
  t104 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t104);
  t2 = muDoubleScalarAbs(t18);
  t5 = muDoubleScalarAbs(t19);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t112 = 1.0 / t2;
  t113 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t113);
  t2 = muDoubleScalarAbs(t21);
  t5 = muDoubleScalarAbs(t22);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t121 = 1.0 / t2;
  t122 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t122);
  t2 = muDoubleScalarAbs(t24);
  t5 = muDoubleScalarAbs(t25);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t130 = 1.0 / t2;
  t131 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t131);
  t2 = muDoubleScalarAbs(t27);
  t5 = muDoubleScalarAbs(t28);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t139 = 1.0 / t2;
  t140 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t140);
  t2 = muDoubleScalarAbs(t30);
  t5 = muDoubleScalarAbs(t31);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t148 = 1.0 / t2;
  t149 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t149);
  t2 = muDoubleScalarAbs(t33);
  t5 = muDoubleScalarAbs(t34);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t157 = 1.0 / t2;
  t158 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t158);
  t2 = muDoubleScalarAbs(t36);
  t5 = muDoubleScalarAbs(t37);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t50 = 1.0 / t2;
  t167 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t167);
  t2 = muDoubleScalarAbs(t39);
  t5 = muDoubleScalarAbs(t40);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t44 = 1.0 / t2;
  t47 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t47);
  t2 = muDoubleScalarAbs(t42);
  t5 = muDoubleScalarAbs(t43);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t38 = 1.0 / t2;
  t41 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t41);
  t2 = muDoubleScalarAbs(t45);
  t5 = muDoubleScalarAbs(t46);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t32 = 1.0 / t2;
  t35 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t35);
  t2 = muDoubleScalarAbs(t48);
  t5 = muDoubleScalarAbs(t49);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t26 = 1.0 / t2;
  t29 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t29);
  t2 = muDoubleScalarAbs(t51);
  t5 = muDoubleScalarAbs(t52);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t11 = 1.0 / t2;
  t14 = Cpx1 + in12[0];
  t17 = -Cpx1 + in12[0];
  t20 = Cpy1 + in13[0];
  t23 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t2 = muDoubleScalarAbs(t54);
  t5 = muDoubleScalarAbs(t55);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t56);
  t2 = muDoubleScalarAbs(t57);
  t5 = muDoubleScalarAbs(t58);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t2 = 1.0 / t2;
  biq[0] = in14[0];
  biq[1] = in14[0];
  biq[2] = in14[0];
  biq[3] = in14[0];
  biq[4] = in14[0];
  biq[5] = in14[0];
  biq[6] = in14[0];
  biq[7] = in14[0];
  biq[8] = in14[0];
  biq[9] = in14[0];
  biq[10] = in14[0];
  biq[11] = in14[0];
  biq[12] = in14[0];
  biq[13] = in14[0];
  biq[14] = in14[0];
  biq[15] = in14[0];
  biq[16] = in14[0];
  biq[17] = in14[1];
  biq[18] = in14[1];
  biq[19] = in14[1];
  biq[20] = in14[1];
  biq[21] = in14[1];
  biq[22] = in14[1];
  biq[23] = in14[1];
  biq[24] = in14[1];
  biq[25] = in14[1];
  biq[26] = in14[1];
  biq[27] = in14[1];
  biq[28] = in14[1];
  biq[29] = in14[1];
  biq[30] = in14[1];
  biq[31] = in14[1];
  biq[32] = in14[1];
  biq[33] = in14[1];
  biq[34] = in14[0];
  biq[35] = in14[0];
  biq[36] = in14[0];
  biq[37] = in14[0];
  biq[38] = in14[0];
  biq[39] = in14[0];
  biq[40] = in14[0];
  biq[41] = in14[0];
  biq[42] = in14[0];
  biq[43] = in14[0];
  biq[44] = in14[0];
  biq[45] = in14[0];
  biq[46] = in14[0];
  biq[47] = in14[0];
  biq[48] = in14[0];
  biq[49] = in14[0];
  biq[50] = in14[0];
  biq[51] = in14[1];
  biq[52] = in14[1];
  biq[53] = in14[1];
  biq[54] = in14[1];
  biq[55] = in14[1];
  biq[56] = in14[1];
  biq[57] = in14[1];
  biq[58] = in14[1];
  biq[59] = in14[1];
  biq[60] = in14[1];
  biq[61] = in14[1];
  biq[62] = in14[1];
  biq[63] = in14[1];
  biq[64] = in14[1];
  biq[65] = in14[1];
  biq[66] = in14[1];
  biq[67] = in14[1];
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t67) + t4 * (in7[2] - in8->data
              [0] * t4 * t67)) - t59 * (in7[0] + in8->data[0] * t59 * t67);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t76) + t7 * (in7[2] - in8->data
              [2] * t7 * t76)) - t68 * (in7[0] + in8->data[2] * t68 * t76);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t85) + t10 * (in7[2] - in8->
              data[4] * t10 * t85)) - t77 * (in7[0] + in8->data[4] * t77 * t85);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t94) + t13 * (in7[2] -
              in8->data[6] * t13 * t94)) - t86 * (in7[0] + in8->data[6] * t86 *
    t94);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t103) + t16 * (in7[2] -
              in8->data[8] * t16 * t103)) - t95 * (in7[0] + in8->data[8] * t95 *
    t103);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t112) + t19 * (in7[2] -
              in8->data[10] * t19 * t112)) - t104 * (in7[0] + in8->data[10] *
    t104 * t112);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t121) + t22 * (in7[2] -
              in8->data[12] * t22 * t121)) - t113 * (in7[0] + in8->data[12] *
    t113 * t121);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t130) + t25 * (in7[2] -
              in8->data[14] * t25 * t130)) - t122 * (in7[0] + in8->data[14] *
    t122 * t130);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t139) + t28 * (in7[2] -
              in8->data[16] * t28 * t139)) - t131 * (in7[0] + in8->data[16] *
    t131 * t139);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t148) + t31 * (in7[2] -
              in8->data[18] * t31 * t148)) - t140 * (in7[0] + in8->data[18] *
    t140 * t148);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t157) + t34 * (in7[2] -
              in8->data[20] * t34 * t157)) - t149 * (in7[0] + in8->data[20] *
    t149 * t157);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t50) + t37 * (in7[2] -
              in8->data[22] * t37 * t50)) - t158 * (in7[0] + in8->data[22] *
    t158 * t50);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t44) + t40 * (in7[2] -
              in8->data[24] * t40 * t44)) - t167 * (in7[0] + in8->data[24] *
    t167 * t44);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t38) + t43 * (in7[2] -
              in8->data[26] * t43 * t38)) - t47 * (in7[0] + in8->data[26] * t47 *
    t38);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t32) + t46 * (in7[2] -
              in8->data[28] * t46 * t32)) - t41 * (in7[0] + in8->data[28] * t41 *
    t32);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t26) + t49 * (in7[2] -
              in8->data[30] * t49 * t26)) - t35 * (in7[0] + in8->data[30] * t35 *
    t26);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t11) + t52 * (in7[2] -
              in8->data[32] * t52 * t11)) - t29 * (in7[0] + in8->data[32] * t29 *
    t11);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t67) + t4 * (in7[2] - in9->
    data[0] * t4 * t67)) - t59 * (in7[0] + in9->data[0] * t59 * t67);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t76) + t7 * (in7[2] - in9->
    data[2] * t7 * t76)) - t68 * (in7[0] + in9->data[2] * t68 * t76);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t85) + t10 * (in7[2] -
    in9->data[4] * t10 * t85)) - t77 * (in7[0] + in9->data[4] * t77 * t85);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t94) + t13 * (in7[2] -
    in9->data[6] * t13 * t94)) - t86 * (in7[0] + in9->data[6] * t86 * t94);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t103) + t16 * (in7[2] -
    in9->data[8] * t16 * t103)) - t95 * (in7[0] + in9->data[8] * t95 * t103);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t112) + t19 * (in7[2] -
    in9->data[10] * t19 * t112)) - t104 * (in7[0] + in9->data[10] * t104 * t112);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t121) + t22 * (in7[2] -
    in9->data[12] * t22 * t121)) - t113 * (in7[0] + in9->data[12] * t113 * t121);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t130) + t25 * (in7[2] -
    in9->data[14] * t25 * t130)) - t122 * (in7[0] + in9->data[14] * t122 * t130);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t139) + t28 * (in7[2] -
    in9->data[16] * t28 * t139)) - t131 * (in7[0] + in9->data[16] * t131 * t139);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t148) + t31 * (in7[2] -
    in9->data[18] * t31 * t148)) - t140 * (in7[0] + in9->data[18] * t140 * t148);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t157) + t34 * (in7[2] -
    in9->data[20] * t34 * t157)) - t149 * (in7[0] + in9->data[20] * t149 * t157);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t50) + t37 * (in7[2] -
    in9->data[22] * t37 * t50)) - t158 * (in7[0] + in9->data[22] * t158 * t50);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t44) + t40 * (in7[2] -
    in9->data[24] * t40 * t44)) - t167 * (in7[0] + in9->data[24] * t167 * t44);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t38) + t43 * (in7[2] -
    in9->data[26] * t43 * t38)) - t47 * (in7[0] + in9->data[26] * t47 * t38);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t32) + t46 * (in7[2] -
    in9->data[28] * t46 * t32)) - t41 * (in7[0] + in9->data[28] * t41 * t32);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t26) + t49 * (in7[2] -
    in9->data[30] * t49 * t26)) - t35 * (in7[0] + in9->data[30] * t35 * t26);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t11) + t52 * (in7[2] -
    in9->data[32] * t52 * t11)) - t29 * (in7[0] + in9->data[32] * t29 * t11);
  biq[119] = t14;
  biq[120] = t14;
  biq[121] = t17;
  biq[122] = t17;
  biq[123] = t20;
  biq[124] = t20;
  biq[125] = t23;
  biq[126] = t23;
  biq[127] = (t53 * (in15[0] - in9->data[1] * t53 * t8) + t54 * (in15[1] -
    in9->data[1] * t54 * t8)) + t55 * (in15[2] - in9->data[1] * t55 * t8);
  biq[128] = (t56 * (in15[3] - in9->data[1] * t56 * t2) + t57 * (in15[4] -
    in9->data[1] * t57 * t2)) + t58 * (in15[5] - in9->data[1] * t58 * t2);
  biq[129] = (t53 * (in15[0] - in8->data[1] * t53 * t8) + t54 * (in15[1] -
    in8->data[1] * t54 * t8)) + t55 * (in15[2] - in8->data[1] * t55 * t8);
  biq[130] = (t56 * (in15[3] - in8->data[1] * t56 * t2) + t57 * (in15[4] -
    in8->data[1] * t57 * t2)) + t58 * (in15[5] - in8->data[1] * t58 * t2);
}

/* End of code generation (Iq_LeftStart23DFootV97.cpp) */
