/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart13DFootV98.cpp
 *
 * Code generation for function 'Iq_LeftStart13DFootV98'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step1.h"
#include "Iq_LeftStart13DFootV98.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV98.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart13DFootV98(c_temp_MPC3DFootV98_form_Step1S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[4], real_T Aiq[33320],
  real_T biq[140])
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
  real_T a;
  real_T t64;
  real_T t65;
  real_T t70;
  real_T t71;
  real_T t79;
  real_T t80;
  real_T t88;
  real_T t89;
  real_T t97;
  real_T t98;
  real_T t106;
  real_T t107;
  real_T t115;
  real_T t116;
  real_T t124;
  real_T t125;
  real_T t133;
  real_T t134;
  real_T t142;
  real_T t143;
  real_T t151;
  real_T t152;
  real_T t160;
  real_T t161;
  real_T t169;
  real_T t170;
  real_T t178;
  real_T t179;
  real_T t187;
  real_T t188;
  real_T t196;
  real_T t197;
  real_T t205;
  real_T t206;
  real_T t214;
  real_T t215;
  real_T t216;
  real_T t217;
  real_T t218;
  real_T t226;
  real_T t234;
  real_T t242;
  real_T t243;
  real_T t245;
  real_T t250;
  real_T t251;
  real_T t253;
  real_T t259;
  real_T t261;

  /* IQ_LEFTSTART13DFOOTV98 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART13DFOOTV98(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Jul-2023 15:37:11 */
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
  t53 = in15[0] - in15[17];
  t54 = in15[1] - in15[22];
  t55 = in15[2] - in15[27];
  t56 = in15[3] - in15[18];
  t57 = in15[4] - in15[23];
  t58 = in15[5] - in15[28];
  t59 = in15[6] - in15[19];
  t60 = in15[7] - in15[24];
  t61 = in15[8] - in15[29];
  t62 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t62);
  t64 = muDoubleScalarAbs(t3);
  t65 = muDoubleScalarAbs(t4);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t70 = 1.0 / t64;
  t71 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t71);
  t64 = muDoubleScalarAbs(t6);
  t65 = muDoubleScalarAbs(t7);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t79 = 1.0 / t64;
  t80 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t80);
  t64 = muDoubleScalarAbs(t9);
  t65 = muDoubleScalarAbs(t10);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t88 = 1.0 / t64;
  t89 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t89);
  t64 = muDoubleScalarAbs(t12);
  t65 = muDoubleScalarAbs(t13);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t97 = 1.0 / t64;
  t98 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t98);
  t64 = muDoubleScalarAbs(t15);
  t65 = muDoubleScalarAbs(t16);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t106 = 1.0 / t64;
  t107 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t107);
  t64 = muDoubleScalarAbs(t18);
  t65 = muDoubleScalarAbs(t19);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t115 = 1.0 / t64;
  t116 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t116);
  t64 = muDoubleScalarAbs(t21);
  t65 = muDoubleScalarAbs(t22);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t124 = 1.0 / t64;
  t125 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t125);
  t64 = muDoubleScalarAbs(t24);
  t65 = muDoubleScalarAbs(t25);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t133 = 1.0 / t64;
  t134 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t134);
  t64 = muDoubleScalarAbs(t27);
  t65 = muDoubleScalarAbs(t28);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t142 = 1.0 / t64;
  t143 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t143);
  t64 = muDoubleScalarAbs(t30);
  t65 = muDoubleScalarAbs(t31);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t151 = 1.0 / t64;
  t152 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t152);
  t64 = muDoubleScalarAbs(t33);
  t65 = muDoubleScalarAbs(t34);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t160 = 1.0 / t64;
  t161 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t161);
  t64 = muDoubleScalarAbs(t36);
  t65 = muDoubleScalarAbs(t37);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t169 = 1.0 / t64;
  t170 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t170);
  t64 = muDoubleScalarAbs(t39);
  t65 = muDoubleScalarAbs(t40);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t178 = 1.0 / t64;
  t179 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t179);
  t64 = muDoubleScalarAbs(t42);
  t65 = muDoubleScalarAbs(t43);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t187 = 1.0 / t64;
  t188 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t188);
  t64 = muDoubleScalarAbs(t45);
  t65 = muDoubleScalarAbs(t46);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t196 = 1.0 / t64;
  t197 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t197);
  t64 = muDoubleScalarAbs(t48);
  t65 = muDoubleScalarAbs(t49);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t205 = 1.0 / t64;
  t206 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t206);
  t64 = muDoubleScalarAbs(t51);
  t65 = muDoubleScalarAbs(t52);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t214 = 1.0 / t64;
  t215 = Cpx1 + in12[0];
  t216 = -Cpx1 + in12[0];
  t217 = Cpy1 + in13[0];
  t218 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t64 = muDoubleScalarAbs(t54);
  t65 = muDoubleScalarAbs(t55);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t226 = 1.0 / t64;
  a = muDoubleScalarAbs(t56);
  t64 = muDoubleScalarAbs(t57);
  t65 = muDoubleScalarAbs(t58);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t234 = 1.0 / t64;
  a = muDoubleScalarAbs(t59);
  t64 = muDoubleScalarAbs(t60);
  t65 = muDoubleScalarAbs(t61);
  t64 = (a * a + t64 * t64) + t65 * t65;
  b_sqrt(&t64);
  t242 = 1.0 / t64;
  t243 = in18[2] - in16[1];
  a = muDoubleScalarAbs(t243);
  t245 = in18[3] - in17[1];
  t64 = muDoubleScalarAbs(t245);
  t64 = a * a + t64 * t64;
  b_sqrt(&t64);
  t250 = 1.0 / t64;
  t251 = in18[4] - in16[2];
  a = muDoubleScalarAbs(t251);
  t253 = in18[5] - in17[2];
  t64 = muDoubleScalarAbs(t253);
  t64 = a * a + t64 * t64;
  b_sqrt(&t64);
  t65 = 1.0 / t64;
  t259 = in18[6] - in16[3];
  a = muDoubleScalarAbs(t259);
  t261 = in18[7] - in17[3];
  SD->u1.f1.dv3[0] = -1.0;
  memset(&SD->u1.f1.dv3[1], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[34] = 1.0;
  memset(&SD->u1.f1.dv3[35], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[68] = t2;
  memset(&SD->u1.f1.dv3[69], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[102] = t2;
  memset(&SD->u1.f1.dv3[103], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[281] = -1.0;
  memset(&SD->u1.f1.dv3[282], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[315] = 1.0;
  memset(&SD->u1.f1.dv3[316], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[349] = t5;
  memset(&SD->u1.f1.dv3[350], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[383] = t5;
  memset(&SD->u1.f1.dv3[384], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[562] = -1.0;
  memset(&SD->u1.f1.dv3[563], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[596] = 1.0;
  memset(&SD->u1.f1.dv3[597], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[630] = t8;
  memset(&SD->u1.f1.dv3[631], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[664] = t8;
  memset(&SD->u1.f1.dv3[665], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[843] = -1.0;
  memset(&SD->u1.f1.dv3[844], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[877] = 1.0;
  memset(&SD->u1.f1.dv3[878], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[911] = t11;
  memset(&SD->u1.f1.dv3[912], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[945] = t11;
  memset(&SD->u1.f1.dv3[946], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[1124] = -1.0;
  memset(&SD->u1.f1.dv3[1125], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1158] = 1.0;
  memset(&SD->u1.f1.dv3[1159], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1192] = t14;
  memset(&SD->u1.f1.dv3[1193], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1226] = t14;
  memset(&SD->u1.f1.dv3[1227], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[1405] = -1.0;
  memset(&SD->u1.f1.dv3[1406], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1439] = 1.0;
  memset(&SD->u1.f1.dv3[1440], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1473] = t17;
  memset(&SD->u1.f1.dv3[1474], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1507] = t17;
  memset(&SD->u1.f1.dv3[1508], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[1686] = -1.0;
  memset(&SD->u1.f1.dv3[1687], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1720] = 1.0;
  memset(&SD->u1.f1.dv3[1721], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1754] = t20;
  memset(&SD->u1.f1.dv3[1755], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1788] = t20;
  memset(&SD->u1.f1.dv3[1789], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[1967] = -1.0;
  memset(&SD->u1.f1.dv3[1968], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2001] = 1.0;
  memset(&SD->u1.f1.dv3[2002], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2035] = t23;
  memset(&SD->u1.f1.dv3[2036], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2069] = t23;
  memset(&SD->u1.f1.dv3[2070], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[2248] = -1.0;
  memset(&SD->u1.f1.dv3[2249], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2282] = 1.0;
  memset(&SD->u1.f1.dv3[2283], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2316] = t26;
  memset(&SD->u1.f1.dv3[2317], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2350] = t26;
  memset(&SD->u1.f1.dv3[2351], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[2529] = -1.0;
  memset(&SD->u1.f1.dv3[2530], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2563] = 1.0;
  memset(&SD->u1.f1.dv3[2564], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2597] = t29;
  memset(&SD->u1.f1.dv3[2598], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2631] = t29;
  memset(&SD->u1.f1.dv3[2632], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[2810] = -1.0;
  memset(&SD->u1.f1.dv3[2811], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2844] = 1.0;
  memset(&SD->u1.f1.dv3[2845], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2878] = t32;
  memset(&SD->u1.f1.dv3[2879], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2912] = t32;
  memset(&SD->u1.f1.dv3[2913], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[3091] = -1.0;
  memset(&SD->u1.f1.dv3[3092], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3125] = 1.0;
  memset(&SD->u1.f1.dv3[3126], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3159] = t35;
  memset(&SD->u1.f1.dv3[3160], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3193] = t35;
  memset(&SD->u1.f1.dv3[3194], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[3372] = -1.0;
  memset(&SD->u1.f1.dv3[3373], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3406] = 1.0;
  memset(&SD->u1.f1.dv3[3407], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3440] = t38;
  memset(&SD->u1.f1.dv3[3441], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3474] = t38;
  memset(&SD->u1.f1.dv3[3475], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[3653] = -1.0;
  memset(&SD->u1.f1.dv3[3654], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3687] = 1.0;
  memset(&SD->u1.f1.dv3[3688], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3721] = t41;
  memset(&SD->u1.f1.dv3[3722], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3755] = t41;
  memset(&SD->u1.f1.dv3[3756], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[3934] = -1.0;
  memset(&SD->u1.f1.dv3[3935], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3968] = 1.0;
  memset(&SD->u1.f1.dv3[3969], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4002] = t44;
  memset(&SD->u1.f1.dv3[4003], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4036] = t44;
  memset(&SD->u1.f1.dv3[4037], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[4215] = -1.0;
  memset(&SD->u1.f1.dv3[4216], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4249] = 1.0;
  memset(&SD->u1.f1.dv3[4250], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4283] = t47;
  memset(&SD->u1.f1.dv3[4284], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4317] = t47;
  memset(&SD->u1.f1.dv3[4318], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[4496] = -1.0;
  memset(&SD->u1.f1.dv3[4497], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4530] = 1.0;
  memset(&SD->u1.f1.dv3[4531], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4564] = t50;
  memset(&SD->u1.f1.dv3[4565], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4598] = t50;
  memset(&SD->u1.f1.dv3[4599], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv3[4777] = -1.0;
  memset(&SD->u1.f1.dv3[4778], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4811] = 1.0;
  memset(&SD->u1.f1.dv3[4812], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[4828] = t3;
  memset(&SD->u1.f1.dv3[4829], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4862] = t3;
  memset(&SD->u1.f1.dv3[4863], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[5058] = -1.0;
  memset(&SD->u1.f1.dv3[5059], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5092] = 1.0;
  memset(&SD->u1.f1.dv3[5093], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5109] = t6;
  memset(&SD->u1.f1.dv3[5110], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5143] = t6;
  memset(&SD->u1.f1.dv3[5144], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[5339] = -1.0;
  memset(&SD->u1.f1.dv3[5340], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5373] = 1.0;
  memset(&SD->u1.f1.dv3[5374], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5390] = t9;
  memset(&SD->u1.f1.dv3[5391], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5424] = t9;
  memset(&SD->u1.f1.dv3[5425], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[5620] = -1.0;
  memset(&SD->u1.f1.dv3[5621], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5654] = 1.0;
  memset(&SD->u1.f1.dv3[5655], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5671] = t12;
  memset(&SD->u1.f1.dv3[5672], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5705] = t12;
  memset(&SD->u1.f1.dv3[5706], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[5901] = -1.0;
  memset(&SD->u1.f1.dv3[5902], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5935] = 1.0;
  memset(&SD->u1.f1.dv3[5936], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5952] = t15;
  memset(&SD->u1.f1.dv3[5953], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5986] = t15;
  memset(&SD->u1.f1.dv3[5987], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[6182] = -1.0;
  memset(&SD->u1.f1.dv3[6183], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6216] = 1.0;
  memset(&SD->u1.f1.dv3[6217], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6233] = t18;
  memset(&SD->u1.f1.dv3[6234], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6267] = t18;
  memset(&SD->u1.f1.dv3[6268], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[6463] = -1.0;
  memset(&SD->u1.f1.dv3[6464], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6497] = 1.0;
  memset(&SD->u1.f1.dv3[6498], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6514] = t21;
  memset(&SD->u1.f1.dv3[6515], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6548] = t21;
  memset(&SD->u1.f1.dv3[6549], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[6744] = -1.0;
  memset(&SD->u1.f1.dv3[6745], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6778] = 1.0;
  memset(&SD->u1.f1.dv3[6779], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6795] = t24;
  memset(&SD->u1.f1.dv3[6796], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6829] = t24;
  memset(&SD->u1.f1.dv3[6830], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[7025] = -1.0;
  memset(&SD->u1.f1.dv3[7026], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7059] = 1.0;
  memset(&SD->u1.f1.dv3[7060], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7076] = t27;
  memset(&SD->u1.f1.dv3[7077], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7110] = t27;
  memset(&SD->u1.f1.dv3[7111], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[7306] = -1.0;
  memset(&SD->u1.f1.dv3[7307], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7340] = 1.0;
  memset(&SD->u1.f1.dv3[7341], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7357] = t30;
  memset(&SD->u1.f1.dv3[7358], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7391] = t30;
  memset(&SD->u1.f1.dv3[7392], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[7587] = -1.0;
  memset(&SD->u1.f1.dv3[7588], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7621] = 1.0;
  memset(&SD->u1.f1.dv3[7622], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7638] = t33;
  memset(&SD->u1.f1.dv3[7639], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7672] = t33;
  memset(&SD->u1.f1.dv3[7673], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[7868] = -1.0;
  memset(&SD->u1.f1.dv3[7869], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7902] = 1.0;
  memset(&SD->u1.f1.dv3[7903], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7919] = t36;
  memset(&SD->u1.f1.dv3[7920], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7953] = t36;
  memset(&SD->u1.f1.dv3[7954], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[8149] = -1.0;
  memset(&SD->u1.f1.dv3[8150], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8183] = 1.0;
  memset(&SD->u1.f1.dv3[8184], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8200] = t39;
  memset(&SD->u1.f1.dv3[8201], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8234] = t39;
  memset(&SD->u1.f1.dv3[8235], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[8430] = -1.0;
  memset(&SD->u1.f1.dv3[8431], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8464] = 1.0;
  memset(&SD->u1.f1.dv3[8465], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8481] = t42;
  memset(&SD->u1.f1.dv3[8482], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8515] = t42;
  memset(&SD->u1.f1.dv3[8516], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[8711] = -1.0;
  memset(&SD->u1.f1.dv3[8712], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8745] = 1.0;
  memset(&SD->u1.f1.dv3[8746], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8762] = t45;
  memset(&SD->u1.f1.dv3[8763], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8796] = t45;
  memset(&SD->u1.f1.dv3[8797], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[8992] = -1.0;
  memset(&SD->u1.f1.dv3[8993], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9026] = 1.0;
  memset(&SD->u1.f1.dv3[9027], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9043] = t48;
  memset(&SD->u1.f1.dv3[9044], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9077] = t48;
  memset(&SD->u1.f1.dv3[9078], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv3[9273] = -1.0;
  memset(&SD->u1.f1.dv3[9274], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9307] = 1.0;
  memset(&SD->u1.f1.dv3[9308], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9324] = t51;
  memset(&SD->u1.f1.dv3[9325], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9358] = t51;
  memset(&SD->u1.f1.dv3[9359], 0, 229U * sizeof(real_T));
  SD->u1.f1.dv3[9588] = t4;
  memset(&SD->u1.f1.dv3[9589], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9622] = t4;
  memset(&SD->u1.f1.dv3[9623], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[9869] = t7;
  memset(&SD->u1.f1.dv3[9870], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9903] = t7;
  memset(&SD->u1.f1.dv3[9904], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[10150] = t10;
  memset(&SD->u1.f1.dv3[10151], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10184] = t10;
  memset(&SD->u1.f1.dv3[10185], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[10431] = t13;
  memset(&SD->u1.f1.dv3[10432], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10465] = t13;
  memset(&SD->u1.f1.dv3[10466], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[10712] = t16;
  memset(&SD->u1.f1.dv3[10713], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10746] = t16;
  memset(&SD->u1.f1.dv3[10747], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[10993] = t19;
  memset(&SD->u1.f1.dv3[10994], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11027] = t19;
  memset(&SD->u1.f1.dv3[11028], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[11274] = t22;
  memset(&SD->u1.f1.dv3[11275], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11308] = t22;
  memset(&SD->u1.f1.dv3[11309], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[11555] = t25;
  memset(&SD->u1.f1.dv3[11556], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11589] = t25;
  memset(&SD->u1.f1.dv3[11590], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[11836] = t28;
  memset(&SD->u1.f1.dv3[11837], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11870] = t28;
  memset(&SD->u1.f1.dv3[11871], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[12117] = t31;
  memset(&SD->u1.f1.dv3[12118], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12151] = t31;
  memset(&SD->u1.f1.dv3[12152], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[12398] = t34;
  memset(&SD->u1.f1.dv3[12399], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12432] = t34;
  memset(&SD->u1.f1.dv3[12433], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[12679] = t37;
  memset(&SD->u1.f1.dv3[12680], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12713] = t37;
  memset(&SD->u1.f1.dv3[12714], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[12960] = t40;
  memset(&SD->u1.f1.dv3[12961], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12994] = t40;
  memset(&SD->u1.f1.dv3[12995], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[13241] = t43;
  memset(&SD->u1.f1.dv3[13242], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13275] = t43;
  memset(&SD->u1.f1.dv3[13276], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[13522] = t46;
  memset(&SD->u1.f1.dv3[13523], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13556] = t46;
  memset(&SD->u1.f1.dv3[13557], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[13803] = t49;
  memset(&SD->u1.f1.dv3[13804], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13837] = t49;
  memset(&SD->u1.f1.dv3[13838], 0, 246U * sizeof(real_T));
  SD->u1.f1.dv3[14084] = t52;
  memset(&SD->u1.f1.dv3[14085], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14118] = t52;
  memset(&SD->u1.f1.dv3[14119], 0, 161U * sizeof(real_T));
  SD->u1.f1.dv3[14280] = 1.0;
  memset(&SD->u1.f1.dv3[14281], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14314] = -1.0;
  memset(&SD->u1.f1.dv3[14315], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14399] = 1.0;
  SD->u1.f1.dv3[14400] = 0.0;
  SD->u1.f1.dv3[14401] = 0.0;
  SD->u1.f1.dv3[14402] = -1.0;
  memset(&SD->u1.f1.dv3[14403], 0, 18U * sizeof(real_T));
  SD->u1.f1.dv3[14421] = 1.0;
  memset(&SD->u1.f1.dv3[14422], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14455] = -1.0;
  memset(&SD->u1.f1.dv3[14456], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14540] = 1.0;
  SD->u1.f1.dv3[14541] = 0.0;
  SD->u1.f1.dv3[14542] = 0.0;
  SD->u1.f1.dv3[14543] = -1.0;
  memset(&SD->u1.f1.dv3[14544], 0, 18U * sizeof(real_T));
  SD->u1.f1.dv3[14562] = 1.0;
  memset(&SD->u1.f1.dv3[14563], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14596] = -1.0;
  memset(&SD->u1.f1.dv3[14597], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14681] = 1.0;
  SD->u1.f1.dv3[14682] = 0.0;
  SD->u1.f1.dv3[14683] = 0.0;
  SD->u1.f1.dv3[14684] = -1.0;
  memset(&SD->u1.f1.dv3[14685], 0, 18U * sizeof(real_T));
  SD->u1.f1.dv3[14703] = 1.0;
  memset(&SD->u1.f1.dv3[14704], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14737] = -1.0;
  memset(&SD->u1.f1.dv3[14738], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[14844] = 1.0;
  memset(&SD->u1.f1.dv3[14845], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14878] = -1.0;
  memset(&SD->u1.f1.dv3[14879], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[14985] = 1.0;
  memset(&SD->u1.f1.dv3[14986], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15019] = -1.0;
  memset(&SD->u1.f1.dv3[15020], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[15126] = 1.0;
  memset(&SD->u1.f1.dv3[15127], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15160] = -1.0;
  memset(&SD->u1.f1.dv3[15161], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[15267] = 1.0;
  memset(&SD->u1.f1.dv3[15268], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15301] = -1.0;
  memset(&SD->u1.f1.dv3[15302], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[15408] = 1.0;
  memset(&SD->u1.f1.dv3[15409], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15442] = -1.0;
  memset(&SD->u1.f1.dv3[15443], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[15549] = 1.0;
  memset(&SD->u1.f1.dv3[15550], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15583] = -1.0;
  memset(&SD->u1.f1.dv3[15584], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[15690] = 1.0;
  memset(&SD->u1.f1.dv3[15691], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15724] = -1.0;
  memset(&SD->u1.f1.dv3[15725], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[15831] = 1.0;
  memset(&SD->u1.f1.dv3[15832], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15865] = -1.0;
  memset(&SD->u1.f1.dv3[15866], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[15972] = 1.0;
  memset(&SD->u1.f1.dv3[15973], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16006] = -1.0;
  memset(&SD->u1.f1.dv3[16007], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[16113] = 1.0;
  memset(&SD->u1.f1.dv3[16114], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16147] = -1.0;
  memset(&SD->u1.f1.dv3[16148], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[16254] = 1.0;
  memset(&SD->u1.f1.dv3[16255], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16288] = -1.0;
  memset(&SD->u1.f1.dv3[16289], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[16395] = 1.0;
  memset(&SD->u1.f1.dv3[16396], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16429] = -1.0;
  memset(&SD->u1.f1.dv3[16430], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[16536] = 1.0;
  memset(&SD->u1.f1.dv3[16537], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16570] = -1.0;
  memset(&SD->u1.f1.dv3[16571], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[16677] = 1.0;
  memset(&SD->u1.f1.dv3[16678], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16711] = -1.0;
  memset(&SD->u1.f1.dv3[16712], 0, 73U * sizeof(real_T));
  SD->u1.f1.dv3[16785] = 1.0;
  SD->u1.f1.dv3[16786] = 0.0;
  SD->u1.f1.dv3[16787] = 0.0;
  SD->u1.f1.dv3[16788] = -1.0;
  memset(&SD->u1.f1.dv3[16789], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv3[16818] = 1.0;
  memset(&SD->u1.f1.dv3[16819], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16852] = -1.0;
  memset(&SD->u1.f1.dv3[16853], 0, 73U * sizeof(real_T));
  SD->u1.f1.dv3[16926] = 1.0;
  SD->u1.f1.dv3[16927] = 0.0;
  SD->u1.f1.dv3[16928] = 0.0;
  SD->u1.f1.dv3[16929] = -1.0;
  memset(&SD->u1.f1.dv3[16930], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv3[16959] = 1.0;
  memset(&SD->u1.f1.dv3[16960], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16993] = -1.0;
  memset(&SD->u1.f1.dv3[16994], 0, 73U * sizeof(real_T));
  SD->u1.f1.dv3[17067] = 1.0;
  SD->u1.f1.dv3[17068] = 0.0;
  SD->u1.f1.dv3[17069] = 0.0;
  SD->u1.f1.dv3[17070] = -1.0;
  memset(&SD->u1.f1.dv3[17071], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv3[17100] = 1.0;
  memset(&SD->u1.f1.dv3[17101], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17134] = -1.0;
  memset(&SD->u1.f1.dv3[17135], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[17241] = 1.0;
  memset(&SD->u1.f1.dv3[17242], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17275] = -1.0;
  memset(&SD->u1.f1.dv3[17276], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[17382] = 1.0;
  memset(&SD->u1.f1.dv3[17383], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17416] = -1.0;
  memset(&SD->u1.f1.dv3[17417], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[17523] = 1.0;
  memset(&SD->u1.f1.dv3[17524], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17557] = -1.0;
  memset(&SD->u1.f1.dv3[17558], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[17664] = 1.0;
  memset(&SD->u1.f1.dv3[17665], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17698] = -1.0;
  memset(&SD->u1.f1.dv3[17699], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[17805] = 1.0;
  memset(&SD->u1.f1.dv3[17806], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17839] = -1.0;
  memset(&SD->u1.f1.dv3[17840], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[17946] = 1.0;
  memset(&SD->u1.f1.dv3[17947], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17980] = -1.0;
  memset(&SD->u1.f1.dv3[17981], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[18087] = 1.0;
  memset(&SD->u1.f1.dv3[18088], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18121] = -1.0;
  memset(&SD->u1.f1.dv3[18122], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[18228] = 1.0;
  memset(&SD->u1.f1.dv3[18229], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18262] = -1.0;
  memset(&SD->u1.f1.dv3[18263], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[18369] = 1.0;
  memset(&SD->u1.f1.dv3[18370], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18403] = -1.0;
  memset(&SD->u1.f1.dv3[18404], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[18510] = 1.0;
  memset(&SD->u1.f1.dv3[18511], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18544] = -1.0;
  memset(&SD->u1.f1.dv3[18545], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[18651] = 1.0;
  memset(&SD->u1.f1.dv3[18652], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18685] = -1.0;
  memset(&SD->u1.f1.dv3[18686], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[18792] = 1.0;
  memset(&SD->u1.f1.dv3[18793], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18826] = -1.0;
  memset(&SD->u1.f1.dv3[18827], 0, 106U * sizeof(real_T));
  SD->u1.f1.dv3[18933] = 1.0;
  memset(&SD->u1.f1.dv3[18934], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18967] = -1.0;
  memset(&SD->u1.f1.dv3[18968], 0, 3657U * sizeof(real_T));
  SD->u1.f1.dv3[22625] = -1.0;
  memset(&SD->u1.f1.dv3[22626], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22642] = -1.0;
  memset(&SD->u1.f1.dv3[22643], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[22766] = -1.0;
  memset(&SD->u1.f1.dv3[22767], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22783] = -1.0;
  memset(&SD->u1.f1.dv3[22784], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[22907] = -1.0;
  memset(&SD->u1.f1.dv3[22908], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22924] = -1.0;
  memset(&SD->u1.f1.dv3[22925], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[23048] = -1.0;
  memset(&SD->u1.f1.dv3[23049], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23065] = -1.0;
  memset(&SD->u1.f1.dv3[23066], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[23189] = -1.0;
  memset(&SD->u1.f1.dv3[23190], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23206] = -1.0;
  memset(&SD->u1.f1.dv3[23207], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[23330] = -1.0;
  memset(&SD->u1.f1.dv3[23331], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23347] = -1.0;
  memset(&SD->u1.f1.dv3[23348], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[23471] = -1.0;
  memset(&SD->u1.f1.dv3[23472], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23488] = -1.0;
  memset(&SD->u1.f1.dv3[23489], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[23612] = -1.0;
  memset(&SD->u1.f1.dv3[23613], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23629] = -1.0;
  memset(&SD->u1.f1.dv3[23630], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[23753] = -1.0;
  memset(&SD->u1.f1.dv3[23754], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23770] = -1.0;
  memset(&SD->u1.f1.dv3[23771], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[23894] = -1.0;
  memset(&SD->u1.f1.dv3[23895], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23911] = -1.0;
  memset(&SD->u1.f1.dv3[23912], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[24035] = -1.0;
  memset(&SD->u1.f1.dv3[24036], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24052] = -1.0;
  memset(&SD->u1.f1.dv3[24053], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[24176] = -1.0;
  memset(&SD->u1.f1.dv3[24177], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24193] = -1.0;
  memset(&SD->u1.f1.dv3[24194], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[24317] = -1.0;
  memset(&SD->u1.f1.dv3[24318], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24334] = -1.0;
  memset(&SD->u1.f1.dv3[24335], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[24458] = -1.0;
  memset(&SD->u1.f1.dv3[24459], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24475] = -1.0;
  memset(&SD->u1.f1.dv3[24476], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[24599] = -1.0;
  memset(&SD->u1.f1.dv3[24600], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24616] = -1.0;
  memset(&SD->u1.f1.dv3[24617], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[24740] = -1.0;
  memset(&SD->u1.f1.dv3[24741], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24757] = -1.0;
  memset(&SD->u1.f1.dv3[24758], 0, 123U * sizeof(real_T));
  SD->u1.f1.dv3[24881] = -1.0;
  memset(&SD->u1.f1.dv3[24882], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24898] = -1.0;
  memset(&SD->u1.f1.dv3[24899], 0, 2520U * sizeof(real_T));
  SD->u1.f1.dv3[27419] = -1.0;
  SD->u1.f1.dv3[27420] = 0.0;
  SD->u1.f1.dv3[27421] = 0.0;
  SD->u1.f1.dv3[27422] = -1.0;
  memset(&SD->u1.f1.dv3[27423], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[27560] = -1.0;
  SD->u1.f1.dv3[27561] = 0.0;
  SD->u1.f1.dv3[27562] = 0.0;
  SD->u1.f1.dv3[27563] = -1.0;
  memset(&SD->u1.f1.dv3[27564], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[27701] = -1.0;
  SD->u1.f1.dv3[27702] = 0.0;
  SD->u1.f1.dv3[27703] = 0.0;
  SD->u1.f1.dv3[27704] = -1.0;
  memset(&SD->u1.f1.dv3[27705], 0, 280U * sizeof(real_T));
  SD->u1.f1.dv3[27985] = -1.0;
  SD->u1.f1.dv3[27986] = 0.0;
  SD->u1.f1.dv3[27987] = 0.0;
  SD->u1.f1.dv3[27988] = -1.0;
  memset(&SD->u1.f1.dv3[27989], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[28126] = -1.0;
  SD->u1.f1.dv3[28127] = 0.0;
  SD->u1.f1.dv3[28128] = 0.0;
  SD->u1.f1.dv3[28129] = -1.0;
  memset(&SD->u1.f1.dv3[28130], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[28267] = -1.0;
  SD->u1.f1.dv3[28268] = 0.0;
  SD->u1.f1.dv3[28269] = 0.0;
  SD->u1.f1.dv3[28270] = -1.0;
  memset(&SD->u1.f1.dv3[28271], 0, 560U * sizeof(real_T));
  SD->u1.f1.dv3[28831] = t53;
  SD->u1.f1.dv3[28832] = 0.0;
  SD->u1.f1.dv3[28833] = 0.0;
  SD->u1.f1.dv3[28834] = t53;
  memset(&SD->u1.f1.dv3[28835], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[28972] = t56;
  SD->u1.f1.dv3[28973] = 0.0;
  SD->u1.f1.dv3[28974] = 0.0;
  SD->u1.f1.dv3[28975] = t56;
  memset(&SD->u1.f1.dv3[28976], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[29113] = t59;
  SD->u1.f1.dv3[29114] = 0.0;
  SD->u1.f1.dv3[29115] = 0.0;
  SD->u1.f1.dv3[29116] = t59;
  memset(&SD->u1.f1.dv3[29117], 0, 414U * sizeof(real_T));
  SD->u1.f1.dv3[29531] = t54;
  SD->u1.f1.dv3[29532] = 0.0;
  SD->u1.f1.dv3[29533] = 0.0;
  SD->u1.f1.dv3[29534] = t54;
  memset(&SD->u1.f1.dv3[29535], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[29672] = t57;
  SD->u1.f1.dv3[29673] = 0.0;
  SD->u1.f1.dv3[29674] = 0.0;
  SD->u1.f1.dv3[29675] = t57;
  memset(&SD->u1.f1.dv3[29676], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[29813] = t60;
  SD->u1.f1.dv3[29814] = 0.0;
  SD->u1.f1.dv3[29815] = 0.0;
  SD->u1.f1.dv3[29816] = t60;
  memset(&SD->u1.f1.dv3[29817], 0, 414U * sizeof(real_T));
  SD->u1.f1.dv3[30231] = t55;
  SD->u1.f1.dv3[30232] = 0.0;
  SD->u1.f1.dv3[30233] = 0.0;
  SD->u1.f1.dv3[30234] = t55;
  memset(&SD->u1.f1.dv3[30235], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[30372] = t58;
  SD->u1.f1.dv3[30373] = 0.0;
  SD->u1.f1.dv3[30374] = 0.0;
  SD->u1.f1.dv3[30375] = t58;
  memset(&SD->u1.f1.dv3[30376], 0, 137U * sizeof(real_T));
  SD->u1.f1.dv3[30513] = t61;
  SD->u1.f1.dv3[30514] = 0.0;
  SD->u1.f1.dv3[30515] = 0.0;
  SD->u1.f1.dv3[30516] = t61;
  memset(&SD->u1.f1.dv3[30517], 0, 274U * sizeof(real_T));
  SD->u1.f1.dv3[30791] = -1.0;
  memset(&SD->u1.f1.dv3[30792], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[30932] = -1.0;
  memset(&SD->u1.f1.dv3[30933], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[31073] = -1.0;
  memset(&SD->u1.f1.dv3[31074], 0, 1403U * sizeof(real_T));
  SD->u1.f1.dv3[32477] = t243;
  memset(&SD->u1.f1.dv3[32478], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[32618] = t251;
  memset(&SD->u1.f1.dv3[32619], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[32759] = t259;
  memset(&SD->u1.f1.dv3[32760], 0, 277U * sizeof(real_T));
  SD->u1.f1.dv3[33037] = t245;
  memset(&SD->u1.f1.dv3[33038], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[33178] = t253;
  memset(&SD->u1.f1.dv3[33179], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[33319] = t261;
  for (i0 = 0; i0 < 238; i0++) {
    memcpy(&Aiq[i0 * 140], &SD->u1.f1.dv3[i0 * 140], 140U * sizeof(real_T));
  }

  t64 = muDoubleScalarAbs(t261);
  t64 = a * a + t64 * t64;
  b_sqrt(&t64);
  t64 = 1.0 / t64;
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
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t70) + t4 * (in7[2] - in8->data
              [0] * t4 * t70)) - t62 * (in7[0] + in8->data[0] * t62 * t70);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t79) + t7 * (in7[2] - in8->data
              [2] * t7 * t79)) - t71 * (in7[0] + in8->data[2] * t71 * t79);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t88) + t10 * (in7[2] - in8->
              data[4] * t10 * t88)) - t80 * (in7[0] + in8->data[4] * t80 * t88);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t97) + t13 * (in7[2] -
              in8->data[6] * t13 * t97)) - t89 * (in7[0] + in8->data[6] * t89 *
    t97);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t106) + t16 * (in7[2] -
              in8->data[8] * t16 * t106)) - t98 * (in7[0] + in8->data[8] * t98 *
    t106);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t115) + t19 * (in7[2] -
              in8->data[10] * t19 * t115)) - t107 * (in7[0] + in8->data[10] *
    t107 * t115);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t124) + t22 * (in7[2] -
              in8->data[12] * t22 * t124)) - t116 * (in7[0] + in8->data[12] *
    t116 * t124);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t133) + t25 * (in7[2] -
              in8->data[14] * t25 * t133)) - t125 * (in7[0] + in8->data[14] *
    t125 * t133);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t142) + t28 * (in7[2] -
              in8->data[16] * t28 * t142)) - t134 * (in7[0] + in8->data[16] *
    t134 * t142);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t151) + t31 * (in7[2] -
              in8->data[18] * t31 * t151)) - t143 * (in7[0] + in8->data[18] *
    t143 * t151);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t160) + t34 * (in7[2] -
              in8->data[20] * t34 * t160)) - t152 * (in7[0] + in8->data[20] *
    t152 * t160);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t169) + t37 * (in7[2] -
              in8->data[22] * t37 * t169)) - t161 * (in7[0] + in8->data[22] *
    t161 * t169);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t178) + t40 * (in7[2] -
              in8->data[24] * t40 * t178)) - t170 * (in7[0] + in8->data[24] *
    t170 * t178);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t187) + t43 * (in7[2] -
              in8->data[26] * t43 * t187)) - t179 * (in7[0] + in8->data[26] *
    t179 * t187);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t196) + t46 * (in7[2] -
              in8->data[28] * t46 * t196)) - t188 * (in7[0] + in8->data[28] *
    t188 * t196);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t205) + t49 * (in7[2] -
              in8->data[30] * t49 * t205)) - t197 * (in7[0] + in8->data[30] *
    t197 * t205);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t214) + t52 * (in7[2] -
              in8->data[32] * t52 * t214)) - t206 * (in7[0] + in8->data[32] *
    t206 * t214);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t70) + t4 * (in7[2] - in9->
    data[0] * t4 * t70)) - t62 * (in7[0] + in9->data[0] * t62 * t70);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t79) + t7 * (in7[2] - in9->
    data[2] * t7 * t79)) - t71 * (in7[0] + in9->data[2] * t71 * t79);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t88) + t10 * (in7[2] -
    in9->data[4] * t10 * t88)) - t80 * (in7[0] + in9->data[4] * t80 * t88);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t97) + t13 * (in7[2] -
    in9->data[6] * t13 * t97)) - t89 * (in7[0] + in9->data[6] * t89 * t97);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t106) + t16 * (in7[2] -
    in9->data[8] * t16 * t106)) - t98 * (in7[0] + in9->data[8] * t98 * t106);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t115) + t19 * (in7[2] -
    in9->data[10] * t19 * t115)) - t107 * (in7[0] + in9->data[10] * t107 * t115);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t124) + t22 * (in7[2] -
    in9->data[12] * t22 * t124)) - t116 * (in7[0] + in9->data[12] * t116 * t124);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t133) + t25 * (in7[2] -
    in9->data[14] * t25 * t133)) - t125 * (in7[0] + in9->data[14] * t125 * t133);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t142) + t28 * (in7[2] -
    in9->data[16] * t28 * t142)) - t134 * (in7[0] + in9->data[16] * t134 * t142);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t151) + t31 * (in7[2] -
    in9->data[18] * t31 * t151)) - t143 * (in7[0] + in9->data[18] * t143 * t151);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t160) + t34 * (in7[2] -
    in9->data[20] * t34 * t160)) - t152 * (in7[0] + in9->data[20] * t152 * t160);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t169) + t37 * (in7[2] -
    in9->data[22] * t37 * t169)) - t161 * (in7[0] + in9->data[22] * t161 * t169);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t178) + t40 * (in7[2] -
    in9->data[24] * t40 * t178)) - t170 * (in7[0] + in9->data[24] * t170 * t178);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t187) + t43 * (in7[2] -
    in9->data[26] * t43 * t187)) - t179 * (in7[0] + in9->data[26] * t179 * t187);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t196) + t46 * (in7[2] -
    in9->data[28] * t46 * t196)) - t188 * (in7[0] + in9->data[28] * t188 * t196);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t205) + t49 * (in7[2] -
    in9->data[30] * t49 * t205)) - t197 * (in7[0] + in9->data[30] * t197 * t205);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t214) + t52 * (in7[2] -
    in9->data[32] * t52 * t214)) - t206 * (in7[0] + in9->data[32] * t206 * t214);
  biq[119] = t215;
  biq[120] = t215;
  biq[121] = t215;
  biq[122] = t216;
  biq[123] = t216;
  biq[124] = t216;
  biq[125] = t217;
  biq[126] = t217;
  biq[127] = t217;
  biq[128] = t218;
  biq[129] = t218;
  biq[130] = t218;
  biq[131] = (t53 * (in15[0] - in9->data[1] * t53 * t226) + t54 * (in15[1] -
    in9->data[1] * t54 * t226)) + t55 * (in15[2] - in9->data[1] * t55 * t226);
  biq[132] = (t56 * (in15[3] - in9->data[1] * t56 * t234) + t57 * (in15[4] -
    in9->data[1] * t57 * t234)) + t58 * (in15[5] - in9->data[1] * t58 * t234);
  biq[133] = (t59 * (in15[6] - in9->data[1] * t59 * t242) + t60 * (in15[7] -
    in9->data[1] * t60 * t242)) + t61 * (in15[8] - in9->data[1] * t61 * t242);
  biq[134] = (t53 * (in15[0] - in8->data[1] * t53 * t226) + t54 * (in15[1] -
    in8->data[1] * t54 * t226)) + t55 * (in15[2] - in8->data[1] * t55 * t226);
  biq[135] = (t56 * (in15[3] - in8->data[1] * t56 * t234) + t57 * (in15[4] -
    in8->data[1] * t57 * t234)) + t58 * (in15[5] - in8->data[1] * t58 * t234);
  biq[136] = (t59 * (in15[6] - in8->data[1] * t59 * t242) + t60 * (in15[7] -
    in8->data[1] * t60 * t242)) + t61 * (in15[8] - in8->data[1] * t61 * t242);
  biq[137] = t243 * (in18[2] - in19[1] * t243 * t250) + t245 * (in18[3] - in19[1]
    * t245 * t250);
  biq[138] = t251 * (in18[4] - in19[2] * t251 * t65) + t253 * (in18[5] - in19[2]
    * t253 * t65);
  biq[139] = t259 * (in18[6] - in19[3] * t259 * t64) + t261 * (in18[7] - in19[3]
    * t261 * t64);
}

/* End of code generation (Iq_LeftStart13DFootV98.cpp) */
