/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart2V30.cpp
 *
 * Code generation for function 'IqFast_LeftStart2V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step2.h"
#include "IqFast_LeftStart2V30.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart2V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [23630], real_T biq[139])
{
  int32_T i1;
  real_T dv1[23630];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART2V30 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART2V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:07:29 */
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
  memset(&dv1[109], 0, 170U * sizeof(real_T));
  dv1[279] = -1.0;
  memset(&dv1[280], 0, 35U * sizeof(real_T));
  dv1[315] = 1.0;
  memset(&dv1[316], 0, 35U * sizeof(real_T));
  dv1[351] = -in11[2];
  memset(&dv1[352], 0, 35U * sizeof(real_T));
  dv1[387] = -in11[2];
  memset(&dv1[388], 0, 170U * sizeof(real_T));
  dv1[558] = -1.0;
  memset(&dv1[559], 0, 35U * sizeof(real_T));
  dv1[594] = 1.0;
  memset(&dv1[595], 0, 35U * sizeof(real_T));
  dv1[630] = -in11[2];
  memset(&dv1[631], 0, 35U * sizeof(real_T));
  dv1[666] = -in11[2];
  memset(&dv1[667], 0, 170U * sizeof(real_T));
  dv1[837] = -1.0;
  memset(&dv1[838], 0, 35U * sizeof(real_T));
  dv1[873] = 1.0;
  memset(&dv1[874], 0, 35U * sizeof(real_T));
  dv1[909] = -in11[2];
  memset(&dv1[910], 0, 35U * sizeof(real_T));
  dv1[945] = -in11[2];
  memset(&dv1[946], 0, 170U * sizeof(real_T));
  dv1[1116] = -1.0;
  memset(&dv1[1117], 0, 35U * sizeof(real_T));
  dv1[1152] = 1.0;
  memset(&dv1[1153], 0, 35U * sizeof(real_T));
  dv1[1188] = -in11[2];
  memset(&dv1[1189], 0, 35U * sizeof(real_T));
  dv1[1224] = -in11[2];
  memset(&dv1[1225], 0, 170U * sizeof(real_T));
  dv1[1395] = -1.0;
  memset(&dv1[1396], 0, 35U * sizeof(real_T));
  dv1[1431] = 1.0;
  memset(&dv1[1432], 0, 35U * sizeof(real_T));
  dv1[1467] = -in11[2];
  memset(&dv1[1468], 0, 35U * sizeof(real_T));
  dv1[1503] = -in11[2];
  memset(&dv1[1504], 0, 170U * sizeof(real_T));
  dv1[1674] = -1.0;
  memset(&dv1[1675], 0, 35U * sizeof(real_T));
  dv1[1710] = 1.0;
  memset(&dv1[1711], 0, 35U * sizeof(real_T));
  dv1[1746] = -in11[2];
  memset(&dv1[1747], 0, 35U * sizeof(real_T));
  dv1[1782] = -in11[2];
  memset(&dv1[1783], 0, 170U * sizeof(real_T));
  dv1[1953] = -1.0;
  memset(&dv1[1954], 0, 35U * sizeof(real_T));
  dv1[1989] = 1.0;
  memset(&dv1[1990], 0, 35U * sizeof(real_T));
  dv1[2025] = -in11[2];
  memset(&dv1[2026], 0, 35U * sizeof(real_T));
  dv1[2061] = -in11[2];
  memset(&dv1[2062], 0, 170U * sizeof(real_T));
  dv1[2232] = -1.0;
  memset(&dv1[2233], 0, 35U * sizeof(real_T));
  dv1[2268] = 1.0;
  memset(&dv1[2269], 0, 35U * sizeof(real_T));
  dv1[2304] = -in11[2];
  memset(&dv1[2305], 0, 35U * sizeof(real_T));
  dv1[2340] = -in11[2];
  memset(&dv1[2341], 0, 170U * sizeof(real_T));
  dv1[2511] = -1.0;
  memset(&dv1[2512], 0, 35U * sizeof(real_T));
  dv1[2547] = 1.0;
  memset(&dv1[2548], 0, 35U * sizeof(real_T));
  dv1[2583] = -in11[2];
  memset(&dv1[2584], 0, 35U * sizeof(real_T));
  dv1[2619] = -in11[2];
  memset(&dv1[2620], 0, 170U * sizeof(real_T));
  dv1[2790] = -1.0;
  memset(&dv1[2791], 0, 35U * sizeof(real_T));
  dv1[2826] = 1.0;
  memset(&dv1[2827], 0, 35U * sizeof(real_T));
  dv1[2862] = -in11[2];
  memset(&dv1[2863], 0, 35U * sizeof(real_T));
  dv1[2898] = -in11[2];
  memset(&dv1[2899], 0, 170U * sizeof(real_T));
  dv1[3069] = -1.0;
  memset(&dv1[3070], 0, 35U * sizeof(real_T));
  dv1[3105] = 1.0;
  memset(&dv1[3106], 0, 35U * sizeof(real_T));
  dv1[3141] = -in11[2];
  memset(&dv1[3142], 0, 35U * sizeof(real_T));
  dv1[3177] = -in11[2];
  memset(&dv1[3178], 0, 170U * sizeof(real_T));
  dv1[3348] = -1.0;
  memset(&dv1[3349], 0, 35U * sizeof(real_T));
  dv1[3384] = 1.0;
  memset(&dv1[3385], 0, 35U * sizeof(real_T));
  dv1[3420] = -in11[2];
  memset(&dv1[3421], 0, 35U * sizeof(real_T));
  dv1[3456] = -in11[2];
  memset(&dv1[3457], 0, 170U * sizeof(real_T));
  dv1[3627] = -1.0;
  memset(&dv1[3628], 0, 35U * sizeof(real_T));
  dv1[3663] = 1.0;
  memset(&dv1[3664], 0, 35U * sizeof(real_T));
  dv1[3699] = -in11[2];
  memset(&dv1[3700], 0, 35U * sizeof(real_T));
  dv1[3735] = -in11[2];
  memset(&dv1[3736], 0, 170U * sizeof(real_T));
  dv1[3906] = -1.0;
  memset(&dv1[3907], 0, 35U * sizeof(real_T));
  dv1[3942] = 1.0;
  memset(&dv1[3943], 0, 35U * sizeof(real_T));
  dv1[3978] = -in11[2];
  memset(&dv1[3979], 0, 35U * sizeof(real_T));
  dv1[4014] = -in11[2];
  memset(&dv1[4015], 0, 170U * sizeof(real_T));
  dv1[4185] = -1.0;
  memset(&dv1[4186], 0, 35U * sizeof(real_T));
  dv1[4221] = 1.0;
  memset(&dv1[4222], 0, 35U * sizeof(real_T));
  dv1[4257] = -in11[2];
  memset(&dv1[4258], 0, 35U * sizeof(real_T));
  dv1[4293] = -in11[2];
  memset(&dv1[4294], 0, 170U * sizeof(real_T));
  dv1[4464] = -1.0;
  memset(&dv1[4465], 0, 35U * sizeof(real_T));
  dv1[4500] = 1.0;
  memset(&dv1[4501], 0, 35U * sizeof(real_T));
  dv1[4536] = -in11[2];
  memset(&dv1[4537], 0, 35U * sizeof(real_T));
  dv1[4572] = -in11[2];
  memset(&dv1[4573], 0, 170U * sizeof(real_T));
  dv1[4743] = -1.0;
  memset(&dv1[4744], 0, 35U * sizeof(real_T));
  dv1[4779] = 1.0;
  memset(&dv1[4780], 0, 35U * sizeof(real_T));
  dv1[4815] = -in11[2];
  memset(&dv1[4816], 0, 35U * sizeof(real_T));
  dv1[4851] = -in11[2];
  memset(&dv1[4852], 0, 170U * sizeof(real_T));
  dv1[5022] = -1.0;
  memset(&dv1[5023], 0, 35U * sizeof(real_T));
  dv1[5058] = 1.0;
  memset(&dv1[5059], 0, 17U * sizeof(real_T));
  dv1[5076] = -in11[3];
  memset(&dv1[5077], 0, 35U * sizeof(real_T));
  dv1[5112] = -in11[3];
  memset(&dv1[5113], 0, 188U * sizeof(real_T));
  dv1[5301] = -1.0;
  memset(&dv1[5302], 0, 35U * sizeof(real_T));
  dv1[5337] = 1.0;
  memset(&dv1[5338], 0, 17U * sizeof(real_T));
  dv1[5355] = -in11[3];
  memset(&dv1[5356], 0, 35U * sizeof(real_T));
  dv1[5391] = -in11[3];
  memset(&dv1[5392], 0, 188U * sizeof(real_T));
  dv1[5580] = -1.0;
  memset(&dv1[5581], 0, 35U * sizeof(real_T));
  dv1[5616] = 1.0;
  memset(&dv1[5617], 0, 17U * sizeof(real_T));
  dv1[5634] = -in11[3];
  memset(&dv1[5635], 0, 35U * sizeof(real_T));
  dv1[5670] = -in11[3];
  memset(&dv1[5671], 0, 188U * sizeof(real_T));
  dv1[5859] = -1.0;
  memset(&dv1[5860], 0, 35U * sizeof(real_T));
  dv1[5895] = 1.0;
  memset(&dv1[5896], 0, 17U * sizeof(real_T));
  dv1[5913] = -in11[3];
  memset(&dv1[5914], 0, 35U * sizeof(real_T));
  dv1[5949] = -in11[3];
  memset(&dv1[5950], 0, 188U * sizeof(real_T));
  dv1[6138] = -1.0;
  memset(&dv1[6139], 0, 35U * sizeof(real_T));
  dv1[6174] = 1.0;
  memset(&dv1[6175], 0, 17U * sizeof(real_T));
  dv1[6192] = -in11[3];
  memset(&dv1[6193], 0, 35U * sizeof(real_T));
  dv1[6228] = -in11[3];
  memset(&dv1[6229], 0, 188U * sizeof(real_T));
  dv1[6417] = -1.0;
  memset(&dv1[6418], 0, 35U * sizeof(real_T));
  dv1[6453] = 1.0;
  memset(&dv1[6454], 0, 17U * sizeof(real_T));
  dv1[6471] = -in11[3];
  memset(&dv1[6472], 0, 35U * sizeof(real_T));
  dv1[6507] = -in11[3];
  memset(&dv1[6508], 0, 188U * sizeof(real_T));
  dv1[6696] = -1.0;
  memset(&dv1[6697], 0, 35U * sizeof(real_T));
  dv1[6732] = 1.0;
  memset(&dv1[6733], 0, 17U * sizeof(real_T));
  dv1[6750] = -in11[3];
  memset(&dv1[6751], 0, 35U * sizeof(real_T));
  dv1[6786] = -in11[3];
  memset(&dv1[6787], 0, 188U * sizeof(real_T));
  dv1[6975] = -1.0;
  memset(&dv1[6976], 0, 35U * sizeof(real_T));
  dv1[7011] = 1.0;
  memset(&dv1[7012], 0, 17U * sizeof(real_T));
  dv1[7029] = -in11[3];
  memset(&dv1[7030], 0, 35U * sizeof(real_T));
  dv1[7065] = -in11[3];
  memset(&dv1[7066], 0, 188U * sizeof(real_T));
  dv1[7254] = -1.0;
  memset(&dv1[7255], 0, 35U * sizeof(real_T));
  dv1[7290] = 1.0;
  memset(&dv1[7291], 0, 17U * sizeof(real_T));
  dv1[7308] = -in11[3];
  memset(&dv1[7309], 0, 35U * sizeof(real_T));
  dv1[7344] = -in11[3];
  memset(&dv1[7345], 0, 188U * sizeof(real_T));
  dv1[7533] = -1.0;
  memset(&dv1[7534], 0, 35U * sizeof(real_T));
  dv1[7569] = 1.0;
  memset(&dv1[7570], 0, 17U * sizeof(real_T));
  dv1[7587] = -in11[3];
  memset(&dv1[7588], 0, 35U * sizeof(real_T));
  dv1[7623] = -in11[3];
  memset(&dv1[7624], 0, 188U * sizeof(real_T));
  dv1[7812] = -1.0;
  memset(&dv1[7813], 0, 35U * sizeof(real_T));
  dv1[7848] = 1.0;
  memset(&dv1[7849], 0, 17U * sizeof(real_T));
  dv1[7866] = -in11[3];
  memset(&dv1[7867], 0, 35U * sizeof(real_T));
  dv1[7902] = -in11[3];
  memset(&dv1[7903], 0, 188U * sizeof(real_T));
  dv1[8091] = -1.0;
  memset(&dv1[8092], 0, 35U * sizeof(real_T));
  dv1[8127] = 1.0;
  memset(&dv1[8128], 0, 17U * sizeof(real_T));
  dv1[8145] = -in11[3];
  memset(&dv1[8146], 0, 35U * sizeof(real_T));
  dv1[8181] = -in11[3];
  memset(&dv1[8182], 0, 188U * sizeof(real_T));
  dv1[8370] = -1.0;
  memset(&dv1[8371], 0, 35U * sizeof(real_T));
  dv1[8406] = 1.0;
  memset(&dv1[8407], 0, 17U * sizeof(real_T));
  dv1[8424] = -in11[3];
  memset(&dv1[8425], 0, 35U * sizeof(real_T));
  dv1[8460] = -in11[3];
  memset(&dv1[8461], 0, 188U * sizeof(real_T));
  dv1[8649] = -1.0;
  memset(&dv1[8650], 0, 35U * sizeof(real_T));
  dv1[8685] = 1.0;
  memset(&dv1[8686], 0, 17U * sizeof(real_T));
  dv1[8703] = -in11[3];
  memset(&dv1[8704], 0, 35U * sizeof(real_T));
  dv1[8739] = -in11[3];
  memset(&dv1[8740], 0, 188U * sizeof(real_T));
  dv1[8928] = -1.0;
  memset(&dv1[8929], 0, 35U * sizeof(real_T));
  dv1[8964] = 1.0;
  memset(&dv1[8965], 0, 17U * sizeof(real_T));
  dv1[8982] = -in11[3];
  memset(&dv1[8983], 0, 35U * sizeof(real_T));
  dv1[9018] = -in11[3];
  memset(&dv1[9019], 0, 188U * sizeof(real_T));
  dv1[9207] = -1.0;
  memset(&dv1[9208], 0, 35U * sizeof(real_T));
  dv1[9243] = 1.0;
  memset(&dv1[9244], 0, 17U * sizeof(real_T));
  dv1[9261] = -in11[3];
  memset(&dv1[9262], 0, 35U * sizeof(real_T));
  dv1[9297] = -in11[3];
  memset(&dv1[9298], 0, 188U * sizeof(real_T));
  dv1[9486] = -1.0;
  memset(&dv1[9487], 0, 35U * sizeof(real_T));
  dv1[9522] = 1.0;
  memset(&dv1[9523], 0, 17U * sizeof(real_T));
  dv1[9540] = -in11[3];
  memset(&dv1[9541], 0, 35U * sizeof(real_T));
  dv1[9576] = -in11[3];
  memset(&dv1[9577], 0, 188U * sizeof(real_T));
  dv1[9765] = -1.0;
  memset(&dv1[9766], 0, 35U * sizeof(real_T));
  dv1[9801] = 1.0;
  memset(&dv1[9802], 0, 17U * sizeof(real_T));
  dv1[9819] = -in11[3];
  memset(&dv1[9820], 0, 35U * sizeof(real_T));
  dv1[9855] = -in11[3];
  memset(&dv1[9856], 0, 152U * sizeof(real_T));
  dv1[10008] = 1.0;
  memset(&dv1[10009], 0, 35U * sizeof(real_T));
  dv1[10044] = -1.0;
  memset(&dv1[10045], 0, 89U * sizeof(real_T));
  dv1[10134] = 1.0;
  dv1[10135] = 0.0;
  dv1[10136] = 0.0;
  dv1[10137] = -1.0;
  memset(&dv1[10138], 0, 10U * sizeof(real_T));
  dv1[10148] = 1.0;
  memset(&dv1[10149], 0, 35U * sizeof(real_T));
  dv1[10184] = -1.0;
  memset(&dv1[10185], 0, 89U * sizeof(real_T));
  dv1[10274] = 1.0;
  dv1[10275] = 0.0;
  dv1[10276] = 0.0;
  dv1[10277] = -1.0;
  memset(&dv1[10278], 0, 10U * sizeof(real_T));
  dv1[10288] = 1.0;
  memset(&dv1[10289], 0, 35U * sizeof(real_T));
  dv1[10324] = -1.0;
  memset(&dv1[10325], 0, 89U * sizeof(real_T));
  dv1[10414] = 1.0;
  dv1[10415] = 0.0;
  dv1[10416] = 0.0;
  dv1[10417] = -1.0;
  memset(&dv1[10418], 0, 10U * sizeof(real_T));
  dv1[10428] = 1.0;
  memset(&dv1[10429], 0, 35U * sizeof(real_T));
  dv1[10464] = -1.0;
  memset(&dv1[10465], 0, 103U * sizeof(real_T));
  dv1[10568] = 1.0;
  memset(&dv1[10569], 0, 35U * sizeof(real_T));
  dv1[10604] = -1.0;
  memset(&dv1[10605], 0, 103U * sizeof(real_T));
  dv1[10708] = 1.0;
  memset(&dv1[10709], 0, 35U * sizeof(real_T));
  dv1[10744] = -1.0;
  memset(&dv1[10745], 0, 103U * sizeof(real_T));
  dv1[10848] = 1.0;
  memset(&dv1[10849], 0, 35U * sizeof(real_T));
  dv1[10884] = -1.0;
  memset(&dv1[10885], 0, 103U * sizeof(real_T));
  dv1[10988] = 1.0;
  memset(&dv1[10989], 0, 35U * sizeof(real_T));
  dv1[11024] = -1.0;
  memset(&dv1[11025], 0, 103U * sizeof(real_T));
  dv1[11128] = 1.0;
  memset(&dv1[11129], 0, 35U * sizeof(real_T));
  dv1[11164] = -1.0;
  memset(&dv1[11165], 0, 103U * sizeof(real_T));
  dv1[11268] = 1.0;
  memset(&dv1[11269], 0, 35U * sizeof(real_T));
  dv1[11304] = -1.0;
  memset(&dv1[11305], 0, 103U * sizeof(real_T));
  dv1[11408] = 1.0;
  memset(&dv1[11409], 0, 35U * sizeof(real_T));
  dv1[11444] = -1.0;
  memset(&dv1[11445], 0, 103U * sizeof(real_T));
  dv1[11548] = 1.0;
  memset(&dv1[11549], 0, 35U * sizeof(real_T));
  dv1[11584] = -1.0;
  memset(&dv1[11585], 0, 103U * sizeof(real_T));
  dv1[11688] = 1.0;
  memset(&dv1[11689], 0, 35U * sizeof(real_T));
  dv1[11724] = -1.0;
  memset(&dv1[11725], 0, 103U * sizeof(real_T));
  dv1[11828] = 1.0;
  memset(&dv1[11829], 0, 35U * sizeof(real_T));
  dv1[11864] = -1.0;
  memset(&dv1[11865], 0, 103U * sizeof(real_T));
  dv1[11968] = 1.0;
  memset(&dv1[11969], 0, 35U * sizeof(real_T));
  dv1[12004] = -1.0;
  memset(&dv1[12005], 0, 103U * sizeof(real_T));
  dv1[12108] = 1.0;
  memset(&dv1[12109], 0, 35U * sizeof(real_T));
  dv1[12144] = -1.0;
  memset(&dv1[12145], 0, 103U * sizeof(real_T));
  dv1[12248] = 1.0;
  memset(&dv1[12249], 0, 35U * sizeof(real_T));
  dv1[12284] = -1.0;
  memset(&dv1[12285], 0, 103U * sizeof(real_T));
  dv1[12388] = 1.0;
  memset(&dv1[12389], 0, 35U * sizeof(real_T));
  dv1[12424] = -1.0;
  memset(&dv1[12425], 0, 103U * sizeof(real_T));
  dv1[12528] = 1.0;
  memset(&dv1[12529], 0, 35U * sizeof(real_T));
  dv1[12564] = -1.0;
  memset(&dv1[12565], 0, 77U * sizeof(real_T));
  dv1[12642] = 1.0;
  dv1[12643] = 0.0;
  dv1[12644] = 0.0;
  dv1[12645] = -1.0;
  memset(&dv1[12646], 0, 22U * sizeof(real_T));
  dv1[12668] = 1.0;
  memset(&dv1[12669], 0, 35U * sizeof(real_T));
  dv1[12704] = -1.0;
  memset(&dv1[12705], 0, 77U * sizeof(real_T));
  dv1[12782] = 1.0;
  dv1[12783] = 0.0;
  dv1[12784] = 0.0;
  dv1[12785] = -1.0;
  memset(&dv1[12786], 0, 22U * sizeof(real_T));
  dv1[12808] = 1.0;
  memset(&dv1[12809], 0, 35U * sizeof(real_T));
  dv1[12844] = -1.0;
  memset(&dv1[12845], 0, 77U * sizeof(real_T));
  dv1[12922] = 1.0;
  dv1[12923] = 0.0;
  dv1[12924] = 0.0;
  dv1[12925] = -1.0;
  memset(&dv1[12926], 0, 22U * sizeof(real_T));
  dv1[12948] = 1.0;
  memset(&dv1[12949], 0, 35U * sizeof(real_T));
  dv1[12984] = -1.0;
  memset(&dv1[12985], 0, 103U * sizeof(real_T));
  dv1[13088] = 1.0;
  memset(&dv1[13089], 0, 35U * sizeof(real_T));
  dv1[13124] = -1.0;
  memset(&dv1[13125], 0, 103U * sizeof(real_T));
  dv1[13228] = 1.0;
  memset(&dv1[13229], 0, 35U * sizeof(real_T));
  dv1[13264] = -1.0;
  memset(&dv1[13265], 0, 103U * sizeof(real_T));
  dv1[13368] = 1.0;
  memset(&dv1[13369], 0, 35U * sizeof(real_T));
  dv1[13404] = -1.0;
  memset(&dv1[13405], 0, 103U * sizeof(real_T));
  dv1[13508] = 1.0;
  memset(&dv1[13509], 0, 35U * sizeof(real_T));
  dv1[13544] = -1.0;
  memset(&dv1[13545], 0, 103U * sizeof(real_T));
  dv1[13648] = 1.0;
  memset(&dv1[13649], 0, 35U * sizeof(real_T));
  dv1[13684] = -1.0;
  memset(&dv1[13685], 0, 103U * sizeof(real_T));
  dv1[13788] = 1.0;
  memset(&dv1[13789], 0, 35U * sizeof(real_T));
  dv1[13824] = -1.0;
  memset(&dv1[13825], 0, 103U * sizeof(real_T));
  dv1[13928] = 1.0;
  memset(&dv1[13929], 0, 35U * sizeof(real_T));
  dv1[13964] = -1.0;
  memset(&dv1[13965], 0, 103U * sizeof(real_T));
  dv1[14068] = 1.0;
  memset(&dv1[14069], 0, 35U * sizeof(real_T));
  dv1[14104] = -1.0;
  memset(&dv1[14105], 0, 103U * sizeof(real_T));
  dv1[14208] = 1.0;
  memset(&dv1[14209], 0, 35U * sizeof(real_T));
  dv1[14244] = -1.0;
  memset(&dv1[14245], 0, 103U * sizeof(real_T));
  dv1[14348] = 1.0;
  memset(&dv1[14349], 0, 35U * sizeof(real_T));
  dv1[14384] = -1.0;
  memset(&dv1[14385], 0, 103U * sizeof(real_T));
  dv1[14488] = 1.0;
  memset(&dv1[14489], 0, 35U * sizeof(real_T));
  dv1[14524] = -1.0;
  memset(&dv1[14525], 0, 103U * sizeof(real_T));
  dv1[14628] = 1.0;
  memset(&dv1[14629], 0, 35U * sizeof(real_T));
  dv1[14664] = -1.0;
  memset(&dv1[14665], 0, 103U * sizeof(real_T));
  dv1[14768] = 1.0;
  memset(&dv1[14769], 0, 35U * sizeof(real_T));
  dv1[14804] = -1.0;
  memset(&dv1[14805], 0, 103U * sizeof(real_T));
  dv1[14908] = 1.0;
  memset(&dv1[14909], 0, 35U * sizeof(real_T));
  dv1[14944] = -1.0;
  memset(&dv1[14945], 0, 761U * sizeof(real_T));
  dv1[15706] = 1.0;
  memset(&dv1[15707], 0, 507U * sizeof(real_T));
  dv1[16214] = -1.0;
  memset(&dv1[16215], 0, 17U * sizeof(real_T));
  dv1[16232] = -1.0;
  memset(&dv1[16233], 0, 121U * sizeof(real_T));
  dv1[16354] = -1.0;
  memset(&dv1[16355], 0, 17U * sizeof(real_T));
  dv1[16372] = -1.0;
  memset(&dv1[16373], 0, 121U * sizeof(real_T));
  dv1[16494] = -1.0;
  memset(&dv1[16495], 0, 17U * sizeof(real_T));
  dv1[16512] = -1.0;
  memset(&dv1[16513], 0, 121U * sizeof(real_T));
  dv1[16634] = -1.0;
  memset(&dv1[16635], 0, 17U * sizeof(real_T));
  dv1[16652] = -1.0;
  memset(&dv1[16653], 0, 121U * sizeof(real_T));
  dv1[16774] = -1.0;
  memset(&dv1[16775], 0, 17U * sizeof(real_T));
  dv1[16792] = -1.0;
  memset(&dv1[16793], 0, 121U * sizeof(real_T));
  dv1[16914] = -1.0;
  memset(&dv1[16915], 0, 17U * sizeof(real_T));
  dv1[16932] = -1.0;
  memset(&dv1[16933], 0, 121U * sizeof(real_T));
  dv1[17054] = -1.0;
  memset(&dv1[17055], 0, 17U * sizeof(real_T));
  dv1[17072] = -1.0;
  memset(&dv1[17073], 0, 121U * sizeof(real_T));
  dv1[17194] = -1.0;
  memset(&dv1[17195], 0, 17U * sizeof(real_T));
  dv1[17212] = -1.0;
  memset(&dv1[17213], 0, 121U * sizeof(real_T));
  dv1[17334] = -1.0;
  memset(&dv1[17335], 0, 17U * sizeof(real_T));
  dv1[17352] = -1.0;
  memset(&dv1[17353], 0, 121U * sizeof(real_T));
  dv1[17474] = -1.0;
  memset(&dv1[17475], 0, 17U * sizeof(real_T));
  dv1[17492] = -1.0;
  memset(&dv1[17493], 0, 121U * sizeof(real_T));
  dv1[17614] = -1.0;
  memset(&dv1[17615], 0, 17U * sizeof(real_T));
  dv1[17632] = -1.0;
  memset(&dv1[17633], 0, 121U * sizeof(real_T));
  dv1[17754] = -1.0;
  memset(&dv1[17755], 0, 17U * sizeof(real_T));
  dv1[17772] = -1.0;
  memset(&dv1[17773], 0, 121U * sizeof(real_T));
  dv1[17894] = -1.0;
  memset(&dv1[17895], 0, 17U * sizeof(real_T));
  dv1[17912] = -1.0;
  memset(&dv1[17913], 0, 121U * sizeof(real_T));
  dv1[18034] = -1.0;
  memset(&dv1[18035], 0, 17U * sizeof(real_T));
  dv1[18052] = -1.0;
  memset(&dv1[18053], 0, 121U * sizeof(real_T));
  dv1[18174] = -1.0;
  memset(&dv1[18175], 0, 17U * sizeof(real_T));
  dv1[18192] = -1.0;
  memset(&dv1[18193], 0, 121U * sizeof(real_T));
  dv1[18314] = -1.0;
  memset(&dv1[18315], 0, 17U * sizeof(real_T));
  dv1[18332] = -1.0;
  memset(&dv1[18333], 0, 121U * sizeof(real_T));
  dv1[18454] = -1.0;
  memset(&dv1[18455], 0, 17U * sizeof(real_T));
  dv1[18472] = -1.0;
  memset(&dv1[18473], 0, 121U * sizeof(real_T));
  dv1[18594] = -1.0;
  memset(&dv1[18595], 0, 17U * sizeof(real_T));
  dv1[18612] = -1.0;
  memset(&dv1[18613], 0, 151U * sizeof(real_T));
  dv1[18764] = -1.0;
  memset(&dv1[18765], 0, 2489U * sizeof(real_T));
  dv1[21254] = -1.0;
  dv1[21255] = 0.0;
  dv1[21256] = 0.0;
  dv1[21257] = -1.0;
  memset(&dv1[21258], 0, 136U * sizeof(real_T));
  dv1[21394] = -1.0;
  dv1[21395] = 0.0;
  dv1[21396] = 0.0;
  dv1[21397] = -1.0;
  memset(&dv1[21398], 0, 136U * sizeof(real_T));
  dv1[21534] = -1.0;
  dv1[21535] = 0.0;
  dv1[21536] = 0.0;
  dv1[21537] = -1.0;
  memset(&dv1[21538], 0, 417U * sizeof(real_T));
  dv1[21955] = -1.0;
  dv1[21956] = 0.0;
  dv1[21957] = 0.0;
  dv1[21958] = -1.0;
  memset(&dv1[21959], 0, 136U * sizeof(real_T));
  dv1[22095] = -1.0;
  dv1[22096] = 0.0;
  dv1[22097] = 0.0;
  dv1[22098] = -1.0;
  memset(&dv1[22099], 0, 136U * sizeof(real_T));
  dv1[22235] = -1.0;
  dv1[22236] = 0.0;
  dv1[22237] = 0.0;
  dv1[22238] = -1.0;
  memset(&dv1[22239], 0, 1391U * sizeof(real_T));
  for (i1 = 0; i1 < 170; i1++) {
    memcpy(&Aiq[i1 * 139], &dv1[i1 * 139], 139U * sizeof(real_T));
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
  biq[129] = t9;
  biq[130] = t9;
  biq[131] = t9;
  biq[132] = t10;
  biq[133] = t10;
  biq[134] = t10;
  biq[135] = t11;
  biq[136] = t11;
  biq[137] = t11;
  biq[138] = -in9[1];
}

/* End of code generation (IqFast_LeftStart2V30.cpp) */
