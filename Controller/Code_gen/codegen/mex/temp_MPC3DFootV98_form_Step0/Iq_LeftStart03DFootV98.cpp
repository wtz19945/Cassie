/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart03DFootV98.cpp
 *
 * Code generation for function 'Iq_LeftStart03DFootV98'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step0.h"
#include "Iq_LeftStart03DFootV98.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart03DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart03DFootV98(c_temp_MPC3DFootV98_form_Step0S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[4], real_T Aiq[34748],
  real_T biq[146])
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
  real_T t67;
  real_T t68;
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
  real_T t181;
  real_T t182;
  real_T t190;
  real_T t191;
  real_T t199;
  real_T t200;
  real_T t208;
  real_T t209;
  real_T t217;
  real_T t218;
  real_T t219;
  real_T t220;
  real_T t221;
  real_T t229;
  real_T t237;
  real_T t245;
  real_T t253;
  real_T t254;
  real_T t256;
  real_T t261;
  real_T t262;
  real_T t264;
  real_T t270;
  real_T t272;

  /* IQ_LEFTSTART03DFOOTV98 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART03DFOOTV98(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Jul-2023 15:24:14 */
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
  t65 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t65);
  t67 = muDoubleScalarAbs(t3);
  t68 = muDoubleScalarAbs(t4);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t73 = 1.0 / t67;
  t74 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t74);
  t67 = muDoubleScalarAbs(t6);
  t68 = muDoubleScalarAbs(t7);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t82 = 1.0 / t67;
  t83 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t83);
  t67 = muDoubleScalarAbs(t9);
  t68 = muDoubleScalarAbs(t10);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t91 = 1.0 / t67;
  t92 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t92);
  t67 = muDoubleScalarAbs(t12);
  t68 = muDoubleScalarAbs(t13);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t100 = 1.0 / t67;
  t101 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t101);
  t67 = muDoubleScalarAbs(t15);
  t68 = muDoubleScalarAbs(t16);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t109 = 1.0 / t67;
  t110 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t110);
  t67 = muDoubleScalarAbs(t18);
  t68 = muDoubleScalarAbs(t19);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t118 = 1.0 / t67;
  t119 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t119);
  t67 = muDoubleScalarAbs(t21);
  t68 = muDoubleScalarAbs(t22);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t127 = 1.0 / t67;
  t128 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t128);
  t67 = muDoubleScalarAbs(t24);
  t68 = muDoubleScalarAbs(t25);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t136 = 1.0 / t67;
  t137 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t137);
  t67 = muDoubleScalarAbs(t27);
  t68 = muDoubleScalarAbs(t28);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t145 = 1.0 / t67;
  t146 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t146);
  t67 = muDoubleScalarAbs(t30);
  t68 = muDoubleScalarAbs(t31);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t154 = 1.0 / t67;
  t155 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t155);
  t67 = muDoubleScalarAbs(t33);
  t68 = muDoubleScalarAbs(t34);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t163 = 1.0 / t67;
  t164 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t164);
  t67 = muDoubleScalarAbs(t36);
  t68 = muDoubleScalarAbs(t37);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t172 = 1.0 / t67;
  t173 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t173);
  t67 = muDoubleScalarAbs(t39);
  t68 = muDoubleScalarAbs(t40);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t181 = 1.0 / t67;
  t182 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t182);
  t67 = muDoubleScalarAbs(t42);
  t68 = muDoubleScalarAbs(t43);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t190 = 1.0 / t67;
  t191 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t191);
  t67 = muDoubleScalarAbs(t45);
  t68 = muDoubleScalarAbs(t46);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t199 = 1.0 / t67;
  t200 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t200);
  t67 = muDoubleScalarAbs(t48);
  t68 = muDoubleScalarAbs(t49);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t208 = 1.0 / t67;
  t209 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t209);
  t67 = muDoubleScalarAbs(t51);
  t68 = muDoubleScalarAbs(t52);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t217 = 1.0 / t67;
  t218 = Cpx1 + in12[0];
  t219 = -Cpx1 + in12[0];
  t220 = Cpy1 + in13[0];
  t221 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t67 = muDoubleScalarAbs(t54);
  t68 = muDoubleScalarAbs(t55);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t229 = 1.0 / t67;
  a = muDoubleScalarAbs(t56);
  t67 = muDoubleScalarAbs(t57);
  t68 = muDoubleScalarAbs(t58);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t237 = 1.0 / t67;
  a = muDoubleScalarAbs(t59);
  t67 = muDoubleScalarAbs(t60);
  t68 = muDoubleScalarAbs(t61);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t245 = 1.0 / t67;
  a = muDoubleScalarAbs(t62);
  t67 = muDoubleScalarAbs(t63);
  t68 = muDoubleScalarAbs(t64);
  t67 = (a * a + t67 * t67) + t68 * t68;
  b_sqrt(&t67);
  t253 = 1.0 / t67;
  t254 = in18[2] - in16[1];
  a = muDoubleScalarAbs(t254);
  t256 = in18[3] - in17[1];
  t67 = muDoubleScalarAbs(t256);
  t67 = a * a + t67 * t67;
  b_sqrt(&t67);
  t261 = 1.0 / t67;
  t262 = in18[4] - in16[2];
  a = muDoubleScalarAbs(t262);
  t264 = in18[5] - in17[2];
  t67 = muDoubleScalarAbs(t264);
  t67 = a * a + t67 * t67;
  b_sqrt(&t67);
  t68 = 1.0 / t67;
  t270 = in18[6] - in16[3];
  a = muDoubleScalarAbs(t270);
  t272 = in18[7] - in17[3];
  SD->u1.f1.dv3[0] = -1.0;
  memset(&SD->u1.f1.dv3[1], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[34] = 1.0;
  memset(&SD->u1.f1.dv3[35], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[68] = t2;
  memset(&SD->u1.f1.dv3[69], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[102] = t2;
  memset(&SD->u1.f1.dv3[103], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[293] = -1.0;
  memset(&SD->u1.f1.dv3[294], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[327] = 1.0;
  memset(&SD->u1.f1.dv3[328], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[361] = t5;
  memset(&SD->u1.f1.dv3[362], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[395] = t5;
  memset(&SD->u1.f1.dv3[396], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[586] = -1.0;
  memset(&SD->u1.f1.dv3[587], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[620] = 1.0;
  memset(&SD->u1.f1.dv3[621], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[654] = t8;
  memset(&SD->u1.f1.dv3[655], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[688] = t8;
  memset(&SD->u1.f1.dv3[689], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[879] = -1.0;
  memset(&SD->u1.f1.dv3[880], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[913] = 1.0;
  memset(&SD->u1.f1.dv3[914], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[947] = t11;
  memset(&SD->u1.f1.dv3[948], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[981] = t11;
  memset(&SD->u1.f1.dv3[982], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[1172] = -1.0;
  memset(&SD->u1.f1.dv3[1173], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1206] = 1.0;
  memset(&SD->u1.f1.dv3[1207], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1240] = t14;
  memset(&SD->u1.f1.dv3[1241], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1274] = t14;
  memset(&SD->u1.f1.dv3[1275], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[1465] = -1.0;
  memset(&SD->u1.f1.dv3[1466], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1499] = 1.0;
  memset(&SD->u1.f1.dv3[1500], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1533] = t17;
  memset(&SD->u1.f1.dv3[1534], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1567] = t17;
  memset(&SD->u1.f1.dv3[1568], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[1758] = -1.0;
  memset(&SD->u1.f1.dv3[1759], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1792] = 1.0;
  memset(&SD->u1.f1.dv3[1793], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1826] = t20;
  memset(&SD->u1.f1.dv3[1827], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1860] = t20;
  memset(&SD->u1.f1.dv3[1861], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[2051] = -1.0;
  memset(&SD->u1.f1.dv3[2052], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2085] = 1.0;
  memset(&SD->u1.f1.dv3[2086], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2119] = t23;
  memset(&SD->u1.f1.dv3[2120], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2153] = t23;
  memset(&SD->u1.f1.dv3[2154], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[2344] = -1.0;
  memset(&SD->u1.f1.dv3[2345], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2378] = 1.0;
  memset(&SD->u1.f1.dv3[2379], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2412] = t26;
  memset(&SD->u1.f1.dv3[2413], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2446] = t26;
  memset(&SD->u1.f1.dv3[2447], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[2637] = -1.0;
  memset(&SD->u1.f1.dv3[2638], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2671] = 1.0;
  memset(&SD->u1.f1.dv3[2672], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2705] = t29;
  memset(&SD->u1.f1.dv3[2706], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2739] = t29;
  memset(&SD->u1.f1.dv3[2740], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[2930] = -1.0;
  memset(&SD->u1.f1.dv3[2931], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2964] = 1.0;
  memset(&SD->u1.f1.dv3[2965], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2998] = t32;
  memset(&SD->u1.f1.dv3[2999], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3032] = t32;
  memset(&SD->u1.f1.dv3[3033], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[3223] = -1.0;
  memset(&SD->u1.f1.dv3[3224], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3257] = 1.0;
  memset(&SD->u1.f1.dv3[3258], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3291] = t35;
  memset(&SD->u1.f1.dv3[3292], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3325] = t35;
  memset(&SD->u1.f1.dv3[3326], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[3516] = -1.0;
  memset(&SD->u1.f1.dv3[3517], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3550] = 1.0;
  memset(&SD->u1.f1.dv3[3551], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3584] = t38;
  memset(&SD->u1.f1.dv3[3585], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3618] = t38;
  memset(&SD->u1.f1.dv3[3619], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[3809] = -1.0;
  memset(&SD->u1.f1.dv3[3810], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3843] = 1.0;
  memset(&SD->u1.f1.dv3[3844], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3877] = t41;
  memset(&SD->u1.f1.dv3[3878], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3911] = t41;
  memset(&SD->u1.f1.dv3[3912], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[4102] = -1.0;
  memset(&SD->u1.f1.dv3[4103], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4136] = 1.0;
  memset(&SD->u1.f1.dv3[4137], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4170] = t44;
  memset(&SD->u1.f1.dv3[4171], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4204] = t44;
  memset(&SD->u1.f1.dv3[4205], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[4395] = -1.0;
  memset(&SD->u1.f1.dv3[4396], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4429] = 1.0;
  memset(&SD->u1.f1.dv3[4430], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4463] = t47;
  memset(&SD->u1.f1.dv3[4464], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4497] = t47;
  memset(&SD->u1.f1.dv3[4498], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[4688] = -1.0;
  memset(&SD->u1.f1.dv3[4689], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4722] = 1.0;
  memset(&SD->u1.f1.dv3[4723], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4756] = t50;
  memset(&SD->u1.f1.dv3[4757], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4790] = t50;
  memset(&SD->u1.f1.dv3[4791], 0, 190U * sizeof(real_T));
  SD->u1.f1.dv3[4981] = -1.0;
  memset(&SD->u1.f1.dv3[4982], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5015] = 1.0;
  memset(&SD->u1.f1.dv3[5016], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5032] = t3;
  memset(&SD->u1.f1.dv3[5033], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5066] = t3;
  memset(&SD->u1.f1.dv3[5067], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[5274] = -1.0;
  memset(&SD->u1.f1.dv3[5275], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5308] = 1.0;
  memset(&SD->u1.f1.dv3[5309], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5325] = t6;
  memset(&SD->u1.f1.dv3[5326], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5359] = t6;
  memset(&SD->u1.f1.dv3[5360], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[5567] = -1.0;
  memset(&SD->u1.f1.dv3[5568], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5601] = 1.0;
  memset(&SD->u1.f1.dv3[5602], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5618] = t9;
  memset(&SD->u1.f1.dv3[5619], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5652] = t9;
  memset(&SD->u1.f1.dv3[5653], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[5860] = -1.0;
  memset(&SD->u1.f1.dv3[5861], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5894] = 1.0;
  memset(&SD->u1.f1.dv3[5895], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5911] = t12;
  memset(&SD->u1.f1.dv3[5912], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5945] = t12;
  memset(&SD->u1.f1.dv3[5946], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[6153] = -1.0;
  memset(&SD->u1.f1.dv3[6154], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6187] = 1.0;
  memset(&SD->u1.f1.dv3[6188], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6204] = t15;
  memset(&SD->u1.f1.dv3[6205], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6238] = t15;
  memset(&SD->u1.f1.dv3[6239], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[6446] = -1.0;
  memset(&SD->u1.f1.dv3[6447], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6480] = 1.0;
  memset(&SD->u1.f1.dv3[6481], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6497] = t18;
  memset(&SD->u1.f1.dv3[6498], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6531] = t18;
  memset(&SD->u1.f1.dv3[6532], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[6739] = -1.0;
  memset(&SD->u1.f1.dv3[6740], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6773] = 1.0;
  memset(&SD->u1.f1.dv3[6774], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6790] = t21;
  memset(&SD->u1.f1.dv3[6791], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6824] = t21;
  memset(&SD->u1.f1.dv3[6825], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[7032] = -1.0;
  memset(&SD->u1.f1.dv3[7033], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7066] = 1.0;
  memset(&SD->u1.f1.dv3[7067], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7083] = t24;
  memset(&SD->u1.f1.dv3[7084], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7117] = t24;
  memset(&SD->u1.f1.dv3[7118], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[7325] = -1.0;
  memset(&SD->u1.f1.dv3[7326], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7359] = 1.0;
  memset(&SD->u1.f1.dv3[7360], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7376] = t27;
  memset(&SD->u1.f1.dv3[7377], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7410] = t27;
  memset(&SD->u1.f1.dv3[7411], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[7618] = -1.0;
  memset(&SD->u1.f1.dv3[7619], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7652] = 1.0;
  memset(&SD->u1.f1.dv3[7653], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7669] = t30;
  memset(&SD->u1.f1.dv3[7670], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7703] = t30;
  memset(&SD->u1.f1.dv3[7704], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[7911] = -1.0;
  memset(&SD->u1.f1.dv3[7912], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7945] = 1.0;
  memset(&SD->u1.f1.dv3[7946], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7962] = t33;
  memset(&SD->u1.f1.dv3[7963], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7996] = t33;
  memset(&SD->u1.f1.dv3[7997], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[8204] = -1.0;
  memset(&SD->u1.f1.dv3[8205], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8238] = 1.0;
  memset(&SD->u1.f1.dv3[8239], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8255] = t36;
  memset(&SD->u1.f1.dv3[8256], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8289] = t36;
  memset(&SD->u1.f1.dv3[8290], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[8497] = -1.0;
  memset(&SD->u1.f1.dv3[8498], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8531] = 1.0;
  memset(&SD->u1.f1.dv3[8532], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8548] = t39;
  memset(&SD->u1.f1.dv3[8549], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8582] = t39;
  memset(&SD->u1.f1.dv3[8583], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[8790] = -1.0;
  memset(&SD->u1.f1.dv3[8791], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8824] = 1.0;
  memset(&SD->u1.f1.dv3[8825], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8841] = t42;
  memset(&SD->u1.f1.dv3[8842], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8875] = t42;
  memset(&SD->u1.f1.dv3[8876], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[9083] = -1.0;
  memset(&SD->u1.f1.dv3[9084], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9117] = 1.0;
  memset(&SD->u1.f1.dv3[9118], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9134] = t45;
  memset(&SD->u1.f1.dv3[9135], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9168] = t45;
  memset(&SD->u1.f1.dv3[9169], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[9376] = -1.0;
  memset(&SD->u1.f1.dv3[9377], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9410] = 1.0;
  memset(&SD->u1.f1.dv3[9411], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9427] = t48;
  memset(&SD->u1.f1.dv3[9428], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9461] = t48;
  memset(&SD->u1.f1.dv3[9462], 0, 207U * sizeof(real_T));
  SD->u1.f1.dv3[9669] = -1.0;
  memset(&SD->u1.f1.dv3[9670], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9703] = 1.0;
  memset(&SD->u1.f1.dv3[9704], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9720] = t51;
  memset(&SD->u1.f1.dv3[9721], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9754] = t51;
  memset(&SD->u1.f1.dv3[9755], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv3[9996] = t4;
  memset(&SD->u1.f1.dv3[9997], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10030] = t4;
  memset(&SD->u1.f1.dv3[10031], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[10289] = t7;
  memset(&SD->u1.f1.dv3[10290], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10323] = t7;
  memset(&SD->u1.f1.dv3[10324], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[10582] = t10;
  memset(&SD->u1.f1.dv3[10583], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10616] = t10;
  memset(&SD->u1.f1.dv3[10617], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[10875] = t13;
  memset(&SD->u1.f1.dv3[10876], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10909] = t13;
  memset(&SD->u1.f1.dv3[10910], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[11168] = t16;
  memset(&SD->u1.f1.dv3[11169], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11202] = t16;
  memset(&SD->u1.f1.dv3[11203], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[11461] = t19;
  memset(&SD->u1.f1.dv3[11462], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11495] = t19;
  memset(&SD->u1.f1.dv3[11496], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[11754] = t22;
  memset(&SD->u1.f1.dv3[11755], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11788] = t22;
  memset(&SD->u1.f1.dv3[11789], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[12047] = t25;
  memset(&SD->u1.f1.dv3[12048], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12081] = t25;
  memset(&SD->u1.f1.dv3[12082], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[12340] = t28;
  memset(&SD->u1.f1.dv3[12341], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12374] = t28;
  memset(&SD->u1.f1.dv3[12375], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[12633] = t31;
  memset(&SD->u1.f1.dv3[12634], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12667] = t31;
  memset(&SD->u1.f1.dv3[12668], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[12926] = t34;
  memset(&SD->u1.f1.dv3[12927], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12960] = t34;
  memset(&SD->u1.f1.dv3[12961], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[13219] = t37;
  memset(&SD->u1.f1.dv3[13220], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13253] = t37;
  memset(&SD->u1.f1.dv3[13254], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[13512] = t40;
  memset(&SD->u1.f1.dv3[13513], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13546] = t40;
  memset(&SD->u1.f1.dv3[13547], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[13805] = t43;
  memset(&SD->u1.f1.dv3[13806], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13839] = t43;
  memset(&SD->u1.f1.dv3[13840], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[14098] = t46;
  memset(&SD->u1.f1.dv3[14099], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14132] = t46;
  memset(&SD->u1.f1.dv3[14133], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[14391] = t49;
  memset(&SD->u1.f1.dv3[14392], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14425] = t49;
  memset(&SD->u1.f1.dv3[14426], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv3[14684] = t52;
  memset(&SD->u1.f1.dv3[14685], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14718] = t52;
  memset(&SD->u1.f1.dv3[14719], 0, 173U * sizeof(real_T));
  SD->u1.f1.dv3[14892] = 1.0;
  memset(&SD->u1.f1.dv3[14893], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14926] = -1.0;
  memset(&SD->u1.f1.dv3[14927], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[15011] = 1.0;
  SD->u1.f1.dv3[15012] = 0.0;
  SD->u1.f1.dv3[15013] = 0.0;
  SD->u1.f1.dv3[15014] = 0.0;
  SD->u1.f1.dv3[15015] = -1.0;
  memset(&SD->u1.f1.dv3[15016], 0, 23U * sizeof(real_T));
  SD->u1.f1.dv3[15039] = 1.0;
  memset(&SD->u1.f1.dv3[15040], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15073] = -1.0;
  memset(&SD->u1.f1.dv3[15074], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[15158] = 1.0;
  SD->u1.f1.dv3[15159] = 0.0;
  SD->u1.f1.dv3[15160] = 0.0;
  SD->u1.f1.dv3[15161] = 0.0;
  SD->u1.f1.dv3[15162] = -1.0;
  memset(&SD->u1.f1.dv3[15163], 0, 23U * sizeof(real_T));
  SD->u1.f1.dv3[15186] = 1.0;
  memset(&SD->u1.f1.dv3[15187], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15220] = -1.0;
  memset(&SD->u1.f1.dv3[15221], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[15305] = 1.0;
  SD->u1.f1.dv3[15306] = 0.0;
  SD->u1.f1.dv3[15307] = 0.0;
  SD->u1.f1.dv3[15308] = 0.0;
  SD->u1.f1.dv3[15309] = -1.0;
  memset(&SD->u1.f1.dv3[15310], 0, 23U * sizeof(real_T));
  SD->u1.f1.dv3[15333] = 1.0;
  memset(&SD->u1.f1.dv3[15334], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15367] = -1.0;
  memset(&SD->u1.f1.dv3[15368], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[15452] = 1.0;
  SD->u1.f1.dv3[15453] = 0.0;
  SD->u1.f1.dv3[15454] = 0.0;
  SD->u1.f1.dv3[15455] = 0.0;
  SD->u1.f1.dv3[15456] = -1.0;
  memset(&SD->u1.f1.dv3[15457], 0, 23U * sizeof(real_T));
  SD->u1.f1.dv3[15480] = 1.0;
  memset(&SD->u1.f1.dv3[15481], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15514] = -1.0;
  memset(&SD->u1.f1.dv3[15515], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[15627] = 1.0;
  memset(&SD->u1.f1.dv3[15628], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15661] = -1.0;
  memset(&SD->u1.f1.dv3[15662], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[15774] = 1.0;
  memset(&SD->u1.f1.dv3[15775], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15808] = -1.0;
  memset(&SD->u1.f1.dv3[15809], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[15921] = 1.0;
  memset(&SD->u1.f1.dv3[15922], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15955] = -1.0;
  memset(&SD->u1.f1.dv3[15956], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[16068] = 1.0;
  memset(&SD->u1.f1.dv3[16069], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16102] = -1.0;
  memset(&SD->u1.f1.dv3[16103], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[16215] = 1.0;
  memset(&SD->u1.f1.dv3[16216], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16249] = -1.0;
  memset(&SD->u1.f1.dv3[16250], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[16362] = 1.0;
  memset(&SD->u1.f1.dv3[16363], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16396] = -1.0;
  memset(&SD->u1.f1.dv3[16397], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[16509] = 1.0;
  memset(&SD->u1.f1.dv3[16510], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16543] = -1.0;
  memset(&SD->u1.f1.dv3[16544], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[16656] = 1.0;
  memset(&SD->u1.f1.dv3[16657], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16690] = -1.0;
  memset(&SD->u1.f1.dv3[16691], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[16803] = 1.0;
  memset(&SD->u1.f1.dv3[16804], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16837] = -1.0;
  memset(&SD->u1.f1.dv3[16838], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[16950] = 1.0;
  memset(&SD->u1.f1.dv3[16951], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16984] = -1.0;
  memset(&SD->u1.f1.dv3[16985], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[17097] = 1.0;
  memset(&SD->u1.f1.dv3[17098], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17131] = -1.0;
  memset(&SD->u1.f1.dv3[17132], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[17244] = 1.0;
  memset(&SD->u1.f1.dv3[17245], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17278] = -1.0;
  memset(&SD->u1.f1.dv3[17279], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[17391] = 1.0;
  memset(&SD->u1.f1.dv3[17392], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17425] = -1.0;
  memset(&SD->u1.f1.dv3[17426], 0, 75U * sizeof(real_T));
  SD->u1.f1.dv3[17501] = 1.0;
  SD->u1.f1.dv3[17502] = 0.0;
  SD->u1.f1.dv3[17503] = 0.0;
  SD->u1.f1.dv3[17504] = 0.0;
  SD->u1.f1.dv3[17505] = -1.0;
  memset(&SD->u1.f1.dv3[17506], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv3[17538] = 1.0;
  memset(&SD->u1.f1.dv3[17539], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17572] = -1.0;
  memset(&SD->u1.f1.dv3[17573], 0, 75U * sizeof(real_T));
  SD->u1.f1.dv3[17648] = 1.0;
  SD->u1.f1.dv3[17649] = 0.0;
  SD->u1.f1.dv3[17650] = 0.0;
  SD->u1.f1.dv3[17651] = 0.0;
  SD->u1.f1.dv3[17652] = -1.0;
  memset(&SD->u1.f1.dv3[17653], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv3[17685] = 1.0;
  memset(&SD->u1.f1.dv3[17686], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17719] = -1.0;
  memset(&SD->u1.f1.dv3[17720], 0, 75U * sizeof(real_T));
  SD->u1.f1.dv3[17795] = 1.0;
  SD->u1.f1.dv3[17796] = 0.0;
  SD->u1.f1.dv3[17797] = 0.0;
  SD->u1.f1.dv3[17798] = 0.0;
  SD->u1.f1.dv3[17799] = -1.0;
  memset(&SD->u1.f1.dv3[17800], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv3[17832] = 1.0;
  memset(&SD->u1.f1.dv3[17833], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17866] = -1.0;
  memset(&SD->u1.f1.dv3[17867], 0, 75U * sizeof(real_T));
  SD->u1.f1.dv3[17942] = 1.0;
  SD->u1.f1.dv3[17943] = 0.0;
  SD->u1.f1.dv3[17944] = 0.0;
  SD->u1.f1.dv3[17945] = 0.0;
  SD->u1.f1.dv3[17946] = -1.0;
  memset(&SD->u1.f1.dv3[17947], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv3[17979] = 1.0;
  memset(&SD->u1.f1.dv3[17980], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18013] = -1.0;
  memset(&SD->u1.f1.dv3[18014], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[18126] = 1.0;
  memset(&SD->u1.f1.dv3[18127], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18160] = -1.0;
  memset(&SD->u1.f1.dv3[18161], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[18273] = 1.0;
  memset(&SD->u1.f1.dv3[18274], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18307] = -1.0;
  memset(&SD->u1.f1.dv3[18308], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[18420] = 1.0;
  memset(&SD->u1.f1.dv3[18421], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18454] = -1.0;
  memset(&SD->u1.f1.dv3[18455], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[18567] = 1.0;
  memset(&SD->u1.f1.dv3[18568], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18601] = -1.0;
  memset(&SD->u1.f1.dv3[18602], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[18714] = 1.0;
  memset(&SD->u1.f1.dv3[18715], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18748] = -1.0;
  memset(&SD->u1.f1.dv3[18749], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[18861] = 1.0;
  memset(&SD->u1.f1.dv3[18862], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18895] = -1.0;
  memset(&SD->u1.f1.dv3[18896], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[19008] = 1.0;
  memset(&SD->u1.f1.dv3[19009], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19042] = -1.0;
  memset(&SD->u1.f1.dv3[19043], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[19155] = 1.0;
  memset(&SD->u1.f1.dv3[19156], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19189] = -1.0;
  memset(&SD->u1.f1.dv3[19190], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[19302] = 1.0;
  memset(&SD->u1.f1.dv3[19303], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19336] = -1.0;
  memset(&SD->u1.f1.dv3[19337], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[19449] = 1.0;
  memset(&SD->u1.f1.dv3[19450], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19483] = -1.0;
  memset(&SD->u1.f1.dv3[19484], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[19596] = 1.0;
  memset(&SD->u1.f1.dv3[19597], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19630] = -1.0;
  memset(&SD->u1.f1.dv3[19631], 0, 112U * sizeof(real_T));
  SD->u1.f1.dv3[19743] = 1.0;
  memset(&SD->u1.f1.dv3[19744], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19777] = -1.0;
  memset(&SD->u1.f1.dv3[19778], 0, 3813U * sizeof(real_T));
  SD->u1.f1.dv3[23591] = -1.0;
  memset(&SD->u1.f1.dv3[23592], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23608] = -1.0;
  memset(&SD->u1.f1.dv3[23609], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[23738] = -1.0;
  memset(&SD->u1.f1.dv3[23739], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23755] = -1.0;
  memset(&SD->u1.f1.dv3[23756], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[23885] = -1.0;
  memset(&SD->u1.f1.dv3[23886], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23902] = -1.0;
  memset(&SD->u1.f1.dv3[23903], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[24032] = -1.0;
  memset(&SD->u1.f1.dv3[24033], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24049] = -1.0;
  memset(&SD->u1.f1.dv3[24050], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[24179] = -1.0;
  memset(&SD->u1.f1.dv3[24180], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24196] = -1.0;
  memset(&SD->u1.f1.dv3[24197], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[24326] = -1.0;
  memset(&SD->u1.f1.dv3[24327], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24343] = -1.0;
  memset(&SD->u1.f1.dv3[24344], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[24473] = -1.0;
  memset(&SD->u1.f1.dv3[24474], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24490] = -1.0;
  memset(&SD->u1.f1.dv3[24491], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[24620] = -1.0;
  memset(&SD->u1.f1.dv3[24621], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24637] = -1.0;
  memset(&SD->u1.f1.dv3[24638], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[24767] = -1.0;
  memset(&SD->u1.f1.dv3[24768], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24784] = -1.0;
  memset(&SD->u1.f1.dv3[24785], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[24914] = -1.0;
  memset(&SD->u1.f1.dv3[24915], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24931] = -1.0;
  memset(&SD->u1.f1.dv3[24932], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[25061] = -1.0;
  memset(&SD->u1.f1.dv3[25062], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25078] = -1.0;
  memset(&SD->u1.f1.dv3[25079], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[25208] = -1.0;
  memset(&SD->u1.f1.dv3[25209], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25225] = -1.0;
  memset(&SD->u1.f1.dv3[25226], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[25355] = -1.0;
  memset(&SD->u1.f1.dv3[25356], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25372] = -1.0;
  memset(&SD->u1.f1.dv3[25373], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[25502] = -1.0;
  memset(&SD->u1.f1.dv3[25503], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25519] = -1.0;
  memset(&SD->u1.f1.dv3[25520], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[25649] = -1.0;
  memset(&SD->u1.f1.dv3[25650], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25666] = -1.0;
  memset(&SD->u1.f1.dv3[25667], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[25796] = -1.0;
  memset(&SD->u1.f1.dv3[25797], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25813] = -1.0;
  memset(&SD->u1.f1.dv3[25814], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv3[25943] = -1.0;
  memset(&SD->u1.f1.dv3[25944], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25960] = -1.0;
  memset(&SD->u1.f1.dv3[25961], 0, 2628U * sizeof(real_T));
  SD->u1.f1.dv3[28589] = -1.0;
  SD->u1.f1.dv3[28590] = 0.0;
  SD->u1.f1.dv3[28591] = 0.0;
  SD->u1.f1.dv3[28592] = 0.0;
  SD->u1.f1.dv3[28593] = -1.0;
  memset(&SD->u1.f1.dv3[28594], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[28736] = -1.0;
  SD->u1.f1.dv3[28737] = 0.0;
  SD->u1.f1.dv3[28738] = 0.0;
  SD->u1.f1.dv3[28739] = 0.0;
  SD->u1.f1.dv3[28740] = -1.0;
  memset(&SD->u1.f1.dv3[28741], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[28883] = -1.0;
  SD->u1.f1.dv3[28884] = 0.0;
  SD->u1.f1.dv3[28885] = 0.0;
  SD->u1.f1.dv3[28886] = 0.0;
  SD->u1.f1.dv3[28887] = -1.0;
  memset(&SD->u1.f1.dv3[28888], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[29030] = -1.0;
  SD->u1.f1.dv3[29031] = 0.0;
  SD->u1.f1.dv3[29032] = 0.0;
  SD->u1.f1.dv3[29033] = 0.0;
  SD->u1.f1.dv3[29034] = -1.0;
  memset(&SD->u1.f1.dv3[29035], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[29181] = -1.0;
  SD->u1.f1.dv3[29182] = 0.0;
  SD->u1.f1.dv3[29183] = 0.0;
  SD->u1.f1.dv3[29184] = 0.0;
  SD->u1.f1.dv3[29185] = -1.0;
  memset(&SD->u1.f1.dv3[29186], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[29328] = -1.0;
  SD->u1.f1.dv3[29329] = 0.0;
  SD->u1.f1.dv3[29330] = 0.0;
  SD->u1.f1.dv3[29331] = 0.0;
  SD->u1.f1.dv3[29332] = -1.0;
  memset(&SD->u1.f1.dv3[29333], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[29475] = -1.0;
  SD->u1.f1.dv3[29476] = 0.0;
  SD->u1.f1.dv3[29477] = 0.0;
  SD->u1.f1.dv3[29478] = 0.0;
  SD->u1.f1.dv3[29479] = -1.0;
  memset(&SD->u1.f1.dv3[29480], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[29622] = -1.0;
  SD->u1.f1.dv3[29623] = 0.0;
  SD->u1.f1.dv3[29624] = 0.0;
  SD->u1.f1.dv3[29625] = 0.0;
  SD->u1.f1.dv3[29626] = -1.0;
  memset(&SD->u1.f1.dv3[29627], 0, 292U * sizeof(real_T));
  SD->u1.f1.dv3[29919] = t53;
  SD->u1.f1.dv3[29920] = 0.0;
  SD->u1.f1.dv3[29921] = 0.0;
  SD->u1.f1.dv3[29922] = 0.0;
  SD->u1.f1.dv3[29923] = t53;
  memset(&SD->u1.f1.dv3[29924], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[30066] = t56;
  SD->u1.f1.dv3[30067] = 0.0;
  SD->u1.f1.dv3[30068] = 0.0;
  SD->u1.f1.dv3[30069] = 0.0;
  SD->u1.f1.dv3[30070] = t56;
  memset(&SD->u1.f1.dv3[30071], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[30213] = t59;
  SD->u1.f1.dv3[30214] = 0.0;
  SD->u1.f1.dv3[30215] = 0.0;
  SD->u1.f1.dv3[30216] = 0.0;
  SD->u1.f1.dv3[30217] = t59;
  memset(&SD->u1.f1.dv3[30218], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[30360] = t62;
  SD->u1.f1.dv3[30361] = 0.0;
  SD->u1.f1.dv3[30362] = 0.0;
  SD->u1.f1.dv3[30363] = 0.0;
  SD->u1.f1.dv3[30364] = t62;
  memset(&SD->u1.f1.dv3[30365], 0, 284U * sizeof(real_T));
  SD->u1.f1.dv3[30649] = t54;
  SD->u1.f1.dv3[30650] = 0.0;
  SD->u1.f1.dv3[30651] = 0.0;
  SD->u1.f1.dv3[30652] = 0.0;
  SD->u1.f1.dv3[30653] = t54;
  memset(&SD->u1.f1.dv3[30654], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[30796] = t57;
  SD->u1.f1.dv3[30797] = 0.0;
  SD->u1.f1.dv3[30798] = 0.0;
  SD->u1.f1.dv3[30799] = 0.0;
  SD->u1.f1.dv3[30800] = t57;
  memset(&SD->u1.f1.dv3[30801], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[30943] = t60;
  SD->u1.f1.dv3[30944] = 0.0;
  SD->u1.f1.dv3[30945] = 0.0;
  SD->u1.f1.dv3[30946] = 0.0;
  SD->u1.f1.dv3[30947] = t60;
  memset(&SD->u1.f1.dv3[30948], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[31090] = t63;
  SD->u1.f1.dv3[31091] = 0.0;
  SD->u1.f1.dv3[31092] = 0.0;
  SD->u1.f1.dv3[31093] = 0.0;
  SD->u1.f1.dv3[31094] = t63;
  memset(&SD->u1.f1.dv3[31095], 0, 284U * sizeof(real_T));
  SD->u1.f1.dv3[31379] = t55;
  SD->u1.f1.dv3[31380] = 0.0;
  SD->u1.f1.dv3[31381] = 0.0;
  SD->u1.f1.dv3[31382] = 0.0;
  SD->u1.f1.dv3[31383] = t55;
  memset(&SD->u1.f1.dv3[31384], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[31526] = t58;
  SD->u1.f1.dv3[31527] = 0.0;
  SD->u1.f1.dv3[31528] = 0.0;
  SD->u1.f1.dv3[31529] = 0.0;
  SD->u1.f1.dv3[31530] = t58;
  memset(&SD->u1.f1.dv3[31531], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[31673] = t61;
  SD->u1.f1.dv3[31674] = 0.0;
  SD->u1.f1.dv3[31675] = 0.0;
  SD->u1.f1.dv3[31676] = 0.0;
  SD->u1.f1.dv3[31677] = t61;
  memset(&SD->u1.f1.dv3[31678], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv3[31820] = t64;
  SD->u1.f1.dv3[31821] = 0.0;
  SD->u1.f1.dv3[31822] = 0.0;
  SD->u1.f1.dv3[31823] = 0.0;
  SD->u1.f1.dv3[31824] = t64;
  memset(&SD->u1.f1.dv3[31825], 0, 138U * sizeof(real_T));
  SD->u1.f1.dv3[31963] = -1.0;
  memset(&SD->u1.f1.dv3[31964], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[32110] = -1.0;
  memset(&SD->u1.f1.dv3[32111], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[32257] = -1.0;
  memset(&SD->u1.f1.dv3[32258], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[32404] = -1.0;
  memset(&SD->u1.f1.dv3[32405], 0, 1464U * sizeof(real_T));
  SD->u1.f1.dv3[33869] = t254;
  memset(&SD->u1.f1.dv3[33870], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[34016] = t262;
  memset(&SD->u1.f1.dv3[34017], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[34163] = t270;
  memset(&SD->u1.f1.dv3[34164], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv3[34453] = t256;
  memset(&SD->u1.f1.dv3[34454], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[34600] = t264;
  memset(&SD->u1.f1.dv3[34601], 0, 146U * sizeof(real_T));
  SD->u1.f1.dv3[34747] = t272;
  for (i0 = 0; i0 < 238; i0++) {
    memcpy(&Aiq[i0 * 146], &SD->u1.f1.dv3[i0 * 146], 146U * sizeof(real_T));
  }

  t67 = muDoubleScalarAbs(t272);
  t67 = a * a + t67 * t67;
  b_sqrt(&t67);
  t67 = 1.0 / t67;
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
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t181) + t40 * (in7[2] -
              in8->data[24] * t40 * t181)) - t173 * (in7[0] + in8->data[24] *
    t173 * t181);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t190) + t43 * (in7[2] -
              in8->data[26] * t43 * t190)) - t182 * (in7[0] + in8->data[26] *
    t182 * t190);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t199) + t46 * (in7[2] -
              in8->data[28] * t46 * t199)) - t191 * (in7[0] + in8->data[28] *
    t191 * t199);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t208) + t49 * (in7[2] -
              in8->data[30] * t49 * t208)) - t200 * (in7[0] + in8->data[30] *
    t200 * t208);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t217) + t52 * (in7[2] -
              in8->data[32] * t52 * t217)) - t209 * (in7[0] + in8->data[32] *
    t209 * t217);
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
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t181) + t40 * (in7[2] -
    in9->data[24] * t40 * t181)) - t173 * (in7[0] + in9->data[24] * t173 * t181);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t190) + t43 * (in7[2] -
    in9->data[26] * t43 * t190)) - t182 * (in7[0] + in9->data[26] * t182 * t190);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t199) + t46 * (in7[2] -
    in9->data[28] * t46 * t199)) - t191 * (in7[0] + in9->data[28] * t191 * t199);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t208) + t49 * (in7[2] -
    in9->data[30] * t49 * t208)) - t200 * (in7[0] + in9->data[30] * t200 * t208);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t217) + t52 * (in7[2] -
    in9->data[32] * t52 * t217)) - t209 * (in7[0] + in9->data[32] * t209 * t217);
  biq[119] = t218;
  biq[120] = t218;
  biq[121] = t218;
  biq[122] = t218;
  biq[123] = t219;
  biq[124] = t219;
  biq[125] = t219;
  biq[126] = t219;
  biq[127] = t220;
  biq[128] = t220;
  biq[129] = t220;
  biq[130] = t220;
  biq[131] = t221;
  biq[132] = t221;
  biq[133] = t221;
  biq[134] = t221;
  biq[135] = (t53 * (in15[0] - in9->data[1] * t53 * t229) + t54 * (in15[1] -
    in9->data[1] * t54 * t229)) + t55 * (in15[2] - in9->data[1] * t55 * t229);
  biq[136] = (t56 * (in15[3] - in9->data[1] * t56 * t237) + t57 * (in15[4] -
    in9->data[1] * t57 * t237)) + t58 * (in15[5] - in9->data[1] * t58 * t237);
  biq[137] = (t59 * (in15[6] - in9->data[1] * t59 * t245) + t60 * (in15[7] -
    in9->data[1] * t60 * t245)) + t61 * (in15[8] - in9->data[1] * t61 * t245);
  biq[138] = (t62 * (in15[9] - in9->data[1] * t62 * t253) + t63 * (in15[10] -
    in9->data[1] * t63 * t253)) + t64 * (in15[11] - in9->data[1] * t64 * t253);
  biq[139] = (t53 * (in15[0] - in8->data[1] * t53 * t229) + t54 * (in15[1] -
    in8->data[1] * t54 * t229)) + t55 * (in15[2] - in8->data[1] * t55 * t229);
  biq[140] = (t56 * (in15[3] - in8->data[1] * t56 * t237) + t57 * (in15[4] -
    in8->data[1] * t57 * t237)) + t58 * (in15[5] - in8->data[1] * t58 * t237);
  biq[141] = (t59 * (in15[6] - in8->data[1] * t59 * t245) + t60 * (in15[7] -
    in8->data[1] * t60 * t245)) + t61 * (in15[8] - in8->data[1] * t61 * t245);
  biq[142] = (t62 * (in15[9] - in8->data[1] * t62 * t253) + t63 * (in15[10] -
    in8->data[1] * t63 * t253)) + t64 * (in15[11] - in8->data[1] * t64 * t253);
  biq[143] = t254 * (in18[2] - in19[1] * t254 * t261) + t256 * (in18[3] - in19[1]
    * t256 * t261);
  biq[144] = t262 * (in18[4] - in19[2] * t262 * t68) + t264 * (in18[5] - in19[2]
    * t264 * t68);
  biq[145] = t270 * (in18[6] - in19[3] * t270 * t67) + t272 * (in18[7] - in19[3]
    * t272 * t67);
}

/* End of code generation (Iq_LeftStart03DFootV98.cpp) */
