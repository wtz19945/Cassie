/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Iq_LeftStart33DFootV98.cpp
 *
 * Code generation for function 'Iq_LeftStart33DFootV98'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step3.h"
#include "Iq_LeftStart33DFootV98.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in9",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in8",                               /* aName */
  "Iq_LeftStart33DFootV98",            /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\V1_LIPM_MPC_OA_3D\\Functions\\MatlabFunc\\Iq_LeftStart33DFootV98.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Iq_LeftStart33DFootV98(c_temp_MPC3DFootV98_form_Step3S *SD, const
  emlrtStack *sp, const real_T in4[17], const real_T in5[17], const real_T in6
  [17], const real_T in7[3], const emxArray_real_T *in8, const emxArray_real_T
  *in9, real_T Cpx1, real_T Cpy1, const real_T in12[3], const real_T in13[3],
  const real_T in14[2], const real_T in15[30], const real_T in16[4], const
  real_T in17[4], const real_T in18[8], const real_T in19[4], real_T Aiq[30464],
  real_T biq[128])
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
  real_T a;
  real_T t58;
  real_T t59;
  real_T t64;
  real_T t65;
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
  real_T t216;
  real_T t217;
  real_T t219;
  real_T t224;
  real_T t225;
  real_T t227;
  real_T t233;
  real_T t235;

  /* IQ_LEFTSTART33DFOOTV98 */
  /*     [AIQ,BIQ] = IQ_LEFTSTART33DFOOTV98(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,CPX1,CPY1,IN12,IN13,IN14,IN15,IN16,IN17,IN18,IN19) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Jul-2023 16:02:44 */
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
  t56 = in4[0] - in7[0];
  a = muDoubleScalarAbs(t56);
  t58 = muDoubleScalarAbs(t3);
  t59 = muDoubleScalarAbs(t4);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t64 = 1.0 / t58;
  t65 = in4[1] - in7[0];
  a = muDoubleScalarAbs(t65);
  t58 = muDoubleScalarAbs(t6);
  t59 = muDoubleScalarAbs(t7);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t73 = 1.0 / t58;
  t74 = in4[2] - in7[0];
  a = muDoubleScalarAbs(t74);
  t58 = muDoubleScalarAbs(t9);
  t59 = muDoubleScalarAbs(t10);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t82 = 1.0 / t58;
  t83 = in4[3] - in7[0];
  a = muDoubleScalarAbs(t83);
  t58 = muDoubleScalarAbs(t12);
  t59 = muDoubleScalarAbs(t13);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t91 = 1.0 / t58;
  t92 = in4[4] - in7[0];
  a = muDoubleScalarAbs(t92);
  t58 = muDoubleScalarAbs(t15);
  t59 = muDoubleScalarAbs(t16);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t100 = 1.0 / t58;
  t101 = in4[5] - in7[0];
  a = muDoubleScalarAbs(t101);
  t58 = muDoubleScalarAbs(t18);
  t59 = muDoubleScalarAbs(t19);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t109 = 1.0 / t58;
  t110 = in4[6] - in7[0];
  a = muDoubleScalarAbs(t110);
  t58 = muDoubleScalarAbs(t21);
  t59 = muDoubleScalarAbs(t22);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t118 = 1.0 / t58;
  t119 = in4[7] - in7[0];
  a = muDoubleScalarAbs(t119);
  t58 = muDoubleScalarAbs(t24);
  t59 = muDoubleScalarAbs(t25);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t127 = 1.0 / t58;
  t128 = in4[8] - in7[0];
  a = muDoubleScalarAbs(t128);
  t58 = muDoubleScalarAbs(t27);
  t59 = muDoubleScalarAbs(t28);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t136 = 1.0 / t58;
  t137 = in4[9] - in7[0];
  a = muDoubleScalarAbs(t137);
  t58 = muDoubleScalarAbs(t30);
  t59 = muDoubleScalarAbs(t31);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t145 = 1.0 / t58;
  t146 = in4[10] - in7[0];
  a = muDoubleScalarAbs(t146);
  t58 = muDoubleScalarAbs(t33);
  t59 = muDoubleScalarAbs(t34);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t154 = 1.0 / t58;
  t155 = in4[11] - in7[0];
  a = muDoubleScalarAbs(t155);
  t58 = muDoubleScalarAbs(t36);
  t59 = muDoubleScalarAbs(t37);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t163 = 1.0 / t58;
  t164 = in4[12] - in7[0];
  a = muDoubleScalarAbs(t164);
  t58 = muDoubleScalarAbs(t39);
  t59 = muDoubleScalarAbs(t40);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t172 = 1.0 / t58;
  t173 = in4[13] - in7[0];
  a = muDoubleScalarAbs(t173);
  t58 = muDoubleScalarAbs(t42);
  t59 = muDoubleScalarAbs(t43);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t181 = 1.0 / t58;
  t182 = in4[14] - in7[0];
  a = muDoubleScalarAbs(t182);
  t58 = muDoubleScalarAbs(t45);
  t59 = muDoubleScalarAbs(t46);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t190 = 1.0 / t58;
  t191 = in4[15] - in7[0];
  a = muDoubleScalarAbs(t191);
  t58 = muDoubleScalarAbs(t48);
  t59 = muDoubleScalarAbs(t49);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t199 = 1.0 / t58;
  t200 = in4[16] - in7[0];
  a = muDoubleScalarAbs(t200);
  t58 = muDoubleScalarAbs(t51);
  t59 = muDoubleScalarAbs(t52);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t208 = 1.0 / t58;
  a = muDoubleScalarAbs(t53);
  t58 = muDoubleScalarAbs(t54);
  t59 = muDoubleScalarAbs(t55);
  t58 = (a * a + t58 * t58) + t59 * t59;
  b_sqrt(&t58);
  t216 = 1.0 / t58;
  t217 = in18[2] - in16[1];
  a = muDoubleScalarAbs(t217);
  t219 = in18[3] - in17[1];
  t58 = muDoubleScalarAbs(t219);
  t58 = a * a + t58 * t58;
  b_sqrt(&t58);
  t224 = 1.0 / t58;
  t225 = in18[4] - in16[2];
  a = muDoubleScalarAbs(t225);
  t227 = in18[5] - in17[2];
  t58 = muDoubleScalarAbs(t227);
  t58 = a * a + t58 * t58;
  b_sqrt(&t58);
  t59 = 1.0 / t58;
  t233 = in18[6] - in16[3];
  a = muDoubleScalarAbs(t233);
  t235 = in18[7] - in17[3];
  SD->u1.f0.dv4[0] = -1.0;
  memset(&SD->u1.f0.dv4[1], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[34] = 1.0;
  memset(&SD->u1.f0.dv4[35], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[68] = t2;
  memset(&SD->u1.f0.dv4[69], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[102] = t2;
  memset(&SD->u1.f0.dv4[103], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[257] = -1.0;
  memset(&SD->u1.f0.dv4[258], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[291] = 1.0;
  memset(&SD->u1.f0.dv4[292], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[325] = t5;
  memset(&SD->u1.f0.dv4[326], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[359] = t5;
  memset(&SD->u1.f0.dv4[360], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[514] = -1.0;
  memset(&SD->u1.f0.dv4[515], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[548] = 1.0;
  memset(&SD->u1.f0.dv4[549], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[582] = t8;
  memset(&SD->u1.f0.dv4[583], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[616] = t8;
  memset(&SD->u1.f0.dv4[617], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[771] = -1.0;
  memset(&SD->u1.f0.dv4[772], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[805] = 1.0;
  memset(&SD->u1.f0.dv4[806], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[839] = t11;
  memset(&SD->u1.f0.dv4[840], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[873] = t11;
  memset(&SD->u1.f0.dv4[874], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[1028] = -1.0;
  memset(&SD->u1.f0.dv4[1029], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1062] = 1.0;
  memset(&SD->u1.f0.dv4[1063], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1096] = t14;
  memset(&SD->u1.f0.dv4[1097], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1130] = t14;
  memset(&SD->u1.f0.dv4[1131], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[1285] = -1.0;
  memset(&SD->u1.f0.dv4[1286], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1319] = 1.0;
  memset(&SD->u1.f0.dv4[1320], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1353] = t17;
  memset(&SD->u1.f0.dv4[1354], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1387] = t17;
  memset(&SD->u1.f0.dv4[1388], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[1542] = -1.0;
  memset(&SD->u1.f0.dv4[1543], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1576] = 1.0;
  memset(&SD->u1.f0.dv4[1577], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1610] = t20;
  memset(&SD->u1.f0.dv4[1611], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1644] = t20;
  memset(&SD->u1.f0.dv4[1645], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[1799] = -1.0;
  memset(&SD->u1.f0.dv4[1800], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1833] = 1.0;
  memset(&SD->u1.f0.dv4[1834], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1867] = t23;
  memset(&SD->u1.f0.dv4[1868], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[1901] = t23;
  memset(&SD->u1.f0.dv4[1902], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[2056] = -1.0;
  memset(&SD->u1.f0.dv4[2057], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2090] = 1.0;
  memset(&SD->u1.f0.dv4[2091], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2124] = t26;
  memset(&SD->u1.f0.dv4[2125], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2158] = t26;
  memset(&SD->u1.f0.dv4[2159], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[2313] = -1.0;
  memset(&SD->u1.f0.dv4[2314], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2347] = 1.0;
  memset(&SD->u1.f0.dv4[2348], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2381] = t29;
  memset(&SD->u1.f0.dv4[2382], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2415] = t29;
  memset(&SD->u1.f0.dv4[2416], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[2570] = -1.0;
  memset(&SD->u1.f0.dv4[2571], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2604] = 1.0;
  memset(&SD->u1.f0.dv4[2605], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2638] = t32;
  memset(&SD->u1.f0.dv4[2639], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2672] = t32;
  memset(&SD->u1.f0.dv4[2673], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[2827] = -1.0;
  memset(&SD->u1.f0.dv4[2828], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2861] = 1.0;
  memset(&SD->u1.f0.dv4[2862], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2895] = t35;
  memset(&SD->u1.f0.dv4[2896], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[2929] = t35;
  memset(&SD->u1.f0.dv4[2930], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[3084] = -1.0;
  memset(&SD->u1.f0.dv4[3085], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3118] = 1.0;
  memset(&SD->u1.f0.dv4[3119], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3152] = t38;
  memset(&SD->u1.f0.dv4[3153], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3186] = t38;
  memset(&SD->u1.f0.dv4[3187], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[3341] = -1.0;
  memset(&SD->u1.f0.dv4[3342], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3375] = 1.0;
  memset(&SD->u1.f0.dv4[3376], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3409] = t41;
  memset(&SD->u1.f0.dv4[3410], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3443] = t41;
  memset(&SD->u1.f0.dv4[3444], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[3598] = -1.0;
  memset(&SD->u1.f0.dv4[3599], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3632] = 1.0;
  memset(&SD->u1.f0.dv4[3633], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3666] = t44;
  memset(&SD->u1.f0.dv4[3667], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3700] = t44;
  memset(&SD->u1.f0.dv4[3701], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[3855] = -1.0;
  memset(&SD->u1.f0.dv4[3856], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3889] = 1.0;
  memset(&SD->u1.f0.dv4[3890], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3923] = t47;
  memset(&SD->u1.f0.dv4[3924], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[3957] = t47;
  memset(&SD->u1.f0.dv4[3958], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[4112] = -1.0;
  memset(&SD->u1.f0.dv4[4113], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4146] = 1.0;
  memset(&SD->u1.f0.dv4[4147], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4180] = t50;
  memset(&SD->u1.f0.dv4[4181], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4214] = t50;
  memset(&SD->u1.f0.dv4[4215], 0, 154U * sizeof(real_T));
  SD->u1.f0.dv4[4369] = -1.0;
  memset(&SD->u1.f0.dv4[4370], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4403] = 1.0;
  memset(&SD->u1.f0.dv4[4404], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[4420] = t3;
  memset(&SD->u1.f0.dv4[4421], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4454] = t3;
  memset(&SD->u1.f0.dv4[4455], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[4626] = -1.0;
  memset(&SD->u1.f0.dv4[4627], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4660] = 1.0;
  memset(&SD->u1.f0.dv4[4661], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[4677] = t6;
  memset(&SD->u1.f0.dv4[4678], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4711] = t6;
  memset(&SD->u1.f0.dv4[4712], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[4883] = -1.0;
  memset(&SD->u1.f0.dv4[4884], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4917] = 1.0;
  memset(&SD->u1.f0.dv4[4918], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[4934] = t9;
  memset(&SD->u1.f0.dv4[4935], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[4968] = t9;
  memset(&SD->u1.f0.dv4[4969], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[5140] = -1.0;
  memset(&SD->u1.f0.dv4[5141], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5174] = 1.0;
  memset(&SD->u1.f0.dv4[5175], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5191] = t12;
  memset(&SD->u1.f0.dv4[5192], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5225] = t12;
  memset(&SD->u1.f0.dv4[5226], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[5397] = -1.0;
  memset(&SD->u1.f0.dv4[5398], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5431] = 1.0;
  memset(&SD->u1.f0.dv4[5432], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5448] = t15;
  memset(&SD->u1.f0.dv4[5449], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5482] = t15;
  memset(&SD->u1.f0.dv4[5483], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[5654] = -1.0;
  memset(&SD->u1.f0.dv4[5655], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5688] = 1.0;
  memset(&SD->u1.f0.dv4[5689], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5705] = t18;
  memset(&SD->u1.f0.dv4[5706], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5739] = t18;
  memset(&SD->u1.f0.dv4[5740], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[5911] = -1.0;
  memset(&SD->u1.f0.dv4[5912], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5945] = 1.0;
  memset(&SD->u1.f0.dv4[5946], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[5962] = t21;
  memset(&SD->u1.f0.dv4[5963], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[5996] = t21;
  memset(&SD->u1.f0.dv4[5997], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[6168] = -1.0;
  memset(&SD->u1.f0.dv4[6169], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6202] = 1.0;
  memset(&SD->u1.f0.dv4[6203], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6219] = t24;
  memset(&SD->u1.f0.dv4[6220], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6253] = t24;
  memset(&SD->u1.f0.dv4[6254], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[6425] = -1.0;
  memset(&SD->u1.f0.dv4[6426], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6459] = 1.0;
  memset(&SD->u1.f0.dv4[6460], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6476] = t27;
  memset(&SD->u1.f0.dv4[6477], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6510] = t27;
  memset(&SD->u1.f0.dv4[6511], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[6682] = -1.0;
  memset(&SD->u1.f0.dv4[6683], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6716] = 1.0;
  memset(&SD->u1.f0.dv4[6717], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6733] = t30;
  memset(&SD->u1.f0.dv4[6734], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6767] = t30;
  memset(&SD->u1.f0.dv4[6768], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[6939] = -1.0;
  memset(&SD->u1.f0.dv4[6940], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[6973] = 1.0;
  memset(&SD->u1.f0.dv4[6974], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[6990] = t33;
  memset(&SD->u1.f0.dv4[6991], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7024] = t33;
  memset(&SD->u1.f0.dv4[7025], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[7196] = -1.0;
  memset(&SD->u1.f0.dv4[7197], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7230] = 1.0;
  memset(&SD->u1.f0.dv4[7231], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7247] = t36;
  memset(&SD->u1.f0.dv4[7248], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7281] = t36;
  memset(&SD->u1.f0.dv4[7282], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[7453] = -1.0;
  memset(&SD->u1.f0.dv4[7454], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7487] = 1.0;
  memset(&SD->u1.f0.dv4[7488], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7504] = t39;
  memset(&SD->u1.f0.dv4[7505], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7538] = t39;
  memset(&SD->u1.f0.dv4[7539], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[7710] = -1.0;
  memset(&SD->u1.f0.dv4[7711], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7744] = 1.0;
  memset(&SD->u1.f0.dv4[7745], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[7761] = t42;
  memset(&SD->u1.f0.dv4[7762], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[7795] = t42;
  memset(&SD->u1.f0.dv4[7796], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[7967] = -1.0;
  memset(&SD->u1.f0.dv4[7968], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8001] = 1.0;
  memset(&SD->u1.f0.dv4[8002], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8018] = t45;
  memset(&SD->u1.f0.dv4[8019], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8052] = t45;
  memset(&SD->u1.f0.dv4[8053], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[8224] = -1.0;
  memset(&SD->u1.f0.dv4[8225], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8258] = 1.0;
  memset(&SD->u1.f0.dv4[8259], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8275] = t48;
  memset(&SD->u1.f0.dv4[8276], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8309] = t48;
  memset(&SD->u1.f0.dv4[8310], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv4[8481] = -1.0;
  memset(&SD->u1.f0.dv4[8482], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8515] = 1.0;
  memset(&SD->u1.f0.dv4[8516], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[8532] = t51;
  memset(&SD->u1.f0.dv4[8533], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8566] = t51;
  memset(&SD->u1.f0.dv4[8567], 0, 205U * sizeof(real_T));
  SD->u1.f0.dv4[8772] = t4;
  memset(&SD->u1.f0.dv4[8773], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[8806] = t4;
  memset(&SD->u1.f0.dv4[8807], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[9029] = t7;
  memset(&SD->u1.f0.dv4[9030], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9063] = t7;
  memset(&SD->u1.f0.dv4[9064], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[9286] = t10;
  memset(&SD->u1.f0.dv4[9287], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9320] = t10;
  memset(&SD->u1.f0.dv4[9321], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[9543] = t13;
  memset(&SD->u1.f0.dv4[9544], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9577] = t13;
  memset(&SD->u1.f0.dv4[9578], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[9800] = t16;
  memset(&SD->u1.f0.dv4[9801], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[9834] = t16;
  memset(&SD->u1.f0.dv4[9835], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[10057] = t19;
  memset(&SD->u1.f0.dv4[10058], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10091] = t19;
  memset(&SD->u1.f0.dv4[10092], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[10314] = t22;
  memset(&SD->u1.f0.dv4[10315], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10348] = t22;
  memset(&SD->u1.f0.dv4[10349], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[10571] = t25;
  memset(&SD->u1.f0.dv4[10572], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10605] = t25;
  memset(&SD->u1.f0.dv4[10606], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[10828] = t28;
  memset(&SD->u1.f0.dv4[10829], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[10862] = t28;
  memset(&SD->u1.f0.dv4[10863], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[11085] = t31;
  memset(&SD->u1.f0.dv4[11086], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11119] = t31;
  memset(&SD->u1.f0.dv4[11120], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[11342] = t34;
  memset(&SD->u1.f0.dv4[11343], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11376] = t34;
  memset(&SD->u1.f0.dv4[11377], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[11599] = t37;
  memset(&SD->u1.f0.dv4[11600], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11633] = t37;
  memset(&SD->u1.f0.dv4[11634], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[11856] = t40;
  memset(&SD->u1.f0.dv4[11857], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[11890] = t40;
  memset(&SD->u1.f0.dv4[11891], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[12113] = t43;
  memset(&SD->u1.f0.dv4[12114], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12147] = t43;
  memset(&SD->u1.f0.dv4[12148], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[12370] = t46;
  memset(&SD->u1.f0.dv4[12371], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12404] = t46;
  memset(&SD->u1.f0.dv4[12405], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[12627] = t49;
  memset(&SD->u1.f0.dv4[12628], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12661] = t49;
  memset(&SD->u1.f0.dv4[12662], 0, 222U * sizeof(real_T));
  SD->u1.f0.dv4[12884] = t52;
  memset(&SD->u1.f0.dv4[12885], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[12918] = t52;
  memset(&SD->u1.f0.dv4[12919], 0, 137U * sizeof(real_T));
  SD->u1.f0.dv4[13056] = 1.0;
  memset(&SD->u1.f0.dv4[13057], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13090] = -1.0;
  memset(&SD->u1.f0.dv4[13091], 0, 84U * sizeof(real_T));
  SD->u1.f0.dv4[13175] = 1.0;
  SD->u1.f0.dv4[13176] = -1.0;
  memset(&SD->u1.f0.dv4[13177], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv4[13185] = 1.0;
  memset(&SD->u1.f0.dv4[13186], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13219] = -1.0;
  memset(&SD->u1.f0.dv4[13220], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[13314] = 1.0;
  memset(&SD->u1.f0.dv4[13315], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13348] = -1.0;
  memset(&SD->u1.f0.dv4[13349], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[13443] = 1.0;
  memset(&SD->u1.f0.dv4[13444], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13477] = -1.0;
  memset(&SD->u1.f0.dv4[13478], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[13572] = 1.0;
  memset(&SD->u1.f0.dv4[13573], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13606] = -1.0;
  memset(&SD->u1.f0.dv4[13607], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[13701] = 1.0;
  memset(&SD->u1.f0.dv4[13702], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13735] = -1.0;
  memset(&SD->u1.f0.dv4[13736], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[13830] = 1.0;
  memset(&SD->u1.f0.dv4[13831], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13864] = -1.0;
  memset(&SD->u1.f0.dv4[13865], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[13959] = 1.0;
  memset(&SD->u1.f0.dv4[13960], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[13993] = -1.0;
  memset(&SD->u1.f0.dv4[13994], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14088] = 1.0;
  memset(&SD->u1.f0.dv4[14089], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14122] = -1.0;
  memset(&SD->u1.f0.dv4[14123], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14217] = 1.0;
  memset(&SD->u1.f0.dv4[14218], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14251] = -1.0;
  memset(&SD->u1.f0.dv4[14252], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14346] = 1.0;
  memset(&SD->u1.f0.dv4[14347], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14380] = -1.0;
  memset(&SD->u1.f0.dv4[14381], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14475] = 1.0;
  memset(&SD->u1.f0.dv4[14476], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14509] = -1.0;
  memset(&SD->u1.f0.dv4[14510], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14604] = 1.0;
  memset(&SD->u1.f0.dv4[14605], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14638] = -1.0;
  memset(&SD->u1.f0.dv4[14639], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14733] = 1.0;
  memset(&SD->u1.f0.dv4[14734], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14767] = -1.0;
  memset(&SD->u1.f0.dv4[14768], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14862] = 1.0;
  memset(&SD->u1.f0.dv4[14863], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[14896] = -1.0;
  memset(&SD->u1.f0.dv4[14897], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[14991] = 1.0;
  memset(&SD->u1.f0.dv4[14992], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15025] = -1.0;
  memset(&SD->u1.f0.dv4[15026], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[15120] = 1.0;
  memset(&SD->u1.f0.dv4[15121], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15154] = -1.0;
  memset(&SD->u1.f0.dv4[15155], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[15249] = 1.0;
  memset(&SD->u1.f0.dv4[15250], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15283] = -1.0;
  memset(&SD->u1.f0.dv4[15284], 0, 69U * sizeof(real_T));
  SD->u1.f0.dv4[15353] = 1.0;
  SD->u1.f0.dv4[15354] = -1.0;
  memset(&SD->u1.f0.dv4[15355], 0, 23U * sizeof(real_T));
  SD->u1.f0.dv4[15378] = 1.0;
  memset(&SD->u1.f0.dv4[15379], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15412] = -1.0;
  memset(&SD->u1.f0.dv4[15413], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[15507] = 1.0;
  memset(&SD->u1.f0.dv4[15508], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15541] = -1.0;
  memset(&SD->u1.f0.dv4[15542], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[15636] = 1.0;
  memset(&SD->u1.f0.dv4[15637], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15670] = -1.0;
  memset(&SD->u1.f0.dv4[15671], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[15765] = 1.0;
  memset(&SD->u1.f0.dv4[15766], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15799] = -1.0;
  memset(&SD->u1.f0.dv4[15800], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[15894] = 1.0;
  memset(&SD->u1.f0.dv4[15895], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[15928] = -1.0;
  memset(&SD->u1.f0.dv4[15929], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16023] = 1.0;
  memset(&SD->u1.f0.dv4[16024], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16057] = -1.0;
  memset(&SD->u1.f0.dv4[16058], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16152] = 1.0;
  memset(&SD->u1.f0.dv4[16153], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16186] = -1.0;
  memset(&SD->u1.f0.dv4[16187], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16281] = 1.0;
  memset(&SD->u1.f0.dv4[16282], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16315] = -1.0;
  memset(&SD->u1.f0.dv4[16316], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16410] = 1.0;
  memset(&SD->u1.f0.dv4[16411], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16444] = -1.0;
  memset(&SD->u1.f0.dv4[16445], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16539] = 1.0;
  memset(&SD->u1.f0.dv4[16540], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16573] = -1.0;
  memset(&SD->u1.f0.dv4[16574], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16668] = 1.0;
  memset(&SD->u1.f0.dv4[16669], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16702] = -1.0;
  memset(&SD->u1.f0.dv4[16703], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16797] = 1.0;
  memset(&SD->u1.f0.dv4[16798], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16831] = -1.0;
  memset(&SD->u1.f0.dv4[16832], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[16926] = 1.0;
  memset(&SD->u1.f0.dv4[16927], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[16960] = -1.0;
  memset(&SD->u1.f0.dv4[16961], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[17055] = 1.0;
  memset(&SD->u1.f0.dv4[17056], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17089] = -1.0;
  memset(&SD->u1.f0.dv4[17090], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[17184] = 1.0;
  memset(&SD->u1.f0.dv4[17185], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17218] = -1.0;
  memset(&SD->u1.f0.dv4[17219], 0, 94U * sizeof(real_T));
  SD->u1.f0.dv4[17313] = 1.0;
  memset(&SD->u1.f0.dv4[17314], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv4[17347] = -1.0;
  memset(&SD->u1.f0.dv4[17348], 0, 3345U * sizeof(real_T));
  SD->u1.f0.dv4[20693] = -1.0;
  memset(&SD->u1.f0.dv4[20694], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[20710] = -1.0;
  memset(&SD->u1.f0.dv4[20711], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[20822] = -1.0;
  memset(&SD->u1.f0.dv4[20823], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[20839] = -1.0;
  memset(&SD->u1.f0.dv4[20840], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[20951] = -1.0;
  memset(&SD->u1.f0.dv4[20952], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[20968] = -1.0;
  memset(&SD->u1.f0.dv4[20969], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21080] = -1.0;
  memset(&SD->u1.f0.dv4[21081], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21097] = -1.0;
  memset(&SD->u1.f0.dv4[21098], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21209] = -1.0;
  memset(&SD->u1.f0.dv4[21210], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21226] = -1.0;
  memset(&SD->u1.f0.dv4[21227], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21338] = -1.0;
  memset(&SD->u1.f0.dv4[21339], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21355] = -1.0;
  memset(&SD->u1.f0.dv4[21356], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21467] = -1.0;
  memset(&SD->u1.f0.dv4[21468], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21484] = -1.0;
  memset(&SD->u1.f0.dv4[21485], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21596] = -1.0;
  memset(&SD->u1.f0.dv4[21597], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21613] = -1.0;
  memset(&SD->u1.f0.dv4[21614], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21725] = -1.0;
  memset(&SD->u1.f0.dv4[21726], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21742] = -1.0;
  memset(&SD->u1.f0.dv4[21743], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21854] = -1.0;
  memset(&SD->u1.f0.dv4[21855], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[21871] = -1.0;
  memset(&SD->u1.f0.dv4[21872], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[21983] = -1.0;
  memset(&SD->u1.f0.dv4[21984], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22000] = -1.0;
  memset(&SD->u1.f0.dv4[22001], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[22112] = -1.0;
  memset(&SD->u1.f0.dv4[22113], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22129] = -1.0;
  memset(&SD->u1.f0.dv4[22130], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[22241] = -1.0;
  memset(&SD->u1.f0.dv4[22242], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22258] = -1.0;
  memset(&SD->u1.f0.dv4[22259], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[22370] = -1.0;
  memset(&SD->u1.f0.dv4[22371], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22387] = -1.0;
  memset(&SD->u1.f0.dv4[22388], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[22499] = -1.0;
  memset(&SD->u1.f0.dv4[22500], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22516] = -1.0;
  memset(&SD->u1.f0.dv4[22517], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[22628] = -1.0;
  memset(&SD->u1.f0.dv4[22629], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22645] = -1.0;
  memset(&SD->u1.f0.dv4[22646], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv4[22757] = -1.0;
  memset(&SD->u1.f0.dv4[22758], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv4[22774] = -1.0;
  memset(&SD->u1.f0.dv4[22775], 0, 2304U * sizeof(real_T));
  SD->u1.f0.dv4[25079] = -1.0;
  SD->u1.f0.dv4[25080] = -1.0;
  memset(&SD->u1.f0.dv4[25081], 0, sizeof(real_T) << 9);
  SD->u1.f0.dv4[25593] = -1.0;
  SD->u1.f0.dv4[25594] = -1.0;
  memset(&SD->u1.f0.dv4[25595], 0, sizeof(real_T) << 10);
  SD->u1.f0.dv4[26619] = t53;
  SD->u1.f0.dv4[26620] = t53;
  memset(&SD->u1.f0.dv4[26621], 0, 638U * sizeof(real_T));
  SD->u1.f0.dv4[27259] = t54;
  SD->u1.f0.dv4[27260] = t54;
  memset(&SD->u1.f0.dv4[27261], 0, 638U * sizeof(real_T));
  SD->u1.f0.dv4[27899] = t55;
  SD->u1.f0.dv4[27900] = t55;
  memset(&SD->u1.f0.dv4[27901], 0, 510U * sizeof(real_T));
  SD->u1.f0.dv4[28411] = -1.0;
  memset(&SD->u1.f0.dv4[28412], 0, 1281U * sizeof(real_T));
  SD->u1.f0.dv4[29693] = t217;
  memset(&SD->u1.f0.dv4[29694], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv4[29822] = t225;
  memset(&SD->u1.f0.dv4[29823], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv4[29951] = t233;
  memset(&SD->u1.f0.dv4[29952], 0, 253U * sizeof(real_T));
  SD->u1.f0.dv4[30205] = t219;
  memset(&SD->u1.f0.dv4[30206], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv4[30334] = t227;
  memset(&SD->u1.f0.dv4[30335], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv4[30463] = t235;
  for (i1 = 0; i1 < 238; i1++) {
    memcpy(&Aiq[i1 << 7], &SD->u1.f0.dv4[i1 << 7], sizeof(real_T) << 7);
  }

  t58 = muDoubleScalarAbs(t235);
  t58 = a * a + t58 * t58;
  b_sqrt(&t58);
  t58 = 1.0 / t58;
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
  biq[68] = (t3 * (in7[1] - in8->data[0] * t3 * t64) + t4 * (in7[2] - in8->data
              [0] * t4 * t64)) - t56 * (in7[0] + in8->data[0] * t56 * t64);
  biq[69] = (t6 * (in7[1] - in8->data[2] * t6 * t73) + t7 * (in7[2] - in8->data
              [2] * t7 * t73)) - t65 * (in7[0] + in8->data[2] * t65 * t73);
  biq[70] = (t9 * (in7[1] - in8->data[4] * t9 * t82) + t10 * (in7[2] - in8->
              data[4] * t10 * t82)) - t74 * (in7[0] + in8->data[4] * t74 * t82);
  biq[71] = (t12 * (in7[1] - in8->data[6] * t12 * t91) + t13 * (in7[2] -
              in8->data[6] * t13 * t91)) - t83 * (in7[0] + in8->data[6] * t83 *
    t91);
  biq[72] = (t15 * (in7[1] - in8->data[8] * t15 * t100) + t16 * (in7[2] -
              in8->data[8] * t16 * t100)) - t92 * (in7[0] + in8->data[8] * t92 *
    t100);
  biq[73] = (t18 * (in7[1] - in8->data[10] * t18 * t109) + t19 * (in7[2] -
              in8->data[10] * t19 * t109)) - t101 * (in7[0] + in8->data[10] *
    t101 * t109);
  biq[74] = (t21 * (in7[1] - in8->data[12] * t21 * t118) + t22 * (in7[2] -
              in8->data[12] * t22 * t118)) - t110 * (in7[0] + in8->data[12] *
    t110 * t118);
  biq[75] = (t24 * (in7[1] - in8->data[14] * t24 * t127) + t25 * (in7[2] -
              in8->data[14] * t25 * t127)) - t119 * (in7[0] + in8->data[14] *
    t119 * t127);
  biq[76] = (t27 * (in7[1] - in8->data[16] * t27 * t136) + t28 * (in7[2] -
              in8->data[16] * t28 * t136)) - t128 * (in7[0] + in8->data[16] *
    t128 * t136);
  biq[77] = (t30 * (in7[1] - in8->data[18] * t30 * t145) + t31 * (in7[2] -
              in8->data[18] * t31 * t145)) - t137 * (in7[0] + in8->data[18] *
    t137 * t145);
  biq[78] = (t33 * (in7[1] - in8->data[20] * t33 * t154) + t34 * (in7[2] -
              in8->data[20] * t34 * t154)) - t146 * (in7[0] + in8->data[20] *
    t146 * t154);
  biq[79] = (t36 * (in7[1] - in8->data[22] * t36 * t163) + t37 * (in7[2] -
              in8->data[22] * t37 * t163)) - t155 * (in7[0] + in8->data[22] *
    t155 * t163);
  biq[80] = (t39 * (in7[1] - in8->data[24] * t39 * t172) + t40 * (in7[2] -
              in8->data[24] * t40 * t172)) - t164 * (in7[0] + in8->data[24] *
    t164 * t172);
  biq[81] = (t42 * (in7[1] - in8->data[26] * t42 * t181) + t43 * (in7[2] -
              in8->data[26] * t43 * t181)) - t173 * (in7[0] + in8->data[26] *
    t173 * t181);
  biq[82] = (t45 * (in7[1] - in8->data[28] * t45 * t190) + t46 * (in7[2] -
              in8->data[28] * t46 * t190)) - t182 * (in7[0] + in8->data[28] *
    t182 * t190);
  biq[83] = (t48 * (in7[1] - in8->data[30] * t48 * t199) + t49 * (in7[2] -
              in8->data[30] * t49 * t199)) - t191 * (in7[0] + in8->data[30] *
    t191 * t199);
  biq[84] = (t51 * (in7[1] - in8->data[32] * t51 * t208) + t52 * (in7[2] -
              in8->data[32] * t52 * t208)) - t200 * (in7[0] + in8->data[32] *
    t200 * t208);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = (t3 * (in7[1] - in9->data[0] * t3 * t64) + t4 * (in7[2] - in9->
    data[0] * t4 * t64)) - t56 * (in7[0] + in9->data[0] * t56 * t64);
  biq[103] = (t6 * (in7[1] - in9->data[2] * t6 * t73) + t7 * (in7[2] - in9->
    data[2] * t7 * t73)) - t65 * (in7[0] + in9->data[2] * t65 * t73);
  biq[104] = (t9 * (in7[1] - in9->data[4] * t9 * t82) + t10 * (in7[2] -
    in9->data[4] * t10 * t82)) - t74 * (in7[0] + in9->data[4] * t74 * t82);
  biq[105] = (t12 * (in7[1] - in9->data[6] * t12 * t91) + t13 * (in7[2] -
    in9->data[6] * t13 * t91)) - t83 * (in7[0] + in9->data[6] * t83 * t91);
  biq[106] = (t15 * (in7[1] - in9->data[8] * t15 * t100) + t16 * (in7[2] -
    in9->data[8] * t16 * t100)) - t92 * (in7[0] + in9->data[8] * t92 * t100);
  biq[107] = (t18 * (in7[1] - in9->data[10] * t18 * t109) + t19 * (in7[2] -
    in9->data[10] * t19 * t109)) - t101 * (in7[0] + in9->data[10] * t101 * t109);
  biq[108] = (t21 * (in7[1] - in9->data[12] * t21 * t118) + t22 * (in7[2] -
    in9->data[12] * t22 * t118)) - t110 * (in7[0] + in9->data[12] * t110 * t118);
  biq[109] = (t24 * (in7[1] - in9->data[14] * t24 * t127) + t25 * (in7[2] -
    in9->data[14] * t25 * t127)) - t119 * (in7[0] + in9->data[14] * t119 * t127);
  biq[110] = (t27 * (in7[1] - in9->data[16] * t27 * t136) + t28 * (in7[2] -
    in9->data[16] * t28 * t136)) - t128 * (in7[0] + in9->data[16] * t128 * t136);
  biq[111] = (t30 * (in7[1] - in9->data[18] * t30 * t145) + t31 * (in7[2] -
    in9->data[18] * t31 * t145)) - t137 * (in7[0] + in9->data[18] * t137 * t145);
  biq[112] = (t33 * (in7[1] - in9->data[20] * t33 * t154) + t34 * (in7[2] -
    in9->data[20] * t34 * t154)) - t146 * (in7[0] + in9->data[20] * t146 * t154);
  biq[113] = (t36 * (in7[1] - in9->data[22] * t36 * t163) + t37 * (in7[2] -
    in9->data[22] * t37 * t163)) - t155 * (in7[0] + in9->data[22] * t155 * t163);
  biq[114] = (t39 * (in7[1] - in9->data[24] * t39 * t172) + t40 * (in7[2] -
    in9->data[24] * t40 * t172)) - t164 * (in7[0] + in9->data[24] * t164 * t172);
  biq[115] = (t42 * (in7[1] - in9->data[26] * t42 * t181) + t43 * (in7[2] -
    in9->data[26] * t43 * t181)) - t173 * (in7[0] + in9->data[26] * t173 * t181);
  biq[116] = (t45 * (in7[1] - in9->data[28] * t45 * t190) + t46 * (in7[2] -
    in9->data[28] * t46 * t190)) - t182 * (in7[0] + in9->data[28] * t182 * t190);
  biq[117] = (t48 * (in7[1] - in9->data[30] * t48 * t199) + t49 * (in7[2] -
    in9->data[30] * t49 * t199)) - t191 * (in7[0] + in9->data[30] * t191 * t199);
  biq[118] = (t51 * (in7[1] - in9->data[32] * t51 * t208) + t52 * (in7[2] -
    in9->data[32] * t52 * t208)) - t200 * (in7[0] + in9->data[32] * t200 * t208);
  biq[119] = Cpx1 + in12[0];
  biq[120] = -Cpx1 + in12[0];
  biq[121] = Cpy1 + in13[0];
  biq[122] = -Cpy1 + in13[0];
  biq[123] = (t53 * (in15[0] - in9->data[1] * t53 * t216) + t54 * (in15[1] -
    in9->data[1] * t54 * t216)) + t55 * (in15[2] - in9->data[1] * t55 * t216);
  biq[124] = (t53 * (in15[0] - in8->data[1] * t53 * t216) + t54 * (in15[1] -
    in8->data[1] * t54 * t216)) + t55 * (in15[2] - in8->data[1] * t55 * t216);
  biq[125] = t217 * (in18[2] - in19[1] * t217 * t224) + t219 * (in18[3] - in19[1]
    * t219 * t224);
  biq[126] = t225 * (in18[4] - in19[2] * t225 * t59) + t227 * (in18[5] - in19[2]
    * t227 * t59);
  biq[127] = t233 * (in18[6] - in19[3] * t233 * t58) + t235 * (in18[7] - in19[3]
    * t235 * t58);
}

/* End of code generation (Iq_LeftStart33DFootV98.cpp) */
