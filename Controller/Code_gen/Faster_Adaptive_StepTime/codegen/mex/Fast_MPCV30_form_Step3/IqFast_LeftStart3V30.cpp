/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart3V30.cpp
 *
 * Code generation for function 'IqFast_LeftStart3V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step3.h"
#include "IqFast_LeftStart3V30.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart3V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [22950], real_T biq[135])
{
  int32_T i1;
  real_T dv1[22950];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART3V30 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART3V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:10:47 */
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
  memset(&dv1[109], 0, 162U * sizeof(real_T));
  dv1[271] = -1.0;
  memset(&dv1[272], 0, 35U * sizeof(real_T));
  dv1[307] = 1.0;
  memset(&dv1[308], 0, 35U * sizeof(real_T));
  dv1[343] = -in11[2];
  memset(&dv1[344], 0, 35U * sizeof(real_T));
  dv1[379] = -in11[2];
  memset(&dv1[380], 0, 162U * sizeof(real_T));
  dv1[542] = -1.0;
  memset(&dv1[543], 0, 35U * sizeof(real_T));
  dv1[578] = 1.0;
  memset(&dv1[579], 0, 35U * sizeof(real_T));
  dv1[614] = -in11[2];
  memset(&dv1[615], 0, 35U * sizeof(real_T));
  dv1[650] = -in11[2];
  memset(&dv1[651], 0, 162U * sizeof(real_T));
  dv1[813] = -1.0;
  memset(&dv1[814], 0, 35U * sizeof(real_T));
  dv1[849] = 1.0;
  memset(&dv1[850], 0, 35U * sizeof(real_T));
  dv1[885] = -in11[2];
  memset(&dv1[886], 0, 35U * sizeof(real_T));
  dv1[921] = -in11[2];
  memset(&dv1[922], 0, 162U * sizeof(real_T));
  dv1[1084] = -1.0;
  memset(&dv1[1085], 0, 35U * sizeof(real_T));
  dv1[1120] = 1.0;
  memset(&dv1[1121], 0, 35U * sizeof(real_T));
  dv1[1156] = -in11[2];
  memset(&dv1[1157], 0, 35U * sizeof(real_T));
  dv1[1192] = -in11[2];
  memset(&dv1[1193], 0, 162U * sizeof(real_T));
  dv1[1355] = -1.0;
  memset(&dv1[1356], 0, 35U * sizeof(real_T));
  dv1[1391] = 1.0;
  memset(&dv1[1392], 0, 35U * sizeof(real_T));
  dv1[1427] = -in11[2];
  memset(&dv1[1428], 0, 35U * sizeof(real_T));
  dv1[1463] = -in11[2];
  memset(&dv1[1464], 0, 162U * sizeof(real_T));
  dv1[1626] = -1.0;
  memset(&dv1[1627], 0, 35U * sizeof(real_T));
  dv1[1662] = 1.0;
  memset(&dv1[1663], 0, 35U * sizeof(real_T));
  dv1[1698] = -in11[2];
  memset(&dv1[1699], 0, 35U * sizeof(real_T));
  dv1[1734] = -in11[2];
  memset(&dv1[1735], 0, 162U * sizeof(real_T));
  dv1[1897] = -1.0;
  memset(&dv1[1898], 0, 35U * sizeof(real_T));
  dv1[1933] = 1.0;
  memset(&dv1[1934], 0, 35U * sizeof(real_T));
  dv1[1969] = -in11[2];
  memset(&dv1[1970], 0, 35U * sizeof(real_T));
  dv1[2005] = -in11[2];
  memset(&dv1[2006], 0, 162U * sizeof(real_T));
  dv1[2168] = -1.0;
  memset(&dv1[2169], 0, 35U * sizeof(real_T));
  dv1[2204] = 1.0;
  memset(&dv1[2205], 0, 35U * sizeof(real_T));
  dv1[2240] = -in11[2];
  memset(&dv1[2241], 0, 35U * sizeof(real_T));
  dv1[2276] = -in11[2];
  memset(&dv1[2277], 0, 162U * sizeof(real_T));
  dv1[2439] = -1.0;
  memset(&dv1[2440], 0, 35U * sizeof(real_T));
  dv1[2475] = 1.0;
  memset(&dv1[2476], 0, 35U * sizeof(real_T));
  dv1[2511] = -in11[2];
  memset(&dv1[2512], 0, 35U * sizeof(real_T));
  dv1[2547] = -in11[2];
  memset(&dv1[2548], 0, 162U * sizeof(real_T));
  dv1[2710] = -1.0;
  memset(&dv1[2711], 0, 35U * sizeof(real_T));
  dv1[2746] = 1.0;
  memset(&dv1[2747], 0, 35U * sizeof(real_T));
  dv1[2782] = -in11[2];
  memset(&dv1[2783], 0, 35U * sizeof(real_T));
  dv1[2818] = -in11[2];
  memset(&dv1[2819], 0, 162U * sizeof(real_T));
  dv1[2981] = -1.0;
  memset(&dv1[2982], 0, 35U * sizeof(real_T));
  dv1[3017] = 1.0;
  memset(&dv1[3018], 0, 35U * sizeof(real_T));
  dv1[3053] = -in11[2];
  memset(&dv1[3054], 0, 35U * sizeof(real_T));
  dv1[3089] = -in11[2];
  memset(&dv1[3090], 0, 162U * sizeof(real_T));
  dv1[3252] = -1.0;
  memset(&dv1[3253], 0, 35U * sizeof(real_T));
  dv1[3288] = 1.0;
  memset(&dv1[3289], 0, 35U * sizeof(real_T));
  dv1[3324] = -in11[2];
  memset(&dv1[3325], 0, 35U * sizeof(real_T));
  dv1[3360] = -in11[2];
  memset(&dv1[3361], 0, 162U * sizeof(real_T));
  dv1[3523] = -1.0;
  memset(&dv1[3524], 0, 35U * sizeof(real_T));
  dv1[3559] = 1.0;
  memset(&dv1[3560], 0, 35U * sizeof(real_T));
  dv1[3595] = -in11[2];
  memset(&dv1[3596], 0, 35U * sizeof(real_T));
  dv1[3631] = -in11[2];
  memset(&dv1[3632], 0, 162U * sizeof(real_T));
  dv1[3794] = -1.0;
  memset(&dv1[3795], 0, 35U * sizeof(real_T));
  dv1[3830] = 1.0;
  memset(&dv1[3831], 0, 35U * sizeof(real_T));
  dv1[3866] = -in11[2];
  memset(&dv1[3867], 0, 35U * sizeof(real_T));
  dv1[3902] = -in11[2];
  memset(&dv1[3903], 0, 162U * sizeof(real_T));
  dv1[4065] = -1.0;
  memset(&dv1[4066], 0, 35U * sizeof(real_T));
  dv1[4101] = 1.0;
  memset(&dv1[4102], 0, 35U * sizeof(real_T));
  dv1[4137] = -in11[2];
  memset(&dv1[4138], 0, 35U * sizeof(real_T));
  dv1[4173] = -in11[2];
  memset(&dv1[4174], 0, 162U * sizeof(real_T));
  dv1[4336] = -1.0;
  memset(&dv1[4337], 0, 35U * sizeof(real_T));
  dv1[4372] = 1.0;
  memset(&dv1[4373], 0, 35U * sizeof(real_T));
  dv1[4408] = -in11[2];
  memset(&dv1[4409], 0, 35U * sizeof(real_T));
  dv1[4444] = -in11[2];
  memset(&dv1[4445], 0, 162U * sizeof(real_T));
  dv1[4607] = -1.0;
  memset(&dv1[4608], 0, 35U * sizeof(real_T));
  dv1[4643] = 1.0;
  memset(&dv1[4644], 0, 35U * sizeof(real_T));
  dv1[4679] = -in11[2];
  memset(&dv1[4680], 0, 35U * sizeof(real_T));
  dv1[4715] = -in11[2];
  memset(&dv1[4716], 0, 162U * sizeof(real_T));
  dv1[4878] = -1.0;
  memset(&dv1[4879], 0, 35U * sizeof(real_T));
  dv1[4914] = 1.0;
  memset(&dv1[4915], 0, 17U * sizeof(real_T));
  dv1[4932] = -in11[3];
  memset(&dv1[4933], 0, 35U * sizeof(real_T));
  dv1[4968] = -in11[3];
  memset(&dv1[4969], 0, 180U * sizeof(real_T));
  dv1[5149] = -1.0;
  memset(&dv1[5150], 0, 35U * sizeof(real_T));
  dv1[5185] = 1.0;
  memset(&dv1[5186], 0, 17U * sizeof(real_T));
  dv1[5203] = -in11[3];
  memset(&dv1[5204], 0, 35U * sizeof(real_T));
  dv1[5239] = -in11[3];
  memset(&dv1[5240], 0, 180U * sizeof(real_T));
  dv1[5420] = -1.0;
  memset(&dv1[5421], 0, 35U * sizeof(real_T));
  dv1[5456] = 1.0;
  memset(&dv1[5457], 0, 17U * sizeof(real_T));
  dv1[5474] = -in11[3];
  memset(&dv1[5475], 0, 35U * sizeof(real_T));
  dv1[5510] = -in11[3];
  memset(&dv1[5511], 0, 180U * sizeof(real_T));
  dv1[5691] = -1.0;
  memset(&dv1[5692], 0, 35U * sizeof(real_T));
  dv1[5727] = 1.0;
  memset(&dv1[5728], 0, 17U * sizeof(real_T));
  dv1[5745] = -in11[3];
  memset(&dv1[5746], 0, 35U * sizeof(real_T));
  dv1[5781] = -in11[3];
  memset(&dv1[5782], 0, 180U * sizeof(real_T));
  dv1[5962] = -1.0;
  memset(&dv1[5963], 0, 35U * sizeof(real_T));
  dv1[5998] = 1.0;
  memset(&dv1[5999], 0, 17U * sizeof(real_T));
  dv1[6016] = -in11[3];
  memset(&dv1[6017], 0, 35U * sizeof(real_T));
  dv1[6052] = -in11[3];
  memset(&dv1[6053], 0, 180U * sizeof(real_T));
  dv1[6233] = -1.0;
  memset(&dv1[6234], 0, 35U * sizeof(real_T));
  dv1[6269] = 1.0;
  memset(&dv1[6270], 0, 17U * sizeof(real_T));
  dv1[6287] = -in11[3];
  memset(&dv1[6288], 0, 35U * sizeof(real_T));
  dv1[6323] = -in11[3];
  memset(&dv1[6324], 0, 180U * sizeof(real_T));
  dv1[6504] = -1.0;
  memset(&dv1[6505], 0, 35U * sizeof(real_T));
  dv1[6540] = 1.0;
  memset(&dv1[6541], 0, 17U * sizeof(real_T));
  dv1[6558] = -in11[3];
  memset(&dv1[6559], 0, 35U * sizeof(real_T));
  dv1[6594] = -in11[3];
  memset(&dv1[6595], 0, 180U * sizeof(real_T));
  dv1[6775] = -1.0;
  memset(&dv1[6776], 0, 35U * sizeof(real_T));
  dv1[6811] = 1.0;
  memset(&dv1[6812], 0, 17U * sizeof(real_T));
  dv1[6829] = -in11[3];
  memset(&dv1[6830], 0, 35U * sizeof(real_T));
  dv1[6865] = -in11[3];
  memset(&dv1[6866], 0, 180U * sizeof(real_T));
  dv1[7046] = -1.0;
  memset(&dv1[7047], 0, 35U * sizeof(real_T));
  dv1[7082] = 1.0;
  memset(&dv1[7083], 0, 17U * sizeof(real_T));
  dv1[7100] = -in11[3];
  memset(&dv1[7101], 0, 35U * sizeof(real_T));
  dv1[7136] = -in11[3];
  memset(&dv1[7137], 0, 180U * sizeof(real_T));
  dv1[7317] = -1.0;
  memset(&dv1[7318], 0, 35U * sizeof(real_T));
  dv1[7353] = 1.0;
  memset(&dv1[7354], 0, 17U * sizeof(real_T));
  dv1[7371] = -in11[3];
  memset(&dv1[7372], 0, 35U * sizeof(real_T));
  dv1[7407] = -in11[3];
  memset(&dv1[7408], 0, 180U * sizeof(real_T));
  dv1[7588] = -1.0;
  memset(&dv1[7589], 0, 35U * sizeof(real_T));
  dv1[7624] = 1.0;
  memset(&dv1[7625], 0, 17U * sizeof(real_T));
  dv1[7642] = -in11[3];
  memset(&dv1[7643], 0, 35U * sizeof(real_T));
  dv1[7678] = -in11[3];
  memset(&dv1[7679], 0, 180U * sizeof(real_T));
  dv1[7859] = -1.0;
  memset(&dv1[7860], 0, 35U * sizeof(real_T));
  dv1[7895] = 1.0;
  memset(&dv1[7896], 0, 17U * sizeof(real_T));
  dv1[7913] = -in11[3];
  memset(&dv1[7914], 0, 35U * sizeof(real_T));
  dv1[7949] = -in11[3];
  memset(&dv1[7950], 0, 180U * sizeof(real_T));
  dv1[8130] = -1.0;
  memset(&dv1[8131], 0, 35U * sizeof(real_T));
  dv1[8166] = 1.0;
  memset(&dv1[8167], 0, 17U * sizeof(real_T));
  dv1[8184] = -in11[3];
  memset(&dv1[8185], 0, 35U * sizeof(real_T));
  dv1[8220] = -in11[3];
  memset(&dv1[8221], 0, 180U * sizeof(real_T));
  dv1[8401] = -1.0;
  memset(&dv1[8402], 0, 35U * sizeof(real_T));
  dv1[8437] = 1.0;
  memset(&dv1[8438], 0, 17U * sizeof(real_T));
  dv1[8455] = -in11[3];
  memset(&dv1[8456], 0, 35U * sizeof(real_T));
  dv1[8491] = -in11[3];
  memset(&dv1[8492], 0, 180U * sizeof(real_T));
  dv1[8672] = -1.0;
  memset(&dv1[8673], 0, 35U * sizeof(real_T));
  dv1[8708] = 1.0;
  memset(&dv1[8709], 0, 17U * sizeof(real_T));
  dv1[8726] = -in11[3];
  memset(&dv1[8727], 0, 35U * sizeof(real_T));
  dv1[8762] = -in11[3];
  memset(&dv1[8763], 0, 180U * sizeof(real_T));
  dv1[8943] = -1.0;
  memset(&dv1[8944], 0, 35U * sizeof(real_T));
  dv1[8979] = 1.0;
  memset(&dv1[8980], 0, 17U * sizeof(real_T));
  dv1[8997] = -in11[3];
  memset(&dv1[8998], 0, 35U * sizeof(real_T));
  dv1[9033] = -in11[3];
  memset(&dv1[9034], 0, 180U * sizeof(real_T));
  dv1[9214] = -1.0;
  memset(&dv1[9215], 0, 35U * sizeof(real_T));
  dv1[9250] = 1.0;
  memset(&dv1[9251], 0, 17U * sizeof(real_T));
  dv1[9268] = -in11[3];
  memset(&dv1[9269], 0, 35U * sizeof(real_T));
  dv1[9304] = -in11[3];
  memset(&dv1[9305], 0, 180U * sizeof(real_T));
  dv1[9485] = -1.0;
  memset(&dv1[9486], 0, 35U * sizeof(real_T));
  dv1[9521] = 1.0;
  memset(&dv1[9522], 0, 17U * sizeof(real_T));
  dv1[9539] = -in11[3];
  memset(&dv1[9540], 0, 35U * sizeof(real_T));
  dv1[9575] = -in11[3];
  memset(&dv1[9576], 0, 144U * sizeof(real_T));
  dv1[9720] = 1.0;
  memset(&dv1[9721], 0, 35U * sizeof(real_T));
  dv1[9756] = -1.0;
  memset(&dv1[9757], 0, 89U * sizeof(real_T));
  dv1[9846] = 1.0;
  dv1[9847] = 0.0;
  dv1[9848] = -1.0;
  dv1[9849] = 0.0;
  dv1[9850] = 0.0;
  dv1[9851] = 0.0;
  dv1[9852] = 0.0;
  dv1[9853] = 0.0;
  dv1[9854] = 0.0;
  dv1[9855] = 0.0;
  dv1[9856] = 1.0;
  memset(&dv1[9857], 0, 35U * sizeof(real_T));
  dv1[9892] = -1.0;
  memset(&dv1[9893], 0, 89U * sizeof(real_T));
  dv1[9982] = 1.0;
  dv1[9983] = 0.0;
  dv1[9984] = -1.0;
  dv1[9985] = 0.0;
  dv1[9986] = 0.0;
  dv1[9987] = 0.0;
  dv1[9988] = 0.0;
  dv1[9989] = 0.0;
  dv1[9990] = 0.0;
  dv1[9991] = 0.0;
  dv1[9992] = 1.0;
  memset(&dv1[9993], 0, 35U * sizeof(real_T));
  dv1[10028] = -1.0;
  memset(&dv1[10029], 0, 99U * sizeof(real_T));
  dv1[10128] = 1.0;
  memset(&dv1[10129], 0, 35U * sizeof(real_T));
  dv1[10164] = -1.0;
  memset(&dv1[10165], 0, 99U * sizeof(real_T));
  dv1[10264] = 1.0;
  memset(&dv1[10265], 0, 35U * sizeof(real_T));
  dv1[10300] = -1.0;
  memset(&dv1[10301], 0, 99U * sizeof(real_T));
  dv1[10400] = 1.0;
  memset(&dv1[10401], 0, 35U * sizeof(real_T));
  dv1[10436] = -1.0;
  memset(&dv1[10437], 0, 99U * sizeof(real_T));
  dv1[10536] = 1.0;
  memset(&dv1[10537], 0, 35U * sizeof(real_T));
  dv1[10572] = -1.0;
  memset(&dv1[10573], 0, 99U * sizeof(real_T));
  dv1[10672] = 1.0;
  memset(&dv1[10673], 0, 35U * sizeof(real_T));
  dv1[10708] = -1.0;
  memset(&dv1[10709], 0, 99U * sizeof(real_T));
  dv1[10808] = 1.0;
  memset(&dv1[10809], 0, 35U * sizeof(real_T));
  dv1[10844] = -1.0;
  memset(&dv1[10845], 0, 99U * sizeof(real_T));
  dv1[10944] = 1.0;
  memset(&dv1[10945], 0, 35U * sizeof(real_T));
  dv1[10980] = -1.0;
  memset(&dv1[10981], 0, 99U * sizeof(real_T));
  dv1[11080] = 1.0;
  memset(&dv1[11081], 0, 35U * sizeof(real_T));
  dv1[11116] = -1.0;
  memset(&dv1[11117], 0, 99U * sizeof(real_T));
  dv1[11216] = 1.0;
  memset(&dv1[11217], 0, 35U * sizeof(real_T));
  dv1[11252] = -1.0;
  memset(&dv1[11253], 0, 99U * sizeof(real_T));
  dv1[11352] = 1.0;
  memset(&dv1[11353], 0, 35U * sizeof(real_T));
  dv1[11388] = -1.0;
  memset(&dv1[11389], 0, 99U * sizeof(real_T));
  dv1[11488] = 1.0;
  memset(&dv1[11489], 0, 35U * sizeof(real_T));
  dv1[11524] = -1.0;
  memset(&dv1[11525], 0, 99U * sizeof(real_T));
  dv1[11624] = 1.0;
  memset(&dv1[11625], 0, 35U * sizeof(real_T));
  dv1[11660] = -1.0;
  memset(&dv1[11661], 0, 99U * sizeof(real_T));
  dv1[11760] = 1.0;
  memset(&dv1[11761], 0, 35U * sizeof(real_T));
  dv1[11796] = -1.0;
  memset(&dv1[11797], 0, 99U * sizeof(real_T));
  dv1[11896] = 1.0;
  memset(&dv1[11897], 0, 35U * sizeof(real_T));
  dv1[11932] = -1.0;
  memset(&dv1[11933], 0, 99U * sizeof(real_T));
  dv1[12032] = 1.0;
  memset(&dv1[12033], 0, 35U * sizeof(real_T));
  dv1[12068] = -1.0;
  memset(&dv1[12069], 0, 99U * sizeof(real_T));
  dv1[12168] = 1.0;
  memset(&dv1[12169], 0, 35U * sizeof(real_T));
  dv1[12204] = -1.0;
  memset(&dv1[12205], 0, 75U * sizeof(real_T));
  dv1[12280] = 1.0;
  dv1[12281] = 0.0;
  dv1[12282] = -1.0;
  memset(&dv1[12283], 0, 21U * sizeof(real_T));
  dv1[12304] = 1.0;
  memset(&dv1[12305], 0, 35U * sizeof(real_T));
  dv1[12340] = -1.0;
  memset(&dv1[12341], 0, 75U * sizeof(real_T));
  dv1[12416] = 1.0;
  dv1[12417] = 0.0;
  dv1[12418] = -1.0;
  memset(&dv1[12419], 0, 21U * sizeof(real_T));
  dv1[12440] = 1.0;
  memset(&dv1[12441], 0, 35U * sizeof(real_T));
  dv1[12476] = -1.0;
  memset(&dv1[12477], 0, 99U * sizeof(real_T));
  dv1[12576] = 1.0;
  memset(&dv1[12577], 0, 35U * sizeof(real_T));
  dv1[12612] = -1.0;
  memset(&dv1[12613], 0, 99U * sizeof(real_T));
  dv1[12712] = 1.0;
  memset(&dv1[12713], 0, 35U * sizeof(real_T));
  dv1[12748] = -1.0;
  memset(&dv1[12749], 0, 99U * sizeof(real_T));
  dv1[12848] = 1.0;
  memset(&dv1[12849], 0, 35U * sizeof(real_T));
  dv1[12884] = -1.0;
  memset(&dv1[12885], 0, 99U * sizeof(real_T));
  dv1[12984] = 1.0;
  memset(&dv1[12985], 0, 35U * sizeof(real_T));
  dv1[13020] = -1.0;
  memset(&dv1[13021], 0, 99U * sizeof(real_T));
  dv1[13120] = 1.0;
  memset(&dv1[13121], 0, 35U * sizeof(real_T));
  dv1[13156] = -1.0;
  memset(&dv1[13157], 0, 99U * sizeof(real_T));
  dv1[13256] = 1.0;
  memset(&dv1[13257], 0, 35U * sizeof(real_T));
  dv1[13292] = -1.0;
  memset(&dv1[13293], 0, 99U * sizeof(real_T));
  dv1[13392] = 1.0;
  memset(&dv1[13393], 0, 35U * sizeof(real_T));
  dv1[13428] = -1.0;
  memset(&dv1[13429], 0, 99U * sizeof(real_T));
  dv1[13528] = 1.0;
  memset(&dv1[13529], 0, 35U * sizeof(real_T));
  dv1[13564] = -1.0;
  memset(&dv1[13565], 0, 99U * sizeof(real_T));
  dv1[13664] = 1.0;
  memset(&dv1[13665], 0, 35U * sizeof(real_T));
  dv1[13700] = -1.0;
  memset(&dv1[13701], 0, 99U * sizeof(real_T));
  dv1[13800] = 1.0;
  memset(&dv1[13801], 0, 35U * sizeof(real_T));
  dv1[13836] = -1.0;
  memset(&dv1[13837], 0, 99U * sizeof(real_T));
  dv1[13936] = 1.0;
  memset(&dv1[13937], 0, 35U * sizeof(real_T));
  dv1[13972] = -1.0;
  memset(&dv1[13973], 0, 99U * sizeof(real_T));
  dv1[14072] = 1.0;
  memset(&dv1[14073], 0, 35U * sizeof(real_T));
  dv1[14108] = -1.0;
  memset(&dv1[14109], 0, 99U * sizeof(real_T));
  dv1[14208] = 1.0;
  memset(&dv1[14209], 0, 35U * sizeof(real_T));
  dv1[14244] = -1.0;
  memset(&dv1[14245], 0, 99U * sizeof(real_T));
  dv1[14344] = 1.0;
  memset(&dv1[14345], 0, 35U * sizeof(real_T));
  dv1[14380] = -1.0;
  memset(&dv1[14381], 0, 99U * sizeof(real_T));
  dv1[14480] = 1.0;
  memset(&dv1[14481], 0, 35U * sizeof(real_T));
  dv1[14516] = -1.0;
  memset(&dv1[14517], 0, 737U * sizeof(real_T));
  dv1[15254] = 1.0;
  memset(&dv1[15255], 0, 495U * sizeof(real_T));
  dv1[15750] = -1.0;
  memset(&dv1[15751], 0, 17U * sizeof(real_T));
  dv1[15768] = -1.0;
  memset(&dv1[15769], 0, 117U * sizeof(real_T));
  dv1[15886] = -1.0;
  memset(&dv1[15887], 0, 17U * sizeof(real_T));
  dv1[15904] = -1.0;
  memset(&dv1[15905], 0, 117U * sizeof(real_T));
  dv1[16022] = -1.0;
  memset(&dv1[16023], 0, 17U * sizeof(real_T));
  dv1[16040] = -1.0;
  memset(&dv1[16041], 0, 117U * sizeof(real_T));
  dv1[16158] = -1.0;
  memset(&dv1[16159], 0, 17U * sizeof(real_T));
  dv1[16176] = -1.0;
  memset(&dv1[16177], 0, 117U * sizeof(real_T));
  dv1[16294] = -1.0;
  memset(&dv1[16295], 0, 17U * sizeof(real_T));
  dv1[16312] = -1.0;
  memset(&dv1[16313], 0, 117U * sizeof(real_T));
  dv1[16430] = -1.0;
  memset(&dv1[16431], 0, 17U * sizeof(real_T));
  dv1[16448] = -1.0;
  memset(&dv1[16449], 0, 117U * sizeof(real_T));
  dv1[16566] = -1.0;
  memset(&dv1[16567], 0, 17U * sizeof(real_T));
  dv1[16584] = -1.0;
  memset(&dv1[16585], 0, 117U * sizeof(real_T));
  dv1[16702] = -1.0;
  memset(&dv1[16703], 0, 17U * sizeof(real_T));
  dv1[16720] = -1.0;
  memset(&dv1[16721], 0, 117U * sizeof(real_T));
  dv1[16838] = -1.0;
  memset(&dv1[16839], 0, 17U * sizeof(real_T));
  dv1[16856] = -1.0;
  memset(&dv1[16857], 0, 117U * sizeof(real_T));
  dv1[16974] = -1.0;
  memset(&dv1[16975], 0, 17U * sizeof(real_T));
  dv1[16992] = -1.0;
  memset(&dv1[16993], 0, 117U * sizeof(real_T));
  dv1[17110] = -1.0;
  memset(&dv1[17111], 0, 17U * sizeof(real_T));
  dv1[17128] = -1.0;
  memset(&dv1[17129], 0, 117U * sizeof(real_T));
  dv1[17246] = -1.0;
  memset(&dv1[17247], 0, 17U * sizeof(real_T));
  dv1[17264] = -1.0;
  memset(&dv1[17265], 0, 117U * sizeof(real_T));
  dv1[17382] = -1.0;
  memset(&dv1[17383], 0, 17U * sizeof(real_T));
  dv1[17400] = -1.0;
  memset(&dv1[17401], 0, 117U * sizeof(real_T));
  dv1[17518] = -1.0;
  memset(&dv1[17519], 0, 17U * sizeof(real_T));
  dv1[17536] = -1.0;
  memset(&dv1[17537], 0, 117U * sizeof(real_T));
  dv1[17654] = -1.0;
  memset(&dv1[17655], 0, 17U * sizeof(real_T));
  dv1[17672] = -1.0;
  memset(&dv1[17673], 0, 117U * sizeof(real_T));
  dv1[17790] = -1.0;
  memset(&dv1[17791], 0, 17U * sizeof(real_T));
  dv1[17808] = -1.0;
  memset(&dv1[17809], 0, 117U * sizeof(real_T));
  dv1[17926] = -1.0;
  memset(&dv1[17927], 0, 17U * sizeof(real_T));
  dv1[17944] = -1.0;
  memset(&dv1[17945], 0, 117U * sizeof(real_T));
  dv1[18062] = -1.0;
  memset(&dv1[18063], 0, 17U * sizeof(real_T));
  dv1[18080] = -1.0;
  memset(&dv1[18081], 0, 143U * sizeof(real_T));
  dv1[18224] = -1.0;
  memset(&dv1[18225], 0, 2421U * sizeof(real_T));
  dv1[20646] = -1.0;
  dv1[20647] = 0.0;
  dv1[20648] = -1.0;
  memset(&dv1[20649], 0, 133U * sizeof(real_T));
  dv1[20782] = -1.0;
  dv1[20783] = 0.0;
  dv1[20784] = -1.0;
  memset(&dv1[20785], 0, 540U * sizeof(real_T));
  dv1[21325] = -1.0;
  dv1[21326] = 0.0;
  dv1[21327] = -1.0;
  memset(&dv1[21328], 0, 133U * sizeof(real_T));
  dv1[21461] = -1.0;
  dv1[21462] = 0.0;
  dv1[21463] = -1.0;
  memset(&dv1[21464], 0, 1486U * sizeof(real_T));
  for (i1 = 0; i1 < 170; i1++) {
    memcpy(&Aiq[i1 * 135], &dv1[i1 * 135], 135U * sizeof(real_T));
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
  biq[128] = t9;
  biq[129] = t9;
  biq[130] = t10;
  biq[131] = t10;
  biq[132] = t11;
  biq[133] = t11;
  biq[134] = -in9[1];
}

/* End of code generation (IqFast_LeftStart3V30.cpp) */
