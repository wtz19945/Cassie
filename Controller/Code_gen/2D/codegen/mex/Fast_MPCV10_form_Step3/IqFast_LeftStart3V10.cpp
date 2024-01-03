/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart3V10.cpp
 *
 * Code generation for function 'IqFast_LeftStart3V10'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV10_form_Step3.h"
#include "IqFast_LeftStart3V10.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V10.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart3V10(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [19840], real_T biq[124])
{
  int32_T i1;
  real_T dv1[19840];
  real_T t7;
  real_T t3;

  /* IQFAST_LEFTSTART3V10 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART3V10(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     24-Jul-2023 19:05:09 */
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
  memset(&dv1[103], 0, 146U * sizeof(real_T));
  dv1[249] = -1.0;
  memset(&dv1[250], 0, 33U * sizeof(real_T));
  dv1[283] = 1.0;
  memset(&dv1[284], 0, 33U * sizeof(real_T));
  dv1[317] = -in11[2];
  memset(&dv1[318], 0, 33U * sizeof(real_T));
  dv1[351] = -in11[2];
  memset(&dv1[352], 0, 146U * sizeof(real_T));
  dv1[498] = -1.0;
  memset(&dv1[499], 0, 33U * sizeof(real_T));
  dv1[532] = 1.0;
  memset(&dv1[533], 0, 33U * sizeof(real_T));
  dv1[566] = -in11[2];
  memset(&dv1[567], 0, 33U * sizeof(real_T));
  dv1[600] = -in11[2];
  memset(&dv1[601], 0, 146U * sizeof(real_T));
  dv1[747] = -1.0;
  memset(&dv1[748], 0, 33U * sizeof(real_T));
  dv1[781] = 1.0;
  memset(&dv1[782], 0, 33U * sizeof(real_T));
  dv1[815] = -in11[2];
  memset(&dv1[816], 0, 33U * sizeof(real_T));
  dv1[849] = -in11[2];
  memset(&dv1[850], 0, 146U * sizeof(real_T));
  dv1[996] = -1.0;
  memset(&dv1[997], 0, 33U * sizeof(real_T));
  dv1[1030] = 1.0;
  memset(&dv1[1031], 0, 33U * sizeof(real_T));
  dv1[1064] = -in11[2];
  memset(&dv1[1065], 0, 33U * sizeof(real_T));
  dv1[1098] = -in11[2];
  memset(&dv1[1099], 0, 146U * sizeof(real_T));
  dv1[1245] = -1.0;
  memset(&dv1[1246], 0, 33U * sizeof(real_T));
  dv1[1279] = 1.0;
  memset(&dv1[1280], 0, 33U * sizeof(real_T));
  dv1[1313] = -in11[2];
  memset(&dv1[1314], 0, 33U * sizeof(real_T));
  dv1[1347] = -in11[2];
  memset(&dv1[1348], 0, 146U * sizeof(real_T));
  dv1[1494] = -1.0;
  memset(&dv1[1495], 0, 33U * sizeof(real_T));
  dv1[1528] = 1.0;
  memset(&dv1[1529], 0, 33U * sizeof(real_T));
  dv1[1562] = -in11[2];
  memset(&dv1[1563], 0, 33U * sizeof(real_T));
  dv1[1596] = -in11[2];
  memset(&dv1[1597], 0, 146U * sizeof(real_T));
  dv1[1743] = -1.0;
  memset(&dv1[1744], 0, 33U * sizeof(real_T));
  dv1[1777] = 1.0;
  memset(&dv1[1778], 0, 33U * sizeof(real_T));
  dv1[1811] = -in11[2];
  memset(&dv1[1812], 0, 33U * sizeof(real_T));
  dv1[1845] = -in11[2];
  memset(&dv1[1846], 0, 146U * sizeof(real_T));
  dv1[1992] = -1.0;
  memset(&dv1[1993], 0, 33U * sizeof(real_T));
  dv1[2026] = 1.0;
  memset(&dv1[2027], 0, 33U * sizeof(real_T));
  dv1[2060] = -in11[2];
  memset(&dv1[2061], 0, 33U * sizeof(real_T));
  dv1[2094] = -in11[2];
  memset(&dv1[2095], 0, 146U * sizeof(real_T));
  dv1[2241] = -1.0;
  memset(&dv1[2242], 0, 33U * sizeof(real_T));
  dv1[2275] = 1.0;
  memset(&dv1[2276], 0, 33U * sizeof(real_T));
  dv1[2309] = -in11[2];
  memset(&dv1[2310], 0, 33U * sizeof(real_T));
  dv1[2343] = -in11[2];
  memset(&dv1[2344], 0, 146U * sizeof(real_T));
  dv1[2490] = -1.0;
  memset(&dv1[2491], 0, 33U * sizeof(real_T));
  dv1[2524] = 1.0;
  memset(&dv1[2525], 0, 33U * sizeof(real_T));
  dv1[2558] = -in11[2];
  memset(&dv1[2559], 0, 33U * sizeof(real_T));
  dv1[2592] = -in11[2];
  memset(&dv1[2593], 0, 146U * sizeof(real_T));
  dv1[2739] = -1.0;
  memset(&dv1[2740], 0, 33U * sizeof(real_T));
  dv1[2773] = 1.0;
  memset(&dv1[2774], 0, 33U * sizeof(real_T));
  dv1[2807] = -in11[2];
  memset(&dv1[2808], 0, 33U * sizeof(real_T));
  dv1[2841] = -in11[2];
  memset(&dv1[2842], 0, 146U * sizeof(real_T));
  dv1[2988] = -1.0;
  memset(&dv1[2989], 0, 33U * sizeof(real_T));
  dv1[3022] = 1.0;
  memset(&dv1[3023], 0, 33U * sizeof(real_T));
  dv1[3056] = -in11[2];
  memset(&dv1[3057], 0, 33U * sizeof(real_T));
  dv1[3090] = -in11[2];
  memset(&dv1[3091], 0, 146U * sizeof(real_T));
  dv1[3237] = -1.0;
  memset(&dv1[3238], 0, 33U * sizeof(real_T));
  dv1[3271] = 1.0;
  memset(&dv1[3272], 0, 33U * sizeof(real_T));
  dv1[3305] = -in11[2];
  memset(&dv1[3306], 0, 33U * sizeof(real_T));
  dv1[3339] = -in11[2];
  memset(&dv1[3340], 0, 146U * sizeof(real_T));
  dv1[3486] = -1.0;
  memset(&dv1[3487], 0, 33U * sizeof(real_T));
  dv1[3520] = 1.0;
  memset(&dv1[3521], 0, 33U * sizeof(real_T));
  dv1[3554] = -in11[2];
  memset(&dv1[3555], 0, 33U * sizeof(real_T));
  dv1[3588] = -in11[2];
  memset(&dv1[3589], 0, 146U * sizeof(real_T));
  dv1[3735] = -1.0;
  memset(&dv1[3736], 0, 33U * sizeof(real_T));
  dv1[3769] = 1.0;
  memset(&dv1[3770], 0, 33U * sizeof(real_T));
  dv1[3803] = -in11[2];
  memset(&dv1[3804], 0, 33U * sizeof(real_T));
  dv1[3837] = -in11[2];
  memset(&dv1[3838], 0, 146U * sizeof(real_T));
  dv1[3984] = -1.0;
  memset(&dv1[3985], 0, 33U * sizeof(real_T));
  dv1[4018] = 1.0;
  memset(&dv1[4019], 0, 33U * sizeof(real_T));
  dv1[4052] = -in11[2];
  memset(&dv1[4053], 0, 33U * sizeof(real_T));
  dv1[4086] = -in11[2];
  memset(&dv1[4087], 0, 146U * sizeof(real_T));
  dv1[4233] = -1.0;
  memset(&dv1[4234], 0, 33U * sizeof(real_T));
  dv1[4267] = 1.0;
  memset(&dv1[4268], 0, sizeof(real_T) << 4);
  dv1[4284] = -in11[3];
  memset(&dv1[4285], 0, 33U * sizeof(real_T));
  dv1[4318] = -in11[3];
  memset(&dv1[4319], 0, 163U * sizeof(real_T));
  dv1[4482] = -1.0;
  memset(&dv1[4483], 0, 33U * sizeof(real_T));
  dv1[4516] = 1.0;
  memset(&dv1[4517], 0, sizeof(real_T) << 4);
  dv1[4533] = -in11[3];
  memset(&dv1[4534], 0, 33U * sizeof(real_T));
  dv1[4567] = -in11[3];
  memset(&dv1[4568], 0, 163U * sizeof(real_T));
  dv1[4731] = -1.0;
  memset(&dv1[4732], 0, 33U * sizeof(real_T));
  dv1[4765] = 1.0;
  memset(&dv1[4766], 0, sizeof(real_T) << 4);
  dv1[4782] = -in11[3];
  memset(&dv1[4783], 0, 33U * sizeof(real_T));
  dv1[4816] = -in11[3];
  memset(&dv1[4817], 0, 163U * sizeof(real_T));
  dv1[4980] = -1.0;
  memset(&dv1[4981], 0, 33U * sizeof(real_T));
  dv1[5014] = 1.0;
  memset(&dv1[5015], 0, sizeof(real_T) << 4);
  dv1[5031] = -in11[3];
  memset(&dv1[5032], 0, 33U * sizeof(real_T));
  dv1[5065] = -in11[3];
  memset(&dv1[5066], 0, 163U * sizeof(real_T));
  dv1[5229] = -1.0;
  memset(&dv1[5230], 0, 33U * sizeof(real_T));
  dv1[5263] = 1.0;
  memset(&dv1[5264], 0, sizeof(real_T) << 4);
  dv1[5280] = -in11[3];
  memset(&dv1[5281], 0, 33U * sizeof(real_T));
  dv1[5314] = -in11[3];
  memset(&dv1[5315], 0, 163U * sizeof(real_T));
  dv1[5478] = -1.0;
  memset(&dv1[5479], 0, 33U * sizeof(real_T));
  dv1[5512] = 1.0;
  memset(&dv1[5513], 0, sizeof(real_T) << 4);
  dv1[5529] = -in11[3];
  memset(&dv1[5530], 0, 33U * sizeof(real_T));
  dv1[5563] = -in11[3];
  memset(&dv1[5564], 0, 163U * sizeof(real_T));
  dv1[5727] = -1.0;
  memset(&dv1[5728], 0, 33U * sizeof(real_T));
  dv1[5761] = 1.0;
  memset(&dv1[5762], 0, sizeof(real_T) << 4);
  dv1[5778] = -in11[3];
  memset(&dv1[5779], 0, 33U * sizeof(real_T));
  dv1[5812] = -in11[3];
  memset(&dv1[5813], 0, 163U * sizeof(real_T));
  dv1[5976] = -1.0;
  memset(&dv1[5977], 0, 33U * sizeof(real_T));
  dv1[6010] = 1.0;
  memset(&dv1[6011], 0, sizeof(real_T) << 4);
  dv1[6027] = -in11[3];
  memset(&dv1[6028], 0, 33U * sizeof(real_T));
  dv1[6061] = -in11[3];
  memset(&dv1[6062], 0, 163U * sizeof(real_T));
  dv1[6225] = -1.0;
  memset(&dv1[6226], 0, 33U * sizeof(real_T));
  dv1[6259] = 1.0;
  memset(&dv1[6260], 0, sizeof(real_T) << 4);
  dv1[6276] = -in11[3];
  memset(&dv1[6277], 0, 33U * sizeof(real_T));
  dv1[6310] = -in11[3];
  memset(&dv1[6311], 0, 163U * sizeof(real_T));
  dv1[6474] = -1.0;
  memset(&dv1[6475], 0, 33U * sizeof(real_T));
  dv1[6508] = 1.0;
  memset(&dv1[6509], 0, sizeof(real_T) << 4);
  dv1[6525] = -in11[3];
  memset(&dv1[6526], 0, 33U * sizeof(real_T));
  dv1[6559] = -in11[3];
  memset(&dv1[6560], 0, 163U * sizeof(real_T));
  dv1[6723] = -1.0;
  memset(&dv1[6724], 0, 33U * sizeof(real_T));
  dv1[6757] = 1.0;
  memset(&dv1[6758], 0, sizeof(real_T) << 4);
  dv1[6774] = -in11[3];
  memset(&dv1[6775], 0, 33U * sizeof(real_T));
  dv1[6808] = -in11[3];
  memset(&dv1[6809], 0, 163U * sizeof(real_T));
  dv1[6972] = -1.0;
  memset(&dv1[6973], 0, 33U * sizeof(real_T));
  dv1[7006] = 1.0;
  memset(&dv1[7007], 0, sizeof(real_T) << 4);
  dv1[7023] = -in11[3];
  memset(&dv1[7024], 0, 33U * sizeof(real_T));
  dv1[7057] = -in11[3];
  memset(&dv1[7058], 0, 163U * sizeof(real_T));
  dv1[7221] = -1.0;
  memset(&dv1[7222], 0, 33U * sizeof(real_T));
  dv1[7255] = 1.0;
  memset(&dv1[7256], 0, sizeof(real_T) << 4);
  dv1[7272] = -in11[3];
  memset(&dv1[7273], 0, 33U * sizeof(real_T));
  dv1[7306] = -in11[3];
  memset(&dv1[7307], 0, 163U * sizeof(real_T));
  dv1[7470] = -1.0;
  memset(&dv1[7471], 0, 33U * sizeof(real_T));
  dv1[7504] = 1.0;
  memset(&dv1[7505], 0, sizeof(real_T) << 4);
  dv1[7521] = -in11[3];
  memset(&dv1[7522], 0, 33U * sizeof(real_T));
  dv1[7555] = -in11[3];
  memset(&dv1[7556], 0, 163U * sizeof(real_T));
  dv1[7719] = -1.0;
  memset(&dv1[7720], 0, 33U * sizeof(real_T));
  dv1[7753] = 1.0;
  memset(&dv1[7754], 0, sizeof(real_T) << 4);
  dv1[7770] = -in11[3];
  memset(&dv1[7771], 0, 33U * sizeof(real_T));
  dv1[7804] = -in11[3];
  memset(&dv1[7805], 0, 163U * sizeof(real_T));
  dv1[7968] = -1.0;
  memset(&dv1[7969], 0, 33U * sizeof(real_T));
  dv1[8002] = 1.0;
  memset(&dv1[8003], 0, sizeof(real_T) << 4);
  dv1[8019] = -in11[3];
  memset(&dv1[8020], 0, 33U * sizeof(real_T));
  dv1[8053] = -in11[3];
  memset(&dv1[8054], 0, 163U * sizeof(real_T));
  dv1[8217] = -1.0;
  memset(&dv1[8218], 0, 33U * sizeof(real_T));
  dv1[8251] = 1.0;
  memset(&dv1[8252], 0, sizeof(real_T) << 4);
  dv1[8268] = -in11[3];
  memset(&dv1[8269], 0, 33U * sizeof(real_T));
  dv1[8302] = -in11[3];
  memset(&dv1[8303], 0, 129U * sizeof(real_T));
  dv1[8432] = 1.0;
  memset(&dv1[8433], 0, 33U * sizeof(real_T));
  dv1[8466] = -1.0;
  memset(&dv1[8467], 0, 84U * sizeof(real_T));
  dv1[8551] = 1.0;
  dv1[8552] = -1.0;
  dv1[8553] = 0.0;
  dv1[8554] = 0.0;
  dv1[8555] = 0.0;
  dv1[8556] = 0.0;
  dv1[8557] = 1.0;
  memset(&dv1[8558], 0, 33U * sizeof(real_T));
  dv1[8591] = -1.0;
  memset(&dv1[8592], 0, 90U * sizeof(real_T));
  dv1[8682] = 1.0;
  memset(&dv1[8683], 0, 33U * sizeof(real_T));
  dv1[8716] = -1.0;
  memset(&dv1[8717], 0, 90U * sizeof(real_T));
  dv1[8807] = 1.0;
  memset(&dv1[8808], 0, 33U * sizeof(real_T));
  dv1[8841] = -1.0;
  memset(&dv1[8842], 0, 90U * sizeof(real_T));
  dv1[8932] = 1.0;
  memset(&dv1[8933], 0, 33U * sizeof(real_T));
  dv1[8966] = -1.0;
  memset(&dv1[8967], 0, 90U * sizeof(real_T));
  dv1[9057] = 1.0;
  memset(&dv1[9058], 0, 33U * sizeof(real_T));
  dv1[9091] = -1.0;
  memset(&dv1[9092], 0, 90U * sizeof(real_T));
  dv1[9182] = 1.0;
  memset(&dv1[9183], 0, 33U * sizeof(real_T));
  dv1[9216] = -1.0;
  memset(&dv1[9217], 0, 90U * sizeof(real_T));
  dv1[9307] = 1.0;
  memset(&dv1[9308], 0, 33U * sizeof(real_T));
  dv1[9341] = -1.0;
  memset(&dv1[9342], 0, 90U * sizeof(real_T));
  dv1[9432] = 1.0;
  memset(&dv1[9433], 0, 33U * sizeof(real_T));
  dv1[9466] = -1.0;
  memset(&dv1[9467], 0, 90U * sizeof(real_T));
  dv1[9557] = 1.0;
  memset(&dv1[9558], 0, 33U * sizeof(real_T));
  dv1[9591] = -1.0;
  memset(&dv1[9592], 0, 90U * sizeof(real_T));
  dv1[9682] = 1.0;
  memset(&dv1[9683], 0, 33U * sizeof(real_T));
  dv1[9716] = -1.0;
  memset(&dv1[9717], 0, 90U * sizeof(real_T));
  dv1[9807] = 1.0;
  memset(&dv1[9808], 0, 33U * sizeof(real_T));
  dv1[9841] = -1.0;
  memset(&dv1[9842], 0, 90U * sizeof(real_T));
  dv1[9932] = 1.0;
  memset(&dv1[9933], 0, 33U * sizeof(real_T));
  dv1[9966] = -1.0;
  memset(&dv1[9967], 0, 90U * sizeof(real_T));
  dv1[10057] = 1.0;
  memset(&dv1[10058], 0, 33U * sizeof(real_T));
  dv1[10091] = -1.0;
  memset(&dv1[10092], 0, 90U * sizeof(real_T));
  dv1[10182] = 1.0;
  memset(&dv1[10183], 0, 33U * sizeof(real_T));
  dv1[10216] = -1.0;
  memset(&dv1[10217], 0, 90U * sizeof(real_T));
  dv1[10307] = 1.0;
  memset(&dv1[10308], 0, 33U * sizeof(real_T));
  dv1[10341] = -1.0;
  memset(&dv1[10342], 0, 90U * sizeof(real_T));
  dv1[10432] = 1.0;
  memset(&dv1[10433], 0, 33U * sizeof(real_T));
  dv1[10466] = -1.0;
  memset(&dv1[10467], 0, 90U * sizeof(real_T));
  dv1[10557] = 1.0;
  memset(&dv1[10558], 0, 33U * sizeof(real_T));
  dv1[10591] = -1.0;
  memset(&dv1[10592], 0, 69U * sizeof(real_T));
  dv1[10661] = 1.0;
  dv1[10662] = -1.0;
  memset(&dv1[10663], 0, 19U * sizeof(real_T));
  dv1[10682] = 1.0;
  memset(&dv1[10683], 0, 33U * sizeof(real_T));
  dv1[10716] = -1.0;
  memset(&dv1[10717], 0, 90U * sizeof(real_T));
  dv1[10807] = 1.0;
  memset(&dv1[10808], 0, 33U * sizeof(real_T));
  dv1[10841] = -1.0;
  memset(&dv1[10842], 0, 90U * sizeof(real_T));
  dv1[10932] = 1.0;
  memset(&dv1[10933], 0, 33U * sizeof(real_T));
  dv1[10966] = -1.0;
  memset(&dv1[10967], 0, 90U * sizeof(real_T));
  dv1[11057] = 1.0;
  memset(&dv1[11058], 0, 33U * sizeof(real_T));
  dv1[11091] = -1.0;
  memset(&dv1[11092], 0, 90U * sizeof(real_T));
  dv1[11182] = 1.0;
  memset(&dv1[11183], 0, 33U * sizeof(real_T));
  dv1[11216] = -1.0;
  memset(&dv1[11217], 0, 90U * sizeof(real_T));
  dv1[11307] = 1.0;
  memset(&dv1[11308], 0, 33U * sizeof(real_T));
  dv1[11341] = -1.0;
  memset(&dv1[11342], 0, 90U * sizeof(real_T));
  dv1[11432] = 1.0;
  memset(&dv1[11433], 0, 33U * sizeof(real_T));
  dv1[11466] = -1.0;
  memset(&dv1[11467], 0, 90U * sizeof(real_T));
  dv1[11557] = 1.0;
  memset(&dv1[11558], 0, 33U * sizeof(real_T));
  dv1[11591] = -1.0;
  memset(&dv1[11592], 0, 90U * sizeof(real_T));
  dv1[11682] = 1.0;
  memset(&dv1[11683], 0, 33U * sizeof(real_T));
  dv1[11716] = -1.0;
  memset(&dv1[11717], 0, 90U * sizeof(real_T));
  dv1[11807] = 1.0;
  memset(&dv1[11808], 0, 33U * sizeof(real_T));
  dv1[11841] = -1.0;
  memset(&dv1[11842], 0, 90U * sizeof(real_T));
  dv1[11932] = 1.0;
  memset(&dv1[11933], 0, 33U * sizeof(real_T));
  dv1[11966] = -1.0;
  memset(&dv1[11967], 0, 90U * sizeof(real_T));
  dv1[12057] = 1.0;
  memset(&dv1[12058], 0, 33U * sizeof(real_T));
  dv1[12091] = -1.0;
  memset(&dv1[12092], 0, 90U * sizeof(real_T));
  dv1[12182] = 1.0;
  memset(&dv1[12183], 0, 33U * sizeof(real_T));
  dv1[12216] = -1.0;
  memset(&dv1[12217], 0, 90U * sizeof(real_T));
  dv1[12307] = 1.0;
  memset(&dv1[12308], 0, 33U * sizeof(real_T));
  dv1[12341] = -1.0;
  memset(&dv1[12342], 0, 90U * sizeof(real_T));
  dv1[12432] = 1.0;
  memset(&dv1[12433], 0, 33U * sizeof(real_T));
  dv1[12466] = -1.0;
  memset(&dv1[12467], 0, 90U * sizeof(real_T));
  dv1[12557] = 1.0;
  memset(&dv1[12558], 0, 33U * sizeof(real_T));
  dv1[12591] = -1.0;
  memset(&dv1[12592], 0, 675U * sizeof(real_T));
  dv1[13267] = 1.0;
  memset(&dv1[13268], 0, 457U * sizeof(real_T));
  dv1[13725] = -1.0;
  memset(&dv1[13726], 0, sizeof(real_T) << 4);
  dv1[13742] = -1.0;
  memset(&dv1[13743], 0, 107U * sizeof(real_T));
  dv1[13850] = -1.0;
  memset(&dv1[13851], 0, sizeof(real_T) << 4);
  dv1[13867] = -1.0;
  memset(&dv1[13868], 0, 107U * sizeof(real_T));
  dv1[13975] = -1.0;
  memset(&dv1[13976], 0, sizeof(real_T) << 4);
  dv1[13992] = -1.0;
  memset(&dv1[13993], 0, 107U * sizeof(real_T));
  dv1[14100] = -1.0;
  memset(&dv1[14101], 0, sizeof(real_T) << 4);
  dv1[14117] = -1.0;
  memset(&dv1[14118], 0, 107U * sizeof(real_T));
  dv1[14225] = -1.0;
  memset(&dv1[14226], 0, sizeof(real_T) << 4);
  dv1[14242] = -1.0;
  memset(&dv1[14243], 0, 107U * sizeof(real_T));
  dv1[14350] = -1.0;
  memset(&dv1[14351], 0, sizeof(real_T) << 4);
  dv1[14367] = -1.0;
  memset(&dv1[14368], 0, 107U * sizeof(real_T));
  dv1[14475] = -1.0;
  memset(&dv1[14476], 0, sizeof(real_T) << 4);
  dv1[14492] = -1.0;
  memset(&dv1[14493], 0, 107U * sizeof(real_T));
  dv1[14600] = -1.0;
  memset(&dv1[14601], 0, sizeof(real_T) << 4);
  dv1[14617] = -1.0;
  memset(&dv1[14618], 0, 107U * sizeof(real_T));
  dv1[14725] = -1.0;
  memset(&dv1[14726], 0, sizeof(real_T) << 4);
  dv1[14742] = -1.0;
  memset(&dv1[14743], 0, 107U * sizeof(real_T));
  dv1[14850] = -1.0;
  memset(&dv1[14851], 0, sizeof(real_T) << 4);
  dv1[14867] = -1.0;
  memset(&dv1[14868], 0, 107U * sizeof(real_T));
  dv1[14975] = -1.0;
  memset(&dv1[14976], 0, sizeof(real_T) << 4);
  dv1[14992] = -1.0;
  memset(&dv1[14993], 0, 107U * sizeof(real_T));
  dv1[15100] = -1.0;
  memset(&dv1[15101], 0, sizeof(real_T) << 4);
  dv1[15117] = -1.0;
  memset(&dv1[15118], 0, 107U * sizeof(real_T));
  dv1[15225] = -1.0;
  memset(&dv1[15226], 0, sizeof(real_T) << 4);
  dv1[15242] = -1.0;
  memset(&dv1[15243], 0, 107U * sizeof(real_T));
  dv1[15350] = -1.0;
  memset(&dv1[15351], 0, sizeof(real_T) << 4);
  dv1[15367] = -1.0;
  memset(&dv1[15368], 0, 107U * sizeof(real_T));
  dv1[15475] = -1.0;
  memset(&dv1[15476], 0, sizeof(real_T) << 4);
  dv1[15492] = -1.0;
  memset(&dv1[15493], 0, 107U * sizeof(real_T));
  dv1[15600] = -1.0;
  memset(&dv1[15601], 0, sizeof(real_T) << 4);
  dv1[15617] = -1.0;
  memset(&dv1[15618], 0, 107U * sizeof(real_T));
  dv1[15725] = -1.0;
  memset(&dv1[15726], 0, sizeof(real_T) << 4);
  dv1[15742] = -1.0;
  memset(&dv1[15743], 0, sizeof(real_T) << 7);
  dv1[15871] = -1.0;
  memset(&dv1[15872], 0, 2103U * sizeof(real_T));
  dv1[17975] = -1.0;
  dv1[17976] = -1.0;
  memset(&dv1[17977], 0, 496U * sizeof(real_T));
  dv1[18473] = -1.0;
  dv1[18474] = -1.0;
  memset(&dv1[18475], 0, 1365U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 124], &dv1[i1 * 124], 124U * sizeof(real_T));
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
}

/* End of code generation (IqFast_LeftStart3V10.cpp) */
