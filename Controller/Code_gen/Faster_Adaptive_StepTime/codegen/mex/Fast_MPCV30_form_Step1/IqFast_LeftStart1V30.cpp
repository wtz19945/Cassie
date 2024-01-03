/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart1V30.cpp
 *
 * Code generation for function 'IqFast_LeftStart1V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step1.h"
#include "IqFast_LeftStart1V30.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart1V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [24310], real_T biq[143])
{
  int32_T i1;
  real_T dv1[24310];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART1V30 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART1V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:04:11 */
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

  dv1[0] = -1.0;
  memset(&dv1[1], 0, 35U * sizeof(real_T));
  dv1[36] = 1.0;
  memset(&dv1[37], 0, 35U * sizeof(real_T));
  dv1[72] = -in11[2];
  memset(&dv1[73], 0, 35U * sizeof(real_T));
  dv1[108] = -in11[2];
  memset(&dv1[109], 0, 178U * sizeof(real_T));
  dv1[287] = -1.0;
  memset(&dv1[288], 0, 35U * sizeof(real_T));
  dv1[323] = 1.0;
  memset(&dv1[324], 0, 35U * sizeof(real_T));
  dv1[359] = -in11[2];
  memset(&dv1[360], 0, 35U * sizeof(real_T));
  dv1[395] = -in11[2];
  memset(&dv1[396], 0, 178U * sizeof(real_T));
  dv1[574] = -1.0;
  memset(&dv1[575], 0, 35U * sizeof(real_T));
  dv1[610] = 1.0;
  memset(&dv1[611], 0, 35U * sizeof(real_T));
  dv1[646] = -in11[2];
  memset(&dv1[647], 0, 35U * sizeof(real_T));
  dv1[682] = -in11[2];
  memset(&dv1[683], 0, 178U * sizeof(real_T));
  dv1[861] = -1.0;
  memset(&dv1[862], 0, 35U * sizeof(real_T));
  dv1[897] = 1.0;
  memset(&dv1[898], 0, 35U * sizeof(real_T));
  dv1[933] = -in11[2];
  memset(&dv1[934], 0, 35U * sizeof(real_T));
  dv1[969] = -in11[2];
  memset(&dv1[970], 0, 178U * sizeof(real_T));
  dv1[1148] = -1.0;
  memset(&dv1[1149], 0, 35U * sizeof(real_T));
  dv1[1184] = 1.0;
  memset(&dv1[1185], 0, 35U * sizeof(real_T));
  dv1[1220] = -in11[2];
  memset(&dv1[1221], 0, 35U * sizeof(real_T));
  dv1[1256] = -in11[2];
  memset(&dv1[1257], 0, 178U * sizeof(real_T));
  dv1[1435] = -1.0;
  memset(&dv1[1436], 0, 35U * sizeof(real_T));
  dv1[1471] = 1.0;
  memset(&dv1[1472], 0, 35U * sizeof(real_T));
  dv1[1507] = -in11[2];
  memset(&dv1[1508], 0, 35U * sizeof(real_T));
  dv1[1543] = -in11[2];
  memset(&dv1[1544], 0, 178U * sizeof(real_T));
  dv1[1722] = -1.0;
  memset(&dv1[1723], 0, 35U * sizeof(real_T));
  dv1[1758] = 1.0;
  memset(&dv1[1759], 0, 35U * sizeof(real_T));
  dv1[1794] = -in11[2];
  memset(&dv1[1795], 0, 35U * sizeof(real_T));
  dv1[1830] = -in11[2];
  memset(&dv1[1831], 0, 178U * sizeof(real_T));
  dv1[2009] = -1.0;
  memset(&dv1[2010], 0, 35U * sizeof(real_T));
  dv1[2045] = 1.0;
  memset(&dv1[2046], 0, 35U * sizeof(real_T));
  dv1[2081] = -in11[2];
  memset(&dv1[2082], 0, 35U * sizeof(real_T));
  dv1[2117] = -in11[2];
  memset(&dv1[2118], 0, 178U * sizeof(real_T));
  dv1[2296] = -1.0;
  memset(&dv1[2297], 0, 35U * sizeof(real_T));
  dv1[2332] = 1.0;
  memset(&dv1[2333], 0, 35U * sizeof(real_T));
  dv1[2368] = -in11[2];
  memset(&dv1[2369], 0, 35U * sizeof(real_T));
  dv1[2404] = -in11[2];
  memset(&dv1[2405], 0, 178U * sizeof(real_T));
  dv1[2583] = -1.0;
  memset(&dv1[2584], 0, 35U * sizeof(real_T));
  dv1[2619] = 1.0;
  memset(&dv1[2620], 0, 35U * sizeof(real_T));
  dv1[2655] = -in11[2];
  memset(&dv1[2656], 0, 35U * sizeof(real_T));
  dv1[2691] = -in11[2];
  memset(&dv1[2692], 0, 178U * sizeof(real_T));
  dv1[2870] = -1.0;
  memset(&dv1[2871], 0, 35U * sizeof(real_T));
  dv1[2906] = 1.0;
  memset(&dv1[2907], 0, 35U * sizeof(real_T));
  dv1[2942] = -in11[2];
  memset(&dv1[2943], 0, 35U * sizeof(real_T));
  dv1[2978] = -in11[2];
  memset(&dv1[2979], 0, 178U * sizeof(real_T));
  dv1[3157] = -1.0;
  memset(&dv1[3158], 0, 35U * sizeof(real_T));
  dv1[3193] = 1.0;
  memset(&dv1[3194], 0, 35U * sizeof(real_T));
  dv1[3229] = -in11[2];
  memset(&dv1[3230], 0, 35U * sizeof(real_T));
  dv1[3265] = -in11[2];
  memset(&dv1[3266], 0, 178U * sizeof(real_T));
  dv1[3444] = -1.0;
  memset(&dv1[3445], 0, 35U * sizeof(real_T));
  dv1[3480] = 1.0;
  memset(&dv1[3481], 0, 35U * sizeof(real_T));
  dv1[3516] = -in11[2];
  memset(&dv1[3517], 0, 35U * sizeof(real_T));
  dv1[3552] = -in11[2];
  memset(&dv1[3553], 0, 178U * sizeof(real_T));
  dv1[3731] = -1.0;
  memset(&dv1[3732], 0, 35U * sizeof(real_T));
  dv1[3767] = 1.0;
  memset(&dv1[3768], 0, 35U * sizeof(real_T));
  dv1[3803] = -in11[2];
  memset(&dv1[3804], 0, 35U * sizeof(real_T));
  dv1[3839] = -in11[2];
  memset(&dv1[3840], 0, 178U * sizeof(real_T));
  dv1[4018] = -1.0;
  memset(&dv1[4019], 0, 35U * sizeof(real_T));
  dv1[4054] = 1.0;
  memset(&dv1[4055], 0, 35U * sizeof(real_T));
  dv1[4090] = -in11[2];
  memset(&dv1[4091], 0, 35U * sizeof(real_T));
  dv1[4126] = -in11[2];
  memset(&dv1[4127], 0, 178U * sizeof(real_T));
  dv1[4305] = -1.0;
  memset(&dv1[4306], 0, 35U * sizeof(real_T));
  dv1[4341] = 1.0;
  memset(&dv1[4342], 0, 35U * sizeof(real_T));
  dv1[4377] = -in11[2];
  memset(&dv1[4378], 0, 35U * sizeof(real_T));
  dv1[4413] = -in11[2];
  memset(&dv1[4414], 0, 178U * sizeof(real_T));
  dv1[4592] = -1.0;
  memset(&dv1[4593], 0, 35U * sizeof(real_T));
  dv1[4628] = 1.0;
  memset(&dv1[4629], 0, 35U * sizeof(real_T));
  dv1[4664] = -in11[2];
  memset(&dv1[4665], 0, 35U * sizeof(real_T));
  dv1[4700] = -in11[2];
  memset(&dv1[4701], 0, 178U * sizeof(real_T));
  dv1[4879] = -1.0;
  memset(&dv1[4880], 0, 35U * sizeof(real_T));
  dv1[4915] = 1.0;
  memset(&dv1[4916], 0, 35U * sizeof(real_T));
  dv1[4951] = -in11[2];
  memset(&dv1[4952], 0, 35U * sizeof(real_T));
  dv1[4987] = -in11[2];
  memset(&dv1[4988], 0, 178U * sizeof(real_T));
  dv1[5166] = -1.0;
  memset(&dv1[5167], 0, 35U * sizeof(real_T));
  dv1[5202] = 1.0;
  memset(&dv1[5203], 0, 17U * sizeof(real_T));
  dv1[5220] = -in11[3];
  memset(&dv1[5221], 0, 35U * sizeof(real_T));
  dv1[5256] = -in11[3];
  memset(&dv1[5257], 0, 196U * sizeof(real_T));
  dv1[5453] = -1.0;
  memset(&dv1[5454], 0, 35U * sizeof(real_T));
  dv1[5489] = 1.0;
  memset(&dv1[5490], 0, 17U * sizeof(real_T));
  dv1[5507] = -in11[3];
  memset(&dv1[5508], 0, 35U * sizeof(real_T));
  dv1[5543] = -in11[3];
  memset(&dv1[5544], 0, 196U * sizeof(real_T));
  dv1[5740] = -1.0;
  memset(&dv1[5741], 0, 35U * sizeof(real_T));
  dv1[5776] = 1.0;
  memset(&dv1[5777], 0, 17U * sizeof(real_T));
  dv1[5794] = -in11[3];
  memset(&dv1[5795], 0, 35U * sizeof(real_T));
  dv1[5830] = -in11[3];
  memset(&dv1[5831], 0, 196U * sizeof(real_T));
  dv1[6027] = -1.0;
  memset(&dv1[6028], 0, 35U * sizeof(real_T));
  dv1[6063] = 1.0;
  memset(&dv1[6064], 0, 17U * sizeof(real_T));
  dv1[6081] = -in11[3];
  memset(&dv1[6082], 0, 35U * sizeof(real_T));
  dv1[6117] = -in11[3];
  memset(&dv1[6118], 0, 196U * sizeof(real_T));
  dv1[6314] = -1.0;
  memset(&dv1[6315], 0, 35U * sizeof(real_T));
  dv1[6350] = 1.0;
  memset(&dv1[6351], 0, 17U * sizeof(real_T));
  dv1[6368] = -in11[3];
  memset(&dv1[6369], 0, 35U * sizeof(real_T));
  dv1[6404] = -in11[3];
  memset(&dv1[6405], 0, 196U * sizeof(real_T));
  dv1[6601] = -1.0;
  memset(&dv1[6602], 0, 35U * sizeof(real_T));
  dv1[6637] = 1.0;
  memset(&dv1[6638], 0, 17U * sizeof(real_T));
  dv1[6655] = -in11[3];
  memset(&dv1[6656], 0, 35U * sizeof(real_T));
  dv1[6691] = -in11[3];
  memset(&dv1[6692], 0, 196U * sizeof(real_T));
  dv1[6888] = -1.0;
  memset(&dv1[6889], 0, 35U * sizeof(real_T));
  dv1[6924] = 1.0;
  memset(&dv1[6925], 0, 17U * sizeof(real_T));
  dv1[6942] = -in11[3];
  memset(&dv1[6943], 0, 35U * sizeof(real_T));
  dv1[6978] = -in11[3];
  memset(&dv1[6979], 0, 196U * sizeof(real_T));
  dv1[7175] = -1.0;
  memset(&dv1[7176], 0, 35U * sizeof(real_T));
  dv1[7211] = 1.0;
  memset(&dv1[7212], 0, 17U * sizeof(real_T));
  dv1[7229] = -in11[3];
  memset(&dv1[7230], 0, 35U * sizeof(real_T));
  dv1[7265] = -in11[3];
  memset(&dv1[7266], 0, 196U * sizeof(real_T));
  dv1[7462] = -1.0;
  memset(&dv1[7463], 0, 35U * sizeof(real_T));
  dv1[7498] = 1.0;
  memset(&dv1[7499], 0, 17U * sizeof(real_T));
  dv1[7516] = -in11[3];
  memset(&dv1[7517], 0, 35U * sizeof(real_T));
  dv1[7552] = -in11[3];
  memset(&dv1[7553], 0, 196U * sizeof(real_T));
  dv1[7749] = -1.0;
  memset(&dv1[7750], 0, 35U * sizeof(real_T));
  dv1[7785] = 1.0;
  memset(&dv1[7786], 0, 17U * sizeof(real_T));
  dv1[7803] = -in11[3];
  memset(&dv1[7804], 0, 35U * sizeof(real_T));
  dv1[7839] = -in11[3];
  memset(&dv1[7840], 0, 196U * sizeof(real_T));
  dv1[8036] = -1.0;
  memset(&dv1[8037], 0, 35U * sizeof(real_T));
  dv1[8072] = 1.0;
  memset(&dv1[8073], 0, 17U * sizeof(real_T));
  dv1[8090] = -in11[3];
  memset(&dv1[8091], 0, 35U * sizeof(real_T));
  dv1[8126] = -in11[3];
  memset(&dv1[8127], 0, 196U * sizeof(real_T));
  dv1[8323] = -1.0;
  memset(&dv1[8324], 0, 35U * sizeof(real_T));
  dv1[8359] = 1.0;
  memset(&dv1[8360], 0, 17U * sizeof(real_T));
  dv1[8377] = -in11[3];
  memset(&dv1[8378], 0, 35U * sizeof(real_T));
  dv1[8413] = -in11[3];
  memset(&dv1[8414], 0, 196U * sizeof(real_T));
  dv1[8610] = -1.0;
  memset(&dv1[8611], 0, 35U * sizeof(real_T));
  dv1[8646] = 1.0;
  memset(&dv1[8647], 0, 17U * sizeof(real_T));
  dv1[8664] = -in11[3];
  memset(&dv1[8665], 0, 35U * sizeof(real_T));
  dv1[8700] = -in11[3];
  memset(&dv1[8701], 0, 196U * sizeof(real_T));
  dv1[8897] = -1.0;
  memset(&dv1[8898], 0, 35U * sizeof(real_T));
  dv1[8933] = 1.0;
  memset(&dv1[8934], 0, 17U * sizeof(real_T));
  dv1[8951] = -in11[3];
  memset(&dv1[8952], 0, 35U * sizeof(real_T));
  dv1[8987] = -in11[3];
  memset(&dv1[8988], 0, 196U * sizeof(real_T));
  dv1[9184] = -1.0;
  memset(&dv1[9185], 0, 35U * sizeof(real_T));
  dv1[9220] = 1.0;
  memset(&dv1[9221], 0, 17U * sizeof(real_T));
  dv1[9238] = -in11[3];
  memset(&dv1[9239], 0, 35U * sizeof(real_T));
  dv1[9274] = -in11[3];
  memset(&dv1[9275], 0, 196U * sizeof(real_T));
  dv1[9471] = -1.0;
  memset(&dv1[9472], 0, 35U * sizeof(real_T));
  dv1[9507] = 1.0;
  memset(&dv1[9508], 0, 17U * sizeof(real_T));
  dv1[9525] = -in11[3];
  memset(&dv1[9526], 0, 35U * sizeof(real_T));
  dv1[9561] = -in11[3];
  memset(&dv1[9562], 0, 196U * sizeof(real_T));
  dv1[9758] = -1.0;
  memset(&dv1[9759], 0, 35U * sizeof(real_T));
  dv1[9794] = 1.0;
  memset(&dv1[9795], 0, 17U * sizeof(real_T));
  dv1[9812] = -in11[3];
  memset(&dv1[9813], 0, 35U * sizeof(real_T));
  dv1[9848] = -in11[3];
  memset(&dv1[9849], 0, 196U * sizeof(real_T));
  dv1[10045] = -1.0;
  memset(&dv1[10046], 0, 35U * sizeof(real_T));
  dv1[10081] = 1.0;
  memset(&dv1[10082], 0, 17U * sizeof(real_T));
  dv1[10099] = -in11[3];
  memset(&dv1[10100], 0, 35U * sizeof(real_T));
  dv1[10135] = -in11[3];
  memset(&dv1[10136], 0, 160U * sizeof(real_T));
  dv1[10296] = 1.0;
  memset(&dv1[10297], 0, 35U * sizeof(real_T));
  dv1[10332] = -1.0;
  memset(&dv1[10333], 0, 89U * sizeof(real_T));
  dv1[10422] = 1.0;
  dv1[10423] = 0.0;
  dv1[10424] = 0.0;
  dv1[10425] = 0.0;
  dv1[10426] = -1.0;
  memset(&dv1[10427], 0, 13U * sizeof(real_T));
  dv1[10440] = 1.0;
  memset(&dv1[10441], 0, 35U * sizeof(real_T));
  dv1[10476] = -1.0;
  memset(&dv1[10477], 0, 89U * sizeof(real_T));
  dv1[10566] = 1.0;
  dv1[10567] = 0.0;
  dv1[10568] = 0.0;
  dv1[10569] = 0.0;
  dv1[10570] = -1.0;
  memset(&dv1[10571], 0, 13U * sizeof(real_T));
  dv1[10584] = 1.0;
  memset(&dv1[10585], 0, 35U * sizeof(real_T));
  dv1[10620] = -1.0;
  memset(&dv1[10621], 0, 89U * sizeof(real_T));
  dv1[10710] = 1.0;
  dv1[10711] = 0.0;
  dv1[10712] = 0.0;
  dv1[10713] = 0.0;
  dv1[10714] = -1.0;
  memset(&dv1[10715], 0, 13U * sizeof(real_T));
  dv1[10728] = 1.0;
  memset(&dv1[10729], 0, 35U * sizeof(real_T));
  dv1[10764] = -1.0;
  memset(&dv1[10765], 0, 89U * sizeof(real_T));
  dv1[10854] = 1.0;
  dv1[10855] = 0.0;
  dv1[10856] = 0.0;
  dv1[10857] = 0.0;
  dv1[10858] = -1.0;
  memset(&dv1[10859], 0, 13U * sizeof(real_T));
  dv1[10872] = 1.0;
  memset(&dv1[10873], 0, 35U * sizeof(real_T));
  dv1[10908] = -1.0;
  memset(&dv1[10909], 0, 107U * sizeof(real_T));
  dv1[11016] = 1.0;
  memset(&dv1[11017], 0, 35U * sizeof(real_T));
  dv1[11052] = -1.0;
  memset(&dv1[11053], 0, 107U * sizeof(real_T));
  dv1[11160] = 1.0;
  memset(&dv1[11161], 0, 35U * sizeof(real_T));
  dv1[11196] = -1.0;
  memset(&dv1[11197], 0, 107U * sizeof(real_T));
  dv1[11304] = 1.0;
  memset(&dv1[11305], 0, 35U * sizeof(real_T));
  dv1[11340] = -1.0;
  memset(&dv1[11341], 0, 107U * sizeof(real_T));
  dv1[11448] = 1.0;
  memset(&dv1[11449], 0, 35U * sizeof(real_T));
  dv1[11484] = -1.0;
  memset(&dv1[11485], 0, 107U * sizeof(real_T));
  dv1[11592] = 1.0;
  memset(&dv1[11593], 0, 35U * sizeof(real_T));
  dv1[11628] = -1.0;
  memset(&dv1[11629], 0, 107U * sizeof(real_T));
  dv1[11736] = 1.0;
  memset(&dv1[11737], 0, 35U * sizeof(real_T));
  dv1[11772] = -1.0;
  memset(&dv1[11773], 0, 107U * sizeof(real_T));
  dv1[11880] = 1.0;
  memset(&dv1[11881], 0, 35U * sizeof(real_T));
  dv1[11916] = -1.0;
  memset(&dv1[11917], 0, 107U * sizeof(real_T));
  dv1[12024] = 1.0;
  memset(&dv1[12025], 0, 35U * sizeof(real_T));
  dv1[12060] = -1.0;
  memset(&dv1[12061], 0, 107U * sizeof(real_T));
  dv1[12168] = 1.0;
  memset(&dv1[12169], 0, 35U * sizeof(real_T));
  dv1[12204] = -1.0;
  memset(&dv1[12205], 0, 107U * sizeof(real_T));
  dv1[12312] = 1.0;
  memset(&dv1[12313], 0, 35U * sizeof(real_T));
  dv1[12348] = -1.0;
  memset(&dv1[12349], 0, 107U * sizeof(real_T));
  dv1[12456] = 1.0;
  memset(&dv1[12457], 0, 35U * sizeof(real_T));
  dv1[12492] = -1.0;
  memset(&dv1[12493], 0, 107U * sizeof(real_T));
  dv1[12600] = 1.0;
  memset(&dv1[12601], 0, 35U * sizeof(real_T));
  dv1[12636] = -1.0;
  memset(&dv1[12637], 0, 107U * sizeof(real_T));
  dv1[12744] = 1.0;
  memset(&dv1[12745], 0, 35U * sizeof(real_T));
  dv1[12780] = -1.0;
  memset(&dv1[12781], 0, 107U * sizeof(real_T));
  dv1[12888] = 1.0;
  memset(&dv1[12889], 0, 35U * sizeof(real_T));
  dv1[12924] = -1.0;
  memset(&dv1[12925], 0, 79U * sizeof(real_T));
  dv1[13004] = 1.0;
  dv1[13005] = 0.0;
  dv1[13006] = 0.0;
  dv1[13007] = 0.0;
  dv1[13008] = -1.0;
  memset(&dv1[13009], 0, 23U * sizeof(real_T));
  dv1[13032] = 1.0;
  memset(&dv1[13033], 0, 35U * sizeof(real_T));
  dv1[13068] = -1.0;
  memset(&dv1[13069], 0, 79U * sizeof(real_T));
  dv1[13148] = 1.0;
  dv1[13149] = 0.0;
  dv1[13150] = 0.0;
  dv1[13151] = 0.0;
  dv1[13152] = -1.0;
  memset(&dv1[13153], 0, 23U * sizeof(real_T));
  dv1[13176] = 1.0;
  memset(&dv1[13177], 0, 35U * sizeof(real_T));
  dv1[13212] = -1.0;
  memset(&dv1[13213], 0, 79U * sizeof(real_T));
  dv1[13292] = 1.0;
  dv1[13293] = 0.0;
  dv1[13294] = 0.0;
  dv1[13295] = 0.0;
  dv1[13296] = -1.0;
  memset(&dv1[13297], 0, 23U * sizeof(real_T));
  dv1[13320] = 1.0;
  memset(&dv1[13321], 0, 35U * sizeof(real_T));
  dv1[13356] = -1.0;
  memset(&dv1[13357], 0, 79U * sizeof(real_T));
  dv1[13436] = 1.0;
  dv1[13437] = 0.0;
  dv1[13438] = 0.0;
  dv1[13439] = 0.0;
  dv1[13440] = -1.0;
  memset(&dv1[13441], 0, 23U * sizeof(real_T));
  dv1[13464] = 1.0;
  memset(&dv1[13465], 0, 35U * sizeof(real_T));
  dv1[13500] = -1.0;
  memset(&dv1[13501], 0, 107U * sizeof(real_T));
  dv1[13608] = 1.0;
  memset(&dv1[13609], 0, 35U * sizeof(real_T));
  dv1[13644] = -1.0;
  memset(&dv1[13645], 0, 107U * sizeof(real_T));
  dv1[13752] = 1.0;
  memset(&dv1[13753], 0, 35U * sizeof(real_T));
  dv1[13788] = -1.0;
  memset(&dv1[13789], 0, 107U * sizeof(real_T));
  dv1[13896] = 1.0;
  memset(&dv1[13897], 0, 35U * sizeof(real_T));
  dv1[13932] = -1.0;
  memset(&dv1[13933], 0, 107U * sizeof(real_T));
  dv1[14040] = 1.0;
  memset(&dv1[14041], 0, 35U * sizeof(real_T));
  dv1[14076] = -1.0;
  memset(&dv1[14077], 0, 107U * sizeof(real_T));
  dv1[14184] = 1.0;
  memset(&dv1[14185], 0, 35U * sizeof(real_T));
  dv1[14220] = -1.0;
  memset(&dv1[14221], 0, 107U * sizeof(real_T));
  dv1[14328] = 1.0;
  memset(&dv1[14329], 0, 35U * sizeof(real_T));
  dv1[14364] = -1.0;
  memset(&dv1[14365], 0, 107U * sizeof(real_T));
  dv1[14472] = 1.0;
  memset(&dv1[14473], 0, 35U * sizeof(real_T));
  dv1[14508] = -1.0;
  memset(&dv1[14509], 0, 107U * sizeof(real_T));
  dv1[14616] = 1.0;
  memset(&dv1[14617], 0, 35U * sizeof(real_T));
  dv1[14652] = -1.0;
  memset(&dv1[14653], 0, 107U * sizeof(real_T));
  dv1[14760] = 1.0;
  memset(&dv1[14761], 0, 35U * sizeof(real_T));
  dv1[14796] = -1.0;
  memset(&dv1[14797], 0, 107U * sizeof(real_T));
  dv1[14904] = 1.0;
  memset(&dv1[14905], 0, 35U * sizeof(real_T));
  dv1[14940] = -1.0;
  memset(&dv1[14941], 0, 107U * sizeof(real_T));
  dv1[15048] = 1.0;
  memset(&dv1[15049], 0, 35U * sizeof(real_T));
  dv1[15084] = -1.0;
  memset(&dv1[15085], 0, 107U * sizeof(real_T));
  dv1[15192] = 1.0;
  memset(&dv1[15193], 0, 35U * sizeof(real_T));
  dv1[15228] = -1.0;
  memset(&dv1[15229], 0, 107U * sizeof(real_T));
  dv1[15336] = 1.0;
  memset(&dv1[15337], 0, 35U * sizeof(real_T));
  dv1[15372] = -1.0;
  memset(&dv1[15373], 0, 785U * sizeof(real_T));
  dv1[16158] = 1.0;
  memset(&dv1[16159], 0, 519U * sizeof(real_T));
  dv1[16678] = -1.0;
  memset(&dv1[16679], 0, 17U * sizeof(real_T));
  dv1[16696] = -1.0;
  memset(&dv1[16697], 0, 125U * sizeof(real_T));
  dv1[16822] = -1.0;
  memset(&dv1[16823], 0, 17U * sizeof(real_T));
  dv1[16840] = -1.0;
  memset(&dv1[16841], 0, 125U * sizeof(real_T));
  dv1[16966] = -1.0;
  memset(&dv1[16967], 0, 17U * sizeof(real_T));
  dv1[16984] = -1.0;
  memset(&dv1[16985], 0, 125U * sizeof(real_T));
  dv1[17110] = -1.0;
  memset(&dv1[17111], 0, 17U * sizeof(real_T));
  dv1[17128] = -1.0;
  memset(&dv1[17129], 0, 125U * sizeof(real_T));
  dv1[17254] = -1.0;
  memset(&dv1[17255], 0, 17U * sizeof(real_T));
  dv1[17272] = -1.0;
  memset(&dv1[17273], 0, 125U * sizeof(real_T));
  dv1[17398] = -1.0;
  memset(&dv1[17399], 0, 17U * sizeof(real_T));
  dv1[17416] = -1.0;
  memset(&dv1[17417], 0, 125U * sizeof(real_T));
  dv1[17542] = -1.0;
  memset(&dv1[17543], 0, 17U * sizeof(real_T));
  dv1[17560] = -1.0;
  memset(&dv1[17561], 0, 125U * sizeof(real_T));
  dv1[17686] = -1.0;
  memset(&dv1[17687], 0, 17U * sizeof(real_T));
  dv1[17704] = -1.0;
  memset(&dv1[17705], 0, 125U * sizeof(real_T));
  dv1[17830] = -1.0;
  memset(&dv1[17831], 0, 17U * sizeof(real_T));
  dv1[17848] = -1.0;
  memset(&dv1[17849], 0, 125U * sizeof(real_T));
  dv1[17974] = -1.0;
  memset(&dv1[17975], 0, 17U * sizeof(real_T));
  dv1[17992] = -1.0;
  memset(&dv1[17993], 0, 125U * sizeof(real_T));
  dv1[18118] = -1.0;
  memset(&dv1[18119], 0, 17U * sizeof(real_T));
  dv1[18136] = -1.0;
  memset(&dv1[18137], 0, 125U * sizeof(real_T));
  dv1[18262] = -1.0;
  memset(&dv1[18263], 0, 17U * sizeof(real_T));
  dv1[18280] = -1.0;
  memset(&dv1[18281], 0, 125U * sizeof(real_T));
  dv1[18406] = -1.0;
  memset(&dv1[18407], 0, 17U * sizeof(real_T));
  dv1[18424] = -1.0;
  memset(&dv1[18425], 0, 125U * sizeof(real_T));
  dv1[18550] = -1.0;
  memset(&dv1[18551], 0, 17U * sizeof(real_T));
  dv1[18568] = -1.0;
  memset(&dv1[18569], 0, 125U * sizeof(real_T));
  dv1[18694] = -1.0;
  memset(&dv1[18695], 0, 17U * sizeof(real_T));
  dv1[18712] = -1.0;
  memset(&dv1[18713], 0, 125U * sizeof(real_T));
  dv1[18838] = -1.0;
  memset(&dv1[18839], 0, 17U * sizeof(real_T));
  dv1[18856] = -1.0;
  memset(&dv1[18857], 0, 125U * sizeof(real_T));
  dv1[18982] = -1.0;
  memset(&dv1[18983], 0, 17U * sizeof(real_T));
  dv1[19000] = -1.0;
  memset(&dv1[19001], 0, 125U * sizeof(real_T));
  dv1[19126] = -1.0;
  memset(&dv1[19127], 0, 17U * sizeof(real_T));
  dv1[19144] = -1.0;
  memset(&dv1[19145], 0, 159U * sizeof(real_T));
  dv1[19304] = -1.0;
  memset(&dv1[19305], 0, 2557U * sizeof(real_T));
  dv1[21862] = -1.0;
  dv1[21863] = 0.0;
  dv1[21864] = 0.0;
  dv1[21865] = 0.0;
  dv1[21866] = -1.0;
  memset(&dv1[21867], 0, 139U * sizeof(real_T));
  dv1[22006] = -1.0;
  dv1[22007] = 0.0;
  dv1[22008] = 0.0;
  dv1[22009] = 0.0;
  dv1[22010] = -1.0;
  memset(&dv1[22011], 0, 139U * sizeof(real_T));
  dv1[22150] = -1.0;
  dv1[22151] = 0.0;
  dv1[22152] = 0.0;
  dv1[22153] = 0.0;
  dv1[22154] = -1.0;
  memset(&dv1[22155], 0, 139U * sizeof(real_T));
  dv1[22294] = -1.0;
  dv1[22295] = 0.0;
  dv1[22296] = 0.0;
  dv1[22297] = 0.0;
  dv1[22298] = -1.0;
  memset(&dv1[22299], 0, 286U * sizeof(real_T));
  dv1[22585] = -1.0;
  dv1[22586] = 0.0;
  dv1[22587] = 0.0;
  dv1[22588] = 0.0;
  dv1[22589] = -1.0;
  memset(&dv1[22590], 0, 139U * sizeof(real_T));
  dv1[22729] = -1.0;
  dv1[22730] = 0.0;
  dv1[22731] = 0.0;
  dv1[22732] = 0.0;
  dv1[22733] = -1.0;
  memset(&dv1[22734], 0, 139U * sizeof(real_T));
  dv1[22873] = -1.0;
  dv1[22874] = 0.0;
  dv1[22875] = 0.0;
  dv1[22876] = 0.0;
  dv1[22877] = -1.0;
  memset(&dv1[22878], 0, 139U * sizeof(real_T));
  dv1[23017] = -1.0;
  dv1[23018] = 0.0;
  dv1[23019] = 0.0;
  dv1[23020] = 0.0;
  dv1[23021] = -1.0;
  memset(&dv1[23022], 0, 1288U * sizeof(real_T));
  for (i1 = 0; i1 < 170; i1++) {
    memcpy(&Aiq[i1 * 143], &dv1[i1 * 143], 143U * sizeof(real_T));
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
  biq[130] = t9;
  biq[131] = t9;
  biq[132] = t9;
  biq[133] = t9;
  biq[134] = t10;
  biq[135] = t10;
  biq[136] = t10;
  biq[137] = t10;
  biq[138] = t11;
  biq[139] = t11;
  biq[140] = t11;
  biq[141] = t11;
  biq[142] = -in9[1];
}

/* End of code generation (IqFast_LeftStart1V30.cpp) */
