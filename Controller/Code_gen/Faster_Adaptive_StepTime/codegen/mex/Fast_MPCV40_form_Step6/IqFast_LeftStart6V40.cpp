/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart6V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart6V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step6.h"
#include "IqFast_LeftStart6V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart6V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart6V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart6V40(Fast_MPCV40_form_Step6StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[39160], real_T biq[178])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART6V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART6V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:44:14 */
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
  memset(&SD->u1.f0.dv1[139], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[357] = -1.0;
  memset(&SD->u1.f0.dv1[358], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[403] = 1.0;
  memset(&SD->u1.f0.dv1[404], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[449] = -in11[2];
  memset(&SD->u1.f0.dv1[450], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[495] = -in11[2];
  memset(&SD->u1.f0.dv1[496], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[714] = -1.0;
  memset(&SD->u1.f0.dv1[715], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[760] = 1.0;
  memset(&SD->u1.f0.dv1[761], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[806] = -in11[2];
  memset(&SD->u1.f0.dv1[807], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[852] = -in11[2];
  memset(&SD->u1.f0.dv1[853], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[1071] = -1.0;
  memset(&SD->u1.f0.dv1[1072], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1117] = 1.0;
  memset(&SD->u1.f0.dv1[1118], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1163] = -in11[2];
  memset(&SD->u1.f0.dv1[1164], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1209] = -in11[2];
  memset(&SD->u1.f0.dv1[1210], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[1428] = -1.0;
  memset(&SD->u1.f0.dv1[1429], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1474] = 1.0;
  memset(&SD->u1.f0.dv1[1475], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1520] = -in11[2];
  memset(&SD->u1.f0.dv1[1521], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1566] = -in11[2];
  memset(&SD->u1.f0.dv1[1567], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[1785] = -1.0;
  memset(&SD->u1.f0.dv1[1786], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1831] = 1.0;
  memset(&SD->u1.f0.dv1[1832], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1877] = -in11[2];
  memset(&SD->u1.f0.dv1[1878], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1923] = -in11[2];
  memset(&SD->u1.f0.dv1[1924], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[2142] = -1.0;
  memset(&SD->u1.f0.dv1[2143], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2188] = 1.0;
  memset(&SD->u1.f0.dv1[2189], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2234] = -in11[2];
  memset(&SD->u1.f0.dv1[2235], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2280] = -in11[2];
  memset(&SD->u1.f0.dv1[2281], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[2499] = -1.0;
  memset(&SD->u1.f0.dv1[2500], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2545] = 1.0;
  memset(&SD->u1.f0.dv1[2546], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2591] = -in11[2];
  memset(&SD->u1.f0.dv1[2592], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2637] = -in11[2];
  memset(&SD->u1.f0.dv1[2638], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[2856] = -1.0;
  memset(&SD->u1.f0.dv1[2857], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2902] = 1.0;
  memset(&SD->u1.f0.dv1[2903], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2948] = -in11[2];
  memset(&SD->u1.f0.dv1[2949], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2994] = -in11[2];
  memset(&SD->u1.f0.dv1[2995], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[3213] = -1.0;
  memset(&SD->u1.f0.dv1[3214], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3259] = 1.0;
  memset(&SD->u1.f0.dv1[3260], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3305] = -in11[2];
  memset(&SD->u1.f0.dv1[3306], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3351] = -in11[2];
  memset(&SD->u1.f0.dv1[3352], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[3570] = -1.0;
  memset(&SD->u1.f0.dv1[3571], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3616] = 1.0;
  memset(&SD->u1.f0.dv1[3617], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3662] = -in11[2];
  memset(&SD->u1.f0.dv1[3663], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3708] = -in11[2];
  memset(&SD->u1.f0.dv1[3709], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[3927] = -1.0;
  memset(&SD->u1.f0.dv1[3928], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3973] = 1.0;
  memset(&SD->u1.f0.dv1[3974], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4019] = -in11[2];
  memset(&SD->u1.f0.dv1[4020], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4065] = -in11[2];
  memset(&SD->u1.f0.dv1[4066], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[4284] = -1.0;
  memset(&SD->u1.f0.dv1[4285], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4330] = 1.0;
  memset(&SD->u1.f0.dv1[4331], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4376] = -in11[2];
  memset(&SD->u1.f0.dv1[4377], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4422] = -in11[2];
  memset(&SD->u1.f0.dv1[4423], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[4641] = -1.0;
  memset(&SD->u1.f0.dv1[4642], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4687] = 1.0;
  memset(&SD->u1.f0.dv1[4688], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4733] = -in11[2];
  memset(&SD->u1.f0.dv1[4734], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4779] = -in11[2];
  memset(&SD->u1.f0.dv1[4780], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[4998] = -1.0;
  memset(&SD->u1.f0.dv1[4999], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5044] = 1.0;
  memset(&SD->u1.f0.dv1[5045], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5090] = -in11[2];
  memset(&SD->u1.f0.dv1[5091], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5136] = -in11[2];
  memset(&SD->u1.f0.dv1[5137], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[5355] = -1.0;
  memset(&SD->u1.f0.dv1[5356], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5401] = 1.0;
  memset(&SD->u1.f0.dv1[5402], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5447] = -in11[2];
  memset(&SD->u1.f0.dv1[5448], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5493] = -in11[2];
  memset(&SD->u1.f0.dv1[5494], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[5712] = -1.0;
  memset(&SD->u1.f0.dv1[5713], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5758] = 1.0;
  memset(&SD->u1.f0.dv1[5759], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5804] = -in11[2];
  memset(&SD->u1.f0.dv1[5805], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5850] = -in11[2];
  memset(&SD->u1.f0.dv1[5851], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[6069] = -1.0;
  memset(&SD->u1.f0.dv1[6070], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6115] = 1.0;
  memset(&SD->u1.f0.dv1[6116], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6161] = -in11[2];
  memset(&SD->u1.f0.dv1[6162], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6207] = -in11[2];
  memset(&SD->u1.f0.dv1[6208], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[6426] = -1.0;
  memset(&SD->u1.f0.dv1[6427], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6472] = 1.0;
  memset(&SD->u1.f0.dv1[6473], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6518] = -in11[2];
  memset(&SD->u1.f0.dv1[6519], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6564] = -in11[2];
  memset(&SD->u1.f0.dv1[6565], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[6783] = -1.0;
  memset(&SD->u1.f0.dv1[6784], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6829] = 1.0;
  memset(&SD->u1.f0.dv1[6830], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6875] = -in11[2];
  memset(&SD->u1.f0.dv1[6876], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6921] = -in11[2];
  memset(&SD->u1.f0.dv1[6922], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[7140] = -1.0;
  memset(&SD->u1.f0.dv1[7141], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7186] = 1.0;
  memset(&SD->u1.f0.dv1[7187], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7232] = -in11[2];
  memset(&SD->u1.f0.dv1[7233], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7278] = -in11[2];
  memset(&SD->u1.f0.dv1[7279], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[7497] = -1.0;
  memset(&SD->u1.f0.dv1[7498], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7543] = 1.0;
  memset(&SD->u1.f0.dv1[7544], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7589] = -in11[2];
  memset(&SD->u1.f0.dv1[7590], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7635] = -in11[2];
  memset(&SD->u1.f0.dv1[7636], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[7854] = -1.0;
  memset(&SD->u1.f0.dv1[7855], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7900] = 1.0;
  memset(&SD->u1.f0.dv1[7901], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7946] = -in11[2];
  memset(&SD->u1.f0.dv1[7947], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7992] = -in11[2];
  memset(&SD->u1.f0.dv1[7993], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[8211] = -1.0;
  memset(&SD->u1.f0.dv1[8212], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8257] = 1.0;
  memset(&SD->u1.f0.dv1[8258], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8280] = -in11[3];
  memset(&SD->u1.f0.dv1[8281], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8326] = -in11[3];
  memset(&SD->u1.f0.dv1[8327], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[8568] = -1.0;
  memset(&SD->u1.f0.dv1[8569], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8614] = 1.0;
  memset(&SD->u1.f0.dv1[8615], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8637] = -in11[3];
  memset(&SD->u1.f0.dv1[8638], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8683] = -in11[3];
  memset(&SD->u1.f0.dv1[8684], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[8925] = -1.0;
  memset(&SD->u1.f0.dv1[8926], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8971] = 1.0;
  memset(&SD->u1.f0.dv1[8972], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8994] = -in11[3];
  memset(&SD->u1.f0.dv1[8995], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9040] = -in11[3];
  memset(&SD->u1.f0.dv1[9041], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[9282] = -1.0;
  memset(&SD->u1.f0.dv1[9283], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9328] = 1.0;
  memset(&SD->u1.f0.dv1[9329], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9351] = -in11[3];
  memset(&SD->u1.f0.dv1[9352], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9397] = -in11[3];
  memset(&SD->u1.f0.dv1[9398], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[9639] = -1.0;
  memset(&SD->u1.f0.dv1[9640], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9685] = 1.0;
  memset(&SD->u1.f0.dv1[9686], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9708] = -in11[3];
  memset(&SD->u1.f0.dv1[9709], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9754] = -in11[3];
  memset(&SD->u1.f0.dv1[9755], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[9996] = -1.0;
  memset(&SD->u1.f0.dv1[9997], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10042] = 1.0;
  memset(&SD->u1.f0.dv1[10043], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10065] = -in11[3];
  memset(&SD->u1.f0.dv1[10066], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10111] = -in11[3];
  memset(&SD->u1.f0.dv1[10112], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[10353] = -1.0;
  memset(&SD->u1.f0.dv1[10354], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10399] = 1.0;
  memset(&SD->u1.f0.dv1[10400], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10422] = -in11[3];
  memset(&SD->u1.f0.dv1[10423], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10468] = -in11[3];
  memset(&SD->u1.f0.dv1[10469], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[10710] = -1.0;
  memset(&SD->u1.f0.dv1[10711], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10756] = 1.0;
  memset(&SD->u1.f0.dv1[10757], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10779] = -in11[3];
  memset(&SD->u1.f0.dv1[10780], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10825] = -in11[3];
  memset(&SD->u1.f0.dv1[10826], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[11067] = -1.0;
  memset(&SD->u1.f0.dv1[11068], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11113] = 1.0;
  memset(&SD->u1.f0.dv1[11114], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11136] = -in11[3];
  memset(&SD->u1.f0.dv1[11137], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11182] = -in11[3];
  memset(&SD->u1.f0.dv1[11183], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[11424] = -1.0;
  memset(&SD->u1.f0.dv1[11425], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11470] = 1.0;
  memset(&SD->u1.f0.dv1[11471], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11493] = -in11[3];
  memset(&SD->u1.f0.dv1[11494], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11539] = -in11[3];
  memset(&SD->u1.f0.dv1[11540], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[11781] = -1.0;
  memset(&SD->u1.f0.dv1[11782], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11827] = 1.0;
  memset(&SD->u1.f0.dv1[11828], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11850] = -in11[3];
  memset(&SD->u1.f0.dv1[11851], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11896] = -in11[3];
  memset(&SD->u1.f0.dv1[11897], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[12138] = -1.0;
  memset(&SD->u1.f0.dv1[12139], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12184] = 1.0;
  memset(&SD->u1.f0.dv1[12185], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12207] = -in11[3];
  memset(&SD->u1.f0.dv1[12208], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12253] = -in11[3];
  memset(&SD->u1.f0.dv1[12254], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[12495] = -1.0;
  memset(&SD->u1.f0.dv1[12496], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12541] = 1.0;
  memset(&SD->u1.f0.dv1[12542], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12564] = -in11[3];
  memset(&SD->u1.f0.dv1[12565], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12610] = -in11[3];
  memset(&SD->u1.f0.dv1[12611], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[12852] = -1.0;
  memset(&SD->u1.f0.dv1[12853], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12898] = 1.0;
  memset(&SD->u1.f0.dv1[12899], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12921] = -in11[3];
  memset(&SD->u1.f0.dv1[12922], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12967] = -in11[3];
  memset(&SD->u1.f0.dv1[12968], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[13209] = -1.0;
  memset(&SD->u1.f0.dv1[13210], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13255] = 1.0;
  memset(&SD->u1.f0.dv1[13256], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13278] = -in11[3];
  memset(&SD->u1.f0.dv1[13279], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13324] = -in11[3];
  memset(&SD->u1.f0.dv1[13325], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[13566] = -1.0;
  memset(&SD->u1.f0.dv1[13567], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13612] = 1.0;
  memset(&SD->u1.f0.dv1[13613], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13635] = -in11[3];
  memset(&SD->u1.f0.dv1[13636], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13681] = -in11[3];
  memset(&SD->u1.f0.dv1[13682], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[13923] = -1.0;
  memset(&SD->u1.f0.dv1[13924], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13969] = 1.0;
  memset(&SD->u1.f0.dv1[13970], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13992] = -in11[3];
  memset(&SD->u1.f0.dv1[13993], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14038] = -in11[3];
  memset(&SD->u1.f0.dv1[14039], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[14280] = -1.0;
  memset(&SD->u1.f0.dv1[14281], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14326] = 1.0;
  memset(&SD->u1.f0.dv1[14327], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14349] = -in11[3];
  memset(&SD->u1.f0.dv1[14350], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14395] = -in11[3];
  memset(&SD->u1.f0.dv1[14396], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[14637] = -1.0;
  memset(&SD->u1.f0.dv1[14638], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14683] = 1.0;
  memset(&SD->u1.f0.dv1[14684], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14706] = -in11[3];
  memset(&SD->u1.f0.dv1[14707], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14752] = -in11[3];
  memset(&SD->u1.f0.dv1[14753], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[14994] = -1.0;
  memset(&SD->u1.f0.dv1[14995], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15040] = 1.0;
  memset(&SD->u1.f0.dv1[15041], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15063] = -in11[3];
  memset(&SD->u1.f0.dv1[15064], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15109] = -in11[3];
  memset(&SD->u1.f0.dv1[15110], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[15351] = -1.0;
  memset(&SD->u1.f0.dv1[15352], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15397] = 1.0;
  memset(&SD->u1.f0.dv1[15398], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15420] = -in11[3];
  memset(&SD->u1.f0.dv1[15421], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15466] = -in11[3];
  memset(&SD->u1.f0.dv1[15467], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[15708] = -1.0;
  memset(&SD->u1.f0.dv1[15709], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15754] = 1.0;
  memset(&SD->u1.f0.dv1[15755], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15777] = -in11[3];
  memset(&SD->u1.f0.dv1[15778], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15823] = -in11[3];
  memset(&SD->u1.f0.dv1[15824], 0, 241U * sizeof(real_T));
  SD->u1.f0.dv1[16065] = -1.0;
  memset(&SD->u1.f0.dv1[16066], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16111] = 1.0;
  memset(&SD->u1.f0.dv1[16112], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16134] = -in11[3];
  memset(&SD->u1.f0.dv1[16135], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16180] = -in11[3];
  memset(&SD->u1.f0.dv1[16181], 0, 195U * sizeof(real_T));
  SD->u1.f0.dv1[16376] = 1.0;
  memset(&SD->u1.f0.dv1[16377], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16422] = -1.0;
  memset(&SD->u1.f0.dv1[16423], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[16537] = 1.0;
  SD->u1.f0.dv1[16538] = 0.0;
  SD->u1.f0.dv1[16539] = 0.0;
  SD->u1.f0.dv1[16540] = 0.0;
  SD->u1.f0.dv1[16541] = -1.0;
  memset(&SD->u1.f0.dv1[16542], 0, 13U * sizeof(real_T));
  SD->u1.f0.dv1[16555] = 1.0;
  memset(&SD->u1.f0.dv1[16556], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16601] = -1.0;
  memset(&SD->u1.f0.dv1[16602], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[16716] = 1.0;
  SD->u1.f0.dv1[16717] = 0.0;
  SD->u1.f0.dv1[16718] = 0.0;
  SD->u1.f0.dv1[16719] = 0.0;
  SD->u1.f0.dv1[16720] = -1.0;
  memset(&SD->u1.f0.dv1[16721], 0, 13U * sizeof(real_T));
  SD->u1.f0.dv1[16734] = 1.0;
  memset(&SD->u1.f0.dv1[16735], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16780] = -1.0;
  memset(&SD->u1.f0.dv1[16781], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[16895] = 1.0;
  SD->u1.f0.dv1[16896] = 0.0;
  SD->u1.f0.dv1[16897] = 0.0;
  SD->u1.f0.dv1[16898] = 0.0;
  SD->u1.f0.dv1[16899] = -1.0;
  memset(&SD->u1.f0.dv1[16900], 0, 13U * sizeof(real_T));
  SD->u1.f0.dv1[16913] = 1.0;
  memset(&SD->u1.f0.dv1[16914], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16959] = -1.0;
  memset(&SD->u1.f0.dv1[16960], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17074] = 1.0;
  SD->u1.f0.dv1[17075] = 0.0;
  SD->u1.f0.dv1[17076] = 0.0;
  SD->u1.f0.dv1[17077] = 0.0;
  SD->u1.f0.dv1[17078] = -1.0;
  memset(&SD->u1.f0.dv1[17079], 0, 13U * sizeof(real_T));
  SD->u1.f0.dv1[17092] = 1.0;
  memset(&SD->u1.f0.dv1[17093], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17138] = -1.0;
  memset(&SD->u1.f0.dv1[17139], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[17271] = 1.0;
  memset(&SD->u1.f0.dv1[17272], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17317] = -1.0;
  memset(&SD->u1.f0.dv1[17318], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[17450] = 1.0;
  memset(&SD->u1.f0.dv1[17451], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17496] = -1.0;
  memset(&SD->u1.f0.dv1[17497], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[17629] = 1.0;
  memset(&SD->u1.f0.dv1[17630], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17675] = -1.0;
  memset(&SD->u1.f0.dv1[17676], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[17808] = 1.0;
  memset(&SD->u1.f0.dv1[17809], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17854] = -1.0;
  memset(&SD->u1.f0.dv1[17855], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[17987] = 1.0;
  memset(&SD->u1.f0.dv1[17988], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18033] = -1.0;
  memset(&SD->u1.f0.dv1[18034], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[18166] = 1.0;
  memset(&SD->u1.f0.dv1[18167], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18212] = -1.0;
  memset(&SD->u1.f0.dv1[18213], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[18345] = 1.0;
  memset(&SD->u1.f0.dv1[18346], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18391] = -1.0;
  memset(&SD->u1.f0.dv1[18392], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[18524] = 1.0;
  memset(&SD->u1.f0.dv1[18525], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18570] = -1.0;
  memset(&SD->u1.f0.dv1[18571], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[18703] = 1.0;
  memset(&SD->u1.f0.dv1[18704], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18749] = -1.0;
  memset(&SD->u1.f0.dv1[18750], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[18882] = 1.0;
  memset(&SD->u1.f0.dv1[18883], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18928] = -1.0;
  memset(&SD->u1.f0.dv1[18929], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[19061] = 1.0;
  memset(&SD->u1.f0.dv1[19062], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19107] = -1.0;
  memset(&SD->u1.f0.dv1[19108], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[19240] = 1.0;
  memset(&SD->u1.f0.dv1[19241], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19286] = -1.0;
  memset(&SD->u1.f0.dv1[19287], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[19419] = 1.0;
  memset(&SD->u1.f0.dv1[19420], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19465] = -1.0;
  memset(&SD->u1.f0.dv1[19466], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[19598] = 1.0;
  memset(&SD->u1.f0.dv1[19599], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19644] = -1.0;
  memset(&SD->u1.f0.dv1[19645], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[19777] = 1.0;
  memset(&SD->u1.f0.dv1[19778], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19823] = -1.0;
  memset(&SD->u1.f0.dv1[19824], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[19956] = 1.0;
  memset(&SD->u1.f0.dv1[19957], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20002] = -1.0;
  memset(&SD->u1.f0.dv1[20003], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[20135] = 1.0;
  memset(&SD->u1.f0.dv1[20136], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20181] = -1.0;
  memset(&SD->u1.f0.dv1[20182], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[20314] = 1.0;
  memset(&SD->u1.f0.dv1[20315], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20360] = -1.0;
  memset(&SD->u1.f0.dv1[20361], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[20493] = 1.0;
  memset(&SD->u1.f0.dv1[20494], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20539] = -1.0;
  memset(&SD->u1.f0.dv1[20540], 0, 99U * sizeof(real_T));
  SD->u1.f0.dv1[20639] = 1.0;
  SD->u1.f0.dv1[20640] = 0.0;
  SD->u1.f0.dv1[20641] = 0.0;
  SD->u1.f0.dv1[20642] = 0.0;
  SD->u1.f0.dv1[20643] = -1.0;
  memset(&SD->u1.f0.dv1[20644], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[20672] = 1.0;
  memset(&SD->u1.f0.dv1[20673], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20718] = -1.0;
  memset(&SD->u1.f0.dv1[20719], 0, 99U * sizeof(real_T));
  SD->u1.f0.dv1[20818] = 1.0;
  SD->u1.f0.dv1[20819] = 0.0;
  SD->u1.f0.dv1[20820] = 0.0;
  SD->u1.f0.dv1[20821] = 0.0;
  SD->u1.f0.dv1[20822] = -1.0;
  memset(&SD->u1.f0.dv1[20823], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[20851] = 1.0;
  memset(&SD->u1.f0.dv1[20852], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20897] = -1.0;
  memset(&SD->u1.f0.dv1[20898], 0, 99U * sizeof(real_T));
  SD->u1.f0.dv1[20997] = 1.0;
  SD->u1.f0.dv1[20998] = 0.0;
  SD->u1.f0.dv1[20999] = 0.0;
  SD->u1.f0.dv1[21000] = 0.0;
  SD->u1.f0.dv1[21001] = -1.0;
  memset(&SD->u1.f0.dv1[21002], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[21030] = 1.0;
  memset(&SD->u1.f0.dv1[21031], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21076] = -1.0;
  memset(&SD->u1.f0.dv1[21077], 0, 99U * sizeof(real_T));
  SD->u1.f0.dv1[21176] = 1.0;
  SD->u1.f0.dv1[21177] = 0.0;
  SD->u1.f0.dv1[21178] = 0.0;
  SD->u1.f0.dv1[21179] = 0.0;
  SD->u1.f0.dv1[21180] = -1.0;
  memset(&SD->u1.f0.dv1[21181], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[21209] = 1.0;
  memset(&SD->u1.f0.dv1[21210], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21255] = -1.0;
  memset(&SD->u1.f0.dv1[21256], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[21388] = 1.0;
  memset(&SD->u1.f0.dv1[21389], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21434] = -1.0;
  memset(&SD->u1.f0.dv1[21435], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[21567] = 1.0;
  memset(&SD->u1.f0.dv1[21568], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21613] = -1.0;
  memset(&SD->u1.f0.dv1[21614], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[21746] = 1.0;
  memset(&SD->u1.f0.dv1[21747], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21792] = -1.0;
  memset(&SD->u1.f0.dv1[21793], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[21925] = 1.0;
  memset(&SD->u1.f0.dv1[21926], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21971] = -1.0;
  memset(&SD->u1.f0.dv1[21972], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[22104] = 1.0;
  memset(&SD->u1.f0.dv1[22105], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22150] = -1.0;
  memset(&SD->u1.f0.dv1[22151], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[22283] = 1.0;
  memset(&SD->u1.f0.dv1[22284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22329] = -1.0;
  memset(&SD->u1.f0.dv1[22330], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[22462] = 1.0;
  memset(&SD->u1.f0.dv1[22463], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22508] = -1.0;
  memset(&SD->u1.f0.dv1[22509], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[22641] = 1.0;
  memset(&SD->u1.f0.dv1[22642], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22687] = -1.0;
  memset(&SD->u1.f0.dv1[22688], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[22820] = 1.0;
  memset(&SD->u1.f0.dv1[22821], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22866] = -1.0;
  memset(&SD->u1.f0.dv1[22867], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[22999] = 1.0;
  memset(&SD->u1.f0.dv1[23000], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23045] = -1.0;
  memset(&SD->u1.f0.dv1[23046], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[23178] = 1.0;
  memset(&SD->u1.f0.dv1[23179], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23224] = -1.0;
  memset(&SD->u1.f0.dv1[23225], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[23357] = 1.0;
  memset(&SD->u1.f0.dv1[23358], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23403] = -1.0;
  memset(&SD->u1.f0.dv1[23404], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[23536] = 1.0;
  memset(&SD->u1.f0.dv1[23537], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23582] = -1.0;
  memset(&SD->u1.f0.dv1[23583], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[23715] = 1.0;
  memset(&SD->u1.f0.dv1[23716], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23761] = -1.0;
  memset(&SD->u1.f0.dv1[23762], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[23894] = 1.0;
  memset(&SD->u1.f0.dv1[23895], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23940] = -1.0;
  memset(&SD->u1.f0.dv1[23941], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[24073] = 1.0;
  memset(&SD->u1.f0.dv1[24074], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24119] = -1.0;
  memset(&SD->u1.f0.dv1[24120], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[24252] = 1.0;
  memset(&SD->u1.f0.dv1[24253], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24298] = -1.0;
  memset(&SD->u1.f0.dv1[24299], 0, 132U * sizeof(real_T));
  SD->u1.f0.dv1[24431] = 1.0;
  memset(&SD->u1.f0.dv1[24432], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24477] = -1.0;
  memset(&SD->u1.f0.dv1[24478], 0, 975U * sizeof(real_T));
  SD->u1.f0.dv1[25453] = 1.0;
  memset(&SD->u1.f0.dv1[25454], 0, 649U * sizeof(real_T));
  SD->u1.f0.dv1[26103] = -1.0;
  memset(&SD->u1.f0.dv1[26104], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26126] = -1.0;
  memset(&SD->u1.f0.dv1[26127], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[26282] = -1.0;
  memset(&SD->u1.f0.dv1[26283], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26305] = -1.0;
  memset(&SD->u1.f0.dv1[26306], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[26461] = -1.0;
  memset(&SD->u1.f0.dv1[26462], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26484] = -1.0;
  memset(&SD->u1.f0.dv1[26485], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[26640] = -1.0;
  memset(&SD->u1.f0.dv1[26641], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26663] = -1.0;
  memset(&SD->u1.f0.dv1[26664], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[26819] = -1.0;
  memset(&SD->u1.f0.dv1[26820], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26842] = -1.0;
  memset(&SD->u1.f0.dv1[26843], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[26998] = -1.0;
  memset(&SD->u1.f0.dv1[26999], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27021] = -1.0;
  memset(&SD->u1.f0.dv1[27022], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[27177] = -1.0;
  memset(&SD->u1.f0.dv1[27178], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27200] = -1.0;
  memset(&SD->u1.f0.dv1[27201], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[27356] = -1.0;
  memset(&SD->u1.f0.dv1[27357], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27379] = -1.0;
  memset(&SD->u1.f0.dv1[27380], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[27535] = -1.0;
  memset(&SD->u1.f0.dv1[27536], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27558] = -1.0;
  memset(&SD->u1.f0.dv1[27559], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[27714] = -1.0;
  memset(&SD->u1.f0.dv1[27715], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27737] = -1.0;
  memset(&SD->u1.f0.dv1[27738], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[27893] = -1.0;
  memset(&SD->u1.f0.dv1[27894], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27916] = -1.0;
  memset(&SD->u1.f0.dv1[27917], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[28072] = -1.0;
  memset(&SD->u1.f0.dv1[28073], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28095] = -1.0;
  memset(&SD->u1.f0.dv1[28096], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[28251] = -1.0;
  memset(&SD->u1.f0.dv1[28252], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28274] = -1.0;
  memset(&SD->u1.f0.dv1[28275], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[28430] = -1.0;
  memset(&SD->u1.f0.dv1[28431], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28453] = -1.0;
  memset(&SD->u1.f0.dv1[28454], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[28609] = -1.0;
  memset(&SD->u1.f0.dv1[28610], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28632] = -1.0;
  memset(&SD->u1.f0.dv1[28633], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[28788] = -1.0;
  memset(&SD->u1.f0.dv1[28789], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28811] = -1.0;
  memset(&SD->u1.f0.dv1[28812], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[28967] = -1.0;
  memset(&SD->u1.f0.dv1[28968], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28990] = -1.0;
  memset(&SD->u1.f0.dv1[28991], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[29146] = -1.0;
  memset(&SD->u1.f0.dv1[29147], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29169] = -1.0;
  memset(&SD->u1.f0.dv1[29170], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[29325] = -1.0;
  memset(&SD->u1.f0.dv1[29326], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29348] = -1.0;
  memset(&SD->u1.f0.dv1[29349], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[29504] = -1.0;
  memset(&SD->u1.f0.dv1[29505], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29527] = -1.0;
  memset(&SD->u1.f0.dv1[29528], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[29683] = -1.0;
  memset(&SD->u1.f0.dv1[29684], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29706] = -1.0;
  memset(&SD->u1.f0.dv1[29707], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[29862] = -1.0;
  memset(&SD->u1.f0.dv1[29863], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29885] = -1.0;
  memset(&SD->u1.f0.dv1[29886], 0, 155U * sizeof(real_T));
  SD->u1.f0.dv1[30041] = -1.0;
  memset(&SD->u1.f0.dv1[30042], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30064] = -1.0;
  memset(&SD->u1.f0.dv1[30065], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[30259] = -1.0;
  memset(&SD->u1.f0.dv1[30260], 0, 4077U * sizeof(real_T));
  SD->u1.f0.dv1[34337] = -1.0;
  SD->u1.f0.dv1[34338] = 0.0;
  SD->u1.f0.dv1[34339] = 0.0;
  SD->u1.f0.dv1[34340] = 0.0;
  SD->u1.f0.dv1[34341] = -1.0;
  memset(&SD->u1.f0.dv1[34342], 0, 174U * sizeof(real_T));
  SD->u1.f0.dv1[34516] = -1.0;
  SD->u1.f0.dv1[34517] = 0.0;
  SD->u1.f0.dv1[34518] = 0.0;
  SD->u1.f0.dv1[34519] = 0.0;
  SD->u1.f0.dv1[34520] = -1.0;
  memset(&SD->u1.f0.dv1[34521], 0, 174U * sizeof(real_T));
  SD->u1.f0.dv1[34695] = -1.0;
  SD->u1.f0.dv1[34696] = 0.0;
  SD->u1.f0.dv1[34697] = 0.0;
  SD->u1.f0.dv1[34698] = 0.0;
  SD->u1.f0.dv1[34699] = -1.0;
  memset(&SD->u1.f0.dv1[34700], 0, 174U * sizeof(real_T));
  SD->u1.f0.dv1[34874] = -1.0;
  SD->u1.f0.dv1[34875] = 0.0;
  SD->u1.f0.dv1[34876] = 0.0;
  SD->u1.f0.dv1[34877] = 0.0;
  SD->u1.f0.dv1[34878] = -1.0;
  memset(&SD->u1.f0.dv1[34879], 0, 1246U * sizeof(real_T));
  SD->u1.f0.dv1[36125] = -1.0;
  SD->u1.f0.dv1[36126] = 0.0;
  SD->u1.f0.dv1[36127] = 0.0;
  SD->u1.f0.dv1[36128] = 0.0;
  SD->u1.f0.dv1[36129] = -1.0;
  memset(&SD->u1.f0.dv1[36130], 0, 174U * sizeof(real_T));
  SD->u1.f0.dv1[36304] = -1.0;
  SD->u1.f0.dv1[36305] = 0.0;
  SD->u1.f0.dv1[36306] = 0.0;
  SD->u1.f0.dv1[36307] = 0.0;
  SD->u1.f0.dv1[36308] = -1.0;
  memset(&SD->u1.f0.dv1[36309], 0, 174U * sizeof(real_T));
  SD->u1.f0.dv1[36483] = -1.0;
  SD->u1.f0.dv1[36484] = 0.0;
  SD->u1.f0.dv1[36485] = 0.0;
  SD->u1.f0.dv1[36486] = 0.0;
  SD->u1.f0.dv1[36487] = -1.0;
  memset(&SD->u1.f0.dv1[36488], 0, 174U * sizeof(real_T));
  SD->u1.f0.dv1[36662] = -1.0;
  SD->u1.f0.dv1[36663] = 0.0;
  SD->u1.f0.dv1[36664] = 0.0;
  SD->u1.f0.dv1[36665] = 0.0;
  SD->u1.f0.dv1[36666] = -1.0;
  memset(&SD->u1.f0.dv1[36667], 0, 2493U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 178], &SD->u1.f0.dv1[i1 * 178], 178U * sizeof(real_T));
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
  biq[165] = t9;
  biq[166] = t9;
  biq[167] = t9;
  biq[168] = t9;
  biq[169] = t10;
  biq[170] = t10;
  biq[171] = t10;
  biq[172] = t10;
  biq[173] = t11;
  biq[174] = t11;
  biq[175] = t11;
  biq[176] = t11;
  biq[177] = -in9[1];
}

/* End of code generation (IqFast_LeftStart6V40.cpp) */
