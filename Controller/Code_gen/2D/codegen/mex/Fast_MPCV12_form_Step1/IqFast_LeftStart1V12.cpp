/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart1V12.cpp
 *
 * Code generation for function 'IqFast_LeftStart1V12'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step1.h"
#include "IqFast_LeftStart1V12.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V12.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart1V12(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [21280], real_T biq[133])
{
  int32_T i1;
  real_T dv1[21280];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART1V12 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART1V12(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     25-Jul-2023 13:25:51 */
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
  memset(&dv1[103], 0, 164U * sizeof(real_T));
  dv1[267] = -1.0;
  memset(&dv1[268], 0, 33U * sizeof(real_T));
  dv1[301] = 1.0;
  memset(&dv1[302], 0, 33U * sizeof(real_T));
  dv1[335] = -in11[2];
  memset(&dv1[336], 0, 33U * sizeof(real_T));
  dv1[369] = -in11[2];
  memset(&dv1[370], 0, 164U * sizeof(real_T));
  dv1[534] = -1.0;
  memset(&dv1[535], 0, 33U * sizeof(real_T));
  dv1[568] = 1.0;
  memset(&dv1[569], 0, 33U * sizeof(real_T));
  dv1[602] = -in11[2];
  memset(&dv1[603], 0, 33U * sizeof(real_T));
  dv1[636] = -in11[2];
  memset(&dv1[637], 0, 164U * sizeof(real_T));
  dv1[801] = -1.0;
  memset(&dv1[802], 0, 33U * sizeof(real_T));
  dv1[835] = 1.0;
  memset(&dv1[836], 0, 33U * sizeof(real_T));
  dv1[869] = -in11[2];
  memset(&dv1[870], 0, 33U * sizeof(real_T));
  dv1[903] = -in11[2];
  memset(&dv1[904], 0, 164U * sizeof(real_T));
  dv1[1068] = -1.0;
  memset(&dv1[1069], 0, 33U * sizeof(real_T));
  dv1[1102] = 1.0;
  memset(&dv1[1103], 0, 33U * sizeof(real_T));
  dv1[1136] = -in11[2];
  memset(&dv1[1137], 0, 33U * sizeof(real_T));
  dv1[1170] = -in11[2];
  memset(&dv1[1171], 0, 164U * sizeof(real_T));
  dv1[1335] = -1.0;
  memset(&dv1[1336], 0, 33U * sizeof(real_T));
  dv1[1369] = 1.0;
  memset(&dv1[1370], 0, 33U * sizeof(real_T));
  dv1[1403] = -in11[2];
  memset(&dv1[1404], 0, 33U * sizeof(real_T));
  dv1[1437] = -in11[2];
  memset(&dv1[1438], 0, 164U * sizeof(real_T));
  dv1[1602] = -1.0;
  memset(&dv1[1603], 0, 33U * sizeof(real_T));
  dv1[1636] = 1.0;
  memset(&dv1[1637], 0, 33U * sizeof(real_T));
  dv1[1670] = -in11[2];
  memset(&dv1[1671], 0, 33U * sizeof(real_T));
  dv1[1704] = -in11[2];
  memset(&dv1[1705], 0, 164U * sizeof(real_T));
  dv1[1869] = -1.0;
  memset(&dv1[1870], 0, 33U * sizeof(real_T));
  dv1[1903] = 1.0;
  memset(&dv1[1904], 0, 33U * sizeof(real_T));
  dv1[1937] = -in11[2];
  memset(&dv1[1938], 0, 33U * sizeof(real_T));
  dv1[1971] = -in11[2];
  memset(&dv1[1972], 0, 164U * sizeof(real_T));
  dv1[2136] = -1.0;
  memset(&dv1[2137], 0, 33U * sizeof(real_T));
  dv1[2170] = 1.0;
  memset(&dv1[2171], 0, 33U * sizeof(real_T));
  dv1[2204] = -in11[2];
  memset(&dv1[2205], 0, 33U * sizeof(real_T));
  dv1[2238] = -in11[2];
  memset(&dv1[2239], 0, 164U * sizeof(real_T));
  dv1[2403] = -1.0;
  memset(&dv1[2404], 0, 33U * sizeof(real_T));
  dv1[2437] = 1.0;
  memset(&dv1[2438], 0, 33U * sizeof(real_T));
  dv1[2471] = -in11[2];
  memset(&dv1[2472], 0, 33U * sizeof(real_T));
  dv1[2505] = -in11[2];
  memset(&dv1[2506], 0, 164U * sizeof(real_T));
  dv1[2670] = -1.0;
  memset(&dv1[2671], 0, 33U * sizeof(real_T));
  dv1[2704] = 1.0;
  memset(&dv1[2705], 0, 33U * sizeof(real_T));
  dv1[2738] = -in11[2];
  memset(&dv1[2739], 0, 33U * sizeof(real_T));
  dv1[2772] = -in11[2];
  memset(&dv1[2773], 0, 164U * sizeof(real_T));
  dv1[2937] = -1.0;
  memset(&dv1[2938], 0, 33U * sizeof(real_T));
  dv1[2971] = 1.0;
  memset(&dv1[2972], 0, 33U * sizeof(real_T));
  dv1[3005] = -in11[2];
  memset(&dv1[3006], 0, 33U * sizeof(real_T));
  dv1[3039] = -in11[2];
  memset(&dv1[3040], 0, 164U * sizeof(real_T));
  dv1[3204] = -1.0;
  memset(&dv1[3205], 0, 33U * sizeof(real_T));
  dv1[3238] = 1.0;
  memset(&dv1[3239], 0, 33U * sizeof(real_T));
  dv1[3272] = -in11[2];
  memset(&dv1[3273], 0, 33U * sizeof(real_T));
  dv1[3306] = -in11[2];
  memset(&dv1[3307], 0, 164U * sizeof(real_T));
  dv1[3471] = -1.0;
  memset(&dv1[3472], 0, 33U * sizeof(real_T));
  dv1[3505] = 1.0;
  memset(&dv1[3506], 0, 33U * sizeof(real_T));
  dv1[3539] = -in11[2];
  memset(&dv1[3540], 0, 33U * sizeof(real_T));
  dv1[3573] = -in11[2];
  memset(&dv1[3574], 0, 164U * sizeof(real_T));
  dv1[3738] = -1.0;
  memset(&dv1[3739], 0, 33U * sizeof(real_T));
  dv1[3772] = 1.0;
  memset(&dv1[3773], 0, 33U * sizeof(real_T));
  dv1[3806] = -in11[2];
  memset(&dv1[3807], 0, 33U * sizeof(real_T));
  dv1[3840] = -in11[2];
  memset(&dv1[3841], 0, 164U * sizeof(real_T));
  dv1[4005] = -1.0;
  memset(&dv1[4006], 0, 33U * sizeof(real_T));
  dv1[4039] = 1.0;
  memset(&dv1[4040], 0, 33U * sizeof(real_T));
  dv1[4073] = -in11[2];
  memset(&dv1[4074], 0, 33U * sizeof(real_T));
  dv1[4107] = -in11[2];
  memset(&dv1[4108], 0, 164U * sizeof(real_T));
  dv1[4272] = -1.0;
  memset(&dv1[4273], 0, 33U * sizeof(real_T));
  dv1[4306] = 1.0;
  memset(&dv1[4307], 0, 33U * sizeof(real_T));
  dv1[4340] = -in11[2];
  memset(&dv1[4341], 0, 33U * sizeof(real_T));
  dv1[4374] = -in11[2];
  memset(&dv1[4375], 0, 164U * sizeof(real_T));
  dv1[4539] = -1.0;
  memset(&dv1[4540], 0, 33U * sizeof(real_T));
  dv1[4573] = 1.0;
  memset(&dv1[4574], 0, sizeof(real_T) << 4);
  dv1[4590] = -in11[3];
  memset(&dv1[4591], 0, 33U * sizeof(real_T));
  dv1[4624] = -in11[3];
  memset(&dv1[4625], 0, 181U * sizeof(real_T));
  dv1[4806] = -1.0;
  memset(&dv1[4807], 0, 33U * sizeof(real_T));
  dv1[4840] = 1.0;
  memset(&dv1[4841], 0, sizeof(real_T) << 4);
  dv1[4857] = -in11[3];
  memset(&dv1[4858], 0, 33U * sizeof(real_T));
  dv1[4891] = -in11[3];
  memset(&dv1[4892], 0, 181U * sizeof(real_T));
  dv1[5073] = -1.0;
  memset(&dv1[5074], 0, 33U * sizeof(real_T));
  dv1[5107] = 1.0;
  memset(&dv1[5108], 0, sizeof(real_T) << 4);
  dv1[5124] = -in11[3];
  memset(&dv1[5125], 0, 33U * sizeof(real_T));
  dv1[5158] = -in11[3];
  memset(&dv1[5159], 0, 181U * sizeof(real_T));
  dv1[5340] = -1.0;
  memset(&dv1[5341], 0, 33U * sizeof(real_T));
  dv1[5374] = 1.0;
  memset(&dv1[5375], 0, sizeof(real_T) << 4);
  dv1[5391] = -in11[3];
  memset(&dv1[5392], 0, 33U * sizeof(real_T));
  dv1[5425] = -in11[3];
  memset(&dv1[5426], 0, 181U * sizeof(real_T));
  dv1[5607] = -1.0;
  memset(&dv1[5608], 0, 33U * sizeof(real_T));
  dv1[5641] = 1.0;
  memset(&dv1[5642], 0, sizeof(real_T) << 4);
  dv1[5658] = -in11[3];
  memset(&dv1[5659], 0, 33U * sizeof(real_T));
  dv1[5692] = -in11[3];
  memset(&dv1[5693], 0, 181U * sizeof(real_T));
  dv1[5874] = -1.0;
  memset(&dv1[5875], 0, 33U * sizeof(real_T));
  dv1[5908] = 1.0;
  memset(&dv1[5909], 0, sizeof(real_T) << 4);
  dv1[5925] = -in11[3];
  memset(&dv1[5926], 0, 33U * sizeof(real_T));
  dv1[5959] = -in11[3];
  memset(&dv1[5960], 0, 181U * sizeof(real_T));
  dv1[6141] = -1.0;
  memset(&dv1[6142], 0, 33U * sizeof(real_T));
  dv1[6175] = 1.0;
  memset(&dv1[6176], 0, sizeof(real_T) << 4);
  dv1[6192] = -in11[3];
  memset(&dv1[6193], 0, 33U * sizeof(real_T));
  dv1[6226] = -in11[3];
  memset(&dv1[6227], 0, 181U * sizeof(real_T));
  dv1[6408] = -1.0;
  memset(&dv1[6409], 0, 33U * sizeof(real_T));
  dv1[6442] = 1.0;
  memset(&dv1[6443], 0, sizeof(real_T) << 4);
  dv1[6459] = -in11[3];
  memset(&dv1[6460], 0, 33U * sizeof(real_T));
  dv1[6493] = -in11[3];
  memset(&dv1[6494], 0, 181U * sizeof(real_T));
  dv1[6675] = -1.0;
  memset(&dv1[6676], 0, 33U * sizeof(real_T));
  dv1[6709] = 1.0;
  memset(&dv1[6710], 0, sizeof(real_T) << 4);
  dv1[6726] = -in11[3];
  memset(&dv1[6727], 0, 33U * sizeof(real_T));
  dv1[6760] = -in11[3];
  memset(&dv1[6761], 0, 181U * sizeof(real_T));
  dv1[6942] = -1.0;
  memset(&dv1[6943], 0, 33U * sizeof(real_T));
  dv1[6976] = 1.0;
  memset(&dv1[6977], 0, sizeof(real_T) << 4);
  dv1[6993] = -in11[3];
  memset(&dv1[6994], 0, 33U * sizeof(real_T));
  dv1[7027] = -in11[3];
  memset(&dv1[7028], 0, 181U * sizeof(real_T));
  dv1[7209] = -1.0;
  memset(&dv1[7210], 0, 33U * sizeof(real_T));
  dv1[7243] = 1.0;
  memset(&dv1[7244], 0, sizeof(real_T) << 4);
  dv1[7260] = -in11[3];
  memset(&dv1[7261], 0, 33U * sizeof(real_T));
  dv1[7294] = -in11[3];
  memset(&dv1[7295], 0, 181U * sizeof(real_T));
  dv1[7476] = -1.0;
  memset(&dv1[7477], 0, 33U * sizeof(real_T));
  dv1[7510] = 1.0;
  memset(&dv1[7511], 0, sizeof(real_T) << 4);
  dv1[7527] = -in11[3];
  memset(&dv1[7528], 0, 33U * sizeof(real_T));
  dv1[7561] = -in11[3];
  memset(&dv1[7562], 0, 181U * sizeof(real_T));
  dv1[7743] = -1.0;
  memset(&dv1[7744], 0, 33U * sizeof(real_T));
  dv1[7777] = 1.0;
  memset(&dv1[7778], 0, sizeof(real_T) << 4);
  dv1[7794] = -in11[3];
  memset(&dv1[7795], 0, 33U * sizeof(real_T));
  dv1[7828] = -in11[3];
  memset(&dv1[7829], 0, 181U * sizeof(real_T));
  dv1[8010] = -1.0;
  memset(&dv1[8011], 0, 33U * sizeof(real_T));
  dv1[8044] = 1.0;
  memset(&dv1[8045], 0, sizeof(real_T) << 4);
  dv1[8061] = -in11[3];
  memset(&dv1[8062], 0, 33U * sizeof(real_T));
  dv1[8095] = -in11[3];
  memset(&dv1[8096], 0, 181U * sizeof(real_T));
  dv1[8277] = -1.0;
  memset(&dv1[8278], 0, 33U * sizeof(real_T));
  dv1[8311] = 1.0;
  memset(&dv1[8312], 0, sizeof(real_T) << 4);
  dv1[8328] = -in11[3];
  memset(&dv1[8329], 0, 33U * sizeof(real_T));
  dv1[8362] = -in11[3];
  memset(&dv1[8363], 0, 181U * sizeof(real_T));
  dv1[8544] = -1.0;
  memset(&dv1[8545], 0, 33U * sizeof(real_T));
  dv1[8578] = 1.0;
  memset(&dv1[8579], 0, sizeof(real_T) << 4);
  dv1[8595] = -in11[3];
  memset(&dv1[8596], 0, 33U * sizeof(real_T));
  dv1[8629] = -in11[3];
  memset(&dv1[8630], 0, 181U * sizeof(real_T));
  dv1[8811] = -1.0;
  memset(&dv1[8812], 0, 33U * sizeof(real_T));
  dv1[8845] = 1.0;
  memset(&dv1[8846], 0, sizeof(real_T) << 4);
  dv1[8862] = -in11[3];
  memset(&dv1[8863], 0, 33U * sizeof(real_T));
  dv1[8896] = -in11[3];
  memset(&dv1[8897], 0, 147U * sizeof(real_T));
  dv1[9044] = 1.0;
  memset(&dv1[9045], 0, 33U * sizeof(real_T));
  dv1[9078] = -1.0;
  memset(&dv1[9079], 0, 84U * sizeof(real_T));
  dv1[9163] = 1.0;
  dv1[9164] = 0.0;
  dv1[9165] = 0.0;
  dv1[9166] = -1.0;
  memset(&dv1[9167], 0, 11U * sizeof(real_T));
  dv1[9178] = 1.0;
  memset(&dv1[9179], 0, 33U * sizeof(real_T));
  dv1[9212] = -1.0;
  memset(&dv1[9213], 0, 84U * sizeof(real_T));
  dv1[9297] = 1.0;
  dv1[9298] = 0.0;
  dv1[9299] = 0.0;
  dv1[9300] = -1.0;
  memset(&dv1[9301], 0, 11U * sizeof(real_T));
  dv1[9312] = 1.0;
  memset(&dv1[9313], 0, 33U * sizeof(real_T));
  dv1[9346] = -1.0;
  memset(&dv1[9347], 0, 84U * sizeof(real_T));
  dv1[9431] = 1.0;
  dv1[9432] = 0.0;
  dv1[9433] = 0.0;
  dv1[9434] = -1.0;
  memset(&dv1[9435], 0, 11U * sizeof(real_T));
  dv1[9446] = 1.0;
  memset(&dv1[9447], 0, 33U * sizeof(real_T));
  dv1[9480] = -1.0;
  memset(&dv1[9481], 0, 99U * sizeof(real_T));
  dv1[9580] = 1.0;
  memset(&dv1[9581], 0, 33U * sizeof(real_T));
  dv1[9614] = -1.0;
  memset(&dv1[9615], 0, 99U * sizeof(real_T));
  dv1[9714] = 1.0;
  memset(&dv1[9715], 0, 33U * sizeof(real_T));
  dv1[9748] = -1.0;
  memset(&dv1[9749], 0, 99U * sizeof(real_T));
  dv1[9848] = 1.0;
  memset(&dv1[9849], 0, 33U * sizeof(real_T));
  dv1[9882] = -1.0;
  memset(&dv1[9883], 0, 99U * sizeof(real_T));
  dv1[9982] = 1.0;
  memset(&dv1[9983], 0, 33U * sizeof(real_T));
  dv1[10016] = -1.0;
  memset(&dv1[10017], 0, 99U * sizeof(real_T));
  dv1[10116] = 1.0;
  memset(&dv1[10117], 0, 33U * sizeof(real_T));
  dv1[10150] = -1.0;
  memset(&dv1[10151], 0, 99U * sizeof(real_T));
  dv1[10250] = 1.0;
  memset(&dv1[10251], 0, 33U * sizeof(real_T));
  dv1[10284] = -1.0;
  memset(&dv1[10285], 0, 99U * sizeof(real_T));
  dv1[10384] = 1.0;
  memset(&dv1[10385], 0, 33U * sizeof(real_T));
  dv1[10418] = -1.0;
  memset(&dv1[10419], 0, 99U * sizeof(real_T));
  dv1[10518] = 1.0;
  memset(&dv1[10519], 0, 33U * sizeof(real_T));
  dv1[10552] = -1.0;
  memset(&dv1[10553], 0, 99U * sizeof(real_T));
  dv1[10652] = 1.0;
  memset(&dv1[10653], 0, 33U * sizeof(real_T));
  dv1[10686] = -1.0;
  memset(&dv1[10687], 0, 99U * sizeof(real_T));
  dv1[10786] = 1.0;
  memset(&dv1[10787], 0, 33U * sizeof(real_T));
  dv1[10820] = -1.0;
  memset(&dv1[10821], 0, 99U * sizeof(real_T));
  dv1[10920] = 1.0;
  memset(&dv1[10921], 0, 33U * sizeof(real_T));
  dv1[10954] = -1.0;
  memset(&dv1[10955], 0, 99U * sizeof(real_T));
  dv1[11054] = 1.0;
  memset(&dv1[11055], 0, 33U * sizeof(real_T));
  dv1[11088] = -1.0;
  memset(&dv1[11089], 0, 99U * sizeof(real_T));
  dv1[11188] = 1.0;
  memset(&dv1[11189], 0, 33U * sizeof(real_T));
  dv1[11222] = -1.0;
  memset(&dv1[11223], 0, 99U * sizeof(real_T));
  dv1[11322] = 1.0;
  memset(&dv1[11323], 0, 33U * sizeof(real_T));
  dv1[11356] = -1.0;
  memset(&dv1[11357], 0, 73U * sizeof(real_T));
  dv1[11430] = 1.0;
  dv1[11431] = 0.0;
  dv1[11432] = 0.0;
  dv1[11433] = -1.0;
  memset(&dv1[11434], 0, 22U * sizeof(real_T));
  dv1[11456] = 1.0;
  memset(&dv1[11457], 0, 33U * sizeof(real_T));
  dv1[11490] = -1.0;
  memset(&dv1[11491], 0, 73U * sizeof(real_T));
  dv1[11564] = 1.0;
  dv1[11565] = 0.0;
  dv1[11566] = 0.0;
  dv1[11567] = -1.0;
  memset(&dv1[11568], 0, 22U * sizeof(real_T));
  dv1[11590] = 1.0;
  memset(&dv1[11591], 0, 33U * sizeof(real_T));
  dv1[11624] = -1.0;
  memset(&dv1[11625], 0, 73U * sizeof(real_T));
  dv1[11698] = 1.0;
  dv1[11699] = 0.0;
  dv1[11700] = 0.0;
  dv1[11701] = -1.0;
  memset(&dv1[11702], 0, 22U * sizeof(real_T));
  dv1[11724] = 1.0;
  memset(&dv1[11725], 0, 33U * sizeof(real_T));
  dv1[11758] = -1.0;
  memset(&dv1[11759], 0, 99U * sizeof(real_T));
  dv1[11858] = 1.0;
  memset(&dv1[11859], 0, 33U * sizeof(real_T));
  dv1[11892] = -1.0;
  memset(&dv1[11893], 0, 99U * sizeof(real_T));
  dv1[11992] = 1.0;
  memset(&dv1[11993], 0, 33U * sizeof(real_T));
  dv1[12026] = -1.0;
  memset(&dv1[12027], 0, 99U * sizeof(real_T));
  dv1[12126] = 1.0;
  memset(&dv1[12127], 0, 33U * sizeof(real_T));
  dv1[12160] = -1.0;
  memset(&dv1[12161], 0, 99U * sizeof(real_T));
  dv1[12260] = 1.0;
  memset(&dv1[12261], 0, 33U * sizeof(real_T));
  dv1[12294] = -1.0;
  memset(&dv1[12295], 0, 99U * sizeof(real_T));
  dv1[12394] = 1.0;
  memset(&dv1[12395], 0, 33U * sizeof(real_T));
  dv1[12428] = -1.0;
  memset(&dv1[12429], 0, 99U * sizeof(real_T));
  dv1[12528] = 1.0;
  memset(&dv1[12529], 0, 33U * sizeof(real_T));
  dv1[12562] = -1.0;
  memset(&dv1[12563], 0, 99U * sizeof(real_T));
  dv1[12662] = 1.0;
  memset(&dv1[12663], 0, 33U * sizeof(real_T));
  dv1[12696] = -1.0;
  memset(&dv1[12697], 0, 99U * sizeof(real_T));
  dv1[12796] = 1.0;
  memset(&dv1[12797], 0, 33U * sizeof(real_T));
  dv1[12830] = -1.0;
  memset(&dv1[12831], 0, 99U * sizeof(real_T));
  dv1[12930] = 1.0;
  memset(&dv1[12931], 0, 33U * sizeof(real_T));
  dv1[12964] = -1.0;
  memset(&dv1[12965], 0, 99U * sizeof(real_T));
  dv1[13064] = 1.0;
  memset(&dv1[13065], 0, 33U * sizeof(real_T));
  dv1[13098] = -1.0;
  memset(&dv1[13099], 0, 99U * sizeof(real_T));
  dv1[13198] = 1.0;
  memset(&dv1[13199], 0, 33U * sizeof(real_T));
  dv1[13232] = -1.0;
  memset(&dv1[13233], 0, 99U * sizeof(real_T));
  dv1[13332] = 1.0;
  memset(&dv1[13333], 0, 33U * sizeof(real_T));
  dv1[13366] = -1.0;
  memset(&dv1[13367], 0, 99U * sizeof(real_T));
  dv1[13466] = 1.0;
  memset(&dv1[13467], 0, 33U * sizeof(real_T));
  dv1[13500] = -1.0;
  memset(&dv1[13501], 0, 728U * sizeof(real_T));
  dv1[14229] = 1.0;
  memset(&dv1[14230], 0, 133U * sizeof(real_T));
  dv1[14363] = -1.0;
  memset(&dv1[14364], 0, 351U * sizeof(real_T));
  dv1[14715] = -1.0;
  memset(&dv1[14716], 0, sizeof(real_T) << 4);
  dv1[14732] = -1.0;
  memset(&dv1[14733], 0, 116U * sizeof(real_T));
  dv1[14849] = -1.0;
  memset(&dv1[14850], 0, sizeof(real_T) << 4);
  dv1[14866] = -1.0;
  memset(&dv1[14867], 0, 116U * sizeof(real_T));
  dv1[14983] = -1.0;
  memset(&dv1[14984], 0, sizeof(real_T) << 4);
  dv1[15000] = -1.0;
  memset(&dv1[15001], 0, 116U * sizeof(real_T));
  dv1[15117] = -1.0;
  memset(&dv1[15118], 0, sizeof(real_T) << 4);
  dv1[15134] = -1.0;
  memset(&dv1[15135], 0, 116U * sizeof(real_T));
  dv1[15251] = -1.0;
  memset(&dv1[15252], 0, sizeof(real_T) << 4);
  dv1[15268] = -1.0;
  memset(&dv1[15269], 0, 116U * sizeof(real_T));
  dv1[15385] = -1.0;
  memset(&dv1[15386], 0, sizeof(real_T) << 4);
  dv1[15402] = -1.0;
  memset(&dv1[15403], 0, 116U * sizeof(real_T));
  dv1[15519] = -1.0;
  memset(&dv1[15520], 0, sizeof(real_T) << 4);
  dv1[15536] = -1.0;
  memset(&dv1[15537], 0, 116U * sizeof(real_T));
  dv1[15653] = -1.0;
  memset(&dv1[15654], 0, sizeof(real_T) << 4);
  dv1[15670] = -1.0;
  memset(&dv1[15671], 0, 116U * sizeof(real_T));
  dv1[15787] = -1.0;
  memset(&dv1[15788], 0, sizeof(real_T) << 4);
  dv1[15804] = -1.0;
  memset(&dv1[15805], 0, 116U * sizeof(real_T));
  dv1[15921] = -1.0;
  memset(&dv1[15922], 0, sizeof(real_T) << 4);
  dv1[15938] = -1.0;
  memset(&dv1[15939], 0, 116U * sizeof(real_T));
  dv1[16055] = -1.0;
  memset(&dv1[16056], 0, sizeof(real_T) << 4);
  dv1[16072] = -1.0;
  memset(&dv1[16073], 0, 116U * sizeof(real_T));
  dv1[16189] = -1.0;
  memset(&dv1[16190], 0, sizeof(real_T) << 4);
  dv1[16206] = -1.0;
  memset(&dv1[16207], 0, 116U * sizeof(real_T));
  dv1[16323] = -1.0;
  memset(&dv1[16324], 0, sizeof(real_T) << 4);
  dv1[16340] = -1.0;
  memset(&dv1[16341], 0, 116U * sizeof(real_T));
  dv1[16457] = -1.0;
  memset(&dv1[16458], 0, sizeof(real_T) << 4);
  dv1[16474] = -1.0;
  memset(&dv1[16475], 0, 116U * sizeof(real_T));
  dv1[16591] = -1.0;
  memset(&dv1[16592], 0, sizeof(real_T) << 4);
  dv1[16608] = -1.0;
  memset(&dv1[16609], 0, 116U * sizeof(real_T));
  dv1[16725] = -1.0;
  memset(&dv1[16726], 0, sizeof(real_T) << 4);
  dv1[16742] = -1.0;
  memset(&dv1[16743], 0, 116U * sizeof(real_T));
  dv1[16859] = -1.0;
  memset(&dv1[16860], 0, sizeof(real_T) << 4);
  dv1[16876] = -1.0;
  memset(&dv1[16877], 0, 2394U * sizeof(real_T));
  dv1[19271] = -1.0;
  dv1[19272] = 0.0;
  dv1[19273] = 0.0;
  dv1[19274] = -1.0;
  memset(&dv1[19275], 0, 130U * sizeof(real_T));
  dv1[19405] = -1.0;
  dv1[19406] = 0.0;
  dv1[19407] = 0.0;
  dv1[19408] = -1.0;
  memset(&dv1[19409], 0, 130U * sizeof(real_T));
  dv1[19539] = -1.0;
  dv1[19540] = 0.0;
  dv1[19541] = 0.0;
  dv1[19542] = -1.0;
  memset(&dv1[19543], 0, 266U * sizeof(real_T));
  dv1[19809] = -1.0;
  dv1[19810] = 0.0;
  dv1[19811] = 0.0;
  dv1[19812] = -1.0;
  memset(&dv1[19813], 0, 130U * sizeof(real_T));
  dv1[19943] = -1.0;
  dv1[19944] = 0.0;
  dv1[19945] = 0.0;
  dv1[19946] = -1.0;
  memset(&dv1[19947], 0, 130U * sizeof(real_T));
  dv1[20077] = -1.0;
  dv1[20078] = 0.0;
  dv1[20079] = 0.0;
  dv1[20080] = -1.0;
  memset(&dv1[20081], 0, 1199U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 133], &dv1[i1 * 133], 133U * sizeof(real_T));
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
  biq[132] = -in9[1];
}

/* End of code generation (IqFast_LeftStart1V12.cpp) */
