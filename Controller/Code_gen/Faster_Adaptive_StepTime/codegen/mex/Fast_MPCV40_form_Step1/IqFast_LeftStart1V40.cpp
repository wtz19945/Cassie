/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart1V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart1V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step1.h"
#include "IqFast_LeftStart1V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart1V40(Fast_MPCV40_form_Step1StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[43560], real_T biq[198])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART1V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART1V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:18:06 */
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
  memset(&SD->u1.f0.dv1[139], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[397] = -1.0;
  memset(&SD->u1.f0.dv1[398], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[443] = 1.0;
  memset(&SD->u1.f0.dv1[444], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[489] = -in11[2];
  memset(&SD->u1.f0.dv1[490], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[535] = -in11[2];
  memset(&SD->u1.f0.dv1[536], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[794] = -1.0;
  memset(&SD->u1.f0.dv1[795], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[840] = 1.0;
  memset(&SD->u1.f0.dv1[841], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[886] = -in11[2];
  memset(&SD->u1.f0.dv1[887], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[932] = -in11[2];
  memset(&SD->u1.f0.dv1[933], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[1191] = -1.0;
  memset(&SD->u1.f0.dv1[1192], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1237] = 1.0;
  memset(&SD->u1.f0.dv1[1238], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1283] = -in11[2];
  memset(&SD->u1.f0.dv1[1284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1329] = -in11[2];
  memset(&SD->u1.f0.dv1[1330], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[1588] = -1.0;
  memset(&SD->u1.f0.dv1[1589], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1634] = 1.0;
  memset(&SD->u1.f0.dv1[1635], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1680] = -in11[2];
  memset(&SD->u1.f0.dv1[1681], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1726] = -in11[2];
  memset(&SD->u1.f0.dv1[1727], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[1985] = -1.0;
  memset(&SD->u1.f0.dv1[1986], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2031] = 1.0;
  memset(&SD->u1.f0.dv1[2032], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2077] = -in11[2];
  memset(&SD->u1.f0.dv1[2078], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2123] = -in11[2];
  memset(&SD->u1.f0.dv1[2124], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[2382] = -1.0;
  memset(&SD->u1.f0.dv1[2383], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2428] = 1.0;
  memset(&SD->u1.f0.dv1[2429], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2474] = -in11[2];
  memset(&SD->u1.f0.dv1[2475], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2520] = -in11[2];
  memset(&SD->u1.f0.dv1[2521], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[2779] = -1.0;
  memset(&SD->u1.f0.dv1[2780], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2825] = 1.0;
  memset(&SD->u1.f0.dv1[2826], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2871] = -in11[2];
  memset(&SD->u1.f0.dv1[2872], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2917] = -in11[2];
  memset(&SD->u1.f0.dv1[2918], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[3176] = -1.0;
  memset(&SD->u1.f0.dv1[3177], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3222] = 1.0;
  memset(&SD->u1.f0.dv1[3223], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3268] = -in11[2];
  memset(&SD->u1.f0.dv1[3269], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3314] = -in11[2];
  memset(&SD->u1.f0.dv1[3315], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[3573] = -1.0;
  memset(&SD->u1.f0.dv1[3574], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3619] = 1.0;
  memset(&SD->u1.f0.dv1[3620], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3665] = -in11[2];
  memset(&SD->u1.f0.dv1[3666], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3711] = -in11[2];
  memset(&SD->u1.f0.dv1[3712], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[3970] = -1.0;
  memset(&SD->u1.f0.dv1[3971], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4016] = 1.0;
  memset(&SD->u1.f0.dv1[4017], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4062] = -in11[2];
  memset(&SD->u1.f0.dv1[4063], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4108] = -in11[2];
  memset(&SD->u1.f0.dv1[4109], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[4367] = -1.0;
  memset(&SD->u1.f0.dv1[4368], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4413] = 1.0;
  memset(&SD->u1.f0.dv1[4414], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4459] = -in11[2];
  memset(&SD->u1.f0.dv1[4460], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4505] = -in11[2];
  memset(&SD->u1.f0.dv1[4506], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[4764] = -1.0;
  memset(&SD->u1.f0.dv1[4765], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4810] = 1.0;
  memset(&SD->u1.f0.dv1[4811], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4856] = -in11[2];
  memset(&SD->u1.f0.dv1[4857], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4902] = -in11[2];
  memset(&SD->u1.f0.dv1[4903], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[5161] = -1.0;
  memset(&SD->u1.f0.dv1[5162], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5207] = 1.0;
  memset(&SD->u1.f0.dv1[5208], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5253] = -in11[2];
  memset(&SD->u1.f0.dv1[5254], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5299] = -in11[2];
  memset(&SD->u1.f0.dv1[5300], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[5558] = -1.0;
  memset(&SD->u1.f0.dv1[5559], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5604] = 1.0;
  memset(&SD->u1.f0.dv1[5605], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5650] = -in11[2];
  memset(&SD->u1.f0.dv1[5651], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5696] = -in11[2];
  memset(&SD->u1.f0.dv1[5697], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[5955] = -1.0;
  memset(&SD->u1.f0.dv1[5956], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6001] = 1.0;
  memset(&SD->u1.f0.dv1[6002], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6047] = -in11[2];
  memset(&SD->u1.f0.dv1[6048], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6093] = -in11[2];
  memset(&SD->u1.f0.dv1[6094], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[6352] = -1.0;
  memset(&SD->u1.f0.dv1[6353], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6398] = 1.0;
  memset(&SD->u1.f0.dv1[6399], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6444] = -in11[2];
  memset(&SD->u1.f0.dv1[6445], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6490] = -in11[2];
  memset(&SD->u1.f0.dv1[6491], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[6749] = -1.0;
  memset(&SD->u1.f0.dv1[6750], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6795] = 1.0;
  memset(&SD->u1.f0.dv1[6796], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6841] = -in11[2];
  memset(&SD->u1.f0.dv1[6842], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6887] = -in11[2];
  memset(&SD->u1.f0.dv1[6888], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[7146] = -1.0;
  memset(&SD->u1.f0.dv1[7147], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7192] = 1.0;
  memset(&SD->u1.f0.dv1[7193], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7238] = -in11[2];
  memset(&SD->u1.f0.dv1[7239], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7284] = -in11[2];
  memset(&SD->u1.f0.dv1[7285], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[7543] = -1.0;
  memset(&SD->u1.f0.dv1[7544], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7589] = 1.0;
  memset(&SD->u1.f0.dv1[7590], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7635] = -in11[2];
  memset(&SD->u1.f0.dv1[7636], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7681] = -in11[2];
  memset(&SD->u1.f0.dv1[7682], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[7940] = -1.0;
  memset(&SD->u1.f0.dv1[7941], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7986] = 1.0;
  memset(&SD->u1.f0.dv1[7987], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8032] = -in11[2];
  memset(&SD->u1.f0.dv1[8033], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8078] = -in11[2];
  memset(&SD->u1.f0.dv1[8079], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[8337] = -1.0;
  memset(&SD->u1.f0.dv1[8338], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8383] = 1.0;
  memset(&SD->u1.f0.dv1[8384], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8429] = -in11[2];
  memset(&SD->u1.f0.dv1[8430], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8475] = -in11[2];
  memset(&SD->u1.f0.dv1[8476], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[8734] = -1.0;
  memset(&SD->u1.f0.dv1[8735], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8780] = 1.0;
  memset(&SD->u1.f0.dv1[8781], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8826] = -in11[2];
  memset(&SD->u1.f0.dv1[8827], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8872] = -in11[2];
  memset(&SD->u1.f0.dv1[8873], 0, 258U * sizeof(real_T));
  SD->u1.f0.dv1[9131] = -1.0;
  memset(&SD->u1.f0.dv1[9132], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9177] = 1.0;
  memset(&SD->u1.f0.dv1[9178], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9200] = -in11[3];
  memset(&SD->u1.f0.dv1[9201], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9246] = -in11[3];
  memset(&SD->u1.f0.dv1[9247], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[9528] = -1.0;
  memset(&SD->u1.f0.dv1[9529], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9574] = 1.0;
  memset(&SD->u1.f0.dv1[9575], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9597] = -in11[3];
  memset(&SD->u1.f0.dv1[9598], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9643] = -in11[3];
  memset(&SD->u1.f0.dv1[9644], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[9925] = -1.0;
  memset(&SD->u1.f0.dv1[9926], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9971] = 1.0;
  memset(&SD->u1.f0.dv1[9972], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9994] = -in11[3];
  memset(&SD->u1.f0.dv1[9995], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10040] = -in11[3];
  memset(&SD->u1.f0.dv1[10041], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[10322] = -1.0;
  memset(&SD->u1.f0.dv1[10323], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10368] = 1.0;
  memset(&SD->u1.f0.dv1[10369], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10391] = -in11[3];
  memset(&SD->u1.f0.dv1[10392], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10437] = -in11[3];
  memset(&SD->u1.f0.dv1[10438], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[10719] = -1.0;
  memset(&SD->u1.f0.dv1[10720], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10765] = 1.0;
  memset(&SD->u1.f0.dv1[10766], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10788] = -in11[3];
  memset(&SD->u1.f0.dv1[10789], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10834] = -in11[3];
  memset(&SD->u1.f0.dv1[10835], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[11116] = -1.0;
  memset(&SD->u1.f0.dv1[11117], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11162] = 1.0;
  memset(&SD->u1.f0.dv1[11163], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11185] = -in11[3];
  memset(&SD->u1.f0.dv1[11186], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11231] = -in11[3];
  memset(&SD->u1.f0.dv1[11232], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[11513] = -1.0;
  memset(&SD->u1.f0.dv1[11514], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11559] = 1.0;
  memset(&SD->u1.f0.dv1[11560], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11582] = -in11[3];
  memset(&SD->u1.f0.dv1[11583], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11628] = -in11[3];
  memset(&SD->u1.f0.dv1[11629], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[11910] = -1.0;
  memset(&SD->u1.f0.dv1[11911], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11956] = 1.0;
  memset(&SD->u1.f0.dv1[11957], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11979] = -in11[3];
  memset(&SD->u1.f0.dv1[11980], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12025] = -in11[3];
  memset(&SD->u1.f0.dv1[12026], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[12307] = -1.0;
  memset(&SD->u1.f0.dv1[12308], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12353] = 1.0;
  memset(&SD->u1.f0.dv1[12354], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12376] = -in11[3];
  memset(&SD->u1.f0.dv1[12377], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12422] = -in11[3];
  memset(&SD->u1.f0.dv1[12423], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[12704] = -1.0;
  memset(&SD->u1.f0.dv1[12705], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12750] = 1.0;
  memset(&SD->u1.f0.dv1[12751], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12773] = -in11[3];
  memset(&SD->u1.f0.dv1[12774], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12819] = -in11[3];
  memset(&SD->u1.f0.dv1[12820], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[13101] = -1.0;
  memset(&SD->u1.f0.dv1[13102], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13147] = 1.0;
  memset(&SD->u1.f0.dv1[13148], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13170] = -in11[3];
  memset(&SD->u1.f0.dv1[13171], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13216] = -in11[3];
  memset(&SD->u1.f0.dv1[13217], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[13498] = -1.0;
  memset(&SD->u1.f0.dv1[13499], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13544] = 1.0;
  memset(&SD->u1.f0.dv1[13545], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13567] = -in11[3];
  memset(&SD->u1.f0.dv1[13568], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13613] = -in11[3];
  memset(&SD->u1.f0.dv1[13614], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[13895] = -1.0;
  memset(&SD->u1.f0.dv1[13896], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13941] = 1.0;
  memset(&SD->u1.f0.dv1[13942], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13964] = -in11[3];
  memset(&SD->u1.f0.dv1[13965], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14010] = -in11[3];
  memset(&SD->u1.f0.dv1[14011], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[14292] = -1.0;
  memset(&SD->u1.f0.dv1[14293], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14338] = 1.0;
  memset(&SD->u1.f0.dv1[14339], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14361] = -in11[3];
  memset(&SD->u1.f0.dv1[14362], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14407] = -in11[3];
  memset(&SD->u1.f0.dv1[14408], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[14689] = -1.0;
  memset(&SD->u1.f0.dv1[14690], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14735] = 1.0;
  memset(&SD->u1.f0.dv1[14736], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14758] = -in11[3];
  memset(&SD->u1.f0.dv1[14759], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14804] = -in11[3];
  memset(&SD->u1.f0.dv1[14805], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[15086] = -1.0;
  memset(&SD->u1.f0.dv1[15087], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15132] = 1.0;
  memset(&SD->u1.f0.dv1[15133], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15155] = -in11[3];
  memset(&SD->u1.f0.dv1[15156], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15201] = -in11[3];
  memset(&SD->u1.f0.dv1[15202], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[15483] = -1.0;
  memset(&SD->u1.f0.dv1[15484], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15529] = 1.0;
  memset(&SD->u1.f0.dv1[15530], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15552] = -in11[3];
  memset(&SD->u1.f0.dv1[15553], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15598] = -in11[3];
  memset(&SD->u1.f0.dv1[15599], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[15880] = -1.0;
  memset(&SD->u1.f0.dv1[15881], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15926] = 1.0;
  memset(&SD->u1.f0.dv1[15927], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15949] = -in11[3];
  memset(&SD->u1.f0.dv1[15950], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15995] = -in11[3];
  memset(&SD->u1.f0.dv1[15996], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[16277] = -1.0;
  memset(&SD->u1.f0.dv1[16278], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16323] = 1.0;
  memset(&SD->u1.f0.dv1[16324], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16346] = -in11[3];
  memset(&SD->u1.f0.dv1[16347], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16392] = -in11[3];
  memset(&SD->u1.f0.dv1[16393], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[16674] = -1.0;
  memset(&SD->u1.f0.dv1[16675], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16720] = 1.0;
  memset(&SD->u1.f0.dv1[16721], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16743] = -in11[3];
  memset(&SD->u1.f0.dv1[16744], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16789] = -in11[3];
  memset(&SD->u1.f0.dv1[16790], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[17071] = -1.0;
  memset(&SD->u1.f0.dv1[17072], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17117] = 1.0;
  memset(&SD->u1.f0.dv1[17118], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17140] = -in11[3];
  memset(&SD->u1.f0.dv1[17141], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17186] = -in11[3];
  memset(&SD->u1.f0.dv1[17187], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[17468] = -1.0;
  memset(&SD->u1.f0.dv1[17469], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17514] = 1.0;
  memset(&SD->u1.f0.dv1[17515], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17537] = -in11[3];
  memset(&SD->u1.f0.dv1[17538], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17583] = -in11[3];
  memset(&SD->u1.f0.dv1[17584], 0, 281U * sizeof(real_T));
  SD->u1.f0.dv1[17865] = -1.0;
  memset(&SD->u1.f0.dv1[17866], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17911] = 1.0;
  memset(&SD->u1.f0.dv1[17912], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17934] = -in11[3];
  memset(&SD->u1.f0.dv1[17935], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17980] = -in11[3];
  memset(&SD->u1.f0.dv1[17981], 0, 235U * sizeof(real_T));
  SD->u1.f0.dv1[18216] = 1.0;
  memset(&SD->u1.f0.dv1[18217], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18262] = -1.0;
  memset(&SD->u1.f0.dv1[18263], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18377] = 1.0;
  memset(&SD->u1.f0.dv1[18378], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[18386] = -1.0;
  memset(&SD->u1.f0.dv1[18387], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[18415] = 1.0;
  memset(&SD->u1.f0.dv1[18416], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18461] = -1.0;
  memset(&SD->u1.f0.dv1[18462], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18576] = 1.0;
  memset(&SD->u1.f0.dv1[18577], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[18585] = -1.0;
  memset(&SD->u1.f0.dv1[18586], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[18614] = 1.0;
  memset(&SD->u1.f0.dv1[18615], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18660] = -1.0;
  memset(&SD->u1.f0.dv1[18661], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18775] = 1.0;
  memset(&SD->u1.f0.dv1[18776], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[18784] = -1.0;
  memset(&SD->u1.f0.dv1[18785], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[18813] = 1.0;
  memset(&SD->u1.f0.dv1[18814], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18859] = -1.0;
  memset(&SD->u1.f0.dv1[18860], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18974] = 1.0;
  memset(&SD->u1.f0.dv1[18975], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[18983] = -1.0;
  memset(&SD->u1.f0.dv1[18984], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[19012] = 1.0;
  memset(&SD->u1.f0.dv1[19013], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19058] = -1.0;
  memset(&SD->u1.f0.dv1[19059], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19173] = 1.0;
  memset(&SD->u1.f0.dv1[19174], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[19182] = -1.0;
  memset(&SD->u1.f0.dv1[19183], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[19211] = 1.0;
  memset(&SD->u1.f0.dv1[19212], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19257] = -1.0;
  memset(&SD->u1.f0.dv1[19258], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19372] = 1.0;
  memset(&SD->u1.f0.dv1[19373], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[19381] = -1.0;
  memset(&SD->u1.f0.dv1[19382], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[19410] = 1.0;
  memset(&SD->u1.f0.dv1[19411], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19456] = -1.0;
  memset(&SD->u1.f0.dv1[19457], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19571] = 1.0;
  memset(&SD->u1.f0.dv1[19572], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[19580] = -1.0;
  memset(&SD->u1.f0.dv1[19581], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[19609] = 1.0;
  memset(&SD->u1.f0.dv1[19610], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19655] = -1.0;
  memset(&SD->u1.f0.dv1[19656], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19770] = 1.0;
  memset(&SD->u1.f0.dv1[19771], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[19779] = -1.0;
  memset(&SD->u1.f0.dv1[19780], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[19808] = 1.0;
  memset(&SD->u1.f0.dv1[19809], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19854] = -1.0;
  memset(&SD->u1.f0.dv1[19855], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19969] = 1.0;
  memset(&SD->u1.f0.dv1[19970], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[19978] = -1.0;
  memset(&SD->u1.f0.dv1[19979], 0, 28U * sizeof(real_T));
  SD->u1.f0.dv1[20007] = 1.0;
  memset(&SD->u1.f0.dv1[20008], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20053] = -1.0;
  memset(&SD->u1.f0.dv1[20054], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[20206] = 1.0;
  memset(&SD->u1.f0.dv1[20207], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20252] = -1.0;
  memset(&SD->u1.f0.dv1[20253], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[20405] = 1.0;
  memset(&SD->u1.f0.dv1[20406], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20451] = -1.0;
  memset(&SD->u1.f0.dv1[20452], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[20604] = 1.0;
  memset(&SD->u1.f0.dv1[20605], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20650] = -1.0;
  memset(&SD->u1.f0.dv1[20651], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[20803] = 1.0;
  memset(&SD->u1.f0.dv1[20804], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20849] = -1.0;
  memset(&SD->u1.f0.dv1[20850], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[21002] = 1.0;
  memset(&SD->u1.f0.dv1[21003], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21048] = -1.0;
  memset(&SD->u1.f0.dv1[21049], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[21201] = 1.0;
  memset(&SD->u1.f0.dv1[21202], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21247] = -1.0;
  memset(&SD->u1.f0.dv1[21248], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[21400] = 1.0;
  memset(&SD->u1.f0.dv1[21401], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21446] = -1.0;
  memset(&SD->u1.f0.dv1[21447], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[21599] = 1.0;
  memset(&SD->u1.f0.dv1[21600], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21645] = -1.0;
  memset(&SD->u1.f0.dv1[21646], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[21798] = 1.0;
  memset(&SD->u1.f0.dv1[21799], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21844] = -1.0;
  memset(&SD->u1.f0.dv1[21845], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[21997] = 1.0;
  memset(&SD->u1.f0.dv1[21998], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22043] = -1.0;
  memset(&SD->u1.f0.dv1[22044], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[22196] = 1.0;
  memset(&SD->u1.f0.dv1[22197], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22242] = -1.0;
  memset(&SD->u1.f0.dv1[22243], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[22395] = 1.0;
  memset(&SD->u1.f0.dv1[22396], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22441] = -1.0;
  memset(&SD->u1.f0.dv1[22442], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[22594] = 1.0;
  memset(&SD->u1.f0.dv1[22595], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22640] = -1.0;
  memset(&SD->u1.f0.dv1[22641], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[22793] = 1.0;
  memset(&SD->u1.f0.dv1[22794], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22839] = -1.0;
  memset(&SD->u1.f0.dv1[22840], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[22949] = 1.0;
  memset(&SD->u1.f0.dv1[22950], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[22958] = -1.0;
  memset(&SD->u1.f0.dv1[22959], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[22992] = 1.0;
  memset(&SD->u1.f0.dv1[22993], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23038] = -1.0;
  memset(&SD->u1.f0.dv1[23039], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[23148] = 1.0;
  memset(&SD->u1.f0.dv1[23149], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[23157] = -1.0;
  memset(&SD->u1.f0.dv1[23158], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[23191] = 1.0;
  memset(&SD->u1.f0.dv1[23192], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23237] = -1.0;
  memset(&SD->u1.f0.dv1[23238], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[23347] = 1.0;
  memset(&SD->u1.f0.dv1[23348], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[23356] = -1.0;
  memset(&SD->u1.f0.dv1[23357], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[23390] = 1.0;
  memset(&SD->u1.f0.dv1[23391], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23436] = -1.0;
  memset(&SD->u1.f0.dv1[23437], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[23546] = 1.0;
  memset(&SD->u1.f0.dv1[23547], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[23555] = -1.0;
  memset(&SD->u1.f0.dv1[23556], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[23589] = 1.0;
  memset(&SD->u1.f0.dv1[23590], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23635] = -1.0;
  memset(&SD->u1.f0.dv1[23636], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[23745] = 1.0;
  memset(&SD->u1.f0.dv1[23746], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[23754] = -1.0;
  memset(&SD->u1.f0.dv1[23755], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[23788] = 1.0;
  memset(&SD->u1.f0.dv1[23789], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23834] = -1.0;
  memset(&SD->u1.f0.dv1[23835], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[23944] = 1.0;
  memset(&SD->u1.f0.dv1[23945], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[23953] = -1.0;
  memset(&SD->u1.f0.dv1[23954], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[23987] = 1.0;
  memset(&SD->u1.f0.dv1[23988], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24033] = -1.0;
  memset(&SD->u1.f0.dv1[24034], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[24143] = 1.0;
  memset(&SD->u1.f0.dv1[24144], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[24152] = -1.0;
  memset(&SD->u1.f0.dv1[24153], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[24186] = 1.0;
  memset(&SD->u1.f0.dv1[24187], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24232] = -1.0;
  memset(&SD->u1.f0.dv1[24233], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[24342] = 1.0;
  memset(&SD->u1.f0.dv1[24343], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[24351] = -1.0;
  memset(&SD->u1.f0.dv1[24352], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[24385] = 1.0;
  memset(&SD->u1.f0.dv1[24386], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24431] = -1.0;
  memset(&SD->u1.f0.dv1[24432], 0, 109U * sizeof(real_T));
  SD->u1.f0.dv1[24541] = 1.0;
  memset(&SD->u1.f0.dv1[24542], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[24550] = -1.0;
  memset(&SD->u1.f0.dv1[24551], 0, 33U * sizeof(real_T));
  SD->u1.f0.dv1[24584] = 1.0;
  memset(&SD->u1.f0.dv1[24585], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24630] = -1.0;
  memset(&SD->u1.f0.dv1[24631], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[24783] = 1.0;
  memset(&SD->u1.f0.dv1[24784], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24829] = -1.0;
  memset(&SD->u1.f0.dv1[24830], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[24982] = 1.0;
  memset(&SD->u1.f0.dv1[24983], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25028] = -1.0;
  memset(&SD->u1.f0.dv1[25029], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[25181] = 1.0;
  memset(&SD->u1.f0.dv1[25182], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25227] = -1.0;
  memset(&SD->u1.f0.dv1[25228], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[25380] = 1.0;
  memset(&SD->u1.f0.dv1[25381], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25426] = -1.0;
  memset(&SD->u1.f0.dv1[25427], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[25579] = 1.0;
  memset(&SD->u1.f0.dv1[25580], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25625] = -1.0;
  memset(&SD->u1.f0.dv1[25626], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[25778] = 1.0;
  memset(&SD->u1.f0.dv1[25779], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25824] = -1.0;
  memset(&SD->u1.f0.dv1[25825], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[25977] = 1.0;
  memset(&SD->u1.f0.dv1[25978], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26023] = -1.0;
  memset(&SD->u1.f0.dv1[26024], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[26176] = 1.0;
  memset(&SD->u1.f0.dv1[26177], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26222] = -1.0;
  memset(&SD->u1.f0.dv1[26223], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[26375] = 1.0;
  memset(&SD->u1.f0.dv1[26376], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26421] = -1.0;
  memset(&SD->u1.f0.dv1[26422], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[26574] = 1.0;
  memset(&SD->u1.f0.dv1[26575], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26620] = -1.0;
  memset(&SD->u1.f0.dv1[26621], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[26773] = 1.0;
  memset(&SD->u1.f0.dv1[26774], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26819] = -1.0;
  memset(&SD->u1.f0.dv1[26820], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[26972] = 1.0;
  memset(&SD->u1.f0.dv1[26973], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[27018] = -1.0;
  memset(&SD->u1.f0.dv1[27019], 0, 152U * sizeof(real_T));
  SD->u1.f0.dv1[27171] = 1.0;
  memset(&SD->u1.f0.dv1[27172], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[27217] = -1.0;
  memset(&SD->u1.f0.dv1[27218], 0, 1095U * sizeof(real_T));
  SD->u1.f0.dv1[28313] = 1.0;
  memset(&SD->u1.f0.dv1[28314], 0, 709U * sizeof(real_T));
  SD->u1.f0.dv1[29023] = -1.0;
  memset(&SD->u1.f0.dv1[29024], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29046] = -1.0;
  memset(&SD->u1.f0.dv1[29047], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[29222] = -1.0;
  memset(&SD->u1.f0.dv1[29223], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29245] = -1.0;
  memset(&SD->u1.f0.dv1[29246], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[29421] = -1.0;
  memset(&SD->u1.f0.dv1[29422], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29444] = -1.0;
  memset(&SD->u1.f0.dv1[29445], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[29620] = -1.0;
  memset(&SD->u1.f0.dv1[29621], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29643] = -1.0;
  memset(&SD->u1.f0.dv1[29644], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[29819] = -1.0;
  memset(&SD->u1.f0.dv1[29820], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29842] = -1.0;
  memset(&SD->u1.f0.dv1[29843], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[30018] = -1.0;
  memset(&SD->u1.f0.dv1[30019], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30041] = -1.0;
  memset(&SD->u1.f0.dv1[30042], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[30217] = -1.0;
  memset(&SD->u1.f0.dv1[30218], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30240] = -1.0;
  memset(&SD->u1.f0.dv1[30241], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[30416] = -1.0;
  memset(&SD->u1.f0.dv1[30417], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30439] = -1.0;
  memset(&SD->u1.f0.dv1[30440], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[30615] = -1.0;
  memset(&SD->u1.f0.dv1[30616], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30638] = -1.0;
  memset(&SD->u1.f0.dv1[30639], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[30814] = -1.0;
  memset(&SD->u1.f0.dv1[30815], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30837] = -1.0;
  memset(&SD->u1.f0.dv1[30838], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[31013] = -1.0;
  memset(&SD->u1.f0.dv1[31014], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31036] = -1.0;
  memset(&SD->u1.f0.dv1[31037], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[31212] = -1.0;
  memset(&SD->u1.f0.dv1[31213], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31235] = -1.0;
  memset(&SD->u1.f0.dv1[31236], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[31411] = -1.0;
  memset(&SD->u1.f0.dv1[31412], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31434] = -1.0;
  memset(&SD->u1.f0.dv1[31435], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[31610] = -1.0;
  memset(&SD->u1.f0.dv1[31611], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31633] = -1.0;
  memset(&SD->u1.f0.dv1[31634], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[31809] = -1.0;
  memset(&SD->u1.f0.dv1[31810], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31832] = -1.0;
  memset(&SD->u1.f0.dv1[31833], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[32008] = -1.0;
  memset(&SD->u1.f0.dv1[32009], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32031] = -1.0;
  memset(&SD->u1.f0.dv1[32032], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[32207] = -1.0;
  memset(&SD->u1.f0.dv1[32208], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32230] = -1.0;
  memset(&SD->u1.f0.dv1[32231], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[32406] = -1.0;
  memset(&SD->u1.f0.dv1[32407], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32429] = -1.0;
  memset(&SD->u1.f0.dv1[32430], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[32605] = -1.0;
  memset(&SD->u1.f0.dv1[32606], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32628] = -1.0;
  memset(&SD->u1.f0.dv1[32629], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[32804] = -1.0;
  memset(&SD->u1.f0.dv1[32805], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32827] = -1.0;
  memset(&SD->u1.f0.dv1[32828], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[33003] = -1.0;
  memset(&SD->u1.f0.dv1[33004], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33026] = -1.0;
  memset(&SD->u1.f0.dv1[33027], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[33202] = -1.0;
  memset(&SD->u1.f0.dv1[33203], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33225] = -1.0;
  memset(&SD->u1.f0.dv1[33226], 0, 175U * sizeof(real_T));
  SD->u1.f0.dv1[33401] = -1.0;
  memset(&SD->u1.f0.dv1[33402], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[33424] = -1.0;
  memset(&SD->u1.f0.dv1[33425], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[33659] = -1.0;
  memset(&SD->u1.f0.dv1[33660], 0, 4517U * sizeof(real_T));
  SD->u1.f0.dv1[38177] = -1.0;
  memset(&SD->u1.f0.dv1[38178], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[38186] = -1.0;
  memset(&SD->u1.f0.dv1[38187], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[38376] = -1.0;
  memset(&SD->u1.f0.dv1[38377], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[38385] = -1.0;
  memset(&SD->u1.f0.dv1[38386], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[38575] = -1.0;
  memset(&SD->u1.f0.dv1[38576], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[38584] = -1.0;
  memset(&SD->u1.f0.dv1[38585], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[38774] = -1.0;
  memset(&SD->u1.f0.dv1[38775], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[38783] = -1.0;
  memset(&SD->u1.f0.dv1[38784], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[38973] = -1.0;
  memset(&SD->u1.f0.dv1[38974], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[38982] = -1.0;
  memset(&SD->u1.f0.dv1[38983], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[39172] = -1.0;
  memset(&SD->u1.f0.dv1[39173], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[39181] = -1.0;
  memset(&SD->u1.f0.dv1[39182], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[39371] = -1.0;
  memset(&SD->u1.f0.dv1[39372], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[39380] = -1.0;
  memset(&SD->u1.f0.dv1[39381], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[39570] = -1.0;
  memset(&SD->u1.f0.dv1[39571], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[39579] = -1.0;
  memset(&SD->u1.f0.dv1[39580], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[39769] = -1.0;
  memset(&SD->u1.f0.dv1[39770], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[39778] = -1.0;
  memset(&SD->u1.f0.dv1[39779], 0, 396U * sizeof(real_T));
  SD->u1.f0.dv1[40175] = -1.0;
  memset(&SD->u1.f0.dv1[40176], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[40184] = -1.0;
  memset(&SD->u1.f0.dv1[40185], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[40374] = -1.0;
  memset(&SD->u1.f0.dv1[40375], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[40383] = -1.0;
  memset(&SD->u1.f0.dv1[40384], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[40573] = -1.0;
  memset(&SD->u1.f0.dv1[40574], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[40582] = -1.0;
  memset(&SD->u1.f0.dv1[40583], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[40772] = -1.0;
  memset(&SD->u1.f0.dv1[40773], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[40781] = -1.0;
  memset(&SD->u1.f0.dv1[40782], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[40971] = -1.0;
  memset(&SD->u1.f0.dv1[40972], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[40980] = -1.0;
  memset(&SD->u1.f0.dv1[40981], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[41170] = -1.0;
  memset(&SD->u1.f0.dv1[41171], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[41179] = -1.0;
  memset(&SD->u1.f0.dv1[41180], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[41369] = -1.0;
  memset(&SD->u1.f0.dv1[41370], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[41378] = -1.0;
  memset(&SD->u1.f0.dv1[41379], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[41568] = -1.0;
  memset(&SD->u1.f0.dv1[41569], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[41577] = -1.0;
  memset(&SD->u1.f0.dv1[41578], 0, 189U * sizeof(real_T));
  SD->u1.f0.dv1[41767] = -1.0;
  memset(&SD->u1.f0.dv1[41768], 0, sizeof(real_T) << 3);
  SD->u1.f0.dv1[41776] = -1.0;
  memset(&SD->u1.f0.dv1[41777], 0, 1783U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 198], &SD->u1.f0.dv1[i1 * 198], 198U * sizeof(real_T));
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
  biq[170] = t9;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t9;
  biq[174] = t9;
  biq[175] = t9;
  biq[176] = t9;
  biq[177] = t9;
  biq[178] = t9;
  biq[179] = t10;
  biq[180] = t10;
  biq[181] = t10;
  biq[182] = t10;
  biq[183] = t10;
  biq[184] = t10;
  biq[185] = t10;
  biq[186] = t10;
  biq[187] = t10;
  biq[188] = t11;
  biq[189] = t11;
  biq[190] = t11;
  biq[191] = t11;
  biq[192] = t11;
  biq[193] = t11;
  biq[194] = t11;
  biq[195] = t11;
  biq[196] = t11;
  biq[197] = -in9[1];
}

/* End of code generation (IqFast_LeftStart1V40.cpp) */
