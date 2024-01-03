/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart3V12.cpp
 *
 * Code generation for function 'IqFast_LeftStart3V12'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step3.h"
#include "IqFast_LeftStart3V12.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V12.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart3V12(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [20000], real_T biq[125])
{
  int32_T i1;
  real_T dv1[20000];
  real_T t7;
  real_T t3;

  /* IQFAST_LEFTSTART3V12 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART3V12(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     25-Jul-2023 13:31:14 */
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
  memset(&dv1[103], 0, 148U * sizeof(real_T));
  dv1[251] = -1.0;
  memset(&dv1[252], 0, 33U * sizeof(real_T));
  dv1[285] = 1.0;
  memset(&dv1[286], 0, 33U * sizeof(real_T));
  dv1[319] = -in11[2];
  memset(&dv1[320], 0, 33U * sizeof(real_T));
  dv1[353] = -in11[2];
  memset(&dv1[354], 0, 148U * sizeof(real_T));
  dv1[502] = -1.0;
  memset(&dv1[503], 0, 33U * sizeof(real_T));
  dv1[536] = 1.0;
  memset(&dv1[537], 0, 33U * sizeof(real_T));
  dv1[570] = -in11[2];
  memset(&dv1[571], 0, 33U * sizeof(real_T));
  dv1[604] = -in11[2];
  memset(&dv1[605], 0, 148U * sizeof(real_T));
  dv1[753] = -1.0;
  memset(&dv1[754], 0, 33U * sizeof(real_T));
  dv1[787] = 1.0;
  memset(&dv1[788], 0, 33U * sizeof(real_T));
  dv1[821] = -in11[2];
  memset(&dv1[822], 0, 33U * sizeof(real_T));
  dv1[855] = -in11[2];
  memset(&dv1[856], 0, 148U * sizeof(real_T));
  dv1[1004] = -1.0;
  memset(&dv1[1005], 0, 33U * sizeof(real_T));
  dv1[1038] = 1.0;
  memset(&dv1[1039], 0, 33U * sizeof(real_T));
  dv1[1072] = -in11[2];
  memset(&dv1[1073], 0, 33U * sizeof(real_T));
  dv1[1106] = -in11[2];
  memset(&dv1[1107], 0, 148U * sizeof(real_T));
  dv1[1255] = -1.0;
  memset(&dv1[1256], 0, 33U * sizeof(real_T));
  dv1[1289] = 1.0;
  memset(&dv1[1290], 0, 33U * sizeof(real_T));
  dv1[1323] = -in11[2];
  memset(&dv1[1324], 0, 33U * sizeof(real_T));
  dv1[1357] = -in11[2];
  memset(&dv1[1358], 0, 148U * sizeof(real_T));
  dv1[1506] = -1.0;
  memset(&dv1[1507], 0, 33U * sizeof(real_T));
  dv1[1540] = 1.0;
  memset(&dv1[1541], 0, 33U * sizeof(real_T));
  dv1[1574] = -in11[2];
  memset(&dv1[1575], 0, 33U * sizeof(real_T));
  dv1[1608] = -in11[2];
  memset(&dv1[1609], 0, 148U * sizeof(real_T));
  dv1[1757] = -1.0;
  memset(&dv1[1758], 0, 33U * sizeof(real_T));
  dv1[1791] = 1.0;
  memset(&dv1[1792], 0, 33U * sizeof(real_T));
  dv1[1825] = -in11[2];
  memset(&dv1[1826], 0, 33U * sizeof(real_T));
  dv1[1859] = -in11[2];
  memset(&dv1[1860], 0, 148U * sizeof(real_T));
  dv1[2008] = -1.0;
  memset(&dv1[2009], 0, 33U * sizeof(real_T));
  dv1[2042] = 1.0;
  memset(&dv1[2043], 0, 33U * sizeof(real_T));
  dv1[2076] = -in11[2];
  memset(&dv1[2077], 0, 33U * sizeof(real_T));
  dv1[2110] = -in11[2];
  memset(&dv1[2111], 0, 148U * sizeof(real_T));
  dv1[2259] = -1.0;
  memset(&dv1[2260], 0, 33U * sizeof(real_T));
  dv1[2293] = 1.0;
  memset(&dv1[2294], 0, 33U * sizeof(real_T));
  dv1[2327] = -in11[2];
  memset(&dv1[2328], 0, 33U * sizeof(real_T));
  dv1[2361] = -in11[2];
  memset(&dv1[2362], 0, 148U * sizeof(real_T));
  dv1[2510] = -1.0;
  memset(&dv1[2511], 0, 33U * sizeof(real_T));
  dv1[2544] = 1.0;
  memset(&dv1[2545], 0, 33U * sizeof(real_T));
  dv1[2578] = -in11[2];
  memset(&dv1[2579], 0, 33U * sizeof(real_T));
  dv1[2612] = -in11[2];
  memset(&dv1[2613], 0, 148U * sizeof(real_T));
  dv1[2761] = -1.0;
  memset(&dv1[2762], 0, 33U * sizeof(real_T));
  dv1[2795] = 1.0;
  memset(&dv1[2796], 0, 33U * sizeof(real_T));
  dv1[2829] = -in11[2];
  memset(&dv1[2830], 0, 33U * sizeof(real_T));
  dv1[2863] = -in11[2];
  memset(&dv1[2864], 0, 148U * sizeof(real_T));
  dv1[3012] = -1.0;
  memset(&dv1[3013], 0, 33U * sizeof(real_T));
  dv1[3046] = 1.0;
  memset(&dv1[3047], 0, 33U * sizeof(real_T));
  dv1[3080] = -in11[2];
  memset(&dv1[3081], 0, 33U * sizeof(real_T));
  dv1[3114] = -in11[2];
  memset(&dv1[3115], 0, 148U * sizeof(real_T));
  dv1[3263] = -1.0;
  memset(&dv1[3264], 0, 33U * sizeof(real_T));
  dv1[3297] = 1.0;
  memset(&dv1[3298], 0, 33U * sizeof(real_T));
  dv1[3331] = -in11[2];
  memset(&dv1[3332], 0, 33U * sizeof(real_T));
  dv1[3365] = -in11[2];
  memset(&dv1[3366], 0, 148U * sizeof(real_T));
  dv1[3514] = -1.0;
  memset(&dv1[3515], 0, 33U * sizeof(real_T));
  dv1[3548] = 1.0;
  memset(&dv1[3549], 0, 33U * sizeof(real_T));
  dv1[3582] = -in11[2];
  memset(&dv1[3583], 0, 33U * sizeof(real_T));
  dv1[3616] = -in11[2];
  memset(&dv1[3617], 0, 148U * sizeof(real_T));
  dv1[3765] = -1.0;
  memset(&dv1[3766], 0, 33U * sizeof(real_T));
  dv1[3799] = 1.0;
  memset(&dv1[3800], 0, 33U * sizeof(real_T));
  dv1[3833] = -in11[2];
  memset(&dv1[3834], 0, 33U * sizeof(real_T));
  dv1[3867] = -in11[2];
  memset(&dv1[3868], 0, 148U * sizeof(real_T));
  dv1[4016] = -1.0;
  memset(&dv1[4017], 0, 33U * sizeof(real_T));
  dv1[4050] = 1.0;
  memset(&dv1[4051], 0, 33U * sizeof(real_T));
  dv1[4084] = -in11[2];
  memset(&dv1[4085], 0, 33U * sizeof(real_T));
  dv1[4118] = -in11[2];
  memset(&dv1[4119], 0, 148U * sizeof(real_T));
  dv1[4267] = -1.0;
  memset(&dv1[4268], 0, 33U * sizeof(real_T));
  dv1[4301] = 1.0;
  memset(&dv1[4302], 0, sizeof(real_T) << 4);
  dv1[4318] = -in11[3];
  memset(&dv1[4319], 0, 33U * sizeof(real_T));
  dv1[4352] = -in11[3];
  memset(&dv1[4353], 0, 165U * sizeof(real_T));
  dv1[4518] = -1.0;
  memset(&dv1[4519], 0, 33U * sizeof(real_T));
  dv1[4552] = 1.0;
  memset(&dv1[4553], 0, sizeof(real_T) << 4);
  dv1[4569] = -in11[3];
  memset(&dv1[4570], 0, 33U * sizeof(real_T));
  dv1[4603] = -in11[3];
  memset(&dv1[4604], 0, 165U * sizeof(real_T));
  dv1[4769] = -1.0;
  memset(&dv1[4770], 0, 33U * sizeof(real_T));
  dv1[4803] = 1.0;
  memset(&dv1[4804], 0, sizeof(real_T) << 4);
  dv1[4820] = -in11[3];
  memset(&dv1[4821], 0, 33U * sizeof(real_T));
  dv1[4854] = -in11[3];
  memset(&dv1[4855], 0, 165U * sizeof(real_T));
  dv1[5020] = -1.0;
  memset(&dv1[5021], 0, 33U * sizeof(real_T));
  dv1[5054] = 1.0;
  memset(&dv1[5055], 0, sizeof(real_T) << 4);
  dv1[5071] = -in11[3];
  memset(&dv1[5072], 0, 33U * sizeof(real_T));
  dv1[5105] = -in11[3];
  memset(&dv1[5106], 0, 165U * sizeof(real_T));
  dv1[5271] = -1.0;
  memset(&dv1[5272], 0, 33U * sizeof(real_T));
  dv1[5305] = 1.0;
  memset(&dv1[5306], 0, sizeof(real_T) << 4);
  dv1[5322] = -in11[3];
  memset(&dv1[5323], 0, 33U * sizeof(real_T));
  dv1[5356] = -in11[3];
  memset(&dv1[5357], 0, 165U * sizeof(real_T));
  dv1[5522] = -1.0;
  memset(&dv1[5523], 0, 33U * sizeof(real_T));
  dv1[5556] = 1.0;
  memset(&dv1[5557], 0, sizeof(real_T) << 4);
  dv1[5573] = -in11[3];
  memset(&dv1[5574], 0, 33U * sizeof(real_T));
  dv1[5607] = -in11[3];
  memset(&dv1[5608], 0, 165U * sizeof(real_T));
  dv1[5773] = -1.0;
  memset(&dv1[5774], 0, 33U * sizeof(real_T));
  dv1[5807] = 1.0;
  memset(&dv1[5808], 0, sizeof(real_T) << 4);
  dv1[5824] = -in11[3];
  memset(&dv1[5825], 0, 33U * sizeof(real_T));
  dv1[5858] = -in11[3];
  memset(&dv1[5859], 0, 165U * sizeof(real_T));
  dv1[6024] = -1.0;
  memset(&dv1[6025], 0, 33U * sizeof(real_T));
  dv1[6058] = 1.0;
  memset(&dv1[6059], 0, sizeof(real_T) << 4);
  dv1[6075] = -in11[3];
  memset(&dv1[6076], 0, 33U * sizeof(real_T));
  dv1[6109] = -in11[3];
  memset(&dv1[6110], 0, 165U * sizeof(real_T));
  dv1[6275] = -1.0;
  memset(&dv1[6276], 0, 33U * sizeof(real_T));
  dv1[6309] = 1.0;
  memset(&dv1[6310], 0, sizeof(real_T) << 4);
  dv1[6326] = -in11[3];
  memset(&dv1[6327], 0, 33U * sizeof(real_T));
  dv1[6360] = -in11[3];
  memset(&dv1[6361], 0, 165U * sizeof(real_T));
  dv1[6526] = -1.0;
  memset(&dv1[6527], 0, 33U * sizeof(real_T));
  dv1[6560] = 1.0;
  memset(&dv1[6561], 0, sizeof(real_T) << 4);
  dv1[6577] = -in11[3];
  memset(&dv1[6578], 0, 33U * sizeof(real_T));
  dv1[6611] = -in11[3];
  memset(&dv1[6612], 0, 165U * sizeof(real_T));
  dv1[6777] = -1.0;
  memset(&dv1[6778], 0, 33U * sizeof(real_T));
  dv1[6811] = 1.0;
  memset(&dv1[6812], 0, sizeof(real_T) << 4);
  dv1[6828] = -in11[3];
  memset(&dv1[6829], 0, 33U * sizeof(real_T));
  dv1[6862] = -in11[3];
  memset(&dv1[6863], 0, 165U * sizeof(real_T));
  dv1[7028] = -1.0;
  memset(&dv1[7029], 0, 33U * sizeof(real_T));
  dv1[7062] = 1.0;
  memset(&dv1[7063], 0, sizeof(real_T) << 4);
  dv1[7079] = -in11[3];
  memset(&dv1[7080], 0, 33U * sizeof(real_T));
  dv1[7113] = -in11[3];
  memset(&dv1[7114], 0, 165U * sizeof(real_T));
  dv1[7279] = -1.0;
  memset(&dv1[7280], 0, 33U * sizeof(real_T));
  dv1[7313] = 1.0;
  memset(&dv1[7314], 0, sizeof(real_T) << 4);
  dv1[7330] = -in11[3];
  memset(&dv1[7331], 0, 33U * sizeof(real_T));
  dv1[7364] = -in11[3];
  memset(&dv1[7365], 0, 165U * sizeof(real_T));
  dv1[7530] = -1.0;
  memset(&dv1[7531], 0, 33U * sizeof(real_T));
  dv1[7564] = 1.0;
  memset(&dv1[7565], 0, sizeof(real_T) << 4);
  dv1[7581] = -in11[3];
  memset(&dv1[7582], 0, 33U * sizeof(real_T));
  dv1[7615] = -in11[3];
  memset(&dv1[7616], 0, 165U * sizeof(real_T));
  dv1[7781] = -1.0;
  memset(&dv1[7782], 0, 33U * sizeof(real_T));
  dv1[7815] = 1.0;
  memset(&dv1[7816], 0, sizeof(real_T) << 4);
  dv1[7832] = -in11[3];
  memset(&dv1[7833], 0, 33U * sizeof(real_T));
  dv1[7866] = -in11[3];
  memset(&dv1[7867], 0, 165U * sizeof(real_T));
  dv1[8032] = -1.0;
  memset(&dv1[8033], 0, 33U * sizeof(real_T));
  dv1[8066] = 1.0;
  memset(&dv1[8067], 0, sizeof(real_T) << 4);
  dv1[8083] = -in11[3];
  memset(&dv1[8084], 0, 33U * sizeof(real_T));
  dv1[8117] = -in11[3];
  memset(&dv1[8118], 0, 165U * sizeof(real_T));
  dv1[8283] = -1.0;
  memset(&dv1[8284], 0, 33U * sizeof(real_T));
  dv1[8317] = 1.0;
  memset(&dv1[8318], 0, sizeof(real_T) << 4);
  dv1[8334] = -in11[3];
  memset(&dv1[8335], 0, 33U * sizeof(real_T));
  dv1[8368] = -in11[3];
  memset(&dv1[8369], 0, 131U * sizeof(real_T));
  dv1[8500] = 1.0;
  memset(&dv1[8501], 0, 33U * sizeof(real_T));
  dv1[8534] = -1.0;
  memset(&dv1[8535], 0, 84U * sizeof(real_T));
  dv1[8619] = 1.0;
  dv1[8620] = -1.0;
  dv1[8621] = 0.0;
  dv1[8622] = 0.0;
  dv1[8623] = 0.0;
  dv1[8624] = 0.0;
  dv1[8625] = 0.0;
  dv1[8626] = 1.0;
  memset(&dv1[8627], 0, 33U * sizeof(real_T));
  dv1[8660] = -1.0;
  memset(&dv1[8661], 0, 91U * sizeof(real_T));
  dv1[8752] = 1.0;
  memset(&dv1[8753], 0, 33U * sizeof(real_T));
  dv1[8786] = -1.0;
  memset(&dv1[8787], 0, 91U * sizeof(real_T));
  dv1[8878] = 1.0;
  memset(&dv1[8879], 0, 33U * sizeof(real_T));
  dv1[8912] = -1.0;
  memset(&dv1[8913], 0, 91U * sizeof(real_T));
  dv1[9004] = 1.0;
  memset(&dv1[9005], 0, 33U * sizeof(real_T));
  dv1[9038] = -1.0;
  memset(&dv1[9039], 0, 91U * sizeof(real_T));
  dv1[9130] = 1.0;
  memset(&dv1[9131], 0, 33U * sizeof(real_T));
  dv1[9164] = -1.0;
  memset(&dv1[9165], 0, 91U * sizeof(real_T));
  dv1[9256] = 1.0;
  memset(&dv1[9257], 0, 33U * sizeof(real_T));
  dv1[9290] = -1.0;
  memset(&dv1[9291], 0, 91U * sizeof(real_T));
  dv1[9382] = 1.0;
  memset(&dv1[9383], 0, 33U * sizeof(real_T));
  dv1[9416] = -1.0;
  memset(&dv1[9417], 0, 91U * sizeof(real_T));
  dv1[9508] = 1.0;
  memset(&dv1[9509], 0, 33U * sizeof(real_T));
  dv1[9542] = -1.0;
  memset(&dv1[9543], 0, 91U * sizeof(real_T));
  dv1[9634] = 1.0;
  memset(&dv1[9635], 0, 33U * sizeof(real_T));
  dv1[9668] = -1.0;
  memset(&dv1[9669], 0, 91U * sizeof(real_T));
  dv1[9760] = 1.0;
  memset(&dv1[9761], 0, 33U * sizeof(real_T));
  dv1[9794] = -1.0;
  memset(&dv1[9795], 0, 91U * sizeof(real_T));
  dv1[9886] = 1.0;
  memset(&dv1[9887], 0, 33U * sizeof(real_T));
  dv1[9920] = -1.0;
  memset(&dv1[9921], 0, 91U * sizeof(real_T));
  dv1[10012] = 1.0;
  memset(&dv1[10013], 0, 33U * sizeof(real_T));
  dv1[10046] = -1.0;
  memset(&dv1[10047], 0, 91U * sizeof(real_T));
  dv1[10138] = 1.0;
  memset(&dv1[10139], 0, 33U * sizeof(real_T));
  dv1[10172] = -1.0;
  memset(&dv1[10173], 0, 91U * sizeof(real_T));
  dv1[10264] = 1.0;
  memset(&dv1[10265], 0, 33U * sizeof(real_T));
  dv1[10298] = -1.0;
  memset(&dv1[10299], 0, 91U * sizeof(real_T));
  dv1[10390] = 1.0;
  memset(&dv1[10391], 0, 33U * sizeof(real_T));
  dv1[10424] = -1.0;
  memset(&dv1[10425], 0, 91U * sizeof(real_T));
  dv1[10516] = 1.0;
  memset(&dv1[10517], 0, 33U * sizeof(real_T));
  dv1[10550] = -1.0;
  memset(&dv1[10551], 0, 91U * sizeof(real_T));
  dv1[10642] = 1.0;
  memset(&dv1[10643], 0, 33U * sizeof(real_T));
  dv1[10676] = -1.0;
  memset(&dv1[10677], 0, 69U * sizeof(real_T));
  dv1[10746] = 1.0;
  dv1[10747] = -1.0;
  memset(&dv1[10748], 0, 20U * sizeof(real_T));
  dv1[10768] = 1.0;
  memset(&dv1[10769], 0, 33U * sizeof(real_T));
  dv1[10802] = -1.0;
  memset(&dv1[10803], 0, 91U * sizeof(real_T));
  dv1[10894] = 1.0;
  memset(&dv1[10895], 0, 33U * sizeof(real_T));
  dv1[10928] = -1.0;
  memset(&dv1[10929], 0, 91U * sizeof(real_T));
  dv1[11020] = 1.0;
  memset(&dv1[11021], 0, 33U * sizeof(real_T));
  dv1[11054] = -1.0;
  memset(&dv1[11055], 0, 91U * sizeof(real_T));
  dv1[11146] = 1.0;
  memset(&dv1[11147], 0, 33U * sizeof(real_T));
  dv1[11180] = -1.0;
  memset(&dv1[11181], 0, 91U * sizeof(real_T));
  dv1[11272] = 1.0;
  memset(&dv1[11273], 0, 33U * sizeof(real_T));
  dv1[11306] = -1.0;
  memset(&dv1[11307], 0, 91U * sizeof(real_T));
  dv1[11398] = 1.0;
  memset(&dv1[11399], 0, 33U * sizeof(real_T));
  dv1[11432] = -1.0;
  memset(&dv1[11433], 0, 91U * sizeof(real_T));
  dv1[11524] = 1.0;
  memset(&dv1[11525], 0, 33U * sizeof(real_T));
  dv1[11558] = -1.0;
  memset(&dv1[11559], 0, 91U * sizeof(real_T));
  dv1[11650] = 1.0;
  memset(&dv1[11651], 0, 33U * sizeof(real_T));
  dv1[11684] = -1.0;
  memset(&dv1[11685], 0, 91U * sizeof(real_T));
  dv1[11776] = 1.0;
  memset(&dv1[11777], 0, 33U * sizeof(real_T));
  dv1[11810] = -1.0;
  memset(&dv1[11811], 0, 91U * sizeof(real_T));
  dv1[11902] = 1.0;
  memset(&dv1[11903], 0, 33U * sizeof(real_T));
  dv1[11936] = -1.0;
  memset(&dv1[11937], 0, 91U * sizeof(real_T));
  dv1[12028] = 1.0;
  memset(&dv1[12029], 0, 33U * sizeof(real_T));
  dv1[12062] = -1.0;
  memset(&dv1[12063], 0, 91U * sizeof(real_T));
  dv1[12154] = 1.0;
  memset(&dv1[12155], 0, 33U * sizeof(real_T));
  dv1[12188] = -1.0;
  memset(&dv1[12189], 0, 91U * sizeof(real_T));
  dv1[12280] = 1.0;
  memset(&dv1[12281], 0, 33U * sizeof(real_T));
  dv1[12314] = -1.0;
  memset(&dv1[12315], 0, 91U * sizeof(real_T));
  dv1[12406] = 1.0;
  memset(&dv1[12407], 0, 33U * sizeof(real_T));
  dv1[12440] = -1.0;
  memset(&dv1[12441], 0, 91U * sizeof(real_T));
  dv1[12532] = 1.0;
  memset(&dv1[12533], 0, 33U * sizeof(real_T));
  dv1[12566] = -1.0;
  memset(&dv1[12567], 0, 91U * sizeof(real_T));
  dv1[12658] = 1.0;
  memset(&dv1[12659], 0, 33U * sizeof(real_T));
  dv1[12692] = -1.0;
  memset(&dv1[12693], 0, 680U * sizeof(real_T));
  dv1[13373] = 1.0;
  memset(&dv1[13374], 0, 125U * sizeof(real_T));
  dv1[13499] = -1.0;
  memset(&dv1[13500], 0, 335U * sizeof(real_T));
  dv1[13835] = -1.0;
  memset(&dv1[13836], 0, sizeof(real_T) << 4);
  dv1[13852] = -1.0;
  memset(&dv1[13853], 0, 108U * sizeof(real_T));
  dv1[13961] = -1.0;
  memset(&dv1[13962], 0, sizeof(real_T) << 4);
  dv1[13978] = -1.0;
  memset(&dv1[13979], 0, 108U * sizeof(real_T));
  dv1[14087] = -1.0;
  memset(&dv1[14088], 0, sizeof(real_T) << 4);
  dv1[14104] = -1.0;
  memset(&dv1[14105], 0, 108U * sizeof(real_T));
  dv1[14213] = -1.0;
  memset(&dv1[14214], 0, sizeof(real_T) << 4);
  dv1[14230] = -1.0;
  memset(&dv1[14231], 0, 108U * sizeof(real_T));
  dv1[14339] = -1.0;
  memset(&dv1[14340], 0, sizeof(real_T) << 4);
  dv1[14356] = -1.0;
  memset(&dv1[14357], 0, 108U * sizeof(real_T));
  dv1[14465] = -1.0;
  memset(&dv1[14466], 0, sizeof(real_T) << 4);
  dv1[14482] = -1.0;
  memset(&dv1[14483], 0, 108U * sizeof(real_T));
  dv1[14591] = -1.0;
  memset(&dv1[14592], 0, sizeof(real_T) << 4);
  dv1[14608] = -1.0;
  memset(&dv1[14609], 0, 108U * sizeof(real_T));
  dv1[14717] = -1.0;
  memset(&dv1[14718], 0, sizeof(real_T) << 4);
  dv1[14734] = -1.0;
  memset(&dv1[14735], 0, 108U * sizeof(real_T));
  dv1[14843] = -1.0;
  memset(&dv1[14844], 0, sizeof(real_T) << 4);
  dv1[14860] = -1.0;
  memset(&dv1[14861], 0, 108U * sizeof(real_T));
  dv1[14969] = -1.0;
  memset(&dv1[14970], 0, sizeof(real_T) << 4);
  dv1[14986] = -1.0;
  memset(&dv1[14987], 0, 108U * sizeof(real_T));
  dv1[15095] = -1.0;
  memset(&dv1[15096], 0, sizeof(real_T) << 4);
  dv1[15112] = -1.0;
  memset(&dv1[15113], 0, 108U * sizeof(real_T));
  dv1[15221] = -1.0;
  memset(&dv1[15222], 0, sizeof(real_T) << 4);
  dv1[15238] = -1.0;
  memset(&dv1[15239], 0, 108U * sizeof(real_T));
  dv1[15347] = -1.0;
  memset(&dv1[15348], 0, sizeof(real_T) << 4);
  dv1[15364] = -1.0;
  memset(&dv1[15365], 0, 108U * sizeof(real_T));
  dv1[15473] = -1.0;
  memset(&dv1[15474], 0, sizeof(real_T) << 4);
  dv1[15490] = -1.0;
  memset(&dv1[15491], 0, 108U * sizeof(real_T));
  dv1[15599] = -1.0;
  memset(&dv1[15600], 0, sizeof(real_T) << 4);
  dv1[15616] = -1.0;
  memset(&dv1[15617], 0, 108U * sizeof(real_T));
  dv1[15725] = -1.0;
  memset(&dv1[15726], 0, sizeof(real_T) << 4);
  dv1[15742] = -1.0;
  memset(&dv1[15743], 0, 108U * sizeof(real_T));
  dv1[15851] = -1.0;
  memset(&dv1[15852], 0, sizeof(real_T) << 4);
  dv1[15868] = -1.0;
  memset(&dv1[15869], 0, 2250U * sizeof(real_T));
  dv1[18119] = -1.0;
  dv1[18120] = -1.0;
  memset(&dv1[18121], 0, 500U * sizeof(real_T));
  dv1[18621] = -1.0;
  dv1[18622] = -1.0;
  memset(&dv1[18623], 0, 1377U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 125], &dv1[i1 * 125], 125U * sizeof(real_T));
  }

  t7 = muDoubleScalarAbs(in11[2]);
  t3 = muDoubleScalarAbs(in11[3]);
  t7 = 1.0 / muDoubleScalarSqrt(t7 * t7 + t3 * t3);
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
  biq[119] = Cpx1 + in8[0];
  biq[120] = -Cpx1 + in8[0];
  biq[121] = Cpy1 + in9[0];
  biq[122] = -Cpy1 + in9[0];
  biq[123] = -in9[1];
  biq[124] = -in9[1];
}

/* End of code generation (IqFast_LeftStart3V12.cpp) */
