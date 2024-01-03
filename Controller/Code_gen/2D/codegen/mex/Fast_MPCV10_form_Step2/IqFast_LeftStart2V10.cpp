/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart2V10.cpp
 *
 * Code generation for function 'IqFast_LeftStart2V10'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV10_form_Step2.h"
#include "IqFast_LeftStart2V10.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V10",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V10.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart2V10(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [20480], real_T biq[128])
{
  int32_T i1;
  real_T dv1[20480];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART2V10 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART2V10(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     24-Jul-2023 19:02:25 */
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
  memset(&dv1[103], 0, 154U * sizeof(real_T));
  dv1[257] = -1.0;
  memset(&dv1[258], 0, 33U * sizeof(real_T));
  dv1[291] = 1.0;
  memset(&dv1[292], 0, 33U * sizeof(real_T));
  dv1[325] = -in11[2];
  memset(&dv1[326], 0, 33U * sizeof(real_T));
  dv1[359] = -in11[2];
  memset(&dv1[360], 0, 154U * sizeof(real_T));
  dv1[514] = -1.0;
  memset(&dv1[515], 0, 33U * sizeof(real_T));
  dv1[548] = 1.0;
  memset(&dv1[549], 0, 33U * sizeof(real_T));
  dv1[582] = -in11[2];
  memset(&dv1[583], 0, 33U * sizeof(real_T));
  dv1[616] = -in11[2];
  memset(&dv1[617], 0, 154U * sizeof(real_T));
  dv1[771] = -1.0;
  memset(&dv1[772], 0, 33U * sizeof(real_T));
  dv1[805] = 1.0;
  memset(&dv1[806], 0, 33U * sizeof(real_T));
  dv1[839] = -in11[2];
  memset(&dv1[840], 0, 33U * sizeof(real_T));
  dv1[873] = -in11[2];
  memset(&dv1[874], 0, 154U * sizeof(real_T));
  dv1[1028] = -1.0;
  memset(&dv1[1029], 0, 33U * sizeof(real_T));
  dv1[1062] = 1.0;
  memset(&dv1[1063], 0, 33U * sizeof(real_T));
  dv1[1096] = -in11[2];
  memset(&dv1[1097], 0, 33U * sizeof(real_T));
  dv1[1130] = -in11[2];
  memset(&dv1[1131], 0, 154U * sizeof(real_T));
  dv1[1285] = -1.0;
  memset(&dv1[1286], 0, 33U * sizeof(real_T));
  dv1[1319] = 1.0;
  memset(&dv1[1320], 0, 33U * sizeof(real_T));
  dv1[1353] = -in11[2];
  memset(&dv1[1354], 0, 33U * sizeof(real_T));
  dv1[1387] = -in11[2];
  memset(&dv1[1388], 0, 154U * sizeof(real_T));
  dv1[1542] = -1.0;
  memset(&dv1[1543], 0, 33U * sizeof(real_T));
  dv1[1576] = 1.0;
  memset(&dv1[1577], 0, 33U * sizeof(real_T));
  dv1[1610] = -in11[2];
  memset(&dv1[1611], 0, 33U * sizeof(real_T));
  dv1[1644] = -in11[2];
  memset(&dv1[1645], 0, 154U * sizeof(real_T));
  dv1[1799] = -1.0;
  memset(&dv1[1800], 0, 33U * sizeof(real_T));
  dv1[1833] = 1.0;
  memset(&dv1[1834], 0, 33U * sizeof(real_T));
  dv1[1867] = -in11[2];
  memset(&dv1[1868], 0, 33U * sizeof(real_T));
  dv1[1901] = -in11[2];
  memset(&dv1[1902], 0, 154U * sizeof(real_T));
  dv1[2056] = -1.0;
  memset(&dv1[2057], 0, 33U * sizeof(real_T));
  dv1[2090] = 1.0;
  memset(&dv1[2091], 0, 33U * sizeof(real_T));
  dv1[2124] = -in11[2];
  memset(&dv1[2125], 0, 33U * sizeof(real_T));
  dv1[2158] = -in11[2];
  memset(&dv1[2159], 0, 154U * sizeof(real_T));
  dv1[2313] = -1.0;
  memset(&dv1[2314], 0, 33U * sizeof(real_T));
  dv1[2347] = 1.0;
  memset(&dv1[2348], 0, 33U * sizeof(real_T));
  dv1[2381] = -in11[2];
  memset(&dv1[2382], 0, 33U * sizeof(real_T));
  dv1[2415] = -in11[2];
  memset(&dv1[2416], 0, 154U * sizeof(real_T));
  dv1[2570] = -1.0;
  memset(&dv1[2571], 0, 33U * sizeof(real_T));
  dv1[2604] = 1.0;
  memset(&dv1[2605], 0, 33U * sizeof(real_T));
  dv1[2638] = -in11[2];
  memset(&dv1[2639], 0, 33U * sizeof(real_T));
  dv1[2672] = -in11[2];
  memset(&dv1[2673], 0, 154U * sizeof(real_T));
  dv1[2827] = -1.0;
  memset(&dv1[2828], 0, 33U * sizeof(real_T));
  dv1[2861] = 1.0;
  memset(&dv1[2862], 0, 33U * sizeof(real_T));
  dv1[2895] = -in11[2];
  memset(&dv1[2896], 0, 33U * sizeof(real_T));
  dv1[2929] = -in11[2];
  memset(&dv1[2930], 0, 154U * sizeof(real_T));
  dv1[3084] = -1.0;
  memset(&dv1[3085], 0, 33U * sizeof(real_T));
  dv1[3118] = 1.0;
  memset(&dv1[3119], 0, 33U * sizeof(real_T));
  dv1[3152] = -in11[2];
  memset(&dv1[3153], 0, 33U * sizeof(real_T));
  dv1[3186] = -in11[2];
  memset(&dv1[3187], 0, 154U * sizeof(real_T));
  dv1[3341] = -1.0;
  memset(&dv1[3342], 0, 33U * sizeof(real_T));
  dv1[3375] = 1.0;
  memset(&dv1[3376], 0, 33U * sizeof(real_T));
  dv1[3409] = -in11[2];
  memset(&dv1[3410], 0, 33U * sizeof(real_T));
  dv1[3443] = -in11[2];
  memset(&dv1[3444], 0, 154U * sizeof(real_T));
  dv1[3598] = -1.0;
  memset(&dv1[3599], 0, 33U * sizeof(real_T));
  dv1[3632] = 1.0;
  memset(&dv1[3633], 0, 33U * sizeof(real_T));
  dv1[3666] = -in11[2];
  memset(&dv1[3667], 0, 33U * sizeof(real_T));
  dv1[3700] = -in11[2];
  memset(&dv1[3701], 0, 154U * sizeof(real_T));
  dv1[3855] = -1.0;
  memset(&dv1[3856], 0, 33U * sizeof(real_T));
  dv1[3889] = 1.0;
  memset(&dv1[3890], 0, 33U * sizeof(real_T));
  dv1[3923] = -in11[2];
  memset(&dv1[3924], 0, 33U * sizeof(real_T));
  dv1[3957] = -in11[2];
  memset(&dv1[3958], 0, 154U * sizeof(real_T));
  dv1[4112] = -1.0;
  memset(&dv1[4113], 0, 33U * sizeof(real_T));
  dv1[4146] = 1.0;
  memset(&dv1[4147], 0, 33U * sizeof(real_T));
  dv1[4180] = -in11[2];
  memset(&dv1[4181], 0, 33U * sizeof(real_T));
  dv1[4214] = -in11[2];
  memset(&dv1[4215], 0, 154U * sizeof(real_T));
  dv1[4369] = -1.0;
  memset(&dv1[4370], 0, 33U * sizeof(real_T));
  dv1[4403] = 1.0;
  memset(&dv1[4404], 0, sizeof(real_T) << 4);
  dv1[4420] = -in11[3];
  memset(&dv1[4421], 0, 33U * sizeof(real_T));
  dv1[4454] = -in11[3];
  memset(&dv1[4455], 0, 171U * sizeof(real_T));
  dv1[4626] = -1.0;
  memset(&dv1[4627], 0, 33U * sizeof(real_T));
  dv1[4660] = 1.0;
  memset(&dv1[4661], 0, sizeof(real_T) << 4);
  dv1[4677] = -in11[3];
  memset(&dv1[4678], 0, 33U * sizeof(real_T));
  dv1[4711] = -in11[3];
  memset(&dv1[4712], 0, 171U * sizeof(real_T));
  dv1[4883] = -1.0;
  memset(&dv1[4884], 0, 33U * sizeof(real_T));
  dv1[4917] = 1.0;
  memset(&dv1[4918], 0, sizeof(real_T) << 4);
  dv1[4934] = -in11[3];
  memset(&dv1[4935], 0, 33U * sizeof(real_T));
  dv1[4968] = -in11[3];
  memset(&dv1[4969], 0, 171U * sizeof(real_T));
  dv1[5140] = -1.0;
  memset(&dv1[5141], 0, 33U * sizeof(real_T));
  dv1[5174] = 1.0;
  memset(&dv1[5175], 0, sizeof(real_T) << 4);
  dv1[5191] = -in11[3];
  memset(&dv1[5192], 0, 33U * sizeof(real_T));
  dv1[5225] = -in11[3];
  memset(&dv1[5226], 0, 171U * sizeof(real_T));
  dv1[5397] = -1.0;
  memset(&dv1[5398], 0, 33U * sizeof(real_T));
  dv1[5431] = 1.0;
  memset(&dv1[5432], 0, sizeof(real_T) << 4);
  dv1[5448] = -in11[3];
  memset(&dv1[5449], 0, 33U * sizeof(real_T));
  dv1[5482] = -in11[3];
  memset(&dv1[5483], 0, 171U * sizeof(real_T));
  dv1[5654] = -1.0;
  memset(&dv1[5655], 0, 33U * sizeof(real_T));
  dv1[5688] = 1.0;
  memset(&dv1[5689], 0, sizeof(real_T) << 4);
  dv1[5705] = -in11[3];
  memset(&dv1[5706], 0, 33U * sizeof(real_T));
  dv1[5739] = -in11[3];
  memset(&dv1[5740], 0, 171U * sizeof(real_T));
  dv1[5911] = -1.0;
  memset(&dv1[5912], 0, 33U * sizeof(real_T));
  dv1[5945] = 1.0;
  memset(&dv1[5946], 0, sizeof(real_T) << 4);
  dv1[5962] = -in11[3];
  memset(&dv1[5963], 0, 33U * sizeof(real_T));
  dv1[5996] = -in11[3];
  memset(&dv1[5997], 0, 171U * sizeof(real_T));
  dv1[6168] = -1.0;
  memset(&dv1[6169], 0, 33U * sizeof(real_T));
  dv1[6202] = 1.0;
  memset(&dv1[6203], 0, sizeof(real_T) << 4);
  dv1[6219] = -in11[3];
  memset(&dv1[6220], 0, 33U * sizeof(real_T));
  dv1[6253] = -in11[3];
  memset(&dv1[6254], 0, 171U * sizeof(real_T));
  dv1[6425] = -1.0;
  memset(&dv1[6426], 0, 33U * sizeof(real_T));
  dv1[6459] = 1.0;
  memset(&dv1[6460], 0, sizeof(real_T) << 4);
  dv1[6476] = -in11[3];
  memset(&dv1[6477], 0, 33U * sizeof(real_T));
  dv1[6510] = -in11[3];
  memset(&dv1[6511], 0, 171U * sizeof(real_T));
  dv1[6682] = -1.0;
  memset(&dv1[6683], 0, 33U * sizeof(real_T));
  dv1[6716] = 1.0;
  memset(&dv1[6717], 0, sizeof(real_T) << 4);
  dv1[6733] = -in11[3];
  memset(&dv1[6734], 0, 33U * sizeof(real_T));
  dv1[6767] = -in11[3];
  memset(&dv1[6768], 0, 171U * sizeof(real_T));
  dv1[6939] = -1.0;
  memset(&dv1[6940], 0, 33U * sizeof(real_T));
  dv1[6973] = 1.0;
  memset(&dv1[6974], 0, sizeof(real_T) << 4);
  dv1[6990] = -in11[3];
  memset(&dv1[6991], 0, 33U * sizeof(real_T));
  dv1[7024] = -in11[3];
  memset(&dv1[7025], 0, 171U * sizeof(real_T));
  dv1[7196] = -1.0;
  memset(&dv1[7197], 0, 33U * sizeof(real_T));
  dv1[7230] = 1.0;
  memset(&dv1[7231], 0, sizeof(real_T) << 4);
  dv1[7247] = -in11[3];
  memset(&dv1[7248], 0, 33U * sizeof(real_T));
  dv1[7281] = -in11[3];
  memset(&dv1[7282], 0, 171U * sizeof(real_T));
  dv1[7453] = -1.0;
  memset(&dv1[7454], 0, 33U * sizeof(real_T));
  dv1[7487] = 1.0;
  memset(&dv1[7488], 0, sizeof(real_T) << 4);
  dv1[7504] = -in11[3];
  memset(&dv1[7505], 0, 33U * sizeof(real_T));
  dv1[7538] = -in11[3];
  memset(&dv1[7539], 0, 171U * sizeof(real_T));
  dv1[7710] = -1.0;
  memset(&dv1[7711], 0, 33U * sizeof(real_T));
  dv1[7744] = 1.0;
  memset(&dv1[7745], 0, sizeof(real_T) << 4);
  dv1[7761] = -in11[3];
  memset(&dv1[7762], 0, 33U * sizeof(real_T));
  dv1[7795] = -in11[3];
  memset(&dv1[7796], 0, 171U * sizeof(real_T));
  dv1[7967] = -1.0;
  memset(&dv1[7968], 0, 33U * sizeof(real_T));
  dv1[8001] = 1.0;
  memset(&dv1[8002], 0, sizeof(real_T) << 4);
  dv1[8018] = -in11[3];
  memset(&dv1[8019], 0, 33U * sizeof(real_T));
  dv1[8052] = -in11[3];
  memset(&dv1[8053], 0, 171U * sizeof(real_T));
  dv1[8224] = -1.0;
  memset(&dv1[8225], 0, 33U * sizeof(real_T));
  dv1[8258] = 1.0;
  memset(&dv1[8259], 0, sizeof(real_T) << 4);
  dv1[8275] = -in11[3];
  memset(&dv1[8276], 0, 33U * sizeof(real_T));
  dv1[8309] = -in11[3];
  memset(&dv1[8310], 0, 171U * sizeof(real_T));
  dv1[8481] = -1.0;
  memset(&dv1[8482], 0, 33U * sizeof(real_T));
  dv1[8515] = 1.0;
  memset(&dv1[8516], 0, sizeof(real_T) << 4);
  dv1[8532] = -in11[3];
  memset(&dv1[8533], 0, 33U * sizeof(real_T));
  dv1[8566] = -in11[3];
  memset(&dv1[8567], 0, 137U * sizeof(real_T));
  dv1[8704] = 1.0;
  memset(&dv1[8705], 0, 33U * sizeof(real_T));
  dv1[8738] = -1.0;
  memset(&dv1[8739], 0, 84U * sizeof(real_T));
  dv1[8823] = 1.0;
  dv1[8824] = 0.0;
  dv1[8825] = -1.0;
  dv1[8826] = 0.0;
  dv1[8827] = 0.0;
  dv1[8828] = 0.0;
  dv1[8829] = 0.0;
  dv1[8830] = 0.0;
  dv1[8831] = 0.0;
  dv1[8832] = 0.0;
  dv1[8833] = 1.0;
  memset(&dv1[8834], 0, 33U * sizeof(real_T));
  dv1[8867] = -1.0;
  memset(&dv1[8868], 0, 84U * sizeof(real_T));
  dv1[8952] = 1.0;
  dv1[8953] = 0.0;
  dv1[8954] = -1.0;
  dv1[8955] = 0.0;
  dv1[8956] = 0.0;
  dv1[8957] = 0.0;
  dv1[8958] = 0.0;
  dv1[8959] = 0.0;
  dv1[8960] = 0.0;
  dv1[8961] = 0.0;
  dv1[8962] = 1.0;
  memset(&dv1[8963], 0, 33U * sizeof(real_T));
  dv1[8996] = -1.0;
  memset(&dv1[8997], 0, 94U * sizeof(real_T));
  dv1[9091] = 1.0;
  memset(&dv1[9092], 0, 33U * sizeof(real_T));
  dv1[9125] = -1.0;
  memset(&dv1[9126], 0, 94U * sizeof(real_T));
  dv1[9220] = 1.0;
  memset(&dv1[9221], 0, 33U * sizeof(real_T));
  dv1[9254] = -1.0;
  memset(&dv1[9255], 0, 94U * sizeof(real_T));
  dv1[9349] = 1.0;
  memset(&dv1[9350], 0, 33U * sizeof(real_T));
  dv1[9383] = -1.0;
  memset(&dv1[9384], 0, 94U * sizeof(real_T));
  dv1[9478] = 1.0;
  memset(&dv1[9479], 0, 33U * sizeof(real_T));
  dv1[9512] = -1.0;
  memset(&dv1[9513], 0, 94U * sizeof(real_T));
  dv1[9607] = 1.0;
  memset(&dv1[9608], 0, 33U * sizeof(real_T));
  dv1[9641] = -1.0;
  memset(&dv1[9642], 0, 94U * sizeof(real_T));
  dv1[9736] = 1.0;
  memset(&dv1[9737], 0, 33U * sizeof(real_T));
  dv1[9770] = -1.0;
  memset(&dv1[9771], 0, 94U * sizeof(real_T));
  dv1[9865] = 1.0;
  memset(&dv1[9866], 0, 33U * sizeof(real_T));
  dv1[9899] = -1.0;
  memset(&dv1[9900], 0, 94U * sizeof(real_T));
  dv1[9994] = 1.0;
  memset(&dv1[9995], 0, 33U * sizeof(real_T));
  dv1[10028] = -1.0;
  memset(&dv1[10029], 0, 94U * sizeof(real_T));
  dv1[10123] = 1.0;
  memset(&dv1[10124], 0, 33U * sizeof(real_T));
  dv1[10157] = -1.0;
  memset(&dv1[10158], 0, 94U * sizeof(real_T));
  dv1[10252] = 1.0;
  memset(&dv1[10253], 0, 33U * sizeof(real_T));
  dv1[10286] = -1.0;
  memset(&dv1[10287], 0, 94U * sizeof(real_T));
  dv1[10381] = 1.0;
  memset(&dv1[10382], 0, 33U * sizeof(real_T));
  dv1[10415] = -1.0;
  memset(&dv1[10416], 0, 94U * sizeof(real_T));
  dv1[10510] = 1.0;
  memset(&dv1[10511], 0, 33U * sizeof(real_T));
  dv1[10544] = -1.0;
  memset(&dv1[10545], 0, 94U * sizeof(real_T));
  dv1[10639] = 1.0;
  memset(&dv1[10640], 0, 33U * sizeof(real_T));
  dv1[10673] = -1.0;
  memset(&dv1[10674], 0, 94U * sizeof(real_T));
  dv1[10768] = 1.0;
  memset(&dv1[10769], 0, 33U * sizeof(real_T));
  dv1[10802] = -1.0;
  memset(&dv1[10803], 0, 94U * sizeof(real_T));
  dv1[10897] = 1.0;
  memset(&dv1[10898], 0, 33U * sizeof(real_T));
  dv1[10931] = -1.0;
  memset(&dv1[10932], 0, 71U * sizeof(real_T));
  dv1[11003] = 1.0;
  dv1[11004] = 0.0;
  dv1[11005] = -1.0;
  memset(&dv1[11006], 0, 20U * sizeof(real_T));
  dv1[11026] = 1.0;
  memset(&dv1[11027], 0, 33U * sizeof(real_T));
  dv1[11060] = -1.0;
  memset(&dv1[11061], 0, 71U * sizeof(real_T));
  dv1[11132] = 1.0;
  dv1[11133] = 0.0;
  dv1[11134] = -1.0;
  memset(&dv1[11135], 0, 20U * sizeof(real_T));
  dv1[11155] = 1.0;
  memset(&dv1[11156], 0, 33U * sizeof(real_T));
  dv1[11189] = -1.0;
  memset(&dv1[11190], 0, 94U * sizeof(real_T));
  dv1[11284] = 1.0;
  memset(&dv1[11285], 0, 33U * sizeof(real_T));
  dv1[11318] = -1.0;
  memset(&dv1[11319], 0, 94U * sizeof(real_T));
  dv1[11413] = 1.0;
  memset(&dv1[11414], 0, 33U * sizeof(real_T));
  dv1[11447] = -1.0;
  memset(&dv1[11448], 0, 94U * sizeof(real_T));
  dv1[11542] = 1.0;
  memset(&dv1[11543], 0, 33U * sizeof(real_T));
  dv1[11576] = -1.0;
  memset(&dv1[11577], 0, 94U * sizeof(real_T));
  dv1[11671] = 1.0;
  memset(&dv1[11672], 0, 33U * sizeof(real_T));
  dv1[11705] = -1.0;
  memset(&dv1[11706], 0, 94U * sizeof(real_T));
  dv1[11800] = 1.0;
  memset(&dv1[11801], 0, 33U * sizeof(real_T));
  dv1[11834] = -1.0;
  memset(&dv1[11835], 0, 94U * sizeof(real_T));
  dv1[11929] = 1.0;
  memset(&dv1[11930], 0, 33U * sizeof(real_T));
  dv1[11963] = -1.0;
  memset(&dv1[11964], 0, 94U * sizeof(real_T));
  dv1[12058] = 1.0;
  memset(&dv1[12059], 0, 33U * sizeof(real_T));
  dv1[12092] = -1.0;
  memset(&dv1[12093], 0, 94U * sizeof(real_T));
  dv1[12187] = 1.0;
  memset(&dv1[12188], 0, 33U * sizeof(real_T));
  dv1[12221] = -1.0;
  memset(&dv1[12222], 0, 94U * sizeof(real_T));
  dv1[12316] = 1.0;
  memset(&dv1[12317], 0, 33U * sizeof(real_T));
  dv1[12350] = -1.0;
  memset(&dv1[12351], 0, 94U * sizeof(real_T));
  dv1[12445] = 1.0;
  memset(&dv1[12446], 0, 33U * sizeof(real_T));
  dv1[12479] = -1.0;
  memset(&dv1[12480], 0, 94U * sizeof(real_T));
  dv1[12574] = 1.0;
  memset(&dv1[12575], 0, 33U * sizeof(real_T));
  dv1[12608] = -1.0;
  memset(&dv1[12609], 0, 94U * sizeof(real_T));
  dv1[12703] = 1.0;
  memset(&dv1[12704], 0, 33U * sizeof(real_T));
  dv1[12737] = -1.0;
  memset(&dv1[12738], 0, 94U * sizeof(real_T));
  dv1[12832] = 1.0;
  memset(&dv1[12833], 0, 33U * sizeof(real_T));
  dv1[12866] = -1.0;
  memset(&dv1[12867], 0, 94U * sizeof(real_T));
  dv1[12961] = 1.0;
  memset(&dv1[12962], 0, 33U * sizeof(real_T));
  dv1[12995] = -1.0;
  memset(&dv1[12996], 0, 699U * sizeof(real_T));
  dv1[13695] = 1.0;
  memset(&dv1[13696], 0, 469U * sizeof(real_T));
  dv1[14165] = -1.0;
  memset(&dv1[14166], 0, sizeof(real_T) << 4);
  dv1[14182] = -1.0;
  memset(&dv1[14183], 0, 111U * sizeof(real_T));
  dv1[14294] = -1.0;
  memset(&dv1[14295], 0, sizeof(real_T) << 4);
  dv1[14311] = -1.0;
  memset(&dv1[14312], 0, 111U * sizeof(real_T));
  dv1[14423] = -1.0;
  memset(&dv1[14424], 0, sizeof(real_T) << 4);
  dv1[14440] = -1.0;
  memset(&dv1[14441], 0, 111U * sizeof(real_T));
  dv1[14552] = -1.0;
  memset(&dv1[14553], 0, sizeof(real_T) << 4);
  dv1[14569] = -1.0;
  memset(&dv1[14570], 0, 111U * sizeof(real_T));
  dv1[14681] = -1.0;
  memset(&dv1[14682], 0, sizeof(real_T) << 4);
  dv1[14698] = -1.0;
  memset(&dv1[14699], 0, 111U * sizeof(real_T));
  dv1[14810] = -1.0;
  memset(&dv1[14811], 0, sizeof(real_T) << 4);
  dv1[14827] = -1.0;
  memset(&dv1[14828], 0, 111U * sizeof(real_T));
  dv1[14939] = -1.0;
  memset(&dv1[14940], 0, sizeof(real_T) << 4);
  dv1[14956] = -1.0;
  memset(&dv1[14957], 0, 111U * sizeof(real_T));
  dv1[15068] = -1.0;
  memset(&dv1[15069], 0, sizeof(real_T) << 4);
  dv1[15085] = -1.0;
  memset(&dv1[15086], 0, 111U * sizeof(real_T));
  dv1[15197] = -1.0;
  memset(&dv1[15198], 0, sizeof(real_T) << 4);
  dv1[15214] = -1.0;
  memset(&dv1[15215], 0, 111U * sizeof(real_T));
  dv1[15326] = -1.0;
  memset(&dv1[15327], 0, sizeof(real_T) << 4);
  dv1[15343] = -1.0;
  memset(&dv1[15344], 0, 111U * sizeof(real_T));
  dv1[15455] = -1.0;
  memset(&dv1[15456], 0, sizeof(real_T) << 4);
  dv1[15472] = -1.0;
  memset(&dv1[15473], 0, 111U * sizeof(real_T));
  dv1[15584] = -1.0;
  memset(&dv1[15585], 0, sizeof(real_T) << 4);
  dv1[15601] = -1.0;
  memset(&dv1[15602], 0, 111U * sizeof(real_T));
  dv1[15713] = -1.0;
  memset(&dv1[15714], 0, sizeof(real_T) << 4);
  dv1[15730] = -1.0;
  memset(&dv1[15731], 0, 111U * sizeof(real_T));
  dv1[15842] = -1.0;
  memset(&dv1[15843], 0, sizeof(real_T) << 4);
  dv1[15859] = -1.0;
  memset(&dv1[15860], 0, 111U * sizeof(real_T));
  dv1[15971] = -1.0;
  memset(&dv1[15972], 0, sizeof(real_T) << 4);
  dv1[15988] = -1.0;
  memset(&dv1[15989], 0, 111U * sizeof(real_T));
  dv1[16100] = -1.0;
  memset(&dv1[16101], 0, sizeof(real_T) << 4);
  dv1[16117] = -1.0;
  memset(&dv1[16118], 0, 111U * sizeof(real_T));
  dv1[16229] = -1.0;
  memset(&dv1[16230], 0, sizeof(real_T) << 4);
  dv1[16246] = -1.0;
  memset(&dv1[16247], 0, 136U * sizeof(real_T));
  dv1[16383] = -1.0;
  memset(&dv1[16384], 0, 2167U * sizeof(real_T));
  dv1[18551] = -1.0;
  dv1[18552] = 0.0;
  dv1[18553] = -1.0;
  memset(&dv1[18554], 0, 126U * sizeof(real_T));
  dv1[18680] = -1.0;
  dv1[18681] = 0.0;
  dv1[18682] = -1.0;
  memset(&dv1[18683], 0, 384U * sizeof(real_T));
  dv1[19067] = -1.0;
  dv1[19068] = 0.0;
  dv1[19069] = -1.0;
  memset(&dv1[19070], 0, 126U * sizeof(real_T));
  dv1[19196] = -1.0;
  dv1[19197] = 0.0;
  dv1[19198] = -1.0;
  memset(&dv1[19199], 0, 1281U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 << 7], &dv1[i1 << 7], sizeof(real_T) << 7);
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
}

/* End of code generation (IqFast_LeftStart2V10.cpp) */
