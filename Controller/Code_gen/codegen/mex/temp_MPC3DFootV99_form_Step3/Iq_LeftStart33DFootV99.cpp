/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart33DFootV99.cpp
 *
 * Code generation for function 'Iq_LeftStart33DFootV99'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV99_form_Step3.h"
#include "Iq_LeftStart33DFootV99.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV99.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart33DFootV99(c_temp_MPC3DFootV99_form_Step3S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[8], real_T Aiq[31702],
  real_T biq[131])
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

  /* IQ_LEFTSTART33DFOOTV99 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART33DFOOTV99(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     10-Jul-2023 17:36:52 */
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
  t53 = in15[0] - in15[19];
  t54 = in15[1] - in15[24];
  t55 = in15[2] - in15[29];
  t56 = in18[2] - in16[1];
  t57 = in18[3] - in17[1];
  t58 = in18[4] - in16[2];
  t59 = in18[5] - in17[2];
  t60 = in18[6] - in16[3];
  t61 = in18[7] - in17[3];
  SD->u1.f0.dv4[0] = -1.0;
  memset(&SD->u1.f0.dv4[1], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[34] = 1.0;
  memset(&SD->u1.f0.dv4[35], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[68] = t2;
  memset(&SD->u1.f0.dv4[69], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[102] = t2;
  memset(&SD->u1.f0.dv4[103], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[263] = -1.0;
  memset(&SD->u1.f0.dv4[264], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[297] = 1.0;
  memset(&SD->u1.f0.dv4[298], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[331] = t5;
  memset(&SD->u1.f0.dv4[332], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[365] = t5;
  memset(&SD->u1.f0.dv4[366], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[526] = -1.0;
  memset(&SD->u1.f0.dv4[527], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[560] = 1.0;
  memset(&SD->u1.f0.dv4[561], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[594] = t8;
  memset(&SD->u1.f0.dv4[595], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[628] = t8;
  memset(&SD->u1.f0.dv4[629], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[789] = -1.0;
  memset(&SD->u1.f0.dv4[790], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[823] = 1.0;
  memset(&SD->u1.f0.dv4[824], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[857] = t11;
  memset(&SD->u1.f0.dv4[858], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[891] = t11;
  memset(&SD->u1.f0.dv4[892], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[1052] = -1.0;
  memset(&SD->u1.f0.dv4[1053], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1086] = 1.0;
  memset(&SD->u1.f0.dv4[1087], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1120] = t14;
  memset(&SD->u1.f0.dv4[1121], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1154] = t14;
  memset(&SD->u1.f0.dv4[1155], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[1315] = -1.0;
  memset(&SD->u1.f0.dv4[1316], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1349] = 1.0;
  memset(&SD->u1.f0.dv4[1350], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1383] = t17;
  memset(&SD->u1.f0.dv4[1384], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1417] = t17;
  memset(&SD->u1.f0.dv4[1418], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[1578] = -1.0;
  memset(&SD->u1.f0.dv4[1579], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1612] = 1.0;
  memset(&SD->u1.f0.dv4[1613], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1646] = t20;
  memset(&SD->u1.f0.dv4[1647], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1680] = t20;
  memset(&SD->u1.f0.dv4[1681], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[1841] = -1.0;
  memset(&SD->u1.f0.dv4[1842], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1875] = 1.0;
  memset(&SD->u1.f0.dv4[1876], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1909] = t23;
  memset(&SD->u1.f0.dv4[1910], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1943] = t23;
  memset(&SD->u1.f0.dv4[1944], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[2104] = -1.0;
  memset(&SD->u1.f0.dv4[2105], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2138] = 1.0;
  memset(&SD->u1.f0.dv4[2139], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2172] = t26;
  memset(&SD->u1.f0.dv4[2173], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2206] = t26;
  memset(&SD->u1.f0.dv4[2207], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[2367] = -1.0;
  memset(&SD->u1.f0.dv4[2368], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2401] = 1.0;
  memset(&SD->u1.f0.dv4[2402], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2435] = t29;
  memset(&SD->u1.f0.dv4[2436], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2469] = t29;
  memset(&SD->u1.f0.dv4[2470], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[2630] = -1.0;
  memset(&SD->u1.f0.dv4[2631], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2664] = 1.0;
  memset(&SD->u1.f0.dv4[2665], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2698] = t32;
  memset(&SD->u1.f0.dv4[2699], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2732] = t32;
  memset(&SD->u1.f0.dv4[2733], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[2893] = -1.0;
  memset(&SD->u1.f0.dv4[2894], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2927] = 1.0;
  memset(&SD->u1.f0.dv4[2928], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2961] = t35;
  memset(&SD->u1.f0.dv4[2962], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2995] = t35;
  memset(&SD->u1.f0.dv4[2996], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[3156] = -1.0;
  memset(&SD->u1.f0.dv4[3157], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3190] = 1.0;
  memset(&SD->u1.f0.dv4[3191], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3224] = t38;
  memset(&SD->u1.f0.dv4[3225], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3258] = t38;
  memset(&SD->u1.f0.dv4[3259], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[3419] = -1.0;
  memset(&SD->u1.f0.dv4[3420], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3453] = 1.0;
  memset(&SD->u1.f0.dv4[3454], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3487] = t41;
  memset(&SD->u1.f0.dv4[3488], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3521] = t41;
  memset(&SD->u1.f0.dv4[3522], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[3682] = -1.0;
  memset(&SD->u1.f0.dv4[3683], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3716] = 1.0;
  memset(&SD->u1.f0.dv4[3717], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3750] = t44;
  memset(&SD->u1.f0.dv4[3751], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3784] = t44;
  memset(&SD->u1.f0.dv4[3785], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[3945] = -1.0;
  memset(&SD->u1.f0.dv4[3946], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3979] = 1.0;
  memset(&SD->u1.f0.dv4[3980], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4013] = t47;
  memset(&SD->u1.f0.dv4[4014], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4047] = t47;
  memset(&SD->u1.f0.dv4[4048], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[4208] = -1.0;
  memset(&SD->u1.f0.dv4[4209], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4242] = 1.0;
  memset(&SD->u1.f0.dv4[4243], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4276] = t50;
  memset(&SD->u1.f0.dv4[4277], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4310] = t50;
  memset(&SD->u1.f0.dv4[4311], 0, 160U * sizeof(real_T));
  SD->u1.f0.dv4[4471] = -1.0;
  memset(&SD->u1.f0.dv4[4472], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4505] = 1.0;
  memset(&SD->u1.f0.dv4[4506], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[4522] = t3;
  memset(&SD->u1.f0.dv4[4523], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4556] = t3;
  memset(&SD->u1.f0.dv4[4557], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[4734] = -1.0;
  memset(&SD->u1.f0.dv4[4735], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4768] = 1.0;
  memset(&SD->u1.f0.dv4[4769], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[4785] = t6;
  memset(&SD->u1.f0.dv4[4786], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4819] = t6;
  memset(&SD->u1.f0.dv4[4820], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[4997] = -1.0;
  memset(&SD->u1.f0.dv4[4998], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5031] = 1.0;
  memset(&SD->u1.f0.dv4[5032], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5048] = t9;
  memset(&SD->u1.f0.dv4[5049], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5082] = t9;
  memset(&SD->u1.f0.dv4[5083], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[5260] = -1.0;
  memset(&SD->u1.f0.dv4[5261], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5294] = 1.0;
  memset(&SD->u1.f0.dv4[5295], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5311] = t12;
  memset(&SD->u1.f0.dv4[5312], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5345] = t12;
  memset(&SD->u1.f0.dv4[5346], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[5523] = -1.0;
  memset(&SD->u1.f0.dv4[5524], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5557] = 1.0;
  memset(&SD->u1.f0.dv4[5558], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5574] = t15;
  memset(&SD->u1.f0.dv4[5575], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5608] = t15;
  memset(&SD->u1.f0.dv4[5609], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[5786] = -1.0;
  memset(&SD->u1.f0.dv4[5787], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5820] = 1.0;
  memset(&SD->u1.f0.dv4[5821], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5837] = t18;
  memset(&SD->u1.f0.dv4[5838], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5871] = t18;
  memset(&SD->u1.f0.dv4[5872], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[6049] = -1.0;
  memset(&SD->u1.f0.dv4[6050], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6083] = 1.0;
  memset(&SD->u1.f0.dv4[6084], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6100] = t21;
  memset(&SD->u1.f0.dv4[6101], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6134] = t21;
  memset(&SD->u1.f0.dv4[6135], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[6312] = -1.0;
  memset(&SD->u1.f0.dv4[6313], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6346] = 1.0;
  memset(&SD->u1.f0.dv4[6347], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6363] = t24;
  memset(&SD->u1.f0.dv4[6364], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6397] = t24;
  memset(&SD->u1.f0.dv4[6398], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[6575] = -1.0;
  memset(&SD->u1.f0.dv4[6576], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6609] = 1.0;
  memset(&SD->u1.f0.dv4[6610], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6626] = t27;
  memset(&SD->u1.f0.dv4[6627], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6660] = t27;
  memset(&SD->u1.f0.dv4[6661], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[6838] = -1.0;
  memset(&SD->u1.f0.dv4[6839], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6872] = 1.0;
  memset(&SD->u1.f0.dv4[6873], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6889] = t30;
  memset(&SD->u1.f0.dv4[6890], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6923] = t30;
  memset(&SD->u1.f0.dv4[6924], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[7101] = -1.0;
  memset(&SD->u1.f0.dv4[7102], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7135] = 1.0;
  memset(&SD->u1.f0.dv4[7136], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7152] = t33;
  memset(&SD->u1.f0.dv4[7153], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7186] = t33;
  memset(&SD->u1.f0.dv4[7187], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[7364] = -1.0;
  memset(&SD->u1.f0.dv4[7365], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7398] = 1.0;
  memset(&SD->u1.f0.dv4[7399], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7415] = t36;
  memset(&SD->u1.f0.dv4[7416], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7449] = t36;
  memset(&SD->u1.f0.dv4[7450], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[7627] = -1.0;
  memset(&SD->u1.f0.dv4[7628], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7661] = 1.0;
  memset(&SD->u1.f0.dv4[7662], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7678] = t39;
  memset(&SD->u1.f0.dv4[7679], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7712] = t39;
  memset(&SD->u1.f0.dv4[7713], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[7890] = -1.0;
  memset(&SD->u1.f0.dv4[7891], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7924] = 1.0;
  memset(&SD->u1.f0.dv4[7925], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7941] = t42;
  memset(&SD->u1.f0.dv4[7942], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7975] = t42;
  memset(&SD->u1.f0.dv4[7976], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[8153] = -1.0;
  memset(&SD->u1.f0.dv4[8154], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8187] = 1.0;
  memset(&SD->u1.f0.dv4[8188], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8204] = t45;
  memset(&SD->u1.f0.dv4[8205], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8238] = t45;
  memset(&SD->u1.f0.dv4[8239], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[8416] = -1.0;
  memset(&SD->u1.f0.dv4[8417], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8450] = 1.0;
  memset(&SD->u1.f0.dv4[8451], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8467] = t48;
  memset(&SD->u1.f0.dv4[8468], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8501] = t48;
  memset(&SD->u1.f0.dv4[8502], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv4[8679] = -1.0;
  memset(&SD->u1.f0.dv4[8680], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8713] = 1.0;
  memset(&SD->u1.f0.dv4[8714], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8730] = t51;
  memset(&SD->u1.f0.dv4[8731], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8764] = t51;
  memset(&SD->u1.f0.dv4[8765], 0, 211U * sizeof(real_T));
  SD->u1.f0.dv4[8976] = t4;
  memset(&SD->u1.f0.dv4[8977], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9010] = t4;
  memset(&SD->u1.f0.dv4[9011], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[9239] = t7;
  memset(&SD->u1.f0.dv4[9240], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9273] = t7;
  memset(&SD->u1.f0.dv4[9274], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[9502] = t10;
  memset(&SD->u1.f0.dv4[9503], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9536] = t10;
  memset(&SD->u1.f0.dv4[9537], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[9765] = t13;
  memset(&SD->u1.f0.dv4[9766], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9799] = t13;
  memset(&SD->u1.f0.dv4[9800], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[10028] = t16;
  memset(&SD->u1.f0.dv4[10029], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10062] = t16;
  memset(&SD->u1.f0.dv4[10063], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[10291] = t19;
  memset(&SD->u1.f0.dv4[10292], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10325] = t19;
  memset(&SD->u1.f0.dv4[10326], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[10554] = t22;
  memset(&SD->u1.f0.dv4[10555], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10588] = t22;
  memset(&SD->u1.f0.dv4[10589], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[10817] = t25;
  memset(&SD->u1.f0.dv4[10818], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10851] = t25;
  memset(&SD->u1.f0.dv4[10852], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[11080] = t28;
  memset(&SD->u1.f0.dv4[11081], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11114] = t28;
  memset(&SD->u1.f0.dv4[11115], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[11343] = t31;
  memset(&SD->u1.f0.dv4[11344], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11377] = t31;
  memset(&SD->u1.f0.dv4[11378], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[11606] = t34;
  memset(&SD->u1.f0.dv4[11607], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11640] = t34;
  memset(&SD->u1.f0.dv4[11641], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[11869] = t37;
  memset(&SD->u1.f0.dv4[11870], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11903] = t37;
  memset(&SD->u1.f0.dv4[11904], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[12132] = t40;
  memset(&SD->u1.f0.dv4[12133], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12166] = t40;
  memset(&SD->u1.f0.dv4[12167], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[12395] = t43;
  memset(&SD->u1.f0.dv4[12396], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12429] = t43;
  memset(&SD->u1.f0.dv4[12430], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[12658] = t46;
  memset(&SD->u1.f0.dv4[12659], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12692] = t46;
  memset(&SD->u1.f0.dv4[12693], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[12921] = t49;
  memset(&SD->u1.f0.dv4[12922], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12955] = t49;
  memset(&SD->u1.f0.dv4[12956], 0, 228U * sizeof(real_T));
  SD->u1.f0.dv4[13184] = t52;
  memset(&SD->u1.f0.dv4[13185], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13218] = t52;
  memset(&SD->u1.f0.dv4[13219], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv4[13362] = 1.0;
  memset(&SD->u1.f0.dv4[13363], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13396] = -1.0;
  memset(&SD->u1.f0.dv4[13397], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv4[13481] = 1.0;
  SD->u1.f0.dv4[13482] = -1.0;
  memset(&SD->u1.f0.dv4[13483], 0, 11U * sizeof(real_T));
  SD->u1.f0.dv4[13494] = 1.0;
  memset(&SD->u1.f0.dv4[13495], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13528] = -1.0;
  memset(&SD->u1.f0.dv4[13529], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[13626] = 1.0;
  memset(&SD->u1.f0.dv4[13627], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13660] = -1.0;
  memset(&SD->u1.f0.dv4[13661], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[13758] = 1.0;
  memset(&SD->u1.f0.dv4[13759], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13792] = -1.0;
  memset(&SD->u1.f0.dv4[13793], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[13890] = 1.0;
  memset(&SD->u1.f0.dv4[13891], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13924] = -1.0;
  memset(&SD->u1.f0.dv4[13925], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14022] = 1.0;
  memset(&SD->u1.f0.dv4[14023], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14056] = -1.0;
  memset(&SD->u1.f0.dv4[14057], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14154] = 1.0;
  memset(&SD->u1.f0.dv4[14155], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14188] = -1.0;
  memset(&SD->u1.f0.dv4[14189], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14286] = 1.0;
  memset(&SD->u1.f0.dv4[14287], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14320] = -1.0;
  memset(&SD->u1.f0.dv4[14321], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14418] = 1.0;
  memset(&SD->u1.f0.dv4[14419], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14452] = -1.0;
  memset(&SD->u1.f0.dv4[14453], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14550] = 1.0;
  memset(&SD->u1.f0.dv4[14551], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14584] = -1.0;
  memset(&SD->u1.f0.dv4[14585], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14682] = 1.0;
  memset(&SD->u1.f0.dv4[14683], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14716] = -1.0;
  memset(&SD->u1.f0.dv4[14717], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14814] = 1.0;
  memset(&SD->u1.f0.dv4[14815], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14848] = -1.0;
  memset(&SD->u1.f0.dv4[14849], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[14946] = 1.0;
  memset(&SD->u1.f0.dv4[14947], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14980] = -1.0;
  memset(&SD->u1.f0.dv4[14981], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[15078] = 1.0;
  memset(&SD->u1.f0.dv4[15079], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15112] = -1.0;
  memset(&SD->u1.f0.dv4[15113], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[15210] = 1.0;
  memset(&SD->u1.f0.dv4[15211], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15244] = -1.0;
  memset(&SD->u1.f0.dv4[15245], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[15342] = 1.0;
  memset(&SD->u1.f0.dv4[15343], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15376] = -1.0;
  memset(&SD->u1.f0.dv4[15377], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[15474] = 1.0;
  memset(&SD->u1.f0.dv4[15475], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15508] = -1.0;
  memset(&SD->u1.f0.dv4[15509], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[15606] = 1.0;
  memset(&SD->u1.f0.dv4[15607], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15640] = -1.0;
  memset(&SD->u1.f0.dv4[15641], 0, 69U * sizeof(real_T));
  SD->u1.f0.dv4[15710] = 1.0;
  SD->u1.f0.dv4[15711] = -1.0;
  memset(&SD->u1.f0.dv4[15712], 0, 26U * sizeof(real_T));
  SD->u1.f0.dv4[15738] = 1.0;
  memset(&SD->u1.f0.dv4[15739], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15772] = -1.0;
  memset(&SD->u1.f0.dv4[15773], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[15870] = 1.0;
  memset(&SD->u1.f0.dv4[15871], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15904] = -1.0;
  memset(&SD->u1.f0.dv4[15905], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16002] = 1.0;
  memset(&SD->u1.f0.dv4[16003], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16036] = -1.0;
  memset(&SD->u1.f0.dv4[16037], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16134] = 1.0;
  memset(&SD->u1.f0.dv4[16135], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16168] = -1.0;
  memset(&SD->u1.f0.dv4[16169], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16266] = 1.0;
  memset(&SD->u1.f0.dv4[16267], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16300] = -1.0;
  memset(&SD->u1.f0.dv4[16301], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16398] = 1.0;
  memset(&SD->u1.f0.dv4[16399], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16432] = -1.0;
  memset(&SD->u1.f0.dv4[16433], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16530] = 1.0;
  memset(&SD->u1.f0.dv4[16531], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16564] = -1.0;
  memset(&SD->u1.f0.dv4[16565], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16662] = 1.0;
  memset(&SD->u1.f0.dv4[16663], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16696] = -1.0;
  memset(&SD->u1.f0.dv4[16697], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16794] = 1.0;
  memset(&SD->u1.f0.dv4[16795], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16828] = -1.0;
  memset(&SD->u1.f0.dv4[16829], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[16926] = 1.0;
  memset(&SD->u1.f0.dv4[16927], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16960] = -1.0;
  memset(&SD->u1.f0.dv4[16961], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[17058] = 1.0;
  memset(&SD->u1.f0.dv4[17059], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17092] = -1.0;
  memset(&SD->u1.f0.dv4[17093], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[17190] = 1.0;
  memset(&SD->u1.f0.dv4[17191], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17224] = -1.0;
  memset(&SD->u1.f0.dv4[17225], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[17322] = 1.0;
  memset(&SD->u1.f0.dv4[17323], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17356] = -1.0;
  memset(&SD->u1.f0.dv4[17357], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[17454] = 1.0;
  memset(&SD->u1.f0.dv4[17455], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17488] = -1.0;
  memset(&SD->u1.f0.dv4[17489], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[17586] = 1.0;
  memset(&SD->u1.f0.dv4[17587], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17620] = -1.0;
  memset(&SD->u1.f0.dv4[17621], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv4[17718] = 1.0;
  memset(&SD->u1.f0.dv4[17719], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17752] = -1.0;
  memset(&SD->u1.f0.dv4[17753], 0, 3423U * sizeof(real_T));
  SD->u1.f0.dv4[21176] = -1.0;
  memset(&SD->u1.f0.dv4[21177], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21193] = -1.0;
  memset(&SD->u1.f0.dv4[21194], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[21308] = -1.0;
  memset(&SD->u1.f0.dv4[21309], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21325] = -1.0;
  memset(&SD->u1.f0.dv4[21326], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[21440] = -1.0;
  memset(&SD->u1.f0.dv4[21441], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21457] = -1.0;
  memset(&SD->u1.f0.dv4[21458], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[21572] = -1.0;
  memset(&SD->u1.f0.dv4[21573], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21589] = -1.0;
  memset(&SD->u1.f0.dv4[21590], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[21704] = -1.0;
  memset(&SD->u1.f0.dv4[21705], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21721] = -1.0;
  memset(&SD->u1.f0.dv4[21722], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[21836] = -1.0;
  memset(&SD->u1.f0.dv4[21837], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21853] = -1.0;
  memset(&SD->u1.f0.dv4[21854], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[21968] = -1.0;
  memset(&SD->u1.f0.dv4[21969], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21985] = -1.0;
  memset(&SD->u1.f0.dv4[21986], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[22100] = -1.0;
  memset(&SD->u1.f0.dv4[22101], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22117] = -1.0;
  memset(&SD->u1.f0.dv4[22118], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[22232] = -1.0;
  memset(&SD->u1.f0.dv4[22233], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22249] = -1.0;
  memset(&SD->u1.f0.dv4[22250], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[22364] = -1.0;
  memset(&SD->u1.f0.dv4[22365], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22381] = -1.0;
  memset(&SD->u1.f0.dv4[22382], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[22496] = -1.0;
  memset(&SD->u1.f0.dv4[22497], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22513] = -1.0;
  memset(&SD->u1.f0.dv4[22514], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[22628] = -1.0;
  memset(&SD->u1.f0.dv4[22629], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22645] = -1.0;
  memset(&SD->u1.f0.dv4[22646], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[22760] = -1.0;
  memset(&SD->u1.f0.dv4[22761], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22777] = -1.0;
  memset(&SD->u1.f0.dv4[22778], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[22892] = -1.0;
  memset(&SD->u1.f0.dv4[22893], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22909] = -1.0;
  memset(&SD->u1.f0.dv4[22910], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[23024] = -1.0;
  memset(&SD->u1.f0.dv4[23025], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23041] = -1.0;
  memset(&SD->u1.f0.dv4[23042], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[23156] = -1.0;
  memset(&SD->u1.f0.dv4[23157], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23173] = -1.0;
  memset(&SD->u1.f0.dv4[23174], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv4[23288] = -1.0;
  memset(&SD->u1.f0.dv4[23289], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[23305] = -1.0;
  memset(&SD->u1.f0.dv4[23306], 0, 2358U * sizeof(real_T));
  SD->u1.f0.dv4[25664] = -1.0;
  SD->u1.f0.dv4[25665] = -1.0;
  memset(&SD->u1.f0.dv4[25666], 0, 524U * sizeof(real_T));
  SD->u1.f0.dv4[26190] = -1.0;
  SD->u1.f0.dv4[26191] = -1.0;
  memset(&SD->u1.f0.dv4[26192], 0, 1048U * sizeof(real_T));
  SD->u1.f0.dv4[27240] = t53;
  SD->u1.f0.dv4[27241] = t53;
  memset(&SD->u1.f0.dv4[27242], 0, 653U * sizeof(real_T));
  SD->u1.f0.dv4[27895] = t54;
  SD->u1.f0.dv4[27896] = t54;
  memset(&SD->u1.f0.dv4[27897], 0, 653U * sizeof(real_T));
  SD->u1.f0.dv4[28550] = t55;
  SD->u1.f0.dv4[28551] = t55;
  memset(&SD->u1.f0.dv4[28552], 0, 522U * sizeof(real_T));
  SD->u1.f0.dv4[29074] = -1.0;
  memset(&SD->u1.f0.dv4[29075], 0, 1311U * sizeof(real_T));
  SD->u1.f0.dv4[30386] = t56;
  SD->u1.f0.dv4[30387] = t56;
  memset(&SD->u1.f0.dv4[30388], 0, 131U * sizeof(real_T));
  SD->u1.f0.dv4[30519] = t58;
  SD->u1.f0.dv4[30520] = t58;
  memset(&SD->u1.f0.dv4[30521], 0, 131U * sizeof(real_T));
  SD->u1.f0.dv4[30652] = t60;
  SD->u1.f0.dv4[30653] = t60;
  memset(&SD->u1.f0.dv4[30654], 0, sizeof(real_T) << 8);
  SD->u1.f0.dv4[30910] = t57;
  SD->u1.f0.dv4[30911] = t57;
  memset(&SD->u1.f0.dv4[30912], 0, 131U * sizeof(real_T));
  SD->u1.f0.dv4[31043] = t59;
  SD->u1.f0.dv4[31044] = t59;
  memset(&SD->u1.f0.dv4[31045], 0, 131U * sizeof(real_T));
  SD->u1.f0.dv4[31176] = t61;
  SD->u1.f0.dv4[31177] = t61;
  memset(&SD->u1.f0.dv4[31178], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv4[31435] = -1.0;
  memset(&SD->u1.f0.dv4[31436], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv4[31568] = -1.0;
  memset(&SD->u1.f0.dv4[31569], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv4[31701] = -1.0;
  for (i1 = 0; i1 < 242; i1++) {
    memcpy(&Aiq[i1 * 131], &SD->u1.f0.dv4[i1 * 131], 131U * sizeof(real_T));
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
  t47 = 1.0 / t2;
  t50 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t50);
  t2 = muDoubleScalarAbs(t36);
  t5 = muDoubleScalarAbs(t37);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t41 = 1.0 / t2;
  t44 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t44);
  t2 = muDoubleScalarAbs(t39);
  t5 = muDoubleScalarAbs(t40);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t35 = 1.0 / t2;
  t38 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t38);
  t2 = muDoubleScalarAbs(t42);
  t5 = muDoubleScalarAbs(t43);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t29 = 1.0 / t2;
  t32 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t32);
  t2 = muDoubleScalarAbs(t45);
  t5 = muDoubleScalarAbs(t46);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t23 = 1.0 / t2;
  t26 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t26);
  t2 = muDoubleScalarAbs(t48);
  t5 = muDoubleScalarAbs(t49);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t17 = 1.0 / t2;
  t20 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t20);
  t2 = muDoubleScalarAbs(t51);
  t5 = muDoubleScalarAbs(t52);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t14 = 1.0 / t2;
  a = muDoubleScalarAbs(t53);
  t2 = muDoubleScalarAbs(t54);
  t5 = muDoubleScalarAbs(t55);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t11 = 1.0 / t2;
  a = muDoubleScalarAbs(t56);
  t2 = muDoubleScalarAbs(t57);
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t58);
  t2 = muDoubleScalarAbs(t59);
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t5 = 1.0 / t2;
  a = muDoubleScalarAbs(t60);
  t2 = muDoubleScalarAbs(t61);
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
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t47) + t34 * (in7[2] -
              in8->data[20] * t34 * t47)) - t152 * (in7[0] + in8->data[20] *
    t152 * t47);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t41) + t37 * (in7[2] -
              in8->data[22] * t37 * t41)) - t50 * (in7[0] + in8->data[22] * t50 *
    t41);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t35) + t40 * (in7[2] -
              in8->data[24] * t40 * t35)) - t44 * (in7[0] + in8->data[24] * t44 *
    t35);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t29) + t43 * (in7[2] -
              in8->data[26] * t43 * t29)) - t38 * (in7[0] + in8->data[26] * t38 *
    t29);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t23) + t46 * (in7[2] -
              in8->data[28] * t46 * t23)) - t32 * (in7[0] + in8->data[28] * t32 *
    t23);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t17) + t49 * (in7[2] -
              in8->data[30] * t49 * t17)) - t26 * (in7[0] + in8->data[30] * t26 *
    t17);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t14) + t52 * (in7[2] -
              in8->data[32] * t52 * t14)) - t20 * (in7[0] + in8->data[32] * t20 *
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
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t47) + t34 * (in7[2] -
    in9->data[20] * t34 * t47)) - t152 * (in7[0] + in9->data[20] * t152 * t47);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t41) + t37 * (in7[2] -
    in9->data[22] * t37 * t41)) - t50 * (in7[0] + in9->data[22] * t50 * t41);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t35) + t40 * (in7[2] -
    in9->data[24] * t40 * t35)) - t44 * (in7[0] + in9->data[24] * t44 * t35);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t29) + t43 * (in7[2] -
    in9->data[26] * t43 * t29)) - t38 * (in7[0] + in9->data[26] * t38 * t29);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t23) + t46 * (in7[2] -
    in9->data[28] * t46 * t23)) - t32 * (in7[0] + in9->data[28] * t32 * t23);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t17) + t49 * (in7[2] -
    in9->data[30] * t49 * t17)) - t26 * (in7[0] + in9->data[30] * t26 * t17);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t14) + t52 * (in7[2] -
    in9->data[32] * t52 * t14)) - t20 * (in7[0] + in9->data[32] * t20 * t14);
  biq[119] = Cpx1 + in12[0];
  biq[120] = -Cpx1 + in12[0];
  biq[121] = Cpy1 + in13[0];
  biq[122] = -Cpy1 + in13[0];
  biq[123] = (t53 * (in15[0] - in9->data[1] * t53 * t11) + t54 * (in15[1] -
    in9->data[1] * t54 * t11)) + t55 * (in15[2] - in9->data[1] * t55 * t11);
  biq[124] = (t53 * (in15[0] - in8->data[1] * t53 * t11) + t54 * (in15[1] -
    in8->data[1] * t54 * t11)) + t55 * (in15[2] - in8->data[1] * t55 * t11);
  biq[125] = t56 * (in18[2] - in19[1] * t56 * t8) + t57 * (in18[3] - in19[1] *
    t57 * t8);
  biq[126] = t56 * (in18[2] - in19[5] * t56 * t8) + t57 * (in18[3] - in19[5] *
    t57 * t8);
  biq[127] = t58 * (in18[4] - in19[2] * t58 * t5) + t59 * (in18[5] - in19[2] *
    t59 * t5);
  biq[128] = t58 * (in18[4] - in19[6] * t58 * t5) + t59 * (in18[5] - in19[6] *
    t59 * t5);
  biq[129] = t60 * (in18[6] - in19[3] * t60 * t2) + t61 * (in18[7] - in19[3] *
    t61 * t2);
  biq[130] = t60 * (in18[6] - in19[7] * t60 * t2) + t61 * (in18[7] - in19[7] *
    t61 * t2);
}

/* End of code generation (Iq_LeftStart33DFootV99.cpp) */
