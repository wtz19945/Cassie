/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart03DFootV97.cpp
 *
 * Code generation for function 'Iq_LeftStart03DFootV97'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV97_form_Step0.h"
#include "Iq_LeftStart03DFootV97.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV97",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV97.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart03DFootV97(c_temp_MPC3DFootV97_form_Step0S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], real_T Aiq[32318], real_T biq[143])
{
  int32_T i1;
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
  real_T t60;
  real_T t61;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t65;
  real_T a;
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
  real_T t145;
  real_T t146;
  real_T t154;
  real_T t155;
  real_T t163;
  real_T t164;
  real_T t172;
  real_T t173;
  real_T t182;

  /* IQ_LEFTSTART03DFOOTV97 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART03DFOOTV97(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     29-Jun-2023 15:57:28 */
  i1 = in8->size[1] << 1;
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&kb_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&jb_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&ib_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&hb_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&gb_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&fb_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&eb_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&db_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&cb_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&bb_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&ab_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&y_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&x_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&w_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&v_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&u_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&t_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&s_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&r_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&q_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(19 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i1, (emlrtBCInfo *)&p_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(21 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i1, (emlrtBCInfo *)&o_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(23 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i1, (emlrtBCInfo *)&n_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(25 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(25, 1, i1, (emlrtBCInfo *)&m_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(27 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(27, 1, i1, (emlrtBCInfo *)&l_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(29 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(29, 1, i1, (emlrtBCInfo *)&k_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(31 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(31, 1, i1, (emlrtBCInfo *)&j_emlrtBCI, sp);
  }

  i1 = in8->size[1] << 1;
  if (!(33 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(33, 1, i1, (emlrtBCInfo *)&i_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(19 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i1, (emlrtBCInfo *)&h_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(21 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i1, (emlrtBCInfo *)&g_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(23 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i1, (emlrtBCInfo *)&f_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(25 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(25, 1, i1, (emlrtBCInfo *)&e_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(27 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(27, 1, i1, (emlrtBCInfo *)&d_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(29 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(29, 1, i1, (emlrtBCInfo *)&c_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(31 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(31, 1, i1, (emlrtBCInfo *)&b_emlrtBCI, sp);
  }

  i1 = in9->size[1] << 1;
  if (!(33 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(33, 1, i1, (emlrtBCInfo *)&emlrtBCI, sp);
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
  t53 = in15[0] - in15[16];
  t54 = in15[1] - in15[21];
  t55 = in15[2] - in15[26];
  t56 = in15[3] - in15[17];
  t57 = in15[4] - in15[22];
  t58 = in15[5] - in15[27];
  t59 = in15[6] - in15[18];
  t60 = in15[7] - in15[23];
  t61 = in15[8] - in15[28];
  t62 = in15[9] - in15[19];
  t63 = in15[10] - in15[24];
  t64 = in15[11] - in15[29];
  SD->u1.f0.dv4[0] = -1.0;
  memset(&SD->u1.f0.dv4[1], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[34] = 1.0;
  memset(&SD->u1.f0.dv4[35], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[68] = t2;
  memset(&SD->u1.f0.dv4[69], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[102] = t2;
  memset(&SD->u1.f0.dv4[103], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[287] = -1.0;
  memset(&SD->u1.f0.dv4[288], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[321] = 1.0;
  memset(&SD->u1.f0.dv4[322], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[355] = t5;
  memset(&SD->u1.f0.dv4[356], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[389] = t5;
  memset(&SD->u1.f0.dv4[390], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[574] = -1.0;
  memset(&SD->u1.f0.dv4[575], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[608] = 1.0;
  memset(&SD->u1.f0.dv4[609], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[642] = t8;
  memset(&SD->u1.f0.dv4[643], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[676] = t8;
  memset(&SD->u1.f0.dv4[677], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[861] = -1.0;
  memset(&SD->u1.f0.dv4[862], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[895] = 1.0;
  memset(&SD->u1.f0.dv4[896], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[929] = t11;
  memset(&SD->u1.f0.dv4[930], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[963] = t11;
  memset(&SD->u1.f0.dv4[964], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[1148] = -1.0;
  memset(&SD->u1.f0.dv4[1149], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1182] = 1.0;
  memset(&SD->u1.f0.dv4[1183], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1216] = t14;
  memset(&SD->u1.f0.dv4[1217], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1250] = t14;
  memset(&SD->u1.f0.dv4[1251], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[1435] = -1.0;
  memset(&SD->u1.f0.dv4[1436], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1469] = 1.0;
  memset(&SD->u1.f0.dv4[1470], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1503] = t17;
  memset(&SD->u1.f0.dv4[1504], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1537] = t17;
  memset(&SD->u1.f0.dv4[1538], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[1722] = -1.0;
  memset(&SD->u1.f0.dv4[1723], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1756] = 1.0;
  memset(&SD->u1.f0.dv4[1757], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1790] = t20;
  memset(&SD->u1.f0.dv4[1791], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1824] = t20;
  memset(&SD->u1.f0.dv4[1825], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[2009] = -1.0;
  memset(&SD->u1.f0.dv4[2010], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2043] = 1.0;
  memset(&SD->u1.f0.dv4[2044], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2077] = t23;
  memset(&SD->u1.f0.dv4[2078], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2111] = t23;
  memset(&SD->u1.f0.dv4[2112], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[2296] = -1.0;
  memset(&SD->u1.f0.dv4[2297], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2330] = 1.0;
  memset(&SD->u1.f0.dv4[2331], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2364] = t26;
  memset(&SD->u1.f0.dv4[2365], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2398] = t26;
  memset(&SD->u1.f0.dv4[2399], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[2583] = -1.0;
  memset(&SD->u1.f0.dv4[2584], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2617] = 1.0;
  memset(&SD->u1.f0.dv4[2618], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2651] = t29;
  memset(&SD->u1.f0.dv4[2652], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2685] = t29;
  memset(&SD->u1.f0.dv4[2686], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[2870] = -1.0;
  memset(&SD->u1.f0.dv4[2871], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2904] = 1.0;
  memset(&SD->u1.f0.dv4[2905], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2938] = t32;
  memset(&SD->u1.f0.dv4[2939], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2972] = t32;
  memset(&SD->u1.f0.dv4[2973], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[3157] = -1.0;
  memset(&SD->u1.f0.dv4[3158], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3191] = 1.0;
  memset(&SD->u1.f0.dv4[3192], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3225] = t35;
  memset(&SD->u1.f0.dv4[3226], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3259] = t35;
  memset(&SD->u1.f0.dv4[3260], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[3444] = -1.0;
  memset(&SD->u1.f0.dv4[3445], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3478] = 1.0;
  memset(&SD->u1.f0.dv4[3479], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3512] = t38;
  memset(&SD->u1.f0.dv4[3513], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3546] = t38;
  memset(&SD->u1.f0.dv4[3547], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[3731] = -1.0;
  memset(&SD->u1.f0.dv4[3732], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3765] = 1.0;
  memset(&SD->u1.f0.dv4[3766], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3799] = t41;
  memset(&SD->u1.f0.dv4[3800], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3833] = t41;
  memset(&SD->u1.f0.dv4[3834], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[4018] = -1.0;
  memset(&SD->u1.f0.dv4[4019], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4052] = 1.0;
  memset(&SD->u1.f0.dv4[4053], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4086] = t44;
  memset(&SD->u1.f0.dv4[4087], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4120] = t44;
  memset(&SD->u1.f0.dv4[4121], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[4305] = -1.0;
  memset(&SD->u1.f0.dv4[4306], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4339] = 1.0;
  memset(&SD->u1.f0.dv4[4340], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4373] = t47;
  memset(&SD->u1.f0.dv4[4374], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4407] = t47;
  memset(&SD->u1.f0.dv4[4408], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[4592] = -1.0;
  memset(&SD->u1.f0.dv4[4593], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4626] = 1.0;
  memset(&SD->u1.f0.dv4[4627], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4660] = t50;
  memset(&SD->u1.f0.dv4[4661], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4694] = t50;
  memset(&SD->u1.f0.dv4[4695], 0, 184U * sizeof(real_T));
  SD->u1.f0.dv4[4879] = -1.0;
  memset(&SD->u1.f0.dv4[4880], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4913] = 1.0;
  memset(&SD->u1.f0.dv4[4914], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[4930] = t3;
  memset(&SD->u1.f0.dv4[4931], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4964] = t3;
  memset(&SD->u1.f0.dv4[4965], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[5166] = -1.0;
  memset(&SD->u1.f0.dv4[5167], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5200] = 1.0;
  memset(&SD->u1.f0.dv4[5201], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5217] = t6;
  memset(&SD->u1.f0.dv4[5218], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5251] = t6;
  memset(&SD->u1.f0.dv4[5252], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[5453] = -1.0;
  memset(&SD->u1.f0.dv4[5454], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5487] = 1.0;
  memset(&SD->u1.f0.dv4[5488], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5504] = t9;
  memset(&SD->u1.f0.dv4[5505], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5538] = t9;
  memset(&SD->u1.f0.dv4[5539], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[5740] = -1.0;
  memset(&SD->u1.f0.dv4[5741], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5774] = 1.0;
  memset(&SD->u1.f0.dv4[5775], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5791] = t12;
  memset(&SD->u1.f0.dv4[5792], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5825] = t12;
  memset(&SD->u1.f0.dv4[5826], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[6027] = -1.0;
  memset(&SD->u1.f0.dv4[6028], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6061] = 1.0;
  memset(&SD->u1.f0.dv4[6062], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6078] = t15;
  memset(&SD->u1.f0.dv4[6079], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6112] = t15;
  memset(&SD->u1.f0.dv4[6113], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[6314] = -1.0;
  memset(&SD->u1.f0.dv4[6315], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6348] = 1.0;
  memset(&SD->u1.f0.dv4[6349], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6365] = t18;
  memset(&SD->u1.f0.dv4[6366], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6399] = t18;
  memset(&SD->u1.f0.dv4[6400], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[6601] = -1.0;
  memset(&SD->u1.f0.dv4[6602], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6635] = 1.0;
  memset(&SD->u1.f0.dv4[6636], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6652] = t21;
  memset(&SD->u1.f0.dv4[6653], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6686] = t21;
  memset(&SD->u1.f0.dv4[6687], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[6888] = -1.0;
  memset(&SD->u1.f0.dv4[6889], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6922] = 1.0;
  memset(&SD->u1.f0.dv4[6923], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6939] = t24;
  memset(&SD->u1.f0.dv4[6940], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6973] = t24;
  memset(&SD->u1.f0.dv4[6974], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[7175] = -1.0;
  memset(&SD->u1.f0.dv4[7176], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7209] = 1.0;
  memset(&SD->u1.f0.dv4[7210], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7226] = t27;
  memset(&SD->u1.f0.dv4[7227], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7260] = t27;
  memset(&SD->u1.f0.dv4[7261], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[7462] = -1.0;
  memset(&SD->u1.f0.dv4[7463], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7496] = 1.0;
  memset(&SD->u1.f0.dv4[7497], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7513] = t30;
  memset(&SD->u1.f0.dv4[7514], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7547] = t30;
  memset(&SD->u1.f0.dv4[7548], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[7749] = -1.0;
  memset(&SD->u1.f0.dv4[7750], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7783] = 1.0;
  memset(&SD->u1.f0.dv4[7784], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7800] = t33;
  memset(&SD->u1.f0.dv4[7801], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7834] = t33;
  memset(&SD->u1.f0.dv4[7835], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[8036] = -1.0;
  memset(&SD->u1.f0.dv4[8037], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8070] = 1.0;
  memset(&SD->u1.f0.dv4[8071], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8087] = t36;
  memset(&SD->u1.f0.dv4[8088], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8121] = t36;
  memset(&SD->u1.f0.dv4[8122], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[8323] = -1.0;
  memset(&SD->u1.f0.dv4[8324], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8357] = 1.0;
  memset(&SD->u1.f0.dv4[8358], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8374] = t39;
  memset(&SD->u1.f0.dv4[8375], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8408] = t39;
  memset(&SD->u1.f0.dv4[8409], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[8610] = -1.0;
  memset(&SD->u1.f0.dv4[8611], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8644] = 1.0;
  memset(&SD->u1.f0.dv4[8645], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8661] = t42;
  memset(&SD->u1.f0.dv4[8662], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8695] = t42;
  memset(&SD->u1.f0.dv4[8696], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[8897] = -1.0;
  memset(&SD->u1.f0.dv4[8898], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8931] = 1.0;
  memset(&SD->u1.f0.dv4[8932], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8948] = t45;
  memset(&SD->u1.f0.dv4[8949], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8982] = t45;
  memset(&SD->u1.f0.dv4[8983], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[9184] = -1.0;
  memset(&SD->u1.f0.dv4[9185], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9218] = 1.0;
  memset(&SD->u1.f0.dv4[9219], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[9235] = t48;
  memset(&SD->u1.f0.dv4[9236], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9269] = t48;
  memset(&SD->u1.f0.dv4[9270], 0, 201U * sizeof(real_T));
  SD->u1.f0.dv4[9471] = -1.0;
  memset(&SD->u1.f0.dv4[9472], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9505] = 1.0;
  memset(&SD->u1.f0.dv4[9506], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[9522] = t51;
  memset(&SD->u1.f0.dv4[9523], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9556] = t51;
  memset(&SD->u1.f0.dv4[9557], 0, 235U * sizeof(real_T));
  SD->u1.f0.dv4[9792] = t4;
  memset(&SD->u1.f0.dv4[9793], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9826] = t4;
  memset(&SD->u1.f0.dv4[9827], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[10079] = t7;
  memset(&SD->u1.f0.dv4[10080], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10113] = t7;
  memset(&SD->u1.f0.dv4[10114], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[10366] = t10;
  memset(&SD->u1.f0.dv4[10367], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10400] = t10;
  memset(&SD->u1.f0.dv4[10401], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[10653] = t13;
  memset(&SD->u1.f0.dv4[10654], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10687] = t13;
  memset(&SD->u1.f0.dv4[10688], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[10940] = t16;
  memset(&SD->u1.f0.dv4[10941], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10974] = t16;
  memset(&SD->u1.f0.dv4[10975], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[11227] = t19;
  memset(&SD->u1.f0.dv4[11228], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11261] = t19;
  memset(&SD->u1.f0.dv4[11262], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[11514] = t22;
  memset(&SD->u1.f0.dv4[11515], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11548] = t22;
  memset(&SD->u1.f0.dv4[11549], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[11801] = t25;
  memset(&SD->u1.f0.dv4[11802], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11835] = t25;
  memset(&SD->u1.f0.dv4[11836], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[12088] = t28;
  memset(&SD->u1.f0.dv4[12089], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12122] = t28;
  memset(&SD->u1.f0.dv4[12123], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[12375] = t31;
  memset(&SD->u1.f0.dv4[12376], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12409] = t31;
  memset(&SD->u1.f0.dv4[12410], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[12662] = t34;
  memset(&SD->u1.f0.dv4[12663], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12696] = t34;
  memset(&SD->u1.f0.dv4[12697], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[12949] = t37;
  memset(&SD->u1.f0.dv4[12950], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12983] = t37;
  memset(&SD->u1.f0.dv4[12984], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[13236] = t40;
  memset(&SD->u1.f0.dv4[13237], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13270] = t40;
  memset(&SD->u1.f0.dv4[13271], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[13523] = t43;
  memset(&SD->u1.f0.dv4[13524], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13557] = t43;
  memset(&SD->u1.f0.dv4[13558], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[13810] = t46;
  memset(&SD->u1.f0.dv4[13811], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13844] = t46;
  memset(&SD->u1.f0.dv4[13845], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[14097] = t49;
  memset(&SD->u1.f0.dv4[14098], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14131] = t49;
  memset(&SD->u1.f0.dv4[14132], 0, 252U * sizeof(real_T));
  SD->u1.f0.dv4[14384] = t52;
  memset(&SD->u1.f0.dv4[14385], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14418] = t52;
  memset(&SD->u1.f0.dv4[14419], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv4[14586] = 1.0;
  memset(&SD->u1.f0.dv4[14587], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14620] = -1.0;
  memset(&SD->u1.f0.dv4[14621], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv4[14705] = 1.0;
  SD->u1.f0.dv4[14706] = 0.0;
  SD->u1.f0.dv4[14707] = 0.0;
  SD->u1.f0.dv4[14708] = 0.0;
  SD->u1.f0.dv4[14709] = -1.0;
  memset(&SD->u1.f0.dv4[14710], 0, 20U * sizeof(real_T));
  SD->u1.f0.dv4[14730] = 1.0;
  memset(&SD->u1.f0.dv4[14731], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14764] = -1.0;
  memset(&SD->u1.f0.dv4[14765], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv4[14849] = 1.0;
  SD->u1.f0.dv4[14850] = 0.0;
  SD->u1.f0.dv4[14851] = 0.0;
  SD->u1.f0.dv4[14852] = 0.0;
  SD->u1.f0.dv4[14853] = -1.0;
  memset(&SD->u1.f0.dv4[14854], 0, 20U * sizeof(real_T));
  SD->u1.f0.dv4[14874] = 1.0;
  memset(&SD->u1.f0.dv4[14875], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14908] = -1.0;
  memset(&SD->u1.f0.dv4[14909], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv4[14993] = 1.0;
  SD->u1.f0.dv4[14994] = 0.0;
  SD->u1.f0.dv4[14995] = 0.0;
  SD->u1.f0.dv4[14996] = 0.0;
  SD->u1.f0.dv4[14997] = -1.0;
  memset(&SD->u1.f0.dv4[14998], 0, 20U * sizeof(real_T));
  SD->u1.f0.dv4[15018] = 1.0;
  memset(&SD->u1.f0.dv4[15019], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15052] = -1.0;
  memset(&SD->u1.f0.dv4[15053], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv4[15137] = 1.0;
  SD->u1.f0.dv4[15138] = 0.0;
  SD->u1.f0.dv4[15139] = 0.0;
  SD->u1.f0.dv4[15140] = 0.0;
  SD->u1.f0.dv4[15141] = -1.0;
  memset(&SD->u1.f0.dv4[15142], 0, 20U * sizeof(real_T));
  SD->u1.f0.dv4[15162] = 1.0;
  memset(&SD->u1.f0.dv4[15163], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15196] = -1.0;
  memset(&SD->u1.f0.dv4[15197], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[15306] = 1.0;
  memset(&SD->u1.f0.dv4[15307], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15340] = -1.0;
  memset(&SD->u1.f0.dv4[15341], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[15450] = 1.0;
  memset(&SD->u1.f0.dv4[15451], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15484] = -1.0;
  memset(&SD->u1.f0.dv4[15485], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[15594] = 1.0;
  memset(&SD->u1.f0.dv4[15595], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15628] = -1.0;
  memset(&SD->u1.f0.dv4[15629], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[15738] = 1.0;
  memset(&SD->u1.f0.dv4[15739], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15772] = -1.0;
  memset(&SD->u1.f0.dv4[15773], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[15882] = 1.0;
  memset(&SD->u1.f0.dv4[15883], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15916] = -1.0;
  memset(&SD->u1.f0.dv4[15917], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[16026] = 1.0;
  memset(&SD->u1.f0.dv4[16027], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16060] = -1.0;
  memset(&SD->u1.f0.dv4[16061], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[16170] = 1.0;
  memset(&SD->u1.f0.dv4[16171], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16204] = -1.0;
  memset(&SD->u1.f0.dv4[16205], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[16314] = 1.0;
  memset(&SD->u1.f0.dv4[16315], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16348] = -1.0;
  memset(&SD->u1.f0.dv4[16349], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[16458] = 1.0;
  memset(&SD->u1.f0.dv4[16459], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16492] = -1.0;
  memset(&SD->u1.f0.dv4[16493], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[16602] = 1.0;
  memset(&SD->u1.f0.dv4[16603], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16636] = -1.0;
  memset(&SD->u1.f0.dv4[16637], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[16746] = 1.0;
  memset(&SD->u1.f0.dv4[16747], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16780] = -1.0;
  memset(&SD->u1.f0.dv4[16781], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[16890] = 1.0;
  memset(&SD->u1.f0.dv4[16891], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16924] = -1.0;
  memset(&SD->u1.f0.dv4[16925], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[17034] = 1.0;
  memset(&SD->u1.f0.dv4[17035], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17068] = -1.0;
  memset(&SD->u1.f0.dv4[17069], 0, 75U * sizeof(real_T));
  SD->u1.f0.dv4[17144] = 1.0;
  SD->u1.f0.dv4[17145] = 0.0;
  SD->u1.f0.dv4[17146] = 0.0;
  SD->u1.f0.dv4[17147] = 0.0;
  SD->u1.f0.dv4[17148] = -1.0;
  memset(&SD->u1.f0.dv4[17149], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv4[17178] = 1.0;
  memset(&SD->u1.f0.dv4[17179], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17212] = -1.0;
  memset(&SD->u1.f0.dv4[17213], 0, 75U * sizeof(real_T));
  SD->u1.f0.dv4[17288] = 1.0;
  SD->u1.f0.dv4[17289] = 0.0;
  SD->u1.f0.dv4[17290] = 0.0;
  SD->u1.f0.dv4[17291] = 0.0;
  SD->u1.f0.dv4[17292] = -1.0;
  memset(&SD->u1.f0.dv4[17293], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv4[17322] = 1.0;
  memset(&SD->u1.f0.dv4[17323], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17356] = -1.0;
  memset(&SD->u1.f0.dv4[17357], 0, 75U * sizeof(real_T));
  SD->u1.f0.dv4[17432] = 1.0;
  SD->u1.f0.dv4[17433] = 0.0;
  SD->u1.f0.dv4[17434] = 0.0;
  SD->u1.f0.dv4[17435] = 0.0;
  SD->u1.f0.dv4[17436] = -1.0;
  memset(&SD->u1.f0.dv4[17437], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv4[17466] = 1.0;
  memset(&SD->u1.f0.dv4[17467], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17500] = -1.0;
  memset(&SD->u1.f0.dv4[17501], 0, 75U * sizeof(real_T));
  SD->u1.f0.dv4[17576] = 1.0;
  SD->u1.f0.dv4[17577] = 0.0;
  SD->u1.f0.dv4[17578] = 0.0;
  SD->u1.f0.dv4[17579] = 0.0;
  SD->u1.f0.dv4[17580] = -1.0;
  memset(&SD->u1.f0.dv4[17581], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv4[17610] = 1.0;
  memset(&SD->u1.f0.dv4[17611], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17644] = -1.0;
  memset(&SD->u1.f0.dv4[17645], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[17754] = 1.0;
  memset(&SD->u1.f0.dv4[17755], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17788] = -1.0;
  memset(&SD->u1.f0.dv4[17789], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[17898] = 1.0;
  memset(&SD->u1.f0.dv4[17899], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17932] = -1.0;
  memset(&SD->u1.f0.dv4[17933], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[18042] = 1.0;
  memset(&SD->u1.f0.dv4[18043], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[18076] = -1.0;
  memset(&SD->u1.f0.dv4[18077], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[18186] = 1.0;
  memset(&SD->u1.f0.dv4[18187], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[18220] = -1.0;
  memset(&SD->u1.f0.dv4[18221], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[18330] = 1.0;
  memset(&SD->u1.f0.dv4[18331], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[18364] = -1.0;
  memset(&SD->u1.f0.dv4[18365], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[18474] = 1.0;
  memset(&SD->u1.f0.dv4[18475], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[18508] = -1.0;
  memset(&SD->u1.f0.dv4[18509], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[18618] = 1.0;
  memset(&SD->u1.f0.dv4[18619], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[18652] = -1.0;
  memset(&SD->u1.f0.dv4[18653], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[18762] = 1.0;
  memset(&SD->u1.f0.dv4[18763], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[18796] = -1.0;
  memset(&SD->u1.f0.dv4[18797], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[18906] = 1.0;
  memset(&SD->u1.f0.dv4[18907], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[18940] = -1.0;
  memset(&SD->u1.f0.dv4[18941], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[19050] = 1.0;
  memset(&SD->u1.f0.dv4[19051], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[19084] = -1.0;
  memset(&SD->u1.f0.dv4[19085], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[19194] = 1.0;
  memset(&SD->u1.f0.dv4[19195], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[19228] = -1.0;
  memset(&SD->u1.f0.dv4[19229], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv4[19338] = 1.0;
  memset(&SD->u1.f0.dv4[19339], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[19372] = -1.0;
  memset(&SD->u1.f0.dv4[19373], 0, 3735U * sizeof(real_T));
  SD->u1.f0.dv4[23108] = -1.0;
  memset(&SD->u1.f0.dv4[23109], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23125] = -1.0;
  memset(&SD->u1.f0.dv4[23126], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[23252] = -1.0;
  memset(&SD->u1.f0.dv4[23253], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23269] = -1.0;
  memset(&SD->u1.f0.dv4[23270], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[23396] = -1.0;
  memset(&SD->u1.f0.dv4[23397], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23413] = -1.0;
  memset(&SD->u1.f0.dv4[23414], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[23540] = -1.0;
  memset(&SD->u1.f0.dv4[23541], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23557] = -1.0;
  memset(&SD->u1.f0.dv4[23558], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[23684] = -1.0;
  memset(&SD->u1.f0.dv4[23685], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23701] = -1.0;
  memset(&SD->u1.f0.dv4[23702], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[23828] = -1.0;
  memset(&SD->u1.f0.dv4[23829], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23845] = -1.0;
  memset(&SD->u1.f0.dv4[23846], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[23972] = -1.0;
  memset(&SD->u1.f0.dv4[23973], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23989] = -1.0;
  memset(&SD->u1.f0.dv4[23990], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[24116] = -1.0;
  memset(&SD->u1.f0.dv4[24117], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[24133] = -1.0;
  memset(&SD->u1.f0.dv4[24134], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[24260] = -1.0;
  memset(&SD->u1.f0.dv4[24261], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[24277] = -1.0;
  memset(&SD->u1.f0.dv4[24278], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[24404] = -1.0;
  memset(&SD->u1.f0.dv4[24405], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[24421] = -1.0;
  memset(&SD->u1.f0.dv4[24422], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[24548] = -1.0;
  memset(&SD->u1.f0.dv4[24549], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[24565] = -1.0;
  memset(&SD->u1.f0.dv4[24566], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[24692] = -1.0;
  memset(&SD->u1.f0.dv4[24693], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[24709] = -1.0;
  memset(&SD->u1.f0.dv4[24710], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[24836] = -1.0;
  memset(&SD->u1.f0.dv4[24837], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[24853] = -1.0;
  memset(&SD->u1.f0.dv4[24854], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[24980] = -1.0;
  memset(&SD->u1.f0.dv4[24981], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[24997] = -1.0;
  memset(&SD->u1.f0.dv4[24998], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[25124] = -1.0;
  memset(&SD->u1.f0.dv4[25125], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[25141] = -1.0;
  memset(&SD->u1.f0.dv4[25142], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[25268] = -1.0;
  memset(&SD->u1.f0.dv4[25269], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[25285] = -1.0;
  memset(&SD->u1.f0.dv4[25286], 0, 126U * sizeof(real_T));
  SD->u1.f0.dv4[25412] = -1.0;
  memset(&SD->u1.f0.dv4[25413], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[25429] = -1.0;
  memset(&SD->u1.f0.dv4[25430], 0, 2574U * sizeof(real_T));
  SD->u1.f0.dv4[28004] = -1.0;
  SD->u1.f0.dv4[28005] = 0.0;
  SD->u1.f0.dv4[28006] = 0.0;
  SD->u1.f0.dv4[28007] = 0.0;
  SD->u1.f0.dv4[28008] = -1.0;
  memset(&SD->u1.f0.dv4[28009], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[28148] = -1.0;
  SD->u1.f0.dv4[28149] = 0.0;
  SD->u1.f0.dv4[28150] = 0.0;
  SD->u1.f0.dv4[28151] = 0.0;
  SD->u1.f0.dv4[28152] = -1.0;
  memset(&SD->u1.f0.dv4[28153], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[28292] = -1.0;
  SD->u1.f0.dv4[28293] = 0.0;
  SD->u1.f0.dv4[28294] = 0.0;
  SD->u1.f0.dv4[28295] = 0.0;
  SD->u1.f0.dv4[28296] = -1.0;
  memset(&SD->u1.f0.dv4[28297], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[28436] = -1.0;
  SD->u1.f0.dv4[28437] = 0.0;
  SD->u1.f0.dv4[28438] = 0.0;
  SD->u1.f0.dv4[28439] = 0.0;
  SD->u1.f0.dv4[28440] = -1.0;
  memset(&SD->u1.f0.dv4[28441], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv4[28584] = -1.0;
  SD->u1.f0.dv4[28585] = 0.0;
  SD->u1.f0.dv4[28586] = 0.0;
  SD->u1.f0.dv4[28587] = 0.0;
  SD->u1.f0.dv4[28588] = -1.0;
  memset(&SD->u1.f0.dv4[28589], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[28728] = -1.0;
  SD->u1.f0.dv4[28729] = 0.0;
  SD->u1.f0.dv4[28730] = 0.0;
  SD->u1.f0.dv4[28731] = 0.0;
  SD->u1.f0.dv4[28732] = -1.0;
  memset(&SD->u1.f0.dv4[28733], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[28872] = -1.0;
  SD->u1.f0.dv4[28873] = 0.0;
  SD->u1.f0.dv4[28874] = 0.0;
  SD->u1.f0.dv4[28875] = 0.0;
  SD->u1.f0.dv4[28876] = -1.0;
  memset(&SD->u1.f0.dv4[28877], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[29016] = -1.0;
  SD->u1.f0.dv4[29017] = 0.0;
  SD->u1.f0.dv4[29018] = 0.0;
  SD->u1.f0.dv4[29019] = 0.0;
  SD->u1.f0.dv4[29020] = -1.0;
  memset(&SD->u1.f0.dv4[29021], 0, 286U * sizeof(real_T));
  SD->u1.f0.dv4[29307] = t53;
  SD->u1.f0.dv4[29308] = 0.0;
  SD->u1.f0.dv4[29309] = 0.0;
  SD->u1.f0.dv4[29310] = 0.0;
  SD->u1.f0.dv4[29311] = t53;
  memset(&SD->u1.f0.dv4[29312], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[29451] = t56;
  SD->u1.f0.dv4[29452] = 0.0;
  SD->u1.f0.dv4[29453] = 0.0;
  SD->u1.f0.dv4[29454] = 0.0;
  SD->u1.f0.dv4[29455] = t56;
  memset(&SD->u1.f0.dv4[29456], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[29595] = t59;
  SD->u1.f0.dv4[29596] = 0.0;
  SD->u1.f0.dv4[29597] = 0.0;
  SD->u1.f0.dv4[29598] = 0.0;
  SD->u1.f0.dv4[29599] = t59;
  memset(&SD->u1.f0.dv4[29600], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[29739] = t62;
  SD->u1.f0.dv4[29740] = 0.0;
  SD->u1.f0.dv4[29741] = 0.0;
  SD->u1.f0.dv4[29742] = 0.0;
  SD->u1.f0.dv4[29743] = t62;
  memset(&SD->u1.f0.dv4[29744], 0, 278U * sizeof(real_T));
  SD->u1.f0.dv4[30022] = t54;
  SD->u1.f0.dv4[30023] = 0.0;
  SD->u1.f0.dv4[30024] = 0.0;
  SD->u1.f0.dv4[30025] = 0.0;
  SD->u1.f0.dv4[30026] = t54;
  memset(&SD->u1.f0.dv4[30027], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[30166] = t57;
  SD->u1.f0.dv4[30167] = 0.0;
  SD->u1.f0.dv4[30168] = 0.0;
  SD->u1.f0.dv4[30169] = 0.0;
  SD->u1.f0.dv4[30170] = t57;
  memset(&SD->u1.f0.dv4[30171], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[30310] = t60;
  SD->u1.f0.dv4[30311] = 0.0;
  SD->u1.f0.dv4[30312] = 0.0;
  SD->u1.f0.dv4[30313] = 0.0;
  SD->u1.f0.dv4[30314] = t60;
  memset(&SD->u1.f0.dv4[30315], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[30454] = t63;
  SD->u1.f0.dv4[30455] = 0.0;
  SD->u1.f0.dv4[30456] = 0.0;
  SD->u1.f0.dv4[30457] = 0.0;
  SD->u1.f0.dv4[30458] = t63;
  memset(&SD->u1.f0.dv4[30459], 0, 278U * sizeof(real_T));
  SD->u1.f0.dv4[30737] = t55;
  SD->u1.f0.dv4[30738] = 0.0;
  SD->u1.f0.dv4[30739] = 0.0;
  SD->u1.f0.dv4[30740] = 0.0;
  SD->u1.f0.dv4[30741] = t55;
  memset(&SD->u1.f0.dv4[30742], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[30881] = t58;
  SD->u1.f0.dv4[30882] = 0.0;
  SD->u1.f0.dv4[30883] = 0.0;
  SD->u1.f0.dv4[30884] = 0.0;
  SD->u1.f0.dv4[30885] = t58;
  memset(&SD->u1.f0.dv4[30886], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[31025] = t61;
  SD->u1.f0.dv4[31026] = 0.0;
  SD->u1.f0.dv4[31027] = 0.0;
  SD->u1.f0.dv4[31028] = 0.0;
  SD->u1.f0.dv4[31029] = t61;
  memset(&SD->u1.f0.dv4[31030], 0, 139U * sizeof(real_T));
  SD->u1.f0.dv4[31169] = t64;
  SD->u1.f0.dv4[31170] = 0.0;
  SD->u1.f0.dv4[31171] = 0.0;
  SD->u1.f0.dv4[31172] = 0.0;
  SD->u1.f0.dv4[31173] = t64;
  memset(&SD->u1.f0.dv4[31174], 0, 135U * sizeof(real_T));
  SD->u1.f0.dv4[31309] = -1.0;
  memset(&SD->u1.f0.dv4[31310], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv4[31453] = -1.0;
  memset(&SD->u1.f0.dv4[31454], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv4[31597] = -1.0;
  memset(&SD->u1.f0.dv4[31598], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv4[31741] = -1.0;
  memset(&SD->u1.f0.dv4[31742], 0, 576U * sizeof(real_T));
  for (i1 = 0; i1 < 226; i1++) {
    memcpy(&Aiq[i1 * 143], &SD->u1.f0.dv4[i1 * 143], 143U * sizeof(real_T));
  }

  t65 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t65);
  t2 = muDoubleScalarAbs(t3);
  t5 = muDoubleScalarAbs(t4);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t73 = 1.0 / t2;
  t74 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t74);
  t2 = muDoubleScalarAbs(t6);
  t5 = muDoubleScalarAbs(t7);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t82 = 1.0 / t2;
  t83 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t83);
  t2 = muDoubleScalarAbs(t9);
  t5 = muDoubleScalarAbs(t10);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t91 = 1.0 / t2;
  t92 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t92);
  t2 = muDoubleScalarAbs(t12);
  t5 = muDoubleScalarAbs(t13);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t100 = 1.0 / t2;
  t101 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t101);
  t2 = muDoubleScalarAbs(t15);
  t5 = muDoubleScalarAbs(t16);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t109 = 1.0 / t2;
  t110 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t110);
  t2 = muDoubleScalarAbs(t18);
  t5 = muDoubleScalarAbs(t19);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t118 = 1.0 / t2;
  t119 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t119);
  t2 = muDoubleScalarAbs(t21);
  t5 = muDoubleScalarAbs(t22);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t127 = 1.0 / t2;
  t128 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t128);
  t2 = muDoubleScalarAbs(t24);
  t5 = muDoubleScalarAbs(t25);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t136 = 1.0 / t2;
  t137 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t137);
  t2 = muDoubleScalarAbs(t27);
  t5 = muDoubleScalarAbs(t28);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t145 = 1.0 / t2;
  t146 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t146);
  t2 = muDoubleScalarAbs(t30);
  t5 = muDoubleScalarAbs(t31);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t154 = 1.0 / t2;
  t155 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t155);
  t2 = muDoubleScalarAbs(t33);
  t5 = muDoubleScalarAbs(t34);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t163 = 1.0 / t2;
  t164 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t164);
  t2 = muDoubleScalarAbs(t36);
  t5 = muDoubleScalarAbs(t37);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t172 = 1.0 / t2;
  t173 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t173);
  t2 = muDoubleScalarAbs(t39);
  t5 = muDoubleScalarAbs(t40);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t50 = 1.0 / t2;
  t182 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t182);
  t2 = muDoubleScalarAbs(t42);
  t5 = muDoubleScalarAbs(t43);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t44 = 1.0 / t2;
  t47 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t47);
  t2 = muDoubleScalarAbs(t45);
  t5 = muDoubleScalarAbs(t46);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t38 = 1.0 / t2;
  t41 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t41);
  t2 = muDoubleScalarAbs(t48);
  t5 = muDoubleScalarAbs(t49);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t32 = 1.0 / t2;
  t35 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t35);
  t2 = muDoubleScalarAbs(t51);
  t5 = muDoubleScalarAbs(t52);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t17 = 1.0 / t2;
  t20 = Cpx1 + in12[0];
  t23 = -Cpx1 + in12[0];
  t26 = Cpy1 + in13[0];
  t29 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t2 = muDoubleScalarAbs(t54);
  t5 = muDoubleScalarAbs(t55);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t14 = 1.0 / t2;
  a = muDoubleScalarAbs(t56);
  t2 = muDoubleScalarAbs(t57);
  t5 = muDoubleScalarAbs(t58);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t11 = 1.0 / t2;
  a = muDoubleScalarAbs(t59);
  t2 = muDoubleScalarAbs(t60);
  t5 = muDoubleScalarAbs(t61);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t62);
  t2 = muDoubleScalarAbs(t63);
  t5 = muDoubleScalarAbs(t64);
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
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t73) + t4 * (in7[2] - in8->data
              [0] * t4 * t73)) - t65 * (in7[0] + in8->data[0] * t65 * t73);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t82) + t7 * (in7[2] - in8->data
              [2] * t7 * t82)) - t74 * (in7[0] + in8->data[2] * t74 * t82);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t91) + t10 * (in7[2] - in8->
              data[4] * t10 * t91)) - t83 * (in7[0] + in8->data[4] * t83 * t91);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t100) + t13 * (in7[2] -
              in8->data[6] * t13 * t100)) - t92 * (in7[0] + in8->data[6] * t92 *
    t100);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t109) + t16 * (in7[2] -
              in8->data[8] * t16 * t109)) - t101 * (in7[0] + in8->data[8] * t101
    * t109);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t118) + t19 * (in7[2] -
              in8->data[10] * t19 * t118)) - t110 * (in7[0] + in8->data[10] *
    t110 * t118);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t127) + t22 * (in7[2] -
              in8->data[12] * t22 * t127)) - t119 * (in7[0] + in8->data[12] *
    t119 * t127);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t136) + t25 * (in7[2] -
              in8->data[14] * t25 * t136)) - t128 * (in7[0] + in8->data[14] *
    t128 * t136);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t145) + t28 * (in7[2] -
              in8->data[16] * t28 * t145)) - t137 * (in7[0] + in8->data[16] *
    t137 * t145);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t154) + t31 * (in7[2] -
              in8->data[18] * t31 * t154)) - t146 * (in7[0] + in8->data[18] *
    t146 * t154);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t163) + t34 * (in7[2] -
              in8->data[20] * t34 * t163)) - t155 * (in7[0] + in8->data[20] *
    t155 * t163);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t172) + t37 * (in7[2] -
              in8->data[22] * t37 * t172)) - t164 * (in7[0] + in8->data[22] *
    t164 * t172);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t50) + t40 * (in7[2] -
              in8->data[24] * t40 * t50)) - t173 * (in7[0] + in8->data[24] *
    t173 * t50);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t44) + t43 * (in7[2] -
              in8->data[26] * t43 * t44)) - t182 * (in7[0] + in8->data[26] *
    t182 * t44);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t38) + t46 * (in7[2] -
              in8->data[28] * t46 * t38)) - t47 * (in7[0] + in8->data[28] * t47 *
    t38);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t32) + t49 * (in7[2] -
              in8->data[30] * t49 * t32)) - t41 * (in7[0] + in8->data[30] * t41 *
    t32);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t17) + t52 * (in7[2] -
              in8->data[32] * t52 * t17)) - t35 * (in7[0] + in8->data[32] * t35 *
    t17);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t73) + t4 * (in7[2] - in9->
    data[0] * t4 * t73)) - t65 * (in7[0] + in9->data[0] * t65 * t73);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t82) + t7 * (in7[2] - in9->
    data[2] * t7 * t82)) - t74 * (in7[0] + in9->data[2] * t74 * t82);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t91) + t10 * (in7[2] -
    in9->data[4] * t10 * t91)) - t83 * (in7[0] + in9->data[4] * t83 * t91);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t100) + t13 * (in7[2] -
    in9->data[6] * t13 * t100)) - t92 * (in7[0] + in9->data[6] * t92 * t100);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t109) + t16 * (in7[2] -
    in9->data[8] * t16 * t109)) - t101 * (in7[0] + in9->data[8] * t101 * t109);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t118) + t19 * (in7[2] -
    in9->data[10] * t19 * t118)) - t110 * (in7[0] + in9->data[10] * t110 * t118);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t127) + t22 * (in7[2] -
    in9->data[12] * t22 * t127)) - t119 * (in7[0] + in9->data[12] * t119 * t127);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t136) + t25 * (in7[2] -
    in9->data[14] * t25 * t136)) - t128 * (in7[0] + in9->data[14] * t128 * t136);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t145) + t28 * (in7[2] -
    in9->data[16] * t28 * t145)) - t137 * (in7[0] + in9->data[16] * t137 * t145);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t154) + t31 * (in7[2] -
    in9->data[18] * t31 * t154)) - t146 * (in7[0] + in9->data[18] * t146 * t154);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t163) + t34 * (in7[2] -
    in9->data[20] * t34 * t163)) - t155 * (in7[0] + in9->data[20] * t155 * t163);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t172) + t37 * (in7[2] -
    in9->data[22] * t37 * t172)) - t164 * (in7[0] + in9->data[22] * t164 * t172);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t50) + t40 * (in7[2] -
    in9->data[24] * t40 * t50)) - t173 * (in7[0] + in9->data[24] * t173 * t50);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t44) + t43 * (in7[2] -
    in9->data[26] * t43 * t44)) - t182 * (in7[0] + in9->data[26] * t182 * t44);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t38) + t46 * (in7[2] -
    in9->data[28] * t46 * t38)) - t47 * (in7[0] + in9->data[28] * t47 * t38);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t32) + t49 * (in7[2] -
    in9->data[30] * t49 * t32)) - t41 * (in7[0] + in9->data[30] * t41 * t32);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t17) + t52 * (in7[2] -
    in9->data[32] * t52 * t17)) - t35 * (in7[0] + in9->data[32] * t35 * t17);
  biq[119] = t20;
  biq[120] = t20;
  biq[121] = t20;
  biq[122] = t20;
  biq[123] = t23;
  biq[124] = t23;
  biq[125] = t23;
  biq[126] = t23;
  biq[127] = t26;
  biq[128] = t26;
  biq[129] = t26;
  biq[130] = t26;
  biq[131] = t29;
  biq[132] = t29;
  biq[133] = t29;
  biq[134] = t29;
  biq[135] = (t53 * (in15[0] - in9->data[1] * t53 * t14) + t54 * (in15[1] -
    in9->data[1] * t54 * t14)) + t55 * (in15[2] - in9->data[1] * t55 * t14);
  biq[136] = (t56 * (in15[3] - in9->data[1] * t56 * t11) + t57 * (in15[4] -
    in9->data[1] * t57 * t11)) + t58 * (in15[5] - in9->data[1] * t58 * t11);
  biq[137] = (t59 * (in15[6] - in9->data[1] * t59 * t8) + t60 * (in15[7] -
    in9->data[1] * t60 * t8)) + t61 * (in15[8] - in9->data[1] * t61 * t8);
  biq[138] = (t62 * (in15[9] - in9->data[1] * t62 * t2) + t63 * (in15[10] -
    in9->data[1] * t63 * t2)) + t64 * (in15[11] - in9->data[1] * t64 * t2);
  biq[139] = (t53 * (in15[0] - in8->data[1] * t53 * t14) + t54 * (in15[1] -
    in8->data[1] * t54 * t14)) + t55 * (in15[2] - in8->data[1] * t55 * t14);
  biq[140] = (t56 * (in15[3] - in8->data[1] * t56 * t11) + t57 * (in15[4] -
    in8->data[1] * t57 * t11)) + t58 * (in15[5] - in8->data[1] * t58 * t11);
  biq[141] = (t59 * (in15[6] - in8->data[1] * t59 * t8) + t60 * (in15[7] -
    in8->data[1] * t60 * t8)) + t61 * (in15[8] - in8->data[1] * t61 * t8);
  biq[142] = (t62 * (in15[9] - in8->data[1] * t62 * t2) + t63 * (in15[10] -
    in8->data[1] * t63 * t2)) + t64 * (in15[11] - in8->data[1] * t64 * t2);
}

/* End of code generation (Iq_LeftStart03DFootV97.cpp) */
