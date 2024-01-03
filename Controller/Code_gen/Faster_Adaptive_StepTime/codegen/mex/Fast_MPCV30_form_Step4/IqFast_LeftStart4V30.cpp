/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart4V30.cpp
 *
 * Code generation for function 'IqFast_LeftStart4V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step4.h"
#include "IqFast_LeftStart4V30.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V30",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart4V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [22270], real_T biq[131])
{
  int32_T i1;
  real_T dv1[22270];
  real_T t7;
  real_T t3;

  /* IQFAST_LEFTSTART4V30 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART4V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:14:17 */
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
  memset(&dv1[109], 0, 154U * sizeof(real_T));
  dv1[263] = -1.0;
  memset(&dv1[264], 0, 35U * sizeof(real_T));
  dv1[299] = 1.0;
  memset(&dv1[300], 0, 35U * sizeof(real_T));
  dv1[335] = -in11[2];
  memset(&dv1[336], 0, 35U * sizeof(real_T));
  dv1[371] = -in11[2];
  memset(&dv1[372], 0, 154U * sizeof(real_T));
  dv1[526] = -1.0;
  memset(&dv1[527], 0, 35U * sizeof(real_T));
  dv1[562] = 1.0;
  memset(&dv1[563], 0, 35U * sizeof(real_T));
  dv1[598] = -in11[2];
  memset(&dv1[599], 0, 35U * sizeof(real_T));
  dv1[634] = -in11[2];
  memset(&dv1[635], 0, 154U * sizeof(real_T));
  dv1[789] = -1.0;
  memset(&dv1[790], 0, 35U * sizeof(real_T));
  dv1[825] = 1.0;
  memset(&dv1[826], 0, 35U * sizeof(real_T));
  dv1[861] = -in11[2];
  memset(&dv1[862], 0, 35U * sizeof(real_T));
  dv1[897] = -in11[2];
  memset(&dv1[898], 0, 154U * sizeof(real_T));
  dv1[1052] = -1.0;
  memset(&dv1[1053], 0, 35U * sizeof(real_T));
  dv1[1088] = 1.0;
  memset(&dv1[1089], 0, 35U * sizeof(real_T));
  dv1[1124] = -in11[2];
  memset(&dv1[1125], 0, 35U * sizeof(real_T));
  dv1[1160] = -in11[2];
  memset(&dv1[1161], 0, 154U * sizeof(real_T));
  dv1[1315] = -1.0;
  memset(&dv1[1316], 0, 35U * sizeof(real_T));
  dv1[1351] = 1.0;
  memset(&dv1[1352], 0, 35U * sizeof(real_T));
  dv1[1387] = -in11[2];
  memset(&dv1[1388], 0, 35U * sizeof(real_T));
  dv1[1423] = -in11[2];
  memset(&dv1[1424], 0, 154U * sizeof(real_T));
  dv1[1578] = -1.0;
  memset(&dv1[1579], 0, 35U * sizeof(real_T));
  dv1[1614] = 1.0;
  memset(&dv1[1615], 0, 35U * sizeof(real_T));
  dv1[1650] = -in11[2];
  memset(&dv1[1651], 0, 35U * sizeof(real_T));
  dv1[1686] = -in11[2];
  memset(&dv1[1687], 0, 154U * sizeof(real_T));
  dv1[1841] = -1.0;
  memset(&dv1[1842], 0, 35U * sizeof(real_T));
  dv1[1877] = 1.0;
  memset(&dv1[1878], 0, 35U * sizeof(real_T));
  dv1[1913] = -in11[2];
  memset(&dv1[1914], 0, 35U * sizeof(real_T));
  dv1[1949] = -in11[2];
  memset(&dv1[1950], 0, 154U * sizeof(real_T));
  dv1[2104] = -1.0;
  memset(&dv1[2105], 0, 35U * sizeof(real_T));
  dv1[2140] = 1.0;
  memset(&dv1[2141], 0, 35U * sizeof(real_T));
  dv1[2176] = -in11[2];
  memset(&dv1[2177], 0, 35U * sizeof(real_T));
  dv1[2212] = -in11[2];
  memset(&dv1[2213], 0, 154U * sizeof(real_T));
  dv1[2367] = -1.0;
  memset(&dv1[2368], 0, 35U * sizeof(real_T));
  dv1[2403] = 1.0;
  memset(&dv1[2404], 0, 35U * sizeof(real_T));
  dv1[2439] = -in11[2];
  memset(&dv1[2440], 0, 35U * sizeof(real_T));
  dv1[2475] = -in11[2];
  memset(&dv1[2476], 0, 154U * sizeof(real_T));
  dv1[2630] = -1.0;
  memset(&dv1[2631], 0, 35U * sizeof(real_T));
  dv1[2666] = 1.0;
  memset(&dv1[2667], 0, 35U * sizeof(real_T));
  dv1[2702] = -in11[2];
  memset(&dv1[2703], 0, 35U * sizeof(real_T));
  dv1[2738] = -in11[2];
  memset(&dv1[2739], 0, 154U * sizeof(real_T));
  dv1[2893] = -1.0;
  memset(&dv1[2894], 0, 35U * sizeof(real_T));
  dv1[2929] = 1.0;
  memset(&dv1[2930], 0, 35U * sizeof(real_T));
  dv1[2965] = -in11[2];
  memset(&dv1[2966], 0, 35U * sizeof(real_T));
  dv1[3001] = -in11[2];
  memset(&dv1[3002], 0, 154U * sizeof(real_T));
  dv1[3156] = -1.0;
  memset(&dv1[3157], 0, 35U * sizeof(real_T));
  dv1[3192] = 1.0;
  memset(&dv1[3193], 0, 35U * sizeof(real_T));
  dv1[3228] = -in11[2];
  memset(&dv1[3229], 0, 35U * sizeof(real_T));
  dv1[3264] = -in11[2];
  memset(&dv1[3265], 0, 154U * sizeof(real_T));
  dv1[3419] = -1.0;
  memset(&dv1[3420], 0, 35U * sizeof(real_T));
  dv1[3455] = 1.0;
  memset(&dv1[3456], 0, 35U * sizeof(real_T));
  dv1[3491] = -in11[2];
  memset(&dv1[3492], 0, 35U * sizeof(real_T));
  dv1[3527] = -in11[2];
  memset(&dv1[3528], 0, 154U * sizeof(real_T));
  dv1[3682] = -1.0;
  memset(&dv1[3683], 0, 35U * sizeof(real_T));
  dv1[3718] = 1.0;
  memset(&dv1[3719], 0, 35U * sizeof(real_T));
  dv1[3754] = -in11[2];
  memset(&dv1[3755], 0, 35U * sizeof(real_T));
  dv1[3790] = -in11[2];
  memset(&dv1[3791], 0, 154U * sizeof(real_T));
  dv1[3945] = -1.0;
  memset(&dv1[3946], 0, 35U * sizeof(real_T));
  dv1[3981] = 1.0;
  memset(&dv1[3982], 0, 35U * sizeof(real_T));
  dv1[4017] = -in11[2];
  memset(&dv1[4018], 0, 35U * sizeof(real_T));
  dv1[4053] = -in11[2];
  memset(&dv1[4054], 0, 154U * sizeof(real_T));
  dv1[4208] = -1.0;
  memset(&dv1[4209], 0, 35U * sizeof(real_T));
  dv1[4244] = 1.0;
  memset(&dv1[4245], 0, 35U * sizeof(real_T));
  dv1[4280] = -in11[2];
  memset(&dv1[4281], 0, 35U * sizeof(real_T));
  dv1[4316] = -in11[2];
  memset(&dv1[4317], 0, 154U * sizeof(real_T));
  dv1[4471] = -1.0;
  memset(&dv1[4472], 0, 35U * sizeof(real_T));
  dv1[4507] = 1.0;
  memset(&dv1[4508], 0, 35U * sizeof(real_T));
  dv1[4543] = -in11[2];
  memset(&dv1[4544], 0, 35U * sizeof(real_T));
  dv1[4579] = -in11[2];
  memset(&dv1[4580], 0, 154U * sizeof(real_T));
  dv1[4734] = -1.0;
  memset(&dv1[4735], 0, 35U * sizeof(real_T));
  dv1[4770] = 1.0;
  memset(&dv1[4771], 0, 17U * sizeof(real_T));
  dv1[4788] = -in11[3];
  memset(&dv1[4789], 0, 35U * sizeof(real_T));
  dv1[4824] = -in11[3];
  memset(&dv1[4825], 0, 172U * sizeof(real_T));
  dv1[4997] = -1.0;
  memset(&dv1[4998], 0, 35U * sizeof(real_T));
  dv1[5033] = 1.0;
  memset(&dv1[5034], 0, 17U * sizeof(real_T));
  dv1[5051] = -in11[3];
  memset(&dv1[5052], 0, 35U * sizeof(real_T));
  dv1[5087] = -in11[3];
  memset(&dv1[5088], 0, 172U * sizeof(real_T));
  dv1[5260] = -1.0;
  memset(&dv1[5261], 0, 35U * sizeof(real_T));
  dv1[5296] = 1.0;
  memset(&dv1[5297], 0, 17U * sizeof(real_T));
  dv1[5314] = -in11[3];
  memset(&dv1[5315], 0, 35U * sizeof(real_T));
  dv1[5350] = -in11[3];
  memset(&dv1[5351], 0, 172U * sizeof(real_T));
  dv1[5523] = -1.0;
  memset(&dv1[5524], 0, 35U * sizeof(real_T));
  dv1[5559] = 1.0;
  memset(&dv1[5560], 0, 17U * sizeof(real_T));
  dv1[5577] = -in11[3];
  memset(&dv1[5578], 0, 35U * sizeof(real_T));
  dv1[5613] = -in11[3];
  memset(&dv1[5614], 0, 172U * sizeof(real_T));
  dv1[5786] = -1.0;
  memset(&dv1[5787], 0, 35U * sizeof(real_T));
  dv1[5822] = 1.0;
  memset(&dv1[5823], 0, 17U * sizeof(real_T));
  dv1[5840] = -in11[3];
  memset(&dv1[5841], 0, 35U * sizeof(real_T));
  dv1[5876] = -in11[3];
  memset(&dv1[5877], 0, 172U * sizeof(real_T));
  dv1[6049] = -1.0;
  memset(&dv1[6050], 0, 35U * sizeof(real_T));
  dv1[6085] = 1.0;
  memset(&dv1[6086], 0, 17U * sizeof(real_T));
  dv1[6103] = -in11[3];
  memset(&dv1[6104], 0, 35U * sizeof(real_T));
  dv1[6139] = -in11[3];
  memset(&dv1[6140], 0, 172U * sizeof(real_T));
  dv1[6312] = -1.0;
  memset(&dv1[6313], 0, 35U * sizeof(real_T));
  dv1[6348] = 1.0;
  memset(&dv1[6349], 0, 17U * sizeof(real_T));
  dv1[6366] = -in11[3];
  memset(&dv1[6367], 0, 35U * sizeof(real_T));
  dv1[6402] = -in11[3];
  memset(&dv1[6403], 0, 172U * sizeof(real_T));
  dv1[6575] = -1.0;
  memset(&dv1[6576], 0, 35U * sizeof(real_T));
  dv1[6611] = 1.0;
  memset(&dv1[6612], 0, 17U * sizeof(real_T));
  dv1[6629] = -in11[3];
  memset(&dv1[6630], 0, 35U * sizeof(real_T));
  dv1[6665] = -in11[3];
  memset(&dv1[6666], 0, 172U * sizeof(real_T));
  dv1[6838] = -1.0;
  memset(&dv1[6839], 0, 35U * sizeof(real_T));
  dv1[6874] = 1.0;
  memset(&dv1[6875], 0, 17U * sizeof(real_T));
  dv1[6892] = -in11[3];
  memset(&dv1[6893], 0, 35U * sizeof(real_T));
  dv1[6928] = -in11[3];
  memset(&dv1[6929], 0, 172U * sizeof(real_T));
  dv1[7101] = -1.0;
  memset(&dv1[7102], 0, 35U * sizeof(real_T));
  dv1[7137] = 1.0;
  memset(&dv1[7138], 0, 17U * sizeof(real_T));
  dv1[7155] = -in11[3];
  memset(&dv1[7156], 0, 35U * sizeof(real_T));
  dv1[7191] = -in11[3];
  memset(&dv1[7192], 0, 172U * sizeof(real_T));
  dv1[7364] = -1.0;
  memset(&dv1[7365], 0, 35U * sizeof(real_T));
  dv1[7400] = 1.0;
  memset(&dv1[7401], 0, 17U * sizeof(real_T));
  dv1[7418] = -in11[3];
  memset(&dv1[7419], 0, 35U * sizeof(real_T));
  dv1[7454] = -in11[3];
  memset(&dv1[7455], 0, 172U * sizeof(real_T));
  dv1[7627] = -1.0;
  memset(&dv1[7628], 0, 35U * sizeof(real_T));
  dv1[7663] = 1.0;
  memset(&dv1[7664], 0, 17U * sizeof(real_T));
  dv1[7681] = -in11[3];
  memset(&dv1[7682], 0, 35U * sizeof(real_T));
  dv1[7717] = -in11[3];
  memset(&dv1[7718], 0, 172U * sizeof(real_T));
  dv1[7890] = -1.0;
  memset(&dv1[7891], 0, 35U * sizeof(real_T));
  dv1[7926] = 1.0;
  memset(&dv1[7927], 0, 17U * sizeof(real_T));
  dv1[7944] = -in11[3];
  memset(&dv1[7945], 0, 35U * sizeof(real_T));
  dv1[7980] = -in11[3];
  memset(&dv1[7981], 0, 172U * sizeof(real_T));
  dv1[8153] = -1.0;
  memset(&dv1[8154], 0, 35U * sizeof(real_T));
  dv1[8189] = 1.0;
  memset(&dv1[8190], 0, 17U * sizeof(real_T));
  dv1[8207] = -in11[3];
  memset(&dv1[8208], 0, 35U * sizeof(real_T));
  dv1[8243] = -in11[3];
  memset(&dv1[8244], 0, 172U * sizeof(real_T));
  dv1[8416] = -1.0;
  memset(&dv1[8417], 0, 35U * sizeof(real_T));
  dv1[8452] = 1.0;
  memset(&dv1[8453], 0, 17U * sizeof(real_T));
  dv1[8470] = -in11[3];
  memset(&dv1[8471], 0, 35U * sizeof(real_T));
  dv1[8506] = -in11[3];
  memset(&dv1[8507], 0, 172U * sizeof(real_T));
  dv1[8679] = -1.0;
  memset(&dv1[8680], 0, 35U * sizeof(real_T));
  dv1[8715] = 1.0;
  memset(&dv1[8716], 0, 17U * sizeof(real_T));
  dv1[8733] = -in11[3];
  memset(&dv1[8734], 0, 35U * sizeof(real_T));
  dv1[8769] = -in11[3];
  memset(&dv1[8770], 0, 172U * sizeof(real_T));
  dv1[8942] = -1.0;
  memset(&dv1[8943], 0, 35U * sizeof(real_T));
  dv1[8978] = 1.0;
  memset(&dv1[8979], 0, 17U * sizeof(real_T));
  dv1[8996] = -in11[3];
  memset(&dv1[8997], 0, 35U * sizeof(real_T));
  dv1[9032] = -in11[3];
  memset(&dv1[9033], 0, 172U * sizeof(real_T));
  dv1[9205] = -1.0;
  memset(&dv1[9206], 0, 35U * sizeof(real_T));
  dv1[9241] = 1.0;
  memset(&dv1[9242], 0, 17U * sizeof(real_T));
  dv1[9259] = -in11[3];
  memset(&dv1[9260], 0, 35U * sizeof(real_T));
  dv1[9295] = -in11[3];
  memset(&dv1[9296], 0, 136U * sizeof(real_T));
  dv1[9432] = 1.0;
  memset(&dv1[9433], 0, 35U * sizeof(real_T));
  dv1[9468] = -1.0;
  memset(&dv1[9469], 0, 89U * sizeof(real_T));
  dv1[9558] = 1.0;
  dv1[9559] = -1.0;
  dv1[9560] = 0.0;
  dv1[9561] = 0.0;
  dv1[9562] = 0.0;
  dv1[9563] = 0.0;
  dv1[9564] = 1.0;
  memset(&dv1[9565], 0, 35U * sizeof(real_T));
  dv1[9600] = -1.0;
  memset(&dv1[9601], 0, 95U * sizeof(real_T));
  dv1[9696] = 1.0;
  memset(&dv1[9697], 0, 35U * sizeof(real_T));
  dv1[9732] = -1.0;
  memset(&dv1[9733], 0, 95U * sizeof(real_T));
  dv1[9828] = 1.0;
  memset(&dv1[9829], 0, 35U * sizeof(real_T));
  dv1[9864] = -1.0;
  memset(&dv1[9865], 0, 95U * sizeof(real_T));
  dv1[9960] = 1.0;
  memset(&dv1[9961], 0, 35U * sizeof(real_T));
  dv1[9996] = -1.0;
  memset(&dv1[9997], 0, 95U * sizeof(real_T));
  dv1[10092] = 1.0;
  memset(&dv1[10093], 0, 35U * sizeof(real_T));
  dv1[10128] = -1.0;
  memset(&dv1[10129], 0, 95U * sizeof(real_T));
  dv1[10224] = 1.0;
  memset(&dv1[10225], 0, 35U * sizeof(real_T));
  dv1[10260] = -1.0;
  memset(&dv1[10261], 0, 95U * sizeof(real_T));
  dv1[10356] = 1.0;
  memset(&dv1[10357], 0, 35U * sizeof(real_T));
  dv1[10392] = -1.0;
  memset(&dv1[10393], 0, 95U * sizeof(real_T));
  dv1[10488] = 1.0;
  memset(&dv1[10489], 0, 35U * sizeof(real_T));
  dv1[10524] = -1.0;
  memset(&dv1[10525], 0, 95U * sizeof(real_T));
  dv1[10620] = 1.0;
  memset(&dv1[10621], 0, 35U * sizeof(real_T));
  dv1[10656] = -1.0;
  memset(&dv1[10657], 0, 95U * sizeof(real_T));
  dv1[10752] = 1.0;
  memset(&dv1[10753], 0, 35U * sizeof(real_T));
  dv1[10788] = -1.0;
  memset(&dv1[10789], 0, 95U * sizeof(real_T));
  dv1[10884] = 1.0;
  memset(&dv1[10885], 0, 35U * sizeof(real_T));
  dv1[10920] = -1.0;
  memset(&dv1[10921], 0, 95U * sizeof(real_T));
  dv1[11016] = 1.0;
  memset(&dv1[11017], 0, 35U * sizeof(real_T));
  dv1[11052] = -1.0;
  memset(&dv1[11053], 0, 95U * sizeof(real_T));
  dv1[11148] = 1.0;
  memset(&dv1[11149], 0, 35U * sizeof(real_T));
  dv1[11184] = -1.0;
  memset(&dv1[11185], 0, 95U * sizeof(real_T));
  dv1[11280] = 1.0;
  memset(&dv1[11281], 0, 35U * sizeof(real_T));
  dv1[11316] = -1.0;
  memset(&dv1[11317], 0, 95U * sizeof(real_T));
  dv1[11412] = 1.0;
  memset(&dv1[11413], 0, 35U * sizeof(real_T));
  dv1[11448] = -1.0;
  memset(&dv1[11449], 0, 95U * sizeof(real_T));
  dv1[11544] = 1.0;
  memset(&dv1[11545], 0, 35U * sizeof(real_T));
  dv1[11580] = -1.0;
  memset(&dv1[11581], 0, 95U * sizeof(real_T));
  dv1[11676] = 1.0;
  memset(&dv1[11677], 0, 35U * sizeof(real_T));
  dv1[11712] = -1.0;
  memset(&dv1[11713], 0, 95U * sizeof(real_T));
  dv1[11808] = 1.0;
  memset(&dv1[11809], 0, 35U * sizeof(real_T));
  dv1[11844] = -1.0;
  memset(&dv1[11845], 0, 73U * sizeof(real_T));
  dv1[11918] = 1.0;
  dv1[11919] = -1.0;
  memset(&dv1[11920], 0, 20U * sizeof(real_T));
  dv1[11940] = 1.0;
  memset(&dv1[11941], 0, 35U * sizeof(real_T));
  dv1[11976] = -1.0;
  memset(&dv1[11977], 0, 95U * sizeof(real_T));
  dv1[12072] = 1.0;
  memset(&dv1[12073], 0, 35U * sizeof(real_T));
  dv1[12108] = -1.0;
  memset(&dv1[12109], 0, 95U * sizeof(real_T));
  dv1[12204] = 1.0;
  memset(&dv1[12205], 0, 35U * sizeof(real_T));
  dv1[12240] = -1.0;
  memset(&dv1[12241], 0, 95U * sizeof(real_T));
  dv1[12336] = 1.0;
  memset(&dv1[12337], 0, 35U * sizeof(real_T));
  dv1[12372] = -1.0;
  memset(&dv1[12373], 0, 95U * sizeof(real_T));
  dv1[12468] = 1.0;
  memset(&dv1[12469], 0, 35U * sizeof(real_T));
  dv1[12504] = -1.0;
  memset(&dv1[12505], 0, 95U * sizeof(real_T));
  dv1[12600] = 1.0;
  memset(&dv1[12601], 0, 35U * sizeof(real_T));
  dv1[12636] = -1.0;
  memset(&dv1[12637], 0, 95U * sizeof(real_T));
  dv1[12732] = 1.0;
  memset(&dv1[12733], 0, 35U * sizeof(real_T));
  dv1[12768] = -1.0;
  memset(&dv1[12769], 0, 95U * sizeof(real_T));
  dv1[12864] = 1.0;
  memset(&dv1[12865], 0, 35U * sizeof(real_T));
  dv1[12900] = -1.0;
  memset(&dv1[12901], 0, 95U * sizeof(real_T));
  dv1[12996] = 1.0;
  memset(&dv1[12997], 0, 35U * sizeof(real_T));
  dv1[13032] = -1.0;
  memset(&dv1[13033], 0, 95U * sizeof(real_T));
  dv1[13128] = 1.0;
  memset(&dv1[13129], 0, 35U * sizeof(real_T));
  dv1[13164] = -1.0;
  memset(&dv1[13165], 0, 95U * sizeof(real_T));
  dv1[13260] = 1.0;
  memset(&dv1[13261], 0, 35U * sizeof(real_T));
  dv1[13296] = -1.0;
  memset(&dv1[13297], 0, 95U * sizeof(real_T));
  dv1[13392] = 1.0;
  memset(&dv1[13393], 0, 35U * sizeof(real_T));
  dv1[13428] = -1.0;
  memset(&dv1[13429], 0, 95U * sizeof(real_T));
  dv1[13524] = 1.0;
  memset(&dv1[13525], 0, 35U * sizeof(real_T));
  dv1[13560] = -1.0;
  memset(&dv1[13561], 0, 95U * sizeof(real_T));
  dv1[13656] = 1.0;
  memset(&dv1[13657], 0, 35U * sizeof(real_T));
  dv1[13692] = -1.0;
  memset(&dv1[13693], 0, 95U * sizeof(real_T));
  dv1[13788] = 1.0;
  memset(&dv1[13789], 0, 35U * sizeof(real_T));
  dv1[13824] = -1.0;
  memset(&dv1[13825], 0, 95U * sizeof(real_T));
  dv1[13920] = 1.0;
  memset(&dv1[13921], 0, 35U * sizeof(real_T));
  dv1[13956] = -1.0;
  memset(&dv1[13957], 0, 95U * sizeof(real_T));
  dv1[14052] = 1.0;
  memset(&dv1[14053], 0, 35U * sizeof(real_T));
  dv1[14088] = -1.0;
  memset(&dv1[14089], 0, 713U * sizeof(real_T));
  dv1[14802] = 1.0;
  memset(&dv1[14803], 0, 483U * sizeof(real_T));
  dv1[15286] = -1.0;
  memset(&dv1[15287], 0, 17U * sizeof(real_T));
  dv1[15304] = -1.0;
  memset(&dv1[15305], 0, 113U * sizeof(real_T));
  dv1[15418] = -1.0;
  memset(&dv1[15419], 0, 17U * sizeof(real_T));
  dv1[15436] = -1.0;
  memset(&dv1[15437], 0, 113U * sizeof(real_T));
  dv1[15550] = -1.0;
  memset(&dv1[15551], 0, 17U * sizeof(real_T));
  dv1[15568] = -1.0;
  memset(&dv1[15569], 0, 113U * sizeof(real_T));
  dv1[15682] = -1.0;
  memset(&dv1[15683], 0, 17U * sizeof(real_T));
  dv1[15700] = -1.0;
  memset(&dv1[15701], 0, 113U * sizeof(real_T));
  dv1[15814] = -1.0;
  memset(&dv1[15815], 0, 17U * sizeof(real_T));
  dv1[15832] = -1.0;
  memset(&dv1[15833], 0, 113U * sizeof(real_T));
  dv1[15946] = -1.0;
  memset(&dv1[15947], 0, 17U * sizeof(real_T));
  dv1[15964] = -1.0;
  memset(&dv1[15965], 0, 113U * sizeof(real_T));
  dv1[16078] = -1.0;
  memset(&dv1[16079], 0, 17U * sizeof(real_T));
  dv1[16096] = -1.0;
  memset(&dv1[16097], 0, 113U * sizeof(real_T));
  dv1[16210] = -1.0;
  memset(&dv1[16211], 0, 17U * sizeof(real_T));
  dv1[16228] = -1.0;
  memset(&dv1[16229], 0, 113U * sizeof(real_T));
  dv1[16342] = -1.0;
  memset(&dv1[16343], 0, 17U * sizeof(real_T));
  dv1[16360] = -1.0;
  memset(&dv1[16361], 0, 113U * sizeof(real_T));
  dv1[16474] = -1.0;
  memset(&dv1[16475], 0, 17U * sizeof(real_T));
  dv1[16492] = -1.0;
  memset(&dv1[16493], 0, 113U * sizeof(real_T));
  dv1[16606] = -1.0;
  memset(&dv1[16607], 0, 17U * sizeof(real_T));
  dv1[16624] = -1.0;
  memset(&dv1[16625], 0, 113U * sizeof(real_T));
  dv1[16738] = -1.0;
  memset(&dv1[16739], 0, 17U * sizeof(real_T));
  dv1[16756] = -1.0;
  memset(&dv1[16757], 0, 113U * sizeof(real_T));
  dv1[16870] = -1.0;
  memset(&dv1[16871], 0, 17U * sizeof(real_T));
  dv1[16888] = -1.0;
  memset(&dv1[16889], 0, 113U * sizeof(real_T));
  dv1[17002] = -1.0;
  memset(&dv1[17003], 0, 17U * sizeof(real_T));
  dv1[17020] = -1.0;
  memset(&dv1[17021], 0, 113U * sizeof(real_T));
  dv1[17134] = -1.0;
  memset(&dv1[17135], 0, 17U * sizeof(real_T));
  dv1[17152] = -1.0;
  memset(&dv1[17153], 0, 113U * sizeof(real_T));
  dv1[17266] = -1.0;
  memset(&dv1[17267], 0, 17U * sizeof(real_T));
  dv1[17284] = -1.0;
  memset(&dv1[17285], 0, 113U * sizeof(real_T));
  dv1[17398] = -1.0;
  memset(&dv1[17399], 0, 17U * sizeof(real_T));
  dv1[17416] = -1.0;
  memset(&dv1[17417], 0, 113U * sizeof(real_T));
  dv1[17530] = -1.0;
  memset(&dv1[17531], 0, 17U * sizeof(real_T));
  dv1[17548] = -1.0;
  memset(&dv1[17549], 0, 135U * sizeof(real_T));
  dv1[17684] = -1.0;
  memset(&dv1[17685], 0, 2353U * sizeof(real_T));
  dv1[20038] = -1.0;
  dv1[20039] = -1.0;
  memset(&dv1[20040], 0, 655U * sizeof(real_T));
  dv1[20695] = -1.0;
  dv1[20696] = -1.0;
  memset(&dv1[20697], 0, 1573U * sizeof(real_T));
  for (i1 = 0; i1 < 170; i1++) {
    memcpy(&Aiq[i1 * 131], &dv1[i1 * 131], 131U * sizeof(real_T));
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
  biq[126] = Cpx1 + in8[0];
  biq[127] = -Cpx1 + in8[0];
  biq[128] = Cpy1 + in9[0];
  biq[129] = -Cpy1 + in9[0];
  biq[130] = -in9[1];
}

/* End of code generation (IqFast_LeftStart4V30.cpp) */
