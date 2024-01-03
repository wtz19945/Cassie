/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart1V10.cpp
 *
 * Code generation for function 'IqFast_LeftStart1V10'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV10_form_Step1.h"
#include "IqFast_LeftStart1V10.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V10.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart1V10(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [21120], real_T biq[132])
{
  int32_T i1;
  real_T dv1[21120];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART1V10 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART1V10(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     24-Jul-2023 18:59:49 */
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
  memset(&dv1[103], 0, 162U * sizeof(real_T));
  dv1[265] = -1.0;
  memset(&dv1[266], 0, 33U * sizeof(real_T));
  dv1[299] = 1.0;
  memset(&dv1[300], 0, 33U * sizeof(real_T));
  dv1[333] = -in11[2];
  memset(&dv1[334], 0, 33U * sizeof(real_T));
  dv1[367] = -in11[2];
  memset(&dv1[368], 0, 162U * sizeof(real_T));
  dv1[530] = -1.0;
  memset(&dv1[531], 0, 33U * sizeof(real_T));
  dv1[564] = 1.0;
  memset(&dv1[565], 0, 33U * sizeof(real_T));
  dv1[598] = -in11[2];
  memset(&dv1[599], 0, 33U * sizeof(real_T));
  dv1[632] = -in11[2];
  memset(&dv1[633], 0, 162U * sizeof(real_T));
  dv1[795] = -1.0;
  memset(&dv1[796], 0, 33U * sizeof(real_T));
  dv1[829] = 1.0;
  memset(&dv1[830], 0, 33U * sizeof(real_T));
  dv1[863] = -in11[2];
  memset(&dv1[864], 0, 33U * sizeof(real_T));
  dv1[897] = -in11[2];
  memset(&dv1[898], 0, 162U * sizeof(real_T));
  dv1[1060] = -1.0;
  memset(&dv1[1061], 0, 33U * sizeof(real_T));
  dv1[1094] = 1.0;
  memset(&dv1[1095], 0, 33U * sizeof(real_T));
  dv1[1128] = -in11[2];
  memset(&dv1[1129], 0, 33U * sizeof(real_T));
  dv1[1162] = -in11[2];
  memset(&dv1[1163], 0, 162U * sizeof(real_T));
  dv1[1325] = -1.0;
  memset(&dv1[1326], 0, 33U * sizeof(real_T));
  dv1[1359] = 1.0;
  memset(&dv1[1360], 0, 33U * sizeof(real_T));
  dv1[1393] = -in11[2];
  memset(&dv1[1394], 0, 33U * sizeof(real_T));
  dv1[1427] = -in11[2];
  memset(&dv1[1428], 0, 162U * sizeof(real_T));
  dv1[1590] = -1.0;
  memset(&dv1[1591], 0, 33U * sizeof(real_T));
  dv1[1624] = 1.0;
  memset(&dv1[1625], 0, 33U * sizeof(real_T));
  dv1[1658] = -in11[2];
  memset(&dv1[1659], 0, 33U * sizeof(real_T));
  dv1[1692] = -in11[2];
  memset(&dv1[1693], 0, 162U * sizeof(real_T));
  dv1[1855] = -1.0;
  memset(&dv1[1856], 0, 33U * sizeof(real_T));
  dv1[1889] = 1.0;
  memset(&dv1[1890], 0, 33U * sizeof(real_T));
  dv1[1923] = -in11[2];
  memset(&dv1[1924], 0, 33U * sizeof(real_T));
  dv1[1957] = -in11[2];
  memset(&dv1[1958], 0, 162U * sizeof(real_T));
  dv1[2120] = -1.0;
  memset(&dv1[2121], 0, 33U * sizeof(real_T));
  dv1[2154] = 1.0;
  memset(&dv1[2155], 0, 33U * sizeof(real_T));
  dv1[2188] = -in11[2];
  memset(&dv1[2189], 0, 33U * sizeof(real_T));
  dv1[2222] = -in11[2];
  memset(&dv1[2223], 0, 162U * sizeof(real_T));
  dv1[2385] = -1.0;
  memset(&dv1[2386], 0, 33U * sizeof(real_T));
  dv1[2419] = 1.0;
  memset(&dv1[2420], 0, 33U * sizeof(real_T));
  dv1[2453] = -in11[2];
  memset(&dv1[2454], 0, 33U * sizeof(real_T));
  dv1[2487] = -in11[2];
  memset(&dv1[2488], 0, 162U * sizeof(real_T));
  dv1[2650] = -1.0;
  memset(&dv1[2651], 0, 33U * sizeof(real_T));
  dv1[2684] = 1.0;
  memset(&dv1[2685], 0, 33U * sizeof(real_T));
  dv1[2718] = -in11[2];
  memset(&dv1[2719], 0, 33U * sizeof(real_T));
  dv1[2752] = -in11[2];
  memset(&dv1[2753], 0, 162U * sizeof(real_T));
  dv1[2915] = -1.0;
  memset(&dv1[2916], 0, 33U * sizeof(real_T));
  dv1[2949] = 1.0;
  memset(&dv1[2950], 0, 33U * sizeof(real_T));
  dv1[2983] = -in11[2];
  memset(&dv1[2984], 0, 33U * sizeof(real_T));
  dv1[3017] = -in11[2];
  memset(&dv1[3018], 0, 162U * sizeof(real_T));
  dv1[3180] = -1.0;
  memset(&dv1[3181], 0, 33U * sizeof(real_T));
  dv1[3214] = 1.0;
  memset(&dv1[3215], 0, 33U * sizeof(real_T));
  dv1[3248] = -in11[2];
  memset(&dv1[3249], 0, 33U * sizeof(real_T));
  dv1[3282] = -in11[2];
  memset(&dv1[3283], 0, 162U * sizeof(real_T));
  dv1[3445] = -1.0;
  memset(&dv1[3446], 0, 33U * sizeof(real_T));
  dv1[3479] = 1.0;
  memset(&dv1[3480], 0, 33U * sizeof(real_T));
  dv1[3513] = -in11[2];
  memset(&dv1[3514], 0, 33U * sizeof(real_T));
  dv1[3547] = -in11[2];
  memset(&dv1[3548], 0, 162U * sizeof(real_T));
  dv1[3710] = -1.0;
  memset(&dv1[3711], 0, 33U * sizeof(real_T));
  dv1[3744] = 1.0;
  memset(&dv1[3745], 0, 33U * sizeof(real_T));
  dv1[3778] = -in11[2];
  memset(&dv1[3779], 0, 33U * sizeof(real_T));
  dv1[3812] = -in11[2];
  memset(&dv1[3813], 0, 162U * sizeof(real_T));
  dv1[3975] = -1.0;
  memset(&dv1[3976], 0, 33U * sizeof(real_T));
  dv1[4009] = 1.0;
  memset(&dv1[4010], 0, 33U * sizeof(real_T));
  dv1[4043] = -in11[2];
  memset(&dv1[4044], 0, 33U * sizeof(real_T));
  dv1[4077] = -in11[2];
  memset(&dv1[4078], 0, 162U * sizeof(real_T));
  dv1[4240] = -1.0;
  memset(&dv1[4241], 0, 33U * sizeof(real_T));
  dv1[4274] = 1.0;
  memset(&dv1[4275], 0, 33U * sizeof(real_T));
  dv1[4308] = -in11[2];
  memset(&dv1[4309], 0, 33U * sizeof(real_T));
  dv1[4342] = -in11[2];
  memset(&dv1[4343], 0, 162U * sizeof(real_T));
  dv1[4505] = -1.0;
  memset(&dv1[4506], 0, 33U * sizeof(real_T));
  dv1[4539] = 1.0;
  memset(&dv1[4540], 0, sizeof(real_T) << 4);
  dv1[4556] = -in11[3];
  memset(&dv1[4557], 0, 33U * sizeof(real_T));
  dv1[4590] = -in11[3];
  memset(&dv1[4591], 0, 179U * sizeof(real_T));
  dv1[4770] = -1.0;
  memset(&dv1[4771], 0, 33U * sizeof(real_T));
  dv1[4804] = 1.0;
  memset(&dv1[4805], 0, sizeof(real_T) << 4);
  dv1[4821] = -in11[3];
  memset(&dv1[4822], 0, 33U * sizeof(real_T));
  dv1[4855] = -in11[3];
  memset(&dv1[4856], 0, 179U * sizeof(real_T));
  dv1[5035] = -1.0;
  memset(&dv1[5036], 0, 33U * sizeof(real_T));
  dv1[5069] = 1.0;
  memset(&dv1[5070], 0, sizeof(real_T) << 4);
  dv1[5086] = -in11[3];
  memset(&dv1[5087], 0, 33U * sizeof(real_T));
  dv1[5120] = -in11[3];
  memset(&dv1[5121], 0, 179U * sizeof(real_T));
  dv1[5300] = -1.0;
  memset(&dv1[5301], 0, 33U * sizeof(real_T));
  dv1[5334] = 1.0;
  memset(&dv1[5335], 0, sizeof(real_T) << 4);
  dv1[5351] = -in11[3];
  memset(&dv1[5352], 0, 33U * sizeof(real_T));
  dv1[5385] = -in11[3];
  memset(&dv1[5386], 0, 179U * sizeof(real_T));
  dv1[5565] = -1.0;
  memset(&dv1[5566], 0, 33U * sizeof(real_T));
  dv1[5599] = 1.0;
  memset(&dv1[5600], 0, sizeof(real_T) << 4);
  dv1[5616] = -in11[3];
  memset(&dv1[5617], 0, 33U * sizeof(real_T));
  dv1[5650] = -in11[3];
  memset(&dv1[5651], 0, 179U * sizeof(real_T));
  dv1[5830] = -1.0;
  memset(&dv1[5831], 0, 33U * sizeof(real_T));
  dv1[5864] = 1.0;
  memset(&dv1[5865], 0, sizeof(real_T) << 4);
  dv1[5881] = -in11[3];
  memset(&dv1[5882], 0, 33U * sizeof(real_T));
  dv1[5915] = -in11[3];
  memset(&dv1[5916], 0, 179U * sizeof(real_T));
  dv1[6095] = -1.0;
  memset(&dv1[6096], 0, 33U * sizeof(real_T));
  dv1[6129] = 1.0;
  memset(&dv1[6130], 0, sizeof(real_T) << 4);
  dv1[6146] = -in11[3];
  memset(&dv1[6147], 0, 33U * sizeof(real_T));
  dv1[6180] = -in11[3];
  memset(&dv1[6181], 0, 179U * sizeof(real_T));
  dv1[6360] = -1.0;
  memset(&dv1[6361], 0, 33U * sizeof(real_T));
  dv1[6394] = 1.0;
  memset(&dv1[6395], 0, sizeof(real_T) << 4);
  dv1[6411] = -in11[3];
  memset(&dv1[6412], 0, 33U * sizeof(real_T));
  dv1[6445] = -in11[3];
  memset(&dv1[6446], 0, 179U * sizeof(real_T));
  dv1[6625] = -1.0;
  memset(&dv1[6626], 0, 33U * sizeof(real_T));
  dv1[6659] = 1.0;
  memset(&dv1[6660], 0, sizeof(real_T) << 4);
  dv1[6676] = -in11[3];
  memset(&dv1[6677], 0, 33U * sizeof(real_T));
  dv1[6710] = -in11[3];
  memset(&dv1[6711], 0, 179U * sizeof(real_T));
  dv1[6890] = -1.0;
  memset(&dv1[6891], 0, 33U * sizeof(real_T));
  dv1[6924] = 1.0;
  memset(&dv1[6925], 0, sizeof(real_T) << 4);
  dv1[6941] = -in11[3];
  memset(&dv1[6942], 0, 33U * sizeof(real_T));
  dv1[6975] = -in11[3];
  memset(&dv1[6976], 0, 179U * sizeof(real_T));
  dv1[7155] = -1.0;
  memset(&dv1[7156], 0, 33U * sizeof(real_T));
  dv1[7189] = 1.0;
  memset(&dv1[7190], 0, sizeof(real_T) << 4);
  dv1[7206] = -in11[3];
  memset(&dv1[7207], 0, 33U * sizeof(real_T));
  dv1[7240] = -in11[3];
  memset(&dv1[7241], 0, 179U * sizeof(real_T));
  dv1[7420] = -1.0;
  memset(&dv1[7421], 0, 33U * sizeof(real_T));
  dv1[7454] = 1.0;
  memset(&dv1[7455], 0, sizeof(real_T) << 4);
  dv1[7471] = -in11[3];
  memset(&dv1[7472], 0, 33U * sizeof(real_T));
  dv1[7505] = -in11[3];
  memset(&dv1[7506], 0, 179U * sizeof(real_T));
  dv1[7685] = -1.0;
  memset(&dv1[7686], 0, 33U * sizeof(real_T));
  dv1[7719] = 1.0;
  memset(&dv1[7720], 0, sizeof(real_T) << 4);
  dv1[7736] = -in11[3];
  memset(&dv1[7737], 0, 33U * sizeof(real_T));
  dv1[7770] = -in11[3];
  memset(&dv1[7771], 0, 179U * sizeof(real_T));
  dv1[7950] = -1.0;
  memset(&dv1[7951], 0, 33U * sizeof(real_T));
  dv1[7984] = 1.0;
  memset(&dv1[7985], 0, sizeof(real_T) << 4);
  dv1[8001] = -in11[3];
  memset(&dv1[8002], 0, 33U * sizeof(real_T));
  dv1[8035] = -in11[3];
  memset(&dv1[8036], 0, 179U * sizeof(real_T));
  dv1[8215] = -1.0;
  memset(&dv1[8216], 0, 33U * sizeof(real_T));
  dv1[8249] = 1.0;
  memset(&dv1[8250], 0, sizeof(real_T) << 4);
  dv1[8266] = -in11[3];
  memset(&dv1[8267], 0, 33U * sizeof(real_T));
  dv1[8300] = -in11[3];
  memset(&dv1[8301], 0, 179U * sizeof(real_T));
  dv1[8480] = -1.0;
  memset(&dv1[8481], 0, 33U * sizeof(real_T));
  dv1[8514] = 1.0;
  memset(&dv1[8515], 0, sizeof(real_T) << 4);
  dv1[8531] = -in11[3];
  memset(&dv1[8532], 0, 33U * sizeof(real_T));
  dv1[8565] = -in11[3];
  memset(&dv1[8566], 0, 179U * sizeof(real_T));
  dv1[8745] = -1.0;
  memset(&dv1[8746], 0, 33U * sizeof(real_T));
  dv1[8779] = 1.0;
  memset(&dv1[8780], 0, sizeof(real_T) << 4);
  dv1[8796] = -in11[3];
  memset(&dv1[8797], 0, 33U * sizeof(real_T));
  dv1[8830] = -in11[3];
  memset(&dv1[8831], 0, 145U * sizeof(real_T));
  dv1[8976] = 1.0;
  memset(&dv1[8977], 0, 33U * sizeof(real_T));
  dv1[9010] = -1.0;
  memset(&dv1[9011], 0, 84U * sizeof(real_T));
  dv1[9095] = 1.0;
  dv1[9096] = 0.0;
  dv1[9097] = 0.0;
  dv1[9098] = -1.0;
  memset(&dv1[9099], 0, 10U * sizeof(real_T));
  dv1[9109] = 1.0;
  memset(&dv1[9110], 0, 33U * sizeof(real_T));
  dv1[9143] = -1.0;
  memset(&dv1[9144], 0, 84U * sizeof(real_T));
  dv1[9228] = 1.0;
  dv1[9229] = 0.0;
  dv1[9230] = 0.0;
  dv1[9231] = -1.0;
  memset(&dv1[9232], 0, 10U * sizeof(real_T));
  dv1[9242] = 1.0;
  memset(&dv1[9243], 0, 33U * sizeof(real_T));
  dv1[9276] = -1.0;
  memset(&dv1[9277], 0, 84U * sizeof(real_T));
  dv1[9361] = 1.0;
  dv1[9362] = 0.0;
  dv1[9363] = 0.0;
  dv1[9364] = -1.0;
  memset(&dv1[9365], 0, 10U * sizeof(real_T));
  dv1[9375] = 1.0;
  memset(&dv1[9376], 0, 33U * sizeof(real_T));
  dv1[9409] = -1.0;
  memset(&dv1[9410], 0, 98U * sizeof(real_T));
  dv1[9508] = 1.0;
  memset(&dv1[9509], 0, 33U * sizeof(real_T));
  dv1[9542] = -1.0;
  memset(&dv1[9543], 0, 98U * sizeof(real_T));
  dv1[9641] = 1.0;
  memset(&dv1[9642], 0, 33U * sizeof(real_T));
  dv1[9675] = -1.0;
  memset(&dv1[9676], 0, 98U * sizeof(real_T));
  dv1[9774] = 1.0;
  memset(&dv1[9775], 0, 33U * sizeof(real_T));
  dv1[9808] = -1.0;
  memset(&dv1[9809], 0, 98U * sizeof(real_T));
  dv1[9907] = 1.0;
  memset(&dv1[9908], 0, 33U * sizeof(real_T));
  dv1[9941] = -1.0;
  memset(&dv1[9942], 0, 98U * sizeof(real_T));
  dv1[10040] = 1.0;
  memset(&dv1[10041], 0, 33U * sizeof(real_T));
  dv1[10074] = -1.0;
  memset(&dv1[10075], 0, 98U * sizeof(real_T));
  dv1[10173] = 1.0;
  memset(&dv1[10174], 0, 33U * sizeof(real_T));
  dv1[10207] = -1.0;
  memset(&dv1[10208], 0, 98U * sizeof(real_T));
  dv1[10306] = 1.0;
  memset(&dv1[10307], 0, 33U * sizeof(real_T));
  dv1[10340] = -1.0;
  memset(&dv1[10341], 0, 98U * sizeof(real_T));
  dv1[10439] = 1.0;
  memset(&dv1[10440], 0, 33U * sizeof(real_T));
  dv1[10473] = -1.0;
  memset(&dv1[10474], 0, 98U * sizeof(real_T));
  dv1[10572] = 1.0;
  memset(&dv1[10573], 0, 33U * sizeof(real_T));
  dv1[10606] = -1.0;
  memset(&dv1[10607], 0, 98U * sizeof(real_T));
  dv1[10705] = 1.0;
  memset(&dv1[10706], 0, 33U * sizeof(real_T));
  dv1[10739] = -1.0;
  memset(&dv1[10740], 0, 98U * sizeof(real_T));
  dv1[10838] = 1.0;
  memset(&dv1[10839], 0, 33U * sizeof(real_T));
  dv1[10872] = -1.0;
  memset(&dv1[10873], 0, 98U * sizeof(real_T));
  dv1[10971] = 1.0;
  memset(&dv1[10972], 0, 33U * sizeof(real_T));
  dv1[11005] = -1.0;
  memset(&dv1[11006], 0, 98U * sizeof(real_T));
  dv1[11104] = 1.0;
  memset(&dv1[11105], 0, 33U * sizeof(real_T));
  dv1[11138] = -1.0;
  memset(&dv1[11139], 0, 98U * sizeof(real_T));
  dv1[11237] = 1.0;
  memset(&dv1[11238], 0, 33U * sizeof(real_T));
  dv1[11271] = -1.0;
  memset(&dv1[11272], 0, 73U * sizeof(real_T));
  dv1[11345] = 1.0;
  dv1[11346] = 0.0;
  dv1[11347] = 0.0;
  dv1[11348] = -1.0;
  memset(&dv1[11349], 0, 21U * sizeof(real_T));
  dv1[11370] = 1.0;
  memset(&dv1[11371], 0, 33U * sizeof(real_T));
  dv1[11404] = -1.0;
  memset(&dv1[11405], 0, 73U * sizeof(real_T));
  dv1[11478] = 1.0;
  dv1[11479] = 0.0;
  dv1[11480] = 0.0;
  dv1[11481] = -1.0;
  memset(&dv1[11482], 0, 21U * sizeof(real_T));
  dv1[11503] = 1.0;
  memset(&dv1[11504], 0, 33U * sizeof(real_T));
  dv1[11537] = -1.0;
  memset(&dv1[11538], 0, 73U * sizeof(real_T));
  dv1[11611] = 1.0;
  dv1[11612] = 0.0;
  dv1[11613] = 0.0;
  dv1[11614] = -1.0;
  memset(&dv1[11615], 0, 21U * sizeof(real_T));
  dv1[11636] = 1.0;
  memset(&dv1[11637], 0, 33U * sizeof(real_T));
  dv1[11670] = -1.0;
  memset(&dv1[11671], 0, 98U * sizeof(real_T));
  dv1[11769] = 1.0;
  memset(&dv1[11770], 0, 33U * sizeof(real_T));
  dv1[11803] = -1.0;
  memset(&dv1[11804], 0, 98U * sizeof(real_T));
  dv1[11902] = 1.0;
  memset(&dv1[11903], 0, 33U * sizeof(real_T));
  dv1[11936] = -1.0;
  memset(&dv1[11937], 0, 98U * sizeof(real_T));
  dv1[12035] = 1.0;
  memset(&dv1[12036], 0, 33U * sizeof(real_T));
  dv1[12069] = -1.0;
  memset(&dv1[12070], 0, 98U * sizeof(real_T));
  dv1[12168] = 1.0;
  memset(&dv1[12169], 0, 33U * sizeof(real_T));
  dv1[12202] = -1.0;
  memset(&dv1[12203], 0, 98U * sizeof(real_T));
  dv1[12301] = 1.0;
  memset(&dv1[12302], 0, 33U * sizeof(real_T));
  dv1[12335] = -1.0;
  memset(&dv1[12336], 0, 98U * sizeof(real_T));
  dv1[12434] = 1.0;
  memset(&dv1[12435], 0, 33U * sizeof(real_T));
  dv1[12468] = -1.0;
  memset(&dv1[12469], 0, 98U * sizeof(real_T));
  dv1[12567] = 1.0;
  memset(&dv1[12568], 0, 33U * sizeof(real_T));
  dv1[12601] = -1.0;
  memset(&dv1[12602], 0, 98U * sizeof(real_T));
  dv1[12700] = 1.0;
  memset(&dv1[12701], 0, 33U * sizeof(real_T));
  dv1[12734] = -1.0;
  memset(&dv1[12735], 0, 98U * sizeof(real_T));
  dv1[12833] = 1.0;
  memset(&dv1[12834], 0, 33U * sizeof(real_T));
  dv1[12867] = -1.0;
  memset(&dv1[12868], 0, 98U * sizeof(real_T));
  dv1[12966] = 1.0;
  memset(&dv1[12967], 0, 33U * sizeof(real_T));
  dv1[13000] = -1.0;
  memset(&dv1[13001], 0, 98U * sizeof(real_T));
  dv1[13099] = 1.0;
  memset(&dv1[13100], 0, 33U * sizeof(real_T));
  dv1[13133] = -1.0;
  memset(&dv1[13134], 0, 98U * sizeof(real_T));
  dv1[13232] = 1.0;
  memset(&dv1[13233], 0, 33U * sizeof(real_T));
  dv1[13266] = -1.0;
  memset(&dv1[13267], 0, 98U * sizeof(real_T));
  dv1[13365] = 1.0;
  memset(&dv1[13366], 0, 33U * sizeof(real_T));
  dv1[13399] = -1.0;
  memset(&dv1[13400], 0, 723U * sizeof(real_T));
  dv1[14123] = 1.0;
  memset(&dv1[14124], 0, 481U * sizeof(real_T));
  dv1[14605] = -1.0;
  memset(&dv1[14606], 0, sizeof(real_T) << 4);
  dv1[14622] = -1.0;
  memset(&dv1[14623], 0, 115U * sizeof(real_T));
  dv1[14738] = -1.0;
  memset(&dv1[14739], 0, sizeof(real_T) << 4);
  dv1[14755] = -1.0;
  memset(&dv1[14756], 0, 115U * sizeof(real_T));
  dv1[14871] = -1.0;
  memset(&dv1[14872], 0, sizeof(real_T) << 4);
  dv1[14888] = -1.0;
  memset(&dv1[14889], 0, 115U * sizeof(real_T));
  dv1[15004] = -1.0;
  memset(&dv1[15005], 0, sizeof(real_T) << 4);
  dv1[15021] = -1.0;
  memset(&dv1[15022], 0, 115U * sizeof(real_T));
  dv1[15137] = -1.0;
  memset(&dv1[15138], 0, sizeof(real_T) << 4);
  dv1[15154] = -1.0;
  memset(&dv1[15155], 0, 115U * sizeof(real_T));
  dv1[15270] = -1.0;
  memset(&dv1[15271], 0, sizeof(real_T) << 4);
  dv1[15287] = -1.0;
  memset(&dv1[15288], 0, 115U * sizeof(real_T));
  dv1[15403] = -1.0;
  memset(&dv1[15404], 0, sizeof(real_T) << 4);
  dv1[15420] = -1.0;
  memset(&dv1[15421], 0, 115U * sizeof(real_T));
  dv1[15536] = -1.0;
  memset(&dv1[15537], 0, sizeof(real_T) << 4);
  dv1[15553] = -1.0;
  memset(&dv1[15554], 0, 115U * sizeof(real_T));
  dv1[15669] = -1.0;
  memset(&dv1[15670], 0, sizeof(real_T) << 4);
  dv1[15686] = -1.0;
  memset(&dv1[15687], 0, 115U * sizeof(real_T));
  dv1[15802] = -1.0;
  memset(&dv1[15803], 0, sizeof(real_T) << 4);
  dv1[15819] = -1.0;
  memset(&dv1[15820], 0, 115U * sizeof(real_T));
  dv1[15935] = -1.0;
  memset(&dv1[15936], 0, sizeof(real_T) << 4);
  dv1[15952] = -1.0;
  memset(&dv1[15953], 0, 115U * sizeof(real_T));
  dv1[16068] = -1.0;
  memset(&dv1[16069], 0, sizeof(real_T) << 4);
  dv1[16085] = -1.0;
  memset(&dv1[16086], 0, 115U * sizeof(real_T));
  dv1[16201] = -1.0;
  memset(&dv1[16202], 0, sizeof(real_T) << 4);
  dv1[16218] = -1.0;
  memset(&dv1[16219], 0, 115U * sizeof(real_T));
  dv1[16334] = -1.0;
  memset(&dv1[16335], 0, sizeof(real_T) << 4);
  dv1[16351] = -1.0;
  memset(&dv1[16352], 0, 115U * sizeof(real_T));
  dv1[16467] = -1.0;
  memset(&dv1[16468], 0, sizeof(real_T) << 4);
  dv1[16484] = -1.0;
  memset(&dv1[16485], 0, 115U * sizeof(real_T));
  dv1[16600] = -1.0;
  memset(&dv1[16601], 0, sizeof(real_T) << 4);
  dv1[16617] = -1.0;
  memset(&dv1[16618], 0, 115U * sizeof(real_T));
  dv1[16733] = -1.0;
  memset(&dv1[16734], 0, sizeof(real_T) << 4);
  dv1[16750] = -1.0;
  memset(&dv1[16751], 0, 144U * sizeof(real_T));
  dv1[16895] = -1.0;
  memset(&dv1[16896], 0, 2231U * sizeof(real_T));
  dv1[19127] = -1.0;
  dv1[19128] = 0.0;
  dv1[19129] = 0.0;
  dv1[19130] = -1.0;
  memset(&dv1[19131], 0, 129U * sizeof(real_T));
  dv1[19260] = -1.0;
  dv1[19261] = 0.0;
  dv1[19262] = 0.0;
  dv1[19263] = -1.0;
  memset(&dv1[19264], 0, 129U * sizeof(real_T));
  dv1[19393] = -1.0;
  dv1[19394] = 0.0;
  dv1[19395] = 0.0;
  dv1[19396] = -1.0;
  memset(&dv1[19397], 0, 264U * sizeof(real_T));
  dv1[19661] = -1.0;
  dv1[19662] = 0.0;
  dv1[19663] = 0.0;
  dv1[19664] = -1.0;
  memset(&dv1[19665], 0, 129U * sizeof(real_T));
  dv1[19794] = -1.0;
  dv1[19795] = 0.0;
  dv1[19796] = 0.0;
  dv1[19797] = -1.0;
  memset(&dv1[19798], 0, 129U * sizeof(real_T));
  dv1[19927] = -1.0;
  dv1[19928] = 0.0;
  dv1[19929] = 0.0;
  dv1[19930] = -1.0;
  memset(&dv1[19931], 0, 1189U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 132], &dv1[i1 * 132], 132U * sizeof(real_T));
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
  biq[122] = t9;
  biq[123] = t9;
  biq[124] = t9;
  biq[125] = t10;
  biq[126] = t10;
  biq[127] = t10;
  biq[128] = t11;
  biq[129] = t11;
  biq[130] = t11;
  biq[131] = -in9[1];
}

/* End of code generation (IqFast_LeftStart1V10.cpp) */
