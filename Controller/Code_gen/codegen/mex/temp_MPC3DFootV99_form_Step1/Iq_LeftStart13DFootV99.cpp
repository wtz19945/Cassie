/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart13DFootV99.cpp
 *
 * Code generation for function 'Iq_LeftStart13DFootV99'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV99_form_Step1.h"
#include "Iq_LeftStart13DFootV99.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart13DFootV99",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart13DFootV99.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart13DFootV99(c_temp_MPC3DFootV99_form_Step1S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[8], real_T Aiq[34606],
  real_T biq[143])
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
  real_T t66;
  real_T t67;
  real_T t68;
  real_T a;
  real_T t76;
  real_T t77;
  real_T t85;
  real_T t86;
  real_T t94;
  real_T t95;
  real_T t103;
  real_T t104;
  real_T t112;
  real_T t113;
  real_T t121;
  real_T t122;
  real_T t130;
  real_T t131;
  real_T t139;
  real_T t140;
  real_T t148;
  real_T t149;
  real_T t157;
  real_T t158;
  real_T t166;
  real_T t167;
  real_T t175;
  real_T t176;
  real_T t184;
  real_T t185;

  /* IQ_LEFTSTART13DFOOTV99 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART13DFOOTV99(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     10-Jul-2023 17:09:22 */
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
  t62 = in18[2] - in16[1];
  t63 = in18[3] - in17[1];
  t64 = in18[4] - in16[2];
  t65 = in18[5] - in17[2];
  t66 = in18[6] - in16[3];
  t67 = in18[7] - in17[3];
  SD->u1.f1.dv3[0] = -1.0;
  memset(&SD->u1.f1.dv3[1], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[34] = 1.0;
  memset(&SD->u1.f1.dv3[35], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[68] = t2;
  memset(&SD->u1.f1.dv3[69], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[102] = t2;
  memset(&SD->u1.f1.dv3[103], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[287] = -1.0;
  memset(&SD->u1.f1.dv3[288], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[321] = 1.0;
  memset(&SD->u1.f1.dv3[322], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[355] = t5;
  memset(&SD->u1.f1.dv3[356], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[389] = t5;
  memset(&SD->u1.f1.dv3[390], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[574] = -1.0;
  memset(&SD->u1.f1.dv3[575], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[608] = 1.0;
  memset(&SD->u1.f1.dv3[609], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[642] = t8;
  memset(&SD->u1.f1.dv3[643], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[676] = t8;
  memset(&SD->u1.f1.dv3[677], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[861] = -1.0;
  memset(&SD->u1.f1.dv3[862], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[895] = 1.0;
  memset(&SD->u1.f1.dv3[896], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[929] = t11;
  memset(&SD->u1.f1.dv3[930], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[963] = t11;
  memset(&SD->u1.f1.dv3[964], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[1148] = -1.0;
  memset(&SD->u1.f1.dv3[1149], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1182] = 1.0;
  memset(&SD->u1.f1.dv3[1183], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1216] = t14;
  memset(&SD->u1.f1.dv3[1217], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1250] = t14;
  memset(&SD->u1.f1.dv3[1251], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[1435] = -1.0;
  memset(&SD->u1.f1.dv3[1436], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1469] = 1.0;
  memset(&SD->u1.f1.dv3[1470], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1503] = t17;
  memset(&SD->u1.f1.dv3[1504], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1537] = t17;
  memset(&SD->u1.f1.dv3[1538], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[1722] = -1.0;
  memset(&SD->u1.f1.dv3[1723], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1756] = 1.0;
  memset(&SD->u1.f1.dv3[1757], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1790] = t20;
  memset(&SD->u1.f1.dv3[1791], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1824] = t20;
  memset(&SD->u1.f1.dv3[1825], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[2009] = -1.0;
  memset(&SD->u1.f1.dv3[2010], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2043] = 1.0;
  memset(&SD->u1.f1.dv3[2044], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2077] = t23;
  memset(&SD->u1.f1.dv3[2078], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2111] = t23;
  memset(&SD->u1.f1.dv3[2112], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[2296] = -1.0;
  memset(&SD->u1.f1.dv3[2297], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2330] = 1.0;
  memset(&SD->u1.f1.dv3[2331], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2364] = t26;
  memset(&SD->u1.f1.dv3[2365], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2398] = t26;
  memset(&SD->u1.f1.dv3[2399], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[2583] = -1.0;
  memset(&SD->u1.f1.dv3[2584], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2617] = 1.0;
  memset(&SD->u1.f1.dv3[2618], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2651] = t29;
  memset(&SD->u1.f1.dv3[2652], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2685] = t29;
  memset(&SD->u1.f1.dv3[2686], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[2870] = -1.0;
  memset(&SD->u1.f1.dv3[2871], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2904] = 1.0;
  memset(&SD->u1.f1.dv3[2905], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2938] = t32;
  memset(&SD->u1.f1.dv3[2939], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2972] = t32;
  memset(&SD->u1.f1.dv3[2973], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[3157] = -1.0;
  memset(&SD->u1.f1.dv3[3158], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3191] = 1.0;
  memset(&SD->u1.f1.dv3[3192], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3225] = t35;
  memset(&SD->u1.f1.dv3[3226], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3259] = t35;
  memset(&SD->u1.f1.dv3[3260], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[3444] = -1.0;
  memset(&SD->u1.f1.dv3[3445], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3478] = 1.0;
  memset(&SD->u1.f1.dv3[3479], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3512] = t38;
  memset(&SD->u1.f1.dv3[3513], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3546] = t38;
  memset(&SD->u1.f1.dv3[3547], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[3731] = -1.0;
  memset(&SD->u1.f1.dv3[3732], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3765] = 1.0;
  memset(&SD->u1.f1.dv3[3766], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3799] = t41;
  memset(&SD->u1.f1.dv3[3800], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3833] = t41;
  memset(&SD->u1.f1.dv3[3834], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[4018] = -1.0;
  memset(&SD->u1.f1.dv3[4019], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4052] = 1.0;
  memset(&SD->u1.f1.dv3[4053], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4086] = t44;
  memset(&SD->u1.f1.dv3[4087], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4120] = t44;
  memset(&SD->u1.f1.dv3[4121], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[4305] = -1.0;
  memset(&SD->u1.f1.dv3[4306], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4339] = 1.0;
  memset(&SD->u1.f1.dv3[4340], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4373] = t47;
  memset(&SD->u1.f1.dv3[4374], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4407] = t47;
  memset(&SD->u1.f1.dv3[4408], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[4592] = -1.0;
  memset(&SD->u1.f1.dv3[4593], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4626] = 1.0;
  memset(&SD->u1.f1.dv3[4627], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4660] = t50;
  memset(&SD->u1.f1.dv3[4661], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4694] = t50;
  memset(&SD->u1.f1.dv3[4695], 0, 184U * sizeof(real_T));
  SD->u1.f1.dv3[4879] = -1.0;
  memset(&SD->u1.f1.dv3[4880], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4913] = 1.0;
  memset(&SD->u1.f1.dv3[4914], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[4930] = t3;
  memset(&SD->u1.f1.dv3[4931], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4964] = t3;
  memset(&SD->u1.f1.dv3[4965], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[5166] = -1.0;
  memset(&SD->u1.f1.dv3[5167], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5200] = 1.0;
  memset(&SD->u1.f1.dv3[5201], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5217] = t6;
  memset(&SD->u1.f1.dv3[5218], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5251] = t6;
  memset(&SD->u1.f1.dv3[5252], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[5453] = -1.0;
  memset(&SD->u1.f1.dv3[5454], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5487] = 1.0;
  memset(&SD->u1.f1.dv3[5488], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5504] = t9;
  memset(&SD->u1.f1.dv3[5505], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5538] = t9;
  memset(&SD->u1.f1.dv3[5539], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[5740] = -1.0;
  memset(&SD->u1.f1.dv3[5741], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5774] = 1.0;
  memset(&SD->u1.f1.dv3[5775], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5791] = t12;
  memset(&SD->u1.f1.dv3[5792], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5825] = t12;
  memset(&SD->u1.f1.dv3[5826], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[6027] = -1.0;
  memset(&SD->u1.f1.dv3[6028], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6061] = 1.0;
  memset(&SD->u1.f1.dv3[6062], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6078] = t15;
  memset(&SD->u1.f1.dv3[6079], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6112] = t15;
  memset(&SD->u1.f1.dv3[6113], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[6314] = -1.0;
  memset(&SD->u1.f1.dv3[6315], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6348] = 1.0;
  memset(&SD->u1.f1.dv3[6349], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6365] = t18;
  memset(&SD->u1.f1.dv3[6366], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6399] = t18;
  memset(&SD->u1.f1.dv3[6400], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[6601] = -1.0;
  memset(&SD->u1.f1.dv3[6602], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6635] = 1.0;
  memset(&SD->u1.f1.dv3[6636], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6652] = t21;
  memset(&SD->u1.f1.dv3[6653], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6686] = t21;
  memset(&SD->u1.f1.dv3[6687], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[6888] = -1.0;
  memset(&SD->u1.f1.dv3[6889], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6922] = 1.0;
  memset(&SD->u1.f1.dv3[6923], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6939] = t24;
  memset(&SD->u1.f1.dv3[6940], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6973] = t24;
  memset(&SD->u1.f1.dv3[6974], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[7175] = -1.0;
  memset(&SD->u1.f1.dv3[7176], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7209] = 1.0;
  memset(&SD->u1.f1.dv3[7210], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7226] = t27;
  memset(&SD->u1.f1.dv3[7227], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7260] = t27;
  memset(&SD->u1.f1.dv3[7261], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[7462] = -1.0;
  memset(&SD->u1.f1.dv3[7463], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7496] = 1.0;
  memset(&SD->u1.f1.dv3[7497], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7513] = t30;
  memset(&SD->u1.f1.dv3[7514], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7547] = t30;
  memset(&SD->u1.f1.dv3[7548], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[7749] = -1.0;
  memset(&SD->u1.f1.dv3[7750], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7783] = 1.0;
  memset(&SD->u1.f1.dv3[7784], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7800] = t33;
  memset(&SD->u1.f1.dv3[7801], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7834] = t33;
  memset(&SD->u1.f1.dv3[7835], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[8036] = -1.0;
  memset(&SD->u1.f1.dv3[8037], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8070] = 1.0;
  memset(&SD->u1.f1.dv3[8071], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8087] = t36;
  memset(&SD->u1.f1.dv3[8088], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8121] = t36;
  memset(&SD->u1.f1.dv3[8122], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[8323] = -1.0;
  memset(&SD->u1.f1.dv3[8324], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8357] = 1.0;
  memset(&SD->u1.f1.dv3[8358], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8374] = t39;
  memset(&SD->u1.f1.dv3[8375], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8408] = t39;
  memset(&SD->u1.f1.dv3[8409], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[8610] = -1.0;
  memset(&SD->u1.f1.dv3[8611], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8644] = 1.0;
  memset(&SD->u1.f1.dv3[8645], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8661] = t42;
  memset(&SD->u1.f1.dv3[8662], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8695] = t42;
  memset(&SD->u1.f1.dv3[8696], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[8897] = -1.0;
  memset(&SD->u1.f1.dv3[8898], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8931] = 1.0;
  memset(&SD->u1.f1.dv3[8932], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8948] = t45;
  memset(&SD->u1.f1.dv3[8949], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8982] = t45;
  memset(&SD->u1.f1.dv3[8983], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[9184] = -1.0;
  memset(&SD->u1.f1.dv3[9185], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9218] = 1.0;
  memset(&SD->u1.f1.dv3[9219], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9235] = t48;
  memset(&SD->u1.f1.dv3[9236], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9269] = t48;
  memset(&SD->u1.f1.dv3[9270], 0, 201U * sizeof(real_T));
  SD->u1.f1.dv3[9471] = -1.0;
  memset(&SD->u1.f1.dv3[9472], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9505] = 1.0;
  memset(&SD->u1.f1.dv3[9506], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[9522] = t51;
  memset(&SD->u1.f1.dv3[9523], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9556] = t51;
  memset(&SD->u1.f1.dv3[9557], 0, 235U * sizeof(real_T));
  SD->u1.f1.dv3[9792] = t4;
  memset(&SD->u1.f1.dv3[9793], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9826] = t4;
  memset(&SD->u1.f1.dv3[9827], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[10079] = t7;
  memset(&SD->u1.f1.dv3[10080], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10113] = t7;
  memset(&SD->u1.f1.dv3[10114], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[10366] = t10;
  memset(&SD->u1.f1.dv3[10367], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10400] = t10;
  memset(&SD->u1.f1.dv3[10401], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[10653] = t13;
  memset(&SD->u1.f1.dv3[10654], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10687] = t13;
  memset(&SD->u1.f1.dv3[10688], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[10940] = t16;
  memset(&SD->u1.f1.dv3[10941], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10974] = t16;
  memset(&SD->u1.f1.dv3[10975], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[11227] = t19;
  memset(&SD->u1.f1.dv3[11228], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11261] = t19;
  memset(&SD->u1.f1.dv3[11262], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[11514] = t22;
  memset(&SD->u1.f1.dv3[11515], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11548] = t22;
  memset(&SD->u1.f1.dv3[11549], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[11801] = t25;
  memset(&SD->u1.f1.dv3[11802], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11835] = t25;
  memset(&SD->u1.f1.dv3[11836], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[12088] = t28;
  memset(&SD->u1.f1.dv3[12089], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12122] = t28;
  memset(&SD->u1.f1.dv3[12123], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[12375] = t31;
  memset(&SD->u1.f1.dv3[12376], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12409] = t31;
  memset(&SD->u1.f1.dv3[12410], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[12662] = t34;
  memset(&SD->u1.f1.dv3[12663], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12696] = t34;
  memset(&SD->u1.f1.dv3[12697], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[12949] = t37;
  memset(&SD->u1.f1.dv3[12950], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12983] = t37;
  memset(&SD->u1.f1.dv3[12984], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[13236] = t40;
  memset(&SD->u1.f1.dv3[13237], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13270] = t40;
  memset(&SD->u1.f1.dv3[13271], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[13523] = t43;
  memset(&SD->u1.f1.dv3[13524], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13557] = t43;
  memset(&SD->u1.f1.dv3[13558], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[13810] = t46;
  memset(&SD->u1.f1.dv3[13811], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13844] = t46;
  memset(&SD->u1.f1.dv3[13845], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[14097] = t49;
  memset(&SD->u1.f1.dv3[14098], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14131] = t49;
  memset(&SD->u1.f1.dv3[14132], 0, 252U * sizeof(real_T));
  SD->u1.f1.dv3[14384] = t52;
  memset(&SD->u1.f1.dv3[14385], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14418] = t52;
  memset(&SD->u1.f1.dv3[14419], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv3[14586] = 1.0;
  memset(&SD->u1.f1.dv3[14587], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14620] = -1.0;
  memset(&SD->u1.f1.dv3[14621], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14705] = 1.0;
  SD->u1.f1.dv3[14706] = 0.0;
  SD->u1.f1.dv3[14707] = 0.0;
  SD->u1.f1.dv3[14708] = -1.0;
  memset(&SD->u1.f1.dv3[14709], 0, 21U * sizeof(real_T));
  SD->u1.f1.dv3[14730] = 1.0;
  memset(&SD->u1.f1.dv3[14731], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14764] = -1.0;
  memset(&SD->u1.f1.dv3[14765], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14849] = 1.0;
  SD->u1.f1.dv3[14850] = 0.0;
  SD->u1.f1.dv3[14851] = 0.0;
  SD->u1.f1.dv3[14852] = -1.0;
  memset(&SD->u1.f1.dv3[14853], 0, 21U * sizeof(real_T));
  SD->u1.f1.dv3[14874] = 1.0;
  memset(&SD->u1.f1.dv3[14875], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14908] = -1.0;
  memset(&SD->u1.f1.dv3[14909], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[14993] = 1.0;
  SD->u1.f1.dv3[14994] = 0.0;
  SD->u1.f1.dv3[14995] = 0.0;
  SD->u1.f1.dv3[14996] = -1.0;
  memset(&SD->u1.f1.dv3[14997], 0, 21U * sizeof(real_T));
  SD->u1.f1.dv3[15018] = 1.0;
  memset(&SD->u1.f1.dv3[15019], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15052] = -1.0;
  memset(&SD->u1.f1.dv3[15053], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[15162] = 1.0;
  memset(&SD->u1.f1.dv3[15163], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15196] = -1.0;
  memset(&SD->u1.f1.dv3[15197], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[15306] = 1.0;
  memset(&SD->u1.f1.dv3[15307], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15340] = -1.0;
  memset(&SD->u1.f1.dv3[15341], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[15450] = 1.0;
  memset(&SD->u1.f1.dv3[15451], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15484] = -1.0;
  memset(&SD->u1.f1.dv3[15485], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[15594] = 1.0;
  memset(&SD->u1.f1.dv3[15595], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15628] = -1.0;
  memset(&SD->u1.f1.dv3[15629], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[15738] = 1.0;
  memset(&SD->u1.f1.dv3[15739], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15772] = -1.0;
  memset(&SD->u1.f1.dv3[15773], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[15882] = 1.0;
  memset(&SD->u1.f1.dv3[15883], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15916] = -1.0;
  memset(&SD->u1.f1.dv3[15917], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[16026] = 1.0;
  memset(&SD->u1.f1.dv3[16027], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16060] = -1.0;
  memset(&SD->u1.f1.dv3[16061], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[16170] = 1.0;
  memset(&SD->u1.f1.dv3[16171], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16204] = -1.0;
  memset(&SD->u1.f1.dv3[16205], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[16314] = 1.0;
  memset(&SD->u1.f1.dv3[16315], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16348] = -1.0;
  memset(&SD->u1.f1.dv3[16349], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[16458] = 1.0;
  memset(&SD->u1.f1.dv3[16459], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16492] = -1.0;
  memset(&SD->u1.f1.dv3[16493], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[16602] = 1.0;
  memset(&SD->u1.f1.dv3[16603], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16636] = -1.0;
  memset(&SD->u1.f1.dv3[16637], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[16746] = 1.0;
  memset(&SD->u1.f1.dv3[16747], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16780] = -1.0;
  memset(&SD->u1.f1.dv3[16781], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[16890] = 1.0;
  memset(&SD->u1.f1.dv3[16891], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16924] = -1.0;
  memset(&SD->u1.f1.dv3[16925], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[17034] = 1.0;
  memset(&SD->u1.f1.dv3[17035], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17068] = -1.0;
  memset(&SD->u1.f1.dv3[17069], 0, 73U * sizeof(real_T));
  SD->u1.f1.dv3[17142] = 1.0;
  SD->u1.f1.dv3[17143] = 0.0;
  SD->u1.f1.dv3[17144] = 0.0;
  SD->u1.f1.dv3[17145] = -1.0;
  memset(&SD->u1.f1.dv3[17146], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv3[17178] = 1.0;
  memset(&SD->u1.f1.dv3[17179], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17212] = -1.0;
  memset(&SD->u1.f1.dv3[17213], 0, 73U * sizeof(real_T));
  SD->u1.f1.dv3[17286] = 1.0;
  SD->u1.f1.dv3[17287] = 0.0;
  SD->u1.f1.dv3[17288] = 0.0;
  SD->u1.f1.dv3[17289] = -1.0;
  memset(&SD->u1.f1.dv3[17290], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv3[17322] = 1.0;
  memset(&SD->u1.f1.dv3[17323], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17356] = -1.0;
  memset(&SD->u1.f1.dv3[17357], 0, 73U * sizeof(real_T));
  SD->u1.f1.dv3[17430] = 1.0;
  SD->u1.f1.dv3[17431] = 0.0;
  SD->u1.f1.dv3[17432] = 0.0;
  SD->u1.f1.dv3[17433] = -1.0;
  memset(&SD->u1.f1.dv3[17434], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv3[17466] = 1.0;
  memset(&SD->u1.f1.dv3[17467], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17500] = -1.0;
  memset(&SD->u1.f1.dv3[17501], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[17610] = 1.0;
  memset(&SD->u1.f1.dv3[17611], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17644] = -1.0;
  memset(&SD->u1.f1.dv3[17645], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[17754] = 1.0;
  memset(&SD->u1.f1.dv3[17755], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17788] = -1.0;
  memset(&SD->u1.f1.dv3[17789], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[17898] = 1.0;
  memset(&SD->u1.f1.dv3[17899], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17932] = -1.0;
  memset(&SD->u1.f1.dv3[17933], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[18042] = 1.0;
  memset(&SD->u1.f1.dv3[18043], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18076] = -1.0;
  memset(&SD->u1.f1.dv3[18077], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[18186] = 1.0;
  memset(&SD->u1.f1.dv3[18187], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18220] = -1.0;
  memset(&SD->u1.f1.dv3[18221], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[18330] = 1.0;
  memset(&SD->u1.f1.dv3[18331], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18364] = -1.0;
  memset(&SD->u1.f1.dv3[18365], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[18474] = 1.0;
  memset(&SD->u1.f1.dv3[18475], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18508] = -1.0;
  memset(&SD->u1.f1.dv3[18509], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[18618] = 1.0;
  memset(&SD->u1.f1.dv3[18619], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18652] = -1.0;
  memset(&SD->u1.f1.dv3[18653], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[18762] = 1.0;
  memset(&SD->u1.f1.dv3[18763], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18796] = -1.0;
  memset(&SD->u1.f1.dv3[18797], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[18906] = 1.0;
  memset(&SD->u1.f1.dv3[18907], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18940] = -1.0;
  memset(&SD->u1.f1.dv3[18941], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[19050] = 1.0;
  memset(&SD->u1.f1.dv3[19051], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19084] = -1.0;
  memset(&SD->u1.f1.dv3[19085], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[19194] = 1.0;
  memset(&SD->u1.f1.dv3[19195], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19228] = -1.0;
  memset(&SD->u1.f1.dv3[19229], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv3[19338] = 1.0;
  memset(&SD->u1.f1.dv3[19339], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[19372] = -1.0;
  memset(&SD->u1.f1.dv3[19373], 0, 3735U * sizeof(real_T));
  SD->u1.f1.dv3[23108] = -1.0;
  memset(&SD->u1.f1.dv3[23109], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23125] = -1.0;
  memset(&SD->u1.f1.dv3[23126], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[23252] = -1.0;
  memset(&SD->u1.f1.dv3[23253], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23269] = -1.0;
  memset(&SD->u1.f1.dv3[23270], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[23396] = -1.0;
  memset(&SD->u1.f1.dv3[23397], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23413] = -1.0;
  memset(&SD->u1.f1.dv3[23414], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[23540] = -1.0;
  memset(&SD->u1.f1.dv3[23541], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23557] = -1.0;
  memset(&SD->u1.f1.dv3[23558], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[23684] = -1.0;
  memset(&SD->u1.f1.dv3[23685], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23701] = -1.0;
  memset(&SD->u1.f1.dv3[23702], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[23828] = -1.0;
  memset(&SD->u1.f1.dv3[23829], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23845] = -1.0;
  memset(&SD->u1.f1.dv3[23846], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[23972] = -1.0;
  memset(&SD->u1.f1.dv3[23973], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23989] = -1.0;
  memset(&SD->u1.f1.dv3[23990], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[24116] = -1.0;
  memset(&SD->u1.f1.dv3[24117], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24133] = -1.0;
  memset(&SD->u1.f1.dv3[24134], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[24260] = -1.0;
  memset(&SD->u1.f1.dv3[24261], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24277] = -1.0;
  memset(&SD->u1.f1.dv3[24278], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[24404] = -1.0;
  memset(&SD->u1.f1.dv3[24405], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24421] = -1.0;
  memset(&SD->u1.f1.dv3[24422], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[24548] = -1.0;
  memset(&SD->u1.f1.dv3[24549], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24565] = -1.0;
  memset(&SD->u1.f1.dv3[24566], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[24692] = -1.0;
  memset(&SD->u1.f1.dv3[24693], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24709] = -1.0;
  memset(&SD->u1.f1.dv3[24710], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[24836] = -1.0;
  memset(&SD->u1.f1.dv3[24837], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24853] = -1.0;
  memset(&SD->u1.f1.dv3[24854], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[24980] = -1.0;
  memset(&SD->u1.f1.dv3[24981], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[24997] = -1.0;
  memset(&SD->u1.f1.dv3[24998], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[25124] = -1.0;
  memset(&SD->u1.f1.dv3[25125], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25141] = -1.0;
  memset(&SD->u1.f1.dv3[25142], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[25268] = -1.0;
  memset(&SD->u1.f1.dv3[25269], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25285] = -1.0;
  memset(&SD->u1.f1.dv3[25286], 0, 126U * sizeof(real_T));
  SD->u1.f1.dv3[25412] = -1.0;
  memset(&SD->u1.f1.dv3[25413], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[25429] = -1.0;
  memset(&SD->u1.f1.dv3[25430], 0, 2574U * sizeof(real_T));
  SD->u1.f1.dv3[28004] = -1.0;
  SD->u1.f1.dv3[28005] = 0.0;
  SD->u1.f1.dv3[28006] = 0.0;
  SD->u1.f1.dv3[28007] = -1.0;
  memset(&SD->u1.f1.dv3[28008], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[28148] = -1.0;
  SD->u1.f1.dv3[28149] = 0.0;
  SD->u1.f1.dv3[28150] = 0.0;
  SD->u1.f1.dv3[28151] = -1.0;
  memset(&SD->u1.f1.dv3[28152], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[28292] = -1.0;
  SD->u1.f1.dv3[28293] = 0.0;
  SD->u1.f1.dv3[28294] = 0.0;
  SD->u1.f1.dv3[28295] = -1.0;
  memset(&SD->u1.f1.dv3[28296], 0, 286U * sizeof(real_T));
  SD->u1.f1.dv3[28582] = -1.0;
  SD->u1.f1.dv3[28583] = 0.0;
  SD->u1.f1.dv3[28584] = 0.0;
  SD->u1.f1.dv3[28585] = -1.0;
  memset(&SD->u1.f1.dv3[28586], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[28726] = -1.0;
  SD->u1.f1.dv3[28727] = 0.0;
  SD->u1.f1.dv3[28728] = 0.0;
  SD->u1.f1.dv3[28729] = -1.0;
  memset(&SD->u1.f1.dv3[28730], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[28870] = -1.0;
  SD->u1.f1.dv3[28871] = 0.0;
  SD->u1.f1.dv3[28872] = 0.0;
  SD->u1.f1.dv3[28873] = -1.0;
  memset(&SD->u1.f1.dv3[28874], 0, 572U * sizeof(real_T));
  SD->u1.f1.dv3[29446] = t53;
  SD->u1.f1.dv3[29447] = 0.0;
  SD->u1.f1.dv3[29448] = 0.0;
  SD->u1.f1.dv3[29449] = t53;
  memset(&SD->u1.f1.dv3[29450], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[29590] = t56;
  SD->u1.f1.dv3[29591] = 0.0;
  SD->u1.f1.dv3[29592] = 0.0;
  SD->u1.f1.dv3[29593] = t56;
  memset(&SD->u1.f1.dv3[29594], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[29734] = t59;
  SD->u1.f1.dv3[29735] = 0.0;
  SD->u1.f1.dv3[29736] = 0.0;
  SD->u1.f1.dv3[29737] = t59;
  memset(&SD->u1.f1.dv3[29738], 0, 423U * sizeof(real_T));
  SD->u1.f1.dv3[30161] = t54;
  SD->u1.f1.dv3[30162] = 0.0;
  SD->u1.f1.dv3[30163] = 0.0;
  SD->u1.f1.dv3[30164] = t54;
  memset(&SD->u1.f1.dv3[30165], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[30305] = t57;
  SD->u1.f1.dv3[30306] = 0.0;
  SD->u1.f1.dv3[30307] = 0.0;
  SD->u1.f1.dv3[30308] = t57;
  memset(&SD->u1.f1.dv3[30309], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[30449] = t60;
  SD->u1.f1.dv3[30450] = 0.0;
  SD->u1.f1.dv3[30451] = 0.0;
  SD->u1.f1.dv3[30452] = t60;
  memset(&SD->u1.f1.dv3[30453], 0, 423U * sizeof(real_T));
  SD->u1.f1.dv3[30876] = t55;
  SD->u1.f1.dv3[30877] = 0.0;
  SD->u1.f1.dv3[30878] = 0.0;
  SD->u1.f1.dv3[30879] = t55;
  memset(&SD->u1.f1.dv3[30880], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[31020] = t58;
  SD->u1.f1.dv3[31021] = 0.0;
  SD->u1.f1.dv3[31022] = 0.0;
  SD->u1.f1.dv3[31023] = t58;
  memset(&SD->u1.f1.dv3[31024], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv3[31164] = t61;
  SD->u1.f1.dv3[31165] = 0.0;
  SD->u1.f1.dv3[31166] = 0.0;
  SD->u1.f1.dv3[31167] = t61;
  memset(&SD->u1.f1.dv3[31168], 0, 280U * sizeof(real_T));
  SD->u1.f1.dv3[31448] = -1.0;
  memset(&SD->u1.f1.dv3[31449], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv3[31592] = -1.0;
  memset(&SD->u1.f1.dv3[31593], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv3[31736] = -1.0;
  memset(&SD->u1.f1.dv3[31737], 0, 1433U * sizeof(real_T));
  SD->u1.f1.dv3[33170] = t62;
  SD->u1.f1.dv3[33171] = t62;
  memset(&SD->u1.f1.dv3[33172], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv3[33315] = t64;
  SD->u1.f1.dv3[33316] = t64;
  memset(&SD->u1.f1.dv3[33317], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv3[33460] = t66;
  SD->u1.f1.dv3[33461] = t66;
  memset(&SD->u1.f1.dv3[33462], 0, 280U * sizeof(real_T));
  SD->u1.f1.dv3[33742] = t63;
  SD->u1.f1.dv3[33743] = t63;
  memset(&SD->u1.f1.dv3[33744], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv3[33887] = t65;
  SD->u1.f1.dv3[33888] = t65;
  memset(&SD->u1.f1.dv3[33889], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv3[34032] = t67;
  SD->u1.f1.dv3[34033] = t67;
  memset(&SD->u1.f1.dv3[34034], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv3[34315] = -1.0;
  memset(&SD->u1.f1.dv3[34316], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv3[34460] = -1.0;
  memset(&SD->u1.f1.dv3[34461], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv3[34605] = -1.0;
  for (i0 = 0; i0 < 242; i0++) {
    memcpy(&Aiq[i0 * 143], &SD->u1.f1.dv3[i0 * 143], 143U * sizeof(real_T));
  }

  t68 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t68);
  t2 = muDoubleScalarAbs(t3);
  t5 = muDoubleScalarAbs(t4);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t76 = 1.0 / t2;
  t77 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t77);
  t2 = muDoubleScalarAbs(t6);
  t5 = muDoubleScalarAbs(t7);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t85 = 1.0 / t2;
  t86 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t86);
  t2 = muDoubleScalarAbs(t9);
  t5 = muDoubleScalarAbs(t10);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t94 = 1.0 / t2;
  t95 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t95);
  t2 = muDoubleScalarAbs(t12);
  t5 = muDoubleScalarAbs(t13);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t103 = 1.0 / t2;
  t104 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t104);
  t2 = muDoubleScalarAbs(t15);
  t5 = muDoubleScalarAbs(t16);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t112 = 1.0 / t2;
  t113 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t113);
  t2 = muDoubleScalarAbs(t18);
  t5 = muDoubleScalarAbs(t19);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t121 = 1.0 / t2;
  t122 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t122);
  t2 = muDoubleScalarAbs(t21);
  t5 = muDoubleScalarAbs(t22);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t130 = 1.0 / t2;
  t131 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t131);
  t2 = muDoubleScalarAbs(t24);
  t5 = muDoubleScalarAbs(t25);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t139 = 1.0 / t2;
  t140 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t140);
  t2 = muDoubleScalarAbs(t27);
  t5 = muDoubleScalarAbs(t28);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t148 = 1.0 / t2;
  t149 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t149);
  t2 = muDoubleScalarAbs(t30);
  t5 = muDoubleScalarAbs(t31);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t157 = 1.0 / t2;
  t158 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t158);
  t2 = muDoubleScalarAbs(t33);
  t5 = muDoubleScalarAbs(t34);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t166 = 1.0 / t2;
  t167 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t167);
  t2 = muDoubleScalarAbs(t36);
  t5 = muDoubleScalarAbs(t37);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t175 = 1.0 / t2;
  t176 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t176);
  t2 = muDoubleScalarAbs(t39);
  t5 = muDoubleScalarAbs(t40);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t184 = 1.0 / t2;
  t185 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t185);
  t2 = muDoubleScalarAbs(t42);
  t5 = muDoubleScalarAbs(t43);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t47 = 1.0 / t2;
  t50 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t50);
  t2 = muDoubleScalarAbs(t45);
  t5 = muDoubleScalarAbs(t46);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t41 = 1.0 / t2;
  t44 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t44);
  t2 = muDoubleScalarAbs(t48);
  t5 = muDoubleScalarAbs(t49);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t35 = 1.0 / t2;
  t38 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t38);
  t2 = muDoubleScalarAbs(t51);
  t5 = muDoubleScalarAbs(t52);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t20 = 1.0 / t2;
  t23 = Cpx1 + in12[0];
  t26 = -Cpx1 + in12[0];
  t29 = Cpy1 + in13[0];
  t32 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t2 = muDoubleScalarAbs(t54);
  t5 = muDoubleScalarAbs(t55);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t17 = 1.0 / t2;
  a = muDoubleScalarAbs(t56);
  t2 = muDoubleScalarAbs(t57);
  t5 = muDoubleScalarAbs(t58);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t14 = 1.0 / t2;
  a = muDoubleScalarAbs(t59);
  t2 = muDoubleScalarAbs(t60);
  t5 = muDoubleScalarAbs(t61);
  t2 = (a * a + t2 * t2) + t5 * t5;
  b_sqrt(&t2);
  t11 = 1.0 / t2;
  a = muDoubleScalarAbs(t62);
  t2 = muDoubleScalarAbs(t63);
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t8 = 1.0 / t2;
  a = muDoubleScalarAbs(t64);
  t2 = muDoubleScalarAbs(t65);
  t2 = a * a + t2 * t2;
  b_sqrt(&t2);
  t5 = 1.0 / t2;
  a = muDoubleScalarAbs(t66);
  t2 = muDoubleScalarAbs(t67);
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
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t76) + t4 * (in7[2] - in8->data
              [0] * t4 * t76)) - t68 * (in7[0] + in8->data[0] * t68 * t76);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t85) + t7 * (in7[2] - in8->data
              [2] * t7 * t85)) - t77 * (in7[0] + in8->data[2] * t77 * t85);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t94) + t10 * (in7[2] - in8->
              data[4] * t10 * t94)) - t86 * (in7[0] + in8->data[4] * t86 * t94);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t103) + t13 * (in7[2] -
              in8->data[6] * t13 * t103)) - t95 * (in7[0] + in8->data[6] * t95 *
    t103);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t112) + t16 * (in7[2] -
              in8->data[8] * t16 * t112)) - t104 * (in7[0] + in8->data[8] * t104
    * t112);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t121) + t19 * (in7[2] -
              in8->data[10] * t19 * t121)) - t113 * (in7[0] + in8->data[10] *
    t113 * t121);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t130) + t22 * (in7[2] -
              in8->data[12] * t22 * t130)) - t122 * (in7[0] + in8->data[12] *
    t122 * t130);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t139) + t25 * (in7[2] -
              in8->data[14] * t25 * t139)) - t131 * (in7[0] + in8->data[14] *
    t131 * t139);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t148) + t28 * (in7[2] -
              in8->data[16] * t28 * t148)) - t140 * (in7[0] + in8->data[16] *
    t140 * t148);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t157) + t31 * (in7[2] -
              in8->data[18] * t31 * t157)) - t149 * (in7[0] + in8->data[18] *
    t149 * t157);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t166) + t34 * (in7[2] -
              in8->data[20] * t34 * t166)) - t158 * (in7[0] + in8->data[20] *
    t158 * t166);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t175) + t37 * (in7[2] -
              in8->data[22] * t37 * t175)) - t167 * (in7[0] + in8->data[22] *
    t167 * t175);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t184) + t40 * (in7[2] -
              in8->data[24] * t40 * t184)) - t176 * (in7[0] + in8->data[24] *
    t176 * t184);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t47) + t43 * (in7[2] -
              in8->data[26] * t43 * t47)) - t185 * (in7[0] + in8->data[26] *
    t185 * t47);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t41) + t46 * (in7[2] -
              in8->data[28] * t46 * t41)) - t50 * (in7[0] + in8->data[28] * t50 *
    t41);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t35) + t49 * (in7[2] -
              in8->data[30] * t49 * t35)) - t44 * (in7[0] + in8->data[30] * t44 *
    t35);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t20) + t52 * (in7[2] -
              in8->data[32] * t52 * t20)) - t38 * (in7[0] + in8->data[32] * t38 *
    t20);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t76) + t4 * (in7[2] - in9->
    data[0] * t4 * t76)) - t68 * (in7[0] + in9->data[0] * t68 * t76);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t85) + t7 * (in7[2] - in9->
    data[2] * t7 * t85)) - t77 * (in7[0] + in9->data[2] * t77 * t85);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t94) + t10 * (in7[2] -
    in9->data[4] * t10 * t94)) - t86 * (in7[0] + in9->data[4] * t86 * t94);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t103) + t13 * (in7[2] -
    in9->data[6] * t13 * t103)) - t95 * (in7[0] + in9->data[6] * t95 * t103);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t112) + t16 * (in7[2] -
    in9->data[8] * t16 * t112)) - t104 * (in7[0] + in9->data[8] * t104 * t112);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t121) + t19 * (in7[2] -
    in9->data[10] * t19 * t121)) - t113 * (in7[0] + in9->data[10] * t113 * t121);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t130) + t22 * (in7[2] -
    in9->data[12] * t22 * t130)) - t122 * (in7[0] + in9->data[12] * t122 * t130);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t139) + t25 * (in7[2] -
    in9->data[14] * t25 * t139)) - t131 * (in7[0] + in9->data[14] * t131 * t139);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t148) + t28 * (in7[2] -
    in9->data[16] * t28 * t148)) - t140 * (in7[0] + in9->data[16] * t140 * t148);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t157) + t31 * (in7[2] -
    in9->data[18] * t31 * t157)) - t149 * (in7[0] + in9->data[18] * t149 * t157);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t166) + t34 * (in7[2] -
    in9->data[20] * t34 * t166)) - t158 * (in7[0] + in9->data[20] * t158 * t166);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t175) + t37 * (in7[2] -
    in9->data[22] * t37 * t175)) - t167 * (in7[0] + in9->data[22] * t167 * t175);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t184) + t40 * (in7[2] -
    in9->data[24] * t40 * t184)) - t176 * (in7[0] + in9->data[24] * t176 * t184);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t47) + t43 * (in7[2] -
    in9->data[26] * t43 * t47)) - t185 * (in7[0] + in9->data[26] * t185 * t47);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t41) + t46 * (in7[2] -
    in9->data[28] * t46 * t41)) - t50 * (in7[0] + in9->data[28] * t50 * t41);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t35) + t49 * (in7[2] -
    in9->data[30] * t49 * t35)) - t44 * (in7[0] + in9->data[30] * t44 * t35);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t20) + t52 * (in7[2] -
    in9->data[32] * t52 * t20)) - t38 * (in7[0] + in9->data[32] * t38 * t20);
  biq[119] = t23;
  biq[120] = t23;
  biq[121] = t23;
  biq[122] = t26;
  biq[123] = t26;
  biq[124] = t26;
  biq[125] = t29;
  biq[126] = t29;
  biq[127] = t29;
  biq[128] = t32;
  biq[129] = t32;
  biq[130] = t32;
  biq[131] = (t53 * (in15[0] - in9->data[1] * t53 * t17) + t54 * (in15[1] -
    in9->data[1] * t54 * t17)) + t55 * (in15[2] - in9->data[1] * t55 * t17);
  biq[132] = (t56 * (in15[3] - in9->data[1] * t56 * t14) + t57 * (in15[4] -
    in9->data[1] * t57 * t14)) + t58 * (in15[5] - in9->data[1] * t58 * t14);
  biq[133] = (t59 * (in15[6] - in9->data[1] * t59 * t11) + t60 * (in15[7] -
    in9->data[1] * t60 * t11)) + t61 * (in15[8] - in9->data[1] * t61 * t11);
  biq[134] = (t53 * (in15[0] - in8->data[1] * t53 * t17) + t54 * (in15[1] -
    in8->data[1] * t54 * t17)) + t55 * (in15[2] - in8->data[1] * t55 * t17);
  biq[135] = (t56 * (in15[3] - in8->data[1] * t56 * t14) + t57 * (in15[4] -
    in8->data[1] * t57 * t14)) + t58 * (in15[5] - in8->data[1] * t58 * t14);
  biq[136] = (t59 * (in15[6] - in8->data[1] * t59 * t11) + t60 * (in15[7] -
    in8->data[1] * t60 * t11)) + t61 * (in15[8] - in8->data[1] * t61 * t11);
  biq[137] = t62 * (in18[2] - in19[1] * t62 * t8) + t63 * (in18[3] - in19[1] *
    t63 * t8);
  biq[138] = t62 * (in18[2] - in19[5] * t62 * t8) + t63 * (in18[3] - in19[5] *
    t63 * t8);
  biq[139] = t64 * (in18[4] - in19[2] * t64 * t5) + t65 * (in18[5] - in19[2] *
    t65 * t5);
  biq[140] = t64 * (in18[4] - in19[6] * t64 * t5) + t65 * (in18[5] - in19[6] *
    t65 * t5);
  biq[141] = t66 * (in18[6] - in19[3] * t66 * t2) + t67 * (in18[7] - in19[3] *
    t67 * t2);
  biq[142] = t66 * (in18[6] - in19[7] * t66 * t2) + t67 * (in18[7] - in19[7] *
    t67 * t2);
}

/* End of code generation (Iq_LeftStart13DFootV99.cpp) */
