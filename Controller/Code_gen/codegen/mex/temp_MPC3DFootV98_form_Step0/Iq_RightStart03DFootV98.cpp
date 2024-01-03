/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_RightStart03DFootV98.cpp
 *
 * Code generation for function 'Iq_RightStart03DFootV98'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step0.h"
#include "Iq_RightStart03DFootV98.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV98",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV98.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_RightStart03DFootV98(c_temp_MPC3DFootV98_form_Step0S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[4], real_T Aiq[34748],
  real_T biq[146])
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

  /* IQ_RIGHTSTART03DFOOTV98 */
  /*     [AIQ,BIQ] = IQ_RIGHTSTART03DFOOTV98(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Jul-2023 15:30:48 */
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
  SD->u1.f2.dv4[0] = -1.0;
  memset(&SD->u1.f2.dv4[1], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[34] = 1.0;
  memset(&SD->u1.f2.dv4[35], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[68] = t2;
  memset(&SD->u1.f2.dv4[69], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[102] = t2;
  memset(&SD->u1.f2.dv4[103], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[293] = -1.0;
  memset(&SD->u1.f2.dv4[294], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[327] = 1.0;
  memset(&SD->u1.f2.dv4[328], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[361] = t5;
  memset(&SD->u1.f2.dv4[362], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[395] = t5;
  memset(&SD->u1.f2.dv4[396], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[586] = -1.0;
  memset(&SD->u1.f2.dv4[587], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[620] = 1.0;
  memset(&SD->u1.f2.dv4[621], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[654] = t8;
  memset(&SD->u1.f2.dv4[655], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[688] = t8;
  memset(&SD->u1.f2.dv4[689], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[879] = -1.0;
  memset(&SD->u1.f2.dv4[880], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[913] = 1.0;
  memset(&SD->u1.f2.dv4[914], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[947] = t11;
  memset(&SD->u1.f2.dv4[948], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[981] = t11;
  memset(&SD->u1.f2.dv4[982], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[1172] = -1.0;
  memset(&SD->u1.f2.dv4[1173], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1206] = 1.0;
  memset(&SD->u1.f2.dv4[1207], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1240] = t14;
  memset(&SD->u1.f2.dv4[1241], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1274] = t14;
  memset(&SD->u1.f2.dv4[1275], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[1465] = -1.0;
  memset(&SD->u1.f2.dv4[1466], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1499] = 1.0;
  memset(&SD->u1.f2.dv4[1500], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1533] = t17;
  memset(&SD->u1.f2.dv4[1534], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1567] = t17;
  memset(&SD->u1.f2.dv4[1568], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[1758] = -1.0;
  memset(&SD->u1.f2.dv4[1759], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1792] = 1.0;
  memset(&SD->u1.f2.dv4[1793], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1826] = t20;
  memset(&SD->u1.f2.dv4[1827], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1860] = t20;
  memset(&SD->u1.f2.dv4[1861], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[2051] = -1.0;
  memset(&SD->u1.f2.dv4[2052], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2085] = 1.0;
  memset(&SD->u1.f2.dv4[2086], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2119] = t23;
  memset(&SD->u1.f2.dv4[2120], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2153] = t23;
  memset(&SD->u1.f2.dv4[2154], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[2344] = -1.0;
  memset(&SD->u1.f2.dv4[2345], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2378] = 1.0;
  memset(&SD->u1.f2.dv4[2379], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2412] = t26;
  memset(&SD->u1.f2.dv4[2413], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2446] = t26;
  memset(&SD->u1.f2.dv4[2447], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[2637] = -1.0;
  memset(&SD->u1.f2.dv4[2638], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2671] = 1.0;
  memset(&SD->u1.f2.dv4[2672], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2705] = t29;
  memset(&SD->u1.f2.dv4[2706], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2739] = t29;
  memset(&SD->u1.f2.dv4[2740], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[2930] = -1.0;
  memset(&SD->u1.f2.dv4[2931], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2964] = 1.0;
  memset(&SD->u1.f2.dv4[2965], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2998] = t32;
  memset(&SD->u1.f2.dv4[2999], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3032] = t32;
  memset(&SD->u1.f2.dv4[3033], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[3223] = -1.0;
  memset(&SD->u1.f2.dv4[3224], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3257] = 1.0;
  memset(&SD->u1.f2.dv4[3258], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3291] = t35;
  memset(&SD->u1.f2.dv4[3292], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3325] = t35;
  memset(&SD->u1.f2.dv4[3326], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[3516] = -1.0;
  memset(&SD->u1.f2.dv4[3517], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3550] = 1.0;
  memset(&SD->u1.f2.dv4[3551], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3584] = t38;
  memset(&SD->u1.f2.dv4[3585], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3618] = t38;
  memset(&SD->u1.f2.dv4[3619], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[3809] = -1.0;
  memset(&SD->u1.f2.dv4[3810], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3843] = 1.0;
  memset(&SD->u1.f2.dv4[3844], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3877] = t41;
  memset(&SD->u1.f2.dv4[3878], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3911] = t41;
  memset(&SD->u1.f2.dv4[3912], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[4102] = -1.0;
  memset(&SD->u1.f2.dv4[4103], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4136] = 1.0;
  memset(&SD->u1.f2.dv4[4137], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4170] = t44;
  memset(&SD->u1.f2.dv4[4171], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4204] = t44;
  memset(&SD->u1.f2.dv4[4205], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[4395] = -1.0;
  memset(&SD->u1.f2.dv4[4396], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4429] = 1.0;
  memset(&SD->u1.f2.dv4[4430], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4463] = t47;
  memset(&SD->u1.f2.dv4[4464], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4497] = t47;
  memset(&SD->u1.f2.dv4[4498], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[4688] = -1.0;
  memset(&SD->u1.f2.dv4[4689], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4722] = 1.0;
  memset(&SD->u1.f2.dv4[4723], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4756] = t50;
  memset(&SD->u1.f2.dv4[4757], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4790] = t50;
  memset(&SD->u1.f2.dv4[4791], 0, 190U * sizeof(real_T));
  SD->u1.f2.dv4[4981] = -1.0;
  memset(&SD->u1.f2.dv4[4982], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5015] = 1.0;
  memset(&SD->u1.f2.dv4[5016], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5032] = t3;
  memset(&SD->u1.f2.dv4[5033], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5066] = t3;
  memset(&SD->u1.f2.dv4[5067], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[5274] = -1.0;
  memset(&SD->u1.f2.dv4[5275], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5308] = 1.0;
  memset(&SD->u1.f2.dv4[5309], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5325] = t6;
  memset(&SD->u1.f2.dv4[5326], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5359] = t6;
  memset(&SD->u1.f2.dv4[5360], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[5567] = -1.0;
  memset(&SD->u1.f2.dv4[5568], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5601] = 1.0;
  memset(&SD->u1.f2.dv4[5602], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5618] = t9;
  memset(&SD->u1.f2.dv4[5619], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5652] = t9;
  memset(&SD->u1.f2.dv4[5653], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[5860] = -1.0;
  memset(&SD->u1.f2.dv4[5861], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5894] = 1.0;
  memset(&SD->u1.f2.dv4[5895], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5911] = t12;
  memset(&SD->u1.f2.dv4[5912], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5945] = t12;
  memset(&SD->u1.f2.dv4[5946], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[6153] = -1.0;
  memset(&SD->u1.f2.dv4[6154], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6187] = 1.0;
  memset(&SD->u1.f2.dv4[6188], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6204] = t15;
  memset(&SD->u1.f2.dv4[6205], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6238] = t15;
  memset(&SD->u1.f2.dv4[6239], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[6446] = -1.0;
  memset(&SD->u1.f2.dv4[6447], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6480] = 1.0;
  memset(&SD->u1.f2.dv4[6481], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6497] = t18;
  memset(&SD->u1.f2.dv4[6498], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6531] = t18;
  memset(&SD->u1.f2.dv4[6532], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[6739] = -1.0;
  memset(&SD->u1.f2.dv4[6740], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6773] = 1.0;
  memset(&SD->u1.f2.dv4[6774], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6790] = t21;
  memset(&SD->u1.f2.dv4[6791], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6824] = t21;
  memset(&SD->u1.f2.dv4[6825], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[7032] = -1.0;
  memset(&SD->u1.f2.dv4[7033], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7066] = 1.0;
  memset(&SD->u1.f2.dv4[7067], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7083] = t24;
  memset(&SD->u1.f2.dv4[7084], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7117] = t24;
  memset(&SD->u1.f2.dv4[7118], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[7325] = -1.0;
  memset(&SD->u1.f2.dv4[7326], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7359] = 1.0;
  memset(&SD->u1.f2.dv4[7360], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7376] = t27;
  memset(&SD->u1.f2.dv4[7377], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7410] = t27;
  memset(&SD->u1.f2.dv4[7411], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[7618] = -1.0;
  memset(&SD->u1.f2.dv4[7619], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7652] = 1.0;
  memset(&SD->u1.f2.dv4[7653], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7669] = t30;
  memset(&SD->u1.f2.dv4[7670], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7703] = t30;
  memset(&SD->u1.f2.dv4[7704], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[7911] = -1.0;
  memset(&SD->u1.f2.dv4[7912], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7945] = 1.0;
  memset(&SD->u1.f2.dv4[7946], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7962] = t33;
  memset(&SD->u1.f2.dv4[7963], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7996] = t33;
  memset(&SD->u1.f2.dv4[7997], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[8204] = -1.0;
  memset(&SD->u1.f2.dv4[8205], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8238] = 1.0;
  memset(&SD->u1.f2.dv4[8239], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8255] = t36;
  memset(&SD->u1.f2.dv4[8256], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8289] = t36;
  memset(&SD->u1.f2.dv4[8290], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[8497] = -1.0;
  memset(&SD->u1.f2.dv4[8498], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8531] = 1.0;
  memset(&SD->u1.f2.dv4[8532], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8548] = t39;
  memset(&SD->u1.f2.dv4[8549], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8582] = t39;
  memset(&SD->u1.f2.dv4[8583], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[8790] = -1.0;
  memset(&SD->u1.f2.dv4[8791], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8824] = 1.0;
  memset(&SD->u1.f2.dv4[8825], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8841] = t42;
  memset(&SD->u1.f2.dv4[8842], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8875] = t42;
  memset(&SD->u1.f2.dv4[8876], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[9083] = -1.0;
  memset(&SD->u1.f2.dv4[9084], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9117] = 1.0;
  memset(&SD->u1.f2.dv4[9118], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9134] = t45;
  memset(&SD->u1.f2.dv4[9135], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9168] = t45;
  memset(&SD->u1.f2.dv4[9169], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[9376] = -1.0;
  memset(&SD->u1.f2.dv4[9377], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9410] = 1.0;
  memset(&SD->u1.f2.dv4[9411], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9427] = t48;
  memset(&SD->u1.f2.dv4[9428], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9461] = t48;
  memset(&SD->u1.f2.dv4[9462], 0, 207U * sizeof(real_T));
  SD->u1.f2.dv4[9669] = -1.0;
  memset(&SD->u1.f2.dv4[9670], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9703] = 1.0;
  memset(&SD->u1.f2.dv4[9704], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9720] = t51;
  memset(&SD->u1.f2.dv4[9721], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9754] = t51;
  memset(&SD->u1.f2.dv4[9755], 0, 241U * sizeof(real_T));
  SD->u1.f2.dv4[9996] = t4;
  memset(&SD->u1.f2.dv4[9997], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10030] = t4;
  memset(&SD->u1.f2.dv4[10031], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[10289] = t7;
  memset(&SD->u1.f2.dv4[10290], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10323] = t7;
  memset(&SD->u1.f2.dv4[10324], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[10582] = t10;
  memset(&SD->u1.f2.dv4[10583], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10616] = t10;
  memset(&SD->u1.f2.dv4[10617], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[10875] = t13;
  memset(&SD->u1.f2.dv4[10876], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10909] = t13;
  memset(&SD->u1.f2.dv4[10910], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[11168] = t16;
  memset(&SD->u1.f2.dv4[11169], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11202] = t16;
  memset(&SD->u1.f2.dv4[11203], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[11461] = t19;
  memset(&SD->u1.f2.dv4[11462], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11495] = t19;
  memset(&SD->u1.f2.dv4[11496], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[11754] = t22;
  memset(&SD->u1.f2.dv4[11755], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11788] = t22;
  memset(&SD->u1.f2.dv4[11789], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[12047] = t25;
  memset(&SD->u1.f2.dv4[12048], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12081] = t25;
  memset(&SD->u1.f2.dv4[12082], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[12340] = t28;
  memset(&SD->u1.f2.dv4[12341], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12374] = t28;
  memset(&SD->u1.f2.dv4[12375], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[12633] = t31;
  memset(&SD->u1.f2.dv4[12634], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12667] = t31;
  memset(&SD->u1.f2.dv4[12668], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[12926] = t34;
  memset(&SD->u1.f2.dv4[12927], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12960] = t34;
  memset(&SD->u1.f2.dv4[12961], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[13219] = t37;
  memset(&SD->u1.f2.dv4[13220], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13253] = t37;
  memset(&SD->u1.f2.dv4[13254], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[13512] = t40;
  memset(&SD->u1.f2.dv4[13513], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13546] = t40;
  memset(&SD->u1.f2.dv4[13547], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[13805] = t43;
  memset(&SD->u1.f2.dv4[13806], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13839] = t43;
  memset(&SD->u1.f2.dv4[13840], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[14098] = t46;
  memset(&SD->u1.f2.dv4[14099], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14132] = t46;
  memset(&SD->u1.f2.dv4[14133], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[14391] = t49;
  memset(&SD->u1.f2.dv4[14392], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14425] = t49;
  memset(&SD->u1.f2.dv4[14426], 0, 258U * sizeof(real_T));
  SD->u1.f2.dv4[14684] = t52;
  memset(&SD->u1.f2.dv4[14685], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14718] = t52;
  memset(&SD->u1.f2.dv4[14719], 0, 173U * sizeof(real_T));
  SD->u1.f2.dv4[14892] = 1.0;
  memset(&SD->u1.f2.dv4[14893], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14926] = -1.0;
  memset(&SD->u1.f2.dv4[14927], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15011] = 1.0;
  SD->u1.f2.dv4[15012] = 0.0;
  SD->u1.f2.dv4[15013] = 0.0;
  SD->u1.f2.dv4[15014] = 0.0;
  SD->u1.f2.dv4[15015] = -1.0;
  memset(&SD->u1.f2.dv4[15016], 0, 23U * sizeof(real_T));
  SD->u1.f2.dv4[15039] = 1.0;
  memset(&SD->u1.f2.dv4[15040], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15073] = -1.0;
  memset(&SD->u1.f2.dv4[15074], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15158] = 1.0;
  SD->u1.f2.dv4[15159] = 0.0;
  SD->u1.f2.dv4[15160] = 0.0;
  SD->u1.f2.dv4[15161] = 0.0;
  SD->u1.f2.dv4[15162] = -1.0;
  memset(&SD->u1.f2.dv4[15163], 0, 23U * sizeof(real_T));
  SD->u1.f2.dv4[15186] = 1.0;
  memset(&SD->u1.f2.dv4[15187], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15220] = -1.0;
  memset(&SD->u1.f2.dv4[15221], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15305] = 1.0;
  SD->u1.f2.dv4[15306] = 0.0;
  SD->u1.f2.dv4[15307] = 0.0;
  SD->u1.f2.dv4[15308] = 0.0;
  SD->u1.f2.dv4[15309] = -1.0;
  memset(&SD->u1.f2.dv4[15310], 0, 23U * sizeof(real_T));
  SD->u1.f2.dv4[15333] = 1.0;
  memset(&SD->u1.f2.dv4[15334], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15367] = -1.0;
  memset(&SD->u1.f2.dv4[15368], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15452] = 1.0;
  SD->u1.f2.dv4[15453] = 0.0;
  SD->u1.f2.dv4[15454] = 0.0;
  SD->u1.f2.dv4[15455] = 0.0;
  SD->u1.f2.dv4[15456] = -1.0;
  memset(&SD->u1.f2.dv4[15457], 0, 23U * sizeof(real_T));
  SD->u1.f2.dv4[15480] = 1.0;
  memset(&SD->u1.f2.dv4[15481], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15514] = -1.0;
  memset(&SD->u1.f2.dv4[15515], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[15627] = 1.0;
  memset(&SD->u1.f2.dv4[15628], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15661] = -1.0;
  memset(&SD->u1.f2.dv4[15662], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[15774] = 1.0;
  memset(&SD->u1.f2.dv4[15775], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15808] = -1.0;
  memset(&SD->u1.f2.dv4[15809], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[15921] = 1.0;
  memset(&SD->u1.f2.dv4[15922], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15955] = -1.0;
  memset(&SD->u1.f2.dv4[15956], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[16068] = 1.0;
  memset(&SD->u1.f2.dv4[16069], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16102] = -1.0;
  memset(&SD->u1.f2.dv4[16103], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[16215] = 1.0;
  memset(&SD->u1.f2.dv4[16216], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16249] = -1.0;
  memset(&SD->u1.f2.dv4[16250], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[16362] = 1.0;
  memset(&SD->u1.f2.dv4[16363], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16396] = -1.0;
  memset(&SD->u1.f2.dv4[16397], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[16509] = 1.0;
  memset(&SD->u1.f2.dv4[16510], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16543] = -1.0;
  memset(&SD->u1.f2.dv4[16544], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[16656] = 1.0;
  memset(&SD->u1.f2.dv4[16657], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16690] = -1.0;
  memset(&SD->u1.f2.dv4[16691], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[16803] = 1.0;
  memset(&SD->u1.f2.dv4[16804], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16837] = -1.0;
  memset(&SD->u1.f2.dv4[16838], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[16950] = 1.0;
  memset(&SD->u1.f2.dv4[16951], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16984] = -1.0;
  memset(&SD->u1.f2.dv4[16985], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[17097] = 1.0;
  memset(&SD->u1.f2.dv4[17098], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17131] = -1.0;
  memset(&SD->u1.f2.dv4[17132], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[17244] = 1.0;
  memset(&SD->u1.f2.dv4[17245], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17278] = -1.0;
  memset(&SD->u1.f2.dv4[17279], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[17391] = 1.0;
  memset(&SD->u1.f2.dv4[17392], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17425] = -1.0;
  memset(&SD->u1.f2.dv4[17426], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[17501] = 1.0;
  SD->u1.f2.dv4[17502] = 0.0;
  SD->u1.f2.dv4[17503] = 0.0;
  SD->u1.f2.dv4[17504] = 0.0;
  SD->u1.f2.dv4[17505] = -1.0;
  memset(&SD->u1.f2.dv4[17506], 0, sizeof(real_T) << 5);
  SD->u1.f2.dv4[17538] = 1.0;
  memset(&SD->u1.f2.dv4[17539], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17572] = -1.0;
  memset(&SD->u1.f2.dv4[17573], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[17648] = 1.0;
  SD->u1.f2.dv4[17649] = 0.0;
  SD->u1.f2.dv4[17650] = 0.0;
  SD->u1.f2.dv4[17651] = 0.0;
  SD->u1.f2.dv4[17652] = -1.0;
  memset(&SD->u1.f2.dv4[17653], 0, sizeof(real_T) << 5);
  SD->u1.f2.dv4[17685] = 1.0;
  memset(&SD->u1.f2.dv4[17686], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17719] = -1.0;
  memset(&SD->u1.f2.dv4[17720], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[17795] = 1.0;
  SD->u1.f2.dv4[17796] = 0.0;
  SD->u1.f2.dv4[17797] = 0.0;
  SD->u1.f2.dv4[17798] = 0.0;
  SD->u1.f2.dv4[17799] = -1.0;
  memset(&SD->u1.f2.dv4[17800], 0, sizeof(real_T) << 5);
  SD->u1.f2.dv4[17832] = 1.0;
  memset(&SD->u1.f2.dv4[17833], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17866] = -1.0;
  memset(&SD->u1.f2.dv4[17867], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[17942] = 1.0;
  SD->u1.f2.dv4[17943] = 0.0;
  SD->u1.f2.dv4[17944] = 0.0;
  SD->u1.f2.dv4[17945] = 0.0;
  SD->u1.f2.dv4[17946] = -1.0;
  memset(&SD->u1.f2.dv4[17947], 0, sizeof(real_T) << 5);
  SD->u1.f2.dv4[17979] = 1.0;
  memset(&SD->u1.f2.dv4[17980], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18013] = -1.0;
  memset(&SD->u1.f2.dv4[18014], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[18126] = 1.0;
  memset(&SD->u1.f2.dv4[18127], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18160] = -1.0;
  memset(&SD->u1.f2.dv4[18161], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[18273] = 1.0;
  memset(&SD->u1.f2.dv4[18274], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18307] = -1.0;
  memset(&SD->u1.f2.dv4[18308], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[18420] = 1.0;
  memset(&SD->u1.f2.dv4[18421], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18454] = -1.0;
  memset(&SD->u1.f2.dv4[18455], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[18567] = 1.0;
  memset(&SD->u1.f2.dv4[18568], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18601] = -1.0;
  memset(&SD->u1.f2.dv4[18602], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[18714] = 1.0;
  memset(&SD->u1.f2.dv4[18715], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18748] = -1.0;
  memset(&SD->u1.f2.dv4[18749], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[18861] = 1.0;
  memset(&SD->u1.f2.dv4[18862], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18895] = -1.0;
  memset(&SD->u1.f2.dv4[18896], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[19008] = 1.0;
  memset(&SD->u1.f2.dv4[19009], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19042] = -1.0;
  memset(&SD->u1.f2.dv4[19043], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[19155] = 1.0;
  memset(&SD->u1.f2.dv4[19156], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19189] = -1.0;
  memset(&SD->u1.f2.dv4[19190], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[19302] = 1.0;
  memset(&SD->u1.f2.dv4[19303], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19336] = -1.0;
  memset(&SD->u1.f2.dv4[19337], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[19449] = 1.0;
  memset(&SD->u1.f2.dv4[19450], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19483] = -1.0;
  memset(&SD->u1.f2.dv4[19484], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[19596] = 1.0;
  memset(&SD->u1.f2.dv4[19597], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19630] = -1.0;
  memset(&SD->u1.f2.dv4[19631], 0, 112U * sizeof(real_T));
  SD->u1.f2.dv4[19743] = 1.0;
  memset(&SD->u1.f2.dv4[19744], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19777] = -1.0;
  memset(&SD->u1.f2.dv4[19778], 0, 3813U * sizeof(real_T));
  SD->u1.f2.dv4[23591] = -1.0;
  memset(&SD->u1.f2.dv4[23592], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23608] = -1.0;
  memset(&SD->u1.f2.dv4[23609], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[23738] = -1.0;
  memset(&SD->u1.f2.dv4[23739], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23755] = -1.0;
  memset(&SD->u1.f2.dv4[23756], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[23885] = -1.0;
  memset(&SD->u1.f2.dv4[23886], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[23902] = -1.0;
  memset(&SD->u1.f2.dv4[23903], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[24032] = -1.0;
  memset(&SD->u1.f2.dv4[24033], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24049] = -1.0;
  memset(&SD->u1.f2.dv4[24050], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[24179] = -1.0;
  memset(&SD->u1.f2.dv4[24180], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24196] = -1.0;
  memset(&SD->u1.f2.dv4[24197], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[24326] = -1.0;
  memset(&SD->u1.f2.dv4[24327], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24343] = -1.0;
  memset(&SD->u1.f2.dv4[24344], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[24473] = -1.0;
  memset(&SD->u1.f2.dv4[24474], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24490] = -1.0;
  memset(&SD->u1.f2.dv4[24491], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[24620] = -1.0;
  memset(&SD->u1.f2.dv4[24621], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24637] = -1.0;
  memset(&SD->u1.f2.dv4[24638], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[24767] = -1.0;
  memset(&SD->u1.f2.dv4[24768], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24784] = -1.0;
  memset(&SD->u1.f2.dv4[24785], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[24914] = -1.0;
  memset(&SD->u1.f2.dv4[24915], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24931] = -1.0;
  memset(&SD->u1.f2.dv4[24932], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[25061] = -1.0;
  memset(&SD->u1.f2.dv4[25062], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25078] = -1.0;
  memset(&SD->u1.f2.dv4[25079], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[25208] = -1.0;
  memset(&SD->u1.f2.dv4[25209], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25225] = -1.0;
  memset(&SD->u1.f2.dv4[25226], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[25355] = -1.0;
  memset(&SD->u1.f2.dv4[25356], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25372] = -1.0;
  memset(&SD->u1.f2.dv4[25373], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[25502] = -1.0;
  memset(&SD->u1.f2.dv4[25503], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25519] = -1.0;
  memset(&SD->u1.f2.dv4[25520], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[25649] = -1.0;
  memset(&SD->u1.f2.dv4[25650], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25666] = -1.0;
  memset(&SD->u1.f2.dv4[25667], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[25796] = -1.0;
  memset(&SD->u1.f2.dv4[25797], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25813] = -1.0;
  memset(&SD->u1.f2.dv4[25814], 0, 129U * sizeof(real_T));
  SD->u1.f2.dv4[25943] = -1.0;
  memset(&SD->u1.f2.dv4[25944], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25960] = -1.0;
  memset(&SD->u1.f2.dv4[25961], 0, 2628U * sizeof(real_T));
  SD->u1.f2.dv4[28589] = -1.0;
  SD->u1.f2.dv4[28590] = 0.0;
  SD->u1.f2.dv4[28591] = 0.0;
  SD->u1.f2.dv4[28592] = 0.0;
  SD->u1.f2.dv4[28593] = -1.0;
  memset(&SD->u1.f2.dv4[28594], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[28736] = -1.0;
  SD->u1.f2.dv4[28737] = 0.0;
  SD->u1.f2.dv4[28738] = 0.0;
  SD->u1.f2.dv4[28739] = 0.0;
  SD->u1.f2.dv4[28740] = -1.0;
  memset(&SD->u1.f2.dv4[28741], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[28883] = -1.0;
  SD->u1.f2.dv4[28884] = 0.0;
  SD->u1.f2.dv4[28885] = 0.0;
  SD->u1.f2.dv4[28886] = 0.0;
  SD->u1.f2.dv4[28887] = -1.0;
  memset(&SD->u1.f2.dv4[28888], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[29030] = -1.0;
  SD->u1.f2.dv4[29031] = 0.0;
  SD->u1.f2.dv4[29032] = 0.0;
  SD->u1.f2.dv4[29033] = 0.0;
  SD->u1.f2.dv4[29034] = -1.0;
  memset(&SD->u1.f2.dv4[29035], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[29181] = -1.0;
  SD->u1.f2.dv4[29182] = 0.0;
  SD->u1.f2.dv4[29183] = 0.0;
  SD->u1.f2.dv4[29184] = 0.0;
  SD->u1.f2.dv4[29185] = -1.0;
  memset(&SD->u1.f2.dv4[29186], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[29328] = -1.0;
  SD->u1.f2.dv4[29329] = 0.0;
  SD->u1.f2.dv4[29330] = 0.0;
  SD->u1.f2.dv4[29331] = 0.0;
  SD->u1.f2.dv4[29332] = -1.0;
  memset(&SD->u1.f2.dv4[29333], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[29475] = -1.0;
  SD->u1.f2.dv4[29476] = 0.0;
  SD->u1.f2.dv4[29477] = 0.0;
  SD->u1.f2.dv4[29478] = 0.0;
  SD->u1.f2.dv4[29479] = -1.0;
  memset(&SD->u1.f2.dv4[29480], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[29622] = -1.0;
  SD->u1.f2.dv4[29623] = 0.0;
  SD->u1.f2.dv4[29624] = 0.0;
  SD->u1.f2.dv4[29625] = 0.0;
  SD->u1.f2.dv4[29626] = -1.0;
  memset(&SD->u1.f2.dv4[29627], 0, 292U * sizeof(real_T));
  SD->u1.f2.dv4[29919] = t53;
  SD->u1.f2.dv4[29920] = 0.0;
  SD->u1.f2.dv4[29921] = 0.0;
  SD->u1.f2.dv4[29922] = 0.0;
  SD->u1.f2.dv4[29923] = t53;
  memset(&SD->u1.f2.dv4[29924], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[30066] = t56;
  SD->u1.f2.dv4[30067] = 0.0;
  SD->u1.f2.dv4[30068] = 0.0;
  SD->u1.f2.dv4[30069] = 0.0;
  SD->u1.f2.dv4[30070] = t56;
  memset(&SD->u1.f2.dv4[30071], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[30213] = t59;
  SD->u1.f2.dv4[30214] = 0.0;
  SD->u1.f2.dv4[30215] = 0.0;
  SD->u1.f2.dv4[30216] = 0.0;
  SD->u1.f2.dv4[30217] = t59;
  memset(&SD->u1.f2.dv4[30218], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[30360] = t62;
  SD->u1.f2.dv4[30361] = 0.0;
  SD->u1.f2.dv4[30362] = 0.0;
  SD->u1.f2.dv4[30363] = 0.0;
  SD->u1.f2.dv4[30364] = t62;
  memset(&SD->u1.f2.dv4[30365], 0, 284U * sizeof(real_T));
  SD->u1.f2.dv4[30649] = t54;
  SD->u1.f2.dv4[30650] = 0.0;
  SD->u1.f2.dv4[30651] = 0.0;
  SD->u1.f2.dv4[30652] = 0.0;
  SD->u1.f2.dv4[30653] = t54;
  memset(&SD->u1.f2.dv4[30654], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[30796] = t57;
  SD->u1.f2.dv4[30797] = 0.0;
  SD->u1.f2.dv4[30798] = 0.0;
  SD->u1.f2.dv4[30799] = 0.0;
  SD->u1.f2.dv4[30800] = t57;
  memset(&SD->u1.f2.dv4[30801], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[30943] = t60;
  SD->u1.f2.dv4[30944] = 0.0;
  SD->u1.f2.dv4[30945] = 0.0;
  SD->u1.f2.dv4[30946] = 0.0;
  SD->u1.f2.dv4[30947] = t60;
  memset(&SD->u1.f2.dv4[30948], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[31090] = t63;
  SD->u1.f2.dv4[31091] = 0.0;
  SD->u1.f2.dv4[31092] = 0.0;
  SD->u1.f2.dv4[31093] = 0.0;
  SD->u1.f2.dv4[31094] = t63;
  memset(&SD->u1.f2.dv4[31095], 0, 284U * sizeof(real_T));
  SD->u1.f2.dv4[31379] = t55;
  SD->u1.f2.dv4[31380] = 0.0;
  SD->u1.f2.dv4[31381] = 0.0;
  SD->u1.f2.dv4[31382] = 0.0;
  SD->u1.f2.dv4[31383] = t55;
  memset(&SD->u1.f2.dv4[31384], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[31526] = t58;
  SD->u1.f2.dv4[31527] = 0.0;
  SD->u1.f2.dv4[31528] = 0.0;
  SD->u1.f2.dv4[31529] = 0.0;
  SD->u1.f2.dv4[31530] = t58;
  memset(&SD->u1.f2.dv4[31531], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[31673] = t61;
  SD->u1.f2.dv4[31674] = 0.0;
  SD->u1.f2.dv4[31675] = 0.0;
  SD->u1.f2.dv4[31676] = 0.0;
  SD->u1.f2.dv4[31677] = t61;
  memset(&SD->u1.f2.dv4[31678], 0, 142U * sizeof(real_T));
  SD->u1.f2.dv4[31820] = t64;
  SD->u1.f2.dv4[31821] = 0.0;
  SD->u1.f2.dv4[31822] = 0.0;
  SD->u1.f2.dv4[31823] = 0.0;
  SD->u1.f2.dv4[31824] = t64;
  memset(&SD->u1.f2.dv4[31825], 0, 138U * sizeof(real_T));
  SD->u1.f2.dv4[31963] = -1.0;
  memset(&SD->u1.f2.dv4[31964], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[32110] = -1.0;
  memset(&SD->u1.f2.dv4[32111], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[32257] = -1.0;
  memset(&SD->u1.f2.dv4[32258], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[32404] = -1.0;
  memset(&SD->u1.f2.dv4[32405], 0, 1464U * sizeof(real_T));
  SD->u1.f2.dv4[33869] = t254;
  memset(&SD->u1.f2.dv4[33870], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[34016] = t262;
  memset(&SD->u1.f2.dv4[34017], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[34163] = t270;
  memset(&SD->u1.f2.dv4[34164], 0, 289U * sizeof(real_T));
  SD->u1.f2.dv4[34453] = t256;
  memset(&SD->u1.f2.dv4[34454], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[34600] = t264;
  memset(&SD->u1.f2.dv4[34601], 0, 146U * sizeof(real_T));
  SD->u1.f2.dv4[34747] = t272;
  for (i2 = 0; i2 < 238; i2++) {
    memcpy(&Aiq[i2 * 146], &SD->u1.f2.dv4[i2 * 146], 146U * sizeof(real_T));
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

/* End of code generation (Iq_RightStart03DFootV98.cpp) */
