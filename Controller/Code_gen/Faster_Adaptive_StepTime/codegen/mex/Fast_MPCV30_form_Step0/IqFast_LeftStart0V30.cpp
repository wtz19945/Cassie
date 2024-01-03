/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart0V30.cpp
 *
 * Code generation for function 'IqFast_LeftStart0V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step0.h"
#include "IqFast_LeftStart0V30.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart0V30(Fast_MPCV30_form_Step0StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[24990], real_T biq[147])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART0V30 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART0V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:00:57 */
  i1 = in4->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&kb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&jb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&ib_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(4 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i1, (emlrtBCInfo *)&hb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&gb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(6 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i1, (emlrtBCInfo *)&fb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&eb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(8 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i1, (emlrtBCInfo *)&db_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&cb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&bb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&ab_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&y_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(4 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i1, (emlrtBCInfo *)&x_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&w_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(6 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i1, (emlrtBCInfo *)&v_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&u_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(8 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i1, (emlrtBCInfo *)&t_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&s_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(10 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i1, (emlrtBCInfo *)&r_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&q_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(12 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i1, (emlrtBCInfo *)&p_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&o_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(14 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i1, (emlrtBCInfo *)&n_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&m_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(16 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i1, (emlrtBCInfo *)&l_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&k_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(18 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i1, (emlrtBCInfo *)&j_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(10 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i1, (emlrtBCInfo *)&i_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&h_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(12 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i1, (emlrtBCInfo *)&g_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&f_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(14 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i1, (emlrtBCInfo *)&e_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&d_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(16 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i1, (emlrtBCInfo *)&c_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&b_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(18 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i1, (emlrtBCInfo *)&emlrtBCI, sp);
  }

  SD->u1.f0.dv1[0] = -1.0;
  memset(&SD->u1.f0.dv1[1], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[36] = 1.0;
  memset(&SD->u1.f0.dv1[37], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[72] = -in11[2];
  memset(&SD->u1.f0.dv1[73], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[108] = -in11[2];
  memset(&SD->u1.f0.dv1[109], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[295] = -1.0;
  memset(&SD->u1.f0.dv1[296], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[331] = 1.0;
  memset(&SD->u1.f0.dv1[332], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[367] = -in11[2];
  memset(&SD->u1.f0.dv1[368], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[403] = -in11[2];
  memset(&SD->u1.f0.dv1[404], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[590] = -1.0;
  memset(&SD->u1.f0.dv1[591], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[626] = 1.0;
  memset(&SD->u1.f0.dv1[627], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[662] = -in11[2];
  memset(&SD->u1.f0.dv1[663], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[698] = -in11[2];
  memset(&SD->u1.f0.dv1[699], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[885] = -1.0;
  memset(&SD->u1.f0.dv1[886], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[921] = 1.0;
  memset(&SD->u1.f0.dv1[922], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[957] = -in11[2];
  memset(&SD->u1.f0.dv1[958], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[993] = -in11[2];
  memset(&SD->u1.f0.dv1[994], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[1180] = -1.0;
  memset(&SD->u1.f0.dv1[1181], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1216] = 1.0;
  memset(&SD->u1.f0.dv1[1217], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1252] = -in11[2];
  memset(&SD->u1.f0.dv1[1253], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1288] = -in11[2];
  memset(&SD->u1.f0.dv1[1289], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[1475] = -1.0;
  memset(&SD->u1.f0.dv1[1476], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1511] = 1.0;
  memset(&SD->u1.f0.dv1[1512], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1547] = -in11[2];
  memset(&SD->u1.f0.dv1[1548], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1583] = -in11[2];
  memset(&SD->u1.f0.dv1[1584], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[1770] = -1.0;
  memset(&SD->u1.f0.dv1[1771], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1806] = 1.0;
  memset(&SD->u1.f0.dv1[1807], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1842] = -in11[2];
  memset(&SD->u1.f0.dv1[1843], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[1878] = -in11[2];
  memset(&SD->u1.f0.dv1[1879], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[2065] = -1.0;
  memset(&SD->u1.f0.dv1[2066], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2101] = 1.0;
  memset(&SD->u1.f0.dv1[2102], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2137] = -in11[2];
  memset(&SD->u1.f0.dv1[2138], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2173] = -in11[2];
  memset(&SD->u1.f0.dv1[2174], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[2360] = -1.0;
  memset(&SD->u1.f0.dv1[2361], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2396] = 1.0;
  memset(&SD->u1.f0.dv1[2397], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2432] = -in11[2];
  memset(&SD->u1.f0.dv1[2433], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2468] = -in11[2];
  memset(&SD->u1.f0.dv1[2469], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[2655] = -1.0;
  memset(&SD->u1.f0.dv1[2656], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2691] = 1.0;
  memset(&SD->u1.f0.dv1[2692], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2727] = -in11[2];
  memset(&SD->u1.f0.dv1[2728], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2763] = -in11[2];
  memset(&SD->u1.f0.dv1[2764], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[2950] = -1.0;
  memset(&SD->u1.f0.dv1[2951], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[2986] = 1.0;
  memset(&SD->u1.f0.dv1[2987], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3022] = -in11[2];
  memset(&SD->u1.f0.dv1[3023], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3058] = -in11[2];
  memset(&SD->u1.f0.dv1[3059], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[3245] = -1.0;
  memset(&SD->u1.f0.dv1[3246], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3281] = 1.0;
  memset(&SD->u1.f0.dv1[3282], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3317] = -in11[2];
  memset(&SD->u1.f0.dv1[3318], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3353] = -in11[2];
  memset(&SD->u1.f0.dv1[3354], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[3540] = -1.0;
  memset(&SD->u1.f0.dv1[3541], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3576] = 1.0;
  memset(&SD->u1.f0.dv1[3577], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3612] = -in11[2];
  memset(&SD->u1.f0.dv1[3613], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3648] = -in11[2];
  memset(&SD->u1.f0.dv1[3649], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[3835] = -1.0;
  memset(&SD->u1.f0.dv1[3836], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3871] = 1.0;
  memset(&SD->u1.f0.dv1[3872], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3907] = -in11[2];
  memset(&SD->u1.f0.dv1[3908], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[3943] = -in11[2];
  memset(&SD->u1.f0.dv1[3944], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[4130] = -1.0;
  memset(&SD->u1.f0.dv1[4131], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4166] = 1.0;
  memset(&SD->u1.f0.dv1[4167], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4202] = -in11[2];
  memset(&SD->u1.f0.dv1[4203], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4238] = -in11[2];
  memset(&SD->u1.f0.dv1[4239], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[4425] = -1.0;
  memset(&SD->u1.f0.dv1[4426], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4461] = 1.0;
  memset(&SD->u1.f0.dv1[4462], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4497] = -in11[2];
  memset(&SD->u1.f0.dv1[4498], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4533] = -in11[2];
  memset(&SD->u1.f0.dv1[4534], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[4720] = -1.0;
  memset(&SD->u1.f0.dv1[4721], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4756] = 1.0;
  memset(&SD->u1.f0.dv1[4757], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4792] = -in11[2];
  memset(&SD->u1.f0.dv1[4793], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[4828] = -in11[2];
  memset(&SD->u1.f0.dv1[4829], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[5015] = -1.0;
  memset(&SD->u1.f0.dv1[5016], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5051] = 1.0;
  memset(&SD->u1.f0.dv1[5052], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5087] = -in11[2];
  memset(&SD->u1.f0.dv1[5088], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5123] = -in11[2];
  memset(&SD->u1.f0.dv1[5124], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[5310] = -1.0;
  memset(&SD->u1.f0.dv1[5311], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5346] = 1.0;
  memset(&SD->u1.f0.dv1[5347], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[5364] = -in11[3];
  memset(&SD->u1.f0.dv1[5365], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5400] = -in11[3];
  memset(&SD->u1.f0.dv1[5401], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[5605] = -1.0;
  memset(&SD->u1.f0.dv1[5606], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5641] = 1.0;
  memset(&SD->u1.f0.dv1[5642], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[5659] = -in11[3];
  memset(&SD->u1.f0.dv1[5660], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5695] = -in11[3];
  memset(&SD->u1.f0.dv1[5696], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[5900] = -1.0;
  memset(&SD->u1.f0.dv1[5901], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5936] = 1.0;
  memset(&SD->u1.f0.dv1[5937], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[5954] = -in11[3];
  memset(&SD->u1.f0.dv1[5955], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[5990] = -in11[3];
  memset(&SD->u1.f0.dv1[5991], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[6195] = -1.0;
  memset(&SD->u1.f0.dv1[6196], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[6231] = 1.0;
  memset(&SD->u1.f0.dv1[6232], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[6249] = -in11[3];
  memset(&SD->u1.f0.dv1[6250], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[6285] = -in11[3];
  memset(&SD->u1.f0.dv1[6286], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[6490] = -1.0;
  memset(&SD->u1.f0.dv1[6491], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[6526] = 1.0;
  memset(&SD->u1.f0.dv1[6527], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[6544] = -in11[3];
  memset(&SD->u1.f0.dv1[6545], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[6580] = -in11[3];
  memset(&SD->u1.f0.dv1[6581], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[6785] = -1.0;
  memset(&SD->u1.f0.dv1[6786], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[6821] = 1.0;
  memset(&SD->u1.f0.dv1[6822], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[6839] = -in11[3];
  memset(&SD->u1.f0.dv1[6840], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[6875] = -in11[3];
  memset(&SD->u1.f0.dv1[6876], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[7080] = -1.0;
  memset(&SD->u1.f0.dv1[7081], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[7116] = 1.0;
  memset(&SD->u1.f0.dv1[7117], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[7134] = -in11[3];
  memset(&SD->u1.f0.dv1[7135], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[7170] = -in11[3];
  memset(&SD->u1.f0.dv1[7171], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[7375] = -1.0;
  memset(&SD->u1.f0.dv1[7376], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[7411] = 1.0;
  memset(&SD->u1.f0.dv1[7412], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[7429] = -in11[3];
  memset(&SD->u1.f0.dv1[7430], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[7465] = -in11[3];
  memset(&SD->u1.f0.dv1[7466], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[7670] = -1.0;
  memset(&SD->u1.f0.dv1[7671], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[7706] = 1.0;
  memset(&SD->u1.f0.dv1[7707], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[7724] = -in11[3];
  memset(&SD->u1.f0.dv1[7725], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[7760] = -in11[3];
  memset(&SD->u1.f0.dv1[7761], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[7965] = -1.0;
  memset(&SD->u1.f0.dv1[7966], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8001] = 1.0;
  memset(&SD->u1.f0.dv1[8002], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[8019] = -in11[3];
  memset(&SD->u1.f0.dv1[8020], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8055] = -in11[3];
  memset(&SD->u1.f0.dv1[8056], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[8260] = -1.0;
  memset(&SD->u1.f0.dv1[8261], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8296] = 1.0;
  memset(&SD->u1.f0.dv1[8297], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[8314] = -in11[3];
  memset(&SD->u1.f0.dv1[8315], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8350] = -in11[3];
  memset(&SD->u1.f0.dv1[8351], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[8555] = -1.0;
  memset(&SD->u1.f0.dv1[8556], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8591] = 1.0;
  memset(&SD->u1.f0.dv1[8592], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[8609] = -in11[3];
  memset(&SD->u1.f0.dv1[8610], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8645] = -in11[3];
  memset(&SD->u1.f0.dv1[8646], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[8850] = -1.0;
  memset(&SD->u1.f0.dv1[8851], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8886] = 1.0;
  memset(&SD->u1.f0.dv1[8887], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[8904] = -in11[3];
  memset(&SD->u1.f0.dv1[8905], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[8940] = -in11[3];
  memset(&SD->u1.f0.dv1[8941], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[9145] = -1.0;
  memset(&SD->u1.f0.dv1[9146], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[9181] = 1.0;
  memset(&SD->u1.f0.dv1[9182], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[9199] = -in11[3];
  memset(&SD->u1.f0.dv1[9200], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[9235] = -in11[3];
  memset(&SD->u1.f0.dv1[9236], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[9440] = -1.0;
  memset(&SD->u1.f0.dv1[9441], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[9476] = 1.0;
  memset(&SD->u1.f0.dv1[9477], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[9494] = -in11[3];
  memset(&SD->u1.f0.dv1[9495], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[9530] = -in11[3];
  memset(&SD->u1.f0.dv1[9531], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[9735] = -1.0;
  memset(&SD->u1.f0.dv1[9736], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[9771] = 1.0;
  memset(&SD->u1.f0.dv1[9772], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[9789] = -in11[3];
  memset(&SD->u1.f0.dv1[9790], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[9825] = -in11[3];
  memset(&SD->u1.f0.dv1[9826], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[10030] = -1.0;
  memset(&SD->u1.f0.dv1[10031], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[10066] = 1.0;
  memset(&SD->u1.f0.dv1[10067], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[10084] = -in11[3];
  memset(&SD->u1.f0.dv1[10085], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[10120] = -in11[3];
  memset(&SD->u1.f0.dv1[10121], 0, 204U * sizeof(real_T));
  SD->u1.f0.dv1[10325] = -1.0;
  memset(&SD->u1.f0.dv1[10326], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[10361] = 1.0;
  memset(&SD->u1.f0.dv1[10362], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[10379] = -in11[3];
  memset(&SD->u1.f0.dv1[10380], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[10415] = -in11[3];
  memset(&SD->u1.f0.dv1[10416], 0, 168U * sizeof(real_T));
  SD->u1.f0.dv1[10584] = 1.0;
  memset(&SD->u1.f0.dv1[10585], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[10620] = -1.0;
  memset(&SD->u1.f0.dv1[10621], 0, 89U * sizeof(real_T));
  SD->u1.f0.dv1[10710] = 1.0;
  SD->u1.f0.dv1[10711] = 0.0;
  SD->u1.f0.dv1[10712] = 0.0;
  SD->u1.f0.dv1[10713] = 0.0;
  SD->u1.f0.dv1[10714] = 0.0;
  SD->u1.f0.dv1[10715] = -1.0;
  memset(&SD->u1.f0.dv1[10716], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[10732] = 1.0;
  memset(&SD->u1.f0.dv1[10733], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[10768] = -1.0;
  memset(&SD->u1.f0.dv1[10769], 0, 89U * sizeof(real_T));
  SD->u1.f0.dv1[10858] = 1.0;
  SD->u1.f0.dv1[10859] = 0.0;
  SD->u1.f0.dv1[10860] = 0.0;
  SD->u1.f0.dv1[10861] = 0.0;
  SD->u1.f0.dv1[10862] = 0.0;
  SD->u1.f0.dv1[10863] = -1.0;
  memset(&SD->u1.f0.dv1[10864], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[10880] = 1.0;
  memset(&SD->u1.f0.dv1[10881], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[10916] = -1.0;
  memset(&SD->u1.f0.dv1[10917], 0, 89U * sizeof(real_T));
  SD->u1.f0.dv1[11006] = 1.0;
  SD->u1.f0.dv1[11007] = 0.0;
  SD->u1.f0.dv1[11008] = 0.0;
  SD->u1.f0.dv1[11009] = 0.0;
  SD->u1.f0.dv1[11010] = 0.0;
  SD->u1.f0.dv1[11011] = -1.0;
  memset(&SD->u1.f0.dv1[11012], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[11028] = 1.0;
  memset(&SD->u1.f0.dv1[11029], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[11064] = -1.0;
  memset(&SD->u1.f0.dv1[11065], 0, 89U * sizeof(real_T));
  SD->u1.f0.dv1[11154] = 1.0;
  SD->u1.f0.dv1[11155] = 0.0;
  SD->u1.f0.dv1[11156] = 0.0;
  SD->u1.f0.dv1[11157] = 0.0;
  SD->u1.f0.dv1[11158] = 0.0;
  SD->u1.f0.dv1[11159] = -1.0;
  memset(&SD->u1.f0.dv1[11160], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[11176] = 1.0;
  memset(&SD->u1.f0.dv1[11177], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[11212] = -1.0;
  memset(&SD->u1.f0.dv1[11213], 0, 89U * sizeof(real_T));
  SD->u1.f0.dv1[11302] = 1.0;
  SD->u1.f0.dv1[11303] = 0.0;
  SD->u1.f0.dv1[11304] = 0.0;
  SD->u1.f0.dv1[11305] = 0.0;
  SD->u1.f0.dv1[11306] = 0.0;
  SD->u1.f0.dv1[11307] = -1.0;
  memset(&SD->u1.f0.dv1[11308], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[11324] = 1.0;
  memset(&SD->u1.f0.dv1[11325], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[11360] = -1.0;
  memset(&SD->u1.f0.dv1[11361], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[11472] = 1.0;
  memset(&SD->u1.f0.dv1[11473], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[11508] = -1.0;
  memset(&SD->u1.f0.dv1[11509], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[11620] = 1.0;
  memset(&SD->u1.f0.dv1[11621], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[11656] = -1.0;
  memset(&SD->u1.f0.dv1[11657], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[11768] = 1.0;
  memset(&SD->u1.f0.dv1[11769], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[11804] = -1.0;
  memset(&SD->u1.f0.dv1[11805], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[11916] = 1.0;
  memset(&SD->u1.f0.dv1[11917], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[11952] = -1.0;
  memset(&SD->u1.f0.dv1[11953], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[12064] = 1.0;
  memset(&SD->u1.f0.dv1[12065], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[12100] = -1.0;
  memset(&SD->u1.f0.dv1[12101], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[12212] = 1.0;
  memset(&SD->u1.f0.dv1[12213], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[12248] = -1.0;
  memset(&SD->u1.f0.dv1[12249], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[12360] = 1.0;
  memset(&SD->u1.f0.dv1[12361], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[12396] = -1.0;
  memset(&SD->u1.f0.dv1[12397], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[12508] = 1.0;
  memset(&SD->u1.f0.dv1[12509], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[12544] = -1.0;
  memset(&SD->u1.f0.dv1[12545], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[12656] = 1.0;
  memset(&SD->u1.f0.dv1[12657], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[12692] = -1.0;
  memset(&SD->u1.f0.dv1[12693], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[12804] = 1.0;
  memset(&SD->u1.f0.dv1[12805], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[12840] = -1.0;
  memset(&SD->u1.f0.dv1[12841], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[12952] = 1.0;
  memset(&SD->u1.f0.dv1[12953], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[12988] = -1.0;
  memset(&SD->u1.f0.dv1[12989], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[13100] = 1.0;
  memset(&SD->u1.f0.dv1[13101], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[13136] = -1.0;
  memset(&SD->u1.f0.dv1[13137], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[13248] = 1.0;
  memset(&SD->u1.f0.dv1[13249], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[13284] = -1.0;
  memset(&SD->u1.f0.dv1[13285], 0, 81U * sizeof(real_T));
  SD->u1.f0.dv1[13366] = 1.0;
  SD->u1.f0.dv1[13367] = 0.0;
  SD->u1.f0.dv1[13368] = 0.0;
  SD->u1.f0.dv1[13369] = 0.0;
  SD->u1.f0.dv1[13370] = 0.0;
  SD->u1.f0.dv1[13371] = -1.0;
  memset(&SD->u1.f0.dv1[13372], 0, 24U * sizeof(real_T));
  SD->u1.f0.dv1[13396] = 1.0;
  memset(&SD->u1.f0.dv1[13397], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[13432] = -1.0;
  memset(&SD->u1.f0.dv1[13433], 0, 81U * sizeof(real_T));
  SD->u1.f0.dv1[13514] = 1.0;
  SD->u1.f0.dv1[13515] = 0.0;
  SD->u1.f0.dv1[13516] = 0.0;
  SD->u1.f0.dv1[13517] = 0.0;
  SD->u1.f0.dv1[13518] = 0.0;
  SD->u1.f0.dv1[13519] = -1.0;
  memset(&SD->u1.f0.dv1[13520], 0, 24U * sizeof(real_T));
  SD->u1.f0.dv1[13544] = 1.0;
  memset(&SD->u1.f0.dv1[13545], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[13580] = -1.0;
  memset(&SD->u1.f0.dv1[13581], 0, 81U * sizeof(real_T));
  SD->u1.f0.dv1[13662] = 1.0;
  SD->u1.f0.dv1[13663] = 0.0;
  SD->u1.f0.dv1[13664] = 0.0;
  SD->u1.f0.dv1[13665] = 0.0;
  SD->u1.f0.dv1[13666] = 0.0;
  SD->u1.f0.dv1[13667] = -1.0;
  memset(&SD->u1.f0.dv1[13668], 0, 24U * sizeof(real_T));
  SD->u1.f0.dv1[13692] = 1.0;
  memset(&SD->u1.f0.dv1[13693], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[13728] = -1.0;
  memset(&SD->u1.f0.dv1[13729], 0, 81U * sizeof(real_T));
  SD->u1.f0.dv1[13810] = 1.0;
  SD->u1.f0.dv1[13811] = 0.0;
  SD->u1.f0.dv1[13812] = 0.0;
  SD->u1.f0.dv1[13813] = 0.0;
  SD->u1.f0.dv1[13814] = 0.0;
  SD->u1.f0.dv1[13815] = -1.0;
  memset(&SD->u1.f0.dv1[13816], 0, 24U * sizeof(real_T));
  SD->u1.f0.dv1[13840] = 1.0;
  memset(&SD->u1.f0.dv1[13841], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[13876] = -1.0;
  memset(&SD->u1.f0.dv1[13877], 0, 81U * sizeof(real_T));
  SD->u1.f0.dv1[13958] = 1.0;
  SD->u1.f0.dv1[13959] = 0.0;
  SD->u1.f0.dv1[13960] = 0.0;
  SD->u1.f0.dv1[13961] = 0.0;
  SD->u1.f0.dv1[13962] = 0.0;
  SD->u1.f0.dv1[13963] = -1.0;
  memset(&SD->u1.f0.dv1[13964], 0, 24U * sizeof(real_T));
  SD->u1.f0.dv1[13988] = 1.0;
  memset(&SD->u1.f0.dv1[13989], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[14024] = -1.0;
  memset(&SD->u1.f0.dv1[14025], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[14136] = 1.0;
  memset(&SD->u1.f0.dv1[14137], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[14172] = -1.0;
  memset(&SD->u1.f0.dv1[14173], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[14284] = 1.0;
  memset(&SD->u1.f0.dv1[14285], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[14320] = -1.0;
  memset(&SD->u1.f0.dv1[14321], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[14432] = 1.0;
  memset(&SD->u1.f0.dv1[14433], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[14468] = -1.0;
  memset(&SD->u1.f0.dv1[14469], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[14580] = 1.0;
  memset(&SD->u1.f0.dv1[14581], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[14616] = -1.0;
  memset(&SD->u1.f0.dv1[14617], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[14728] = 1.0;
  memset(&SD->u1.f0.dv1[14729], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[14764] = -1.0;
  memset(&SD->u1.f0.dv1[14765], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[14876] = 1.0;
  memset(&SD->u1.f0.dv1[14877], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[14912] = -1.0;
  memset(&SD->u1.f0.dv1[14913], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[15024] = 1.0;
  memset(&SD->u1.f0.dv1[15025], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[15060] = -1.0;
  memset(&SD->u1.f0.dv1[15061], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[15172] = 1.0;
  memset(&SD->u1.f0.dv1[15173], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[15208] = -1.0;
  memset(&SD->u1.f0.dv1[15209], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[15320] = 1.0;
  memset(&SD->u1.f0.dv1[15321], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[15356] = -1.0;
  memset(&SD->u1.f0.dv1[15357], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[15468] = 1.0;
  memset(&SD->u1.f0.dv1[15469], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[15504] = -1.0;
  memset(&SD->u1.f0.dv1[15505], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[15616] = 1.0;
  memset(&SD->u1.f0.dv1[15617], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[15652] = -1.0;
  memset(&SD->u1.f0.dv1[15653], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[15764] = 1.0;
  memset(&SD->u1.f0.dv1[15765], 0, 35U * sizeof(real_T));
  SD->u1.f0.dv1[15800] = -1.0;
  memset(&SD->u1.f0.dv1[15801], 0, 809U * sizeof(real_T));
  SD->u1.f0.dv1[16610] = 1.0;
  memset(&SD->u1.f0.dv1[16611], 0, 531U * sizeof(real_T));
  SD->u1.f0.dv1[17142] = -1.0;
  memset(&SD->u1.f0.dv1[17143], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[17160] = -1.0;
  memset(&SD->u1.f0.dv1[17161], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[17290] = -1.0;
  memset(&SD->u1.f0.dv1[17291], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[17308] = -1.0;
  memset(&SD->u1.f0.dv1[17309], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[17438] = -1.0;
  memset(&SD->u1.f0.dv1[17439], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[17456] = -1.0;
  memset(&SD->u1.f0.dv1[17457], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[17586] = -1.0;
  memset(&SD->u1.f0.dv1[17587], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[17604] = -1.0;
  memset(&SD->u1.f0.dv1[17605], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[17734] = -1.0;
  memset(&SD->u1.f0.dv1[17735], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[17752] = -1.0;
  memset(&SD->u1.f0.dv1[17753], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[17882] = -1.0;
  memset(&SD->u1.f0.dv1[17883], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[17900] = -1.0;
  memset(&SD->u1.f0.dv1[17901], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[18030] = -1.0;
  memset(&SD->u1.f0.dv1[18031], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[18048] = -1.0;
  memset(&SD->u1.f0.dv1[18049], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[18178] = -1.0;
  memset(&SD->u1.f0.dv1[18179], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[18196] = -1.0;
  memset(&SD->u1.f0.dv1[18197], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[18326] = -1.0;
  memset(&SD->u1.f0.dv1[18327], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[18344] = -1.0;
  memset(&SD->u1.f0.dv1[18345], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[18474] = -1.0;
  memset(&SD->u1.f0.dv1[18475], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[18492] = -1.0;
  memset(&SD->u1.f0.dv1[18493], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[18622] = -1.0;
  memset(&SD->u1.f0.dv1[18623], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[18640] = -1.0;
  memset(&SD->u1.f0.dv1[18641], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[18770] = -1.0;
  memset(&SD->u1.f0.dv1[18771], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[18788] = -1.0;
  memset(&SD->u1.f0.dv1[18789], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[18918] = -1.0;
  memset(&SD->u1.f0.dv1[18919], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[18936] = -1.0;
  memset(&SD->u1.f0.dv1[18937], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[19066] = -1.0;
  memset(&SD->u1.f0.dv1[19067], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[19084] = -1.0;
  memset(&SD->u1.f0.dv1[19085], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[19214] = -1.0;
  memset(&SD->u1.f0.dv1[19215], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[19232] = -1.0;
  memset(&SD->u1.f0.dv1[19233], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[19362] = -1.0;
  memset(&SD->u1.f0.dv1[19363], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[19380] = -1.0;
  memset(&SD->u1.f0.dv1[19381], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[19510] = -1.0;
  memset(&SD->u1.f0.dv1[19511], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[19528] = -1.0;
  memset(&SD->u1.f0.dv1[19529], 0, 129U * sizeof(real_T));
  SD->u1.f0.dv1[19658] = -1.0;
  memset(&SD->u1.f0.dv1[19659], 0, 17U * sizeof(real_T));
  SD->u1.f0.dv1[19676] = -1.0;
  memset(&SD->u1.f0.dv1[19677], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[19844] = -1.0;
  memset(&SD->u1.f0.dv1[19845], 0, 2625U * sizeof(real_T));
  SD->u1.f0.dv1[22470] = -1.0;
  SD->u1.f0.dv1[22471] = 0.0;
  SD->u1.f0.dv1[22472] = 0.0;
  SD->u1.f0.dv1[22473] = 0.0;
  SD->u1.f0.dv1[22474] = 0.0;
  SD->u1.f0.dv1[22475] = -1.0;
  memset(&SD->u1.f0.dv1[22476], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[22618] = -1.0;
  SD->u1.f0.dv1[22619] = 0.0;
  SD->u1.f0.dv1[22620] = 0.0;
  SD->u1.f0.dv1[22621] = 0.0;
  SD->u1.f0.dv1[22622] = 0.0;
  SD->u1.f0.dv1[22623] = -1.0;
  memset(&SD->u1.f0.dv1[22624], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[22766] = -1.0;
  SD->u1.f0.dv1[22767] = 0.0;
  SD->u1.f0.dv1[22768] = 0.0;
  SD->u1.f0.dv1[22769] = 0.0;
  SD->u1.f0.dv1[22770] = 0.0;
  SD->u1.f0.dv1[22771] = -1.0;
  memset(&SD->u1.f0.dv1[22772], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[22914] = -1.0;
  SD->u1.f0.dv1[22915] = 0.0;
  SD->u1.f0.dv1[22916] = 0.0;
  SD->u1.f0.dv1[22917] = 0.0;
  SD->u1.f0.dv1[22918] = 0.0;
  SD->u1.f0.dv1[22919] = -1.0;
  memset(&SD->u1.f0.dv1[22920], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[23062] = -1.0;
  SD->u1.f0.dv1[23063] = 0.0;
  SD->u1.f0.dv1[23064] = 0.0;
  SD->u1.f0.dv1[23065] = 0.0;
  SD->u1.f0.dv1[23066] = 0.0;
  SD->u1.f0.dv1[23067] = -1.0;
  memset(&SD->u1.f0.dv1[23068], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[23215] = -1.0;
  SD->u1.f0.dv1[23216] = 0.0;
  SD->u1.f0.dv1[23217] = 0.0;
  SD->u1.f0.dv1[23218] = 0.0;
  SD->u1.f0.dv1[23219] = 0.0;
  SD->u1.f0.dv1[23220] = -1.0;
  memset(&SD->u1.f0.dv1[23221], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[23363] = -1.0;
  SD->u1.f0.dv1[23364] = 0.0;
  SD->u1.f0.dv1[23365] = 0.0;
  SD->u1.f0.dv1[23366] = 0.0;
  SD->u1.f0.dv1[23367] = 0.0;
  SD->u1.f0.dv1[23368] = -1.0;
  memset(&SD->u1.f0.dv1[23369], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[23511] = -1.0;
  SD->u1.f0.dv1[23512] = 0.0;
  SD->u1.f0.dv1[23513] = 0.0;
  SD->u1.f0.dv1[23514] = 0.0;
  SD->u1.f0.dv1[23515] = 0.0;
  SD->u1.f0.dv1[23516] = -1.0;
  memset(&SD->u1.f0.dv1[23517], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[23659] = -1.0;
  SD->u1.f0.dv1[23660] = 0.0;
  SD->u1.f0.dv1[23661] = 0.0;
  SD->u1.f0.dv1[23662] = 0.0;
  SD->u1.f0.dv1[23663] = 0.0;
  SD->u1.f0.dv1[23664] = -1.0;
  memset(&SD->u1.f0.dv1[23665], 0, 142U * sizeof(real_T));
  SD->u1.f0.dv1[23807] = -1.0;
  SD->u1.f0.dv1[23808] = 0.0;
  SD->u1.f0.dv1[23809] = 0.0;
  SD->u1.f0.dv1[23810] = 0.0;
  SD->u1.f0.dv1[23811] = 0.0;
  SD->u1.f0.dv1[23812] = -1.0;
  memset(&SD->u1.f0.dv1[23813], 0, 1177U * sizeof(real_T));
  for (i1 = 0; i1 < 170; i1++) {
    memcpy(&Aiq[i1 * 147], &SD->u1.f0.dv1[i1 * 147], 147U * sizeof(real_T));
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
  biq[17] = in10[0];
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
  biq[34] = in10[1];
  biq[35] = in10[1];
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
  biq[51] = in10[0];
  biq[52] = in10[0];
  biq[53] = in10[0];
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
  biq[68] = in10[1];
  biq[69] = in10[1];
  biq[70] = in10[1];
  biq[71] = in10[1];
  biq[72] = -in11[2] * (in11[0] + in11[2] * in4->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in4->data[0] * t7);
  biq[73] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0]] * t7);
  biq[74] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 1] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 1] * t7);
  biq[75] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 3] * t7);
  biq[76] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 2] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 2] * t7);
  biq[77] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 5] * t7);
  biq[78] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 6] * t7);
  biq[79] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 7] * t7);
  biq[80] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 3] * t7);
  biq[81] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 9] * t7);
  biq[82] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 10] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 10] * t7);
  biq[83] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 11] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 11] * t7);
  biq[84] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 12] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 12] * t7);
  biq[85] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 13] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 13] * t7);
  biq[86] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 14] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 14] * t7);
  biq[87] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 15] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 15] * t7);
  biq[88] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 4] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 4] * t7);
  biq[89] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 17] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 17] * t7);
  memset(&biq[90], 0, 18U * sizeof(real_T));
  biq[108] = -in11[2] * (in11[0] + in11[2] * in5->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in5->data[0] * t7);
  biq[109] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0]] * t7);
  biq[110] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 1] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 1] * t7);
  biq[111] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 3] * t7);
  biq[112] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 2] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 2] * t7);
  biq[113] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 5] * t7);
  biq[114] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 6] * t7);
  biq[115] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 7] * t7);
  biq[116] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 3] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 3] * t7);
  biq[117] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 9] * t7);
  biq[118] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 10] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 10] * t7);
  biq[119] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 11] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 11] * t7);
  biq[120] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 12] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 12] * t7);
  biq[121] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 13] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 13] * t7);
  biq[122] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 14] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 14] * t7);
  biq[123] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 15] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 15] * t7);
  biq[124] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 4] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 4] * t7);
  biq[125] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 17] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 17] * t7);
  biq[126] = t3;
  biq[127] = t3;
  biq[128] = t3;
  biq[129] = t3;
  biq[130] = t3;
  biq[131] = t9;
  biq[132] = t9;
  biq[133] = t9;
  biq[134] = t9;
  biq[135] = t9;
  biq[136] = t10;
  biq[137] = t10;
  biq[138] = t10;
  biq[139] = t10;
  biq[140] = t10;
  biq[141] = t11;
  biq[142] = t11;
  biq[143] = t11;
  biq[144] = t11;
  biq[145] = t11;
  biq[146] = -in9[1];
}

/* End of code generation (IqFast_LeftStart0V30.cpp) */
