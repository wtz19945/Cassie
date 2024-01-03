/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart5V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart5V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step5.h"
#include "IqFast_LeftStart5V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart5V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart5V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart5V40(Fast_MPCV40_form_Step5StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[40040], real_T biq[182])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART5V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART5V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:38:38 */
  i1 = in4->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&ub_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&tb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&sb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(4 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i1, (emlrtBCInfo *)&rb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&qb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(6 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i1, (emlrtBCInfo *)&pb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&ob_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(8 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i1, (emlrtBCInfo *)&nb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&mb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&lb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&kb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&jb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(4 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i1, (emlrtBCInfo *)&ib_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&hb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(6 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i1, (emlrtBCInfo *)&gb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&fb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(8 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i1, (emlrtBCInfo *)&eb_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(9 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i1, (emlrtBCInfo *)&db_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(10 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i1, (emlrtBCInfo *)&cb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&bb_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(12 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i1, (emlrtBCInfo *)&ab_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&y_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(14 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i1, (emlrtBCInfo *)&x_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&w_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(16 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i1, (emlrtBCInfo *)&v_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&u_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(18 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i1, (emlrtBCInfo *)&t_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(19 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i1, (emlrtBCInfo *)&s_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(20 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(20, 1, i1, (emlrtBCInfo *)&r_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(21 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i1, (emlrtBCInfo *)&q_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(22 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(22, 1, i1, (emlrtBCInfo *)&p_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(23 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i1, (emlrtBCInfo *)&o_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(10 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i1, (emlrtBCInfo *)&n_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(11 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i1, (emlrtBCInfo *)&m_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(12 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i1, (emlrtBCInfo *)&l_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(13 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i1, (emlrtBCInfo *)&k_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(14 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i1, (emlrtBCInfo *)&j_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(15 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i1, (emlrtBCInfo *)&i_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(16 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i1, (emlrtBCInfo *)&h_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(17 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i1, (emlrtBCInfo *)&g_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(18 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i1, (emlrtBCInfo *)&f_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(19 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i1, (emlrtBCInfo *)&e_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(20 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(20, 1, i1, (emlrtBCInfo *)&d_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(21 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i1, (emlrtBCInfo *)&c_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(22 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(22, 1, i1, (emlrtBCInfo *)&b_emlrtBCI, sp);
  }

  i1 = in5->size[1];
  if (!(23 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i1, (emlrtBCInfo *)&emlrtBCI, sp);
  }

  SD->u1.f0.dv1[0] = -1.0;
  memset(&SD->u1.f0.dv1[1], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[46] = 1.0;
  memset(&SD->u1.f0.dv1[47], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[92] = -in11[2];
  memset(&SD->u1.f0.dv1[93], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[138] = -in11[2];
  memset(&SD->u1.f0.dv1[139], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[365] = -1.0;
  memset(&SD->u1.f0.dv1[366], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[411] = 1.0;
  memset(&SD->u1.f0.dv1[412], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[457] = -in11[2];
  memset(&SD->u1.f0.dv1[458], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[503] = -in11[2];
  memset(&SD->u1.f0.dv1[504], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[730] = -1.0;
  memset(&SD->u1.f0.dv1[731], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[776] = 1.0;
  memset(&SD->u1.f0.dv1[777], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[822] = -in11[2];
  memset(&SD->u1.f0.dv1[823], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[868] = -in11[2];
  memset(&SD->u1.f0.dv1[869], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[1095] = -1.0;
  memset(&SD->u1.f0.dv1[1096], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1141] = 1.0;
  memset(&SD->u1.f0.dv1[1142], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1187] = -in11[2];
  memset(&SD->u1.f0.dv1[1188], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1233] = -in11[2];
  memset(&SD->u1.f0.dv1[1234], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[1460] = -1.0;
  memset(&SD->u1.f0.dv1[1461], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1506] = 1.0;
  memset(&SD->u1.f0.dv1[1507], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1552] = -in11[2];
  memset(&SD->u1.f0.dv1[1553], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1598] = -in11[2];
  memset(&SD->u1.f0.dv1[1599], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[1825] = -1.0;
  memset(&SD->u1.f0.dv1[1826], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1871] = 1.0;
  memset(&SD->u1.f0.dv1[1872], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1917] = -in11[2];
  memset(&SD->u1.f0.dv1[1918], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1963] = -in11[2];
  memset(&SD->u1.f0.dv1[1964], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[2190] = -1.0;
  memset(&SD->u1.f0.dv1[2191], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2236] = 1.0;
  memset(&SD->u1.f0.dv1[2237], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2282] = -in11[2];
  memset(&SD->u1.f0.dv1[2283], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2328] = -in11[2];
  memset(&SD->u1.f0.dv1[2329], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[2555] = -1.0;
  memset(&SD->u1.f0.dv1[2556], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2601] = 1.0;
  memset(&SD->u1.f0.dv1[2602], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2647] = -in11[2];
  memset(&SD->u1.f0.dv1[2648], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2693] = -in11[2];
  memset(&SD->u1.f0.dv1[2694], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[2920] = -1.0;
  memset(&SD->u1.f0.dv1[2921], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2966] = 1.0;
  memset(&SD->u1.f0.dv1[2967], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3012] = -in11[2];
  memset(&SD->u1.f0.dv1[3013], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3058] = -in11[2];
  memset(&SD->u1.f0.dv1[3059], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[3285] = -1.0;
  memset(&SD->u1.f0.dv1[3286], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3331] = 1.0;
  memset(&SD->u1.f0.dv1[3332], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3377] = -in11[2];
  memset(&SD->u1.f0.dv1[3378], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3423] = -in11[2];
  memset(&SD->u1.f0.dv1[3424], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[3650] = -1.0;
  memset(&SD->u1.f0.dv1[3651], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3696] = 1.0;
  memset(&SD->u1.f0.dv1[3697], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3742] = -in11[2];
  memset(&SD->u1.f0.dv1[3743], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3788] = -in11[2];
  memset(&SD->u1.f0.dv1[3789], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[4015] = -1.0;
  memset(&SD->u1.f0.dv1[4016], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4061] = 1.0;
  memset(&SD->u1.f0.dv1[4062], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4107] = -in11[2];
  memset(&SD->u1.f0.dv1[4108], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4153] = -in11[2];
  memset(&SD->u1.f0.dv1[4154], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[4380] = -1.0;
  memset(&SD->u1.f0.dv1[4381], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4426] = 1.0;
  memset(&SD->u1.f0.dv1[4427], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4472] = -in11[2];
  memset(&SD->u1.f0.dv1[4473], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4518] = -in11[2];
  memset(&SD->u1.f0.dv1[4519], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[4745] = -1.0;
  memset(&SD->u1.f0.dv1[4746], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4791] = 1.0;
  memset(&SD->u1.f0.dv1[4792], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4837] = -in11[2];
  memset(&SD->u1.f0.dv1[4838], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4883] = -in11[2];
  memset(&SD->u1.f0.dv1[4884], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[5110] = -1.0;
  memset(&SD->u1.f0.dv1[5111], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5156] = 1.0;
  memset(&SD->u1.f0.dv1[5157], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5202] = -in11[2];
  memset(&SD->u1.f0.dv1[5203], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5248] = -in11[2];
  memset(&SD->u1.f0.dv1[5249], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[5475] = -1.0;
  memset(&SD->u1.f0.dv1[5476], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5521] = 1.0;
  memset(&SD->u1.f0.dv1[5522], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5567] = -in11[2];
  memset(&SD->u1.f0.dv1[5568], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5613] = -in11[2];
  memset(&SD->u1.f0.dv1[5614], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[5840] = -1.0;
  memset(&SD->u1.f0.dv1[5841], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5886] = 1.0;
  memset(&SD->u1.f0.dv1[5887], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5932] = -in11[2];
  memset(&SD->u1.f0.dv1[5933], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5978] = -in11[2];
  memset(&SD->u1.f0.dv1[5979], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[6205] = -1.0;
  memset(&SD->u1.f0.dv1[6206], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6251] = 1.0;
  memset(&SD->u1.f0.dv1[6252], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6297] = -in11[2];
  memset(&SD->u1.f0.dv1[6298], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6343] = -in11[2];
  memset(&SD->u1.f0.dv1[6344], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[6570] = -1.0;
  memset(&SD->u1.f0.dv1[6571], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6616] = 1.0;
  memset(&SD->u1.f0.dv1[6617], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6662] = -in11[2];
  memset(&SD->u1.f0.dv1[6663], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6708] = -in11[2];
  memset(&SD->u1.f0.dv1[6709], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[6935] = -1.0;
  memset(&SD->u1.f0.dv1[6936], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6981] = 1.0;
  memset(&SD->u1.f0.dv1[6982], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7027] = -in11[2];
  memset(&SD->u1.f0.dv1[7028], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7073] = -in11[2];
  memset(&SD->u1.f0.dv1[7074], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[7300] = -1.0;
  memset(&SD->u1.f0.dv1[7301], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7346] = 1.0;
  memset(&SD->u1.f0.dv1[7347], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7392] = -in11[2];
  memset(&SD->u1.f0.dv1[7393], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7438] = -in11[2];
  memset(&SD->u1.f0.dv1[7439], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[7665] = -1.0;
  memset(&SD->u1.f0.dv1[7666], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7711] = 1.0;
  memset(&SD->u1.f0.dv1[7712], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7757] = -in11[2];
  memset(&SD->u1.f0.dv1[7758], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7803] = -in11[2];
  memset(&SD->u1.f0.dv1[7804], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[8030] = -1.0;
  memset(&SD->u1.f0.dv1[8031], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8076] = 1.0;
  memset(&SD->u1.f0.dv1[8077], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8122] = -in11[2];
  memset(&SD->u1.f0.dv1[8123], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8168] = -in11[2];
  memset(&SD->u1.f0.dv1[8169], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[8395] = -1.0;
  memset(&SD->u1.f0.dv1[8396], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8441] = 1.0;
  memset(&SD->u1.f0.dv1[8442], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8464] = -in11[3];
  memset(&SD->u1.f0.dv1[8465], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8510] = -in11[3];
  memset(&SD->u1.f0.dv1[8511], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[8760] = -1.0;
  memset(&SD->u1.f0.dv1[8761], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8806] = 1.0;
  memset(&SD->u1.f0.dv1[8807], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8829] = -in11[3];
  memset(&SD->u1.f0.dv1[8830], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8875] = -in11[3];
  memset(&SD->u1.f0.dv1[8876], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[9125] = -1.0;
  memset(&SD->u1.f0.dv1[9126], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9171] = 1.0;
  memset(&SD->u1.f0.dv1[9172], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9194] = -in11[3];
  memset(&SD->u1.f0.dv1[9195], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9240] = -in11[3];
  memset(&SD->u1.f0.dv1[9241], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[9490] = -1.0;
  memset(&SD->u1.f0.dv1[9491], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9536] = 1.0;
  memset(&SD->u1.f0.dv1[9537], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9559] = -in11[3];
  memset(&SD->u1.f0.dv1[9560], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9605] = -in11[3];
  memset(&SD->u1.f0.dv1[9606], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[9855] = -1.0;
  memset(&SD->u1.f0.dv1[9856], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9901] = 1.0;
  memset(&SD->u1.f0.dv1[9902], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9924] = -in11[3];
  memset(&SD->u1.f0.dv1[9925], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9970] = -in11[3];
  memset(&SD->u1.f0.dv1[9971], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[10220] = -1.0;
  memset(&SD->u1.f0.dv1[10221], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10266] = 1.0;
  memset(&SD->u1.f0.dv1[10267], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10289] = -in11[3];
  memset(&SD->u1.f0.dv1[10290], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10335] = -in11[3];
  memset(&SD->u1.f0.dv1[10336], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[10585] = -1.0;
  memset(&SD->u1.f0.dv1[10586], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10631] = 1.0;
  memset(&SD->u1.f0.dv1[10632], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10654] = -in11[3];
  memset(&SD->u1.f0.dv1[10655], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10700] = -in11[3];
  memset(&SD->u1.f0.dv1[10701], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[10950] = -1.0;
  memset(&SD->u1.f0.dv1[10951], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10996] = 1.0;
  memset(&SD->u1.f0.dv1[10997], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11019] = -in11[3];
  memset(&SD->u1.f0.dv1[11020], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11065] = -in11[3];
  memset(&SD->u1.f0.dv1[11066], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[11315] = -1.0;
  memset(&SD->u1.f0.dv1[11316], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11361] = 1.0;
  memset(&SD->u1.f0.dv1[11362], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11384] = -in11[3];
  memset(&SD->u1.f0.dv1[11385], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11430] = -in11[3];
  memset(&SD->u1.f0.dv1[11431], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[11680] = -1.0;
  memset(&SD->u1.f0.dv1[11681], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11726] = 1.0;
  memset(&SD->u1.f0.dv1[11727], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11749] = -in11[3];
  memset(&SD->u1.f0.dv1[11750], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11795] = -in11[3];
  memset(&SD->u1.f0.dv1[11796], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[12045] = -1.0;
  memset(&SD->u1.f0.dv1[12046], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12091] = 1.0;
  memset(&SD->u1.f0.dv1[12092], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12114] = -in11[3];
  memset(&SD->u1.f0.dv1[12115], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12160] = -in11[3];
  memset(&SD->u1.f0.dv1[12161], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[12410] = -1.0;
  memset(&SD->u1.f0.dv1[12411], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12456] = 1.0;
  memset(&SD->u1.f0.dv1[12457], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12479] = -in11[3];
  memset(&SD->u1.f0.dv1[12480], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12525] = -in11[3];
  memset(&SD->u1.f0.dv1[12526], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[12775] = -1.0;
  memset(&SD->u1.f0.dv1[12776], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12821] = 1.0;
  memset(&SD->u1.f0.dv1[12822], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12844] = -in11[3];
  memset(&SD->u1.f0.dv1[12845], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12890] = -in11[3];
  memset(&SD->u1.f0.dv1[12891], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[13140] = -1.0;
  memset(&SD->u1.f0.dv1[13141], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13186] = 1.0;
  memset(&SD->u1.f0.dv1[13187], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13209] = -in11[3];
  memset(&SD->u1.f0.dv1[13210], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13255] = -in11[3];
  memset(&SD->u1.f0.dv1[13256], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[13505] = -1.0;
  memset(&SD->u1.f0.dv1[13506], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13551] = 1.0;
  memset(&SD->u1.f0.dv1[13552], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13574] = -in11[3];
  memset(&SD->u1.f0.dv1[13575], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13620] = -in11[3];
  memset(&SD->u1.f0.dv1[13621], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[13870] = -1.0;
  memset(&SD->u1.f0.dv1[13871], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13916] = 1.0;
  memset(&SD->u1.f0.dv1[13917], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13939] = -in11[3];
  memset(&SD->u1.f0.dv1[13940], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13985] = -in11[3];
  memset(&SD->u1.f0.dv1[13986], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[14235] = -1.0;
  memset(&SD->u1.f0.dv1[14236], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14281] = 1.0;
  memset(&SD->u1.f0.dv1[14282], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14304] = -in11[3];
  memset(&SD->u1.f0.dv1[14305], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14350] = -in11[3];
  memset(&SD->u1.f0.dv1[14351], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[14600] = -1.0;
  memset(&SD->u1.f0.dv1[14601], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14646] = 1.0;
  memset(&SD->u1.f0.dv1[14647], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14669] = -in11[3];
  memset(&SD->u1.f0.dv1[14670], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14715] = -in11[3];
  memset(&SD->u1.f0.dv1[14716], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[14965] = -1.0;
  memset(&SD->u1.f0.dv1[14966], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15011] = 1.0;
  memset(&SD->u1.f0.dv1[15012], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15034] = -in11[3];
  memset(&SD->u1.f0.dv1[15035], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15080] = -in11[3];
  memset(&SD->u1.f0.dv1[15081], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[15330] = -1.0;
  memset(&SD->u1.f0.dv1[15331], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15376] = 1.0;
  memset(&SD->u1.f0.dv1[15377], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15399] = -in11[3];
  memset(&SD->u1.f0.dv1[15400], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15445] = -in11[3];
  memset(&SD->u1.f0.dv1[15446], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[15695] = -1.0;
  memset(&SD->u1.f0.dv1[15696], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15741] = 1.0;
  memset(&SD->u1.f0.dv1[15742], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15764] = -in11[3];
  memset(&SD->u1.f0.dv1[15765], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15810] = -in11[3];
  memset(&SD->u1.f0.dv1[15811], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[16060] = -1.0;
  memset(&SD->u1.f0.dv1[16061], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16106] = 1.0;
  memset(&SD->u1.f0.dv1[16107], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16129] = -in11[3];
  memset(&SD->u1.f0.dv1[16130], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16175] = -in11[3];
  memset(&SD->u1.f0.dv1[16176], 0, 249U * sizeof(real_T));
  SD->u1.f0.dv1[16425] = -1.0;
  memset(&SD->u1.f0.dv1[16426], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16471] = 1.0;
  memset(&SD->u1.f0.dv1[16472], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16494] = -in11[3];
  memset(&SD->u1.f0.dv1[16495], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16540] = -in11[3];
  memset(&SD->u1.f0.dv1[16541], 0, 203U * sizeof(real_T));
  SD->u1.f0.dv1[16744] = 1.0;
  memset(&SD->u1.f0.dv1[16745], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16790] = -1.0;
  memset(&SD->u1.f0.dv1[16791], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[16905] = 1.0;
  SD->u1.f0.dv1[16906] = 0.0;
  SD->u1.f0.dv1[16907] = 0.0;
  SD->u1.f0.dv1[16908] = 0.0;
  SD->u1.f0.dv1[16909] = 0.0;
  SD->u1.f0.dv1[16910] = -1.0;
  memset(&SD->u1.f0.dv1[16911], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[16927] = 1.0;
  memset(&SD->u1.f0.dv1[16928], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16973] = -1.0;
  memset(&SD->u1.f0.dv1[16974], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17088] = 1.0;
  SD->u1.f0.dv1[17089] = 0.0;
  SD->u1.f0.dv1[17090] = 0.0;
  SD->u1.f0.dv1[17091] = 0.0;
  SD->u1.f0.dv1[17092] = 0.0;
  SD->u1.f0.dv1[17093] = -1.0;
  memset(&SD->u1.f0.dv1[17094], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[17110] = 1.0;
  memset(&SD->u1.f0.dv1[17111], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17156] = -1.0;
  memset(&SD->u1.f0.dv1[17157], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17271] = 1.0;
  SD->u1.f0.dv1[17272] = 0.0;
  SD->u1.f0.dv1[17273] = 0.0;
  SD->u1.f0.dv1[17274] = 0.0;
  SD->u1.f0.dv1[17275] = 0.0;
  SD->u1.f0.dv1[17276] = -1.0;
  memset(&SD->u1.f0.dv1[17277], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[17293] = 1.0;
  memset(&SD->u1.f0.dv1[17294], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17339] = -1.0;
  memset(&SD->u1.f0.dv1[17340], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17454] = 1.0;
  SD->u1.f0.dv1[17455] = 0.0;
  SD->u1.f0.dv1[17456] = 0.0;
  SD->u1.f0.dv1[17457] = 0.0;
  SD->u1.f0.dv1[17458] = 0.0;
  SD->u1.f0.dv1[17459] = -1.0;
  memset(&SD->u1.f0.dv1[17460], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[17476] = 1.0;
  memset(&SD->u1.f0.dv1[17477], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17522] = -1.0;
  memset(&SD->u1.f0.dv1[17523], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17637] = 1.0;
  SD->u1.f0.dv1[17638] = 0.0;
  SD->u1.f0.dv1[17639] = 0.0;
  SD->u1.f0.dv1[17640] = 0.0;
  SD->u1.f0.dv1[17641] = 0.0;
  SD->u1.f0.dv1[17642] = -1.0;
  memset(&SD->u1.f0.dv1[17643], 0, sizeof(real_T) << 4);
  SD->u1.f0.dv1[17659] = 1.0;
  memset(&SD->u1.f0.dv1[17660], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17705] = -1.0;
  memset(&SD->u1.f0.dv1[17706], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[17842] = 1.0;
  memset(&SD->u1.f0.dv1[17843], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17888] = -1.0;
  memset(&SD->u1.f0.dv1[17889], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[18025] = 1.0;
  memset(&SD->u1.f0.dv1[18026], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18071] = -1.0;
  memset(&SD->u1.f0.dv1[18072], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[18208] = 1.0;
  memset(&SD->u1.f0.dv1[18209], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18254] = -1.0;
  memset(&SD->u1.f0.dv1[18255], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[18391] = 1.0;
  memset(&SD->u1.f0.dv1[18392], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18437] = -1.0;
  memset(&SD->u1.f0.dv1[18438], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[18574] = 1.0;
  memset(&SD->u1.f0.dv1[18575], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18620] = -1.0;
  memset(&SD->u1.f0.dv1[18621], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[18757] = 1.0;
  memset(&SD->u1.f0.dv1[18758], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18803] = -1.0;
  memset(&SD->u1.f0.dv1[18804], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[18940] = 1.0;
  memset(&SD->u1.f0.dv1[18941], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18986] = -1.0;
  memset(&SD->u1.f0.dv1[18987], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[19123] = 1.0;
  memset(&SD->u1.f0.dv1[19124], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19169] = -1.0;
  memset(&SD->u1.f0.dv1[19170], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[19306] = 1.0;
  memset(&SD->u1.f0.dv1[19307], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19352] = -1.0;
  memset(&SD->u1.f0.dv1[19353], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[19489] = 1.0;
  memset(&SD->u1.f0.dv1[19490], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19535] = -1.0;
  memset(&SD->u1.f0.dv1[19536], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[19672] = 1.0;
  memset(&SD->u1.f0.dv1[19673], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19718] = -1.0;
  memset(&SD->u1.f0.dv1[19719], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[19855] = 1.0;
  memset(&SD->u1.f0.dv1[19856], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19901] = -1.0;
  memset(&SD->u1.f0.dv1[19902], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[20038] = 1.0;
  memset(&SD->u1.f0.dv1[20039], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20084] = -1.0;
  memset(&SD->u1.f0.dv1[20085], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[20221] = 1.0;
  memset(&SD->u1.f0.dv1[20222], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20267] = -1.0;
  memset(&SD->u1.f0.dv1[20268], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[20404] = 1.0;
  memset(&SD->u1.f0.dv1[20405], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20450] = -1.0;
  memset(&SD->u1.f0.dv1[20451], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[20587] = 1.0;
  memset(&SD->u1.f0.dv1[20588], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20633] = -1.0;
  memset(&SD->u1.f0.dv1[20634], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[20770] = 1.0;
  memset(&SD->u1.f0.dv1[20771], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20816] = -1.0;
  memset(&SD->u1.f0.dv1[20817], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[20953] = 1.0;
  memset(&SD->u1.f0.dv1[20954], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20999] = -1.0;
  memset(&SD->u1.f0.dv1[21000], 0, 101U * sizeof(real_T));
  SD->u1.f0.dv1[21101] = 1.0;
  SD->u1.f0.dv1[21102] = 0.0;
  SD->u1.f0.dv1[21103] = 0.0;
  SD->u1.f0.dv1[21104] = 0.0;
  SD->u1.f0.dv1[21105] = 0.0;
  SD->u1.f0.dv1[21106] = -1.0;
  memset(&SD->u1.f0.dv1[21107], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv1[21136] = 1.0;
  memset(&SD->u1.f0.dv1[21137], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21182] = -1.0;
  memset(&SD->u1.f0.dv1[21183], 0, 101U * sizeof(real_T));
  SD->u1.f0.dv1[21284] = 1.0;
  SD->u1.f0.dv1[21285] = 0.0;
  SD->u1.f0.dv1[21286] = 0.0;
  SD->u1.f0.dv1[21287] = 0.0;
  SD->u1.f0.dv1[21288] = 0.0;
  SD->u1.f0.dv1[21289] = -1.0;
  memset(&SD->u1.f0.dv1[21290], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv1[21319] = 1.0;
  memset(&SD->u1.f0.dv1[21320], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21365] = -1.0;
  memset(&SD->u1.f0.dv1[21366], 0, 101U * sizeof(real_T));
  SD->u1.f0.dv1[21467] = 1.0;
  SD->u1.f0.dv1[21468] = 0.0;
  SD->u1.f0.dv1[21469] = 0.0;
  SD->u1.f0.dv1[21470] = 0.0;
  SD->u1.f0.dv1[21471] = 0.0;
  SD->u1.f0.dv1[21472] = -1.0;
  memset(&SD->u1.f0.dv1[21473], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv1[21502] = 1.0;
  memset(&SD->u1.f0.dv1[21503], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21548] = -1.0;
  memset(&SD->u1.f0.dv1[21549], 0, 101U * sizeof(real_T));
  SD->u1.f0.dv1[21650] = 1.0;
  SD->u1.f0.dv1[21651] = 0.0;
  SD->u1.f0.dv1[21652] = 0.0;
  SD->u1.f0.dv1[21653] = 0.0;
  SD->u1.f0.dv1[21654] = 0.0;
  SD->u1.f0.dv1[21655] = -1.0;
  memset(&SD->u1.f0.dv1[21656], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv1[21685] = 1.0;
  memset(&SD->u1.f0.dv1[21686], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21731] = -1.0;
  memset(&SD->u1.f0.dv1[21732], 0, 101U * sizeof(real_T));
  SD->u1.f0.dv1[21833] = 1.0;
  SD->u1.f0.dv1[21834] = 0.0;
  SD->u1.f0.dv1[21835] = 0.0;
  SD->u1.f0.dv1[21836] = 0.0;
  SD->u1.f0.dv1[21837] = 0.0;
  SD->u1.f0.dv1[21838] = -1.0;
  memset(&SD->u1.f0.dv1[21839], 0, 29U * sizeof(real_T));
  SD->u1.f0.dv1[21868] = 1.0;
  memset(&SD->u1.f0.dv1[21869], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21914] = -1.0;
  memset(&SD->u1.f0.dv1[21915], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[22051] = 1.0;
  memset(&SD->u1.f0.dv1[22052], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22097] = -1.0;
  memset(&SD->u1.f0.dv1[22098], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[22234] = 1.0;
  memset(&SD->u1.f0.dv1[22235], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22280] = -1.0;
  memset(&SD->u1.f0.dv1[22281], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[22417] = 1.0;
  memset(&SD->u1.f0.dv1[22418], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22463] = -1.0;
  memset(&SD->u1.f0.dv1[22464], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[22600] = 1.0;
  memset(&SD->u1.f0.dv1[22601], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22646] = -1.0;
  memset(&SD->u1.f0.dv1[22647], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[22783] = 1.0;
  memset(&SD->u1.f0.dv1[22784], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22829] = -1.0;
  memset(&SD->u1.f0.dv1[22830], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[22966] = 1.0;
  memset(&SD->u1.f0.dv1[22967], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23012] = -1.0;
  memset(&SD->u1.f0.dv1[23013], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[23149] = 1.0;
  memset(&SD->u1.f0.dv1[23150], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23195] = -1.0;
  memset(&SD->u1.f0.dv1[23196], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[23332] = 1.0;
  memset(&SD->u1.f0.dv1[23333], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23378] = -1.0;
  memset(&SD->u1.f0.dv1[23379], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[23515] = 1.0;
  memset(&SD->u1.f0.dv1[23516], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23561] = -1.0;
  memset(&SD->u1.f0.dv1[23562], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[23698] = 1.0;
  memset(&SD->u1.f0.dv1[23699], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23744] = -1.0;
  memset(&SD->u1.f0.dv1[23745], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[23881] = 1.0;
  memset(&SD->u1.f0.dv1[23882], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23927] = -1.0;
  memset(&SD->u1.f0.dv1[23928], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[24064] = 1.0;
  memset(&SD->u1.f0.dv1[24065], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24110] = -1.0;
  memset(&SD->u1.f0.dv1[24111], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[24247] = 1.0;
  memset(&SD->u1.f0.dv1[24248], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24293] = -1.0;
  memset(&SD->u1.f0.dv1[24294], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[24430] = 1.0;
  memset(&SD->u1.f0.dv1[24431], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24476] = -1.0;
  memset(&SD->u1.f0.dv1[24477], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[24613] = 1.0;
  memset(&SD->u1.f0.dv1[24614], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24659] = -1.0;
  memset(&SD->u1.f0.dv1[24660], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[24796] = 1.0;
  memset(&SD->u1.f0.dv1[24797], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24842] = -1.0;
  memset(&SD->u1.f0.dv1[24843], 0, 136U * sizeof(real_T));
  SD->u1.f0.dv1[24979] = 1.0;
  memset(&SD->u1.f0.dv1[24980], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25025] = -1.0;
  memset(&SD->u1.f0.dv1[25026], 0, 999U * sizeof(real_T));
  SD->u1.f0.dv1[26025] = 1.0;
  memset(&SD->u1.f0.dv1[26026], 0, 661U * sizeof(real_T));
  SD->u1.f0.dv1[26687] = -1.0;
  memset(&SD->u1.f0.dv1[26688], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26710] = -1.0;
  memset(&SD->u1.f0.dv1[26711], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[26870] = -1.0;
  memset(&SD->u1.f0.dv1[26871], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26893] = -1.0;
  memset(&SD->u1.f0.dv1[26894], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[27053] = -1.0;
  memset(&SD->u1.f0.dv1[27054], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27076] = -1.0;
  memset(&SD->u1.f0.dv1[27077], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[27236] = -1.0;
  memset(&SD->u1.f0.dv1[27237], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27259] = -1.0;
  memset(&SD->u1.f0.dv1[27260], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[27419] = -1.0;
  memset(&SD->u1.f0.dv1[27420], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27442] = -1.0;
  memset(&SD->u1.f0.dv1[27443], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[27602] = -1.0;
  memset(&SD->u1.f0.dv1[27603], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27625] = -1.0;
  memset(&SD->u1.f0.dv1[27626], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[27785] = -1.0;
  memset(&SD->u1.f0.dv1[27786], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27808] = -1.0;
  memset(&SD->u1.f0.dv1[27809], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[27968] = -1.0;
  memset(&SD->u1.f0.dv1[27969], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27991] = -1.0;
  memset(&SD->u1.f0.dv1[27992], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[28151] = -1.0;
  memset(&SD->u1.f0.dv1[28152], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28174] = -1.0;
  memset(&SD->u1.f0.dv1[28175], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[28334] = -1.0;
  memset(&SD->u1.f0.dv1[28335], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28357] = -1.0;
  memset(&SD->u1.f0.dv1[28358], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[28517] = -1.0;
  memset(&SD->u1.f0.dv1[28518], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28540] = -1.0;
  memset(&SD->u1.f0.dv1[28541], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[28700] = -1.0;
  memset(&SD->u1.f0.dv1[28701], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28723] = -1.0;
  memset(&SD->u1.f0.dv1[28724], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[28883] = -1.0;
  memset(&SD->u1.f0.dv1[28884], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28906] = -1.0;
  memset(&SD->u1.f0.dv1[28907], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[29066] = -1.0;
  memset(&SD->u1.f0.dv1[29067], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29089] = -1.0;
  memset(&SD->u1.f0.dv1[29090], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[29249] = -1.0;
  memset(&SD->u1.f0.dv1[29250], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29272] = -1.0;
  memset(&SD->u1.f0.dv1[29273], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[29432] = -1.0;
  memset(&SD->u1.f0.dv1[29433], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29455] = -1.0;
  memset(&SD->u1.f0.dv1[29456], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[29615] = -1.0;
  memset(&SD->u1.f0.dv1[29616], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29638] = -1.0;
  memset(&SD->u1.f0.dv1[29639], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[29798] = -1.0;
  memset(&SD->u1.f0.dv1[29799], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29821] = -1.0;
  memset(&SD->u1.f0.dv1[29822], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[29981] = -1.0;
  memset(&SD->u1.f0.dv1[29982], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30004] = -1.0;
  memset(&SD->u1.f0.dv1[30005], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[30164] = -1.0;
  memset(&SD->u1.f0.dv1[30165], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30187] = -1.0;
  memset(&SD->u1.f0.dv1[30188], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[30347] = -1.0;
  memset(&SD->u1.f0.dv1[30348], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30370] = -1.0;
  memset(&SD->u1.f0.dv1[30371], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[30530] = -1.0;
  memset(&SD->u1.f0.dv1[30531], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30553] = -1.0;
  memset(&SD->u1.f0.dv1[30554], 0, 159U * sizeof(real_T));
  SD->u1.f0.dv1[30713] = -1.0;
  memset(&SD->u1.f0.dv1[30714], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30736] = -1.0;
  memset(&SD->u1.f0.dv1[30737], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[30939] = -1.0;
  memset(&SD->u1.f0.dv1[30940], 0, 4165U * sizeof(real_T));
  SD->u1.f0.dv1[35105] = -1.0;
  SD->u1.f0.dv1[35106] = 0.0;
  SD->u1.f0.dv1[35107] = 0.0;
  SD->u1.f0.dv1[35108] = 0.0;
  SD->u1.f0.dv1[35109] = 0.0;
  SD->u1.f0.dv1[35110] = -1.0;
  memset(&SD->u1.f0.dv1[35111], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[35288] = -1.0;
  SD->u1.f0.dv1[35289] = 0.0;
  SD->u1.f0.dv1[35290] = 0.0;
  SD->u1.f0.dv1[35291] = 0.0;
  SD->u1.f0.dv1[35292] = 0.0;
  SD->u1.f0.dv1[35293] = -1.0;
  memset(&SD->u1.f0.dv1[35294], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[35471] = -1.0;
  SD->u1.f0.dv1[35472] = 0.0;
  SD->u1.f0.dv1[35473] = 0.0;
  SD->u1.f0.dv1[35474] = 0.0;
  SD->u1.f0.dv1[35475] = 0.0;
  SD->u1.f0.dv1[35476] = -1.0;
  memset(&SD->u1.f0.dv1[35477], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[35654] = -1.0;
  SD->u1.f0.dv1[35655] = 0.0;
  SD->u1.f0.dv1[35656] = 0.0;
  SD->u1.f0.dv1[35657] = 0.0;
  SD->u1.f0.dv1[35658] = 0.0;
  SD->u1.f0.dv1[35659] = -1.0;
  memset(&SD->u1.f0.dv1[35660], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[35837] = -1.0;
  SD->u1.f0.dv1[35838] = 0.0;
  SD->u1.f0.dv1[35839] = 0.0;
  SD->u1.f0.dv1[35840] = 0.0;
  SD->u1.f0.dv1[35841] = 0.0;
  SD->u1.f0.dv1[35842] = -1.0;
  memset(&SD->u1.f0.dv1[35843], 0, 1092U * sizeof(real_T));
  SD->u1.f0.dv1[36935] = -1.0;
  SD->u1.f0.dv1[36936] = 0.0;
  SD->u1.f0.dv1[36937] = 0.0;
  SD->u1.f0.dv1[36938] = 0.0;
  SD->u1.f0.dv1[36939] = 0.0;
  SD->u1.f0.dv1[36940] = -1.0;
  memset(&SD->u1.f0.dv1[36941], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[37118] = -1.0;
  SD->u1.f0.dv1[37119] = 0.0;
  SD->u1.f0.dv1[37120] = 0.0;
  SD->u1.f0.dv1[37121] = 0.0;
  SD->u1.f0.dv1[37122] = 0.0;
  SD->u1.f0.dv1[37123] = -1.0;
  memset(&SD->u1.f0.dv1[37124], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[37301] = -1.0;
  SD->u1.f0.dv1[37302] = 0.0;
  SD->u1.f0.dv1[37303] = 0.0;
  SD->u1.f0.dv1[37304] = 0.0;
  SD->u1.f0.dv1[37305] = 0.0;
  SD->u1.f0.dv1[37306] = -1.0;
  memset(&SD->u1.f0.dv1[37307], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[37484] = -1.0;
  SD->u1.f0.dv1[37485] = 0.0;
  SD->u1.f0.dv1[37486] = 0.0;
  SD->u1.f0.dv1[37487] = 0.0;
  SD->u1.f0.dv1[37488] = 0.0;
  SD->u1.f0.dv1[37489] = -1.0;
  memset(&SD->u1.f0.dv1[37490], 0, 177U * sizeof(real_T));
  SD->u1.f0.dv1[37667] = -1.0;
  SD->u1.f0.dv1[37668] = 0.0;
  SD->u1.f0.dv1[37669] = 0.0;
  SD->u1.f0.dv1[37670] = 0.0;
  SD->u1.f0.dv1[37671] = 0.0;
  SD->u1.f0.dv1[37672] = -1.0;
  memset(&SD->u1.f0.dv1[37673], 0, 2367U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 182], &SD->u1.f0.dv1[i1 * 182], 182U * sizeof(real_T));
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
  biq[18] = in10[0];
  biq[19] = in10[0];
  biq[20] = in10[0];
  biq[21] = in10[0];
  biq[22] = in10[0];
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
  biq[36] = in10[1];
  biq[37] = in10[1];
  biq[38] = in10[1];
  biq[39] = in10[1];
  biq[40] = in10[1];
  biq[41] = in10[1];
  biq[42] = in10[1];
  biq[43] = in10[1];
  biq[44] = in10[1];
  biq[45] = in10[1];
  biq[46] = in10[0];
  biq[47] = in10[0];
  biq[48] = in10[0];
  biq[49] = in10[0];
  biq[50] = in10[0];
  biq[51] = in10[0];
  biq[52] = in10[0];
  biq[53] = in10[0];
  biq[54] = in10[0];
  biq[55] = in10[0];
  biq[56] = in10[0];
  biq[57] = in10[0];
  biq[58] = in10[0];
  biq[59] = in10[0];
  biq[60] = in10[0];
  biq[61] = in10[0];
  biq[62] = in10[0];
  biq[63] = in10[0];
  biq[64] = in10[0];
  biq[65] = in10[0];
  biq[66] = in10[0];
  biq[67] = in10[0];
  biq[68] = in10[0];
  biq[69] = in10[1];
  biq[70] = in10[1];
  biq[71] = in10[1];
  biq[72] = in10[1];
  biq[73] = in10[1];
  biq[74] = in10[1];
  biq[75] = in10[1];
  biq[76] = in10[1];
  biq[77] = in10[1];
  biq[78] = in10[1];
  biq[79] = in10[1];
  biq[80] = in10[1];
  biq[81] = in10[1];
  biq[82] = in10[1];
  biq[83] = in10[1];
  biq[84] = in10[1];
  biq[85] = in10[1];
  biq[86] = in10[1];
  biq[87] = in10[1];
  biq[88] = in10[1];
  biq[89] = in10[1];
  biq[90] = in10[1];
  biq[91] = in10[1];
  biq[92] = -in11[2] * (in11[0] + in11[2] * in4->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in4->data[0] * t7);
  biq[93] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0]] * t7);
  biq[94] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 1] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 1] * t7);
  biq[95] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 3] * t7);
  biq[96] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 2] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 2] * t7);
  biq[97] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 5] * t7);
  biq[98] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 6] * t7);
  biq[99] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 7] * t7);
  biq[100] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 3] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 3] * t7);
  biq[101] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 9] * t7);
  biq[102] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 10] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 10] * t7);
  biq[103] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 11] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 11] * t7);
  biq[104] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 12] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 12] * t7);
  biq[105] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 13] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 13] * t7);
  biq[106] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 14] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 14] * t7);
  biq[107] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 15] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 15] * t7);
  biq[108] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 4] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 4] * t7);
  biq[109] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 17] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 17] * t7);
  biq[110] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 18] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 18] * t7);
  biq[111] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 19] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 19] * t7);
  biq[112] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 20] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 20] * t7);
  biq[113] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 21] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 21] * t7);
  biq[114] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 22] * t7)
    - in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 22] * t7);
  memset(&biq[115], 0, 23U * sizeof(real_T));
  biq[138] = -in11[2] * (in11[0] + in11[2] * in5->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in5->data[0] * t7);
  biq[139] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0]] * t7);
  biq[140] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 1] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 1] * t7);
  biq[141] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 3] * t7);
  biq[142] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 2] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 2] * t7);
  biq[143] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 5] * t7);
  biq[144] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 6] * t7);
  biq[145] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 7] * t7);
  biq[146] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 3] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 3] * t7);
  biq[147] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 9] * t7);
  biq[148] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 10] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 10] * t7);
  biq[149] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 11] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 11] * t7);
  biq[150] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 12] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 12] * t7);
  biq[151] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 13] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 13] * t7);
  biq[152] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 14] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 14] * t7);
  biq[153] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 15] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 15] * t7);
  biq[154] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 4] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 4] * t7);
  biq[155] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 17] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 17] * t7);
  biq[156] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 18] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 18] * t7);
  biq[157] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 19] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 19] * t7);
  biq[158] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 20] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 20] * t7);
  biq[159] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 21] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 21] * t7);
  biq[160] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 22] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 22] * t7);
  biq[161] = t3;
  biq[162] = t3;
  biq[163] = t3;
  biq[164] = t3;
  biq[165] = t3;
  biq[166] = t9;
  biq[167] = t9;
  biq[168] = t9;
  biq[169] = t9;
  biq[170] = t9;
  biq[171] = t10;
  biq[172] = t10;
  biq[173] = t10;
  biq[174] = t10;
  biq[175] = t10;
  biq[176] = t11;
  biq[177] = t11;
  biq[178] = t11;
  biq[179] = t11;
  biq[180] = t11;
  biq[181] = -in9[1];
}

/* End of code generation (IqFast_LeftStart5V40.cpp) */
