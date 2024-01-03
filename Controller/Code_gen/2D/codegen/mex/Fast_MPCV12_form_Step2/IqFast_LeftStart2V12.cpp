/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart2V12.cpp
 *
 * Code generation for function 'IqFast_LeftStart2V12'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step2.h"
#include "IqFast_LeftStart2V12.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V12",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V12.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart2V12(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [20640], real_T biq[129])
{
  int32_T i1;
  real_T dv1[20640];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART2V12 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART2V12(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     25-Jul-2023 13:28:29 */
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
  memset(&dv1[103], 0, 156U * sizeof(real_T));
  dv1[259] = -1.0;
  memset(&dv1[260], 0, 33U * sizeof(real_T));
  dv1[293] = 1.0;
  memset(&dv1[294], 0, 33U * sizeof(real_T));
  dv1[327] = -in11[2];
  memset(&dv1[328], 0, 33U * sizeof(real_T));
  dv1[361] = -in11[2];
  memset(&dv1[362], 0, 156U * sizeof(real_T));
  dv1[518] = -1.0;
  memset(&dv1[519], 0, 33U * sizeof(real_T));
  dv1[552] = 1.0;
  memset(&dv1[553], 0, 33U * sizeof(real_T));
  dv1[586] = -in11[2];
  memset(&dv1[587], 0, 33U * sizeof(real_T));
  dv1[620] = -in11[2];
  memset(&dv1[621], 0, 156U * sizeof(real_T));
  dv1[777] = -1.0;
  memset(&dv1[778], 0, 33U * sizeof(real_T));
  dv1[811] = 1.0;
  memset(&dv1[812], 0, 33U * sizeof(real_T));
  dv1[845] = -in11[2];
  memset(&dv1[846], 0, 33U * sizeof(real_T));
  dv1[879] = -in11[2];
  memset(&dv1[880], 0, 156U * sizeof(real_T));
  dv1[1036] = -1.0;
  memset(&dv1[1037], 0, 33U * sizeof(real_T));
  dv1[1070] = 1.0;
  memset(&dv1[1071], 0, 33U * sizeof(real_T));
  dv1[1104] = -in11[2];
  memset(&dv1[1105], 0, 33U * sizeof(real_T));
  dv1[1138] = -in11[2];
  memset(&dv1[1139], 0, 156U * sizeof(real_T));
  dv1[1295] = -1.0;
  memset(&dv1[1296], 0, 33U * sizeof(real_T));
  dv1[1329] = 1.0;
  memset(&dv1[1330], 0, 33U * sizeof(real_T));
  dv1[1363] = -in11[2];
  memset(&dv1[1364], 0, 33U * sizeof(real_T));
  dv1[1397] = -in11[2];
  memset(&dv1[1398], 0, 156U * sizeof(real_T));
  dv1[1554] = -1.0;
  memset(&dv1[1555], 0, 33U * sizeof(real_T));
  dv1[1588] = 1.0;
  memset(&dv1[1589], 0, 33U * sizeof(real_T));
  dv1[1622] = -in11[2];
  memset(&dv1[1623], 0, 33U * sizeof(real_T));
  dv1[1656] = -in11[2];
  memset(&dv1[1657], 0, 156U * sizeof(real_T));
  dv1[1813] = -1.0;
  memset(&dv1[1814], 0, 33U * sizeof(real_T));
  dv1[1847] = 1.0;
  memset(&dv1[1848], 0, 33U * sizeof(real_T));
  dv1[1881] = -in11[2];
  memset(&dv1[1882], 0, 33U * sizeof(real_T));
  dv1[1915] = -in11[2];
  memset(&dv1[1916], 0, 156U * sizeof(real_T));
  dv1[2072] = -1.0;
  memset(&dv1[2073], 0, 33U * sizeof(real_T));
  dv1[2106] = 1.0;
  memset(&dv1[2107], 0, 33U * sizeof(real_T));
  dv1[2140] = -in11[2];
  memset(&dv1[2141], 0, 33U * sizeof(real_T));
  dv1[2174] = -in11[2];
  memset(&dv1[2175], 0, 156U * sizeof(real_T));
  dv1[2331] = -1.0;
  memset(&dv1[2332], 0, 33U * sizeof(real_T));
  dv1[2365] = 1.0;
  memset(&dv1[2366], 0, 33U * sizeof(real_T));
  dv1[2399] = -in11[2];
  memset(&dv1[2400], 0, 33U * sizeof(real_T));
  dv1[2433] = -in11[2];
  memset(&dv1[2434], 0, 156U * sizeof(real_T));
  dv1[2590] = -1.0;
  memset(&dv1[2591], 0, 33U * sizeof(real_T));
  dv1[2624] = 1.0;
  memset(&dv1[2625], 0, 33U * sizeof(real_T));
  dv1[2658] = -in11[2];
  memset(&dv1[2659], 0, 33U * sizeof(real_T));
  dv1[2692] = -in11[2];
  memset(&dv1[2693], 0, 156U * sizeof(real_T));
  dv1[2849] = -1.0;
  memset(&dv1[2850], 0, 33U * sizeof(real_T));
  dv1[2883] = 1.0;
  memset(&dv1[2884], 0, 33U * sizeof(real_T));
  dv1[2917] = -in11[2];
  memset(&dv1[2918], 0, 33U * sizeof(real_T));
  dv1[2951] = -in11[2];
  memset(&dv1[2952], 0, 156U * sizeof(real_T));
  dv1[3108] = -1.0;
  memset(&dv1[3109], 0, 33U * sizeof(real_T));
  dv1[3142] = 1.0;
  memset(&dv1[3143], 0, 33U * sizeof(real_T));
  dv1[3176] = -in11[2];
  memset(&dv1[3177], 0, 33U * sizeof(real_T));
  dv1[3210] = -in11[2];
  memset(&dv1[3211], 0, 156U * sizeof(real_T));
  dv1[3367] = -1.0;
  memset(&dv1[3368], 0, 33U * sizeof(real_T));
  dv1[3401] = 1.0;
  memset(&dv1[3402], 0, 33U * sizeof(real_T));
  dv1[3435] = -in11[2];
  memset(&dv1[3436], 0, 33U * sizeof(real_T));
  dv1[3469] = -in11[2];
  memset(&dv1[3470], 0, 156U * sizeof(real_T));
  dv1[3626] = -1.0;
  memset(&dv1[3627], 0, 33U * sizeof(real_T));
  dv1[3660] = 1.0;
  memset(&dv1[3661], 0, 33U * sizeof(real_T));
  dv1[3694] = -in11[2];
  memset(&dv1[3695], 0, 33U * sizeof(real_T));
  dv1[3728] = -in11[2];
  memset(&dv1[3729], 0, 156U * sizeof(real_T));
  dv1[3885] = -1.0;
  memset(&dv1[3886], 0, 33U * sizeof(real_T));
  dv1[3919] = 1.0;
  memset(&dv1[3920], 0, 33U * sizeof(real_T));
  dv1[3953] = -in11[2];
  memset(&dv1[3954], 0, 33U * sizeof(real_T));
  dv1[3987] = -in11[2];
  memset(&dv1[3988], 0, 156U * sizeof(real_T));
  dv1[4144] = -1.0;
  memset(&dv1[4145], 0, 33U * sizeof(real_T));
  dv1[4178] = 1.0;
  memset(&dv1[4179], 0, 33U * sizeof(real_T));
  dv1[4212] = -in11[2];
  memset(&dv1[4213], 0, 33U * sizeof(real_T));
  dv1[4246] = -in11[2];
  memset(&dv1[4247], 0, 156U * sizeof(real_T));
  dv1[4403] = -1.0;
  memset(&dv1[4404], 0, 33U * sizeof(real_T));
  dv1[4437] = 1.0;
  memset(&dv1[4438], 0, sizeof(real_T) << 4);
  dv1[4454] = -in11[3];
  memset(&dv1[4455], 0, 33U * sizeof(real_T));
  dv1[4488] = -in11[3];
  memset(&dv1[4489], 0, 173U * sizeof(real_T));
  dv1[4662] = -1.0;
  memset(&dv1[4663], 0, 33U * sizeof(real_T));
  dv1[4696] = 1.0;
  memset(&dv1[4697], 0, sizeof(real_T) << 4);
  dv1[4713] = -in11[3];
  memset(&dv1[4714], 0, 33U * sizeof(real_T));
  dv1[4747] = -in11[3];
  memset(&dv1[4748], 0, 173U * sizeof(real_T));
  dv1[4921] = -1.0;
  memset(&dv1[4922], 0, 33U * sizeof(real_T));
  dv1[4955] = 1.0;
  memset(&dv1[4956], 0, sizeof(real_T) << 4);
  dv1[4972] = -in11[3];
  memset(&dv1[4973], 0, 33U * sizeof(real_T));
  dv1[5006] = -in11[3];
  memset(&dv1[5007], 0, 173U * sizeof(real_T));
  dv1[5180] = -1.0;
  memset(&dv1[5181], 0, 33U * sizeof(real_T));
  dv1[5214] = 1.0;
  memset(&dv1[5215], 0, sizeof(real_T) << 4);
  dv1[5231] = -in11[3];
  memset(&dv1[5232], 0, 33U * sizeof(real_T));
  dv1[5265] = -in11[3];
  memset(&dv1[5266], 0, 173U * sizeof(real_T));
  dv1[5439] = -1.0;
  memset(&dv1[5440], 0, 33U * sizeof(real_T));
  dv1[5473] = 1.0;
  memset(&dv1[5474], 0, sizeof(real_T) << 4);
  dv1[5490] = -in11[3];
  memset(&dv1[5491], 0, 33U * sizeof(real_T));
  dv1[5524] = -in11[3];
  memset(&dv1[5525], 0, 173U * sizeof(real_T));
  dv1[5698] = -1.0;
  memset(&dv1[5699], 0, 33U * sizeof(real_T));
  dv1[5732] = 1.0;
  memset(&dv1[5733], 0, sizeof(real_T) << 4);
  dv1[5749] = -in11[3];
  memset(&dv1[5750], 0, 33U * sizeof(real_T));
  dv1[5783] = -in11[3];
  memset(&dv1[5784], 0, 173U * sizeof(real_T));
  dv1[5957] = -1.0;
  memset(&dv1[5958], 0, 33U * sizeof(real_T));
  dv1[5991] = 1.0;
  memset(&dv1[5992], 0, sizeof(real_T) << 4);
  dv1[6008] = -in11[3];
  memset(&dv1[6009], 0, 33U * sizeof(real_T));
  dv1[6042] = -in11[3];
  memset(&dv1[6043], 0, 173U * sizeof(real_T));
  dv1[6216] = -1.0;
  memset(&dv1[6217], 0, 33U * sizeof(real_T));
  dv1[6250] = 1.0;
  memset(&dv1[6251], 0, sizeof(real_T) << 4);
  dv1[6267] = -in11[3];
  memset(&dv1[6268], 0, 33U * sizeof(real_T));
  dv1[6301] = -in11[3];
  memset(&dv1[6302], 0, 173U * sizeof(real_T));
  dv1[6475] = -1.0;
  memset(&dv1[6476], 0, 33U * sizeof(real_T));
  dv1[6509] = 1.0;
  memset(&dv1[6510], 0, sizeof(real_T) << 4);
  dv1[6526] = -in11[3];
  memset(&dv1[6527], 0, 33U * sizeof(real_T));
  dv1[6560] = -in11[3];
  memset(&dv1[6561], 0, 173U * sizeof(real_T));
  dv1[6734] = -1.0;
  memset(&dv1[6735], 0, 33U * sizeof(real_T));
  dv1[6768] = 1.0;
  memset(&dv1[6769], 0, sizeof(real_T) << 4);
  dv1[6785] = -in11[3];
  memset(&dv1[6786], 0, 33U * sizeof(real_T));
  dv1[6819] = -in11[3];
  memset(&dv1[6820], 0, 173U * sizeof(real_T));
  dv1[6993] = -1.0;
  memset(&dv1[6994], 0, 33U * sizeof(real_T));
  dv1[7027] = 1.0;
  memset(&dv1[7028], 0, sizeof(real_T) << 4);
  dv1[7044] = -in11[3];
  memset(&dv1[7045], 0, 33U * sizeof(real_T));
  dv1[7078] = -in11[3];
  memset(&dv1[7079], 0, 173U * sizeof(real_T));
  dv1[7252] = -1.0;
  memset(&dv1[7253], 0, 33U * sizeof(real_T));
  dv1[7286] = 1.0;
  memset(&dv1[7287], 0, sizeof(real_T) << 4);
  dv1[7303] = -in11[3];
  memset(&dv1[7304], 0, 33U * sizeof(real_T));
  dv1[7337] = -in11[3];
  memset(&dv1[7338], 0, 173U * sizeof(real_T));
  dv1[7511] = -1.0;
  memset(&dv1[7512], 0, 33U * sizeof(real_T));
  dv1[7545] = 1.0;
  memset(&dv1[7546], 0, sizeof(real_T) << 4);
  dv1[7562] = -in11[3];
  memset(&dv1[7563], 0, 33U * sizeof(real_T));
  dv1[7596] = -in11[3];
  memset(&dv1[7597], 0, 173U * sizeof(real_T));
  dv1[7770] = -1.0;
  memset(&dv1[7771], 0, 33U * sizeof(real_T));
  dv1[7804] = 1.0;
  memset(&dv1[7805], 0, sizeof(real_T) << 4);
  dv1[7821] = -in11[3];
  memset(&dv1[7822], 0, 33U * sizeof(real_T));
  dv1[7855] = -in11[3];
  memset(&dv1[7856], 0, 173U * sizeof(real_T));
  dv1[8029] = -1.0;
  memset(&dv1[8030], 0, 33U * sizeof(real_T));
  dv1[8063] = 1.0;
  memset(&dv1[8064], 0, sizeof(real_T) << 4);
  dv1[8080] = -in11[3];
  memset(&dv1[8081], 0, 33U * sizeof(real_T));
  dv1[8114] = -in11[3];
  memset(&dv1[8115], 0, 173U * sizeof(real_T));
  dv1[8288] = -1.0;
  memset(&dv1[8289], 0, 33U * sizeof(real_T));
  dv1[8322] = 1.0;
  memset(&dv1[8323], 0, sizeof(real_T) << 4);
  dv1[8339] = -in11[3];
  memset(&dv1[8340], 0, 33U * sizeof(real_T));
  dv1[8373] = -in11[3];
  memset(&dv1[8374], 0, 173U * sizeof(real_T));
  dv1[8547] = -1.0;
  memset(&dv1[8548], 0, 33U * sizeof(real_T));
  dv1[8581] = 1.0;
  memset(&dv1[8582], 0, sizeof(real_T) << 4);
  dv1[8598] = -in11[3];
  memset(&dv1[8599], 0, 33U * sizeof(real_T));
  dv1[8632] = -in11[3];
  memset(&dv1[8633], 0, 139U * sizeof(real_T));
  dv1[8772] = 1.0;
  memset(&dv1[8773], 0, 33U * sizeof(real_T));
  dv1[8806] = -1.0;
  memset(&dv1[8807], 0, 84U * sizeof(real_T));
  dv1[8891] = 1.0;
  dv1[8892] = 0.0;
  dv1[8893] = -1.0;
  memset(&dv1[8894], 0, sizeof(real_T) << 3);
  dv1[8902] = 1.0;
  memset(&dv1[8903], 0, 33U * sizeof(real_T));
  dv1[8936] = -1.0;
  memset(&dv1[8937], 0, 84U * sizeof(real_T));
  dv1[9021] = 1.0;
  dv1[9022] = 0.0;
  dv1[9023] = -1.0;
  memset(&dv1[9024], 0, sizeof(real_T) << 3);
  dv1[9032] = 1.0;
  memset(&dv1[9033], 0, 33U * sizeof(real_T));
  dv1[9066] = -1.0;
  memset(&dv1[9067], 0, 95U * sizeof(real_T));
  dv1[9162] = 1.0;
  memset(&dv1[9163], 0, 33U * sizeof(real_T));
  dv1[9196] = -1.0;
  memset(&dv1[9197], 0, 95U * sizeof(real_T));
  dv1[9292] = 1.0;
  memset(&dv1[9293], 0, 33U * sizeof(real_T));
  dv1[9326] = -1.0;
  memset(&dv1[9327], 0, 95U * sizeof(real_T));
  dv1[9422] = 1.0;
  memset(&dv1[9423], 0, 33U * sizeof(real_T));
  dv1[9456] = -1.0;
  memset(&dv1[9457], 0, 95U * sizeof(real_T));
  dv1[9552] = 1.0;
  memset(&dv1[9553], 0, 33U * sizeof(real_T));
  dv1[9586] = -1.0;
  memset(&dv1[9587], 0, 95U * sizeof(real_T));
  dv1[9682] = 1.0;
  memset(&dv1[9683], 0, 33U * sizeof(real_T));
  dv1[9716] = -1.0;
  memset(&dv1[9717], 0, 95U * sizeof(real_T));
  dv1[9812] = 1.0;
  memset(&dv1[9813], 0, 33U * sizeof(real_T));
  dv1[9846] = -1.0;
  memset(&dv1[9847], 0, 95U * sizeof(real_T));
  dv1[9942] = 1.0;
  memset(&dv1[9943], 0, 33U * sizeof(real_T));
  dv1[9976] = -1.0;
  memset(&dv1[9977], 0, 95U * sizeof(real_T));
  dv1[10072] = 1.0;
  memset(&dv1[10073], 0, 33U * sizeof(real_T));
  dv1[10106] = -1.0;
  memset(&dv1[10107], 0, 95U * sizeof(real_T));
  dv1[10202] = 1.0;
  memset(&dv1[10203], 0, 33U * sizeof(real_T));
  dv1[10236] = -1.0;
  memset(&dv1[10237], 0, 95U * sizeof(real_T));
  dv1[10332] = 1.0;
  memset(&dv1[10333], 0, 33U * sizeof(real_T));
  dv1[10366] = -1.0;
  memset(&dv1[10367], 0, 95U * sizeof(real_T));
  dv1[10462] = 1.0;
  memset(&dv1[10463], 0, 33U * sizeof(real_T));
  dv1[10496] = -1.0;
  memset(&dv1[10497], 0, 95U * sizeof(real_T));
  dv1[10592] = 1.0;
  memset(&dv1[10593], 0, 33U * sizeof(real_T));
  dv1[10626] = -1.0;
  memset(&dv1[10627], 0, 95U * sizeof(real_T));
  dv1[10722] = 1.0;
  memset(&dv1[10723], 0, 33U * sizeof(real_T));
  dv1[10756] = -1.0;
  memset(&dv1[10757], 0, 95U * sizeof(real_T));
  dv1[10852] = 1.0;
  memset(&dv1[10853], 0, 33U * sizeof(real_T));
  dv1[10886] = -1.0;
  memset(&dv1[10887], 0, 95U * sizeof(real_T));
  dv1[10982] = 1.0;
  memset(&dv1[10983], 0, 33U * sizeof(real_T));
  dv1[11016] = -1.0;
  memset(&dv1[11017], 0, 71U * sizeof(real_T));
  dv1[11088] = 1.0;
  dv1[11089] = 0.0;
  dv1[11090] = -1.0;
  memset(&dv1[11091], 0, 21U * sizeof(real_T));
  dv1[11112] = 1.0;
  memset(&dv1[11113], 0, 33U * sizeof(real_T));
  dv1[11146] = -1.0;
  memset(&dv1[11147], 0, 71U * sizeof(real_T));
  dv1[11218] = 1.0;
  dv1[11219] = 0.0;
  dv1[11220] = -1.0;
  memset(&dv1[11221], 0, 21U * sizeof(real_T));
  dv1[11242] = 1.0;
  memset(&dv1[11243], 0, 33U * sizeof(real_T));
  dv1[11276] = -1.0;
  memset(&dv1[11277], 0, 95U * sizeof(real_T));
  dv1[11372] = 1.0;
  memset(&dv1[11373], 0, 33U * sizeof(real_T));
  dv1[11406] = -1.0;
  memset(&dv1[11407], 0, 95U * sizeof(real_T));
  dv1[11502] = 1.0;
  memset(&dv1[11503], 0, 33U * sizeof(real_T));
  dv1[11536] = -1.0;
  memset(&dv1[11537], 0, 95U * sizeof(real_T));
  dv1[11632] = 1.0;
  memset(&dv1[11633], 0, 33U * sizeof(real_T));
  dv1[11666] = -1.0;
  memset(&dv1[11667], 0, 95U * sizeof(real_T));
  dv1[11762] = 1.0;
  memset(&dv1[11763], 0, 33U * sizeof(real_T));
  dv1[11796] = -1.0;
  memset(&dv1[11797], 0, 95U * sizeof(real_T));
  dv1[11892] = 1.0;
  memset(&dv1[11893], 0, 33U * sizeof(real_T));
  dv1[11926] = -1.0;
  memset(&dv1[11927], 0, 95U * sizeof(real_T));
  dv1[12022] = 1.0;
  memset(&dv1[12023], 0, 33U * sizeof(real_T));
  dv1[12056] = -1.0;
  memset(&dv1[12057], 0, 95U * sizeof(real_T));
  dv1[12152] = 1.0;
  memset(&dv1[12153], 0, 33U * sizeof(real_T));
  dv1[12186] = -1.0;
  memset(&dv1[12187], 0, 95U * sizeof(real_T));
  dv1[12282] = 1.0;
  memset(&dv1[12283], 0, 33U * sizeof(real_T));
  dv1[12316] = -1.0;
  memset(&dv1[12317], 0, 95U * sizeof(real_T));
  dv1[12412] = 1.0;
  memset(&dv1[12413], 0, 33U * sizeof(real_T));
  dv1[12446] = -1.0;
  memset(&dv1[12447], 0, 95U * sizeof(real_T));
  dv1[12542] = 1.0;
  memset(&dv1[12543], 0, 33U * sizeof(real_T));
  dv1[12576] = -1.0;
  memset(&dv1[12577], 0, 95U * sizeof(real_T));
  dv1[12672] = 1.0;
  memset(&dv1[12673], 0, 33U * sizeof(real_T));
  dv1[12706] = -1.0;
  memset(&dv1[12707], 0, 95U * sizeof(real_T));
  dv1[12802] = 1.0;
  memset(&dv1[12803], 0, 33U * sizeof(real_T));
  dv1[12836] = -1.0;
  memset(&dv1[12837], 0, 95U * sizeof(real_T));
  dv1[12932] = 1.0;
  memset(&dv1[12933], 0, 33U * sizeof(real_T));
  dv1[12966] = -1.0;
  memset(&dv1[12967], 0, 95U * sizeof(real_T));
  dv1[13062] = 1.0;
  memset(&dv1[13063], 0, 33U * sizeof(real_T));
  dv1[13096] = -1.0;
  memset(&dv1[13097], 0, 704U * sizeof(real_T));
  dv1[13801] = 1.0;
  memset(&dv1[13802], 0, 129U * sizeof(real_T));
  dv1[13931] = -1.0;
  memset(&dv1[13932], 0, 343U * sizeof(real_T));
  dv1[14275] = -1.0;
  memset(&dv1[14276], 0, sizeof(real_T) << 4);
  dv1[14292] = -1.0;
  memset(&dv1[14293], 0, 112U * sizeof(real_T));
  dv1[14405] = -1.0;
  memset(&dv1[14406], 0, sizeof(real_T) << 4);
  dv1[14422] = -1.0;
  memset(&dv1[14423], 0, 112U * sizeof(real_T));
  dv1[14535] = -1.0;
  memset(&dv1[14536], 0, sizeof(real_T) << 4);
  dv1[14552] = -1.0;
  memset(&dv1[14553], 0, 112U * sizeof(real_T));
  dv1[14665] = -1.0;
  memset(&dv1[14666], 0, sizeof(real_T) << 4);
  dv1[14682] = -1.0;
  memset(&dv1[14683], 0, 112U * sizeof(real_T));
  dv1[14795] = -1.0;
  memset(&dv1[14796], 0, sizeof(real_T) << 4);
  dv1[14812] = -1.0;
  memset(&dv1[14813], 0, 112U * sizeof(real_T));
  dv1[14925] = -1.0;
  memset(&dv1[14926], 0, sizeof(real_T) << 4);
  dv1[14942] = -1.0;
  memset(&dv1[14943], 0, 112U * sizeof(real_T));
  dv1[15055] = -1.0;
  memset(&dv1[15056], 0, sizeof(real_T) << 4);
  dv1[15072] = -1.0;
  memset(&dv1[15073], 0, 112U * sizeof(real_T));
  dv1[15185] = -1.0;
  memset(&dv1[15186], 0, sizeof(real_T) << 4);
  dv1[15202] = -1.0;
  memset(&dv1[15203], 0, 112U * sizeof(real_T));
  dv1[15315] = -1.0;
  memset(&dv1[15316], 0, sizeof(real_T) << 4);
  dv1[15332] = -1.0;
  memset(&dv1[15333], 0, 112U * sizeof(real_T));
  dv1[15445] = -1.0;
  memset(&dv1[15446], 0, sizeof(real_T) << 4);
  dv1[15462] = -1.0;
  memset(&dv1[15463], 0, 112U * sizeof(real_T));
  dv1[15575] = -1.0;
  memset(&dv1[15576], 0, sizeof(real_T) << 4);
  dv1[15592] = -1.0;
  memset(&dv1[15593], 0, 112U * sizeof(real_T));
  dv1[15705] = -1.0;
  memset(&dv1[15706], 0, sizeof(real_T) << 4);
  dv1[15722] = -1.0;
  memset(&dv1[15723], 0, 112U * sizeof(real_T));
  dv1[15835] = -1.0;
  memset(&dv1[15836], 0, sizeof(real_T) << 4);
  dv1[15852] = -1.0;
  memset(&dv1[15853], 0, 112U * sizeof(real_T));
  dv1[15965] = -1.0;
  memset(&dv1[15966], 0, sizeof(real_T) << 4);
  dv1[15982] = -1.0;
  memset(&dv1[15983], 0, 112U * sizeof(real_T));
  dv1[16095] = -1.0;
  memset(&dv1[16096], 0, sizeof(real_T) << 4);
  dv1[16112] = -1.0;
  memset(&dv1[16113], 0, 112U * sizeof(real_T));
  dv1[16225] = -1.0;
  memset(&dv1[16226], 0, sizeof(real_T) << 4);
  dv1[16242] = -1.0;
  memset(&dv1[16243], 0, 112U * sizeof(real_T));
  dv1[16355] = -1.0;
  memset(&dv1[16356], 0, sizeof(real_T) << 4);
  dv1[16372] = -1.0;
  memset(&dv1[16373], 0, 2322U * sizeof(real_T));
  dv1[18695] = -1.0;
  dv1[18696] = 0.0;
  dv1[18697] = -1.0;
  memset(&dv1[18698], 0, 127U * sizeof(real_T));
  dv1[18825] = -1.0;
  dv1[18826] = 0.0;
  dv1[18827] = -1.0;
  memset(&dv1[18828], 0, 387U * sizeof(real_T));
  dv1[19215] = -1.0;
  dv1[19216] = 0.0;
  dv1[19217] = -1.0;
  memset(&dv1[19218], 0, 127U * sizeof(real_T));
  dv1[19345] = -1.0;
  dv1[19346] = 0.0;
  dv1[19347] = -1.0;
  memset(&dv1[19348], 0, 1292U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 129], &dv1[i1 * 129], 129U * sizeof(real_T));
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
  biq[121] = t9;
  biq[122] = t9;
  biq[123] = t10;
  biq[124] = t10;
  biq[125] = t11;
  biq[126] = t11;
  biq[127] = -in9[1];
  biq[128] = -in9[1];
}

/* End of code generation (IqFast_LeftStart2V12.cpp) */
