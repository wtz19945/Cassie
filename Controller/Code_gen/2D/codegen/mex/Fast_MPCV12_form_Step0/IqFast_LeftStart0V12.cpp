/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart0V12.cpp
 *
 * Code generation for function 'IqFast_LeftStart0V12'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step0.h"
#include "IqFast_LeftStart0V12.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V12.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart0V12(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [21920], real_T biq[137])
{
  int32_T i1;
  real_T dv1[21920];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART0V12 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART0V12(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     25-Jul-2023 13:23:17 */
  i1 = in4->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&ib_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&hb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&gb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(4 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i1, (emlrtBCInfo *)&fb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&eb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(6 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i1, (emlrtBCInfo *)&db_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&cb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(8 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i1, (emlrtBCInfo *)&bb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&ab_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&y_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&x_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&w_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(4 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i1, (emlrtBCInfo *)&v_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&u_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(6 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i1, (emlrtBCInfo *)&t_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&s_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(8 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i1, (emlrtBCInfo *)&r_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&q_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(10 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i1, (emlrtBCInfo *)&p_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&o_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(12 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i1, (emlrtBCInfo *)&n_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&m_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(14 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i1, (emlrtBCInfo *)&l_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&k_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(16 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i1, (emlrtBCInfo *)&j_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&i_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(10 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i1, (emlrtBCInfo *)&h_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&g_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(12 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i1, (emlrtBCInfo *)&f_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&e_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(14 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i1, (emlrtBCInfo *)&d_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&c_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(16 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i1, (emlrtBCInfo *)&b_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&emlrtBCI, sp);
  }

  dv1[0] = -1.0;
  memset(&dv1[1], 0, 33U * sizeof(real_T));
  dv1[34] = 1.0;
  memset(&dv1[35], 0, 33U * sizeof(real_T));
  dv1[68] = -in11[2];
  memset(&dv1[69], 0, 33U * sizeof(real_T));
  dv1[102] = -in11[2];
  memset(&dv1[103], 0, 172U * sizeof(real_T));
  dv1[275] = -1.0;
  memset(&dv1[276], 0, 33U * sizeof(real_T));
  dv1[309] = 1.0;
  memset(&dv1[310], 0, 33U * sizeof(real_T));
  dv1[343] = -in11[2];
  memset(&dv1[344], 0, 33U * sizeof(real_T));
  dv1[377] = -in11[2];
  memset(&dv1[378], 0, 172U * sizeof(real_T));
  dv1[550] = -1.0;
  memset(&dv1[551], 0, 33U * sizeof(real_T));
  dv1[584] = 1.0;
  memset(&dv1[585], 0, 33U * sizeof(real_T));
  dv1[618] = -in11[2];
  memset(&dv1[619], 0, 33U * sizeof(real_T));
  dv1[652] = -in11[2];
  memset(&dv1[653], 0, 172U * sizeof(real_T));
  dv1[825] = -1.0;
  memset(&dv1[826], 0, 33U * sizeof(real_T));
  dv1[859] = 1.0;
  memset(&dv1[860], 0, 33U * sizeof(real_T));
  dv1[893] = -in11[2];
  memset(&dv1[894], 0, 33U * sizeof(real_T));
  dv1[927] = -in11[2];
  memset(&dv1[928], 0, 172U * sizeof(real_T));
  dv1[1100] = -1.0;
  memset(&dv1[1101], 0, 33U * sizeof(real_T));
  dv1[1134] = 1.0;
  memset(&dv1[1135], 0, 33U * sizeof(real_T));
  dv1[1168] = -in11[2];
  memset(&dv1[1169], 0, 33U * sizeof(real_T));
  dv1[1202] = -in11[2];
  memset(&dv1[1203], 0, 172U * sizeof(real_T));
  dv1[1375] = -1.0;
  memset(&dv1[1376], 0, 33U * sizeof(real_T));
  dv1[1409] = 1.0;
  memset(&dv1[1410], 0, 33U * sizeof(real_T));
  dv1[1443] = -in11[2];
  memset(&dv1[1444], 0, 33U * sizeof(real_T));
  dv1[1477] = -in11[2];
  memset(&dv1[1478], 0, 172U * sizeof(real_T));
  dv1[1650] = -1.0;
  memset(&dv1[1651], 0, 33U * sizeof(real_T));
  dv1[1684] = 1.0;
  memset(&dv1[1685], 0, 33U * sizeof(real_T));
  dv1[1718] = -in11[2];
  memset(&dv1[1719], 0, 33U * sizeof(real_T));
  dv1[1752] = -in11[2];
  memset(&dv1[1753], 0, 172U * sizeof(real_T));
  dv1[1925] = -1.0;
  memset(&dv1[1926], 0, 33U * sizeof(real_T));
  dv1[1959] = 1.0;
  memset(&dv1[1960], 0, 33U * sizeof(real_T));
  dv1[1993] = -in11[2];
  memset(&dv1[1994], 0, 33U * sizeof(real_T));
  dv1[2027] = -in11[2];
  memset(&dv1[2028], 0, 172U * sizeof(real_T));
  dv1[2200] = -1.0;
  memset(&dv1[2201], 0, 33U * sizeof(real_T));
  dv1[2234] = 1.0;
  memset(&dv1[2235], 0, 33U * sizeof(real_T));
  dv1[2268] = -in11[2];
  memset(&dv1[2269], 0, 33U * sizeof(real_T));
  dv1[2302] = -in11[2];
  memset(&dv1[2303], 0, 172U * sizeof(real_T));
  dv1[2475] = -1.0;
  memset(&dv1[2476], 0, 33U * sizeof(real_T));
  dv1[2509] = 1.0;
  memset(&dv1[2510], 0, 33U * sizeof(real_T));
  dv1[2543] = -in11[2];
  memset(&dv1[2544], 0, 33U * sizeof(real_T));
  dv1[2577] = -in11[2];
  memset(&dv1[2578], 0, 172U * sizeof(real_T));
  dv1[2750] = -1.0;
  memset(&dv1[2751], 0, 33U * sizeof(real_T));
  dv1[2784] = 1.0;
  memset(&dv1[2785], 0, 33U * sizeof(real_T));
  dv1[2818] = -in11[2];
  memset(&dv1[2819], 0, 33U * sizeof(real_T));
  dv1[2852] = -in11[2];
  memset(&dv1[2853], 0, 172U * sizeof(real_T));
  dv1[3025] = -1.0;
  memset(&dv1[3026], 0, 33U * sizeof(real_T));
  dv1[3059] = 1.0;
  memset(&dv1[3060], 0, 33U * sizeof(real_T));
  dv1[3093] = -in11[2];
  memset(&dv1[3094], 0, 33U * sizeof(real_T));
  dv1[3127] = -in11[2];
  memset(&dv1[3128], 0, 172U * sizeof(real_T));
  dv1[3300] = -1.0;
  memset(&dv1[3301], 0, 33U * sizeof(real_T));
  dv1[3334] = 1.0;
  memset(&dv1[3335], 0, 33U * sizeof(real_T));
  dv1[3368] = -in11[2];
  memset(&dv1[3369], 0, 33U * sizeof(real_T));
  dv1[3402] = -in11[2];
  memset(&dv1[3403], 0, 172U * sizeof(real_T));
  dv1[3575] = -1.0;
  memset(&dv1[3576], 0, 33U * sizeof(real_T));
  dv1[3609] = 1.0;
  memset(&dv1[3610], 0, 33U * sizeof(real_T));
  dv1[3643] = -in11[2];
  memset(&dv1[3644], 0, 33U * sizeof(real_T));
  dv1[3677] = -in11[2];
  memset(&dv1[3678], 0, 172U * sizeof(real_T));
  dv1[3850] = -1.0;
  memset(&dv1[3851], 0, 33U * sizeof(real_T));
  dv1[3884] = 1.0;
  memset(&dv1[3885], 0, 33U * sizeof(real_T));
  dv1[3918] = -in11[2];
  memset(&dv1[3919], 0, 33U * sizeof(real_T));
  dv1[3952] = -in11[2];
  memset(&dv1[3953], 0, 172U * sizeof(real_T));
  dv1[4125] = -1.0;
  memset(&dv1[4126], 0, 33U * sizeof(real_T));
  dv1[4159] = 1.0;
  memset(&dv1[4160], 0, 33U * sizeof(real_T));
  dv1[4193] = -in11[2];
  memset(&dv1[4194], 0, 33U * sizeof(real_T));
  dv1[4227] = -in11[2];
  memset(&dv1[4228], 0, 172U * sizeof(real_T));
  dv1[4400] = -1.0;
  memset(&dv1[4401], 0, 33U * sizeof(real_T));
  dv1[4434] = 1.0;
  memset(&dv1[4435], 0, 33U * sizeof(real_T));
  dv1[4468] = -in11[2];
  memset(&dv1[4469], 0, 33U * sizeof(real_T));
  dv1[4502] = -in11[2];
  memset(&dv1[4503], 0, 172U * sizeof(real_T));
  dv1[4675] = -1.0;
  memset(&dv1[4676], 0, 33U * sizeof(real_T));
  dv1[4709] = 1.0;
  memset(&dv1[4710], 0, sizeof(real_T) << 4);
  dv1[4726] = -in11[3];
  memset(&dv1[4727], 0, 33U * sizeof(real_T));
  dv1[4760] = -in11[3];
  memset(&dv1[4761], 0, 189U * sizeof(real_T));
  dv1[4950] = -1.0;
  memset(&dv1[4951], 0, 33U * sizeof(real_T));
  dv1[4984] = 1.0;
  memset(&dv1[4985], 0, sizeof(real_T) << 4);
  dv1[5001] = -in11[3];
  memset(&dv1[5002], 0, 33U * sizeof(real_T));
  dv1[5035] = -in11[3];
  memset(&dv1[5036], 0, 189U * sizeof(real_T));
  dv1[5225] = -1.0;
  memset(&dv1[5226], 0, 33U * sizeof(real_T));
  dv1[5259] = 1.0;
  memset(&dv1[5260], 0, sizeof(real_T) << 4);
  dv1[5276] = -in11[3];
  memset(&dv1[5277], 0, 33U * sizeof(real_T));
  dv1[5310] = -in11[3];
  memset(&dv1[5311], 0, 189U * sizeof(real_T));
  dv1[5500] = -1.0;
  memset(&dv1[5501], 0, 33U * sizeof(real_T));
  dv1[5534] = 1.0;
  memset(&dv1[5535], 0, sizeof(real_T) << 4);
  dv1[5551] = -in11[3];
  memset(&dv1[5552], 0, 33U * sizeof(real_T));
  dv1[5585] = -in11[3];
  memset(&dv1[5586], 0, 189U * sizeof(real_T));
  dv1[5775] = -1.0;
  memset(&dv1[5776], 0, 33U * sizeof(real_T));
  dv1[5809] = 1.0;
  memset(&dv1[5810], 0, sizeof(real_T) << 4);
  dv1[5826] = -in11[3];
  memset(&dv1[5827], 0, 33U * sizeof(real_T));
  dv1[5860] = -in11[3];
  memset(&dv1[5861], 0, 189U * sizeof(real_T));
  dv1[6050] = -1.0;
  memset(&dv1[6051], 0, 33U * sizeof(real_T));
  dv1[6084] = 1.0;
  memset(&dv1[6085], 0, sizeof(real_T) << 4);
  dv1[6101] = -in11[3];
  memset(&dv1[6102], 0, 33U * sizeof(real_T));
  dv1[6135] = -in11[3];
  memset(&dv1[6136], 0, 189U * sizeof(real_T));
  dv1[6325] = -1.0;
  memset(&dv1[6326], 0, 33U * sizeof(real_T));
  dv1[6359] = 1.0;
  memset(&dv1[6360], 0, sizeof(real_T) << 4);
  dv1[6376] = -in11[3];
  memset(&dv1[6377], 0, 33U * sizeof(real_T));
  dv1[6410] = -in11[3];
  memset(&dv1[6411], 0, 189U * sizeof(real_T));
  dv1[6600] = -1.0;
  memset(&dv1[6601], 0, 33U * sizeof(real_T));
  dv1[6634] = 1.0;
  memset(&dv1[6635], 0, sizeof(real_T) << 4);
  dv1[6651] = -in11[3];
  memset(&dv1[6652], 0, 33U * sizeof(real_T));
  dv1[6685] = -in11[3];
  memset(&dv1[6686], 0, 189U * sizeof(real_T));
  dv1[6875] = -1.0;
  memset(&dv1[6876], 0, 33U * sizeof(real_T));
  dv1[6909] = 1.0;
  memset(&dv1[6910], 0, sizeof(real_T) << 4);
  dv1[6926] = -in11[3];
  memset(&dv1[6927], 0, 33U * sizeof(real_T));
  dv1[6960] = -in11[3];
  memset(&dv1[6961], 0, 189U * sizeof(real_T));
  dv1[7150] = -1.0;
  memset(&dv1[7151], 0, 33U * sizeof(real_T));
  dv1[7184] = 1.0;
  memset(&dv1[7185], 0, sizeof(real_T) << 4);
  dv1[7201] = -in11[3];
  memset(&dv1[7202], 0, 33U * sizeof(real_T));
  dv1[7235] = -in11[3];
  memset(&dv1[7236], 0, 189U * sizeof(real_T));
  dv1[7425] = -1.0;
  memset(&dv1[7426], 0, 33U * sizeof(real_T));
  dv1[7459] = 1.0;
  memset(&dv1[7460], 0, sizeof(real_T) << 4);
  dv1[7476] = -in11[3];
  memset(&dv1[7477], 0, 33U * sizeof(real_T));
  dv1[7510] = -in11[3];
  memset(&dv1[7511], 0, 189U * sizeof(real_T));
  dv1[7700] = -1.0;
  memset(&dv1[7701], 0, 33U * sizeof(real_T));
  dv1[7734] = 1.0;
  memset(&dv1[7735], 0, sizeof(real_T) << 4);
  dv1[7751] = -in11[3];
  memset(&dv1[7752], 0, 33U * sizeof(real_T));
  dv1[7785] = -in11[3];
  memset(&dv1[7786], 0, 189U * sizeof(real_T));
  dv1[7975] = -1.0;
  memset(&dv1[7976], 0, 33U * sizeof(real_T));
  dv1[8009] = 1.0;
  memset(&dv1[8010], 0, sizeof(real_T) << 4);
  dv1[8026] = -in11[3];
  memset(&dv1[8027], 0, 33U * sizeof(real_T));
  dv1[8060] = -in11[3];
  memset(&dv1[8061], 0, 189U * sizeof(real_T));
  dv1[8250] = -1.0;
  memset(&dv1[8251], 0, 33U * sizeof(real_T));
  dv1[8284] = 1.0;
  memset(&dv1[8285], 0, sizeof(real_T) << 4);
  dv1[8301] = -in11[3];
  memset(&dv1[8302], 0, 33U * sizeof(real_T));
  dv1[8335] = -in11[3];
  memset(&dv1[8336], 0, 189U * sizeof(real_T));
  dv1[8525] = -1.0;
  memset(&dv1[8526], 0, 33U * sizeof(real_T));
  dv1[8559] = 1.0;
  memset(&dv1[8560], 0, sizeof(real_T) << 4);
  dv1[8576] = -in11[3];
  memset(&dv1[8577], 0, 33U * sizeof(real_T));
  dv1[8610] = -in11[3];
  memset(&dv1[8611], 0, 189U * sizeof(real_T));
  dv1[8800] = -1.0;
  memset(&dv1[8801], 0, 33U * sizeof(real_T));
  dv1[8834] = 1.0;
  memset(&dv1[8835], 0, sizeof(real_T) << 4);
  dv1[8851] = -in11[3];
  memset(&dv1[8852], 0, 33U * sizeof(real_T));
  dv1[8885] = -in11[3];
  memset(&dv1[8886], 0, 189U * sizeof(real_T));
  dv1[9075] = -1.0;
  memset(&dv1[9076], 0, 33U * sizeof(real_T));
  dv1[9109] = 1.0;
  memset(&dv1[9110], 0, sizeof(real_T) << 4);
  dv1[9126] = -in11[3];
  memset(&dv1[9127], 0, 33U * sizeof(real_T));
  dv1[9160] = -in11[3];
  memset(&dv1[9161], 0, 155U * sizeof(real_T));
  dv1[9316] = 1.0;
  memset(&dv1[9317], 0, 33U * sizeof(real_T));
  dv1[9350] = -1.0;
  memset(&dv1[9351], 0, 84U * sizeof(real_T));
  dv1[9435] = 1.0;
  dv1[9436] = 0.0;
  dv1[9437] = 0.0;
  dv1[9438] = 0.0;
  dv1[9439] = -1.0;
  memset(&dv1[9440], 0, 14U * sizeof(real_T));
  dv1[9454] = 1.0;
  memset(&dv1[9455], 0, 33U * sizeof(real_T));
  dv1[9488] = -1.0;
  memset(&dv1[9489], 0, 84U * sizeof(real_T));
  dv1[9573] = 1.0;
  dv1[9574] = 0.0;
  dv1[9575] = 0.0;
  dv1[9576] = 0.0;
  dv1[9577] = -1.0;
  memset(&dv1[9578], 0, 14U * sizeof(real_T));
  dv1[9592] = 1.0;
  memset(&dv1[9593], 0, 33U * sizeof(real_T));
  dv1[9626] = -1.0;
  memset(&dv1[9627], 0, 84U * sizeof(real_T));
  dv1[9711] = 1.0;
  dv1[9712] = 0.0;
  dv1[9713] = 0.0;
  dv1[9714] = 0.0;
  dv1[9715] = -1.0;
  memset(&dv1[9716], 0, 14U * sizeof(real_T));
  dv1[9730] = 1.0;
  memset(&dv1[9731], 0, 33U * sizeof(real_T));
  dv1[9764] = -1.0;
  memset(&dv1[9765], 0, 84U * sizeof(real_T));
  dv1[9849] = 1.0;
  dv1[9850] = 0.0;
  dv1[9851] = 0.0;
  dv1[9852] = 0.0;
  dv1[9853] = -1.0;
  memset(&dv1[9854], 0, 14U * sizeof(real_T));
  dv1[9868] = 1.0;
  memset(&dv1[9869], 0, 33U * sizeof(real_T));
  dv1[9902] = -1.0;
  memset(&dv1[9903], 0, 103U * sizeof(real_T));
  dv1[10006] = 1.0;
  memset(&dv1[10007], 0, 33U * sizeof(real_T));
  dv1[10040] = -1.0;
  memset(&dv1[10041], 0, 103U * sizeof(real_T));
  dv1[10144] = 1.0;
  memset(&dv1[10145], 0, 33U * sizeof(real_T));
  dv1[10178] = -1.0;
  memset(&dv1[10179], 0, 103U * sizeof(real_T));
  dv1[10282] = 1.0;
  memset(&dv1[10283], 0, 33U * sizeof(real_T));
  dv1[10316] = -1.0;
  memset(&dv1[10317], 0, 103U * sizeof(real_T));
  dv1[10420] = 1.0;
  memset(&dv1[10421], 0, 33U * sizeof(real_T));
  dv1[10454] = -1.0;
  memset(&dv1[10455], 0, 103U * sizeof(real_T));
  dv1[10558] = 1.0;
  memset(&dv1[10559], 0, 33U * sizeof(real_T));
  dv1[10592] = -1.0;
  memset(&dv1[10593], 0, 103U * sizeof(real_T));
  dv1[10696] = 1.0;
  memset(&dv1[10697], 0, 33U * sizeof(real_T));
  dv1[10730] = -1.0;
  memset(&dv1[10731], 0, 103U * sizeof(real_T));
  dv1[10834] = 1.0;
  memset(&dv1[10835], 0, 33U * sizeof(real_T));
  dv1[10868] = -1.0;
  memset(&dv1[10869], 0, 103U * sizeof(real_T));
  dv1[10972] = 1.0;
  memset(&dv1[10973], 0, 33U * sizeof(real_T));
  dv1[11006] = -1.0;
  memset(&dv1[11007], 0, 103U * sizeof(real_T));
  dv1[11110] = 1.0;
  memset(&dv1[11111], 0, 33U * sizeof(real_T));
  dv1[11144] = -1.0;
  memset(&dv1[11145], 0, 103U * sizeof(real_T));
  dv1[11248] = 1.0;
  memset(&dv1[11249], 0, 33U * sizeof(real_T));
  dv1[11282] = -1.0;
  memset(&dv1[11283], 0, 103U * sizeof(real_T));
  dv1[11386] = 1.0;
  memset(&dv1[11387], 0, 33U * sizeof(real_T));
  dv1[11420] = -1.0;
  memset(&dv1[11421], 0, 103U * sizeof(real_T));
  dv1[11524] = 1.0;
  memset(&dv1[11525], 0, 33U * sizeof(real_T));
  dv1[11558] = -1.0;
  memset(&dv1[11559], 0, 103U * sizeof(real_T));
  dv1[11662] = 1.0;
  memset(&dv1[11663], 0, 33U * sizeof(real_T));
  dv1[11696] = -1.0;
  memset(&dv1[11697], 0, 75U * sizeof(real_T));
  dv1[11772] = 1.0;
  dv1[11773] = 0.0;
  dv1[11774] = 0.0;
  dv1[11775] = 0.0;
  dv1[11776] = -1.0;
  memset(&dv1[11777], 0, 23U * sizeof(real_T));
  dv1[11800] = 1.0;
  memset(&dv1[11801], 0, 33U * sizeof(real_T));
  dv1[11834] = -1.0;
  memset(&dv1[11835], 0, 75U * sizeof(real_T));
  dv1[11910] = 1.0;
  dv1[11911] = 0.0;
  dv1[11912] = 0.0;
  dv1[11913] = 0.0;
  dv1[11914] = -1.0;
  memset(&dv1[11915], 0, 23U * sizeof(real_T));
  dv1[11938] = 1.0;
  memset(&dv1[11939], 0, 33U * sizeof(real_T));
  dv1[11972] = -1.0;
  memset(&dv1[11973], 0, 75U * sizeof(real_T));
  dv1[12048] = 1.0;
  dv1[12049] = 0.0;
  dv1[12050] = 0.0;
  dv1[12051] = 0.0;
  dv1[12052] = -1.0;
  memset(&dv1[12053], 0, 23U * sizeof(real_T));
  dv1[12076] = 1.0;
  memset(&dv1[12077], 0, 33U * sizeof(real_T));
  dv1[12110] = -1.0;
  memset(&dv1[12111], 0, 75U * sizeof(real_T));
  dv1[12186] = 1.0;
  dv1[12187] = 0.0;
  dv1[12188] = 0.0;
  dv1[12189] = 0.0;
  dv1[12190] = -1.0;
  memset(&dv1[12191], 0, 23U * sizeof(real_T));
  dv1[12214] = 1.0;
  memset(&dv1[12215], 0, 33U * sizeof(real_T));
  dv1[12248] = -1.0;
  memset(&dv1[12249], 0, 103U * sizeof(real_T));
  dv1[12352] = 1.0;
  memset(&dv1[12353], 0, 33U * sizeof(real_T));
  dv1[12386] = -1.0;
  memset(&dv1[12387], 0, 103U * sizeof(real_T));
  dv1[12490] = 1.0;
  memset(&dv1[12491], 0, 33U * sizeof(real_T));
  dv1[12524] = -1.0;
  memset(&dv1[12525], 0, 103U * sizeof(real_T));
  dv1[12628] = 1.0;
  memset(&dv1[12629], 0, 33U * sizeof(real_T));
  dv1[12662] = -1.0;
  memset(&dv1[12663], 0, 103U * sizeof(real_T));
  dv1[12766] = 1.0;
  memset(&dv1[12767], 0, 33U * sizeof(real_T));
  dv1[12800] = -1.0;
  memset(&dv1[12801], 0, 103U * sizeof(real_T));
  dv1[12904] = 1.0;
  memset(&dv1[12905], 0, 33U * sizeof(real_T));
  dv1[12938] = -1.0;
  memset(&dv1[12939], 0, 103U * sizeof(real_T));
  dv1[13042] = 1.0;
  memset(&dv1[13043], 0, 33U * sizeof(real_T));
  dv1[13076] = -1.0;
  memset(&dv1[13077], 0, 103U * sizeof(real_T));
  dv1[13180] = 1.0;
  memset(&dv1[13181], 0, 33U * sizeof(real_T));
  dv1[13214] = -1.0;
  memset(&dv1[13215], 0, 103U * sizeof(real_T));
  dv1[13318] = 1.0;
  memset(&dv1[13319], 0, 33U * sizeof(real_T));
  dv1[13352] = -1.0;
  memset(&dv1[13353], 0, 103U * sizeof(real_T));
  dv1[13456] = 1.0;
  memset(&dv1[13457], 0, 33U * sizeof(real_T));
  dv1[13490] = -1.0;
  memset(&dv1[13491], 0, 103U * sizeof(real_T));
  dv1[13594] = 1.0;
  memset(&dv1[13595], 0, 33U * sizeof(real_T));
  dv1[13628] = -1.0;
  memset(&dv1[13629], 0, 103U * sizeof(real_T));
  dv1[13732] = 1.0;
  memset(&dv1[13733], 0, 33U * sizeof(real_T));
  dv1[13766] = -1.0;
  memset(&dv1[13767], 0, 103U * sizeof(real_T));
  dv1[13870] = 1.0;
  memset(&dv1[13871], 0, 33U * sizeof(real_T));
  dv1[13904] = -1.0;
  memset(&dv1[13905], 0, 752U * sizeof(real_T));
  dv1[14657] = 1.0;
  memset(&dv1[14658], 0, 137U * sizeof(real_T));
  dv1[14795] = -1.0;
  memset(&dv1[14796], 0, 359U * sizeof(real_T));
  dv1[15155] = -1.0;
  memset(&dv1[15156], 0, sizeof(real_T) << 4);
  dv1[15172] = -1.0;
  memset(&dv1[15173], 0, 120U * sizeof(real_T));
  dv1[15293] = -1.0;
  memset(&dv1[15294], 0, sizeof(real_T) << 4);
  dv1[15310] = -1.0;
  memset(&dv1[15311], 0, 120U * sizeof(real_T));
  dv1[15431] = -1.0;
  memset(&dv1[15432], 0, sizeof(real_T) << 4);
  dv1[15448] = -1.0;
  memset(&dv1[15449], 0, 120U * sizeof(real_T));
  dv1[15569] = -1.0;
  memset(&dv1[15570], 0, sizeof(real_T) << 4);
  dv1[15586] = -1.0;
  memset(&dv1[15587], 0, 120U * sizeof(real_T));
  dv1[15707] = -1.0;
  memset(&dv1[15708], 0, sizeof(real_T) << 4);
  dv1[15724] = -1.0;
  memset(&dv1[15725], 0, 120U * sizeof(real_T));
  dv1[15845] = -1.0;
  memset(&dv1[15846], 0, sizeof(real_T) << 4);
  dv1[15862] = -1.0;
  memset(&dv1[15863], 0, 120U * sizeof(real_T));
  dv1[15983] = -1.0;
  memset(&dv1[15984], 0, sizeof(real_T) << 4);
  dv1[16000] = -1.0;
  memset(&dv1[16001], 0, 120U * sizeof(real_T));
  dv1[16121] = -1.0;
  memset(&dv1[16122], 0, sizeof(real_T) << 4);
  dv1[16138] = -1.0;
  memset(&dv1[16139], 0, 120U * sizeof(real_T));
  dv1[16259] = -1.0;
  memset(&dv1[16260], 0, sizeof(real_T) << 4);
  dv1[16276] = -1.0;
  memset(&dv1[16277], 0, 120U * sizeof(real_T));
  dv1[16397] = -1.0;
  memset(&dv1[16398], 0, sizeof(real_T) << 4);
  dv1[16414] = -1.0;
  memset(&dv1[16415], 0, 120U * sizeof(real_T));
  dv1[16535] = -1.0;
  memset(&dv1[16536], 0, sizeof(real_T) << 4);
  dv1[16552] = -1.0;
  memset(&dv1[16553], 0, 120U * sizeof(real_T));
  dv1[16673] = -1.0;
  memset(&dv1[16674], 0, sizeof(real_T) << 4);
  dv1[16690] = -1.0;
  memset(&dv1[16691], 0, 120U * sizeof(real_T));
  dv1[16811] = -1.0;
  memset(&dv1[16812], 0, sizeof(real_T) << 4);
  dv1[16828] = -1.0;
  memset(&dv1[16829], 0, 120U * sizeof(real_T));
  dv1[16949] = -1.0;
  memset(&dv1[16950], 0, sizeof(real_T) << 4);
  dv1[16966] = -1.0;
  memset(&dv1[16967], 0, 120U * sizeof(real_T));
  dv1[17087] = -1.0;
  memset(&dv1[17088], 0, sizeof(real_T) << 4);
  dv1[17104] = -1.0;
  memset(&dv1[17105], 0, 120U * sizeof(real_T));
  dv1[17225] = -1.0;
  memset(&dv1[17226], 0, sizeof(real_T) << 4);
  dv1[17242] = -1.0;
  memset(&dv1[17243], 0, 120U * sizeof(real_T));
  dv1[17363] = -1.0;
  memset(&dv1[17364], 0, sizeof(real_T) << 4);
  dv1[17380] = -1.0;
  memset(&dv1[17381], 0, 2466U * sizeof(real_T));
  dv1[19847] = -1.0;
  dv1[19848] = 0.0;
  dv1[19849] = 0.0;
  dv1[19850] = 0.0;
  dv1[19851] = -1.0;
  memset(&dv1[19852], 0, 133U * sizeof(real_T));
  dv1[19985] = -1.0;
  dv1[19986] = 0.0;
  dv1[19987] = 0.0;
  dv1[19988] = 0.0;
  dv1[19989] = -1.0;
  memset(&dv1[19990], 0, 133U * sizeof(real_T));
  dv1[20123] = -1.0;
  dv1[20124] = 0.0;
  dv1[20125] = 0.0;
  dv1[20126] = 0.0;
  dv1[20127] = -1.0;
  memset(&dv1[20128], 0, 133U * sizeof(real_T));
  dv1[20261] = -1.0;
  dv1[20262] = 0.0;
  dv1[20263] = 0.0;
  dv1[20264] = 0.0;
  dv1[20265] = -1.0;
  memset(&dv1[20266], 0, 137U * sizeof(real_T));
  dv1[20403] = -1.0;
  dv1[20404] = 0.0;
  dv1[20405] = 0.0;
  dv1[20406] = 0.0;
  dv1[20407] = -1.0;
  memset(&dv1[20408], 0, 133U * sizeof(real_T));
  dv1[20541] = -1.0;
  dv1[20542] = 0.0;
  dv1[20543] = 0.0;
  dv1[20544] = 0.0;
  dv1[20545] = -1.0;
  memset(&dv1[20546], 0, 133U * sizeof(real_T));
  dv1[20679] = -1.0;
  dv1[20680] = 0.0;
  dv1[20681] = 0.0;
  dv1[20682] = 0.0;
  dv1[20683] = -1.0;
  memset(&dv1[20684], 0, 133U * sizeof(real_T));
  dv1[20817] = -1.0;
  dv1[20818] = 0.0;
  dv1[20819] = 0.0;
  dv1[20820] = 0.0;
  dv1[20821] = -1.0;
  memset(&dv1[20822], 0, 1098U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 137], &dv1[i1 * 137], 137U * sizeof(real_T));
  }

  t7 = muDoubleScalarAbs(in11[2]);
  t3 = muDoubleScalarAbs(in11[3]);
  t7 = 1.0 / muDoubleScalarSqrt(t7 * t7 + t3 * t3);
  t3 = Cpx1 + in8[0];
  t9 = -Cpx1 + in8[0];
  t10 = Cpy1 + in9[0];
  t11 = -Cpy1 + in9[0];
  biq[0] = in10[0];
  biq[1] = in10[0];
  biq[2] = in10[0];
  biq[3] = in10[0];
  biq[4] = in10[0];
  biq[5] = in10[0];
  biq[6] = in10[0];
  biq[7] = in10[0];
  biq[8] = in10[0];
  biq[9] = in10[0];
  biq[10] = in10[0];
  biq[11] = in10[0];
  biq[12] = in10[0];
  biq[13] = in10[0];
  biq[14] = in10[0];
  biq[15] = in10[0];
  biq[16] = in10[0];
  biq[17] = in10[1];
  biq[18] = in10[1];
  biq[19] = in10[1];
  biq[20] = in10[1];
  biq[21] = in10[1];
  biq[22] = in10[1];
  biq[23] = in10[1];
  biq[24] = in10[1];
  biq[25] = in10[1];
  biq[26] = in10[1];
  biq[27] = in10[1];
  biq[28] = in10[1];
  biq[29] = in10[1];
  biq[30] = in10[1];
  biq[31] = in10[1];
  biq[32] = in10[1];
  biq[33] = in10[1];
  biq[34] = in10[0];
  biq[35] = in10[0];
  biq[36] = in10[0];
  biq[37] = in10[0];
  biq[38] = in10[0];
  biq[39] = in10[0];
  biq[40] = in10[0];
  biq[41] = in10[0];
  biq[42] = in10[0];
  biq[43] = in10[0];
  biq[44] = in10[0];
  biq[45] = in10[0];
  biq[46] = in10[0];
  biq[47] = in10[0];
  biq[48] = in10[0];
  biq[49] = in10[0];
  biq[50] = in10[0];
  biq[51] = in10[1];
  biq[52] = in10[1];
  biq[53] = in10[1];
  biq[54] = in10[1];
  biq[55] = in10[1];
  biq[56] = in10[1];
  biq[57] = in10[1];
  biq[58] = in10[1];
  biq[59] = in10[1];
  biq[60] = in10[1];
  biq[61] = in10[1];
  biq[62] = in10[1];
  biq[63] = in10[1];
  biq[64] = in10[1];
  biq[65] = in10[1];
  biq[66] = in10[1];
  biq[67] = in10[1];
  biq[68] = -in11[2] * (in11[0] + in11[2] * in4->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in4->data[0] * t7);
  biq[69] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0]] * t7);
  biq[70] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 1] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 1] * t7);
  biq[71] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 3] * t7);
  biq[72] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 2] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 2] * t7);
  biq[73] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 5] * t7);
  biq[74] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 6] * t7);
  biq[75] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 7] * t7);
  biq[76] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 3] * t7);
  biq[77] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 9] * t7);
  biq[78] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 10] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 10] * t7);
  biq[79] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 11] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 11] * t7);
  biq[80] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 12] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 12] * t7);
  biq[81] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 13] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 13] * t7);
  biq[82] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 14] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 14] * t7);
  biq[83] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 15] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 15] * t7);
  biq[84] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 4] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 4] * t7);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = -in11[2] * (in11[0] + in11[2] * in5->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in5->data[0] * t7);
  biq[103] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0]] * t7);
  biq[104] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 1] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 1] * t7);
  biq[105] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 3] * t7);
  biq[106] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 2] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 2] * t7);
  biq[107] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 5] * t7);
  biq[108] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 6] * t7);
  biq[109] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 7] * t7);
  biq[110] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 3] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 3] * t7);
  biq[111] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 9] * t7);
  biq[112] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 10] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 10] * t7);
  biq[113] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 11] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 11] * t7);
  biq[114] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 12] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 12] * t7);
  biq[115] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 13] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 13] * t7);
  biq[116] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 14] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 14] * t7);
  biq[117] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 15] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 15] * t7);
  biq[118] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 4] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 4] * t7);
  biq[119] = t3;
  biq[120] = t3;
  biq[121] = t3;
  biq[122] = t3;
  biq[123] = t9;
  biq[124] = t9;
  biq[125] = t9;
  biq[126] = t9;
  biq[127] = t10;
  biq[128] = t10;
  biq[129] = t10;
  biq[130] = t10;
  biq[131] = t11;
  biq[132] = t11;
  biq[133] = t11;
  biq[134] = t11;
  biq[135] = -in9[1];
  biq[136] = -in9[1];
}

/* End of code generation (IqFast_LeftStart0V12.cpp) */
