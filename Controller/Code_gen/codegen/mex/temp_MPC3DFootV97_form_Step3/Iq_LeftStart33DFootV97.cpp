/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart33DFootV97.cpp
 *
 * Code generation for function 'Iq_LeftStart33DFootV97'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV97_form_Step3.h"
#include "Iq_LeftStart33DFootV97.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV97.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart33DFootV97(c_temp_MPC3DFootV97_form_Step3S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], real_T Aiq[28250], real_T biq[125])
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
  real_T a;
  real_T t64;
  real_T t65;
  real_T t73;
  real_T t74;
  real_T t82;
  real_T t83;
  real_T t91;
  real_T t92;
  real_T t100;
  real_T t101;
  real_T t109;
  real_T t110;
  real_T t118;
  real_T t119;
  real_T t127;
  real_T t128;
  real_T t136;
  real_T t137;

  /* IQ_LEFTSTART33DFOOTV97 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART33DFOOTV97(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     29-Jun-2023 16:27:58 */
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
  t53 = in15[0] - in15[19];
  t54 = in15[1] - in15[24];
  t55 = in15[2] - in15[29];
  SD->u1.f0.dv3[0] = -1.0;
  memset(&SD->u1.f0.dv3[1], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[34] = 1.0;
  memset(&SD->u1.f0.dv3[35], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[68] = t2;
  memset(&SD->u1.f0.dv3[69], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[102] = t2;
  memset(&SD->u1.f0.dv3[103], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[251] = -1.0;
  memset(&SD->u1.f0.dv3[252], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[285] = 1.0;
  memset(&SD->u1.f0.dv3[286], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[319] = t5;
  memset(&SD->u1.f0.dv3[320], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[353] = t5;
  memset(&SD->u1.f0.dv3[354], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[502] = -1.0;
  memset(&SD->u1.f0.dv3[503], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[536] = 1.0;
  memset(&SD->u1.f0.dv3[537], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[570] = t8;
  memset(&SD->u1.f0.dv3[571], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[604] = t8;
  memset(&SD->u1.f0.dv3[605], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[753] = -1.0;
  memset(&SD->u1.f0.dv3[754], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[787] = 1.0;
  memset(&SD->u1.f0.dv3[788], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[821] = t11;
  memset(&SD->u1.f0.dv3[822], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[855] = t11;
  memset(&SD->u1.f0.dv3[856], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[1004] = -1.0;
  memset(&SD->u1.f0.dv3[1005], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1038] = 1.0;
  memset(&SD->u1.f0.dv3[1039], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1072] = t14;
  memset(&SD->u1.f0.dv3[1073], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1106] = t14;
  memset(&SD->u1.f0.dv3[1107], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[1255] = -1.0;
  memset(&SD->u1.f0.dv3[1256], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1289] = 1.0;
  memset(&SD->u1.f0.dv3[1290], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1323] = t17;
  memset(&SD->u1.f0.dv3[1324], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1357] = t17;
  memset(&SD->u1.f0.dv3[1358], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[1506] = -1.0;
  memset(&SD->u1.f0.dv3[1507], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1540] = 1.0;
  memset(&SD->u1.f0.dv3[1541], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1574] = t20;
  memset(&SD->u1.f0.dv3[1575], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1608] = t20;
  memset(&SD->u1.f0.dv3[1609], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[1757] = -1.0;
  memset(&SD->u1.f0.dv3[1758], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1791] = 1.0;
  memset(&SD->u1.f0.dv3[1792], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1825] = t23;
  memset(&SD->u1.f0.dv3[1826], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[1859] = t23;
  memset(&SD->u1.f0.dv3[1860], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[2008] = -1.0;
  memset(&SD->u1.f0.dv3[2009], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2042] = 1.0;
  memset(&SD->u1.f0.dv3[2043], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2076] = t26;
  memset(&SD->u1.f0.dv3[2077], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2110] = t26;
  memset(&SD->u1.f0.dv3[2111], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[2259] = -1.0;
  memset(&SD->u1.f0.dv3[2260], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2293] = 1.0;
  memset(&SD->u1.f0.dv3[2294], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2327] = t29;
  memset(&SD->u1.f0.dv3[2328], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2361] = t29;
  memset(&SD->u1.f0.dv3[2362], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[2510] = -1.0;
  memset(&SD->u1.f0.dv3[2511], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2544] = 1.0;
  memset(&SD->u1.f0.dv3[2545], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2578] = t32;
  memset(&SD->u1.f0.dv3[2579], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2612] = t32;
  memset(&SD->u1.f0.dv3[2613], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[2761] = -1.0;
  memset(&SD->u1.f0.dv3[2762], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2795] = 1.0;
  memset(&SD->u1.f0.dv3[2796], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2829] = t35;
  memset(&SD->u1.f0.dv3[2830], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[2863] = t35;
  memset(&SD->u1.f0.dv3[2864], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[3012] = -1.0;
  memset(&SD->u1.f0.dv3[3013], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3046] = 1.0;
  memset(&SD->u1.f0.dv3[3047], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3080] = t38;
  memset(&SD->u1.f0.dv3[3081], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3114] = t38;
  memset(&SD->u1.f0.dv3[3115], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[3263] = -1.0;
  memset(&SD->u1.f0.dv3[3264], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3297] = 1.0;
  memset(&SD->u1.f0.dv3[3298], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3331] = t41;
  memset(&SD->u1.f0.dv3[3332], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3365] = t41;
  memset(&SD->u1.f0.dv3[3366], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[3514] = -1.0;
  memset(&SD->u1.f0.dv3[3515], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3548] = 1.0;
  memset(&SD->u1.f0.dv3[3549], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3582] = t44;
  memset(&SD->u1.f0.dv3[3583], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3616] = t44;
  memset(&SD->u1.f0.dv3[3617], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[3765] = -1.0;
  memset(&SD->u1.f0.dv3[3766], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3799] = 1.0;
  memset(&SD->u1.f0.dv3[3800], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3833] = t47;
  memset(&SD->u1.f0.dv3[3834], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[3867] = t47;
  memset(&SD->u1.f0.dv3[3868], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[4016] = -1.0;
  memset(&SD->u1.f0.dv3[4017], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4050] = 1.0;
  memset(&SD->u1.f0.dv3[4051], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4084] = t50;
  memset(&SD->u1.f0.dv3[4085], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4118] = t50;
  memset(&SD->u1.f0.dv3[4119], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv3[4267] = -1.0;
  memset(&SD->u1.f0.dv3[4268], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4301] = 1.0;
  memset(&SD->u1.f0.dv3[4302], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[4318] = t3;
  memset(&SD->u1.f0.dv3[4319], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4352] = t3;
  memset(&SD->u1.f0.dv3[4353], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[4518] = -1.0;
  memset(&SD->u1.f0.dv3[4519], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4552] = 1.0;
  memset(&SD->u1.f0.dv3[4553], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[4569] = t6;
  memset(&SD->u1.f0.dv3[4570], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4603] = t6;
  memset(&SD->u1.f0.dv3[4604], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[4769] = -1.0;
  memset(&SD->u1.f0.dv3[4770], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4803] = 1.0;
  memset(&SD->u1.f0.dv3[4804], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[4820] = t9;
  memset(&SD->u1.f0.dv3[4821], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[4854] = t9;
  memset(&SD->u1.f0.dv3[4855], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[5020] = -1.0;
  memset(&SD->u1.f0.dv3[5021], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5054] = 1.0;
  memset(&SD->u1.f0.dv3[5055], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5071] = t12;
  memset(&SD->u1.f0.dv3[5072], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5105] = t12;
  memset(&SD->u1.f0.dv3[5106], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[5271] = -1.0;
  memset(&SD->u1.f0.dv3[5272], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5305] = 1.0;
  memset(&SD->u1.f0.dv3[5306], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5322] = t15;
  memset(&SD->u1.f0.dv3[5323], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5356] = t15;
  memset(&SD->u1.f0.dv3[5357], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[5522] = -1.0;
  memset(&SD->u1.f0.dv3[5523], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5556] = 1.0;
  memset(&SD->u1.f0.dv3[5557], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5573] = t18;
  memset(&SD->u1.f0.dv3[5574], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5607] = t18;
  memset(&SD->u1.f0.dv3[5608], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[5773] = -1.0;
  memset(&SD->u1.f0.dv3[5774], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5807] = 1.0;
  memset(&SD->u1.f0.dv3[5808], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[5824] = t21;
  memset(&SD->u1.f0.dv3[5825], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[5858] = t21;
  memset(&SD->u1.f0.dv3[5859], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[6024] = -1.0;
  memset(&SD->u1.f0.dv3[6025], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6058] = 1.0;
  memset(&SD->u1.f0.dv3[6059], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6075] = t24;
  memset(&SD->u1.f0.dv3[6076], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6109] = t24;
  memset(&SD->u1.f0.dv3[6110], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[6275] = -1.0;
  memset(&SD->u1.f0.dv3[6276], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6309] = 1.0;
  memset(&SD->u1.f0.dv3[6310], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6326] = t27;
  memset(&SD->u1.f0.dv3[6327], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6360] = t27;
  memset(&SD->u1.f0.dv3[6361], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[6526] = -1.0;
  memset(&SD->u1.f0.dv3[6527], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6560] = 1.0;
  memset(&SD->u1.f0.dv3[6561], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6577] = t30;
  memset(&SD->u1.f0.dv3[6578], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6611] = t30;
  memset(&SD->u1.f0.dv3[6612], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[6777] = -1.0;
  memset(&SD->u1.f0.dv3[6778], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6811] = 1.0;
  memset(&SD->u1.f0.dv3[6812], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[6828] = t33;
  memset(&SD->u1.f0.dv3[6829], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[6862] = t33;
  memset(&SD->u1.f0.dv3[6863], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[7028] = -1.0;
  memset(&SD->u1.f0.dv3[7029], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7062] = 1.0;
  memset(&SD->u1.f0.dv3[7063], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7079] = t36;
  memset(&SD->u1.f0.dv3[7080], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7113] = t36;
  memset(&SD->u1.f0.dv3[7114], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[7279] = -1.0;
  memset(&SD->u1.f0.dv3[7280], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7313] = 1.0;
  memset(&SD->u1.f0.dv3[7314], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7330] = t39;
  memset(&SD->u1.f0.dv3[7331], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7364] = t39;
  memset(&SD->u1.f0.dv3[7365], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[7530] = -1.0;
  memset(&SD->u1.f0.dv3[7531], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7564] = 1.0;
  memset(&SD->u1.f0.dv3[7565], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7581] = t42;
  memset(&SD->u1.f0.dv3[7582], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7615] = t42;
  memset(&SD->u1.f0.dv3[7616], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[7781] = -1.0;
  memset(&SD->u1.f0.dv3[7782], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7815] = 1.0;
  memset(&SD->u1.f0.dv3[7816], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[7832] = t45;
  memset(&SD->u1.f0.dv3[7833], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[7866] = t45;
  memset(&SD->u1.f0.dv3[7867], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[8032] = -1.0;
  memset(&SD->u1.f0.dv3[8033], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8066] = 1.0;
  memset(&SD->u1.f0.dv3[8067], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[8083] = t48;
  memset(&SD->u1.f0.dv3[8084], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8117] = t48;
  memset(&SD->u1.f0.dv3[8118], 0, 165U * sizeof(real_T));
  SD->u1.f0.dv3[8283] = -1.0;
  memset(&SD->u1.f0.dv3[8284], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8317] = 1.0;
  memset(&SD->u1.f0.dv3[8318], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[8334] = t51;
  memset(&SD->u1.f0.dv3[8335], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8368] = t51;
  memset(&SD->u1.f0.dv3[8369], 0, 199U * sizeof(real_T));
  SD->u1.f0.dv3[8568] = t4;
  memset(&SD->u1.f0.dv3[8569], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8602] = t4;
  memset(&SD->u1.f0.dv3[8603], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[8819] = t7;
  memset(&SD->u1.f0.dv3[8820], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[8853] = t7;
  memset(&SD->u1.f0.dv3[8854], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[9070] = t10;
  memset(&SD->u1.f0.dv3[9071], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9104] = t10;
  memset(&SD->u1.f0.dv3[9105], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[9321] = t13;
  memset(&SD->u1.f0.dv3[9322], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9355] = t13;
  memset(&SD->u1.f0.dv3[9356], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[9572] = t16;
  memset(&SD->u1.f0.dv3[9573], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9606] = t16;
  memset(&SD->u1.f0.dv3[9607], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[9823] = t19;
  memset(&SD->u1.f0.dv3[9824], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[9857] = t19;
  memset(&SD->u1.f0.dv3[9858], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[10074] = t22;
  memset(&SD->u1.f0.dv3[10075], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10108] = t22;
  memset(&SD->u1.f0.dv3[10109], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[10325] = t25;
  memset(&SD->u1.f0.dv3[10326], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10359] = t25;
  memset(&SD->u1.f0.dv3[10360], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[10576] = t28;
  memset(&SD->u1.f0.dv3[10577], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10610] = t28;
  memset(&SD->u1.f0.dv3[10611], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[10827] = t31;
  memset(&SD->u1.f0.dv3[10828], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[10861] = t31;
  memset(&SD->u1.f0.dv3[10862], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[11078] = t34;
  memset(&SD->u1.f0.dv3[11079], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11112] = t34;
  memset(&SD->u1.f0.dv3[11113], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[11329] = t37;
  memset(&SD->u1.f0.dv3[11330], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11363] = t37;
  memset(&SD->u1.f0.dv3[11364], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[11580] = t40;
  memset(&SD->u1.f0.dv3[11581], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11614] = t40;
  memset(&SD->u1.f0.dv3[11615], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[11831] = t43;
  memset(&SD->u1.f0.dv3[11832], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[11865] = t43;
  memset(&SD->u1.f0.dv3[11866], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[12082] = t46;
  memset(&SD->u1.f0.dv3[12083], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12116] = t46;
  memset(&SD->u1.f0.dv3[12117], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[12333] = t49;
  memset(&SD->u1.f0.dv3[12334], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12367] = t49;
  memset(&SD->u1.f0.dv3[12368], 0, 216U * sizeof(real_T));
  SD->u1.f0.dv3[12584] = t52;
  memset(&SD->u1.f0.dv3[12585], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12618] = t52;
  memset(&SD->u1.f0.dv3[12619], 0, 131U * sizeof(real_T));
  SD->u1.f0.dv3[12750] = 1.0;
  memset(&SD->u1.f0.dv3[12751], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12784] = -1.0;
  memset(&SD->u1.f0.dv3[12785], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv3[12869] = 1.0;
  SD->u1.f0.dv3[12870] = -1.0;
  SD->u1.f0.dv3[12871] = 0.0;
  SD->u1.f0.dv3[12872] = 0.0;
  SD->u1.f0.dv3[12873] = 0.0;
  SD->u1.f0.dv3[12874] = 0.0;
  SD->u1.f0.dv3[12875] = 0.0;
  SD->u1.f0.dv3[12876] = 1.0;
  memset(&SD->u1.f0.dv3[12877], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[12910] = -1.0;
  memset(&SD->u1.f0.dv3[12911], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13002] = 1.0;
  memset(&SD->u1.f0.dv3[13003], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13036] = -1.0;
  memset(&SD->u1.f0.dv3[13037], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13128] = 1.0;
  memset(&SD->u1.f0.dv3[13129], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13162] = -1.0;
  memset(&SD->u1.f0.dv3[13163], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13254] = 1.0;
  memset(&SD->u1.f0.dv3[13255], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13288] = -1.0;
  memset(&SD->u1.f0.dv3[13289], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13380] = 1.0;
  memset(&SD->u1.f0.dv3[13381], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13414] = -1.0;
  memset(&SD->u1.f0.dv3[13415], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13506] = 1.0;
  memset(&SD->u1.f0.dv3[13507], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13540] = -1.0;
  memset(&SD->u1.f0.dv3[13541], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13632] = 1.0;
  memset(&SD->u1.f0.dv3[13633], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13666] = -1.0;
  memset(&SD->u1.f0.dv3[13667], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13758] = 1.0;
  memset(&SD->u1.f0.dv3[13759], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13792] = -1.0;
  memset(&SD->u1.f0.dv3[13793], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[13884] = 1.0;
  memset(&SD->u1.f0.dv3[13885], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[13918] = -1.0;
  memset(&SD->u1.f0.dv3[13919], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14010] = 1.0;
  memset(&SD->u1.f0.dv3[14011], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14044] = -1.0;
  memset(&SD->u1.f0.dv3[14045], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14136] = 1.0;
  memset(&SD->u1.f0.dv3[14137], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14170] = -1.0;
  memset(&SD->u1.f0.dv3[14171], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14262] = 1.0;
  memset(&SD->u1.f0.dv3[14263], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14296] = -1.0;
  memset(&SD->u1.f0.dv3[14297], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14388] = 1.0;
  memset(&SD->u1.f0.dv3[14389], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14422] = -1.0;
  memset(&SD->u1.f0.dv3[14423], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14514] = 1.0;
  memset(&SD->u1.f0.dv3[14515], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14548] = -1.0;
  memset(&SD->u1.f0.dv3[14549], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14640] = 1.0;
  memset(&SD->u1.f0.dv3[14641], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14674] = -1.0;
  memset(&SD->u1.f0.dv3[14675], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14766] = 1.0;
  memset(&SD->u1.f0.dv3[14767], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14800] = -1.0;
  memset(&SD->u1.f0.dv3[14801], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[14892] = 1.0;
  memset(&SD->u1.f0.dv3[14893], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[14926] = -1.0;
  memset(&SD->u1.f0.dv3[14927], 0, 69U * sizeof(real_T));
  SD->u1.f0.dv3[14996] = 1.0;
  SD->u1.f0.dv3[14997] = -1.0;
  memset(&SD->u1.f0.dv3[14998], 0, 20U * sizeof(real_T));
  SD->u1.f0.dv3[15018] = 1.0;
  memset(&SD->u1.f0.dv3[15019], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15052] = -1.0;
  memset(&SD->u1.f0.dv3[15053], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[15144] = 1.0;
  memset(&SD->u1.f0.dv3[15145], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15178] = -1.0;
  memset(&SD->u1.f0.dv3[15179], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[15270] = 1.0;
  memset(&SD->u1.f0.dv3[15271], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15304] = -1.0;
  memset(&SD->u1.f0.dv3[15305], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[15396] = 1.0;
  memset(&SD->u1.f0.dv3[15397], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15430] = -1.0;
  memset(&SD->u1.f0.dv3[15431], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[15522] = 1.0;
  memset(&SD->u1.f0.dv3[15523], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15556] = -1.0;
  memset(&SD->u1.f0.dv3[15557], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[15648] = 1.0;
  memset(&SD->u1.f0.dv3[15649], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15682] = -1.0;
  memset(&SD->u1.f0.dv3[15683], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[15774] = 1.0;
  memset(&SD->u1.f0.dv3[15775], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15808] = -1.0;
  memset(&SD->u1.f0.dv3[15809], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[15900] = 1.0;
  memset(&SD->u1.f0.dv3[15901], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[15934] = -1.0;
  memset(&SD->u1.f0.dv3[15935], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16026] = 1.0;
  memset(&SD->u1.f0.dv3[16027], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16060] = -1.0;
  memset(&SD->u1.f0.dv3[16061], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16152] = 1.0;
  memset(&SD->u1.f0.dv3[16153], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16186] = -1.0;
  memset(&SD->u1.f0.dv3[16187], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16278] = 1.0;
  memset(&SD->u1.f0.dv3[16279], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16312] = -1.0;
  memset(&SD->u1.f0.dv3[16313], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16404] = 1.0;
  memset(&SD->u1.f0.dv3[16405], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16438] = -1.0;
  memset(&SD->u1.f0.dv3[16439], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16530] = 1.0;
  memset(&SD->u1.f0.dv3[16531], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16564] = -1.0;
  memset(&SD->u1.f0.dv3[16565], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16656] = 1.0;
  memset(&SD->u1.f0.dv3[16657], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16690] = -1.0;
  memset(&SD->u1.f0.dv3[16691], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16782] = 1.0;
  memset(&SD->u1.f0.dv3[16783], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16816] = -1.0;
  memset(&SD->u1.f0.dv3[16817], 0, 91U * sizeof(real_T));
  SD->u1.f0.dv3[16908] = 1.0;
  memset(&SD->u1.f0.dv3[16909], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv3[16942] = -1.0;
  memset(&SD->u1.f0.dv3[16943], 0, 3267U * sizeof(real_T));
  SD->u1.f0.dv3[20210] = -1.0;
  memset(&SD->u1.f0.dv3[20211], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[20227] = -1.0;
  memset(&SD->u1.f0.dv3[20228], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[20336] = -1.0;
  memset(&SD->u1.f0.dv3[20337], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[20353] = -1.0;
  memset(&SD->u1.f0.dv3[20354], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[20462] = -1.0;
  memset(&SD->u1.f0.dv3[20463], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[20479] = -1.0;
  memset(&SD->u1.f0.dv3[20480], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[20588] = -1.0;
  memset(&SD->u1.f0.dv3[20589], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[20605] = -1.0;
  memset(&SD->u1.f0.dv3[20606], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[20714] = -1.0;
  memset(&SD->u1.f0.dv3[20715], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[20731] = -1.0;
  memset(&SD->u1.f0.dv3[20732], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[20840] = -1.0;
  memset(&SD->u1.f0.dv3[20841], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[20857] = -1.0;
  memset(&SD->u1.f0.dv3[20858], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[20966] = -1.0;
  memset(&SD->u1.f0.dv3[20967], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[20983] = -1.0;
  memset(&SD->u1.f0.dv3[20984], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21092] = -1.0;
  memset(&SD->u1.f0.dv3[21093], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21109] = -1.0;
  memset(&SD->u1.f0.dv3[21110], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21218] = -1.0;
  memset(&SD->u1.f0.dv3[21219], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21235] = -1.0;
  memset(&SD->u1.f0.dv3[21236], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21344] = -1.0;
  memset(&SD->u1.f0.dv3[21345], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21361] = -1.0;
  memset(&SD->u1.f0.dv3[21362], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21470] = -1.0;
  memset(&SD->u1.f0.dv3[21471], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21487] = -1.0;
  memset(&SD->u1.f0.dv3[21488], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21596] = -1.0;
  memset(&SD->u1.f0.dv3[21597], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21613] = -1.0;
  memset(&SD->u1.f0.dv3[21614], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21722] = -1.0;
  memset(&SD->u1.f0.dv3[21723], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21739] = -1.0;
  memset(&SD->u1.f0.dv3[21740], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21848] = -1.0;
  memset(&SD->u1.f0.dv3[21849], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21865] = -1.0;
  memset(&SD->u1.f0.dv3[21866], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[21974] = -1.0;
  memset(&SD->u1.f0.dv3[21975], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[21991] = -1.0;
  memset(&SD->u1.f0.dv3[21992], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[22100] = -1.0;
  memset(&SD->u1.f0.dv3[22101], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22117] = -1.0;
  memset(&SD->u1.f0.dv3[22118], 0, 108U * sizeof(real_T));
  SD->u1.f0.dv3[22226] = -1.0;
  memset(&SD->u1.f0.dv3[22227], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv3[22243] = -1.0;
  memset(&SD->u1.f0.dv3[22244], 0, 2250U * sizeof(real_T));
  SD->u1.f0.dv3[24494] = -1.0;
  SD->u1.f0.dv3[24495] = -1.0;
  memset(&SD->u1.f0.dv3[24496], 0, 500U * sizeof(real_T));
  SD->u1.f0.dv3[24996] = -1.0;
  SD->u1.f0.dv3[24997] = -1.0;
  memset(&SD->u1.f0.dv3[24998], 0, 1000U * sizeof(real_T));
  SD->u1.f0.dv3[25998] = t53;
  SD->u1.f0.dv3[25999] = t53;
  memset(&SD->u1.f0.dv3[26000], 0, 623U * sizeof(real_T));
  SD->u1.f0.dv3[26623] = t54;
  SD->u1.f0.dv3[26624] = t54;
  memset(&SD->u1.f0.dv3[26625], 0, 623U * sizeof(real_T));
  SD->u1.f0.dv3[27248] = t55;
  SD->u1.f0.dv3[27249] = t55;
  memset(&SD->u1.f0.dv3[27250], 0, 498U * sizeof(real_T));
  SD->u1.f0.dv3[27748] = -1.0;
  memset(&SD->u1.f0.dv3[27749], 0, 501U * sizeof(real_T));
  for (i0 = 0; i0 < 226; i0++) {
    memcpy(&Aiq[i0 * 125], &SD->u1.f0.dv3[i0 * 125], 125U * sizeof(real_T));
  }

  t56 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t56);
  t2 = muDoubleScalarAbs(t3);
  t5 = muDoubleScalarAbs(t4);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t64 = 1.0 / t2;
  t65 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t65);
  t2 = muDoubleScalarAbs(t6);
  t5 = muDoubleScalarAbs(t7);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t73 = 1.0 / t2;
  t74 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t74);
  t2 = muDoubleScalarAbs(t9);
  t5 = muDoubleScalarAbs(t10);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t82 = 1.0 / t2;
  t83 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t83);
  t2 = muDoubleScalarAbs(t12);
  t5 = muDoubleScalarAbs(t13);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t91 = 1.0 / t2;
  t92 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t92);
  t2 = muDoubleScalarAbs(t15);
  t5 = muDoubleScalarAbs(t16);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t100 = 1.0 / t2;
  t101 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t101);
  t2 = muDoubleScalarAbs(t18);
  t5 = muDoubleScalarAbs(t19);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t109 = 1.0 / t2;
  t110 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t110);
  t2 = muDoubleScalarAbs(t21);
  t5 = muDoubleScalarAbs(t22);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t118 = 1.0 / t2;
  t119 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t119);
  t2 = muDoubleScalarAbs(t24);
  t5 = muDoubleScalarAbs(t25);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t127 = 1.0 / t2;
  t128 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t128);
  t2 = muDoubleScalarAbs(t27);
  t5 = muDoubleScalarAbs(t28);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t136 = 1.0 / t2;
  t137 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t137);
  t2 = muDoubleScalarAbs(t30);
  t5 = muDoubleScalarAbs(t31);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t47 = 1.0 / t2;
  t50 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t50);
  t2 = muDoubleScalarAbs(t33);
  t5 = muDoubleScalarAbs(t34);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t41 = 1.0 / t2;
  t44 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t44);
  t2 = muDoubleScalarAbs(t36);
  t5 = muDoubleScalarAbs(t37);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t35 = 1.0 / t2;
  t38 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t38);
  t2 = muDoubleScalarAbs(t39);
  t5 = muDoubleScalarAbs(t40);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t29 = 1.0 / t2;
  t32 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t32);
  t2 = muDoubleScalarAbs(t42);
  t5 = muDoubleScalarAbs(t43);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t23 = 1.0 / t2;
  t26 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t26);
  t2 = muDoubleScalarAbs(t45);
  t5 = muDoubleScalarAbs(t46);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t17 = 1.0 / t2;
  t20 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t20);
  t2 = muDoubleScalarAbs(t48);
  t5 = muDoubleScalarAbs(t49);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t11 = 1.0 / t2;
  t14 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t14);
  t2 = muDoubleScalarAbs(t51);
  t5 = muDoubleScalarAbs(t52);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t53);
  t2 = muDoubleScalarAbs(t54);
  t5 = muDoubleScalarAbs(t55);
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
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t64) + t4 * (in7[2] - in8->data
              [0] * t4 * t64)) - t56 * (in7[0] + in8->data[0] * t56 * t64);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t73) + t7 * (in7[2] - in8->data
              [2] * t7 * t73)) - t65 * (in7[0] + in8->data[2] * t65 * t73);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t82) + t10 * (in7[2] - in8->
              data[4] * t10 * t82)) - t74 * (in7[0] + in8->data[4] * t74 * t82);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t91) + t13 * (in7[2] -
              in8->data[6] * t13 * t91)) - t83 * (in7[0] + in8->data[6] * t83 *
    t91);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t100) + t16 * (in7[2] -
              in8->data[8] * t16 * t100)) - t92 * (in7[0] + in8->data[8] * t92 *
    t100);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t109) + t19 * (in7[2] -
              in8->data[10] * t19 * t109)) - t101 * (in7[0] + in8->data[10] *
    t101 * t109);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t118) + t22 * (in7[2] -
              in8->data[12] * t22 * t118)) - t110 * (in7[0] + in8->data[12] *
    t110 * t118);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t127) + t25 * (in7[2] -
              in8->data[14] * t25 * t127)) - t119 * (in7[0] + in8->data[14] *
    t119 * t127);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t136) + t28 * (in7[2] -
              in8->data[16] * t28 * t136)) - t128 * (in7[0] + in8->data[16] *
    t128 * t136);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t47) + t31 * (in7[2] -
              in8->data[18] * t31 * t47)) - t137 * (in7[0] + in8->data[18] *
    t137 * t47);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t41) + t34 * (in7[2] -
              in8->data[20] * t34 * t41)) - t50 * (in7[0] + in8->data[20] * t50 *
    t41);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t35) + t37 * (in7[2] -
              in8->data[22] * t37 * t35)) - t44 * (in7[0] + in8->data[22] * t44 *
    t35);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t29) + t40 * (in7[2] -
              in8->data[24] * t40 * t29)) - t38 * (in7[0] + in8->data[24] * t38 *
    t29);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t23) + t43 * (in7[2] -
              in8->data[26] * t43 * t23)) - t32 * (in7[0] + in8->data[26] * t32 *
    t23);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t17) + t46 * (in7[2] -
              in8->data[28] * t46 * t17)) - t26 * (in7[0] + in8->data[28] * t26 *
    t17);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t11) + t49 * (in7[2] -
              in8->data[30] * t49 * t11)) - t20 * (in7[0] + in8->data[30] * t20 *
    t11);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t8) + t52 * (in7[2] -
              in8->data[32] * t52 * t8)) - t14 * (in7[0] + in8->data[32] * t14 *
    t8);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t64) + t4 * (in7[2] - in9->
    data[0] * t4 * t64)) - t56 * (in7[0] + in9->data[0] * t56 * t64);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t73) + t7 * (in7[2] - in9->
    data[2] * t7 * t73)) - t65 * (in7[0] + in9->data[2] * t65 * t73);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t82) + t10 * (in7[2] -
    in9->data[4] * t10 * t82)) - t74 * (in7[0] + in9->data[4] * t74 * t82);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t91) + t13 * (in7[2] -
    in9->data[6] * t13 * t91)) - t83 * (in7[0] + in9->data[6] * t83 * t91);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t100) + t16 * (in7[2] -
    in9->data[8] * t16 * t100)) - t92 * (in7[0] + in9->data[8] * t92 * t100);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t109) + t19 * (in7[2] -
    in9->data[10] * t19 * t109)) - t101 * (in7[0] + in9->data[10] * t101 * t109);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t118) + t22 * (in7[2] -
    in9->data[12] * t22 * t118)) - t110 * (in7[0] + in9->data[12] * t110 * t118);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t127) + t25 * (in7[2] -
    in9->data[14] * t25 * t127)) - t119 * (in7[0] + in9->data[14] * t119 * t127);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t136) + t28 * (in7[2] -
    in9->data[16] * t28 * t136)) - t128 * (in7[0] + in9->data[16] * t128 * t136);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t47) + t31 * (in7[2] -
    in9->data[18] * t31 * t47)) - t137 * (in7[0] + in9->data[18] * t137 * t47);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t41) + t34 * (in7[2] -
    in9->data[20] * t34 * t41)) - t50 * (in7[0] + in9->data[20] * t50 * t41);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t35) + t37 * (in7[2] -
    in9->data[22] * t37 * t35)) - t44 * (in7[0] + in9->data[22] * t44 * t35);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t29) + t40 * (in7[2] -
    in9->data[24] * t40 * t29)) - t38 * (in7[0] + in9->data[24] * t38 * t29);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t23) + t43 * (in7[2] -
    in9->data[26] * t43 * t23)) - t32 * (in7[0] + in9->data[26] * t32 * t23);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t17) + t46 * (in7[2] -
    in9->data[28] * t46 * t17)) - t26 * (in7[0] + in9->data[28] * t26 * t17);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t11) + t49 * (in7[2] -
    in9->data[30] * t49 * t11)) - t20 * (in7[0] + in9->data[30] * t20 * t11);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t8) + t52 * (in7[2] -
    in9->data[32] * t52 * t8)) - t14 * (in7[0] + in9->data[32] * t14 * t8);
  biq[119] = Cpx1 + in12[0];
  biq[120] = -Cpx1 + in12[0];
  biq[121] = Cpy1 + in13[0];
  biq[122] = -Cpy1 + in13[0];
  biq[123] = (t53 * (in15[0] - in9->data[1] * t53 * t2) + t54 * (in15[1] -
    in9->data[1] * t54 * t2)) + t55 * (in15[2] - in9->data[1] * t55 * t2);
  biq[124] = (t53 * (in15[0] - in8->data[1] * t53 * t2) + t54 * (in15[1] -
    in8->data[1] * t54 * t2)) + t55 * (in15[2] - in8->data[1] * t55 * t2);
}

/* End of code generation (Iq_LeftStart33DFootV97.cpp) */
