/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_RightStart03DFootV99.cpp
 *
 * Code generation for function 'Iq_RightStart03DFootV99'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV99_form_Step0.h"
#include "Iq_RightStart03DFootV99.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_RightStart03DFootV99",           /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_RightStart03DFootV99.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_RightStart03DFootV99(c_temp_MPC3DFootV99_form_Step0S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[8], real_T Aiq[36058],
  real_T biq[149])
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
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t70;
  real_T t71;
  real_T a;
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
  real_T t197;

  /* IQ_RIGHTSTART03DFOOTV99 */
  /*     [AIQ,BIQ] = IQ_RIGHTSTART03DFOOTV99(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     10-Jul-2023 17:02:31 */
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
  t65 = in18[2] - in16[1];
  t66 = in18[3] - in17[1];
  t67 = in18[4] - in16[2];
  t68 = in18[5] - in17[2];
  t69 = in18[6] - in16[3];
  t70 = in18[7] - in17[3];
  SD->u1.f2.dv4[0] = -1.0;
  memset(&SD->u1.f2.dv4[1], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[34] = 1.0;
  memset(&SD->u1.f2.dv4[35], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[68] = t2;
  memset(&SD->u1.f2.dv4[69], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[102] = t2;
  memset(&SD->u1.f2.dv4[103], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[299] = -1.0;
  memset(&SD->u1.f2.dv4[300], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[333] = 1.0;
  memset(&SD->u1.f2.dv4[334], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[367] = t5;
  memset(&SD->u1.f2.dv4[368], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[401] = t5;
  memset(&SD->u1.f2.dv4[402], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[598] = -1.0;
  memset(&SD->u1.f2.dv4[599], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[632] = 1.0;
  memset(&SD->u1.f2.dv4[633], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[666] = t8;
  memset(&SD->u1.f2.dv4[667], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[700] = t8;
  memset(&SD->u1.f2.dv4[701], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[897] = -1.0;
  memset(&SD->u1.f2.dv4[898], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[931] = 1.0;
  memset(&SD->u1.f2.dv4[932], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[965] = t11;
  memset(&SD->u1.f2.dv4[966], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[999] = t11;
  memset(&SD->u1.f2.dv4[1000], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[1196] = -1.0;
  memset(&SD->u1.f2.dv4[1197], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1230] = 1.0;
  memset(&SD->u1.f2.dv4[1231], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1264] = t14;
  memset(&SD->u1.f2.dv4[1265], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1298] = t14;
  memset(&SD->u1.f2.dv4[1299], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[1495] = -1.0;
  memset(&SD->u1.f2.dv4[1496], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1529] = 1.0;
  memset(&SD->u1.f2.dv4[1530], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1563] = t17;
  memset(&SD->u1.f2.dv4[1564], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1597] = t17;
  memset(&SD->u1.f2.dv4[1598], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[1794] = -1.0;
  memset(&SD->u1.f2.dv4[1795], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1828] = 1.0;
  memset(&SD->u1.f2.dv4[1829], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1862] = t20;
  memset(&SD->u1.f2.dv4[1863], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[1896] = t20;
  memset(&SD->u1.f2.dv4[1897], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[2093] = -1.0;
  memset(&SD->u1.f2.dv4[2094], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2127] = 1.0;
  memset(&SD->u1.f2.dv4[2128], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2161] = t23;
  memset(&SD->u1.f2.dv4[2162], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2195] = t23;
  memset(&SD->u1.f2.dv4[2196], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[2392] = -1.0;
  memset(&SD->u1.f2.dv4[2393], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2426] = 1.0;
  memset(&SD->u1.f2.dv4[2427], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2460] = t26;
  memset(&SD->u1.f2.dv4[2461], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2494] = t26;
  memset(&SD->u1.f2.dv4[2495], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[2691] = -1.0;
  memset(&SD->u1.f2.dv4[2692], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2725] = 1.0;
  memset(&SD->u1.f2.dv4[2726], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2759] = t29;
  memset(&SD->u1.f2.dv4[2760], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[2793] = t29;
  memset(&SD->u1.f2.dv4[2794], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[2990] = -1.0;
  memset(&SD->u1.f2.dv4[2991], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3024] = 1.0;
  memset(&SD->u1.f2.dv4[3025], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3058] = t32;
  memset(&SD->u1.f2.dv4[3059], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3092] = t32;
  memset(&SD->u1.f2.dv4[3093], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[3289] = -1.0;
  memset(&SD->u1.f2.dv4[3290], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3323] = 1.0;
  memset(&SD->u1.f2.dv4[3324], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3357] = t35;
  memset(&SD->u1.f2.dv4[3358], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3391] = t35;
  memset(&SD->u1.f2.dv4[3392], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[3588] = -1.0;
  memset(&SD->u1.f2.dv4[3589], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3622] = 1.0;
  memset(&SD->u1.f2.dv4[3623], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3656] = t38;
  memset(&SD->u1.f2.dv4[3657], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3690] = t38;
  memset(&SD->u1.f2.dv4[3691], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[3887] = -1.0;
  memset(&SD->u1.f2.dv4[3888], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3921] = 1.0;
  memset(&SD->u1.f2.dv4[3922], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3955] = t41;
  memset(&SD->u1.f2.dv4[3956], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[3989] = t41;
  memset(&SD->u1.f2.dv4[3990], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[4186] = -1.0;
  memset(&SD->u1.f2.dv4[4187], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4220] = 1.0;
  memset(&SD->u1.f2.dv4[4221], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4254] = t44;
  memset(&SD->u1.f2.dv4[4255], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4288] = t44;
  memset(&SD->u1.f2.dv4[4289], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[4485] = -1.0;
  memset(&SD->u1.f2.dv4[4486], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4519] = 1.0;
  memset(&SD->u1.f2.dv4[4520], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4553] = t47;
  memset(&SD->u1.f2.dv4[4554], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4587] = t47;
  memset(&SD->u1.f2.dv4[4588], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[4784] = -1.0;
  memset(&SD->u1.f2.dv4[4785], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4818] = 1.0;
  memset(&SD->u1.f2.dv4[4819], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4852] = t50;
  memset(&SD->u1.f2.dv4[4853], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[4886] = t50;
  memset(&SD->u1.f2.dv4[4887], 0, 196U * sizeof(real_T));
  SD->u1.f2.dv4[5083] = -1.0;
  memset(&SD->u1.f2.dv4[5084], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5117] = 1.0;
  memset(&SD->u1.f2.dv4[5118], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5134] = t3;
  memset(&SD->u1.f2.dv4[5135], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5168] = t3;
  memset(&SD->u1.f2.dv4[5169], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[5382] = -1.0;
  memset(&SD->u1.f2.dv4[5383], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5416] = 1.0;
  memset(&SD->u1.f2.dv4[5417], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5433] = t6;
  memset(&SD->u1.f2.dv4[5434], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5467] = t6;
  memset(&SD->u1.f2.dv4[5468], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[5681] = -1.0;
  memset(&SD->u1.f2.dv4[5682], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5715] = 1.0;
  memset(&SD->u1.f2.dv4[5716], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[5732] = t9;
  memset(&SD->u1.f2.dv4[5733], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[5766] = t9;
  memset(&SD->u1.f2.dv4[5767], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[5980] = -1.0;
  memset(&SD->u1.f2.dv4[5981], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6014] = 1.0;
  memset(&SD->u1.f2.dv4[6015], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6031] = t12;
  memset(&SD->u1.f2.dv4[6032], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6065] = t12;
  memset(&SD->u1.f2.dv4[6066], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[6279] = -1.0;
  memset(&SD->u1.f2.dv4[6280], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6313] = 1.0;
  memset(&SD->u1.f2.dv4[6314], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6330] = t15;
  memset(&SD->u1.f2.dv4[6331], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6364] = t15;
  memset(&SD->u1.f2.dv4[6365], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[6578] = -1.0;
  memset(&SD->u1.f2.dv4[6579], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6612] = 1.0;
  memset(&SD->u1.f2.dv4[6613], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6629] = t18;
  memset(&SD->u1.f2.dv4[6630], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6663] = t18;
  memset(&SD->u1.f2.dv4[6664], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[6877] = -1.0;
  memset(&SD->u1.f2.dv4[6878], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6911] = 1.0;
  memset(&SD->u1.f2.dv4[6912], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[6928] = t21;
  memset(&SD->u1.f2.dv4[6929], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[6962] = t21;
  memset(&SD->u1.f2.dv4[6963], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[7176] = -1.0;
  memset(&SD->u1.f2.dv4[7177], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7210] = 1.0;
  memset(&SD->u1.f2.dv4[7211], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7227] = t24;
  memset(&SD->u1.f2.dv4[7228], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7261] = t24;
  memset(&SD->u1.f2.dv4[7262], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[7475] = -1.0;
  memset(&SD->u1.f2.dv4[7476], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7509] = 1.0;
  memset(&SD->u1.f2.dv4[7510], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7526] = t27;
  memset(&SD->u1.f2.dv4[7527], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7560] = t27;
  memset(&SD->u1.f2.dv4[7561], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[7774] = -1.0;
  memset(&SD->u1.f2.dv4[7775], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7808] = 1.0;
  memset(&SD->u1.f2.dv4[7809], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[7825] = t30;
  memset(&SD->u1.f2.dv4[7826], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[7859] = t30;
  memset(&SD->u1.f2.dv4[7860], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[8073] = -1.0;
  memset(&SD->u1.f2.dv4[8074], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8107] = 1.0;
  memset(&SD->u1.f2.dv4[8108], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8124] = t33;
  memset(&SD->u1.f2.dv4[8125], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8158] = t33;
  memset(&SD->u1.f2.dv4[8159], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[8372] = -1.0;
  memset(&SD->u1.f2.dv4[8373], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8406] = 1.0;
  memset(&SD->u1.f2.dv4[8407], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8423] = t36;
  memset(&SD->u1.f2.dv4[8424], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8457] = t36;
  memset(&SD->u1.f2.dv4[8458], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[8671] = -1.0;
  memset(&SD->u1.f2.dv4[8672], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8705] = 1.0;
  memset(&SD->u1.f2.dv4[8706], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[8722] = t39;
  memset(&SD->u1.f2.dv4[8723], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[8756] = t39;
  memset(&SD->u1.f2.dv4[8757], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[8970] = -1.0;
  memset(&SD->u1.f2.dv4[8971], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9004] = 1.0;
  memset(&SD->u1.f2.dv4[9005], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9021] = t42;
  memset(&SD->u1.f2.dv4[9022], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9055] = t42;
  memset(&SD->u1.f2.dv4[9056], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[9269] = -1.0;
  memset(&SD->u1.f2.dv4[9270], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9303] = 1.0;
  memset(&SD->u1.f2.dv4[9304], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9320] = t45;
  memset(&SD->u1.f2.dv4[9321], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9354] = t45;
  memset(&SD->u1.f2.dv4[9355], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[9568] = -1.0;
  memset(&SD->u1.f2.dv4[9569], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9602] = 1.0;
  memset(&SD->u1.f2.dv4[9603], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9619] = t48;
  memset(&SD->u1.f2.dv4[9620], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9653] = t48;
  memset(&SD->u1.f2.dv4[9654], 0, 213U * sizeof(real_T));
  SD->u1.f2.dv4[9867] = -1.0;
  memset(&SD->u1.f2.dv4[9868], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9901] = 1.0;
  memset(&SD->u1.f2.dv4[9902], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[9918] = t51;
  memset(&SD->u1.f2.dv4[9919], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[9952] = t51;
  memset(&SD->u1.f2.dv4[9953], 0, 247U * sizeof(real_T));
  SD->u1.f2.dv4[10200] = t4;
  memset(&SD->u1.f2.dv4[10201], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10234] = t4;
  memset(&SD->u1.f2.dv4[10235], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[10499] = t7;
  memset(&SD->u1.f2.dv4[10500], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10533] = t7;
  memset(&SD->u1.f2.dv4[10534], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[10798] = t10;
  memset(&SD->u1.f2.dv4[10799], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[10832] = t10;
  memset(&SD->u1.f2.dv4[10833], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[11097] = t13;
  memset(&SD->u1.f2.dv4[11098], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11131] = t13;
  memset(&SD->u1.f2.dv4[11132], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[11396] = t16;
  memset(&SD->u1.f2.dv4[11397], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11430] = t16;
  memset(&SD->u1.f2.dv4[11431], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[11695] = t19;
  memset(&SD->u1.f2.dv4[11696], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[11729] = t19;
  memset(&SD->u1.f2.dv4[11730], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[11994] = t22;
  memset(&SD->u1.f2.dv4[11995], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12028] = t22;
  memset(&SD->u1.f2.dv4[12029], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[12293] = t25;
  memset(&SD->u1.f2.dv4[12294], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12327] = t25;
  memset(&SD->u1.f2.dv4[12328], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[12592] = t28;
  memset(&SD->u1.f2.dv4[12593], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12626] = t28;
  memset(&SD->u1.f2.dv4[12627], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[12891] = t31;
  memset(&SD->u1.f2.dv4[12892], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[12925] = t31;
  memset(&SD->u1.f2.dv4[12926], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[13190] = t34;
  memset(&SD->u1.f2.dv4[13191], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13224] = t34;
  memset(&SD->u1.f2.dv4[13225], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[13489] = t37;
  memset(&SD->u1.f2.dv4[13490], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13523] = t37;
  memset(&SD->u1.f2.dv4[13524], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[13788] = t40;
  memset(&SD->u1.f2.dv4[13789], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[13822] = t40;
  memset(&SD->u1.f2.dv4[13823], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[14087] = t43;
  memset(&SD->u1.f2.dv4[14088], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14121] = t43;
  memset(&SD->u1.f2.dv4[14122], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[14386] = t46;
  memset(&SD->u1.f2.dv4[14387], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14420] = t46;
  memset(&SD->u1.f2.dv4[14421], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[14685] = t49;
  memset(&SD->u1.f2.dv4[14686], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[14719] = t49;
  memset(&SD->u1.f2.dv4[14720], 0, 264U * sizeof(real_T));
  SD->u1.f2.dv4[14984] = t52;
  memset(&SD->u1.f2.dv4[14985], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15018] = t52;
  memset(&SD->u1.f2.dv4[15019], 0, 179U * sizeof(real_T));
  SD->u1.f2.dv4[15198] = 1.0;
  memset(&SD->u1.f2.dv4[15199], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15232] = -1.0;
  memset(&SD->u1.f2.dv4[15233], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15317] = 1.0;
  SD->u1.f2.dv4[15318] = 0.0;
  SD->u1.f2.dv4[15319] = 0.0;
  SD->u1.f2.dv4[15320] = 0.0;
  SD->u1.f2.dv4[15321] = -1.0;
  memset(&SD->u1.f2.dv4[15322], 0, 26U * sizeof(real_T));
  SD->u1.f2.dv4[15348] = 1.0;
  memset(&SD->u1.f2.dv4[15349], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15382] = -1.0;
  memset(&SD->u1.f2.dv4[15383], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15467] = 1.0;
  SD->u1.f2.dv4[15468] = 0.0;
  SD->u1.f2.dv4[15469] = 0.0;
  SD->u1.f2.dv4[15470] = 0.0;
  SD->u1.f2.dv4[15471] = -1.0;
  memset(&SD->u1.f2.dv4[15472], 0, 26U * sizeof(real_T));
  SD->u1.f2.dv4[15498] = 1.0;
  memset(&SD->u1.f2.dv4[15499], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15532] = -1.0;
  memset(&SD->u1.f2.dv4[15533], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15617] = 1.0;
  SD->u1.f2.dv4[15618] = 0.0;
  SD->u1.f2.dv4[15619] = 0.0;
  SD->u1.f2.dv4[15620] = 0.0;
  SD->u1.f2.dv4[15621] = -1.0;
  memset(&SD->u1.f2.dv4[15622], 0, 26U * sizeof(real_T));
  SD->u1.f2.dv4[15648] = 1.0;
  memset(&SD->u1.f2.dv4[15649], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15682] = -1.0;
  memset(&SD->u1.f2.dv4[15683], 0, 84U * sizeof(real_T));
  SD->u1.f2.dv4[15767] = 1.0;
  SD->u1.f2.dv4[15768] = 0.0;
  SD->u1.f2.dv4[15769] = 0.0;
  SD->u1.f2.dv4[15770] = 0.0;
  SD->u1.f2.dv4[15771] = -1.0;
  memset(&SD->u1.f2.dv4[15772], 0, 26U * sizeof(real_T));
  SD->u1.f2.dv4[15798] = 1.0;
  memset(&SD->u1.f2.dv4[15799], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15832] = -1.0;
  memset(&SD->u1.f2.dv4[15833], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[15948] = 1.0;
  memset(&SD->u1.f2.dv4[15949], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[15982] = -1.0;
  memset(&SD->u1.f2.dv4[15983], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[16098] = 1.0;
  memset(&SD->u1.f2.dv4[16099], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16132] = -1.0;
  memset(&SD->u1.f2.dv4[16133], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[16248] = 1.0;
  memset(&SD->u1.f2.dv4[16249], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16282] = -1.0;
  memset(&SD->u1.f2.dv4[16283], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[16398] = 1.0;
  memset(&SD->u1.f2.dv4[16399], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16432] = -1.0;
  memset(&SD->u1.f2.dv4[16433], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[16548] = 1.0;
  memset(&SD->u1.f2.dv4[16549], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16582] = -1.0;
  memset(&SD->u1.f2.dv4[16583], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[16698] = 1.0;
  memset(&SD->u1.f2.dv4[16699], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16732] = -1.0;
  memset(&SD->u1.f2.dv4[16733], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[16848] = 1.0;
  memset(&SD->u1.f2.dv4[16849], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[16882] = -1.0;
  memset(&SD->u1.f2.dv4[16883], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[16998] = 1.0;
  memset(&SD->u1.f2.dv4[16999], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17032] = -1.0;
  memset(&SD->u1.f2.dv4[17033], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[17148] = 1.0;
  memset(&SD->u1.f2.dv4[17149], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17182] = -1.0;
  memset(&SD->u1.f2.dv4[17183], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[17298] = 1.0;
  memset(&SD->u1.f2.dv4[17299], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17332] = -1.0;
  memset(&SD->u1.f2.dv4[17333], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[17448] = 1.0;
  memset(&SD->u1.f2.dv4[17449], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17482] = -1.0;
  memset(&SD->u1.f2.dv4[17483], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[17598] = 1.0;
  memset(&SD->u1.f2.dv4[17599], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17632] = -1.0;
  memset(&SD->u1.f2.dv4[17633], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[17748] = 1.0;
  memset(&SD->u1.f2.dv4[17749], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17782] = -1.0;
  memset(&SD->u1.f2.dv4[17783], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[17858] = 1.0;
  SD->u1.f2.dv4[17859] = 0.0;
  SD->u1.f2.dv4[17860] = 0.0;
  SD->u1.f2.dv4[17861] = 0.0;
  SD->u1.f2.dv4[17862] = -1.0;
  memset(&SD->u1.f2.dv4[17863], 0, 35U * sizeof(real_T));
  SD->u1.f2.dv4[17898] = 1.0;
  memset(&SD->u1.f2.dv4[17899], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[17932] = -1.0;
  memset(&SD->u1.f2.dv4[17933], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[18008] = 1.0;
  SD->u1.f2.dv4[18009] = 0.0;
  SD->u1.f2.dv4[18010] = 0.0;
  SD->u1.f2.dv4[18011] = 0.0;
  SD->u1.f2.dv4[18012] = -1.0;
  memset(&SD->u1.f2.dv4[18013], 0, 35U * sizeof(real_T));
  SD->u1.f2.dv4[18048] = 1.0;
  memset(&SD->u1.f2.dv4[18049], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18082] = -1.0;
  memset(&SD->u1.f2.dv4[18083], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[18158] = 1.0;
  SD->u1.f2.dv4[18159] = 0.0;
  SD->u1.f2.dv4[18160] = 0.0;
  SD->u1.f2.dv4[18161] = 0.0;
  SD->u1.f2.dv4[18162] = -1.0;
  memset(&SD->u1.f2.dv4[18163], 0, 35U * sizeof(real_T));
  SD->u1.f2.dv4[18198] = 1.0;
  memset(&SD->u1.f2.dv4[18199], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18232] = -1.0;
  memset(&SD->u1.f2.dv4[18233], 0, 75U * sizeof(real_T));
  SD->u1.f2.dv4[18308] = 1.0;
  SD->u1.f2.dv4[18309] = 0.0;
  SD->u1.f2.dv4[18310] = 0.0;
  SD->u1.f2.dv4[18311] = 0.0;
  SD->u1.f2.dv4[18312] = -1.0;
  memset(&SD->u1.f2.dv4[18313], 0, 35U * sizeof(real_T));
  SD->u1.f2.dv4[18348] = 1.0;
  memset(&SD->u1.f2.dv4[18349], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18382] = -1.0;
  memset(&SD->u1.f2.dv4[18383], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[18498] = 1.0;
  memset(&SD->u1.f2.dv4[18499], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18532] = -1.0;
  memset(&SD->u1.f2.dv4[18533], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[18648] = 1.0;
  memset(&SD->u1.f2.dv4[18649], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18682] = -1.0;
  memset(&SD->u1.f2.dv4[18683], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[18798] = 1.0;
  memset(&SD->u1.f2.dv4[18799], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18832] = -1.0;
  memset(&SD->u1.f2.dv4[18833], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[18948] = 1.0;
  memset(&SD->u1.f2.dv4[18949], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[18982] = -1.0;
  memset(&SD->u1.f2.dv4[18983], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[19098] = 1.0;
  memset(&SD->u1.f2.dv4[19099], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19132] = -1.0;
  memset(&SD->u1.f2.dv4[19133], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[19248] = 1.0;
  memset(&SD->u1.f2.dv4[19249], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19282] = -1.0;
  memset(&SD->u1.f2.dv4[19283], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[19398] = 1.0;
  memset(&SD->u1.f2.dv4[19399], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19432] = -1.0;
  memset(&SD->u1.f2.dv4[19433], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[19548] = 1.0;
  memset(&SD->u1.f2.dv4[19549], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19582] = -1.0;
  memset(&SD->u1.f2.dv4[19583], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[19698] = 1.0;
  memset(&SD->u1.f2.dv4[19699], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19732] = -1.0;
  memset(&SD->u1.f2.dv4[19733], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[19848] = 1.0;
  memset(&SD->u1.f2.dv4[19849], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[19882] = -1.0;
  memset(&SD->u1.f2.dv4[19883], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[19998] = 1.0;
  memset(&SD->u1.f2.dv4[19999], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[20032] = -1.0;
  memset(&SD->u1.f2.dv4[20033], 0, 115U * sizeof(real_T));
  SD->u1.f2.dv4[20148] = 1.0;
  memset(&SD->u1.f2.dv4[20149], 0, 33U * sizeof(real_T));
  SD->u1.f2.dv4[20182] = -1.0;
  memset(&SD->u1.f2.dv4[20183], 0, 3891U * sizeof(real_T));
  SD->u1.f2.dv4[24074] = -1.0;
  memset(&SD->u1.f2.dv4[24075], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24091] = -1.0;
  memset(&SD->u1.f2.dv4[24092], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[24224] = -1.0;
  memset(&SD->u1.f2.dv4[24225], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24241] = -1.0;
  memset(&SD->u1.f2.dv4[24242], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[24374] = -1.0;
  memset(&SD->u1.f2.dv4[24375], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24391] = -1.0;
  memset(&SD->u1.f2.dv4[24392], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[24524] = -1.0;
  memset(&SD->u1.f2.dv4[24525], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24541] = -1.0;
  memset(&SD->u1.f2.dv4[24542], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[24674] = -1.0;
  memset(&SD->u1.f2.dv4[24675], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24691] = -1.0;
  memset(&SD->u1.f2.dv4[24692], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[24824] = -1.0;
  memset(&SD->u1.f2.dv4[24825], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24841] = -1.0;
  memset(&SD->u1.f2.dv4[24842], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[24974] = -1.0;
  memset(&SD->u1.f2.dv4[24975], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[24991] = -1.0;
  memset(&SD->u1.f2.dv4[24992], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[25124] = -1.0;
  memset(&SD->u1.f2.dv4[25125], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25141] = -1.0;
  memset(&SD->u1.f2.dv4[25142], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[25274] = -1.0;
  memset(&SD->u1.f2.dv4[25275], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25291] = -1.0;
  memset(&SD->u1.f2.dv4[25292], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[25424] = -1.0;
  memset(&SD->u1.f2.dv4[25425], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25441] = -1.0;
  memset(&SD->u1.f2.dv4[25442], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[25574] = -1.0;
  memset(&SD->u1.f2.dv4[25575], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25591] = -1.0;
  memset(&SD->u1.f2.dv4[25592], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[25724] = -1.0;
  memset(&SD->u1.f2.dv4[25725], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25741] = -1.0;
  memset(&SD->u1.f2.dv4[25742], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[25874] = -1.0;
  memset(&SD->u1.f2.dv4[25875], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[25891] = -1.0;
  memset(&SD->u1.f2.dv4[25892], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[26024] = -1.0;
  memset(&SD->u1.f2.dv4[26025], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[26041] = -1.0;
  memset(&SD->u1.f2.dv4[26042], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[26174] = -1.0;
  memset(&SD->u1.f2.dv4[26175], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[26191] = -1.0;
  memset(&SD->u1.f2.dv4[26192], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[26324] = -1.0;
  memset(&SD->u1.f2.dv4[26325], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[26341] = -1.0;
  memset(&SD->u1.f2.dv4[26342], 0, 132U * sizeof(real_T));
  SD->u1.f2.dv4[26474] = -1.0;
  memset(&SD->u1.f2.dv4[26475], 0, sizeof(real_T) << 4);
  SD->u1.f2.dv4[26491] = -1.0;
  memset(&SD->u1.f2.dv4[26492], 0, 2682U * sizeof(real_T));
  SD->u1.f2.dv4[29174] = -1.0;
  SD->u1.f2.dv4[29175] = 0.0;
  SD->u1.f2.dv4[29176] = 0.0;
  SD->u1.f2.dv4[29177] = 0.0;
  SD->u1.f2.dv4[29178] = -1.0;
  memset(&SD->u1.f2.dv4[29179], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[29324] = -1.0;
  SD->u1.f2.dv4[29325] = 0.0;
  SD->u1.f2.dv4[29326] = 0.0;
  SD->u1.f2.dv4[29327] = 0.0;
  SD->u1.f2.dv4[29328] = -1.0;
  memset(&SD->u1.f2.dv4[29329], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[29474] = -1.0;
  SD->u1.f2.dv4[29475] = 0.0;
  SD->u1.f2.dv4[29476] = 0.0;
  SD->u1.f2.dv4[29477] = 0.0;
  SD->u1.f2.dv4[29478] = -1.0;
  memset(&SD->u1.f2.dv4[29479], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[29624] = -1.0;
  SD->u1.f2.dv4[29625] = 0.0;
  SD->u1.f2.dv4[29626] = 0.0;
  SD->u1.f2.dv4[29627] = 0.0;
  SD->u1.f2.dv4[29628] = -1.0;
  memset(&SD->u1.f2.dv4[29629], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[29778] = -1.0;
  SD->u1.f2.dv4[29779] = 0.0;
  SD->u1.f2.dv4[29780] = 0.0;
  SD->u1.f2.dv4[29781] = 0.0;
  SD->u1.f2.dv4[29782] = -1.0;
  memset(&SD->u1.f2.dv4[29783], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[29928] = -1.0;
  SD->u1.f2.dv4[29929] = 0.0;
  SD->u1.f2.dv4[29930] = 0.0;
  SD->u1.f2.dv4[29931] = 0.0;
  SD->u1.f2.dv4[29932] = -1.0;
  memset(&SD->u1.f2.dv4[29933], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[30078] = -1.0;
  SD->u1.f2.dv4[30079] = 0.0;
  SD->u1.f2.dv4[30080] = 0.0;
  SD->u1.f2.dv4[30081] = 0.0;
  SD->u1.f2.dv4[30082] = -1.0;
  memset(&SD->u1.f2.dv4[30083], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[30228] = -1.0;
  SD->u1.f2.dv4[30229] = 0.0;
  SD->u1.f2.dv4[30230] = 0.0;
  SD->u1.f2.dv4[30231] = 0.0;
  SD->u1.f2.dv4[30232] = -1.0;
  memset(&SD->u1.f2.dv4[30233], 0, 298U * sizeof(real_T));
  SD->u1.f2.dv4[30531] = t53;
  SD->u1.f2.dv4[30532] = 0.0;
  SD->u1.f2.dv4[30533] = 0.0;
  SD->u1.f2.dv4[30534] = 0.0;
  SD->u1.f2.dv4[30535] = t53;
  memset(&SD->u1.f2.dv4[30536], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[30681] = t56;
  SD->u1.f2.dv4[30682] = 0.0;
  SD->u1.f2.dv4[30683] = 0.0;
  SD->u1.f2.dv4[30684] = 0.0;
  SD->u1.f2.dv4[30685] = t56;
  memset(&SD->u1.f2.dv4[30686], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[30831] = t59;
  SD->u1.f2.dv4[30832] = 0.0;
  SD->u1.f2.dv4[30833] = 0.0;
  SD->u1.f2.dv4[30834] = 0.0;
  SD->u1.f2.dv4[30835] = t59;
  memset(&SD->u1.f2.dv4[30836], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[30981] = t62;
  SD->u1.f2.dv4[30982] = 0.0;
  SD->u1.f2.dv4[30983] = 0.0;
  SD->u1.f2.dv4[30984] = 0.0;
  SD->u1.f2.dv4[30985] = t62;
  memset(&SD->u1.f2.dv4[30986], 0, 290U * sizeof(real_T));
  SD->u1.f2.dv4[31276] = t54;
  SD->u1.f2.dv4[31277] = 0.0;
  SD->u1.f2.dv4[31278] = 0.0;
  SD->u1.f2.dv4[31279] = 0.0;
  SD->u1.f2.dv4[31280] = t54;
  memset(&SD->u1.f2.dv4[31281], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[31426] = t57;
  SD->u1.f2.dv4[31427] = 0.0;
  SD->u1.f2.dv4[31428] = 0.0;
  SD->u1.f2.dv4[31429] = 0.0;
  SD->u1.f2.dv4[31430] = t57;
  memset(&SD->u1.f2.dv4[31431], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[31576] = t60;
  SD->u1.f2.dv4[31577] = 0.0;
  SD->u1.f2.dv4[31578] = 0.0;
  SD->u1.f2.dv4[31579] = 0.0;
  SD->u1.f2.dv4[31580] = t60;
  memset(&SD->u1.f2.dv4[31581], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[31726] = t63;
  SD->u1.f2.dv4[31727] = 0.0;
  SD->u1.f2.dv4[31728] = 0.0;
  SD->u1.f2.dv4[31729] = 0.0;
  SD->u1.f2.dv4[31730] = t63;
  memset(&SD->u1.f2.dv4[31731], 0, 290U * sizeof(real_T));
  SD->u1.f2.dv4[32021] = t55;
  SD->u1.f2.dv4[32022] = 0.0;
  SD->u1.f2.dv4[32023] = 0.0;
  SD->u1.f2.dv4[32024] = 0.0;
  SD->u1.f2.dv4[32025] = t55;
  memset(&SD->u1.f2.dv4[32026], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[32171] = t58;
  SD->u1.f2.dv4[32172] = 0.0;
  SD->u1.f2.dv4[32173] = 0.0;
  SD->u1.f2.dv4[32174] = 0.0;
  SD->u1.f2.dv4[32175] = t58;
  memset(&SD->u1.f2.dv4[32176], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[32321] = t61;
  SD->u1.f2.dv4[32322] = 0.0;
  SD->u1.f2.dv4[32323] = 0.0;
  SD->u1.f2.dv4[32324] = 0.0;
  SD->u1.f2.dv4[32325] = t61;
  memset(&SD->u1.f2.dv4[32326], 0, 145U * sizeof(real_T));
  SD->u1.f2.dv4[32471] = t64;
  SD->u1.f2.dv4[32472] = 0.0;
  SD->u1.f2.dv4[32473] = 0.0;
  SD->u1.f2.dv4[32474] = 0.0;
  SD->u1.f2.dv4[32475] = t64;
  memset(&SD->u1.f2.dv4[32476], 0, 141U * sizeof(real_T));
  SD->u1.f2.dv4[32617] = -1.0;
  memset(&SD->u1.f2.dv4[32618], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[32767] = -1.0;
  memset(&SD->u1.f2.dv4[32768], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[32917] = -1.0;
  memset(&SD->u1.f2.dv4[32918], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[33067] = -1.0;
  memset(&SD->u1.f2.dv4[33068], 0, 1494U * sizeof(real_T));
  SD->u1.f2.dv4[34562] = t65;
  SD->u1.f2.dv4[34563] = t65;
  memset(&SD->u1.f2.dv4[34564], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[34713] = t67;
  SD->u1.f2.dv4[34714] = t67;
  memset(&SD->u1.f2.dv4[34715], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[34864] = t69;
  SD->u1.f2.dv4[34865] = t69;
  memset(&SD->u1.f2.dv4[34866], 0, 292U * sizeof(real_T));
  SD->u1.f2.dv4[35158] = t66;
  SD->u1.f2.dv4[35159] = t66;
  memset(&SD->u1.f2.dv4[35160], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[35309] = t68;
  SD->u1.f2.dv4[35310] = t68;
  memset(&SD->u1.f2.dv4[35311], 0, 149U * sizeof(real_T));
  SD->u1.f2.dv4[35460] = t70;
  SD->u1.f2.dv4[35461] = t70;
  memset(&SD->u1.f2.dv4[35462], 0, 293U * sizeof(real_T));
  SD->u1.f2.dv4[35755] = -1.0;
  memset(&SD->u1.f2.dv4[35756], 0, 150U * sizeof(real_T));
  SD->u1.f2.dv4[35906] = -1.0;
  memset(&SD->u1.f2.dv4[35907], 0, 150U * sizeof(real_T));
  SD->u1.f2.dv4[36057] = -1.0;
  for (i2 = 0; i2 < 242; i2++) {
    memcpy(&Aiq[i2 * 149], &SD->u1.f2.dv4[i2 * 149], 149U * sizeof(real_T));
  }

  t71 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t71);
  t2 = muDoubleScalarAbs(t3);
  t5 = muDoubleScalarAbs(t4);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t79 = 1.0 / t2;
  t80 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t80);
  t2 = muDoubleScalarAbs(t6);
  t5 = muDoubleScalarAbs(t7);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t88 = 1.0 / t2;
  t89 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t89);
  t2 = muDoubleScalarAbs(t9);
  t5 = muDoubleScalarAbs(t10);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t97 = 1.0 / t2;
  t98 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t98);
  t2 = muDoubleScalarAbs(t12);
  t5 = muDoubleScalarAbs(t13);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t106 = 1.0 / t2;
  t107 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t107);
  t2 = muDoubleScalarAbs(t15);
  t5 = muDoubleScalarAbs(t16);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t115 = 1.0 / t2;
  t116 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t116);
  t2 = muDoubleScalarAbs(t18);
  t5 = muDoubleScalarAbs(t19);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t124 = 1.0 / t2;
  t125 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t125);
  t2 = muDoubleScalarAbs(t21);
  t5 = muDoubleScalarAbs(t22);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t133 = 1.0 / t2;
  t134 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t134);
  t2 = muDoubleScalarAbs(t24);
  t5 = muDoubleScalarAbs(t25);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t142 = 1.0 / t2;
  t143 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t143);
  t2 = muDoubleScalarAbs(t27);
  t5 = muDoubleScalarAbs(t28);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t151 = 1.0 / t2;
  t152 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t152);
  t2 = muDoubleScalarAbs(t30);
  t5 = muDoubleScalarAbs(t31);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t160 = 1.0 / t2;
  t161 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t161);
  t2 = muDoubleScalarAbs(t33);
  t5 = muDoubleScalarAbs(t34);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t169 = 1.0 / t2;
  t170 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t170);
  t2 = muDoubleScalarAbs(t36);
  t5 = muDoubleScalarAbs(t37);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t178 = 1.0 / t2;
  t179 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t179);
  t2 = muDoubleScalarAbs(t39);
  t5 = muDoubleScalarAbs(t40);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t187 = 1.0 / t2;
  t188 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t188);
  t2 = muDoubleScalarAbs(t42);
  t5 = muDoubleScalarAbs(t43);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t50 = 1.0 / t2;
  t197 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t197);
  t2 = muDoubleScalarAbs(t45);
  t5 = muDoubleScalarAbs(t46);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t44 = 1.0 / t2;
  t47 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t47);
  t2 = muDoubleScalarAbs(t48);
  t5 = muDoubleScalarAbs(t49);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t38 = 1.0 / t2;
  t41 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t41);
  t2 = muDoubleScalarAbs(t51);
  t5 = muDoubleScalarAbs(t52);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t23 = 1.0 / t2;
  t26 = Cpx1 + in12[0];
  t29 = -Cpx1 + in12[0];
  t32 = Cpy1 + in13[0];
  t35 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t2 = muDoubleScalarAbs(t54);
  t5 = muDoubleScalarAbs(t55);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t20 = 1.0 / t2;
  a = muDoubleScalarAbs(t56);
  t2 = muDoubleScalarAbs(t57);
  t5 = muDoubleScalarAbs(t58);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t17 = 1.0 / t2;
  a = muDoubleScalarAbs(t59);
  t2 = muDoubleScalarAbs(t60);
  t5 = muDoubleScalarAbs(t61);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t14 = 1.0 / t2;
  a = muDoubleScalarAbs(t62);
  t2 = muDoubleScalarAbs(t63);
  t5 = muDoubleScalarAbs(t64);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t11 = 1.0 / t2;
  a = muDoubleScalarAbs(t65);
  t2 = muDoubleScalarAbs(t66);
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t67);
  t2 = muDoubleScalarAbs(t68);
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t5 = 1.0 / t2;
  a = muDoubleScalarAbs(t69);
  t2 = muDoubleScalarAbs(t70);
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
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t79) + t4 * (in7[2] - in8->data
              [0] * t4 * t79)) - t71 * (in7[0] + in8->data[0] * t71 * t79);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t88) + t7 * (in7[2] - in8->data
              [2] * t7 * t88)) - t80 * (in7[0] + in8->data[2] * t80 * t88);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t97) + t10 * (in7[2] - in8->
              data[4] * t10 * t97)) - t89 * (in7[0] + in8->data[4] * t89 * t97);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t106) + t13 * (in7[2] -
              in8->data[6] * t13 * t106)) - t98 * (in7[0] + in8->data[6] * t98 *
    t106);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t115) + t16 * (in7[2] -
              in8->data[8] * t16 * t115)) - t107 * (in7[0] + in8->data[8] * t107
    * t115);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t124) + t19 * (in7[2] -
              in8->data[10] * t19 * t124)) - t116 * (in7[0] + in8->data[10] *
    t116 * t124);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t133) + t22 * (in7[2] -
              in8->data[12] * t22 * t133)) - t125 * (in7[0] + in8->data[12] *
    t125 * t133);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t142) + t25 * (in7[2] -
              in8->data[14] * t25 * t142)) - t134 * (in7[0] + in8->data[14] *
    t134 * t142);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t151) + t28 * (in7[2] -
              in8->data[16] * t28 * t151)) - t143 * (in7[0] + in8->data[16] *
    t143 * t151);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t160) + t31 * (in7[2] -
              in8->data[18] * t31 * t160)) - t152 * (in7[0] + in8->data[18] *
    t152 * t160);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t169) + t34 * (in7[2] -
              in8->data[20] * t34 * t169)) - t161 * (in7[0] + in8->data[20] *
    t161 * t169);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t178) + t37 * (in7[2] -
              in8->data[22] * t37 * t178)) - t170 * (in7[0] + in8->data[22] *
    t170 * t178);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t187) + t40 * (in7[2] -
              in8->data[24] * t40 * t187)) - t179 * (in7[0] + in8->data[24] *
    t179 * t187);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t50) + t43 * (in7[2] -
              in8->data[26] * t43 * t50)) - t188 * (in7[0] + in8->data[26] *
    t188 * t50);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t44) + t46 * (in7[2] -
              in8->data[28] * t46 * t44)) - t197 * (in7[0] + in8->data[28] *
    t197 * t44);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t38) + t49 * (in7[2] -
              in8->data[30] * t49 * t38)) - t47 * (in7[0] + in8->data[30] * t47 *
    t38);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t23) + t52 * (in7[2] -
              in8->data[32] * t52 * t23)) - t41 * (in7[0] + in8->data[32] * t41 *
    t23);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t79) + t4 * (in7[2] - in9->
    data[0] * t4 * t79)) - t71 * (in7[0] + in9->data[0] * t71 * t79);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t88) + t7 * (in7[2] - in9->
    data[2] * t7 * t88)) - t80 * (in7[0] + in9->data[2] * t80 * t88);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t97) + t10 * (in7[2] -
    in9->data[4] * t10 * t97)) - t89 * (in7[0] + in9->data[4] * t89 * t97);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t106) + t13 * (in7[2] -
    in9->data[6] * t13 * t106)) - t98 * (in7[0] + in9->data[6] * t98 * t106);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t115) + t16 * (in7[2] -
    in9->data[8] * t16 * t115)) - t107 * (in7[0] + in9->data[8] * t107 * t115);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t124) + t19 * (in7[2] -
    in9->data[10] * t19 * t124)) - t116 * (in7[0] + in9->data[10] * t116 * t124);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t133) + t22 * (in7[2] -
    in9->data[12] * t22 * t133)) - t125 * (in7[0] + in9->data[12] * t125 * t133);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t142) + t25 * (in7[2] -
    in9->data[14] * t25 * t142)) - t134 * (in7[0] + in9->data[14] * t134 * t142);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t151) + t28 * (in7[2] -
    in9->data[16] * t28 * t151)) - t143 * (in7[0] + in9->data[16] * t143 * t151);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t160) + t31 * (in7[2] -
    in9->data[18] * t31 * t160)) - t152 * (in7[0] + in9->data[18] * t152 * t160);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t169) + t34 * (in7[2] -
    in9->data[20] * t34 * t169)) - t161 * (in7[0] + in9->data[20] * t161 * t169);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t178) + t37 * (in7[2] -
    in9->data[22] * t37 * t178)) - t170 * (in7[0] + in9->data[22] * t170 * t178);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t187) + t40 * (in7[2] -
    in9->data[24] * t40 * t187)) - t179 * (in7[0] + in9->data[24] * t179 * t187);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t50) + t43 * (in7[2] -
    in9->data[26] * t43 * t50)) - t188 * (in7[0] + in9->data[26] * t188 * t50);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t44) + t46 * (in7[2] -
    in9->data[28] * t46 * t44)) - t197 * (in7[0] + in9->data[28] * t197 * t44);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t38) + t49 * (in7[2] -
    in9->data[30] * t49 * t38)) - t47 * (in7[0] + in9->data[30] * t47 * t38);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t23) + t52 * (in7[2] -
    in9->data[32] * t52 * t23)) - t41 * (in7[0] + in9->data[32] * t41 * t23);
  biq[119] = t26;
  biq[120] = t26;
  biq[121] = t26;
  biq[122] = t26;
  biq[123] = t29;
  biq[124] = t29;
  biq[125] = t29;
  biq[126] = t29;
  biq[127] = t32;
  biq[128] = t32;
  biq[129] = t32;
  biq[130] = t32;
  biq[131] = t35;
  biq[132] = t35;
  biq[133] = t35;
  biq[134] = t35;
  biq[135] = (t53 * (in15[0] - in9->data[1] * t53 * t20) + t54 * (in15[1] -
    in9->data[1] * t54 * t20)) + t55 * (in15[2] - in9->data[1] * t55 * t20);
  biq[136] = (t56 * (in15[3] - in9->data[1] * t56 * t17) + t57 * (in15[4] -
    in9->data[1] * t57 * t17)) + t58 * (in15[5] - in9->data[1] * t58 * t17);
  biq[137] = (t59 * (in15[6] - in9->data[1] * t59 * t14) + t60 * (in15[7] -
    in9->data[1] * t60 * t14)) + t61 * (in15[8] - in9->data[1] * t61 * t14);
  biq[138] = (t62 * (in15[9] - in9->data[1] * t62 * t11) + t63 * (in15[10] -
    in9->data[1] * t63 * t11)) + t64 * (in15[11] - in9->data[1] * t64 * t11);
  biq[139] = (t53 * (in15[0] - in8->data[1] * t53 * t20) + t54 * (in15[1] -
    in8->data[1] * t54 * t20)) + t55 * (in15[2] - in8->data[1] * t55 * t20);
  biq[140] = (t56 * (in15[3] - in8->data[1] * t56 * t17) + t57 * (in15[4] -
    in8->data[1] * t57 * t17)) + t58 * (in15[5] - in8->data[1] * t58 * t17);
  biq[141] = (t59 * (in15[6] - in8->data[1] * t59 * t14) + t60 * (in15[7] -
    in8->data[1] * t60 * t14)) + t61 * (in15[8] - in8->data[1] * t61 * t14);
  biq[142] = (t62 * (in15[9] - in8->data[1] * t62 * t11) + t63 * (in15[10] -
    in8->data[1] * t63 * t11)) + t64 * (in15[11] - in8->data[1] * t64 * t11);
  biq[143] = t65 * (in18[2] - in19[1] * t65 * t8) + t66 * (in18[3] - in19[1] *
    t66 * t8);
  biq[144] = t65 * (in18[2] - in19[5] * t65 * t8) + t66 * (in18[3] - in19[5] *
    t66 * t8);
  biq[145] = t67 * (in18[4] - in19[2] * t67 * t5) + t68 * (in18[5] - in19[2] *
    t68 * t5);
  biq[146] = t67 * (in18[4] - in19[6] * t67 * t5) + t68 * (in18[5] - in19[6] *
    t68 * t5);
  biq[147] = t69 * (in18[6] - in19[3] * t69 * t2) + t70 * (in18[7] - in19[3] *
    t70 * t2);
  biq[148] = t69 * (in18[6] - in19[7] * t69 * t2) + t70 * (in18[7] - in19[7] *
    t70 * t2);
}

/* End of code generation (Iq_RightStart03DFootV99.cpp) */
