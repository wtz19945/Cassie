/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_RightStart23DFootV99.cpp
 *
 * Code generation for function 'Iq_RightStart23DFootV99'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV99_form_Step2.h"
#include "Iq_RightStart23DFootV99.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart23DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart23DFootV99.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_RightStart23DFootV99(c_temp_MPC3DFootV99_form_Step2S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[8], real_T Aiq[33154],
  real_T biq[137])
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

  /* IQ_RIGHTSTART23DFOOTV99 */
  /*     [AIQ,BIQ] = IQ_RIGHTSTART23DFOOTV99(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     10-Jul-2023 17:30:04 */
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
  SD->u1.f2.dv4[0] = -1.0;
  memset(&SD->u1.f2.dv4[1], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[34] = 1.0;
  memset(&SD->u1.f2.dv4[35], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[68] = t2;
  memset(&SD->u1.f2.dv4[69], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[102] = t2;
  memset(&SD->u1.f2.dv4[103], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[275] = -1.0;
  memset(&SD->u1.f2.dv4[276], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[309] = 1.0;
  memset(&SD->u1.f2.dv4[310], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[343] = t5;
  memset(&SD->u1.f2.dv4[344], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[377] = t5;
  memset(&SD->u1.f2.dv4[378], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[550] = -1.0;
  memset(&SD->u1.f2.dv4[551], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[584] = 1.0;
  memset(&SD->u1.f2.dv4[585], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[618] = t8;
  memset(&SD->u1.f2.dv4[619], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[652] = t8;
  memset(&SD->u1.f2.dv4[653], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[825] = -1.0;
  memset(&SD->u1.f2.dv4[826], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[859] = 1.0;
  memset(&SD->u1.f2.dv4[860], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[893] = t11;
  memset(&SD->u1.f2.dv4[894], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[927] = t11;
  memset(&SD->u1.f2.dv4[928], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[1100] = -1.0;
  memset(&SD->u1.f2.dv4[1101], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1134] = 1.0;
  memset(&SD->u1.f2.dv4[1135], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1168] = t14;
  memset(&SD->u1.f2.dv4[1169], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1202] = t14;
  memset(&SD->u1.f2.dv4[1203], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[1375] = -1.0;
  memset(&SD->u1.f2.dv4[1376], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1409] = 1.0;
  memset(&SD->u1.f2.dv4[1410], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1443] = t17;
  memset(&SD->u1.f2.dv4[1444], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1477] = t17;
  memset(&SD->u1.f2.dv4[1478], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[1650] = -1.0;
  memset(&SD->u1.f2.dv4[1651], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1684] = 1.0;
  memset(&SD->u1.f2.dv4[1685], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1718] = t20;
  memset(&SD->u1.f2.dv4[1719], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1752] = t20;
  memset(&SD->u1.f2.dv4[1753], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[1925] = -1.0;
  memset(&SD->u1.f2.dv4[1926], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1959] = 1.0;
  memset(&SD->u1.f2.dv4[1960], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1993] = t23;
  memset(&SD->u1.f2.dv4[1994], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2027] = t23;
  memset(&SD->u1.f2.dv4[2028], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[2200] = -1.0;
  memset(&SD->u1.f2.dv4[2201], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2234] = 1.0;
  memset(&SD->u1.f2.dv4[2235], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2268] = t26;
  memset(&SD->u1.f2.dv4[2269], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2302] = t26;
  memset(&SD->u1.f2.dv4[2303], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[2475] = -1.0;
  memset(&SD->u1.f2.dv4[2476], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2509] = 1.0;
  memset(&SD->u1.f2.dv4[2510], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2543] = t29;
  memset(&SD->u1.f2.dv4[2544], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2577] = t29;
  memset(&SD->u1.f2.dv4[2578], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[2750] = -1.0;
  memset(&SD->u1.f2.dv4[2751], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2784] = 1.0;
  memset(&SD->u1.f2.dv4[2785], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2818] = t32;
  memset(&SD->u1.f2.dv4[2819], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2852] = t32;
  memset(&SD->u1.f2.dv4[2853], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[3025] = -1.0;
  memset(&SD->u1.f2.dv4[3026], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3059] = 1.0;
  memset(&SD->u1.f2.dv4[3060], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3093] = t35;
  memset(&SD->u1.f2.dv4[3094], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3127] = t35;
  memset(&SD->u1.f2.dv4[3128], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[3300] = -1.0;
  memset(&SD->u1.f2.dv4[3301], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3334] = 1.0;
  memset(&SD->u1.f2.dv4[3335], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3368] = t38;
  memset(&SD->u1.f2.dv4[3369], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3402] = t38;
  memset(&SD->u1.f2.dv4[3403], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[3575] = -1.0;
  memset(&SD->u1.f2.dv4[3576], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3609] = 1.0;
  memset(&SD->u1.f2.dv4[3610], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3643] = t41;
  memset(&SD->u1.f2.dv4[3644], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3677] = t41;
  memset(&SD->u1.f2.dv4[3678], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[3850] = -1.0;
  memset(&SD->u1.f2.dv4[3851], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3884] = 1.0;
  memset(&SD->u1.f2.dv4[3885], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3918] = t44;
  memset(&SD->u1.f2.dv4[3919], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3952] = t44;
  memset(&SD->u1.f2.dv4[3953], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[4125] = -1.0;
  memset(&SD->u1.f2.dv4[4126], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4159] = 1.0;
  memset(&SD->u1.f2.dv4[4160], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4193] = t47;
  memset(&SD->u1.f2.dv4[4194], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4227] = t47;
  memset(&SD->u1.f2.dv4[4228], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[4400] = -1.0;
  memset(&SD->u1.f2.dv4[4401], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4434] = 1.0;
  memset(&SD->u1.f2.dv4[4435], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4468] = t50;
  memset(&SD->u1.f2.dv4[4469], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4502] = t50;
  memset(&SD->u1.f2.dv4[4503], 0, 172U * sizeof(real_T));
  SD->u1.f2.dv4[4675] = -1.0;
  memset(&SD->u1.f2.dv4[4676], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4709] = 1.0;
  memset(&SD->u1.f2.dv4[4710], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[4726] = t3;
  memset(&SD->u1.f2.dv4[4727], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4760] = t3;
  memset(&SD->u1.f2.dv4[4761], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[4950] = -1.0;
  memset(&SD->u1.f2.dv4[4951], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4984] = 1.0;
  memset(&SD->u1.f2.dv4[4985], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5001] = t6;
  memset(&SD->u1.f2.dv4[5002], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5035] = t6;
  memset(&SD->u1.f2.dv4[5036], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[5225] = -1.0;
  memset(&SD->u1.f2.dv4[5226], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5259] = 1.0;
  memset(&SD->u1.f2.dv4[5260], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5276] = t9;
  memset(&SD->u1.f2.dv4[5277], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5310] = t9;
  memset(&SD->u1.f2.dv4[5311], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[5500] = -1.0;
  memset(&SD->u1.f2.dv4[5501], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5534] = 1.0;
  memset(&SD->u1.f2.dv4[5535], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5551] = t12;
  memset(&SD->u1.f2.dv4[5552], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5585] = t12;
  memset(&SD->u1.f2.dv4[5586], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[5775] = -1.0;
  memset(&SD->u1.f2.dv4[5776], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5809] = 1.0;
  memset(&SD->u1.f2.dv4[5810], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5826] = t15;
  memset(&SD->u1.f2.dv4[5827], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5860] = t15;
  memset(&SD->u1.f2.dv4[5861], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[6050] = -1.0;
  memset(&SD->u1.f2.dv4[6051], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6084] = 1.0;
  memset(&SD->u1.f2.dv4[6085], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6101] = t18;
  memset(&SD->u1.f2.dv4[6102], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6135] = t18;
  memset(&SD->u1.f2.dv4[6136], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[6325] = -1.0;
  memset(&SD->u1.f2.dv4[6326], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6359] = 1.0;
  memset(&SD->u1.f2.dv4[6360], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6376] = t21;
  memset(&SD->u1.f2.dv4[6377], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6410] = t21;
  memset(&SD->u1.f2.dv4[6411], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[6600] = -1.0;
  memset(&SD->u1.f2.dv4[6601], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6634] = 1.0;
  memset(&SD->u1.f2.dv4[6635], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6651] = t24;
  memset(&SD->u1.f2.dv4[6652], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6685] = t24;
  memset(&SD->u1.f2.dv4[6686], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[6875] = -1.0;
  memset(&SD->u1.f2.dv4[6876], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6909] = 1.0;
  memset(&SD->u1.f2.dv4[6910], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6926] = t27;
  memset(&SD->u1.f2.dv4[6927], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6960] = t27;
  memset(&SD->u1.f2.dv4[6961], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[7150] = -1.0;
  memset(&SD->u1.f2.dv4[7151], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7184] = 1.0;
  memset(&SD->u1.f2.dv4[7185], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7201] = t30;
  memset(&SD->u1.f2.dv4[7202], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7235] = t30;
  memset(&SD->u1.f2.dv4[7236], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[7425] = -1.0;
  memset(&SD->u1.f2.dv4[7426], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7459] = 1.0;
  memset(&SD->u1.f2.dv4[7460], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7476] = t33;
  memset(&SD->u1.f2.dv4[7477], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7510] = t33;
  memset(&SD->u1.f2.dv4[7511], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[7700] = -1.0;
  memset(&SD->u1.f2.dv4[7701], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7734] = 1.0;
  memset(&SD->u1.f2.dv4[7735], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7751] = t36;
  memset(&SD->u1.f2.dv4[7752], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7785] = t36;
  memset(&SD->u1.f2.dv4[7786], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[7975] = -1.0;
  memset(&SD->u1.f2.dv4[7976], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8009] = 1.0;
  memset(&SD->u1.f2.dv4[8010], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8026] = t39;
  memset(&SD->u1.f2.dv4[8027], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8060] = t39;
  memset(&SD->u1.f2.dv4[8061], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[8250] = -1.0;
  memset(&SD->u1.f2.dv4[8251], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8284] = 1.0;
  memset(&SD->u1.f2.dv4[8285], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8301] = t42;
  memset(&SD->u1.f2.dv4[8302], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8335] = t42;
  memset(&SD->u1.f2.dv4[8336], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[8525] = -1.0;
  memset(&SD->u1.f2.dv4[8526], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8559] = 1.0;
  memset(&SD->u1.f2.dv4[8560], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8576] = t45;
  memset(&SD->u1.f2.dv4[8577], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8610] = t45;
  memset(&SD->u1.f2.dv4[8611], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[8800] = -1.0;
  memset(&SD->u1.f2.dv4[8801], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8834] = 1.0;
  memset(&SD->u1.f2.dv4[8835], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8851] = t48;
  memset(&SD->u1.f2.dv4[8852], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8885] = t48;
  memset(&SD->u1.f2.dv4[8886], 0, 189U * sizeof(real_T));
  SD->u1.f2.dv4[9075] = -1.0;
  memset(&SD->u1.f2.dv4[9076], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9109] = 1.0;
  memset(&SD->u1.f2.dv4[9110], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9126] = t51;
  memset(&SD->u1.f2.dv4[9127], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9160] = t51;
  memset(&SD->u1.f2.dv4[9161], 0, 223U * sizeof(real_T));
  SD->u1.f2.dv4[9384] = t4;
  memset(&SD->u1.f2.dv4[9385], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9418] = t4;
  memset(&SD->u1.f2.dv4[9419], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[9659] = t7;
  memset(&SD->u1.f2.dv4[9660], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9693] = t7;
  memset(&SD->u1.f2.dv4[9694], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[9934] = t10;
  memset(&SD->u1.f2.dv4[9935], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9968] = t10;
  memset(&SD->u1.f2.dv4[9969], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[10209] = t13;
  memset(&SD->u1.f2.dv4[10210], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10243] = t13;
  memset(&SD->u1.f2.dv4[10244], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[10484] = t16;
  memset(&SD->u1.f2.dv4[10485], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10518] = t16;
  memset(&SD->u1.f2.dv4[10519], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[10759] = t19;
  memset(&SD->u1.f2.dv4[10760], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10793] = t19;
  memset(&SD->u1.f2.dv4[10794], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[11034] = t22;
  memset(&SD->u1.f2.dv4[11035], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11068] = t22;
  memset(&SD->u1.f2.dv4[11069], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[11309] = t25;
  memset(&SD->u1.f2.dv4[11310], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11343] = t25;
  memset(&SD->u1.f2.dv4[11344], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[11584] = t28;
  memset(&SD->u1.f2.dv4[11585], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11618] = t28;
  memset(&SD->u1.f2.dv4[11619], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[11859] = t31;
  memset(&SD->u1.f2.dv4[11860], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11893] = t31;
  memset(&SD->u1.f2.dv4[11894], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[12134] = t34;
  memset(&SD->u1.f2.dv4[12135], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12168] = t34;
  memset(&SD->u1.f2.dv4[12169], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[12409] = t37;
  memset(&SD->u1.f2.dv4[12410], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12443] = t37;
  memset(&SD->u1.f2.dv4[12444], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[12684] = t40;
  memset(&SD->u1.f2.dv4[12685], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12718] = t40;
  memset(&SD->u1.f2.dv4[12719], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[12959] = t43;
  memset(&SD->u1.f2.dv4[12960], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12993] = t43;
  memset(&SD->u1.f2.dv4[12994], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[13234] = t46;
  memset(&SD->u1.f2.dv4[13235], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13268] = t46;
  memset(&SD->u1.f2.dv4[13269], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[13509] = t49;
  memset(&SD->u1.f2.dv4[13510], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13543] = t49;
  memset(&SD->u1.f2.dv4[13544], 0, 240U * sizeof(real_T));
  SD->u1.f2.dv4[13784] = t52;
  memset(&SD->u1.f2.dv4[13785], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13818] = t52;
  memset(&SD->u1.f2.dv4[13819], 0, 155U * sizeof(real_T));
  SD->u1.f2.dv4[13974] = 1.0;
  memset(&SD->u1.f2.dv4[13975], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14008] = -1.0;
  memset(&SD->u1.f2.dv4[14009], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[14093] = 1.0;
  SD->u1.f2.dv4[14094] = 0.0;
  SD->u1.f2.dv4[14095] = -1.0;
  memset(&SD->u1.f2.dv4[14096], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[14112] = 1.0;
  memset(&SD->u1.f2.dv4[14113], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14146] = -1.0;
  memset(&SD->u1.f2.dv4[14147], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[14231] = 1.0;
  SD->u1.f2.dv4[14232] = 0.0;
  SD->u1.f2.dv4[14233] = -1.0;
  memset(&SD->u1.f2.dv4[14234], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[14250] = 1.0;
  memset(&SD->u1.f2.dv4[14251], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14284] = -1.0;
  memset(&SD->u1.f2.dv4[14285], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[14388] = 1.0;
  memset(&SD->u1.f2.dv4[14389], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14422] = -1.0;
  memset(&SD->u1.f2.dv4[14423], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[14526] = 1.0;
  memset(&SD->u1.f2.dv4[14527], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14560] = -1.0;
  memset(&SD->u1.f2.dv4[14561], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[14664] = 1.0;
  memset(&SD->u1.f2.dv4[14665], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14698] = -1.0;
  memset(&SD->u1.f2.dv4[14699], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[14802] = 1.0;
  memset(&SD->u1.f2.dv4[14803], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14836] = -1.0;
  memset(&SD->u1.f2.dv4[14837], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[14940] = 1.0;
  memset(&SD->u1.f2.dv4[14941], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14974] = -1.0;
  memset(&SD->u1.f2.dv4[14975], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[15078] = 1.0;
  memset(&SD->u1.f2.dv4[15079], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15112] = -1.0;
  memset(&SD->u1.f2.dv4[15113], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[15216] = 1.0;
  memset(&SD->u1.f2.dv4[15217], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15250] = -1.0;
  memset(&SD->u1.f2.dv4[15251], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[15354] = 1.0;
  memset(&SD->u1.f2.dv4[15355], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15388] = -1.0;
  memset(&SD->u1.f2.dv4[15389], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[15492] = 1.0;
  memset(&SD->u1.f2.dv4[15493], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15526] = -1.0;
  memset(&SD->u1.f2.dv4[15527], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[15630] = 1.0;
  memset(&SD->u1.f2.dv4[15631], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15664] = -1.0;
  memset(&SD->u1.f2.dv4[15665], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[15768] = 1.0;
  memset(&SD->u1.f2.dv4[15769], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15802] = -1.0;
  memset(&SD->u1.f2.dv4[15803], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[15906] = 1.0;
  memset(&SD->u1.f2.dv4[15907], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15940] = -1.0;
  memset(&SD->u1.f2.dv4[15941], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[16044] = 1.0;
  memset(&SD->u1.f2.dv4[16045], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16078] = -1.0;
  memset(&SD->u1.f2.dv4[16079], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[16182] = 1.0;
  memset(&SD->u1.f2.dv4[16183], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16216] = -1.0;
  memset(&SD->u1.f2.dv4[16217], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[16320] = 1.0;
  memset(&SD->u1.f2.dv4[16321], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16354] = -1.0;
  memset(&SD->u1.f2.dv4[16355], 0, 71U * sizeof(real_T));
  SD->u1.f2.dv4[16426] = 1.0;
  SD->u1.f2.dv4[16427] = 0.0;
  SD->u1.f2.dv4[16428] = -1.0;
  memset(&SD->u1.f2.dv4[16429], 0, 29U * sizeof(real_T));
  SD->u1.f2.dv4[16458] = 1.0;
  memset(&SD->u1.f2.dv4[16459], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16492] = -1.0;
  memset(&SD->u1.f2.dv4[16493], 0, 71U * sizeof(real_T));
  SD->u1.f2.dv4[16564] = 1.0;
  SD->u1.f2.dv4[16565] = 0.0;
  SD->u1.f2.dv4[16566] = -1.0;
  memset(&SD->u1.f2.dv4[16567], 0, 29U * sizeof(real_T));
  SD->u1.f2.dv4[16596] = 1.0;
  memset(&SD->u1.f2.dv4[16597], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16630] = -1.0;
  memset(&SD->u1.f2.dv4[16631], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[16734] = 1.0;
  memset(&SD->u1.f2.dv4[16735], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16768] = -1.0;
  memset(&SD->u1.f2.dv4[16769], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[16872] = 1.0;
  memset(&SD->u1.f2.dv4[16873], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16906] = -1.0;
  memset(&SD->u1.f2.dv4[16907], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17010] = 1.0;
  memset(&SD->u1.f2.dv4[17011], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17044] = -1.0;
  memset(&SD->u1.f2.dv4[17045], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17148] = 1.0;
  memset(&SD->u1.f2.dv4[17149], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17182] = -1.0;
  memset(&SD->u1.f2.dv4[17183], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17286] = 1.0;
  memset(&SD->u1.f2.dv4[17287], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17320] = -1.0;
  memset(&SD->u1.f2.dv4[17321], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17424] = 1.0;
  memset(&SD->u1.f2.dv4[17425], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17458] = -1.0;
  memset(&SD->u1.f2.dv4[17459], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17562] = 1.0;
  memset(&SD->u1.f2.dv4[17563], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17596] = -1.0;
  memset(&SD->u1.f2.dv4[17597], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17700] = 1.0;
  memset(&SD->u1.f2.dv4[17701], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17734] = -1.0;
  memset(&SD->u1.f2.dv4[17735], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17838] = 1.0;
  memset(&SD->u1.f2.dv4[17839], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17872] = -1.0;
  memset(&SD->u1.f2.dv4[17873], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[17976] = 1.0;
  memset(&SD->u1.f2.dv4[17977], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18010] = -1.0;
  memset(&SD->u1.f2.dv4[18011], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[18114] = 1.0;
  memset(&SD->u1.f2.dv4[18115], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18148] = -1.0;
  memset(&SD->u1.f2.dv4[18149], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[18252] = 1.0;
  memset(&SD->u1.f2.dv4[18253], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18286] = -1.0;
  memset(&SD->u1.f2.dv4[18287], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[18390] = 1.0;
  memset(&SD->u1.f2.dv4[18391], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18424] = -1.0;
  memset(&SD->u1.f2.dv4[18425], 0, 103U * sizeof(real_T));
  SD->u1.f2.dv4[18528] = 1.0;
  memset(&SD->u1.f2.dv4[18529], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18562] = -1.0;
  memset(&SD->u1.f2.dv4[18563], 0, 3579U * sizeof(real_T));
  SD->u1.f2.dv4[22142] = -1.0;
  memset(&SD->u1.f2.dv4[22143], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[22159] = -1.0;
  memset(&SD->u1.f2.dv4[22160], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[22280] = -1.0;
  memset(&SD->u1.f2.dv4[22281], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[22297] = -1.0;
  memset(&SD->u1.f2.dv4[22298], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[22418] = -1.0;
  memset(&SD->u1.f2.dv4[22419], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[22435] = -1.0;
  memset(&SD->u1.f2.dv4[22436], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[22556] = -1.0;
  memset(&SD->u1.f2.dv4[22557], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[22573] = -1.0;
  memset(&SD->u1.f2.dv4[22574], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[22694] = -1.0;
  memset(&SD->u1.f2.dv4[22695], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[22711] = -1.0;
  memset(&SD->u1.f2.dv4[22712], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[22832] = -1.0;
  memset(&SD->u1.f2.dv4[22833], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[22849] = -1.0;
  memset(&SD->u1.f2.dv4[22850], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[22970] = -1.0;
  memset(&SD->u1.f2.dv4[22971], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[22987] = -1.0;
  memset(&SD->u1.f2.dv4[22988], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[23108] = -1.0;
  memset(&SD->u1.f2.dv4[23109], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23125] = -1.0;
  memset(&SD->u1.f2.dv4[23126], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[23246] = -1.0;
  memset(&SD->u1.f2.dv4[23247], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23263] = -1.0;
  memset(&SD->u1.f2.dv4[23264], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[23384] = -1.0;
  memset(&SD->u1.f2.dv4[23385], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23401] = -1.0;
  memset(&SD->u1.f2.dv4[23402], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[23522] = -1.0;
  memset(&SD->u1.f2.dv4[23523], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23539] = -1.0;
  memset(&SD->u1.f2.dv4[23540], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[23660] = -1.0;
  memset(&SD->u1.f2.dv4[23661], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23677] = -1.0;
  memset(&SD->u1.f2.dv4[23678], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[23798] = -1.0;
  memset(&SD->u1.f2.dv4[23799], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23815] = -1.0;
  memset(&SD->u1.f2.dv4[23816], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[23936] = -1.0;
  memset(&SD->u1.f2.dv4[23937], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23953] = -1.0;
  memset(&SD->u1.f2.dv4[23954], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[24074] = -1.0;
  memset(&SD->u1.f2.dv4[24075], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24091] = -1.0;
  memset(&SD->u1.f2.dv4[24092], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[24212] = -1.0;
  memset(&SD->u1.f2.dv4[24213], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24229] = -1.0;
  memset(&SD->u1.f2.dv4[24230], 0, 120U * sizeof(real_T));
  SD->u1.f2.dv4[24350] = -1.0;
  memset(&SD->u1.f2.dv4[24351], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24367] = -1.0;
  memset(&SD->u1.f2.dv4[24368], 0, 2466U * sizeof(real_T));
  SD->u1.f2.dv4[26834] = -1.0;
  SD->u1.f2.dv4[26835] = 0.0;
  SD->u1.f2.dv4[26836] = -1.0;
  memset(&SD->u1.f2.dv4[26837], 0, 135U * sizeof(real_T));
  SD->u1.f2.dv4[26972] = -1.0;
  SD->u1.f2.dv4[26973] = 0.0;
  SD->u1.f2.dv4[26974] = -1.0;
  memset(&SD->u1.f2.dv4[26975], 0, 411U * sizeof(real_T));
  SD->u1.f2.dv4[27386] = -1.0;
  SD->u1.f2.dv4[27387] = 0.0;
  SD->u1.f2.dv4[27388] = -1.0;
  memset(&SD->u1.f2.dv4[27389], 0, 135U * sizeof(real_T));
  SD->u1.f2.dv4[27524] = -1.0;
  SD->u1.f2.dv4[27525] = 0.0;
  SD->u1.f2.dv4[27526] = -1.0;
  memset(&SD->u1.f2.dv4[27527], 0, 822U * sizeof(real_T));
  SD->u1.f2.dv4[28349] = t53;
  SD->u1.f2.dv4[28350] = 0.0;
  SD->u1.f2.dv4[28351] = t53;
  memset(&SD->u1.f2.dv4[28352], 0, 135U * sizeof(real_T));
  SD->u1.f2.dv4[28487] = t56;
  SD->u1.f2.dv4[28488] = 0.0;
  SD->u1.f2.dv4[28489] = t56;
  memset(&SD->u1.f2.dv4[28490], 0, 544U * sizeof(real_T));
  SD->u1.f2.dv4[29034] = t54;
  SD->u1.f2.dv4[29035] = 0.0;
  SD->u1.f2.dv4[29036] = t54;
  memset(&SD->u1.f2.dv4[29037], 0, 135U * sizeof(real_T));
  SD->u1.f2.dv4[29172] = t57;
  SD->u1.f2.dv4[29173] = 0.0;
  SD->u1.f2.dv4[29174] = t57;
  memset(&SD->u1.f2.dv4[29175], 0, 544U * sizeof(real_T));
  SD->u1.f2.dv4[29719] = t55;
  SD->u1.f2.dv4[29720] = 0.0;
  SD->u1.f2.dv4[29721] = t55;
  memset(&SD->u1.f2.dv4[29722], 0, 135U * sizeof(real_T));
  SD->u1.f2.dv4[29857] = t58;
  SD->u1.f2.dv4[29858] = 0.0;
  SD->u1.f2.dv4[29859] = t58;
  memset(&SD->u1.f2.dv4[29860], 0, 407U * sizeof(real_T));
  SD->u1.f2.dv4[30267] = -1.0;
  memset(&SD->u1.f2.dv4[30268], 0, 137U * sizeof(real_T));
  SD->u1.f2.dv4[30405] = -1.0;
  memset(&SD->u1.f2.dv4[30406], 0, 1372U * sizeof(real_T));
  SD->u1.f2.dv4[31778] = t59;
  SD->u1.f2.dv4[31779] = t59;
  memset(&SD->u1.f2.dv4[31780], 0, 137U * sizeof(real_T));
  SD->u1.f2.dv4[31917] = t61;
  SD->u1.f2.dv4[31918] = t61;
  memset(&SD->u1.f2.dv4[31919], 0, 137U * sizeof(real_T));
  SD->u1.f2.dv4[32056] = t63;
  SD->u1.f2.dv4[32057] = t63;
  memset(&SD->u1.f2.dv4[32058], 0, 268U * sizeof(real_T));
  SD->u1.f2.dv4[32326] = t60;
  SD->u1.f2.dv4[32327] = t60;
  memset(&SD->u1.f2.dv4[32328], 0, 137U * sizeof(real_T));
  SD->u1.f2.dv4[32465] = t62;
  SD->u1.f2.dv4[32466] = t62;
  memset(&SD->u1.f2.dv4[32467], 0, 137U * sizeof(real_T));
  SD->u1.f2.dv4[32604] = t64;
  SD->u1.f2.dv4[32605] = t64;
  memset(&SD->u1.f2.dv4[32606], 0, 269U * sizeof(real_T));
  SD->u1.f2.dv4[32875] = -1.0;
  memset(&SD->u1.f2.dv4[32876], 0, 138U * sizeof(real_T));
  SD->u1.f2.dv4[33014] = -1.0;
  memset(&SD->u1.f2.dv4[33015], 0, 138U * sizeof(real_T));
  SD->u1.f2.dv4[33153] = -1.0;
  for (i2 = 0; i2 < 242; i2++) {
    memcpy(&Aiq[i2 * 137], &SD->u1.f2.dv4[i2 * 137], 137U * sizeof(real_T));
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

/* End of code generation (Iq_RightStart23DFootV99.cpp) */
