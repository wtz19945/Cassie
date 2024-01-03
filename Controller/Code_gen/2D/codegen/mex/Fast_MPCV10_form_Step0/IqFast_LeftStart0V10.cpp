/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart0V10.cpp
 *
 * Code generation for function 'IqFast_LeftStart0V10'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV10_form_Step0.h"
#include "IqFast_LeftStart0V10.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V10.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart0V10(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [21760], real_T biq[136])
{
  int32_T i1;
  real_T dv1[21760];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART0V10 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART0V10(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     24-Jul-2023 18:57:18 */
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
  memset(&dv1[103], 0, 170U * sizeof(real_T));
  dv1[273] = -1.0;
  memset(&dv1[274], 0, 33U * sizeof(real_T));
  dv1[307] = 1.0;
  memset(&dv1[308], 0, 33U * sizeof(real_T));
  dv1[341] = -in11[2];
  memset(&dv1[342], 0, 33U * sizeof(real_T));
  dv1[375] = -in11[2];
  memset(&dv1[376], 0, 170U * sizeof(real_T));
  dv1[546] = -1.0;
  memset(&dv1[547], 0, 33U * sizeof(real_T));
  dv1[580] = 1.0;
  memset(&dv1[581], 0, 33U * sizeof(real_T));
  dv1[614] = -in11[2];
  memset(&dv1[615], 0, 33U * sizeof(real_T));
  dv1[648] = -in11[2];
  memset(&dv1[649], 0, 170U * sizeof(real_T));
  dv1[819] = -1.0;
  memset(&dv1[820], 0, 33U * sizeof(real_T));
  dv1[853] = 1.0;
  memset(&dv1[854], 0, 33U * sizeof(real_T));
  dv1[887] = -in11[2];
  memset(&dv1[888], 0, 33U * sizeof(real_T));
  dv1[921] = -in11[2];
  memset(&dv1[922], 0, 170U * sizeof(real_T));
  dv1[1092] = -1.0;
  memset(&dv1[1093], 0, 33U * sizeof(real_T));
  dv1[1126] = 1.0;
  memset(&dv1[1127], 0, 33U * sizeof(real_T));
  dv1[1160] = -in11[2];
  memset(&dv1[1161], 0, 33U * sizeof(real_T));
  dv1[1194] = -in11[2];
  memset(&dv1[1195], 0, 170U * sizeof(real_T));
  dv1[1365] = -1.0;
  memset(&dv1[1366], 0, 33U * sizeof(real_T));
  dv1[1399] = 1.0;
  memset(&dv1[1400], 0, 33U * sizeof(real_T));
  dv1[1433] = -in11[2];
  memset(&dv1[1434], 0, 33U * sizeof(real_T));
  dv1[1467] = -in11[2];
  memset(&dv1[1468], 0, 170U * sizeof(real_T));
  dv1[1638] = -1.0;
  memset(&dv1[1639], 0, 33U * sizeof(real_T));
  dv1[1672] = 1.0;
  memset(&dv1[1673], 0, 33U * sizeof(real_T));
  dv1[1706] = -in11[2];
  memset(&dv1[1707], 0, 33U * sizeof(real_T));
  dv1[1740] = -in11[2];
  memset(&dv1[1741], 0, 170U * sizeof(real_T));
  dv1[1911] = -1.0;
  memset(&dv1[1912], 0, 33U * sizeof(real_T));
  dv1[1945] = 1.0;
  memset(&dv1[1946], 0, 33U * sizeof(real_T));
  dv1[1979] = -in11[2];
  memset(&dv1[1980], 0, 33U * sizeof(real_T));
  dv1[2013] = -in11[2];
  memset(&dv1[2014], 0, 170U * sizeof(real_T));
  dv1[2184] = -1.0;
  memset(&dv1[2185], 0, 33U * sizeof(real_T));
  dv1[2218] = 1.0;
  memset(&dv1[2219], 0, 33U * sizeof(real_T));
  dv1[2252] = -in11[2];
  memset(&dv1[2253], 0, 33U * sizeof(real_T));
  dv1[2286] = -in11[2];
  memset(&dv1[2287], 0, 170U * sizeof(real_T));
  dv1[2457] = -1.0;
  memset(&dv1[2458], 0, 33U * sizeof(real_T));
  dv1[2491] = 1.0;
  memset(&dv1[2492], 0, 33U * sizeof(real_T));
  dv1[2525] = -in11[2];
  memset(&dv1[2526], 0, 33U * sizeof(real_T));
  dv1[2559] = -in11[2];
  memset(&dv1[2560], 0, 170U * sizeof(real_T));
  dv1[2730] = -1.0;
  memset(&dv1[2731], 0, 33U * sizeof(real_T));
  dv1[2764] = 1.0;
  memset(&dv1[2765], 0, 33U * sizeof(real_T));
  dv1[2798] = -in11[2];
  memset(&dv1[2799], 0, 33U * sizeof(real_T));
  dv1[2832] = -in11[2];
  memset(&dv1[2833], 0, 170U * sizeof(real_T));
  dv1[3003] = -1.0;
  memset(&dv1[3004], 0, 33U * sizeof(real_T));
  dv1[3037] = 1.0;
  memset(&dv1[3038], 0, 33U * sizeof(real_T));
  dv1[3071] = -in11[2];
  memset(&dv1[3072], 0, 33U * sizeof(real_T));
  dv1[3105] = -in11[2];
  memset(&dv1[3106], 0, 170U * sizeof(real_T));
  dv1[3276] = -1.0;
  memset(&dv1[3277], 0, 33U * sizeof(real_T));
  dv1[3310] = 1.0;
  memset(&dv1[3311], 0, 33U * sizeof(real_T));
  dv1[3344] = -in11[2];
  memset(&dv1[3345], 0, 33U * sizeof(real_T));
  dv1[3378] = -in11[2];
  memset(&dv1[3379], 0, 170U * sizeof(real_T));
  dv1[3549] = -1.0;
  memset(&dv1[3550], 0, 33U * sizeof(real_T));
  dv1[3583] = 1.0;
  memset(&dv1[3584], 0, 33U * sizeof(real_T));
  dv1[3617] = -in11[2];
  memset(&dv1[3618], 0, 33U * sizeof(real_T));
  dv1[3651] = -in11[2];
  memset(&dv1[3652], 0, 170U * sizeof(real_T));
  dv1[3822] = -1.0;
  memset(&dv1[3823], 0, 33U * sizeof(real_T));
  dv1[3856] = 1.0;
  memset(&dv1[3857], 0, 33U * sizeof(real_T));
  dv1[3890] = -in11[2];
  memset(&dv1[3891], 0, 33U * sizeof(real_T));
  dv1[3924] = -in11[2];
  memset(&dv1[3925], 0, 170U * sizeof(real_T));
  dv1[4095] = -1.0;
  memset(&dv1[4096], 0, 33U * sizeof(real_T));
  dv1[4129] = 1.0;
  memset(&dv1[4130], 0, 33U * sizeof(real_T));
  dv1[4163] = -in11[2];
  memset(&dv1[4164], 0, 33U * sizeof(real_T));
  dv1[4197] = -in11[2];
  memset(&dv1[4198], 0, 170U * sizeof(real_T));
  dv1[4368] = -1.0;
  memset(&dv1[4369], 0, 33U * sizeof(real_T));
  dv1[4402] = 1.0;
  memset(&dv1[4403], 0, 33U * sizeof(real_T));
  dv1[4436] = -in11[2];
  memset(&dv1[4437], 0, 33U * sizeof(real_T));
  dv1[4470] = -in11[2];
  memset(&dv1[4471], 0, 170U * sizeof(real_T));
  dv1[4641] = -1.0;
  memset(&dv1[4642], 0, 33U * sizeof(real_T));
  dv1[4675] = 1.0;
  memset(&dv1[4676], 0, sizeof(real_T) << 4);
  dv1[4692] = -in11[3];
  memset(&dv1[4693], 0, 33U * sizeof(real_T));
  dv1[4726] = -in11[3];
  memset(&dv1[4727], 0, 187U * sizeof(real_T));
  dv1[4914] = -1.0;
  memset(&dv1[4915], 0, 33U * sizeof(real_T));
  dv1[4948] = 1.0;
  memset(&dv1[4949], 0, sizeof(real_T) << 4);
  dv1[4965] = -in11[3];
  memset(&dv1[4966], 0, 33U * sizeof(real_T));
  dv1[4999] = -in11[3];
  memset(&dv1[5000], 0, 187U * sizeof(real_T));
  dv1[5187] = -1.0;
  memset(&dv1[5188], 0, 33U * sizeof(real_T));
  dv1[5221] = 1.0;
  memset(&dv1[5222], 0, sizeof(real_T) << 4);
  dv1[5238] = -in11[3];
  memset(&dv1[5239], 0, 33U * sizeof(real_T));
  dv1[5272] = -in11[3];
  memset(&dv1[5273], 0, 187U * sizeof(real_T));
  dv1[5460] = -1.0;
  memset(&dv1[5461], 0, 33U * sizeof(real_T));
  dv1[5494] = 1.0;
  memset(&dv1[5495], 0, sizeof(real_T) << 4);
  dv1[5511] = -in11[3];
  memset(&dv1[5512], 0, 33U * sizeof(real_T));
  dv1[5545] = -in11[3];
  memset(&dv1[5546], 0, 187U * sizeof(real_T));
  dv1[5733] = -1.0;
  memset(&dv1[5734], 0, 33U * sizeof(real_T));
  dv1[5767] = 1.0;
  memset(&dv1[5768], 0, sizeof(real_T) << 4);
  dv1[5784] = -in11[3];
  memset(&dv1[5785], 0, 33U * sizeof(real_T));
  dv1[5818] = -in11[3];
  memset(&dv1[5819], 0, 187U * sizeof(real_T));
  dv1[6006] = -1.0;
  memset(&dv1[6007], 0, 33U * sizeof(real_T));
  dv1[6040] = 1.0;
  memset(&dv1[6041], 0, sizeof(real_T) << 4);
  dv1[6057] = -in11[3];
  memset(&dv1[6058], 0, 33U * sizeof(real_T));
  dv1[6091] = -in11[3];
  memset(&dv1[6092], 0, 187U * sizeof(real_T));
  dv1[6279] = -1.0;
  memset(&dv1[6280], 0, 33U * sizeof(real_T));
  dv1[6313] = 1.0;
  memset(&dv1[6314], 0, sizeof(real_T) << 4);
  dv1[6330] = -in11[3];
  memset(&dv1[6331], 0, 33U * sizeof(real_T));
  dv1[6364] = -in11[3];
  memset(&dv1[6365], 0, 187U * sizeof(real_T));
  dv1[6552] = -1.0;
  memset(&dv1[6553], 0, 33U * sizeof(real_T));
  dv1[6586] = 1.0;
  memset(&dv1[6587], 0, sizeof(real_T) << 4);
  dv1[6603] = -in11[3];
  memset(&dv1[6604], 0, 33U * sizeof(real_T));
  dv1[6637] = -in11[3];
  memset(&dv1[6638], 0, 187U * sizeof(real_T));
  dv1[6825] = -1.0;
  memset(&dv1[6826], 0, 33U * sizeof(real_T));
  dv1[6859] = 1.0;
  memset(&dv1[6860], 0, sizeof(real_T) << 4);
  dv1[6876] = -in11[3];
  memset(&dv1[6877], 0, 33U * sizeof(real_T));
  dv1[6910] = -in11[3];
  memset(&dv1[6911], 0, 187U * sizeof(real_T));
  dv1[7098] = -1.0;
  memset(&dv1[7099], 0, 33U * sizeof(real_T));
  dv1[7132] = 1.0;
  memset(&dv1[7133], 0, sizeof(real_T) << 4);
  dv1[7149] = -in11[3];
  memset(&dv1[7150], 0, 33U * sizeof(real_T));
  dv1[7183] = -in11[3];
  memset(&dv1[7184], 0, 187U * sizeof(real_T));
  dv1[7371] = -1.0;
  memset(&dv1[7372], 0, 33U * sizeof(real_T));
  dv1[7405] = 1.0;
  memset(&dv1[7406], 0, sizeof(real_T) << 4);
  dv1[7422] = -in11[3];
  memset(&dv1[7423], 0, 33U * sizeof(real_T));
  dv1[7456] = -in11[3];
  memset(&dv1[7457], 0, 187U * sizeof(real_T));
  dv1[7644] = -1.0;
  memset(&dv1[7645], 0, 33U * sizeof(real_T));
  dv1[7678] = 1.0;
  memset(&dv1[7679], 0, sizeof(real_T) << 4);
  dv1[7695] = -in11[3];
  memset(&dv1[7696], 0, 33U * sizeof(real_T));
  dv1[7729] = -in11[3];
  memset(&dv1[7730], 0, 187U * sizeof(real_T));
  dv1[7917] = -1.0;
  memset(&dv1[7918], 0, 33U * sizeof(real_T));
  dv1[7951] = 1.0;
  memset(&dv1[7952], 0, sizeof(real_T) << 4);
  dv1[7968] = -in11[3];
  memset(&dv1[7969], 0, 33U * sizeof(real_T));
  dv1[8002] = -in11[3];
  memset(&dv1[8003], 0, 187U * sizeof(real_T));
  dv1[8190] = -1.0;
  memset(&dv1[8191], 0, 33U * sizeof(real_T));
  dv1[8224] = 1.0;
  memset(&dv1[8225], 0, sizeof(real_T) << 4);
  dv1[8241] = -in11[3];
  memset(&dv1[8242], 0, 33U * sizeof(real_T));
  dv1[8275] = -in11[3];
  memset(&dv1[8276], 0, 187U * sizeof(real_T));
  dv1[8463] = -1.0;
  memset(&dv1[8464], 0, 33U * sizeof(real_T));
  dv1[8497] = 1.0;
  memset(&dv1[8498], 0, sizeof(real_T) << 4);
  dv1[8514] = -in11[3];
  memset(&dv1[8515], 0, 33U * sizeof(real_T));
  dv1[8548] = -in11[3];
  memset(&dv1[8549], 0, 187U * sizeof(real_T));
  dv1[8736] = -1.0;
  memset(&dv1[8737], 0, 33U * sizeof(real_T));
  dv1[8770] = 1.0;
  memset(&dv1[8771], 0, sizeof(real_T) << 4);
  dv1[8787] = -in11[3];
  memset(&dv1[8788], 0, 33U * sizeof(real_T));
  dv1[8821] = -in11[3];
  memset(&dv1[8822], 0, 187U * sizeof(real_T));
  dv1[9009] = -1.0;
  memset(&dv1[9010], 0, 33U * sizeof(real_T));
  dv1[9043] = 1.0;
  memset(&dv1[9044], 0, sizeof(real_T) << 4);
  dv1[9060] = -in11[3];
  memset(&dv1[9061], 0, 33U * sizeof(real_T));
  dv1[9094] = -in11[3];
  memset(&dv1[9095], 0, 153U * sizeof(real_T));
  dv1[9248] = 1.0;
  memset(&dv1[9249], 0, 33U * sizeof(real_T));
  dv1[9282] = -1.0;
  memset(&dv1[9283], 0, 84U * sizeof(real_T));
  dv1[9367] = 1.0;
  dv1[9368] = 0.0;
  dv1[9369] = 0.0;
  dv1[9370] = 0.0;
  dv1[9371] = -1.0;
  memset(&dv1[9372], 0, 13U * sizeof(real_T));
  dv1[9385] = 1.0;
  memset(&dv1[9386], 0, 33U * sizeof(real_T));
  dv1[9419] = -1.0;
  memset(&dv1[9420], 0, 84U * sizeof(real_T));
  dv1[9504] = 1.0;
  dv1[9505] = 0.0;
  dv1[9506] = 0.0;
  dv1[9507] = 0.0;
  dv1[9508] = -1.0;
  memset(&dv1[9509], 0, 13U * sizeof(real_T));
  dv1[9522] = 1.0;
  memset(&dv1[9523], 0, 33U * sizeof(real_T));
  dv1[9556] = -1.0;
  memset(&dv1[9557], 0, 84U * sizeof(real_T));
  dv1[9641] = 1.0;
  dv1[9642] = 0.0;
  dv1[9643] = 0.0;
  dv1[9644] = 0.0;
  dv1[9645] = -1.0;
  memset(&dv1[9646], 0, 13U * sizeof(real_T));
  dv1[9659] = 1.0;
  memset(&dv1[9660], 0, 33U * sizeof(real_T));
  dv1[9693] = -1.0;
  memset(&dv1[9694], 0, 84U * sizeof(real_T));
  dv1[9778] = 1.0;
  dv1[9779] = 0.0;
  dv1[9780] = 0.0;
  dv1[9781] = 0.0;
  dv1[9782] = -1.0;
  memset(&dv1[9783], 0, 13U * sizeof(real_T));
  dv1[9796] = 1.0;
  memset(&dv1[9797], 0, 33U * sizeof(real_T));
  dv1[9830] = -1.0;
  memset(&dv1[9831], 0, 102U * sizeof(real_T));
  dv1[9933] = 1.0;
  memset(&dv1[9934], 0, 33U * sizeof(real_T));
  dv1[9967] = -1.0;
  memset(&dv1[9968], 0, 102U * sizeof(real_T));
  dv1[10070] = 1.0;
  memset(&dv1[10071], 0, 33U * sizeof(real_T));
  dv1[10104] = -1.0;
  memset(&dv1[10105], 0, 102U * sizeof(real_T));
  dv1[10207] = 1.0;
  memset(&dv1[10208], 0, 33U * sizeof(real_T));
  dv1[10241] = -1.0;
  memset(&dv1[10242], 0, 102U * sizeof(real_T));
  dv1[10344] = 1.0;
  memset(&dv1[10345], 0, 33U * sizeof(real_T));
  dv1[10378] = -1.0;
  memset(&dv1[10379], 0, 102U * sizeof(real_T));
  dv1[10481] = 1.0;
  memset(&dv1[10482], 0, 33U * sizeof(real_T));
  dv1[10515] = -1.0;
  memset(&dv1[10516], 0, 102U * sizeof(real_T));
  dv1[10618] = 1.0;
  memset(&dv1[10619], 0, 33U * sizeof(real_T));
  dv1[10652] = -1.0;
  memset(&dv1[10653], 0, 102U * sizeof(real_T));
  dv1[10755] = 1.0;
  memset(&dv1[10756], 0, 33U * sizeof(real_T));
  dv1[10789] = -1.0;
  memset(&dv1[10790], 0, 102U * sizeof(real_T));
  dv1[10892] = 1.0;
  memset(&dv1[10893], 0, 33U * sizeof(real_T));
  dv1[10926] = -1.0;
  memset(&dv1[10927], 0, 102U * sizeof(real_T));
  dv1[11029] = 1.0;
  memset(&dv1[11030], 0, 33U * sizeof(real_T));
  dv1[11063] = -1.0;
  memset(&dv1[11064], 0, 102U * sizeof(real_T));
  dv1[11166] = 1.0;
  memset(&dv1[11167], 0, 33U * sizeof(real_T));
  dv1[11200] = -1.0;
  memset(&dv1[11201], 0, 102U * sizeof(real_T));
  dv1[11303] = 1.0;
  memset(&dv1[11304], 0, 33U * sizeof(real_T));
  dv1[11337] = -1.0;
  memset(&dv1[11338], 0, 102U * sizeof(real_T));
  dv1[11440] = 1.0;
  memset(&dv1[11441], 0, 33U * sizeof(real_T));
  dv1[11474] = -1.0;
  memset(&dv1[11475], 0, 102U * sizeof(real_T));
  dv1[11577] = 1.0;
  memset(&dv1[11578], 0, 33U * sizeof(real_T));
  dv1[11611] = -1.0;
  memset(&dv1[11612], 0, 75U * sizeof(real_T));
  dv1[11687] = 1.0;
  dv1[11688] = 0.0;
  dv1[11689] = 0.0;
  dv1[11690] = 0.0;
  dv1[11691] = -1.0;
  memset(&dv1[11692], 0, 22U * sizeof(real_T));
  dv1[11714] = 1.0;
  memset(&dv1[11715], 0, 33U * sizeof(real_T));
  dv1[11748] = -1.0;
  memset(&dv1[11749], 0, 75U * sizeof(real_T));
  dv1[11824] = 1.0;
  dv1[11825] = 0.0;
  dv1[11826] = 0.0;
  dv1[11827] = 0.0;
  dv1[11828] = -1.0;
  memset(&dv1[11829], 0, 22U * sizeof(real_T));
  dv1[11851] = 1.0;
  memset(&dv1[11852], 0, 33U * sizeof(real_T));
  dv1[11885] = -1.0;
  memset(&dv1[11886], 0, 75U * sizeof(real_T));
  dv1[11961] = 1.0;
  dv1[11962] = 0.0;
  dv1[11963] = 0.0;
  dv1[11964] = 0.0;
  dv1[11965] = -1.0;
  memset(&dv1[11966], 0, 22U * sizeof(real_T));
  dv1[11988] = 1.0;
  memset(&dv1[11989], 0, 33U * sizeof(real_T));
  dv1[12022] = -1.0;
  memset(&dv1[12023], 0, 75U * sizeof(real_T));
  dv1[12098] = 1.0;
  dv1[12099] = 0.0;
  dv1[12100] = 0.0;
  dv1[12101] = 0.0;
  dv1[12102] = -1.0;
  memset(&dv1[12103], 0, 22U * sizeof(real_T));
  dv1[12125] = 1.0;
  memset(&dv1[12126], 0, 33U * sizeof(real_T));
  dv1[12159] = -1.0;
  memset(&dv1[12160], 0, 102U * sizeof(real_T));
  dv1[12262] = 1.0;
  memset(&dv1[12263], 0, 33U * sizeof(real_T));
  dv1[12296] = -1.0;
  memset(&dv1[12297], 0, 102U * sizeof(real_T));
  dv1[12399] = 1.0;
  memset(&dv1[12400], 0, 33U * sizeof(real_T));
  dv1[12433] = -1.0;
  memset(&dv1[12434], 0, 102U * sizeof(real_T));
  dv1[12536] = 1.0;
  memset(&dv1[12537], 0, 33U * sizeof(real_T));
  dv1[12570] = -1.0;
  memset(&dv1[12571], 0, 102U * sizeof(real_T));
  dv1[12673] = 1.0;
  memset(&dv1[12674], 0, 33U * sizeof(real_T));
  dv1[12707] = -1.0;
  memset(&dv1[12708], 0, 102U * sizeof(real_T));
  dv1[12810] = 1.0;
  memset(&dv1[12811], 0, 33U * sizeof(real_T));
  dv1[12844] = -1.0;
  memset(&dv1[12845], 0, 102U * sizeof(real_T));
  dv1[12947] = 1.0;
  memset(&dv1[12948], 0, 33U * sizeof(real_T));
  dv1[12981] = -1.0;
  memset(&dv1[12982], 0, 102U * sizeof(real_T));
  dv1[13084] = 1.0;
  memset(&dv1[13085], 0, 33U * sizeof(real_T));
  dv1[13118] = -1.0;
  memset(&dv1[13119], 0, 102U * sizeof(real_T));
  dv1[13221] = 1.0;
  memset(&dv1[13222], 0, 33U * sizeof(real_T));
  dv1[13255] = -1.0;
  memset(&dv1[13256], 0, 102U * sizeof(real_T));
  dv1[13358] = 1.0;
  memset(&dv1[13359], 0, 33U * sizeof(real_T));
  dv1[13392] = -1.0;
  memset(&dv1[13393], 0, 102U * sizeof(real_T));
  dv1[13495] = 1.0;
  memset(&dv1[13496], 0, 33U * sizeof(real_T));
  dv1[13529] = -1.0;
  memset(&dv1[13530], 0, 102U * sizeof(real_T));
  dv1[13632] = 1.0;
  memset(&dv1[13633], 0, 33U * sizeof(real_T));
  dv1[13666] = -1.0;
  memset(&dv1[13667], 0, 102U * sizeof(real_T));
  dv1[13769] = 1.0;
  memset(&dv1[13770], 0, 33U * sizeof(real_T));
  dv1[13803] = -1.0;
  memset(&dv1[13804], 0, 747U * sizeof(real_T));
  dv1[14551] = 1.0;
  memset(&dv1[14552], 0, 493U * sizeof(real_T));
  dv1[15045] = -1.0;
  memset(&dv1[15046], 0, sizeof(real_T) << 4);
  dv1[15062] = -1.0;
  memset(&dv1[15063], 0, 119U * sizeof(real_T));
  dv1[15182] = -1.0;
  memset(&dv1[15183], 0, sizeof(real_T) << 4);
  dv1[15199] = -1.0;
  memset(&dv1[15200], 0, 119U * sizeof(real_T));
  dv1[15319] = -1.0;
  memset(&dv1[15320], 0, sizeof(real_T) << 4);
  dv1[15336] = -1.0;
  memset(&dv1[15337], 0, 119U * sizeof(real_T));
  dv1[15456] = -1.0;
  memset(&dv1[15457], 0, sizeof(real_T) << 4);
  dv1[15473] = -1.0;
  memset(&dv1[15474], 0, 119U * sizeof(real_T));
  dv1[15593] = -1.0;
  memset(&dv1[15594], 0, sizeof(real_T) << 4);
  dv1[15610] = -1.0;
  memset(&dv1[15611], 0, 119U * sizeof(real_T));
  dv1[15730] = -1.0;
  memset(&dv1[15731], 0, sizeof(real_T) << 4);
  dv1[15747] = -1.0;
  memset(&dv1[15748], 0, 119U * sizeof(real_T));
  dv1[15867] = -1.0;
  memset(&dv1[15868], 0, sizeof(real_T) << 4);
  dv1[15884] = -1.0;
  memset(&dv1[15885], 0, 119U * sizeof(real_T));
  dv1[16004] = -1.0;
  memset(&dv1[16005], 0, sizeof(real_T) << 4);
  dv1[16021] = -1.0;
  memset(&dv1[16022], 0, 119U * sizeof(real_T));
  dv1[16141] = -1.0;
  memset(&dv1[16142], 0, sizeof(real_T) << 4);
  dv1[16158] = -1.0;
  memset(&dv1[16159], 0, 119U * sizeof(real_T));
  dv1[16278] = -1.0;
  memset(&dv1[16279], 0, sizeof(real_T) << 4);
  dv1[16295] = -1.0;
  memset(&dv1[16296], 0, 119U * sizeof(real_T));
  dv1[16415] = -1.0;
  memset(&dv1[16416], 0, sizeof(real_T) << 4);
  dv1[16432] = -1.0;
  memset(&dv1[16433], 0, 119U * sizeof(real_T));
  dv1[16552] = -1.0;
  memset(&dv1[16553], 0, sizeof(real_T) << 4);
  dv1[16569] = -1.0;
  memset(&dv1[16570], 0, 119U * sizeof(real_T));
  dv1[16689] = -1.0;
  memset(&dv1[16690], 0, sizeof(real_T) << 4);
  dv1[16706] = -1.0;
  memset(&dv1[16707], 0, 119U * sizeof(real_T));
  dv1[16826] = -1.0;
  memset(&dv1[16827], 0, sizeof(real_T) << 4);
  dv1[16843] = -1.0;
  memset(&dv1[16844], 0, 119U * sizeof(real_T));
  dv1[16963] = -1.0;
  memset(&dv1[16964], 0, sizeof(real_T) << 4);
  dv1[16980] = -1.0;
  memset(&dv1[16981], 0, 119U * sizeof(real_T));
  dv1[17100] = -1.0;
  memset(&dv1[17101], 0, sizeof(real_T) << 4);
  dv1[17117] = -1.0;
  memset(&dv1[17118], 0, 119U * sizeof(real_T));
  dv1[17237] = -1.0;
  memset(&dv1[17238], 0, sizeof(real_T) << 4);
  dv1[17254] = -1.0;
  memset(&dv1[17255], 0, 152U * sizeof(real_T));
  dv1[17407] = -1.0;
  memset(&dv1[17408], 0, 2295U * sizeof(real_T));
  dv1[19703] = -1.0;
  dv1[19704] = 0.0;
  dv1[19705] = 0.0;
  dv1[19706] = 0.0;
  dv1[19707] = -1.0;
  memset(&dv1[19708], 0, 132U * sizeof(real_T));
  dv1[19840] = -1.0;
  dv1[19841] = 0.0;
  dv1[19842] = 0.0;
  dv1[19843] = 0.0;
  dv1[19844] = -1.0;
  memset(&dv1[19845], 0, 132U * sizeof(real_T));
  dv1[19977] = -1.0;
  dv1[19978] = 0.0;
  dv1[19979] = 0.0;
  dv1[19980] = 0.0;
  dv1[19981] = -1.0;
  memset(&dv1[19982], 0, 132U * sizeof(real_T));
  dv1[20114] = -1.0;
  dv1[20115] = 0.0;
  dv1[20116] = 0.0;
  dv1[20117] = 0.0;
  dv1[20118] = -1.0;
  memset(&dv1[20119], 0, 136U * sizeof(real_T));
  dv1[20255] = -1.0;
  dv1[20256] = 0.0;
  dv1[20257] = 0.0;
  dv1[20258] = 0.0;
  dv1[20259] = -1.0;
  memset(&dv1[20260], 0, 132U * sizeof(real_T));
  dv1[20392] = -1.0;
  dv1[20393] = 0.0;
  dv1[20394] = 0.0;
  dv1[20395] = 0.0;
  dv1[20396] = -1.0;
  memset(&dv1[20397], 0, 132U * sizeof(real_T));
  dv1[20529] = -1.0;
  dv1[20530] = 0.0;
  dv1[20531] = 0.0;
  dv1[20532] = 0.0;
  dv1[20533] = -1.0;
  memset(&dv1[20534], 0, 132U * sizeof(real_T));
  dv1[20666] = -1.0;
  dv1[20667] = 0.0;
  dv1[20668] = 0.0;
  dv1[20669] = 0.0;
  dv1[20670] = -1.0;
  memset(&dv1[20671], 0, 1089U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 136], &dv1[i1 * 136], 136U * sizeof(real_T));
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
}

/* End of code generation (IqFast_LeftStart0V10.cpp) */
