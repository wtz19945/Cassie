/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart23DFootV99.cpp
 *
 * Code generation for function 'Iq_LeftStart23DFootV99'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV99_form_Step2.h"
#include "Iq_LeftStart23DFootV99.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart23DFootV99(c_temp_MPC3DFootV99_form_Step2S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[8], real_T Aiq[33154],
  real_T biq[137])
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

  /* IQ_LEFTSTART23DFOOTV99 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART23DFOOTV99(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     10-Jul-2023 17:23:09 */
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
  t59 = in18[2] - in16[1];
  t60 = in18[3] - in17[1];
  t61 = in18[4] - in16[2];
  t62 = in18[5] - in17[2];
  t63 = in18[6] - in16[3];
  t64 = in18[7] - in17[3];
  SD->u1.f1.dv3[0] = -1.0;
  memset(&SD->u1.f1.dv3[1], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[34] = 1.0;
  memset(&SD->u1.f1.dv3[35], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[68] = t2;
  memset(&SD->u1.f1.dv3[69], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[102] = t2;
  memset(&SD->u1.f1.dv3[103], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[275] = -1.0;
  memset(&SD->u1.f1.dv3[276], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[309] = 1.0;
  memset(&SD->u1.f1.dv3[310], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[343] = t5;
  memset(&SD->u1.f1.dv3[344], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[377] = t5;
  memset(&SD->u1.f1.dv3[378], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[550] = -1.0;
  memset(&SD->u1.f1.dv3[551], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[584] = 1.0;
  memset(&SD->u1.f1.dv3[585], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[618] = t8;
  memset(&SD->u1.f1.dv3[619], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[652] = t8;
  memset(&SD->u1.f1.dv3[653], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[825] = -1.0;
  memset(&SD->u1.f1.dv3[826], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[859] = 1.0;
  memset(&SD->u1.f1.dv3[860], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[893] = t11;
  memset(&SD->u1.f1.dv3[894], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[927] = t11;
  memset(&SD->u1.f1.dv3[928], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[1100] = -1.0;
  memset(&SD->u1.f1.dv3[1101], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1134] = 1.0;
  memset(&SD->u1.f1.dv3[1135], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1168] = t14;
  memset(&SD->u1.f1.dv3[1169], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1202] = t14;
  memset(&SD->u1.f1.dv3[1203], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[1375] = -1.0;
  memset(&SD->u1.f1.dv3[1376], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1409] = 1.0;
  memset(&SD->u1.f1.dv3[1410], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1443] = t17;
  memset(&SD->u1.f1.dv3[1444], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1477] = t17;
  memset(&SD->u1.f1.dv3[1478], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[1650] = -1.0;
  memset(&SD->u1.f1.dv3[1651], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1684] = 1.0;
  memset(&SD->u1.f1.dv3[1685], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1718] = t20;
  memset(&SD->u1.f1.dv3[1719], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1752] = t20;
  memset(&SD->u1.f1.dv3[1753], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[1925] = -1.0;
  memset(&SD->u1.f1.dv3[1926], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1959] = 1.0;
  memset(&SD->u1.f1.dv3[1960], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1993] = t23;
  memset(&SD->u1.f1.dv3[1994], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2027] = t23;
  memset(&SD->u1.f1.dv3[2028], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[2200] = -1.0;
  memset(&SD->u1.f1.dv3[2201], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2234] = 1.0;
  memset(&SD->u1.f1.dv3[2235], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2268] = t26;
  memset(&SD->u1.f1.dv3[2269], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2302] = t26;
  memset(&SD->u1.f1.dv3[2303], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[2475] = -1.0;
  memset(&SD->u1.f1.dv3[2476], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2509] = 1.0;
  memset(&SD->u1.f1.dv3[2510], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2543] = t29;
  memset(&SD->u1.f1.dv3[2544], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2577] = t29;
  memset(&SD->u1.f1.dv3[2578], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[2750] = -1.0;
  memset(&SD->u1.f1.dv3[2751], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2784] = 1.0;
  memset(&SD->u1.f1.dv3[2785], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2818] = t32;
  memset(&SD->u1.f1.dv3[2819], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2852] = t32;
  memset(&SD->u1.f1.dv3[2853], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[3025] = -1.0;
  memset(&SD->u1.f1.dv3[3026], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3059] = 1.0;
  memset(&SD->u1.f1.dv3[3060], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3093] = t35;
  memset(&SD->u1.f1.dv3[3094], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3127] = t35;
  memset(&SD->u1.f1.dv3[3128], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[3300] = -1.0;
  memset(&SD->u1.f1.dv3[3301], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3334] = 1.0;
  memset(&SD->u1.f1.dv3[3335], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3368] = t38;
  memset(&SD->u1.f1.dv3[3369], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3402] = t38;
  memset(&SD->u1.f1.dv3[3403], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[3575] = -1.0;
  memset(&SD->u1.f1.dv3[3576], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3609] = 1.0;
  memset(&SD->u1.f1.dv3[3610], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3643] = t41;
  memset(&SD->u1.f1.dv3[3644], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3677] = t41;
  memset(&SD->u1.f1.dv3[3678], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[3850] = -1.0;
  memset(&SD->u1.f1.dv3[3851], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3884] = 1.0;
  memset(&SD->u1.f1.dv3[3885], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3918] = t44;
  memset(&SD->u1.f1.dv3[3919], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3952] = t44;
  memset(&SD->u1.f1.dv3[3953], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[4125] = -1.0;
  memset(&SD->u1.f1.dv3[4126], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4159] = 1.0;
  memset(&SD->u1.f1.dv3[4160], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4193] = t47;
  memset(&SD->u1.f1.dv3[4194], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4227] = t47;
  memset(&SD->u1.f1.dv3[4228], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[4400] = -1.0;
  memset(&SD->u1.f1.dv3[4401], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4434] = 1.0;
  memset(&SD->u1.f1.dv3[4435], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4468] = t50;
  memset(&SD->u1.f1.dv3[4469], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4502] = t50;
  memset(&SD->u1.f1.dv3[4503], 0, 172U * sizeof(real_T));
  SD->u1.f1.dv3[4675] = -1.0;
  memset(&SD->u1.f1.dv3[4676], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4709] = 1.0;
  memset(&SD->u1.f1.dv3[4710], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[4726] = t3;
  memset(&SD->u1.f1.dv3[4727], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4760] = t3;
  memset(&SD->u1.f1.dv3[4761], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[4950] = -1.0;
  memset(&SD->u1.f1.dv3[4951], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4984] = 1.0;
  memset(&SD->u1.f1.dv3[4985], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5001] = t6;
  memset(&SD->u1.f1.dv3[5002], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5035] = t6;
  memset(&SD->u1.f1.dv3[5036], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[5225] = -1.0;
  memset(&SD->u1.f1.dv3[5226], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5259] = 1.0;
  memset(&SD->u1.f1.dv3[5260], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5276] = t9;
  memset(&SD->u1.f1.dv3[5277], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5310] = t9;
  memset(&SD->u1.f1.dv3[5311], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[5500] = -1.0;
  memset(&SD->u1.f1.dv3[5501], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5534] = 1.0;
  memset(&SD->u1.f1.dv3[5535], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5551] = t12;
  memset(&SD->u1.f1.dv3[5552], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5585] = t12;
  memset(&SD->u1.f1.dv3[5586], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[5775] = -1.0;
  memset(&SD->u1.f1.dv3[5776], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5809] = 1.0;
  memset(&SD->u1.f1.dv3[5810], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5826] = t15;
  memset(&SD->u1.f1.dv3[5827], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5860] = t15;
  memset(&SD->u1.f1.dv3[5861], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[6050] = -1.0;
  memset(&SD->u1.f1.dv3[6051], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6084] = 1.0;
  memset(&SD->u1.f1.dv3[6085], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6101] = t18;
  memset(&SD->u1.f1.dv3[6102], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6135] = t18;
  memset(&SD->u1.f1.dv3[6136], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[6325] = -1.0;
  memset(&SD->u1.f1.dv3[6326], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6359] = 1.0;
  memset(&SD->u1.f1.dv3[6360], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6376] = t21;
  memset(&SD->u1.f1.dv3[6377], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6410] = t21;
  memset(&SD->u1.f1.dv3[6411], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[6600] = -1.0;
  memset(&SD->u1.f1.dv3[6601], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6634] = 1.0;
  memset(&SD->u1.f1.dv3[6635], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6651] = t24;
  memset(&SD->u1.f1.dv3[6652], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6685] = t24;
  memset(&SD->u1.f1.dv3[6686], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[6875] = -1.0;
  memset(&SD->u1.f1.dv3[6876], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6909] = 1.0;
  memset(&SD->u1.f1.dv3[6910], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6926] = t27;
  memset(&SD->u1.f1.dv3[6927], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6960] = t27;
  memset(&SD->u1.f1.dv3[6961], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[7150] = -1.0;
  memset(&SD->u1.f1.dv3[7151], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7184] = 1.0;
  memset(&SD->u1.f1.dv3[7185], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7201] = t30;
  memset(&SD->u1.f1.dv3[7202], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7235] = t30;
  memset(&SD->u1.f1.dv3[7236], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[7425] = -1.0;
  memset(&SD->u1.f1.dv3[7426], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7459] = 1.0;
  memset(&SD->u1.f1.dv3[7460], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7476] = t33;
  memset(&SD->u1.f1.dv3[7477], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7510] = t33;
  memset(&SD->u1.f1.dv3[7511], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[7700] = -1.0;
  memset(&SD->u1.f1.dv3[7701], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7734] = 1.0;
  memset(&SD->u1.f1.dv3[7735], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7751] = t36;
  memset(&SD->u1.f1.dv3[7752], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7785] = t36;
  memset(&SD->u1.f1.dv3[7786], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[7975] = -1.0;
  memset(&SD->u1.f1.dv3[7976], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8009] = 1.0;
  memset(&SD->u1.f1.dv3[8010], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8026] = t39;
  memset(&SD->u1.f1.dv3[8027], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8060] = t39;
  memset(&SD->u1.f1.dv3[8061], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[8250] = -1.0;
  memset(&SD->u1.f1.dv3[8251], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8284] = 1.0;
  memset(&SD->u1.f1.dv3[8285], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8301] = t42;
  memset(&SD->u1.f1.dv3[8302], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8335] = t42;
  memset(&SD->u1.f1.dv3[8336], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[8525] = -1.0;
  memset(&SD->u1.f1.dv3[8526], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8559] = 1.0;
  memset(&SD->u1.f1.dv3[8560], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8576] = t45;
  memset(&SD->u1.f1.dv3[8577], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8610] = t45;
  memset(&SD->u1.f1.dv3[8611], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[8800] = -1.0;
  memset(&SD->u1.f1.dv3[8801], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8834] = 1.0;
  memset(&SD->u1.f1.dv3[8835], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8851] = t48;
  memset(&SD->u1.f1.dv3[8852], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8885] = t48;
  memset(&SD->u1.f1.dv3[8886], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv3[9075] = -1.0;
  memset(&SD->u1.f1.dv3[9076], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9109] = 1.0;
  memset(&SD->u1.f1.dv3[9110], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9126] = t51;
  memset(&SD->u1.f1.dv3[9127], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9160] = t51;
  memset(&SD->u1.f1.dv3[9161], 0, 223U * sizeof(real_T));
  SD->u1.f1.dv3[9384] = t4;
  memset(&SD->u1.f1.dv3[9385], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9418] = t4;
  memset(&SD->u1.f1.dv3[9419], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[9659] = t7;
  memset(&SD->u1.f1.dv3[9660], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9693] = t7;
  memset(&SD->u1.f1.dv3[9694], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[9934] = t10;
  memset(&SD->u1.f1.dv3[9935], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9968] = t10;
  memset(&SD->u1.f1.dv3[9969], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[10209] = t13;
  memset(&SD->u1.f1.dv3[10210], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10243] = t13;
  memset(&SD->u1.f1.dv3[10244], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[10484] = t16;
  memset(&SD->u1.f1.dv3[10485], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10518] = t16;
  memset(&SD->u1.f1.dv3[10519], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[10759] = t19;
  memset(&SD->u1.f1.dv3[10760], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10793] = t19;
  memset(&SD->u1.f1.dv3[10794], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[11034] = t22;
  memset(&SD->u1.f1.dv3[11035], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11068] = t22;
  memset(&SD->u1.f1.dv3[11069], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[11309] = t25;
  memset(&SD->u1.f1.dv3[11310], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11343] = t25;
  memset(&SD->u1.f1.dv3[11344], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[11584] = t28;
  memset(&SD->u1.f1.dv3[11585], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11618] = t28;
  memset(&SD->u1.f1.dv3[11619], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[11859] = t31;
  memset(&SD->u1.f1.dv3[11860], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11893] = t31;
  memset(&SD->u1.f1.dv3[11894], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[12134] = t34;
  memset(&SD->u1.f1.dv3[12135], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12168] = t34;
  memset(&SD->u1.f1.dv3[12169], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[12409] = t37;
  memset(&SD->u1.f1.dv3[12410], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12443] = t37;
  memset(&SD->u1.f1.dv3[12444], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[12684] = t40;
  memset(&SD->u1.f1.dv3[12685], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12718] = t40;
  memset(&SD->u1.f1.dv3[12719], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[12959] = t43;
  memset(&SD->u1.f1.dv3[12960], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12993] = t43;
  memset(&SD->u1.f1.dv3[12994], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[13234] = t46;
  memset(&SD->u1.f1.dv3[13235], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13268] = t46;
  memset(&SD->u1.f1.dv3[13269], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[13509] = t49;
  memset(&SD->u1.f1.dv3[13510], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13543] = t49;
  memset(&SD->u1.f1.dv3[13544], 0, 240U * sizeof(real_T));
  SD->u1.f1.dv3[13784] = t52;
  memset(&SD->u1.f1.dv3[13785], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13818] = t52;
  memset(&SD->u1.f1.dv3[13819], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv3[13974] = 1.0;
  memset(&SD->u1.f1.dv3[13975], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14008] = -1.0;
  memset(&SD->u1.f1.dv3[14009], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14093] = 1.0;
  SD->u1.f1.dv3[14094] = 0.0;
  SD->u1.f1.dv3[14095] = -1.0;
  memset(&SD->u1.f1.dv3[14096], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[14112] = 1.0;
  memset(&SD->u1.f1.dv3[14113], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14146] = -1.0;
  memset(&SD->u1.f1.dv3[14147], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14231] = 1.0;
  SD->u1.f1.dv3[14232] = 0.0;
  SD->u1.f1.dv3[14233] = -1.0;
  memset(&SD->u1.f1.dv3[14234], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[14250] = 1.0;
  memset(&SD->u1.f1.dv3[14251], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14284] = -1.0;
  memset(&SD->u1.f1.dv3[14285], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[14388] = 1.0;
  memset(&SD->u1.f1.dv3[14389], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14422] = -1.0;
  memset(&SD->u1.f1.dv3[14423], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[14526] = 1.0;
  memset(&SD->u1.f1.dv3[14527], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14560] = -1.0;
  memset(&SD->u1.f1.dv3[14561], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[14664] = 1.0;
  memset(&SD->u1.f1.dv3[14665], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14698] = -1.0;
  memset(&SD->u1.f1.dv3[14699], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[14802] = 1.0;
  memset(&SD->u1.f1.dv3[14803], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14836] = -1.0;
  memset(&SD->u1.f1.dv3[14837], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[14940] = 1.0;
  memset(&SD->u1.f1.dv3[14941], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14974] = -1.0;
  memset(&SD->u1.f1.dv3[14975], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[15078] = 1.0;
  memset(&SD->u1.f1.dv3[15079], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15112] = -1.0;
  memset(&SD->u1.f1.dv3[15113], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[15216] = 1.0;
  memset(&SD->u1.f1.dv3[15217], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15250] = -1.0;
  memset(&SD->u1.f1.dv3[15251], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[15354] = 1.0;
  memset(&SD->u1.f1.dv3[15355], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15388] = -1.0;
  memset(&SD->u1.f1.dv3[15389], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[15492] = 1.0;
  memset(&SD->u1.f1.dv3[15493], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15526] = -1.0;
  memset(&SD->u1.f1.dv3[15527], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[15630] = 1.0;
  memset(&SD->u1.f1.dv3[15631], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15664] = -1.0;
  memset(&SD->u1.f1.dv3[15665], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[15768] = 1.0;
  memset(&SD->u1.f1.dv3[15769], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15802] = -1.0;
  memset(&SD->u1.f1.dv3[15803], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[15906] = 1.0;
  memset(&SD->u1.f1.dv3[15907], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15940] = -1.0;
  memset(&SD->u1.f1.dv3[15941], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[16044] = 1.0;
  memset(&SD->u1.f1.dv3[16045], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16078] = -1.0;
  memset(&SD->u1.f1.dv3[16079], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[16182] = 1.0;
  memset(&SD->u1.f1.dv3[16183], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16216] = -1.0;
  memset(&SD->u1.f1.dv3[16217], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[16320] = 1.0;
  memset(&SD->u1.f1.dv3[16321], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16354] = -1.0;
  memset(&SD->u1.f1.dv3[16355], 0, 71U * sizeof(real_T));
  SD->u1.f1.dv3[16426] = 1.0;
  SD->u1.f1.dv3[16427] = 0.0;
  SD->u1.f1.dv3[16428] = -1.0;
  memset(&SD->u1.f1.dv3[16429], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv3[16458] = 1.0;
  memset(&SD->u1.f1.dv3[16459], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16492] = -1.0;
  memset(&SD->u1.f1.dv3[16493], 0, 71U * sizeof(real_T));
  SD->u1.f1.dv3[16564] = 1.0;
  SD->u1.f1.dv3[16565] = 0.0;
  SD->u1.f1.dv3[16566] = -1.0;
  memset(&SD->u1.f1.dv3[16567], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv3[16596] = 1.0;
  memset(&SD->u1.f1.dv3[16597], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16630] = -1.0;
  memset(&SD->u1.f1.dv3[16631], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[16734] = 1.0;
  memset(&SD->u1.f1.dv3[16735], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16768] = -1.0;
  memset(&SD->u1.f1.dv3[16769], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[16872] = 1.0;
  memset(&SD->u1.f1.dv3[16873], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16906] = -1.0;
  memset(&SD->u1.f1.dv3[16907], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17010] = 1.0;
  memset(&SD->u1.f1.dv3[17011], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17044] = -1.0;
  memset(&SD->u1.f1.dv3[17045], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17148] = 1.0;
  memset(&SD->u1.f1.dv3[17149], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17182] = -1.0;
  memset(&SD->u1.f1.dv3[17183], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17286] = 1.0;
  memset(&SD->u1.f1.dv3[17287], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17320] = -1.0;
  memset(&SD->u1.f1.dv3[17321], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17424] = 1.0;
  memset(&SD->u1.f1.dv3[17425], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17458] = -1.0;
  memset(&SD->u1.f1.dv3[17459], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17562] = 1.0;
  memset(&SD->u1.f1.dv3[17563], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17596] = -1.0;
  memset(&SD->u1.f1.dv3[17597], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17700] = 1.0;
  memset(&SD->u1.f1.dv3[17701], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17734] = -1.0;
  memset(&SD->u1.f1.dv3[17735], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17838] = 1.0;
  memset(&SD->u1.f1.dv3[17839], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17872] = -1.0;
  memset(&SD->u1.f1.dv3[17873], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[17976] = 1.0;
  memset(&SD->u1.f1.dv3[17977], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18010] = -1.0;
  memset(&SD->u1.f1.dv3[18011], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[18114] = 1.0;
  memset(&SD->u1.f1.dv3[18115], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18148] = -1.0;
  memset(&SD->u1.f1.dv3[18149], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[18252] = 1.0;
  memset(&SD->u1.f1.dv3[18253], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18286] = -1.0;
  memset(&SD->u1.f1.dv3[18287], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[18390] = 1.0;
  memset(&SD->u1.f1.dv3[18391], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18424] = -1.0;
  memset(&SD->u1.f1.dv3[18425], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv3[18528] = 1.0;
  memset(&SD->u1.f1.dv3[18529], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18562] = -1.0;
  memset(&SD->u1.f1.dv3[18563], 0, 3579U * sizeof(real_T));
  SD->u1.f1.dv3[22142] = -1.0;
  memset(&SD->u1.f1.dv3[22143], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22159] = -1.0;
  memset(&SD->u1.f1.dv3[22160], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[22280] = -1.0;
  memset(&SD->u1.f1.dv3[22281], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22297] = -1.0;
  memset(&SD->u1.f1.dv3[22298], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[22418] = -1.0;
  memset(&SD->u1.f1.dv3[22419], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22435] = -1.0;
  memset(&SD->u1.f1.dv3[22436], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[22556] = -1.0;
  memset(&SD->u1.f1.dv3[22557], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22573] = -1.0;
  memset(&SD->u1.f1.dv3[22574], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[22694] = -1.0;
  memset(&SD->u1.f1.dv3[22695], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22711] = -1.0;
  memset(&SD->u1.f1.dv3[22712], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[22832] = -1.0;
  memset(&SD->u1.f1.dv3[22833], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22849] = -1.0;
  memset(&SD->u1.f1.dv3[22850], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[22970] = -1.0;
  memset(&SD->u1.f1.dv3[22971], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22987] = -1.0;
  memset(&SD->u1.f1.dv3[22988], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[23108] = -1.0;
  memset(&SD->u1.f1.dv3[23109], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23125] = -1.0;
  memset(&SD->u1.f1.dv3[23126], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[23246] = -1.0;
  memset(&SD->u1.f1.dv3[23247], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23263] = -1.0;
  memset(&SD->u1.f1.dv3[23264], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[23384] = -1.0;
  memset(&SD->u1.f1.dv3[23385], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23401] = -1.0;
  memset(&SD->u1.f1.dv3[23402], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[23522] = -1.0;
  memset(&SD->u1.f1.dv3[23523], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23539] = -1.0;
  memset(&SD->u1.f1.dv3[23540], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[23660] = -1.0;
  memset(&SD->u1.f1.dv3[23661], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23677] = -1.0;
  memset(&SD->u1.f1.dv3[23678], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[23798] = -1.0;
  memset(&SD->u1.f1.dv3[23799], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23815] = -1.0;
  memset(&SD->u1.f1.dv3[23816], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[23936] = -1.0;
  memset(&SD->u1.f1.dv3[23937], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23953] = -1.0;
  memset(&SD->u1.f1.dv3[23954], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[24074] = -1.0;
  memset(&SD->u1.f1.dv3[24075], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24091] = -1.0;
  memset(&SD->u1.f1.dv3[24092], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[24212] = -1.0;
  memset(&SD->u1.f1.dv3[24213], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24229] = -1.0;
  memset(&SD->u1.f1.dv3[24230], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv3[24350] = -1.0;
  memset(&SD->u1.f1.dv3[24351], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24367] = -1.0;
  memset(&SD->u1.f1.dv3[24368], 0, 2466U * sizeof(real_T));
  SD->u1.f1.dv3[26834] = -1.0;
  SD->u1.f1.dv3[26835] = 0.0;
  SD->u1.f1.dv3[26836] = -1.0;
  memset(&SD->u1.f1.dv3[26837], 0, 135U * sizeof(real_T));
  SD->u1.f1.dv3[26972] = -1.0;
  SD->u1.f1.dv3[26973] = 0.0;
  SD->u1.f1.dv3[26974] = -1.0;
  memset(&SD->u1.f1.dv3[26975], 0, 411U * sizeof(real_T));
  SD->u1.f1.dv3[27386] = -1.0;
  SD->u1.f1.dv3[27387] = 0.0;
  SD->u1.f1.dv3[27388] = -1.0;
  memset(&SD->u1.f1.dv3[27389], 0, 135U * sizeof(real_T));
  SD->u1.f1.dv3[27524] = -1.0;
  SD->u1.f1.dv3[27525] = 0.0;
  SD->u1.f1.dv3[27526] = -1.0;
  memset(&SD->u1.f1.dv3[27527], 0, 822U * sizeof(real_T));
  SD->u1.f1.dv3[28349] = t53;
  SD->u1.f1.dv3[28350] = 0.0;
  SD->u1.f1.dv3[28351] = t53;
  memset(&SD->u1.f1.dv3[28352], 0, 135U * sizeof(real_T));
  SD->u1.f1.dv3[28487] = t56;
  SD->u1.f1.dv3[28488] = 0.0;
  SD->u1.f1.dv3[28489] = t56;
  memset(&SD->u1.f1.dv3[28490], 0, 544U * sizeof(real_T));
  SD->u1.f1.dv3[29034] = t54;
  SD->u1.f1.dv3[29035] = 0.0;
  SD->u1.f1.dv3[29036] = t54;
  memset(&SD->u1.f1.dv3[29037], 0, 135U * sizeof(real_T));
  SD->u1.f1.dv3[29172] = t57;
  SD->u1.f1.dv3[29173] = 0.0;
  SD->u1.f1.dv3[29174] = t57;
  memset(&SD->u1.f1.dv3[29175], 0, 544U * sizeof(real_T));
  SD->u1.f1.dv3[29719] = t55;
  SD->u1.f1.dv3[29720] = 0.0;
  SD->u1.f1.dv3[29721] = t55;
  memset(&SD->u1.f1.dv3[29722], 0, 135U * sizeof(real_T));
  SD->u1.f1.dv3[29857] = t58;
  SD->u1.f1.dv3[29858] = 0.0;
  SD->u1.f1.dv3[29859] = t58;
  memset(&SD->u1.f1.dv3[29860], 0, 407U * sizeof(real_T));
  SD->u1.f1.dv3[30267] = -1.0;
  memset(&SD->u1.f1.dv3[30268], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[30405] = -1.0;
  memset(&SD->u1.f1.dv3[30406], 0, 1372U * sizeof(real_T));
  SD->u1.f1.dv3[31778] = t59;
  SD->u1.f1.dv3[31779] = t59;
  memset(&SD->u1.f1.dv3[31780], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[31917] = t61;
  SD->u1.f1.dv3[31918] = t61;
  memset(&SD->u1.f1.dv3[31919], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[32056] = t63;
  SD->u1.f1.dv3[32057] = t63;
  memset(&SD->u1.f1.dv3[32058], 0, 268U * sizeof(real_T));
  SD->u1.f1.dv3[32326] = t60;
  SD->u1.f1.dv3[32327] = t60;
  memset(&SD->u1.f1.dv3[32328], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[32465] = t62;
  SD->u1.f1.dv3[32466] = t62;
  memset(&SD->u1.f1.dv3[32467], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[32604] = t64;
  SD->u1.f1.dv3[32605] = t64;
  memset(&SD->u1.f1.dv3[32606], 0, 269U * sizeof(real_T));
  SD->u1.f1.dv3[32875] = -1.0;
  memset(&SD->u1.f1.dv3[32876], 0, 138U * sizeof(real_T));
  SD->u1.f1.dv3[33014] = -1.0;
  memset(&SD->u1.f1.dv3[33015], 0, 138U * sizeof(real_T));
  SD->u1.f1.dv3[33153] = -1.0;
  for (i0 = 0; i0 < 242; i0++) {
    memcpy(&Aiq[i0 * 137], &SD->u1.f1.dv3[i0 * 137], 137U * sizeof(real_T));
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
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t61);
  t2 = muDoubleScalarAbs(t62);
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t5 = 1.0 / t2;
  a = muDoubleScalarAbs(t63);
  t2 = muDoubleScalarAbs(t64);
  t2 = a * a + t2 * t2;
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
  biq[121] = t23;
  biq[122] = t23;
  biq[123] = t26;
  biq[124] = t26;
  biq[125] = t29;
  biq[126] = t29;
  biq[127] = (t53 * (in15[0] - in9->data[1] * t53 * t14) + t54 * (in15[1] -
    in9->data[1] * t54 * t14)) + t55 * (in15[2] - in9->data[1] * t55 * t14);
  biq[128] = (t56 * (in15[3] - in9->data[1] * t56 * t11) + t57 * (in15[4] -
    in9->data[1] * t57 * t11)) + t58 * (in15[5] - in9->data[1] * t58 * t11);
  biq[129] = (t53 * (in15[0] - in8->data[1] * t53 * t14) + t54 * (in15[1] -
    in8->data[1] * t54 * t14)) + t55 * (in15[2] - in8->data[1] * t55 * t14);
  biq[130] = (t56 * (in15[3] - in8->data[1] * t56 * t11) + t57 * (in15[4] -
    in8->data[1] * t57 * t11)) + t58 * (in15[5] - in8->data[1] * t58 * t11);
  biq[131] = t59 * (in18[2] - in19[1] * t59 * t8) + t60 * (in18[3] - in19[1] *
    t60 * t8);
  biq[132] = t59 * (in18[2] - in19[5] * t59 * t8) + t60 * (in18[3] - in19[5] *
    t60 * t8);
  biq[133] = t61 * (in18[4] - in19[2] * t61 * t5) + t62 * (in18[5] - in19[2] *
    t62 * t5);
  biq[134] = t61 * (in18[4] - in19[6] * t61 * t5) + t62 * (in18[5] - in19[6] *
    t62 * t5);
  biq[135] = t63 * (in18[6] - in19[3] * t63 * t2) + t64 * (in18[7] - in19[3] *
    t64 * t2);
  biq[136] = t63 * (in18[6] - in19[7] * t63 * t2) + t64 * (in18[7] - in19[7] *
    t64 * t2);
}

/* End of code generation (Iq_LeftStart23DFootV99.cpp) */
