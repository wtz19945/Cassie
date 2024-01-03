/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_RightStart13DFootV97.cpp
 *
 * Code generation for function 'Iq_RightStart13DFootV97'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV97_form_Step1.h"
#include "Iq_RightStart13DFootV97.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart13DFootV97",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart13DFootV97.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_RightStart13DFootV97(c_temp_MPC3DFootV97_form_Step1S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], real_T Aiq[30962], real_T biq[137])
{
  int32_T i2;
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

  /* IQ_RIGHTSTART13DFOOTV97 */
  /*     [AIQ,BIQ] = IQ_RIGHTSTART13DFOOTV97(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     29-Jun-2023 16:11:33 */
  i2 = in8->size[1] << 1;
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&vc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&uc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&tc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&sc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&rc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&qc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&pc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&oc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&nc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&mc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&lc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&kc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&jc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&ic_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&hc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&gc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&fc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&ec_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&dc_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&cc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(19 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i2, (emlrtBCInfo *)&bc_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(21 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i2, (emlrtBCInfo *)&ac_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(23 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i2, (emlrtBCInfo *)&yb_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(25 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(25, 1, i2, (emlrtBCInfo *)&xb_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(27 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(27, 1, i2, (emlrtBCInfo *)&wb_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(29 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(29, 1, i2, (emlrtBCInfo *)&vb_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(31 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(31, 1, i2, (emlrtBCInfo *)&ub_emlrtBCI, sp);
  }

  i2 = in8->size[1] << 1;
  if (!(33 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(33, 1, i2, (emlrtBCInfo *)&tb_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(19 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i2, (emlrtBCInfo *)&sb_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(21 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i2, (emlrtBCInfo *)&rb_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(23 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i2, (emlrtBCInfo *)&qb_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(25 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(25, 1, i2, (emlrtBCInfo *)&pb_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(27 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(27, 1, i2, (emlrtBCInfo *)&ob_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(29 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(29, 1, i2, (emlrtBCInfo *)&nb_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(31 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(31, 1, i2, (emlrtBCInfo *)&mb_emlrtBCI, sp);
  }

  i2 = in9->size[1] << 1;
  if (!(33 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(33, 1, i2, (emlrtBCInfo *)&lb_emlrtBCI, sp);
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
  SD->u1.f2.dv5[0] = -1.0;
  memset(&SD->u1.f2.dv5[1], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[34] = 1.0;
  memset(&SD->u1.f2.dv5[35], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[68] = t2;
  memset(&SD->u1.f2.dv5[69], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[102] = t2;
  memset(&SD->u1.f2.dv5[103], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[275] = -1.0;
  memset(&SD->u1.f2.dv5[276], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[309] = 1.0;
  memset(&SD->u1.f2.dv5[310], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[343] = t5;
  memset(&SD->u1.f2.dv5[344], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[377] = t5;
  memset(&SD->u1.f2.dv5[378], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[550] = -1.0;
  memset(&SD->u1.f2.dv5[551], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[584] = 1.0;
  memset(&SD->u1.f2.dv5[585], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[618] = t8;
  memset(&SD->u1.f2.dv5[619], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[652] = t8;
  memset(&SD->u1.f2.dv5[653], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[825] = -1.0;
  memset(&SD->u1.f2.dv5[826], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[859] = 1.0;
  memset(&SD->u1.f2.dv5[860], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[893] = t11;
  memset(&SD->u1.f2.dv5[894], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[927] = t11;
  memset(&SD->u1.f2.dv5[928], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[1100] = -1.0;
  memset(&SD->u1.f2.dv5[1101], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1134] = 1.0;
  memset(&SD->u1.f2.dv5[1135], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1168] = t14;
  memset(&SD->u1.f2.dv5[1169], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1202] = t14;
  memset(&SD->u1.f2.dv5[1203], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[1375] = -1.0;
  memset(&SD->u1.f2.dv5[1376], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1409] = 1.0;
  memset(&SD->u1.f2.dv5[1410], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1443] = t17;
  memset(&SD->u1.f2.dv5[1444], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1477] = t17;
  memset(&SD->u1.f2.dv5[1478], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[1650] = -1.0;
  memset(&SD->u1.f2.dv5[1651], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1684] = 1.0;
  memset(&SD->u1.f2.dv5[1685], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1718] = t20;
  memset(&SD->u1.f2.dv5[1719], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1752] = t20;
  memset(&SD->u1.f2.dv5[1753], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[1925] = -1.0;
  memset(&SD->u1.f2.dv5[1926], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1959] = 1.0;
  memset(&SD->u1.f2.dv5[1960], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[1993] = t23;
  memset(&SD->u1.f2.dv5[1994], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2027] = t23;
  memset(&SD->u1.f2.dv5[2028], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[2200] = -1.0;
  memset(&SD->u1.f2.dv5[2201], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2234] = 1.0;
  memset(&SD->u1.f2.dv5[2235], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2268] = t26;
  memset(&SD->u1.f2.dv5[2269], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2302] = t26;
  memset(&SD->u1.f2.dv5[2303], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[2475] = -1.0;
  memset(&SD->u1.f2.dv5[2476], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2509] = 1.0;
  memset(&SD->u1.f2.dv5[2510], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2543] = t29;
  memset(&SD->u1.f2.dv5[2544], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2577] = t29;
  memset(&SD->u1.f2.dv5[2578], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[2750] = -1.0;
  memset(&SD->u1.f2.dv5[2751], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2784] = 1.0;
  memset(&SD->u1.f2.dv5[2785], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2818] = t32;
  memset(&SD->u1.f2.dv5[2819], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[2852] = t32;
  memset(&SD->u1.f2.dv5[2853], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[3025] = -1.0;
  memset(&SD->u1.f2.dv5[3026], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3059] = 1.0;
  memset(&SD->u1.f2.dv5[3060], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3093] = t35;
  memset(&SD->u1.f2.dv5[3094], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3127] = t35;
  memset(&SD->u1.f2.dv5[3128], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[3300] = -1.0;
  memset(&SD->u1.f2.dv5[3301], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3334] = 1.0;
  memset(&SD->u1.f2.dv5[3335], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3368] = t38;
  memset(&SD->u1.f2.dv5[3369], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3402] = t38;
  memset(&SD->u1.f2.dv5[3403], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[3575] = -1.0;
  memset(&SD->u1.f2.dv5[3576], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3609] = 1.0;
  memset(&SD->u1.f2.dv5[3610], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3643] = t41;
  memset(&SD->u1.f2.dv5[3644], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3677] = t41;
  memset(&SD->u1.f2.dv5[3678], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[3850] = -1.0;
  memset(&SD->u1.f2.dv5[3851], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3884] = 1.0;
  memset(&SD->u1.f2.dv5[3885], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3918] = t44;
  memset(&SD->u1.f2.dv5[3919], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[3952] = t44;
  memset(&SD->u1.f2.dv5[3953], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[4125] = -1.0;
  memset(&SD->u1.f2.dv5[4126], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4159] = 1.0;
  memset(&SD->u1.f2.dv5[4160], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4193] = t47;
  memset(&SD->u1.f2.dv5[4194], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4227] = t47;
  memset(&SD->u1.f2.dv5[4228], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[4400] = -1.0;
  memset(&SD->u1.f2.dv5[4401], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4434] = 1.0;
  memset(&SD->u1.f2.dv5[4435], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4468] = t50;
  memset(&SD->u1.f2.dv5[4469], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4502] = t50;
  memset(&SD->u1.f2.dv5[4503], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv5[4675] = -1.0;
  memset(&SD->u1.f2.dv5[4676], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4709] = 1.0;
  memset(&SD->u1.f2.dv5[4710], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[4726] = t3;
  memset(&SD->u1.f2.dv5[4727], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4760] = t3;
  memset(&SD->u1.f2.dv5[4761], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[4950] = -1.0;
  memset(&SD->u1.f2.dv5[4951], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[4984] = 1.0;
  memset(&SD->u1.f2.dv5[4985], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[5001] = t6;
  memset(&SD->u1.f2.dv5[5002], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[5035] = t6;
  memset(&SD->u1.f2.dv5[5036], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[5225] = -1.0;
  memset(&SD->u1.f2.dv5[5226], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[5259] = 1.0;
  memset(&SD->u1.f2.dv5[5260], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[5276] = t9;
  memset(&SD->u1.f2.dv5[5277], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[5310] = t9;
  memset(&SD->u1.f2.dv5[5311], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[5500] = -1.0;
  memset(&SD->u1.f2.dv5[5501], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[5534] = 1.0;
  memset(&SD->u1.f2.dv5[5535], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[5551] = t12;
  memset(&SD->u1.f2.dv5[5552], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[5585] = t12;
  memset(&SD->u1.f2.dv5[5586], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[5775] = -1.0;
  memset(&SD->u1.f2.dv5[5776], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[5809] = 1.0;
  memset(&SD->u1.f2.dv5[5810], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[5826] = t15;
  memset(&SD->u1.f2.dv5[5827], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[5860] = t15;
  memset(&SD->u1.f2.dv5[5861], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[6050] = -1.0;
  memset(&SD->u1.f2.dv5[6051], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6084] = 1.0;
  memset(&SD->u1.f2.dv5[6085], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[6101] = t18;
  memset(&SD->u1.f2.dv5[6102], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6135] = t18;
  memset(&SD->u1.f2.dv5[6136], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[6325] = -1.0;
  memset(&SD->u1.f2.dv5[6326], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6359] = 1.0;
  memset(&SD->u1.f2.dv5[6360], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[6376] = t21;
  memset(&SD->u1.f2.dv5[6377], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6410] = t21;
  memset(&SD->u1.f2.dv5[6411], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[6600] = -1.0;
  memset(&SD->u1.f2.dv5[6601], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6634] = 1.0;
  memset(&SD->u1.f2.dv5[6635], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[6651] = t24;
  memset(&SD->u1.f2.dv5[6652], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6685] = t24;
  memset(&SD->u1.f2.dv5[6686], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[6875] = -1.0;
  memset(&SD->u1.f2.dv5[6876], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6909] = 1.0;
  memset(&SD->u1.f2.dv5[6910], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[6926] = t27;
  memset(&SD->u1.f2.dv5[6927], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[6960] = t27;
  memset(&SD->u1.f2.dv5[6961], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[7150] = -1.0;
  memset(&SD->u1.f2.dv5[7151], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[7184] = 1.0;
  memset(&SD->u1.f2.dv5[7185], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[7201] = t30;
  memset(&SD->u1.f2.dv5[7202], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[7235] = t30;
  memset(&SD->u1.f2.dv5[7236], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[7425] = -1.0;
  memset(&SD->u1.f2.dv5[7426], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[7459] = 1.0;
  memset(&SD->u1.f2.dv5[7460], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[7476] = t33;
  memset(&SD->u1.f2.dv5[7477], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[7510] = t33;
  memset(&SD->u1.f2.dv5[7511], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[7700] = -1.0;
  memset(&SD->u1.f2.dv5[7701], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[7734] = 1.0;
  memset(&SD->u1.f2.dv5[7735], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[7751] = t36;
  memset(&SD->u1.f2.dv5[7752], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[7785] = t36;
  memset(&SD->u1.f2.dv5[7786], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[7975] = -1.0;
  memset(&SD->u1.f2.dv5[7976], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8009] = 1.0;
  memset(&SD->u1.f2.dv5[8010], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[8026] = t39;
  memset(&SD->u1.f2.dv5[8027], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8060] = t39;
  memset(&SD->u1.f2.dv5[8061], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[8250] = -1.0;
  memset(&SD->u1.f2.dv5[8251], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8284] = 1.0;
  memset(&SD->u1.f2.dv5[8285], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[8301] = t42;
  memset(&SD->u1.f2.dv5[8302], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8335] = t42;
  memset(&SD->u1.f2.dv5[8336], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[8525] = -1.0;
  memset(&SD->u1.f2.dv5[8526], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8559] = 1.0;
  memset(&SD->u1.f2.dv5[8560], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[8576] = t45;
  memset(&SD->u1.f2.dv5[8577], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8610] = t45;
  memset(&SD->u1.f2.dv5[8611], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[8800] = -1.0;
  memset(&SD->u1.f2.dv5[8801], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8834] = 1.0;
  memset(&SD->u1.f2.dv5[8835], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[8851] = t48;
  memset(&SD->u1.f2.dv5[8852], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[8885] = t48;
  memset(&SD->u1.f2.dv5[8886], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv5[9075] = -1.0;
  memset(&SD->u1.f2.dv5[9076], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[9109] = 1.0;
  memset(&SD->u1.f2.dv5[9110], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[9126] = t51;
  memset(&SD->u1.f2.dv5[9127], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[9160] = t51;
  memset(&SD->u1.f2.dv5[9161], 0, 223U * sizeof(real_T));
  SD->u1.f2.dv5[9384] = t4;
  memset(&SD->u1.f2.dv5[9385], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[9418] = t4;
  memset(&SD->u1.f2.dv5[9419], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[9659] = t7;
  memset(&SD->u1.f2.dv5[9660], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[9693] = t7;
  memset(&SD->u1.f2.dv5[9694], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[9934] = t10;
  memset(&SD->u1.f2.dv5[9935], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[9968] = t10;
  memset(&SD->u1.f2.dv5[9969], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[10209] = t13;
  memset(&SD->u1.f2.dv5[10210], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[10243] = t13;
  memset(&SD->u1.f2.dv5[10244], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[10484] = t16;
  memset(&SD->u1.f2.dv5[10485], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[10518] = t16;
  memset(&SD->u1.f2.dv5[10519], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[10759] = t19;
  memset(&SD->u1.f2.dv5[10760], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[10793] = t19;
  memset(&SD->u1.f2.dv5[10794], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[11034] = t22;
  memset(&SD->u1.f2.dv5[11035], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[11068] = t22;
  memset(&SD->u1.f2.dv5[11069], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[11309] = t25;
  memset(&SD->u1.f2.dv5[11310], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[11343] = t25;
  memset(&SD->u1.f2.dv5[11344], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[11584] = t28;
  memset(&SD->u1.f2.dv5[11585], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[11618] = t28;
  memset(&SD->u1.f2.dv5[11619], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[11859] = t31;
  memset(&SD->u1.f2.dv5[11860], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[11893] = t31;
  memset(&SD->u1.f2.dv5[11894], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[12134] = t34;
  memset(&SD->u1.f2.dv5[12135], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[12168] = t34;
  memset(&SD->u1.f2.dv5[12169], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[12409] = t37;
  memset(&SD->u1.f2.dv5[12410], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[12443] = t37;
  memset(&SD->u1.f2.dv5[12444], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[12684] = t40;
  memset(&SD->u1.f2.dv5[12685], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[12718] = t40;
  memset(&SD->u1.f2.dv5[12719], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[12959] = t43;
  memset(&SD->u1.f2.dv5[12960], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[12993] = t43;
  memset(&SD->u1.f2.dv5[12994], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[13234] = t46;
  memset(&SD->u1.f2.dv5[13235], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[13268] = t46;
  memset(&SD->u1.f2.dv5[13269], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[13509] = t49;
  memset(&SD->u1.f2.dv5[13510], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[13543] = t49;
  memset(&SD->u1.f2.dv5[13544], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv5[13784] = t52;
  memset(&SD->u1.f2.dv5[13785], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[13818] = t52;
  memset(&SD->u1.f2.dv5[13819], 0, 155U * sizeof(real_T));
  SD->u1.f2.dv5[13974] = 1.0;
  memset(&SD->u1.f2.dv5[13975], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14008] = -1.0;
  memset(&SD->u1.f2.dv5[14009], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv5[14093] = 1.0;
  SD->u1.f2.dv5[14094] = 0.0;
  SD->u1.f2.dv5[14095] = 0.0;
  SD->u1.f2.dv5[14096] = -1.0;
  memset(&SD->u1.f2.dv5[14097], 0, 15U * sizeof(real_T));
  SD->u1.f2.dv5[14112] = 1.0;
  memset(&SD->u1.f2.dv5[14113], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14146] = -1.0;
  memset(&SD->u1.f2.dv5[14147], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv5[14231] = 1.0;
  SD->u1.f2.dv5[14232] = 0.0;
  SD->u1.f2.dv5[14233] = 0.0;
  SD->u1.f2.dv5[14234] = -1.0;
  memset(&SD->u1.f2.dv5[14235], 0, 15U * sizeof(real_T));
  SD->u1.f2.dv5[14250] = 1.0;
  memset(&SD->u1.f2.dv5[14251], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14284] = -1.0;
  memset(&SD->u1.f2.dv5[14285], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv5[14369] = 1.0;
  SD->u1.f2.dv5[14370] = 0.0;
  SD->u1.f2.dv5[14371] = 0.0;
  SD->u1.f2.dv5[14372] = -1.0;
  memset(&SD->u1.f2.dv5[14373], 0, 15U * sizeof(real_T));
  SD->u1.f2.dv5[14388] = 1.0;
  memset(&SD->u1.f2.dv5[14389], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14422] = -1.0;
  memset(&SD->u1.f2.dv5[14423], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[14526] = 1.0;
  memset(&SD->u1.f2.dv5[14527], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14560] = -1.0;
  memset(&SD->u1.f2.dv5[14561], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[14664] = 1.0;
  memset(&SD->u1.f2.dv5[14665], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14698] = -1.0;
  memset(&SD->u1.f2.dv5[14699], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[14802] = 1.0;
  memset(&SD->u1.f2.dv5[14803], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14836] = -1.0;
  memset(&SD->u1.f2.dv5[14837], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[14940] = 1.0;
  memset(&SD->u1.f2.dv5[14941], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[14974] = -1.0;
  memset(&SD->u1.f2.dv5[14975], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[15078] = 1.0;
  memset(&SD->u1.f2.dv5[15079], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[15112] = -1.0;
  memset(&SD->u1.f2.dv5[15113], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[15216] = 1.0;
  memset(&SD->u1.f2.dv5[15217], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[15250] = -1.0;
  memset(&SD->u1.f2.dv5[15251], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[15354] = 1.0;
  memset(&SD->u1.f2.dv5[15355], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[15388] = -1.0;
  memset(&SD->u1.f2.dv5[15389], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[15492] = 1.0;
  memset(&SD->u1.f2.dv5[15493], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[15526] = -1.0;
  memset(&SD->u1.f2.dv5[15527], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[15630] = 1.0;
  memset(&SD->u1.f2.dv5[15631], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[15664] = -1.0;
  memset(&SD->u1.f2.dv5[15665], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[15768] = 1.0;
  memset(&SD->u1.f2.dv5[15769], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[15802] = -1.0;
  memset(&SD->u1.f2.dv5[15803], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[15906] = 1.0;
  memset(&SD->u1.f2.dv5[15907], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[15940] = -1.0;
  memset(&SD->u1.f2.dv5[15941], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[16044] = 1.0;
  memset(&SD->u1.f2.dv5[16045], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[16078] = -1.0;
  memset(&SD->u1.f2.dv5[16079], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[16182] = 1.0;
  memset(&SD->u1.f2.dv5[16183], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[16216] = -1.0;
  memset(&SD->u1.f2.dv5[16217], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[16320] = 1.0;
  memset(&SD->u1.f2.dv5[16321], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[16354] = -1.0;
  memset(&SD->u1.f2.dv5[16355], 0, 73U * sizeof(real_T));
  SD->u1.f2.dv5[16428] = 1.0;
  SD->u1.f2.dv5[16429] = 0.0;
  SD->u1.f2.dv5[16430] = 0.0;
  SD->u1.f2.dv5[16431] = -1.0;
  memset(&SD->u1.f2.dv5[16432], 0, 26U * sizeof(real_T));
  SD->u1.f2.dv5[16458] = 1.0;
  memset(&SD->u1.f2.dv5[16459], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[16492] = -1.0;
  memset(&SD->u1.f2.dv5[16493], 0, 73U * sizeof(real_T));
  SD->u1.f2.dv5[16566] = 1.0;
  SD->u1.f2.dv5[16567] = 0.0;
  SD->u1.f2.dv5[16568] = 0.0;
  SD->u1.f2.dv5[16569] = -1.0;
  memset(&SD->u1.f2.dv5[16570], 0, 26U * sizeof(real_T));
  SD->u1.f2.dv5[16596] = 1.0;
  memset(&SD->u1.f2.dv5[16597], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[16630] = -1.0;
  memset(&SD->u1.f2.dv5[16631], 0, 73U * sizeof(real_T));
  SD->u1.f2.dv5[16704] = 1.0;
  SD->u1.f2.dv5[16705] = 0.0;
  SD->u1.f2.dv5[16706] = 0.0;
  SD->u1.f2.dv5[16707] = -1.0;
  memset(&SD->u1.f2.dv5[16708], 0, 26U * sizeof(real_T));
  SD->u1.f2.dv5[16734] = 1.0;
  memset(&SD->u1.f2.dv5[16735], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[16768] = -1.0;
  memset(&SD->u1.f2.dv5[16769], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[16872] = 1.0;
  memset(&SD->u1.f2.dv5[16873], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[16906] = -1.0;
  memset(&SD->u1.f2.dv5[16907], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17010] = 1.0;
  memset(&SD->u1.f2.dv5[17011], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[17044] = -1.0;
  memset(&SD->u1.f2.dv5[17045], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17148] = 1.0;
  memset(&SD->u1.f2.dv5[17149], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[17182] = -1.0;
  memset(&SD->u1.f2.dv5[17183], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17286] = 1.0;
  memset(&SD->u1.f2.dv5[17287], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[17320] = -1.0;
  memset(&SD->u1.f2.dv5[17321], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17424] = 1.0;
  memset(&SD->u1.f2.dv5[17425], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[17458] = -1.0;
  memset(&SD->u1.f2.dv5[17459], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17562] = 1.0;
  memset(&SD->u1.f2.dv5[17563], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[17596] = -1.0;
  memset(&SD->u1.f2.dv5[17597], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17700] = 1.0;
  memset(&SD->u1.f2.dv5[17701], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[17734] = -1.0;
  memset(&SD->u1.f2.dv5[17735], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17838] = 1.0;
  memset(&SD->u1.f2.dv5[17839], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[17872] = -1.0;
  memset(&SD->u1.f2.dv5[17873], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[17976] = 1.0;
  memset(&SD->u1.f2.dv5[17977], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[18010] = -1.0;
  memset(&SD->u1.f2.dv5[18011], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[18114] = 1.0;
  memset(&SD->u1.f2.dv5[18115], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[18148] = -1.0;
  memset(&SD->u1.f2.dv5[18149], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[18252] = 1.0;
  memset(&SD->u1.f2.dv5[18253], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[18286] = -1.0;
  memset(&SD->u1.f2.dv5[18287], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[18390] = 1.0;
  memset(&SD->u1.f2.dv5[18391], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[18424] = -1.0;
  memset(&SD->u1.f2.dv5[18425], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv5[18528] = 1.0;
  memset(&SD->u1.f2.dv5[18529], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv5[18562] = -1.0;
  memset(&SD->u1.f2.dv5[18563], 0, 3579U * sizeof(real_T));
  SD->u1.f2.dv5[22142] = -1.0;
  memset(&SD->u1.f2.dv5[22143], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[22159] = -1.0;
  memset(&SD->u1.f2.dv5[22160], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[22280] = -1.0;
  memset(&SD->u1.f2.dv5[22281], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[22297] = -1.0;
  memset(&SD->u1.f2.dv5[22298], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[22418] = -1.0;
  memset(&SD->u1.f2.dv5[22419], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[22435] = -1.0;
  memset(&SD->u1.f2.dv5[22436], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[22556] = -1.0;
  memset(&SD->u1.f2.dv5[22557], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[22573] = -1.0;
  memset(&SD->u1.f2.dv5[22574], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[22694] = -1.0;
  memset(&SD->u1.f2.dv5[22695], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[22711] = -1.0;
  memset(&SD->u1.f2.dv5[22712], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[22832] = -1.0;
  memset(&SD->u1.f2.dv5[22833], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[22849] = -1.0;
  memset(&SD->u1.f2.dv5[22850], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[22970] = -1.0;
  memset(&SD->u1.f2.dv5[22971], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[22987] = -1.0;
  memset(&SD->u1.f2.dv5[22988], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[23108] = -1.0;
  memset(&SD->u1.f2.dv5[23109], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[23125] = -1.0;
  memset(&SD->u1.f2.dv5[23126], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[23246] = -1.0;
  memset(&SD->u1.f2.dv5[23247], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[23263] = -1.0;
  memset(&SD->u1.f2.dv5[23264], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[23384] = -1.0;
  memset(&SD->u1.f2.dv5[23385], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[23401] = -1.0;
  memset(&SD->u1.f2.dv5[23402], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[23522] = -1.0;
  memset(&SD->u1.f2.dv5[23523], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[23539] = -1.0;
  memset(&SD->u1.f2.dv5[23540], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[23660] = -1.0;
  memset(&SD->u1.f2.dv5[23661], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[23677] = -1.0;
  memset(&SD->u1.f2.dv5[23678], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[23798] = -1.0;
  memset(&SD->u1.f2.dv5[23799], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[23815] = -1.0;
  memset(&SD->u1.f2.dv5[23816], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[23936] = -1.0;
  memset(&SD->u1.f2.dv5[23937], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[23953] = -1.0;
  memset(&SD->u1.f2.dv5[23954], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[24074] = -1.0;
  memset(&SD->u1.f2.dv5[24075], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[24091] = -1.0;
  memset(&SD->u1.f2.dv5[24092], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[24212] = -1.0;
  memset(&SD->u1.f2.dv5[24213], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[24229] = -1.0;
  memset(&SD->u1.f2.dv5[24230], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv5[24350] = -1.0;
  memset(&SD->u1.f2.dv5[24351], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv5[24367] = -1.0;
  memset(&SD->u1.f2.dv5[24368], 0, 2466U * sizeof(real_T));
  SD->u1.f2.dv5[26834] = -1.0;
  SD->u1.f2.dv5[26835] = 0.0;
  SD->u1.f2.dv5[26836] = 0.0;
  SD->u1.f2.dv5[26837] = -1.0;
  memset(&SD->u1.f2.dv5[26838], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[26972] = -1.0;
  SD->u1.f2.dv5[26973] = 0.0;
  SD->u1.f2.dv5[26974] = 0.0;
  SD->u1.f2.dv5[26975] = -1.0;
  memset(&SD->u1.f2.dv5[26976], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[27110] = -1.0;
  SD->u1.f2.dv5[27111] = 0.0;
  SD->u1.f2.dv5[27112] = 0.0;
  SD->u1.f2.dv5[27113] = -1.0;
  memset(&SD->u1.f2.dv5[27114], 0, 274U * sizeof(real_T));
  SD->u1.f2.dv5[27388] = -1.0;
  SD->u1.f2.dv5[27389] = 0.0;
  SD->u1.f2.dv5[27390] = 0.0;
  SD->u1.f2.dv5[27391] = -1.0;
  memset(&SD->u1.f2.dv5[27392], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[27526] = -1.0;
  SD->u1.f2.dv5[27527] = 0.0;
  SD->u1.f2.dv5[27528] = 0.0;
  SD->u1.f2.dv5[27529] = -1.0;
  memset(&SD->u1.f2.dv5[27530], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[27664] = -1.0;
  SD->u1.f2.dv5[27665] = 0.0;
  SD->u1.f2.dv5[27666] = 0.0;
  SD->u1.f2.dv5[27667] = -1.0;
  memset(&SD->u1.f2.dv5[27668], 0, 548U * sizeof(real_T));
  SD->u1.f2.dv5[28216] = t53;
  SD->u1.f2.dv5[28217] = 0.0;
  SD->u1.f2.dv5[28218] = 0.0;
  SD->u1.f2.dv5[28219] = t53;
  memset(&SD->u1.f2.dv5[28220], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[28354] = t56;
  SD->u1.f2.dv5[28355] = 0.0;
  SD->u1.f2.dv5[28356] = 0.0;
  SD->u1.f2.dv5[28357] = t56;
  memset(&SD->u1.f2.dv5[28358], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[28492] = t59;
  SD->u1.f2.dv5[28493] = 0.0;
  SD->u1.f2.dv5[28494] = 0.0;
  SD->u1.f2.dv5[28495] = t59;
  memset(&SD->u1.f2.dv5[28496], 0, 405U * sizeof(real_T));
  SD->u1.f2.dv5[28901] = t54;
  SD->u1.f2.dv5[28902] = 0.0;
  SD->u1.f2.dv5[28903] = 0.0;
  SD->u1.f2.dv5[28904] = t54;
  memset(&SD->u1.f2.dv5[28905], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[29039] = t57;
  SD->u1.f2.dv5[29040] = 0.0;
  SD->u1.f2.dv5[29041] = 0.0;
  SD->u1.f2.dv5[29042] = t57;
  memset(&SD->u1.f2.dv5[29043], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[29177] = t60;
  SD->u1.f2.dv5[29178] = 0.0;
  SD->u1.f2.dv5[29179] = 0.0;
  SD->u1.f2.dv5[29180] = t60;
  memset(&SD->u1.f2.dv5[29181], 0, 405U * sizeof(real_T));
  SD->u1.f2.dv5[29586] = t55;
  SD->u1.f2.dv5[29587] = 0.0;
  SD->u1.f2.dv5[29588] = 0.0;
  SD->u1.f2.dv5[29589] = t55;
  memset(&SD->u1.f2.dv5[29590], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[29724] = t58;
  SD->u1.f2.dv5[29725] = 0.0;
  SD->u1.f2.dv5[29726] = 0.0;
  SD->u1.f2.dv5[29727] = t58;
  memset(&SD->u1.f2.dv5[29728], 0, 134U * sizeof(real_T));
  SD->u1.f2.dv5[29862] = t61;
  SD->u1.f2.dv5[29863] = 0.0;
  SD->u1.f2.dv5[29864] = 0.0;
  SD->u1.f2.dv5[29865] = t61;
  memset(&SD->u1.f2.dv5[29866], 0, 268U * sizeof(real_T));
  SD->u1.f2.dv5[30134] = -1.0;
  memset(&SD->u1.f2.dv5[30135], 0, 137U * sizeof(real_T));
  SD->u1.f2.dv5[30272] = -1.0;
  memset(&SD->u1.f2.dv5[30273], 0, 137U * sizeof(real_T));
  SD->u1.f2.dv5[30410] = -1.0;
  memset(&SD->u1.f2.dv5[30411], 0, 551U * sizeof(real_T));
  for (i2 = 0; i2 < 226; i2++) {
    memcpy(&Aiq[i2 * 137], &SD->u1.f2.dv5[i2 * 137], 137U * sizeof(real_T));
  }

  t62 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t62);
  t2 = muDoubleScalarAbs(t3);
  t5 = muDoubleScalarAbs(t4);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t70 = 1.0 / t2;
  t71 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t71);
  t2 = muDoubleScalarAbs(t6);
  t5 = muDoubleScalarAbs(t7);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t79 = 1.0 / t2;
  t80 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t80);
  t2 = muDoubleScalarAbs(t9);
  t5 = muDoubleScalarAbs(t10);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t88 = 1.0 / t2;
  t89 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t89);
  t2 = muDoubleScalarAbs(t12);
  t5 = muDoubleScalarAbs(t13);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t97 = 1.0 / t2;
  t98 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t98);
  t2 = muDoubleScalarAbs(t15);
  t5 = muDoubleScalarAbs(t16);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t106 = 1.0 / t2;
  t107 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t107);
  t2 = muDoubleScalarAbs(t18);
  t5 = muDoubleScalarAbs(t19);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t115 = 1.0 / t2;
  t116 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t116);
  t2 = muDoubleScalarAbs(t21);
  t5 = muDoubleScalarAbs(t22);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t124 = 1.0 / t2;
  t125 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t125);
  t2 = muDoubleScalarAbs(t24);
  t5 = muDoubleScalarAbs(t25);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t133 = 1.0 / t2;
  t134 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t134);
  t2 = muDoubleScalarAbs(t27);
  t5 = muDoubleScalarAbs(t28);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t142 = 1.0 / t2;
  t143 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t143);
  t2 = muDoubleScalarAbs(t30);
  t5 = muDoubleScalarAbs(t31);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t151 = 1.0 / t2;
  t152 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t152);
  t2 = muDoubleScalarAbs(t33);
  t5 = muDoubleScalarAbs(t34);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t160 = 1.0 / t2;
  t161 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t161);
  t2 = muDoubleScalarAbs(t36);
  t5 = muDoubleScalarAbs(t37);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t169 = 1.0 / t2;
  t170 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t170);
  t2 = muDoubleScalarAbs(t39);
  t5 = muDoubleScalarAbs(t40);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t47 = 1.0 / t2;
  t50 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t50);
  t2 = muDoubleScalarAbs(t42);
  t5 = muDoubleScalarAbs(t43);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t41 = 1.0 / t2;
  t44 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t44);
  t2 = muDoubleScalarAbs(t45);
  t5 = muDoubleScalarAbs(t46);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t35 = 1.0 / t2;
  t38 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t38);
  t2 = muDoubleScalarAbs(t48);
  t5 = muDoubleScalarAbs(t49);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t29 = 1.0 / t2;
  t32 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t32);
  t2 = muDoubleScalarAbs(t51);
  t5 = muDoubleScalarAbs(t52);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t14 = 1.0 / t2;
  t17 = Cpx1 + in12[0];
  t20 = -Cpx1 + in12[0];
  t23 = Cpy1 + in13[0];
  t26 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t2 = muDoubleScalarAbs(t54);
  t5 = muDoubleScalarAbs(t55);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t11 = 1.0 / t2;
  a = muDoubleScalarAbs(t56);
  t2 = muDoubleScalarAbs(t57);
  t5 = muDoubleScalarAbs(t58);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t59);
  t2 = muDoubleScalarAbs(t60);
  t5 = muDoubleScalarAbs(t61);
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
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t47) + t40 * (in7[2] -
              in8->data[24] * t40 * t47)) - t170 * (in7[0] + in8->data[24] *
    t170 * t47);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t41) + t43 * (in7[2] -
              in8->data[26] * t43 * t41)) - t50 * (in7[0] + in8->data[26] * t50 *
    t41);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t35) + t46 * (in7[2] -
              in8->data[28] * t46 * t35)) - t44 * (in7[0] + in8->data[28] * t44 *
    t35);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t29) + t49 * (in7[2] -
              in8->data[30] * t49 * t29)) - t38 * (in7[0] + in8->data[30] * t38 *
    t29);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t14) + t52 * (in7[2] -
              in8->data[32] * t52 * t14)) - t32 * (in7[0] + in8->data[32] * t32 *
    t14);
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
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t47) + t40 * (in7[2] -
    in9->data[24] * t40 * t47)) - t170 * (in7[0] + in9->data[24] * t170 * t47);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t41) + t43 * (in7[2] -
    in9->data[26] * t43 * t41)) - t50 * (in7[0] + in9->data[26] * t50 * t41);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t35) + t46 * (in7[2] -
    in9->data[28] * t46 * t35)) - t44 * (in7[0] + in9->data[28] * t44 * t35);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t29) + t49 * (in7[2] -
    in9->data[30] * t49 * t29)) - t38 * (in7[0] + in9->data[30] * t38 * t29);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t14) + t52 * (in7[2] -
    in9->data[32] * t52 * t14)) - t32 * (in7[0] + in9->data[32] * t32 * t14);
  biq[119] = t17;
  biq[120] = t17;
  biq[121] = t17;
  biq[122] = t20;
  biq[123] = t20;
  biq[124] = t20;
  biq[125] = t23;
  biq[126] = t23;
  biq[127] = t23;
  biq[128] = t26;
  biq[129] = t26;
  biq[130] = t26;
  biq[131] = (t53 * (in15[0] - in9->data[1] * t53 * t11) + t54 * (in15[1] -
    in9->data[1] * t54 * t11)) + t55 * (in15[2] - in9->data[1] * t55 * t11);
  biq[132] = (t56 * (in15[3] - in9->data[1] * t56 * t8) + t57 * (in15[4] -
    in9->data[1] * t57 * t8)) + t58 * (in15[5] - in9->data[1] * t58 * t8);
  biq[133] = (t59 * (in15[6] - in9->data[1] * t59 * t2) + t60 * (in15[7] -
    in9->data[1] * t60 * t2)) + t61 * (in15[8] - in9->data[1] * t61 * t2);
  biq[134] = (t53 * (in15[0] - in8->data[1] * t53 * t11) + t54 * (in15[1] -
    in8->data[1] * t54 * t11)) + t55 * (in15[2] - in8->data[1] * t55 * t11);
  biq[135] = (t56 * (in15[3] - in8->data[1] * t56 * t8) + t57 * (in15[4] -
    in8->data[1] * t57 * t8)) + t58 * (in15[5] - in8->data[1] * t58 * t8);
  biq[136] = (t59 * (in15[6] - in8->data[1] * t59 * t2) + t60 * (in15[7] -
    in8->data[1] * t60 * t2)) + t61 * (in15[8] - in8->data[1] * t61 * t2);
}

/* End of code generation (Iq_RightStart13DFootV97.cpp) */
