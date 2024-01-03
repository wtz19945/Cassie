/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart0V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart0V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step0.h"
#include "IqFast_LeftStart0V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart0V40(Fast_MPCV40_form_Step0StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[44440], real_T biq[202])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART0V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART0V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:13:21 */
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
  memset(&SD->u1.f0.dv1[139], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[405] = -1.0;
  memset(&SD->u1.f0.dv1[406], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[451] = 1.0;
  memset(&SD->u1.f0.dv1[452], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[497] = -in11[2];
  memset(&SD->u1.f0.dv1[498], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[543] = -in11[2];
  memset(&SD->u1.f0.dv1[544], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[810] = -1.0;
  memset(&SD->u1.f0.dv1[811], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[856] = 1.0;
  memset(&SD->u1.f0.dv1[857], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[902] = -in11[2];
  memset(&SD->u1.f0.dv1[903], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[948] = -in11[2];
  memset(&SD->u1.f0.dv1[949], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[1215] = -1.0;
  memset(&SD->u1.f0.dv1[1216], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1261] = 1.0;
  memset(&SD->u1.f0.dv1[1262], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1307] = -in11[2];
  memset(&SD->u1.f0.dv1[1308], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1353] = -in11[2];
  memset(&SD->u1.f0.dv1[1354], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[1620] = -1.0;
  memset(&SD->u1.f0.dv1[1621], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1666] = 1.0;
  memset(&SD->u1.f0.dv1[1667], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1712] = -in11[2];
  memset(&SD->u1.f0.dv1[1713], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1758] = -in11[2];
  memset(&SD->u1.f0.dv1[1759], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[2025] = -1.0;
  memset(&SD->u1.f0.dv1[2026], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2071] = 1.0;
  memset(&SD->u1.f0.dv1[2072], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2117] = -in11[2];
  memset(&SD->u1.f0.dv1[2118], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2163] = -in11[2];
  memset(&SD->u1.f0.dv1[2164], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[2430] = -1.0;
  memset(&SD->u1.f0.dv1[2431], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2476] = 1.0;
  memset(&SD->u1.f0.dv1[2477], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2522] = -in11[2];
  memset(&SD->u1.f0.dv1[2523], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2568] = -in11[2];
  memset(&SD->u1.f0.dv1[2569], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[2835] = -1.0;
  memset(&SD->u1.f0.dv1[2836], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2881] = 1.0;
  memset(&SD->u1.f0.dv1[2882], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2927] = -in11[2];
  memset(&SD->u1.f0.dv1[2928], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2973] = -in11[2];
  memset(&SD->u1.f0.dv1[2974], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[3240] = -1.0;
  memset(&SD->u1.f0.dv1[3241], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3286] = 1.0;
  memset(&SD->u1.f0.dv1[3287], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3332] = -in11[2];
  memset(&SD->u1.f0.dv1[3333], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3378] = -in11[2];
  memset(&SD->u1.f0.dv1[3379], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[3645] = -1.0;
  memset(&SD->u1.f0.dv1[3646], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3691] = 1.0;
  memset(&SD->u1.f0.dv1[3692], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3737] = -in11[2];
  memset(&SD->u1.f0.dv1[3738], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3783] = -in11[2];
  memset(&SD->u1.f0.dv1[3784], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[4050] = -1.0;
  memset(&SD->u1.f0.dv1[4051], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4096] = 1.0;
  memset(&SD->u1.f0.dv1[4097], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4142] = -in11[2];
  memset(&SD->u1.f0.dv1[4143], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4188] = -in11[2];
  memset(&SD->u1.f0.dv1[4189], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[4455] = -1.0;
  memset(&SD->u1.f0.dv1[4456], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4501] = 1.0;
  memset(&SD->u1.f0.dv1[4502], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4547] = -in11[2];
  memset(&SD->u1.f0.dv1[4548], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4593] = -in11[2];
  memset(&SD->u1.f0.dv1[4594], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[4860] = -1.0;
  memset(&SD->u1.f0.dv1[4861], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4906] = 1.0;
  memset(&SD->u1.f0.dv1[4907], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4952] = -in11[2];
  memset(&SD->u1.f0.dv1[4953], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4998] = -in11[2];
  memset(&SD->u1.f0.dv1[4999], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[5265] = -1.0;
  memset(&SD->u1.f0.dv1[5266], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5311] = 1.0;
  memset(&SD->u1.f0.dv1[5312], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5357] = -in11[2];
  memset(&SD->u1.f0.dv1[5358], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5403] = -in11[2];
  memset(&SD->u1.f0.dv1[5404], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[5670] = -1.0;
  memset(&SD->u1.f0.dv1[5671], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5716] = 1.0;
  memset(&SD->u1.f0.dv1[5717], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5762] = -in11[2];
  memset(&SD->u1.f0.dv1[5763], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5808] = -in11[2];
  memset(&SD->u1.f0.dv1[5809], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[6075] = -1.0;
  memset(&SD->u1.f0.dv1[6076], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6121] = 1.0;
  memset(&SD->u1.f0.dv1[6122], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6167] = -in11[2];
  memset(&SD->u1.f0.dv1[6168], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6213] = -in11[2];
  memset(&SD->u1.f0.dv1[6214], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[6480] = -1.0;
  memset(&SD->u1.f0.dv1[6481], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6526] = 1.0;
  memset(&SD->u1.f0.dv1[6527], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6572] = -in11[2];
  memset(&SD->u1.f0.dv1[6573], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6618] = -in11[2];
  memset(&SD->u1.f0.dv1[6619], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[6885] = -1.0;
  memset(&SD->u1.f0.dv1[6886], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6931] = 1.0;
  memset(&SD->u1.f0.dv1[6932], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6977] = -in11[2];
  memset(&SD->u1.f0.dv1[6978], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7023] = -in11[2];
  memset(&SD->u1.f0.dv1[7024], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[7290] = -1.0;
  memset(&SD->u1.f0.dv1[7291], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7336] = 1.0;
  memset(&SD->u1.f0.dv1[7337], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7382] = -in11[2];
  memset(&SD->u1.f0.dv1[7383], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7428] = -in11[2];
  memset(&SD->u1.f0.dv1[7429], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[7695] = -1.0;
  memset(&SD->u1.f0.dv1[7696], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7741] = 1.0;
  memset(&SD->u1.f0.dv1[7742], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7787] = -in11[2];
  memset(&SD->u1.f0.dv1[7788], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7833] = -in11[2];
  memset(&SD->u1.f0.dv1[7834], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[8100] = -1.0;
  memset(&SD->u1.f0.dv1[8101], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8146] = 1.0;
  memset(&SD->u1.f0.dv1[8147], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8192] = -in11[2];
  memset(&SD->u1.f0.dv1[8193], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8238] = -in11[2];
  memset(&SD->u1.f0.dv1[8239], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[8505] = -1.0;
  memset(&SD->u1.f0.dv1[8506], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8551] = 1.0;
  memset(&SD->u1.f0.dv1[8552], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8597] = -in11[2];
  memset(&SD->u1.f0.dv1[8598], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8643] = -in11[2];
  memset(&SD->u1.f0.dv1[8644], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[8910] = -1.0;
  memset(&SD->u1.f0.dv1[8911], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8956] = 1.0;
  memset(&SD->u1.f0.dv1[8957], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9002] = -in11[2];
  memset(&SD->u1.f0.dv1[9003], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9048] = -in11[2];
  memset(&SD->u1.f0.dv1[9049], 0, 266U * sizeof(real_T));
  SD->u1.f0.dv1[9315] = -1.0;
  memset(&SD->u1.f0.dv1[9316], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9361] = 1.0;
  memset(&SD->u1.f0.dv1[9362], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9384] = -in11[3];
  memset(&SD->u1.f0.dv1[9385], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9430] = -in11[3];
  memset(&SD->u1.f0.dv1[9431], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[9720] = -1.0;
  memset(&SD->u1.f0.dv1[9721], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9766] = 1.0;
  memset(&SD->u1.f0.dv1[9767], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9789] = -in11[3];
  memset(&SD->u1.f0.dv1[9790], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9835] = -in11[3];
  memset(&SD->u1.f0.dv1[9836], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[10125] = -1.0;
  memset(&SD->u1.f0.dv1[10126], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10171] = 1.0;
  memset(&SD->u1.f0.dv1[10172], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10194] = -in11[3];
  memset(&SD->u1.f0.dv1[10195], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10240] = -in11[3];
  memset(&SD->u1.f0.dv1[10241], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[10530] = -1.0;
  memset(&SD->u1.f0.dv1[10531], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10576] = 1.0;
  memset(&SD->u1.f0.dv1[10577], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10599] = -in11[3];
  memset(&SD->u1.f0.dv1[10600], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10645] = -in11[3];
  memset(&SD->u1.f0.dv1[10646], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[10935] = -1.0;
  memset(&SD->u1.f0.dv1[10936], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10981] = 1.0;
  memset(&SD->u1.f0.dv1[10982], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11004] = -in11[3];
  memset(&SD->u1.f0.dv1[11005], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11050] = -in11[3];
  memset(&SD->u1.f0.dv1[11051], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[11340] = -1.0;
  memset(&SD->u1.f0.dv1[11341], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11386] = 1.0;
  memset(&SD->u1.f0.dv1[11387], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11409] = -in11[3];
  memset(&SD->u1.f0.dv1[11410], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11455] = -in11[3];
  memset(&SD->u1.f0.dv1[11456], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[11745] = -1.0;
  memset(&SD->u1.f0.dv1[11746], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11791] = 1.0;
  memset(&SD->u1.f0.dv1[11792], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11814] = -in11[3];
  memset(&SD->u1.f0.dv1[11815], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11860] = -in11[3];
  memset(&SD->u1.f0.dv1[11861], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[12150] = -1.0;
  memset(&SD->u1.f0.dv1[12151], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12196] = 1.0;
  memset(&SD->u1.f0.dv1[12197], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12219] = -in11[3];
  memset(&SD->u1.f0.dv1[12220], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12265] = -in11[3];
  memset(&SD->u1.f0.dv1[12266], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[12555] = -1.0;
  memset(&SD->u1.f0.dv1[12556], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12601] = 1.0;
  memset(&SD->u1.f0.dv1[12602], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12624] = -in11[3];
  memset(&SD->u1.f0.dv1[12625], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12670] = -in11[3];
  memset(&SD->u1.f0.dv1[12671], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[12960] = -1.0;
  memset(&SD->u1.f0.dv1[12961], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13006] = 1.0;
  memset(&SD->u1.f0.dv1[13007], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13029] = -in11[3];
  memset(&SD->u1.f0.dv1[13030], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13075] = -in11[3];
  memset(&SD->u1.f0.dv1[13076], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[13365] = -1.0;
  memset(&SD->u1.f0.dv1[13366], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13411] = 1.0;
  memset(&SD->u1.f0.dv1[13412], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13434] = -in11[3];
  memset(&SD->u1.f0.dv1[13435], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13480] = -in11[3];
  memset(&SD->u1.f0.dv1[13481], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[13770] = -1.0;
  memset(&SD->u1.f0.dv1[13771], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13816] = 1.0;
  memset(&SD->u1.f0.dv1[13817], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13839] = -in11[3];
  memset(&SD->u1.f0.dv1[13840], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13885] = -in11[3];
  memset(&SD->u1.f0.dv1[13886], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[14175] = -1.0;
  memset(&SD->u1.f0.dv1[14176], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14221] = 1.0;
  memset(&SD->u1.f0.dv1[14222], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14244] = -in11[3];
  memset(&SD->u1.f0.dv1[14245], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14290] = -in11[3];
  memset(&SD->u1.f0.dv1[14291], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[14580] = -1.0;
  memset(&SD->u1.f0.dv1[14581], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14626] = 1.0;
  memset(&SD->u1.f0.dv1[14627], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14649] = -in11[3];
  memset(&SD->u1.f0.dv1[14650], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14695] = -in11[3];
  memset(&SD->u1.f0.dv1[14696], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[14985] = -1.0;
  memset(&SD->u1.f0.dv1[14986], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15031] = 1.0;
  memset(&SD->u1.f0.dv1[15032], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15054] = -in11[3];
  memset(&SD->u1.f0.dv1[15055], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15100] = -in11[3];
  memset(&SD->u1.f0.dv1[15101], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[15390] = -1.0;
  memset(&SD->u1.f0.dv1[15391], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15436] = 1.0;
  memset(&SD->u1.f0.dv1[15437], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15459] = -in11[3];
  memset(&SD->u1.f0.dv1[15460], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15505] = -in11[3];
  memset(&SD->u1.f0.dv1[15506], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[15795] = -1.0;
  memset(&SD->u1.f0.dv1[15796], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15841] = 1.0;
  memset(&SD->u1.f0.dv1[15842], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15864] = -in11[3];
  memset(&SD->u1.f0.dv1[15865], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15910] = -in11[3];
  memset(&SD->u1.f0.dv1[15911], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[16200] = -1.0;
  memset(&SD->u1.f0.dv1[16201], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16246] = 1.0;
  memset(&SD->u1.f0.dv1[16247], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16269] = -in11[3];
  memset(&SD->u1.f0.dv1[16270], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16315] = -in11[3];
  memset(&SD->u1.f0.dv1[16316], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[16605] = -1.0;
  memset(&SD->u1.f0.dv1[16606], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16651] = 1.0;
  memset(&SD->u1.f0.dv1[16652], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16674] = -in11[3];
  memset(&SD->u1.f0.dv1[16675], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16720] = -in11[3];
  memset(&SD->u1.f0.dv1[16721], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[17010] = -1.0;
  memset(&SD->u1.f0.dv1[17011], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17056] = 1.0;
  memset(&SD->u1.f0.dv1[17057], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17079] = -in11[3];
  memset(&SD->u1.f0.dv1[17080], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17125] = -in11[3];
  memset(&SD->u1.f0.dv1[17126], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[17415] = -1.0;
  memset(&SD->u1.f0.dv1[17416], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17461] = 1.0;
  memset(&SD->u1.f0.dv1[17462], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17484] = -in11[3];
  memset(&SD->u1.f0.dv1[17485], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17530] = -in11[3];
  memset(&SD->u1.f0.dv1[17531], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[17820] = -1.0;
  memset(&SD->u1.f0.dv1[17821], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17866] = 1.0;
  memset(&SD->u1.f0.dv1[17867], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17889] = -in11[3];
  memset(&SD->u1.f0.dv1[17890], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17935] = -in11[3];
  memset(&SD->u1.f0.dv1[17936], 0, 289U * sizeof(real_T));
  SD->u1.f0.dv1[18225] = -1.0;
  memset(&SD->u1.f0.dv1[18226], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18271] = 1.0;
  memset(&SD->u1.f0.dv1[18272], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[18294] = -in11[3];
  memset(&SD->u1.f0.dv1[18295], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18340] = -in11[3];
  memset(&SD->u1.f0.dv1[18341], 0, 243U * sizeof(real_T));
  SD->u1.f0.dv1[18584] = 1.0;
  memset(&SD->u1.f0.dv1[18585], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18630] = -1.0;
  memset(&SD->u1.f0.dv1[18631], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18745] = 1.0;
  memset(&SD->u1.f0.dv1[18746], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[18755] = -1.0;
  memset(&SD->u1.f0.dv1[18756], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[18787] = 1.0;
  memset(&SD->u1.f0.dv1[18788], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18833] = -1.0;
  memset(&SD->u1.f0.dv1[18834], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18948] = 1.0;
  memset(&SD->u1.f0.dv1[18949], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[18958] = -1.0;
  memset(&SD->u1.f0.dv1[18959], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[18990] = 1.0;
  memset(&SD->u1.f0.dv1[18991], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19036] = -1.0;
  memset(&SD->u1.f0.dv1[19037], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19151] = 1.0;
  memset(&SD->u1.f0.dv1[19152], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[19161] = -1.0;
  memset(&SD->u1.f0.dv1[19162], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[19193] = 1.0;
  memset(&SD->u1.f0.dv1[19194], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19239] = -1.0;
  memset(&SD->u1.f0.dv1[19240], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19354] = 1.0;
  memset(&SD->u1.f0.dv1[19355], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[19364] = -1.0;
  memset(&SD->u1.f0.dv1[19365], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[19396] = 1.0;
  memset(&SD->u1.f0.dv1[19397], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19442] = -1.0;
  memset(&SD->u1.f0.dv1[19443], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19557] = 1.0;
  memset(&SD->u1.f0.dv1[19558], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[19567] = -1.0;
  memset(&SD->u1.f0.dv1[19568], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[19599] = 1.0;
  memset(&SD->u1.f0.dv1[19600], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19645] = -1.0;
  memset(&SD->u1.f0.dv1[19646], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19760] = 1.0;
  memset(&SD->u1.f0.dv1[19761], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[19770] = -1.0;
  memset(&SD->u1.f0.dv1[19771], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[19802] = 1.0;
  memset(&SD->u1.f0.dv1[19803], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19848] = -1.0;
  memset(&SD->u1.f0.dv1[19849], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19963] = 1.0;
  memset(&SD->u1.f0.dv1[19964], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[19973] = -1.0;
  memset(&SD->u1.f0.dv1[19974], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[20005] = 1.0;
  memset(&SD->u1.f0.dv1[20006], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20051] = -1.0;
  memset(&SD->u1.f0.dv1[20052], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[20166] = 1.0;
  memset(&SD->u1.f0.dv1[20167], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[20176] = -1.0;
  memset(&SD->u1.f0.dv1[20177], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[20208] = 1.0;
  memset(&SD->u1.f0.dv1[20209], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20254] = -1.0;
  memset(&SD->u1.f0.dv1[20255], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[20369] = 1.0;
  memset(&SD->u1.f0.dv1[20370], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[20379] = -1.0;
  memset(&SD->u1.f0.dv1[20380], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[20411] = 1.0;
  memset(&SD->u1.f0.dv1[20412], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20457] = -1.0;
  memset(&SD->u1.f0.dv1[20458], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[20572] = 1.0;
  memset(&SD->u1.f0.dv1[20573], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[20582] = -1.0;
  memset(&SD->u1.f0.dv1[20583], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[20614] = 1.0;
  memset(&SD->u1.f0.dv1[20615], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20660] = -1.0;
  memset(&SD->u1.f0.dv1[20661], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[20817] = 1.0;
  memset(&SD->u1.f0.dv1[20818], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20863] = -1.0;
  memset(&SD->u1.f0.dv1[20864], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[21020] = 1.0;
  memset(&SD->u1.f0.dv1[21021], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21066] = -1.0;
  memset(&SD->u1.f0.dv1[21067], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[21223] = 1.0;
  memset(&SD->u1.f0.dv1[21224], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21269] = -1.0;
  memset(&SD->u1.f0.dv1[21270], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[21426] = 1.0;
  memset(&SD->u1.f0.dv1[21427], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21472] = -1.0;
  memset(&SD->u1.f0.dv1[21473], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[21629] = 1.0;
  memset(&SD->u1.f0.dv1[21630], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21675] = -1.0;
  memset(&SD->u1.f0.dv1[21676], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[21832] = 1.0;
  memset(&SD->u1.f0.dv1[21833], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21878] = -1.0;
  memset(&SD->u1.f0.dv1[21879], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[22035] = 1.0;
  memset(&SD->u1.f0.dv1[22036], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22081] = -1.0;
  memset(&SD->u1.f0.dv1[22082], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[22238] = 1.0;
  memset(&SD->u1.f0.dv1[22239], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22284] = -1.0;
  memset(&SD->u1.f0.dv1[22285], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[22441] = 1.0;
  memset(&SD->u1.f0.dv1[22442], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22487] = -1.0;
  memset(&SD->u1.f0.dv1[22488], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[22644] = 1.0;
  memset(&SD->u1.f0.dv1[22645], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22690] = -1.0;
  memset(&SD->u1.f0.dv1[22691], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[22847] = 1.0;
  memset(&SD->u1.f0.dv1[22848], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22893] = -1.0;
  memset(&SD->u1.f0.dv1[22894], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[23050] = 1.0;
  memset(&SD->u1.f0.dv1[23051], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23096] = -1.0;
  memset(&SD->u1.f0.dv1[23097], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[23253] = 1.0;
  memset(&SD->u1.f0.dv1[23254], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23299] = -1.0;
  memset(&SD->u1.f0.dv1[23300], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[23411] = 1.0;
  memset(&SD->u1.f0.dv1[23412], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[23421] = -1.0;
  memset(&SD->u1.f0.dv1[23422], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[23456] = 1.0;
  memset(&SD->u1.f0.dv1[23457], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23502] = -1.0;
  memset(&SD->u1.f0.dv1[23503], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[23614] = 1.0;
  memset(&SD->u1.f0.dv1[23615], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[23624] = -1.0;
  memset(&SD->u1.f0.dv1[23625], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[23659] = 1.0;
  memset(&SD->u1.f0.dv1[23660], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23705] = -1.0;
  memset(&SD->u1.f0.dv1[23706], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[23817] = 1.0;
  memset(&SD->u1.f0.dv1[23818], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[23827] = -1.0;
  memset(&SD->u1.f0.dv1[23828], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[23862] = 1.0;
  memset(&SD->u1.f0.dv1[23863], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23908] = -1.0;
  memset(&SD->u1.f0.dv1[23909], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[24020] = 1.0;
  memset(&SD->u1.f0.dv1[24021], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[24030] = -1.0;
  memset(&SD->u1.f0.dv1[24031], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[24065] = 1.0;
  memset(&SD->u1.f0.dv1[24066], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24111] = -1.0;
  memset(&SD->u1.f0.dv1[24112], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[24223] = 1.0;
  memset(&SD->u1.f0.dv1[24224], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[24233] = -1.0;
  memset(&SD->u1.f0.dv1[24234], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[24268] = 1.0;
  memset(&SD->u1.f0.dv1[24269], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24314] = -1.0;
  memset(&SD->u1.f0.dv1[24315], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[24426] = 1.0;
  memset(&SD->u1.f0.dv1[24427], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[24436] = -1.0;
  memset(&SD->u1.f0.dv1[24437], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[24471] = 1.0;
  memset(&SD->u1.f0.dv1[24472], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24517] = -1.0;
  memset(&SD->u1.f0.dv1[24518], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[24629] = 1.0;
  memset(&SD->u1.f0.dv1[24630], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[24639] = -1.0;
  memset(&SD->u1.f0.dv1[24640], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[24674] = 1.0;
  memset(&SD->u1.f0.dv1[24675], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24720] = -1.0;
  memset(&SD->u1.f0.dv1[24721], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[24832] = 1.0;
  memset(&SD->u1.f0.dv1[24833], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[24842] = -1.0;
  memset(&SD->u1.f0.dv1[24843], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[24877] = 1.0;
  memset(&SD->u1.f0.dv1[24878], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24923] = -1.0;
  memset(&SD->u1.f0.dv1[24924], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[25035] = 1.0;
  memset(&SD->u1.f0.dv1[25036], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[25045] = -1.0;
  memset(&SD->u1.f0.dv1[25046], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[25080] = 1.0;
  memset(&SD->u1.f0.dv1[25081], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25126] = -1.0;
  memset(&SD->u1.f0.dv1[25127], 0, 111U * sizeof(real_T));
  SD->u1.f0.dv1[25238] = 1.0;
  memset(&SD->u1.f0.dv1[25239], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[25248] = -1.0;
  memset(&SD->u1.f0.dv1[25249], 0, 34U * sizeof(real_T));
  SD->u1.f0.dv1[25283] = 1.0;
  memset(&SD->u1.f0.dv1[25284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25329] = -1.0;
  memset(&SD->u1.f0.dv1[25330], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[25486] = 1.0;
  memset(&SD->u1.f0.dv1[25487], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25532] = -1.0;
  memset(&SD->u1.f0.dv1[25533], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[25689] = 1.0;
  memset(&SD->u1.f0.dv1[25690], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25735] = -1.0;
  memset(&SD->u1.f0.dv1[25736], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[25892] = 1.0;
  memset(&SD->u1.f0.dv1[25893], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25938] = -1.0;
  memset(&SD->u1.f0.dv1[25939], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[26095] = 1.0;
  memset(&SD->u1.f0.dv1[26096], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26141] = -1.0;
  memset(&SD->u1.f0.dv1[26142], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[26298] = 1.0;
  memset(&SD->u1.f0.dv1[26299], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26344] = -1.0;
  memset(&SD->u1.f0.dv1[26345], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[26501] = 1.0;
  memset(&SD->u1.f0.dv1[26502], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26547] = -1.0;
  memset(&SD->u1.f0.dv1[26548], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[26704] = 1.0;
  memset(&SD->u1.f0.dv1[26705], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26750] = -1.0;
  memset(&SD->u1.f0.dv1[26751], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[26907] = 1.0;
  memset(&SD->u1.f0.dv1[26908], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26953] = -1.0;
  memset(&SD->u1.f0.dv1[26954], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[27110] = 1.0;
  memset(&SD->u1.f0.dv1[27111], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[27156] = -1.0;
  memset(&SD->u1.f0.dv1[27157], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[27313] = 1.0;
  memset(&SD->u1.f0.dv1[27314], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[27359] = -1.0;
  memset(&SD->u1.f0.dv1[27360], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[27516] = 1.0;
  memset(&SD->u1.f0.dv1[27517], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[27562] = -1.0;
  memset(&SD->u1.f0.dv1[27563], 0, 156U * sizeof(real_T));
  SD->u1.f0.dv1[27719] = 1.0;
  memset(&SD->u1.f0.dv1[27720], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[27765] = -1.0;
  memset(&SD->u1.f0.dv1[27766], 0, 1119U * sizeof(real_T));
  SD->u1.f0.dv1[28885] = 1.0;
  memset(&SD->u1.f0.dv1[28886], 0, 721U * sizeof(real_T));
  SD->u1.f0.dv1[29607] = -1.0;
  memset(&SD->u1.f0.dv1[29608], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29630] = -1.0;
  memset(&SD->u1.f0.dv1[29631], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[29810] = -1.0;
  memset(&SD->u1.f0.dv1[29811], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29833] = -1.0;
  memset(&SD->u1.f0.dv1[29834], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[30013] = -1.0;
  memset(&SD->u1.f0.dv1[30014], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30036] = -1.0;
  memset(&SD->u1.f0.dv1[30037], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[30216] = -1.0;
  memset(&SD->u1.f0.dv1[30217], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30239] = -1.0;
  memset(&SD->u1.f0.dv1[30240], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[30419] = -1.0;
  memset(&SD->u1.f0.dv1[30420], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30442] = -1.0;
  memset(&SD->u1.f0.dv1[30443], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[30622] = -1.0;
  memset(&SD->u1.f0.dv1[30623], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30645] = -1.0;
  memset(&SD->u1.f0.dv1[30646], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[30825] = -1.0;
  memset(&SD->u1.f0.dv1[30826], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30848] = -1.0;
  memset(&SD->u1.f0.dv1[30849], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[31028] = -1.0;
  memset(&SD->u1.f0.dv1[31029], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31051] = -1.0;
  memset(&SD->u1.f0.dv1[31052], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[31231] = -1.0;
  memset(&SD->u1.f0.dv1[31232], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31254] = -1.0;
  memset(&SD->u1.f0.dv1[31255], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[31434] = -1.0;
  memset(&SD->u1.f0.dv1[31435], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31457] = -1.0;
  memset(&SD->u1.f0.dv1[31458], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[31637] = -1.0;
  memset(&SD->u1.f0.dv1[31638], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31660] = -1.0;
  memset(&SD->u1.f0.dv1[31661], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[31840] = -1.0;
  memset(&SD->u1.f0.dv1[31841], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31863] = -1.0;
  memset(&SD->u1.f0.dv1[31864], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[32043] = -1.0;
  memset(&SD->u1.f0.dv1[32044], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32066] = -1.0;
  memset(&SD->u1.f0.dv1[32067], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[32246] = -1.0;
  memset(&SD->u1.f0.dv1[32247], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32269] = -1.0;
  memset(&SD->u1.f0.dv1[32270], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[32449] = -1.0;
  memset(&SD->u1.f0.dv1[32450], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32472] = -1.0;
  memset(&SD->u1.f0.dv1[32473], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[32652] = -1.0;
  memset(&SD->u1.f0.dv1[32653], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32675] = -1.0;
  memset(&SD->u1.f0.dv1[32676], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[32855] = -1.0;
  memset(&SD->u1.f0.dv1[32856], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32878] = -1.0;
  memset(&SD->u1.f0.dv1[32879], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[33058] = -1.0;
  memset(&SD->u1.f0.dv1[33059], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33081] = -1.0;
  memset(&SD->u1.f0.dv1[33082], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[33261] = -1.0;
  memset(&SD->u1.f0.dv1[33262], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33284] = -1.0;
  memset(&SD->u1.f0.dv1[33285], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[33464] = -1.0;
  memset(&SD->u1.f0.dv1[33465], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33487] = -1.0;
  memset(&SD->u1.f0.dv1[33488], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[33667] = -1.0;
  memset(&SD->u1.f0.dv1[33668], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33690] = -1.0;
  memset(&SD->u1.f0.dv1[33691], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[33870] = -1.0;
  memset(&SD->u1.f0.dv1[33871], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33893] = -1.0;
  memset(&SD->u1.f0.dv1[33894], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[34073] = -1.0;
  memset(&SD->u1.f0.dv1[34074], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[34096] = -1.0;
  memset(&SD->u1.f0.dv1[34097], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[34339] = -1.0;
  memset(&SD->u1.f0.dv1[34340], 0, 4605U * sizeof(real_T));
  SD->u1.f0.dv1[38945] = -1.0;
  memset(&SD->u1.f0.dv1[38946], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[38955] = -1.0;
  memset(&SD->u1.f0.dv1[38956], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[39148] = -1.0;
  memset(&SD->u1.f0.dv1[39149], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[39158] = -1.0;
  memset(&SD->u1.f0.dv1[39159], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[39351] = -1.0;
  memset(&SD->u1.f0.dv1[39352], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[39361] = -1.0;
  memset(&SD->u1.f0.dv1[39362], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[39554] = -1.0;
  memset(&SD->u1.f0.dv1[39555], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[39564] = -1.0;
  memset(&SD->u1.f0.dv1[39565], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[39757] = -1.0;
  memset(&SD->u1.f0.dv1[39758], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[39767] = -1.0;
  memset(&SD->u1.f0.dv1[39768], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[39960] = -1.0;
  memset(&SD->u1.f0.dv1[39961], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[39970] = -1.0;
  memset(&SD->u1.f0.dv1[39971], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[40163] = -1.0;
  memset(&SD->u1.f0.dv1[40164], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[40173] = -1.0;
  memset(&SD->u1.f0.dv1[40174], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[40366] = -1.0;
  memset(&SD->u1.f0.dv1[40367], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[40376] = -1.0;
  memset(&SD->u1.f0.dv1[40377], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[40569] = -1.0;
  memset(&SD->u1.f0.dv1[40570], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[40579] = -1.0;
  memset(&SD->u1.f0.dv1[40580], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[40772] = -1.0;
  memset(&SD->u1.f0.dv1[40773], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[40782] = -1.0;
  memset(&SD->u1.f0.dv1[40783], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[40985] = -1.0;
  memset(&SD->u1.f0.dv1[40986], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[40995] = -1.0;
  memset(&SD->u1.f0.dv1[40996], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[41188] = -1.0;
  memset(&SD->u1.f0.dv1[41189], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[41198] = -1.0;
  memset(&SD->u1.f0.dv1[41199], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[41391] = -1.0;
  memset(&SD->u1.f0.dv1[41392], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[41401] = -1.0;
  memset(&SD->u1.f0.dv1[41402], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[41594] = -1.0;
  memset(&SD->u1.f0.dv1[41595], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[41604] = -1.0;
  memset(&SD->u1.f0.dv1[41605], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[41797] = -1.0;
  memset(&SD->u1.f0.dv1[41798], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[41807] = -1.0;
  memset(&SD->u1.f0.dv1[41808], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[42000] = -1.0;
  memset(&SD->u1.f0.dv1[42001], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[42010] = -1.0;
  memset(&SD->u1.f0.dv1[42011], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[42203] = -1.0;
  memset(&SD->u1.f0.dv1[42204], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[42213] = -1.0;
  memset(&SD->u1.f0.dv1[42214], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[42406] = -1.0;
  memset(&SD->u1.f0.dv1[42407], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[42416] = -1.0;
  memset(&SD->u1.f0.dv1[42417], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[42609] = -1.0;
  memset(&SD->u1.f0.dv1[42610], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[42619] = -1.0;
  memset(&SD->u1.f0.dv1[42620], 0, 192U * sizeof(real_T));
  SD->u1.f0.dv1[42812] = -1.0;
  memset(&SD->u1.f0.dv1[42813], 0, 9U * sizeof(real_T));
  SD->u1.f0.dv1[42822] = -1.0;
  memset(&SD->u1.f0.dv1[42823], 0, 1617U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 202], &SD->u1.f0.dv1[i1 * 202], 202U * sizeof(real_T));
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
  biq[166] = t3;
  biq[167] = t3;
  biq[168] = t3;
  biq[169] = t3;
  biq[170] = t3;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t9;
  biq[174] = t9;
  biq[175] = t9;
  biq[176] = t9;
  biq[177] = t9;
  biq[178] = t9;
  biq[179] = t9;
  biq[180] = t9;
  biq[181] = t10;
  biq[182] = t10;
  biq[183] = t10;
  biq[184] = t10;
  biq[185] = t10;
  biq[186] = t10;
  biq[187] = t10;
  biq[188] = t10;
  biq[189] = t10;
  biq[190] = t10;
  biq[191] = t11;
  biq[192] = t11;
  biq[193] = t11;
  biq[194] = t11;
  biq[195] = t11;
  biq[196] = t11;
  biq[197] = t11;
  biq[198] = t11;
  biq[199] = t11;
  biq[200] = t11;
  biq[201] = -in9[1];
}

/* End of code generation (IqFast_LeftStart0V40.cpp) */
