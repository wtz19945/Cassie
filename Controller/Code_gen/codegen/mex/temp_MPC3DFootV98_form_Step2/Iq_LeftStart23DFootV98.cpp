/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart23DFootV98.cpp
 *
 * Code generation for function 'Iq_LeftStart23DFootV98'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step2.h"
#include "Iq_LeftStart23DFootV98.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart23DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart23DFootV98.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart23DFootV98(c_temp_MPC3DFootV98_form_Step2S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[4], real_T Aiq[31892],
  real_T biq[134])
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
  real_T a;
  real_T t61;
  real_T t62;
  real_T t67;
  real_T t68;
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
  real_T t193;
  real_T t194;
  real_T t202;
  real_T t203;
  real_T t211;
  real_T t212;
  real_T t213;
  real_T t214;
  real_T t215;
  real_T t223;
  real_T t231;
  real_T t232;
  real_T t234;
  real_T t239;
  real_T t240;
  real_T t242;
  real_T t248;
  real_T t250;

  /* IQ_LEFTSTART23DFOOTV98 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART23DFOOTV98(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Jul-2023 15:49:57 */
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
  t59 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t59);
  t61 = muDoubleScalarAbs(t3);
  t62 = muDoubleScalarAbs(t4);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t67 = 1.0 / t61;
  t68 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t68);
  t61 = muDoubleScalarAbs(t6);
  t62 = muDoubleScalarAbs(t7);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t76 = 1.0 / t61;
  t77 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t77);
  t61 = muDoubleScalarAbs(t9);
  t62 = muDoubleScalarAbs(t10);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t85 = 1.0 / t61;
  t86 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t86);
  t61 = muDoubleScalarAbs(t12);
  t62 = muDoubleScalarAbs(t13);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t94 = 1.0 / t61;
  t95 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t95);
  t61 = muDoubleScalarAbs(t15);
  t62 = muDoubleScalarAbs(t16);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t103 = 1.0 / t61;
  t104 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t104);
  t61 = muDoubleScalarAbs(t18);
  t62 = muDoubleScalarAbs(t19);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t112 = 1.0 / t61;
  t113 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t113);
  t61 = muDoubleScalarAbs(t21);
  t62 = muDoubleScalarAbs(t22);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t121 = 1.0 / t61;
  t122 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t122);
  t61 = muDoubleScalarAbs(t24);
  t62 = muDoubleScalarAbs(t25);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t130 = 1.0 / t61;
  t131 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t131);
  t61 = muDoubleScalarAbs(t27);
  t62 = muDoubleScalarAbs(t28);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t139 = 1.0 / t61;
  t140 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t140);
  t61 = muDoubleScalarAbs(t30);
  t62 = muDoubleScalarAbs(t31);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t148 = 1.0 / t61;
  t149 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t149);
  t61 = muDoubleScalarAbs(t33);
  t62 = muDoubleScalarAbs(t34);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t157 = 1.0 / t61;
  t158 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t158);
  t61 = muDoubleScalarAbs(t36);
  t62 = muDoubleScalarAbs(t37);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t166 = 1.0 / t61;
  t167 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t167);
  t61 = muDoubleScalarAbs(t39);
  t62 = muDoubleScalarAbs(t40);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t175 = 1.0 / t61;
  t176 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t176);
  t61 = muDoubleScalarAbs(t42);
  t62 = muDoubleScalarAbs(t43);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t184 = 1.0 / t61;
  t185 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t185);
  t61 = muDoubleScalarAbs(t45);
  t62 = muDoubleScalarAbs(t46);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t193 = 1.0 / t61;
  t194 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t194);
  t61 = muDoubleScalarAbs(t48);
  t62 = muDoubleScalarAbs(t49);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t202 = 1.0 / t61;
  t203 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t203);
  t61 = muDoubleScalarAbs(t51);
  t62 = muDoubleScalarAbs(t52);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t211 = 1.0 / t61;
  t212 = Cpx1 + in12[0];
  t213 = -Cpx1 + in12[0];
  t214 = Cpy1 + in13[0];
  t215 = -Cpy1 + in13[0];
  a = muDoubleScalarAbs(t53);
  t61 = muDoubleScalarAbs(t54);
  t62 = muDoubleScalarAbs(t55);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t223 = 1.0 / t61;
  a = muDoubleScalarAbs(t56);
  t61 = muDoubleScalarAbs(t57);
  t62 = muDoubleScalarAbs(t58);
  t61 = (a * a + t61 * t61) + t62 * t62;
  b_sqrt(&t61);
  t231 = 1.0 / t61;
  t232 = in18[2] - in16[1];
  a = muDoubleScalarAbs(t232);
  t234 = in18[3] - in17[1];
  t61 = muDoubleScalarAbs(t234);
  t61 = a * a + t61 * t61;
  b_sqrt(&t61);
  t239 = 1.0 / t61;
  t240 = in18[4] - in16[2];
  a = muDoubleScalarAbs(t240);
  t242 = in18[5] - in17[2];
  t61 = muDoubleScalarAbs(t242);
  t61 = a * a + t61 * t61;
  b_sqrt(&t61);
  t62 = 1.0 / t61;
  t248 = in18[6] - in16[3];
  a = muDoubleScalarAbs(t248);
  t250 = in18[7] - in17[3];
  SD->u1.f1.dv3[0] = -1.0;
  memset(&SD->u1.f1.dv3[1], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[34] = 1.0;
  memset(&SD->u1.f1.dv3[35], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[68] = t2;
  memset(&SD->u1.f1.dv3[69], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[102] = t2;
  memset(&SD->u1.f1.dv3[103], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[269] = -1.0;
  memset(&SD->u1.f1.dv3[270], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[303] = 1.0;
  memset(&SD->u1.f1.dv3[304], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[337] = t5;
  memset(&SD->u1.f1.dv3[338], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[371] = t5;
  memset(&SD->u1.f1.dv3[372], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[538] = -1.0;
  memset(&SD->u1.f1.dv3[539], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[572] = 1.0;
  memset(&SD->u1.f1.dv3[573], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[606] = t8;
  memset(&SD->u1.f1.dv3[607], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[640] = t8;
  memset(&SD->u1.f1.dv3[641], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[807] = -1.0;
  memset(&SD->u1.f1.dv3[808], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[841] = 1.0;
  memset(&SD->u1.f1.dv3[842], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[875] = t11;
  memset(&SD->u1.f1.dv3[876], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[909] = t11;
  memset(&SD->u1.f1.dv3[910], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[1076] = -1.0;
  memset(&SD->u1.f1.dv3[1077], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1110] = 1.0;
  memset(&SD->u1.f1.dv3[1111], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1144] = t14;
  memset(&SD->u1.f1.dv3[1145], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1178] = t14;
  memset(&SD->u1.f1.dv3[1179], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[1345] = -1.0;
  memset(&SD->u1.f1.dv3[1346], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1379] = 1.0;
  memset(&SD->u1.f1.dv3[1380], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1413] = t17;
  memset(&SD->u1.f1.dv3[1414], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1447] = t17;
  memset(&SD->u1.f1.dv3[1448], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[1614] = -1.0;
  memset(&SD->u1.f1.dv3[1615], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1648] = 1.0;
  memset(&SD->u1.f1.dv3[1649], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1682] = t20;
  memset(&SD->u1.f1.dv3[1683], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1716] = t20;
  memset(&SD->u1.f1.dv3[1717], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[1883] = -1.0;
  memset(&SD->u1.f1.dv3[1884], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1917] = 1.0;
  memset(&SD->u1.f1.dv3[1918], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1951] = t23;
  memset(&SD->u1.f1.dv3[1952], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[1985] = t23;
  memset(&SD->u1.f1.dv3[1986], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[2152] = -1.0;
  memset(&SD->u1.f1.dv3[2153], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2186] = 1.0;
  memset(&SD->u1.f1.dv3[2187], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2220] = t26;
  memset(&SD->u1.f1.dv3[2221], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2254] = t26;
  memset(&SD->u1.f1.dv3[2255], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[2421] = -1.0;
  memset(&SD->u1.f1.dv3[2422], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2455] = 1.0;
  memset(&SD->u1.f1.dv3[2456], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2489] = t29;
  memset(&SD->u1.f1.dv3[2490], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2523] = t29;
  memset(&SD->u1.f1.dv3[2524], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[2690] = -1.0;
  memset(&SD->u1.f1.dv3[2691], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2724] = 1.0;
  memset(&SD->u1.f1.dv3[2725], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2758] = t32;
  memset(&SD->u1.f1.dv3[2759], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2792] = t32;
  memset(&SD->u1.f1.dv3[2793], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[2959] = -1.0;
  memset(&SD->u1.f1.dv3[2960], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[2993] = 1.0;
  memset(&SD->u1.f1.dv3[2994], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3027] = t35;
  memset(&SD->u1.f1.dv3[3028], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3061] = t35;
  memset(&SD->u1.f1.dv3[3062], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[3228] = -1.0;
  memset(&SD->u1.f1.dv3[3229], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3262] = 1.0;
  memset(&SD->u1.f1.dv3[3263], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3296] = t38;
  memset(&SD->u1.f1.dv3[3297], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3330] = t38;
  memset(&SD->u1.f1.dv3[3331], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[3497] = -1.0;
  memset(&SD->u1.f1.dv3[3498], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3531] = 1.0;
  memset(&SD->u1.f1.dv3[3532], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3565] = t41;
  memset(&SD->u1.f1.dv3[3566], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3599] = t41;
  memset(&SD->u1.f1.dv3[3600], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[3766] = -1.0;
  memset(&SD->u1.f1.dv3[3767], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3800] = 1.0;
  memset(&SD->u1.f1.dv3[3801], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3834] = t44;
  memset(&SD->u1.f1.dv3[3835], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[3868] = t44;
  memset(&SD->u1.f1.dv3[3869], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[4035] = -1.0;
  memset(&SD->u1.f1.dv3[4036], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4069] = 1.0;
  memset(&SD->u1.f1.dv3[4070], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4103] = t47;
  memset(&SD->u1.f1.dv3[4104], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4137] = t47;
  memset(&SD->u1.f1.dv3[4138], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[4304] = -1.0;
  memset(&SD->u1.f1.dv3[4305], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4338] = 1.0;
  memset(&SD->u1.f1.dv3[4339], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4372] = t50;
  memset(&SD->u1.f1.dv3[4373], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4406] = t50;
  memset(&SD->u1.f1.dv3[4407], 0, 166U * sizeof(real_T));
  SD->u1.f1.dv3[4573] = -1.0;
  memset(&SD->u1.f1.dv3[4574], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4607] = 1.0;
  memset(&SD->u1.f1.dv3[4608], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[4624] = t3;
  memset(&SD->u1.f1.dv3[4625], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4658] = t3;
  memset(&SD->u1.f1.dv3[4659], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[4842] = -1.0;
  memset(&SD->u1.f1.dv3[4843], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4876] = 1.0;
  memset(&SD->u1.f1.dv3[4877], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[4893] = t6;
  memset(&SD->u1.f1.dv3[4894], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[4927] = t6;
  memset(&SD->u1.f1.dv3[4928], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[5111] = -1.0;
  memset(&SD->u1.f1.dv3[5112], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5145] = 1.0;
  memset(&SD->u1.f1.dv3[5146], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5162] = t9;
  memset(&SD->u1.f1.dv3[5163], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5196] = t9;
  memset(&SD->u1.f1.dv3[5197], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[5380] = -1.0;
  memset(&SD->u1.f1.dv3[5381], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5414] = 1.0;
  memset(&SD->u1.f1.dv3[5415], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5431] = t12;
  memset(&SD->u1.f1.dv3[5432], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5465] = t12;
  memset(&SD->u1.f1.dv3[5466], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[5649] = -1.0;
  memset(&SD->u1.f1.dv3[5650], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5683] = 1.0;
  memset(&SD->u1.f1.dv3[5684], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5700] = t15;
  memset(&SD->u1.f1.dv3[5701], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5734] = t15;
  memset(&SD->u1.f1.dv3[5735], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[5918] = -1.0;
  memset(&SD->u1.f1.dv3[5919], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[5952] = 1.0;
  memset(&SD->u1.f1.dv3[5953], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[5969] = t18;
  memset(&SD->u1.f1.dv3[5970], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6003] = t18;
  memset(&SD->u1.f1.dv3[6004], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[6187] = -1.0;
  memset(&SD->u1.f1.dv3[6188], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6221] = 1.0;
  memset(&SD->u1.f1.dv3[6222], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6238] = t21;
  memset(&SD->u1.f1.dv3[6239], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6272] = t21;
  memset(&SD->u1.f1.dv3[6273], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[6456] = -1.0;
  memset(&SD->u1.f1.dv3[6457], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6490] = 1.0;
  memset(&SD->u1.f1.dv3[6491], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6507] = t24;
  memset(&SD->u1.f1.dv3[6508], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6541] = t24;
  memset(&SD->u1.f1.dv3[6542], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[6725] = -1.0;
  memset(&SD->u1.f1.dv3[6726], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6759] = 1.0;
  memset(&SD->u1.f1.dv3[6760], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[6776] = t27;
  memset(&SD->u1.f1.dv3[6777], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[6810] = t27;
  memset(&SD->u1.f1.dv3[6811], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[6994] = -1.0;
  memset(&SD->u1.f1.dv3[6995], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7028] = 1.0;
  memset(&SD->u1.f1.dv3[7029], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7045] = t30;
  memset(&SD->u1.f1.dv3[7046], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7079] = t30;
  memset(&SD->u1.f1.dv3[7080], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[7263] = -1.0;
  memset(&SD->u1.f1.dv3[7264], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7297] = 1.0;
  memset(&SD->u1.f1.dv3[7298], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7314] = t33;
  memset(&SD->u1.f1.dv3[7315], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7348] = t33;
  memset(&SD->u1.f1.dv3[7349], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[7532] = -1.0;
  memset(&SD->u1.f1.dv3[7533], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7566] = 1.0;
  memset(&SD->u1.f1.dv3[7567], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7583] = t36;
  memset(&SD->u1.f1.dv3[7584], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7617] = t36;
  memset(&SD->u1.f1.dv3[7618], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[7801] = -1.0;
  memset(&SD->u1.f1.dv3[7802], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7835] = 1.0;
  memset(&SD->u1.f1.dv3[7836], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[7852] = t39;
  memset(&SD->u1.f1.dv3[7853], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[7886] = t39;
  memset(&SD->u1.f1.dv3[7887], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[8070] = -1.0;
  memset(&SD->u1.f1.dv3[8071], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8104] = 1.0;
  memset(&SD->u1.f1.dv3[8105], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8121] = t42;
  memset(&SD->u1.f1.dv3[8122], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8155] = t42;
  memset(&SD->u1.f1.dv3[8156], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[8339] = -1.0;
  memset(&SD->u1.f1.dv3[8340], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8373] = 1.0;
  memset(&SD->u1.f1.dv3[8374], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8390] = t45;
  memset(&SD->u1.f1.dv3[8391], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8424] = t45;
  memset(&SD->u1.f1.dv3[8425], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[8608] = -1.0;
  memset(&SD->u1.f1.dv3[8609], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8642] = 1.0;
  memset(&SD->u1.f1.dv3[8643], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8659] = t48;
  memset(&SD->u1.f1.dv3[8660], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8693] = t48;
  memset(&SD->u1.f1.dv3[8694], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv3[8877] = -1.0;
  memset(&SD->u1.f1.dv3[8878], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8911] = 1.0;
  memset(&SD->u1.f1.dv3[8912], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[8928] = t51;
  memset(&SD->u1.f1.dv3[8929], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[8962] = t51;
  memset(&SD->u1.f1.dv3[8963], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv3[9180] = t4;
  memset(&SD->u1.f1.dv3[9181], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9214] = t4;
  memset(&SD->u1.f1.dv3[9215], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[9449] = t7;
  memset(&SD->u1.f1.dv3[9450], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9483] = t7;
  memset(&SD->u1.f1.dv3[9484], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[9718] = t10;
  memset(&SD->u1.f1.dv3[9719], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[9752] = t10;
  memset(&SD->u1.f1.dv3[9753], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[9987] = t13;
  memset(&SD->u1.f1.dv3[9988], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10021] = t13;
  memset(&SD->u1.f1.dv3[10022], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[10256] = t16;
  memset(&SD->u1.f1.dv3[10257], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10290] = t16;
  memset(&SD->u1.f1.dv3[10291], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[10525] = t19;
  memset(&SD->u1.f1.dv3[10526], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10559] = t19;
  memset(&SD->u1.f1.dv3[10560], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[10794] = t22;
  memset(&SD->u1.f1.dv3[10795], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[10828] = t22;
  memset(&SD->u1.f1.dv3[10829], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[11063] = t25;
  memset(&SD->u1.f1.dv3[11064], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11097] = t25;
  memset(&SD->u1.f1.dv3[11098], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[11332] = t28;
  memset(&SD->u1.f1.dv3[11333], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11366] = t28;
  memset(&SD->u1.f1.dv3[11367], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[11601] = t31;
  memset(&SD->u1.f1.dv3[11602], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11635] = t31;
  memset(&SD->u1.f1.dv3[11636], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[11870] = t34;
  memset(&SD->u1.f1.dv3[11871], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[11904] = t34;
  memset(&SD->u1.f1.dv3[11905], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[12139] = t37;
  memset(&SD->u1.f1.dv3[12140], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12173] = t37;
  memset(&SD->u1.f1.dv3[12174], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[12408] = t40;
  memset(&SD->u1.f1.dv3[12409], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12442] = t40;
  memset(&SD->u1.f1.dv3[12443], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[12677] = t43;
  memset(&SD->u1.f1.dv3[12678], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12711] = t43;
  memset(&SD->u1.f1.dv3[12712], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[12946] = t46;
  memset(&SD->u1.f1.dv3[12947], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[12980] = t46;
  memset(&SD->u1.f1.dv3[12981], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[13215] = t49;
  memset(&SD->u1.f1.dv3[13216], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13249] = t49;
  memset(&SD->u1.f1.dv3[13250], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv3[13484] = t52;
  memset(&SD->u1.f1.dv3[13485], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13518] = t52;
  memset(&SD->u1.f1.dv3[13519], 0, 149U * sizeof(real_T));
  SD->u1.f1.dv3[13668] = 1.0;
  memset(&SD->u1.f1.dv3[13669], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13702] = -1.0;
  memset(&SD->u1.f1.dv3[13703], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[13787] = 1.0;
  SD->u1.f1.dv3[13788] = 0.0;
  SD->u1.f1.dv3[13789] = -1.0;
  memset(&SD->u1.f1.dv3[13790], 0, 13U * sizeof(real_T));
  SD->u1.f1.dv3[13803] = 1.0;
  memset(&SD->u1.f1.dv3[13804], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13837] = -1.0;
  memset(&SD->u1.f1.dv3[13838], 0, 84U * sizeof(real_T));
  SD->u1.f1.dv3[13922] = 1.0;
  SD->u1.f1.dv3[13923] = 0.0;
  SD->u1.f1.dv3[13924] = -1.0;
  memset(&SD->u1.f1.dv3[13925], 0, 13U * sizeof(real_T));
  SD->u1.f1.dv3[13938] = 1.0;
  memset(&SD->u1.f1.dv3[13939], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[13972] = -1.0;
  memset(&SD->u1.f1.dv3[13973], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[14073] = 1.0;
  memset(&SD->u1.f1.dv3[14074], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14107] = -1.0;
  memset(&SD->u1.f1.dv3[14108], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[14208] = 1.0;
  memset(&SD->u1.f1.dv3[14209], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14242] = -1.0;
  memset(&SD->u1.f1.dv3[14243], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[14343] = 1.0;
  memset(&SD->u1.f1.dv3[14344], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14377] = -1.0;
  memset(&SD->u1.f1.dv3[14378], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[14478] = 1.0;
  memset(&SD->u1.f1.dv3[14479], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14512] = -1.0;
  memset(&SD->u1.f1.dv3[14513], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[14613] = 1.0;
  memset(&SD->u1.f1.dv3[14614], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14647] = -1.0;
  memset(&SD->u1.f1.dv3[14648], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[14748] = 1.0;
  memset(&SD->u1.f1.dv3[14749], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14782] = -1.0;
  memset(&SD->u1.f1.dv3[14783], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[14883] = 1.0;
  memset(&SD->u1.f1.dv3[14884], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[14917] = -1.0;
  memset(&SD->u1.f1.dv3[14918], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15018] = 1.0;
  memset(&SD->u1.f1.dv3[15019], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15052] = -1.0;
  memset(&SD->u1.f1.dv3[15053], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15153] = 1.0;
  memset(&SD->u1.f1.dv3[15154], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15187] = -1.0;
  memset(&SD->u1.f1.dv3[15188], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15288] = 1.0;
  memset(&SD->u1.f1.dv3[15289], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15322] = -1.0;
  memset(&SD->u1.f1.dv3[15323], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15423] = 1.0;
  memset(&SD->u1.f1.dv3[15424], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15457] = -1.0;
  memset(&SD->u1.f1.dv3[15458], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15558] = 1.0;
  memset(&SD->u1.f1.dv3[15559], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15592] = -1.0;
  memset(&SD->u1.f1.dv3[15593], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15693] = 1.0;
  memset(&SD->u1.f1.dv3[15694], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15727] = -1.0;
  memset(&SD->u1.f1.dv3[15728], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15828] = 1.0;
  memset(&SD->u1.f1.dv3[15829], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15862] = -1.0;
  memset(&SD->u1.f1.dv3[15863], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[15963] = 1.0;
  memset(&SD->u1.f1.dv3[15964], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[15997] = -1.0;
  memset(&SD->u1.f1.dv3[15998], 0, 71U * sizeof(real_T));
  SD->u1.f1.dv3[16069] = 1.0;
  SD->u1.f1.dv3[16070] = 0.0;
  SD->u1.f1.dv3[16071] = -1.0;
  memset(&SD->u1.f1.dv3[16072], 0, 26U * sizeof(real_T));
  SD->u1.f1.dv3[16098] = 1.0;
  memset(&SD->u1.f1.dv3[16099], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16132] = -1.0;
  memset(&SD->u1.f1.dv3[16133], 0, 71U * sizeof(real_T));
  SD->u1.f1.dv3[16204] = 1.0;
  SD->u1.f1.dv3[16205] = 0.0;
  SD->u1.f1.dv3[16206] = -1.0;
  memset(&SD->u1.f1.dv3[16207], 0, 26U * sizeof(real_T));
  SD->u1.f1.dv3[16233] = 1.0;
  memset(&SD->u1.f1.dv3[16234], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16267] = -1.0;
  memset(&SD->u1.f1.dv3[16268], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[16368] = 1.0;
  memset(&SD->u1.f1.dv3[16369], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16402] = -1.0;
  memset(&SD->u1.f1.dv3[16403], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[16503] = 1.0;
  memset(&SD->u1.f1.dv3[16504], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16537] = -1.0;
  memset(&SD->u1.f1.dv3[16538], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[16638] = 1.0;
  memset(&SD->u1.f1.dv3[16639], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16672] = -1.0;
  memset(&SD->u1.f1.dv3[16673], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[16773] = 1.0;
  memset(&SD->u1.f1.dv3[16774], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16807] = -1.0;
  memset(&SD->u1.f1.dv3[16808], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[16908] = 1.0;
  memset(&SD->u1.f1.dv3[16909], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[16942] = -1.0;
  memset(&SD->u1.f1.dv3[16943], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17043] = 1.0;
  memset(&SD->u1.f1.dv3[17044], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17077] = -1.0;
  memset(&SD->u1.f1.dv3[17078], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17178] = 1.0;
  memset(&SD->u1.f1.dv3[17179], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17212] = -1.0;
  memset(&SD->u1.f1.dv3[17213], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17313] = 1.0;
  memset(&SD->u1.f1.dv3[17314], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17347] = -1.0;
  memset(&SD->u1.f1.dv3[17348], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17448] = 1.0;
  memset(&SD->u1.f1.dv3[17449], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17482] = -1.0;
  memset(&SD->u1.f1.dv3[17483], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17583] = 1.0;
  memset(&SD->u1.f1.dv3[17584], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17617] = -1.0;
  memset(&SD->u1.f1.dv3[17618], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17718] = 1.0;
  memset(&SD->u1.f1.dv3[17719], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17752] = -1.0;
  memset(&SD->u1.f1.dv3[17753], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17853] = 1.0;
  memset(&SD->u1.f1.dv3[17854], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[17887] = -1.0;
  memset(&SD->u1.f1.dv3[17888], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[17988] = 1.0;
  memset(&SD->u1.f1.dv3[17989], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18022] = -1.0;
  memset(&SD->u1.f1.dv3[18023], 0, 100U * sizeof(real_T));
  SD->u1.f1.dv3[18123] = 1.0;
  memset(&SD->u1.f1.dv3[18124], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv3[18157] = -1.0;
  memset(&SD->u1.f1.dv3[18158], 0, 3501U * sizeof(real_T));
  SD->u1.f1.dv3[21659] = -1.0;
  memset(&SD->u1.f1.dv3[21660], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[21676] = -1.0;
  memset(&SD->u1.f1.dv3[21677], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[21794] = -1.0;
  memset(&SD->u1.f1.dv3[21795], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[21811] = -1.0;
  memset(&SD->u1.f1.dv3[21812], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[21929] = -1.0;
  memset(&SD->u1.f1.dv3[21930], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[21946] = -1.0;
  memset(&SD->u1.f1.dv3[21947], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[22064] = -1.0;
  memset(&SD->u1.f1.dv3[22065], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22081] = -1.0;
  memset(&SD->u1.f1.dv3[22082], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[22199] = -1.0;
  memset(&SD->u1.f1.dv3[22200], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22216] = -1.0;
  memset(&SD->u1.f1.dv3[22217], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[22334] = -1.0;
  memset(&SD->u1.f1.dv3[22335], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22351] = -1.0;
  memset(&SD->u1.f1.dv3[22352], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[22469] = -1.0;
  memset(&SD->u1.f1.dv3[22470], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22486] = -1.0;
  memset(&SD->u1.f1.dv3[22487], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[22604] = -1.0;
  memset(&SD->u1.f1.dv3[22605], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22621] = -1.0;
  memset(&SD->u1.f1.dv3[22622], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[22739] = -1.0;
  memset(&SD->u1.f1.dv3[22740], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22756] = -1.0;
  memset(&SD->u1.f1.dv3[22757], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[22874] = -1.0;
  memset(&SD->u1.f1.dv3[22875], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[22891] = -1.0;
  memset(&SD->u1.f1.dv3[22892], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[23009] = -1.0;
  memset(&SD->u1.f1.dv3[23010], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23026] = -1.0;
  memset(&SD->u1.f1.dv3[23027], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[23144] = -1.0;
  memset(&SD->u1.f1.dv3[23145], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23161] = -1.0;
  memset(&SD->u1.f1.dv3[23162], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[23279] = -1.0;
  memset(&SD->u1.f1.dv3[23280], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23296] = -1.0;
  memset(&SD->u1.f1.dv3[23297], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[23414] = -1.0;
  memset(&SD->u1.f1.dv3[23415], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23431] = -1.0;
  memset(&SD->u1.f1.dv3[23432], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[23549] = -1.0;
  memset(&SD->u1.f1.dv3[23550], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23566] = -1.0;
  memset(&SD->u1.f1.dv3[23567], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[23684] = -1.0;
  memset(&SD->u1.f1.dv3[23685], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23701] = -1.0;
  memset(&SD->u1.f1.dv3[23702], 0, 117U * sizeof(real_T));
  SD->u1.f1.dv3[23819] = -1.0;
  memset(&SD->u1.f1.dv3[23820], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv3[23836] = -1.0;
  memset(&SD->u1.f1.dv3[23837], 0, 2412U * sizeof(real_T));
  SD->u1.f1.dv3[26249] = -1.0;
  SD->u1.f1.dv3[26250] = 0.0;
  SD->u1.f1.dv3[26251] = -1.0;
  memset(&SD->u1.f1.dv3[26252], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv3[26384] = -1.0;
  SD->u1.f1.dv3[26385] = 0.0;
  SD->u1.f1.dv3[26386] = -1.0;
  memset(&SD->u1.f1.dv3[26387], 0, 402U * sizeof(real_T));
  SD->u1.f1.dv3[26789] = -1.0;
  SD->u1.f1.dv3[26790] = 0.0;
  SD->u1.f1.dv3[26791] = -1.0;
  memset(&SD->u1.f1.dv3[26792], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv3[26924] = -1.0;
  SD->u1.f1.dv3[26925] = 0.0;
  SD->u1.f1.dv3[26926] = -1.0;
  memset(&SD->u1.f1.dv3[26927], 0, 804U * sizeof(real_T));
  SD->u1.f1.dv3[27731] = t53;
  SD->u1.f1.dv3[27732] = 0.0;
  SD->u1.f1.dv3[27733] = t53;
  memset(&SD->u1.f1.dv3[27734], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv3[27866] = t56;
  SD->u1.f1.dv3[27867] = 0.0;
  SD->u1.f1.dv3[27868] = t56;
  memset(&SD->u1.f1.dv3[27869], 0, 532U * sizeof(real_T));
  SD->u1.f1.dv3[28401] = t54;
  SD->u1.f1.dv3[28402] = 0.0;
  SD->u1.f1.dv3[28403] = t54;
  memset(&SD->u1.f1.dv3[28404], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv3[28536] = t57;
  SD->u1.f1.dv3[28537] = 0.0;
  SD->u1.f1.dv3[28538] = t57;
  memset(&SD->u1.f1.dv3[28539], 0, 532U * sizeof(real_T));
  SD->u1.f1.dv3[29071] = t55;
  SD->u1.f1.dv3[29072] = 0.0;
  SD->u1.f1.dv3[29073] = t55;
  memset(&SD->u1.f1.dv3[29074], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv3[29206] = t58;
  SD->u1.f1.dv3[29207] = 0.0;
  SD->u1.f1.dv3[29208] = t58;
  memset(&SD->u1.f1.dv3[29209], 0, 398U * sizeof(real_T));
  SD->u1.f1.dv3[29607] = -1.0;
  memset(&SD->u1.f1.dv3[29608], 0, 134U * sizeof(real_T));
  SD->u1.f1.dv3[29742] = -1.0;
  memset(&SD->u1.f1.dv3[29743], 0, 1342U * sizeof(real_T));
  SD->u1.f1.dv3[31085] = t232;
  memset(&SD->u1.f1.dv3[31086], 0, 134U * sizeof(real_T));
  SD->u1.f1.dv3[31220] = t240;
  memset(&SD->u1.f1.dv3[31221], 0, 134U * sizeof(real_T));
  SD->u1.f1.dv3[31355] = t248;
  memset(&SD->u1.f1.dv3[31356], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv3[31621] = t234;
  memset(&SD->u1.f1.dv3[31622], 0, 134U * sizeof(real_T));
  SD->u1.f1.dv3[31756] = t242;
  memset(&SD->u1.f1.dv3[31757], 0, 134U * sizeof(real_T));
  SD->u1.f1.dv3[31891] = t250;
  for (i0 = 0; i0 < 238; i0++) {
    memcpy(&Aiq[i0 * 134], &SD->u1.f1.dv3[i0 * 134], 134U * sizeof(real_T));
  }

  t61 = muDoubleScalarAbs(t250);
  t61 = a * a + t61 * t61;
  b_sqrt(&t61);
  t61 = 1.0 / t61;
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
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t67) + t4 * (in7[2] - in8->data
              [0] * t4 * t67)) - t59 * (in7[0] + in8->data[0] * t59 * t67);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t76) + t7 * (in7[2] - in8->data
              [2] * t7 * t76)) - t68 * (in7[0] + in8->data[2] * t68 * t76);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t85) + t10 * (in7[2] - in8->
              data[4] * t10 * t85)) - t77 * (in7[0] + in8->data[4] * t77 * t85);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t94) + t13 * (in7[2] -
              in8->data[6] * t13 * t94)) - t86 * (in7[0] + in8->data[6] * t86 *
    t94);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t103) + t16 * (in7[2] -
              in8->data[8] * t16 * t103)) - t95 * (in7[0] + in8->data[8] * t95 *
    t103);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t112) + t19 * (in7[2] -
              in8->data[10] * t19 * t112)) - t104 * (in7[0] + in8->data[10] *
    t104 * t112);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t121) + t22 * (in7[2] -
              in8->data[12] * t22 * t121)) - t113 * (in7[0] + in8->data[12] *
    t113 * t121);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t130) + t25 * (in7[2] -
              in8->data[14] * t25 * t130)) - t122 * (in7[0] + in8->data[14] *
    t122 * t130);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t139) + t28 * (in7[2] -
              in8->data[16] * t28 * t139)) - t131 * (in7[0] + in8->data[16] *
    t131 * t139);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t148) + t31 * (in7[2] -
              in8->data[18] * t31 * t148)) - t140 * (in7[0] + in8->data[18] *
    t140 * t148);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t157) + t34 * (in7[2] -
              in8->data[20] * t34 * t157)) - t149 * (in7[0] + in8->data[20] *
    t149 * t157);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t166) + t37 * (in7[2] -
              in8->data[22] * t37 * t166)) - t158 * (in7[0] + in8->data[22] *
    t158 * t166);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t175) + t40 * (in7[2] -
              in8->data[24] * t40 * t175)) - t167 * (in7[0] + in8->data[24] *
    t167 * t175);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t184) + t43 * (in7[2] -
              in8->data[26] * t43 * t184)) - t176 * (in7[0] + in8->data[26] *
    t176 * t184);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t193) + t46 * (in7[2] -
              in8->data[28] * t46 * t193)) - t185 * (in7[0] + in8->data[28] *
    t185 * t193);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t202) + t49 * (in7[2] -
              in8->data[30] * t49 * t202)) - t194 * (in7[0] + in8->data[30] *
    t194 * t202);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t211) + t52 * (in7[2] -
              in8->data[32] * t52 * t211)) - t203 * (in7[0] + in8->data[32] *
    t203 * t211);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t67) + t4 * (in7[2] - in9->
    data[0] * t4 * t67)) - t59 * (in7[0] + in9->data[0] * t59 * t67);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t76) + t7 * (in7[2] - in9->
    data[2] * t7 * t76)) - t68 * (in7[0] + in9->data[2] * t68 * t76);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t85) + t10 * (in7[2] -
    in9->data[4] * t10 * t85)) - t77 * (in7[0] + in9->data[4] * t77 * t85);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t94) + t13 * (in7[2] -
    in9->data[6] * t13 * t94)) - t86 * (in7[0] + in9->data[6] * t86 * t94);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t103) + t16 * (in7[2] -
    in9->data[8] * t16 * t103)) - t95 * (in7[0] + in9->data[8] * t95 * t103);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t112) + t19 * (in7[2] -
    in9->data[10] * t19 * t112)) - t104 * (in7[0] + in9->data[10] * t104 * t112);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t121) + t22 * (in7[2] -
    in9->data[12] * t22 * t121)) - t113 * (in7[0] + in9->data[12] * t113 * t121);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t130) + t25 * (in7[2] -
    in9->data[14] * t25 * t130)) - t122 * (in7[0] + in9->data[14] * t122 * t130);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t139) + t28 * (in7[2] -
    in9->data[16] * t28 * t139)) - t131 * (in7[0] + in9->data[16] * t131 * t139);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t148) + t31 * (in7[2] -
    in9->data[18] * t31 * t148)) - t140 * (in7[0] + in9->data[18] * t140 * t148);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t157) + t34 * (in7[2] -
    in9->data[20] * t34 * t157)) - t149 * (in7[0] + in9->data[20] * t149 * t157);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t166) + t37 * (in7[2] -
    in9->data[22] * t37 * t166)) - t158 * (in7[0] + in9->data[22] * t158 * t166);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t175) + t40 * (in7[2] -
    in9->data[24] * t40 * t175)) - t167 * (in7[0] + in9->data[24] * t167 * t175);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t184) + t43 * (in7[2] -
    in9->data[26] * t43 * t184)) - t176 * (in7[0] + in9->data[26] * t176 * t184);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t193) + t46 * (in7[2] -
    in9->data[28] * t46 * t193)) - t185 * (in7[0] + in9->data[28] * t185 * t193);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t202) + t49 * (in7[2] -
    in9->data[30] * t49 * t202)) - t194 * (in7[0] + in9->data[30] * t194 * t202);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t211) + t52 * (in7[2] -
    in9->data[32] * t52 * t211)) - t203 * (in7[0] + in9->data[32] * t203 * t211);
  biq[119] = t212;
  biq[120] = t212;
  biq[121] = t213;
  biq[122] = t213;
  biq[123] = t214;
  biq[124] = t214;
  biq[125] = t215;
  biq[126] = t215;
  biq[127] = (t53 * (in15[0] - in9->data[1] * t53 * t223) + t54 * (in15[1] -
    in9->data[1] * t54 * t223)) + t55 * (in15[2] - in9->data[1] * t55 * t223);
  biq[128] = (t56 * (in15[3] - in9->data[1] * t56 * t231) + t57 * (in15[4] -
    in9->data[1] * t57 * t231)) + t58 * (in15[5] - in9->data[1] * t58 * t231);
  biq[129] = (t53 * (in15[0] - in8->data[1] * t53 * t223) + t54 * (in15[1] -
    in8->data[1] * t54 * t223)) + t55 * (in15[2] - in8->data[1] * t55 * t223);
  biq[130] = (t56 * (in15[3] - in8->data[1] * t56 * t231) + t57 * (in15[4] -
    in8->data[1] * t57 * t231)) + t58 * (in15[5] - in8->data[1] * t58 * t231);
  biq[131] = t232 * (in18[2] - in19[1] * t232 * t239) + t234 * (in18[3] - in19[1]
    * t234 * t239);
  biq[132] = t240 * (in18[4] - in19[2] * t240 * t62) + t242 * (in18[5] - in19[2]
    * t242 * t62);
  biq[133] = t248 * (in18[6] - in19[3] * t248 * t61) + t250 * (in18[7] - in19[3]
    * t250 * t61);
}

/* End of code generation (Iq_LeftStart23DFootV98.cpp) */
