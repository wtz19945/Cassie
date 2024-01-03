/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart3V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart3V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step3.h"
#include "IqFast_LeftStart3V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart3V40(Fast_MPCV40_form_Step3StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[41800], real_T biq[190])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART3V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART3V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:28:01 */
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
  memset(&SD->u1.f0.dv1[139], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[381] = -1.0;
  memset(&SD->u1.f0.dv1[382], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[427] = 1.0;
  memset(&SD->u1.f0.dv1[428], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[473] = -in11[2];
  memset(&SD->u1.f0.dv1[474], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[519] = -in11[2];
  memset(&SD->u1.f0.dv1[520], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[762] = -1.0;
  memset(&SD->u1.f0.dv1[763], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[808] = 1.0;
  memset(&SD->u1.f0.dv1[809], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[854] = -in11[2];
  memset(&SD->u1.f0.dv1[855], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[900] = -in11[2];
  memset(&SD->u1.f0.dv1[901], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[1143] = -1.0;
  memset(&SD->u1.f0.dv1[1144], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1189] = 1.0;
  memset(&SD->u1.f0.dv1[1190], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1235] = -in11[2];
  memset(&SD->u1.f0.dv1[1236], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1281] = -in11[2];
  memset(&SD->u1.f0.dv1[1282], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[1524] = -1.0;
  memset(&SD->u1.f0.dv1[1525], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1570] = 1.0;
  memset(&SD->u1.f0.dv1[1571], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1616] = -in11[2];
  memset(&SD->u1.f0.dv1[1617], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1662] = -in11[2];
  memset(&SD->u1.f0.dv1[1663], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[1905] = -1.0;
  memset(&SD->u1.f0.dv1[1906], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1951] = 1.0;
  memset(&SD->u1.f0.dv1[1952], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1997] = -in11[2];
  memset(&SD->u1.f0.dv1[1998], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2043] = -in11[2];
  memset(&SD->u1.f0.dv1[2044], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[2286] = -1.0;
  memset(&SD->u1.f0.dv1[2287], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2332] = 1.0;
  memset(&SD->u1.f0.dv1[2333], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2378] = -in11[2];
  memset(&SD->u1.f0.dv1[2379], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2424] = -in11[2];
  memset(&SD->u1.f0.dv1[2425], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[2667] = -1.0;
  memset(&SD->u1.f0.dv1[2668], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2713] = 1.0;
  memset(&SD->u1.f0.dv1[2714], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2759] = -in11[2];
  memset(&SD->u1.f0.dv1[2760], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2805] = -in11[2];
  memset(&SD->u1.f0.dv1[2806], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[3048] = -1.0;
  memset(&SD->u1.f0.dv1[3049], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3094] = 1.0;
  memset(&SD->u1.f0.dv1[3095], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3140] = -in11[2];
  memset(&SD->u1.f0.dv1[3141], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3186] = -in11[2];
  memset(&SD->u1.f0.dv1[3187], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[3429] = -1.0;
  memset(&SD->u1.f0.dv1[3430], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3475] = 1.0;
  memset(&SD->u1.f0.dv1[3476], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3521] = -in11[2];
  memset(&SD->u1.f0.dv1[3522], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3567] = -in11[2];
  memset(&SD->u1.f0.dv1[3568], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[3810] = -1.0;
  memset(&SD->u1.f0.dv1[3811], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3856] = 1.0;
  memset(&SD->u1.f0.dv1[3857], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3902] = -in11[2];
  memset(&SD->u1.f0.dv1[3903], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3948] = -in11[2];
  memset(&SD->u1.f0.dv1[3949], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[4191] = -1.0;
  memset(&SD->u1.f0.dv1[4192], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4237] = 1.0;
  memset(&SD->u1.f0.dv1[4238], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4283] = -in11[2];
  memset(&SD->u1.f0.dv1[4284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4329] = -in11[2];
  memset(&SD->u1.f0.dv1[4330], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[4572] = -1.0;
  memset(&SD->u1.f0.dv1[4573], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4618] = 1.0;
  memset(&SD->u1.f0.dv1[4619], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4664] = -in11[2];
  memset(&SD->u1.f0.dv1[4665], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4710] = -in11[2];
  memset(&SD->u1.f0.dv1[4711], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[4953] = -1.0;
  memset(&SD->u1.f0.dv1[4954], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4999] = 1.0;
  memset(&SD->u1.f0.dv1[5000], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5045] = -in11[2];
  memset(&SD->u1.f0.dv1[5046], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5091] = -in11[2];
  memset(&SD->u1.f0.dv1[5092], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[5334] = -1.0;
  memset(&SD->u1.f0.dv1[5335], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5380] = 1.0;
  memset(&SD->u1.f0.dv1[5381], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5426] = -in11[2];
  memset(&SD->u1.f0.dv1[5427], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5472] = -in11[2];
  memset(&SD->u1.f0.dv1[5473], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[5715] = -1.0;
  memset(&SD->u1.f0.dv1[5716], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5761] = 1.0;
  memset(&SD->u1.f0.dv1[5762], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5807] = -in11[2];
  memset(&SD->u1.f0.dv1[5808], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5853] = -in11[2];
  memset(&SD->u1.f0.dv1[5854], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[6096] = -1.0;
  memset(&SD->u1.f0.dv1[6097], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6142] = 1.0;
  memset(&SD->u1.f0.dv1[6143], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6188] = -in11[2];
  memset(&SD->u1.f0.dv1[6189], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6234] = -in11[2];
  memset(&SD->u1.f0.dv1[6235], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[6477] = -1.0;
  memset(&SD->u1.f0.dv1[6478], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6523] = 1.0;
  memset(&SD->u1.f0.dv1[6524], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6569] = -in11[2];
  memset(&SD->u1.f0.dv1[6570], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6615] = -in11[2];
  memset(&SD->u1.f0.dv1[6616], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[6858] = -1.0;
  memset(&SD->u1.f0.dv1[6859], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6904] = 1.0;
  memset(&SD->u1.f0.dv1[6905], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6950] = -in11[2];
  memset(&SD->u1.f0.dv1[6951], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6996] = -in11[2];
  memset(&SD->u1.f0.dv1[6997], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[7239] = -1.0;
  memset(&SD->u1.f0.dv1[7240], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7285] = 1.0;
  memset(&SD->u1.f0.dv1[7286], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7331] = -in11[2];
  memset(&SD->u1.f0.dv1[7332], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7377] = -in11[2];
  memset(&SD->u1.f0.dv1[7378], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[7620] = -1.0;
  memset(&SD->u1.f0.dv1[7621], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7666] = 1.0;
  memset(&SD->u1.f0.dv1[7667], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7712] = -in11[2];
  memset(&SD->u1.f0.dv1[7713], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7758] = -in11[2];
  memset(&SD->u1.f0.dv1[7759], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[8001] = -1.0;
  memset(&SD->u1.f0.dv1[8002], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8047] = 1.0;
  memset(&SD->u1.f0.dv1[8048], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8093] = -in11[2];
  memset(&SD->u1.f0.dv1[8094], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8139] = -in11[2];
  memset(&SD->u1.f0.dv1[8140], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[8382] = -1.0;
  memset(&SD->u1.f0.dv1[8383], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8428] = 1.0;
  memset(&SD->u1.f0.dv1[8429], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8474] = -in11[2];
  memset(&SD->u1.f0.dv1[8475], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8520] = -in11[2];
  memset(&SD->u1.f0.dv1[8521], 0, 242U * sizeof(real_T));
  SD->u1.f0.dv1[8763] = -1.0;
  memset(&SD->u1.f0.dv1[8764], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8809] = 1.0;
  memset(&SD->u1.f0.dv1[8810], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8832] = -in11[3];
  memset(&SD->u1.f0.dv1[8833], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8878] = -in11[3];
  memset(&SD->u1.f0.dv1[8879], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[9144] = -1.0;
  memset(&SD->u1.f0.dv1[9145], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9190] = 1.0;
  memset(&SD->u1.f0.dv1[9191], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9213] = -in11[3];
  memset(&SD->u1.f0.dv1[9214], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9259] = -in11[3];
  memset(&SD->u1.f0.dv1[9260], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[9525] = -1.0;
  memset(&SD->u1.f0.dv1[9526], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9571] = 1.0;
  memset(&SD->u1.f0.dv1[9572], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9594] = -in11[3];
  memset(&SD->u1.f0.dv1[9595], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9640] = -in11[3];
  memset(&SD->u1.f0.dv1[9641], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[9906] = -1.0;
  memset(&SD->u1.f0.dv1[9907], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9952] = 1.0;
  memset(&SD->u1.f0.dv1[9953], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9975] = -in11[3];
  memset(&SD->u1.f0.dv1[9976], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10021] = -in11[3];
  memset(&SD->u1.f0.dv1[10022], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[10287] = -1.0;
  memset(&SD->u1.f0.dv1[10288], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10333] = 1.0;
  memset(&SD->u1.f0.dv1[10334], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10356] = -in11[3];
  memset(&SD->u1.f0.dv1[10357], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10402] = -in11[3];
  memset(&SD->u1.f0.dv1[10403], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[10668] = -1.0;
  memset(&SD->u1.f0.dv1[10669], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10714] = 1.0;
  memset(&SD->u1.f0.dv1[10715], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10737] = -in11[3];
  memset(&SD->u1.f0.dv1[10738], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10783] = -in11[3];
  memset(&SD->u1.f0.dv1[10784], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[11049] = -1.0;
  memset(&SD->u1.f0.dv1[11050], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11095] = 1.0;
  memset(&SD->u1.f0.dv1[11096], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11118] = -in11[3];
  memset(&SD->u1.f0.dv1[11119], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11164] = -in11[3];
  memset(&SD->u1.f0.dv1[11165], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[11430] = -1.0;
  memset(&SD->u1.f0.dv1[11431], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11476] = 1.0;
  memset(&SD->u1.f0.dv1[11477], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11499] = -in11[3];
  memset(&SD->u1.f0.dv1[11500], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11545] = -in11[3];
  memset(&SD->u1.f0.dv1[11546], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[11811] = -1.0;
  memset(&SD->u1.f0.dv1[11812], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11857] = 1.0;
  memset(&SD->u1.f0.dv1[11858], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11880] = -in11[3];
  memset(&SD->u1.f0.dv1[11881], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11926] = -in11[3];
  memset(&SD->u1.f0.dv1[11927], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[12192] = -1.0;
  memset(&SD->u1.f0.dv1[12193], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12238] = 1.0;
  memset(&SD->u1.f0.dv1[12239], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12261] = -in11[3];
  memset(&SD->u1.f0.dv1[12262], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12307] = -in11[3];
  memset(&SD->u1.f0.dv1[12308], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[12573] = -1.0;
  memset(&SD->u1.f0.dv1[12574], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12619] = 1.0;
  memset(&SD->u1.f0.dv1[12620], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12642] = -in11[3];
  memset(&SD->u1.f0.dv1[12643], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12688] = -in11[3];
  memset(&SD->u1.f0.dv1[12689], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[12954] = -1.0;
  memset(&SD->u1.f0.dv1[12955], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13000] = 1.0;
  memset(&SD->u1.f0.dv1[13001], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13023] = -in11[3];
  memset(&SD->u1.f0.dv1[13024], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13069] = -in11[3];
  memset(&SD->u1.f0.dv1[13070], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[13335] = -1.0;
  memset(&SD->u1.f0.dv1[13336], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13381] = 1.0;
  memset(&SD->u1.f0.dv1[13382], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13404] = -in11[3];
  memset(&SD->u1.f0.dv1[13405], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13450] = -in11[3];
  memset(&SD->u1.f0.dv1[13451], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[13716] = -1.0;
  memset(&SD->u1.f0.dv1[13717], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13762] = 1.0;
  memset(&SD->u1.f0.dv1[13763], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13785] = -in11[3];
  memset(&SD->u1.f0.dv1[13786], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13831] = -in11[3];
  memset(&SD->u1.f0.dv1[13832], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[14097] = -1.0;
  memset(&SD->u1.f0.dv1[14098], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14143] = 1.0;
  memset(&SD->u1.f0.dv1[14144], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14166] = -in11[3];
  memset(&SD->u1.f0.dv1[14167], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14212] = -in11[3];
  memset(&SD->u1.f0.dv1[14213], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[14478] = -1.0;
  memset(&SD->u1.f0.dv1[14479], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14524] = 1.0;
  memset(&SD->u1.f0.dv1[14525], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14547] = -in11[3];
  memset(&SD->u1.f0.dv1[14548], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14593] = -in11[3];
  memset(&SD->u1.f0.dv1[14594], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[14859] = -1.0;
  memset(&SD->u1.f0.dv1[14860], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14905] = 1.0;
  memset(&SD->u1.f0.dv1[14906], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14928] = -in11[3];
  memset(&SD->u1.f0.dv1[14929], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14974] = -in11[3];
  memset(&SD->u1.f0.dv1[14975], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[15240] = -1.0;
  memset(&SD->u1.f0.dv1[15241], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15286] = 1.0;
  memset(&SD->u1.f0.dv1[15287], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15309] = -in11[3];
  memset(&SD->u1.f0.dv1[15310], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15355] = -in11[3];
  memset(&SD->u1.f0.dv1[15356], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[15621] = -1.0;
  memset(&SD->u1.f0.dv1[15622], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15667] = 1.0;
  memset(&SD->u1.f0.dv1[15668], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15690] = -in11[3];
  memset(&SD->u1.f0.dv1[15691], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15736] = -in11[3];
  memset(&SD->u1.f0.dv1[15737], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[16002] = -1.0;
  memset(&SD->u1.f0.dv1[16003], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16048] = 1.0;
  memset(&SD->u1.f0.dv1[16049], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16071] = -in11[3];
  memset(&SD->u1.f0.dv1[16072], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16117] = -in11[3];
  memset(&SD->u1.f0.dv1[16118], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[16383] = -1.0;
  memset(&SD->u1.f0.dv1[16384], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16429] = 1.0;
  memset(&SD->u1.f0.dv1[16430], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16452] = -in11[3];
  memset(&SD->u1.f0.dv1[16453], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16498] = -in11[3];
  memset(&SD->u1.f0.dv1[16499], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[16764] = -1.0;
  memset(&SD->u1.f0.dv1[16765], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16810] = 1.0;
  memset(&SD->u1.f0.dv1[16811], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16833] = -in11[3];
  memset(&SD->u1.f0.dv1[16834], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16879] = -in11[3];
  memset(&SD->u1.f0.dv1[16880], 0, 265U * sizeof(real_T));
  SD->u1.f0.dv1[17145] = -1.0;
  memset(&SD->u1.f0.dv1[17146], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17191] = 1.0;
  memset(&SD->u1.f0.dv1[17192], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17214] = -in11[3];
  memset(&SD->u1.f0.dv1[17215], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17260] = -in11[3];
  memset(&SD->u1.f0.dv1[17261], 0, 219U * sizeof(real_T));
  SD->u1.f0.dv1[17480] = 1.0;
  memset(&SD->u1.f0.dv1[17481], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17526] = -1.0;
  memset(&SD->u1.f0.dv1[17527], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17641] = 1.0;
  SD->u1.f0.dv1[17642] = 0.0;
  SD->u1.f0.dv1[17643] = 0.0;
  SD->u1.f0.dv1[17644] = 0.0;
  SD->u1.f0.dv1[17645] = 0.0;
  SD->u1.f0.dv1[17646] = 0.0;
  SD->u1.f0.dv1[17647] = 0.0;
  SD->u1.f0.dv1[17648] = -1.0;
  memset(&SD->u1.f0.dv1[17649], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17671] = 1.0;
  memset(&SD->u1.f0.dv1[17672], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17717] = -1.0;
  memset(&SD->u1.f0.dv1[17718], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17832] = 1.0;
  SD->u1.f0.dv1[17833] = 0.0;
  SD->u1.f0.dv1[17834] = 0.0;
  SD->u1.f0.dv1[17835] = 0.0;
  SD->u1.f0.dv1[17836] = 0.0;
  SD->u1.f0.dv1[17837] = 0.0;
  SD->u1.f0.dv1[17838] = 0.0;
  SD->u1.f0.dv1[17839] = -1.0;
  memset(&SD->u1.f0.dv1[17840], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17862] = 1.0;
  memset(&SD->u1.f0.dv1[17863], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17908] = -1.0;
  memset(&SD->u1.f0.dv1[17909], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18023] = 1.0;
  SD->u1.f0.dv1[18024] = 0.0;
  SD->u1.f0.dv1[18025] = 0.0;
  SD->u1.f0.dv1[18026] = 0.0;
  SD->u1.f0.dv1[18027] = 0.0;
  SD->u1.f0.dv1[18028] = 0.0;
  SD->u1.f0.dv1[18029] = 0.0;
  SD->u1.f0.dv1[18030] = -1.0;
  memset(&SD->u1.f0.dv1[18031], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[18053] = 1.0;
  memset(&SD->u1.f0.dv1[18054], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18099] = -1.0;
  memset(&SD->u1.f0.dv1[18100], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18214] = 1.0;
  SD->u1.f0.dv1[18215] = 0.0;
  SD->u1.f0.dv1[18216] = 0.0;
  SD->u1.f0.dv1[18217] = 0.0;
  SD->u1.f0.dv1[18218] = 0.0;
  SD->u1.f0.dv1[18219] = 0.0;
  SD->u1.f0.dv1[18220] = 0.0;
  SD->u1.f0.dv1[18221] = -1.0;
  memset(&SD->u1.f0.dv1[18222], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[18244] = 1.0;
  memset(&SD->u1.f0.dv1[18245], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18290] = -1.0;
  memset(&SD->u1.f0.dv1[18291], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18405] = 1.0;
  SD->u1.f0.dv1[18406] = 0.0;
  SD->u1.f0.dv1[18407] = 0.0;
  SD->u1.f0.dv1[18408] = 0.0;
  SD->u1.f0.dv1[18409] = 0.0;
  SD->u1.f0.dv1[18410] = 0.0;
  SD->u1.f0.dv1[18411] = 0.0;
  SD->u1.f0.dv1[18412] = -1.0;
  memset(&SD->u1.f0.dv1[18413], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[18435] = 1.0;
  memset(&SD->u1.f0.dv1[18436], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18481] = -1.0;
  memset(&SD->u1.f0.dv1[18482], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18596] = 1.0;
  SD->u1.f0.dv1[18597] = 0.0;
  SD->u1.f0.dv1[18598] = 0.0;
  SD->u1.f0.dv1[18599] = 0.0;
  SD->u1.f0.dv1[18600] = 0.0;
  SD->u1.f0.dv1[18601] = 0.0;
  SD->u1.f0.dv1[18602] = 0.0;
  SD->u1.f0.dv1[18603] = -1.0;
  memset(&SD->u1.f0.dv1[18604], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[18626] = 1.0;
  memset(&SD->u1.f0.dv1[18627], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18672] = -1.0;
  memset(&SD->u1.f0.dv1[18673], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18787] = 1.0;
  SD->u1.f0.dv1[18788] = 0.0;
  SD->u1.f0.dv1[18789] = 0.0;
  SD->u1.f0.dv1[18790] = 0.0;
  SD->u1.f0.dv1[18791] = 0.0;
  SD->u1.f0.dv1[18792] = 0.0;
  SD->u1.f0.dv1[18793] = 0.0;
  SD->u1.f0.dv1[18794] = -1.0;
  memset(&SD->u1.f0.dv1[18795], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[18817] = 1.0;
  memset(&SD->u1.f0.dv1[18818], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18863] = -1.0;
  memset(&SD->u1.f0.dv1[18864], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[19008] = 1.0;
  memset(&SD->u1.f0.dv1[19009], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19054] = -1.0;
  memset(&SD->u1.f0.dv1[19055], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[19199] = 1.0;
  memset(&SD->u1.f0.dv1[19200], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19245] = -1.0;
  memset(&SD->u1.f0.dv1[19246], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[19390] = 1.0;
  memset(&SD->u1.f0.dv1[19391], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19436] = -1.0;
  memset(&SD->u1.f0.dv1[19437], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[19581] = 1.0;
  memset(&SD->u1.f0.dv1[19582], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19627] = -1.0;
  memset(&SD->u1.f0.dv1[19628], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[19772] = 1.0;
  memset(&SD->u1.f0.dv1[19773], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19818] = -1.0;
  memset(&SD->u1.f0.dv1[19819], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[19963] = 1.0;
  memset(&SD->u1.f0.dv1[19964], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20009] = -1.0;
  memset(&SD->u1.f0.dv1[20010], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[20154] = 1.0;
  memset(&SD->u1.f0.dv1[20155], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20200] = -1.0;
  memset(&SD->u1.f0.dv1[20201], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[20345] = 1.0;
  memset(&SD->u1.f0.dv1[20346], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20391] = -1.0;
  memset(&SD->u1.f0.dv1[20392], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[20536] = 1.0;
  memset(&SD->u1.f0.dv1[20537], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20582] = -1.0;
  memset(&SD->u1.f0.dv1[20583], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[20727] = 1.0;
  memset(&SD->u1.f0.dv1[20728], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20773] = -1.0;
  memset(&SD->u1.f0.dv1[20774], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[20918] = 1.0;
  memset(&SD->u1.f0.dv1[20919], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20964] = -1.0;
  memset(&SD->u1.f0.dv1[20965], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[21109] = 1.0;
  memset(&SD->u1.f0.dv1[21110], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21155] = -1.0;
  memset(&SD->u1.f0.dv1[21156], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[21300] = 1.0;
  memset(&SD->u1.f0.dv1[21301], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21346] = -1.0;
  memset(&SD->u1.f0.dv1[21347], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[21491] = 1.0;
  memset(&SD->u1.f0.dv1[21492], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21537] = -1.0;
  memset(&SD->u1.f0.dv1[21538], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[21682] = 1.0;
  memset(&SD->u1.f0.dv1[21683], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21728] = -1.0;
  memset(&SD->u1.f0.dv1[21729], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[21873] = 1.0;
  memset(&SD->u1.f0.dv1[21874], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21919] = -1.0;
  memset(&SD->u1.f0.dv1[21920], 0, 105U * sizeof(real_T));
  SD->u1.f0.dv1[22025] = 1.0;
  SD->u1.f0.dv1[22026] = 0.0;
  SD->u1.f0.dv1[22027] = 0.0;
  SD->u1.f0.dv1[22028] = 0.0;
  SD->u1.f0.dv1[22029] = 0.0;
  SD->u1.f0.dv1[22030] = 0.0;
  SD->u1.f0.dv1[22031] = 0.0;
  SD->u1.f0.dv1[22032] = -1.0;
  memset(&SD->u1.f0.dv1[22033], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[22064] = 1.0;
  memset(&SD->u1.f0.dv1[22065], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22110] = -1.0;
  memset(&SD->u1.f0.dv1[22111], 0, 105U * sizeof(real_T));
  SD->u1.f0.dv1[22216] = 1.0;
  SD->u1.f0.dv1[22217] = 0.0;
  SD->u1.f0.dv1[22218] = 0.0;
  SD->u1.f0.dv1[22219] = 0.0;
  SD->u1.f0.dv1[22220] = 0.0;
  SD->u1.f0.dv1[22221] = 0.0;
  SD->u1.f0.dv1[22222] = 0.0;
  SD->u1.f0.dv1[22223] = -1.0;
  memset(&SD->u1.f0.dv1[22224], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[22255] = 1.0;
  memset(&SD->u1.f0.dv1[22256], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22301] = -1.0;
  memset(&SD->u1.f0.dv1[22302], 0, 105U * sizeof(real_T));
  SD->u1.f0.dv1[22407] = 1.0;
  SD->u1.f0.dv1[22408] = 0.0;
  SD->u1.f0.dv1[22409] = 0.0;
  SD->u1.f0.dv1[22410] = 0.0;
  SD->u1.f0.dv1[22411] = 0.0;
  SD->u1.f0.dv1[22412] = 0.0;
  SD->u1.f0.dv1[22413] = 0.0;
  SD->u1.f0.dv1[22414] = -1.0;
  memset(&SD->u1.f0.dv1[22415], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[22446] = 1.0;
  memset(&SD->u1.f0.dv1[22447], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22492] = -1.0;
  memset(&SD->u1.f0.dv1[22493], 0, 105U * sizeof(real_T));
  SD->u1.f0.dv1[22598] = 1.0;
  SD->u1.f0.dv1[22599] = 0.0;
  SD->u1.f0.dv1[22600] = 0.0;
  SD->u1.f0.dv1[22601] = 0.0;
  SD->u1.f0.dv1[22602] = 0.0;
  SD->u1.f0.dv1[22603] = 0.0;
  SD->u1.f0.dv1[22604] = 0.0;
  SD->u1.f0.dv1[22605] = -1.0;
  memset(&SD->u1.f0.dv1[22606], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[22637] = 1.0;
  memset(&SD->u1.f0.dv1[22638], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22683] = -1.0;
  memset(&SD->u1.f0.dv1[22684], 0, 105U * sizeof(real_T));
  SD->u1.f0.dv1[22789] = 1.0;
  SD->u1.f0.dv1[22790] = 0.0;
  SD->u1.f0.dv1[22791] = 0.0;
  SD->u1.f0.dv1[22792] = 0.0;
  SD->u1.f0.dv1[22793] = 0.0;
  SD->u1.f0.dv1[22794] = 0.0;
  SD->u1.f0.dv1[22795] = 0.0;
  SD->u1.f0.dv1[22796] = -1.0;
  memset(&SD->u1.f0.dv1[22797], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[22828] = 1.0;
  memset(&SD->u1.f0.dv1[22829], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22874] = -1.0;
  memset(&SD->u1.f0.dv1[22875], 0, 105U * sizeof(real_T));
  SD->u1.f0.dv1[22980] = 1.0;
  SD->u1.f0.dv1[22981] = 0.0;
  SD->u1.f0.dv1[22982] = 0.0;
  SD->u1.f0.dv1[22983] = 0.0;
  SD->u1.f0.dv1[22984] = 0.0;
  SD->u1.f0.dv1[22985] = 0.0;
  SD->u1.f0.dv1[22986] = 0.0;
  SD->u1.f0.dv1[22987] = -1.0;
  memset(&SD->u1.f0.dv1[22988], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[23019] = 1.0;
  memset(&SD->u1.f0.dv1[23020], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23065] = -1.0;
  memset(&SD->u1.f0.dv1[23066], 0, 105U * sizeof(real_T));
  SD->u1.f0.dv1[23171] = 1.0;
  SD->u1.f0.dv1[23172] = 0.0;
  SD->u1.f0.dv1[23173] = 0.0;
  SD->u1.f0.dv1[23174] = 0.0;
  SD->u1.f0.dv1[23175] = 0.0;
  SD->u1.f0.dv1[23176] = 0.0;
  SD->u1.f0.dv1[23177] = 0.0;
  SD->u1.f0.dv1[23178] = -1.0;
  memset(&SD->u1.f0.dv1[23179], 0, 31U * sizeof(real_T));
  SD->u1.f0.dv1[23210] = 1.0;
  memset(&SD->u1.f0.dv1[23211], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23256] = -1.0;
  memset(&SD->u1.f0.dv1[23257], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[23401] = 1.0;
  memset(&SD->u1.f0.dv1[23402], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23447] = -1.0;
  memset(&SD->u1.f0.dv1[23448], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[23592] = 1.0;
  memset(&SD->u1.f0.dv1[23593], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23638] = -1.0;
  memset(&SD->u1.f0.dv1[23639], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[23783] = 1.0;
  memset(&SD->u1.f0.dv1[23784], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23829] = -1.0;
  memset(&SD->u1.f0.dv1[23830], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[23974] = 1.0;
  memset(&SD->u1.f0.dv1[23975], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24020] = -1.0;
  memset(&SD->u1.f0.dv1[24021], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[24165] = 1.0;
  memset(&SD->u1.f0.dv1[24166], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24211] = -1.0;
  memset(&SD->u1.f0.dv1[24212], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[24356] = 1.0;
  memset(&SD->u1.f0.dv1[24357], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24402] = -1.0;
  memset(&SD->u1.f0.dv1[24403], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[24547] = 1.0;
  memset(&SD->u1.f0.dv1[24548], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24593] = -1.0;
  memset(&SD->u1.f0.dv1[24594], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[24738] = 1.0;
  memset(&SD->u1.f0.dv1[24739], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24784] = -1.0;
  memset(&SD->u1.f0.dv1[24785], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[24929] = 1.0;
  memset(&SD->u1.f0.dv1[24930], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24975] = -1.0;
  memset(&SD->u1.f0.dv1[24976], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[25120] = 1.0;
  memset(&SD->u1.f0.dv1[25121], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25166] = -1.0;
  memset(&SD->u1.f0.dv1[25167], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[25311] = 1.0;
  memset(&SD->u1.f0.dv1[25312], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25357] = -1.0;
  memset(&SD->u1.f0.dv1[25358], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[25502] = 1.0;
  memset(&SD->u1.f0.dv1[25503], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25548] = -1.0;
  memset(&SD->u1.f0.dv1[25549], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[25693] = 1.0;
  memset(&SD->u1.f0.dv1[25694], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25739] = -1.0;
  memset(&SD->u1.f0.dv1[25740], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[25884] = 1.0;
  memset(&SD->u1.f0.dv1[25885], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25930] = -1.0;
  memset(&SD->u1.f0.dv1[25931], 0, 144U * sizeof(real_T));
  SD->u1.f0.dv1[26075] = 1.0;
  memset(&SD->u1.f0.dv1[26076], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26121] = -1.0;
  memset(&SD->u1.f0.dv1[26122], 0, 1047U * sizeof(real_T));
  SD->u1.f0.dv1[27169] = 1.0;
  memset(&SD->u1.f0.dv1[27170], 0, 685U * sizeof(real_T));
  SD->u1.f0.dv1[27855] = -1.0;
  memset(&SD->u1.f0.dv1[27856], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27878] = -1.0;
  memset(&SD->u1.f0.dv1[27879], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[28046] = -1.0;
  memset(&SD->u1.f0.dv1[28047], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28069] = -1.0;
  memset(&SD->u1.f0.dv1[28070], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[28237] = -1.0;
  memset(&SD->u1.f0.dv1[28238], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28260] = -1.0;
  memset(&SD->u1.f0.dv1[28261], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[28428] = -1.0;
  memset(&SD->u1.f0.dv1[28429], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28451] = -1.0;
  memset(&SD->u1.f0.dv1[28452], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[28619] = -1.0;
  memset(&SD->u1.f0.dv1[28620], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28642] = -1.0;
  memset(&SD->u1.f0.dv1[28643], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[28810] = -1.0;
  memset(&SD->u1.f0.dv1[28811], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28833] = -1.0;
  memset(&SD->u1.f0.dv1[28834], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[29001] = -1.0;
  memset(&SD->u1.f0.dv1[29002], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29024] = -1.0;
  memset(&SD->u1.f0.dv1[29025], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[29192] = -1.0;
  memset(&SD->u1.f0.dv1[29193], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29215] = -1.0;
  memset(&SD->u1.f0.dv1[29216], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[29383] = -1.0;
  memset(&SD->u1.f0.dv1[29384], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29406] = -1.0;
  memset(&SD->u1.f0.dv1[29407], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[29574] = -1.0;
  memset(&SD->u1.f0.dv1[29575], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29597] = -1.0;
  memset(&SD->u1.f0.dv1[29598], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[29765] = -1.0;
  memset(&SD->u1.f0.dv1[29766], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29788] = -1.0;
  memset(&SD->u1.f0.dv1[29789], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[29956] = -1.0;
  memset(&SD->u1.f0.dv1[29957], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29979] = -1.0;
  memset(&SD->u1.f0.dv1[29980], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[30147] = -1.0;
  memset(&SD->u1.f0.dv1[30148], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30170] = -1.0;
  memset(&SD->u1.f0.dv1[30171], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[30338] = -1.0;
  memset(&SD->u1.f0.dv1[30339], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30361] = -1.0;
  memset(&SD->u1.f0.dv1[30362], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[30529] = -1.0;
  memset(&SD->u1.f0.dv1[30530], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30552] = -1.0;
  memset(&SD->u1.f0.dv1[30553], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[30720] = -1.0;
  memset(&SD->u1.f0.dv1[30721], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30743] = -1.0;
  memset(&SD->u1.f0.dv1[30744], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[30911] = -1.0;
  memset(&SD->u1.f0.dv1[30912], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30934] = -1.0;
  memset(&SD->u1.f0.dv1[30935], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[31102] = -1.0;
  memset(&SD->u1.f0.dv1[31103], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31125] = -1.0;
  memset(&SD->u1.f0.dv1[31126], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[31293] = -1.0;
  memset(&SD->u1.f0.dv1[31294], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31316] = -1.0;
  memset(&SD->u1.f0.dv1[31317], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[31484] = -1.0;
  memset(&SD->u1.f0.dv1[31485], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31507] = -1.0;
  memset(&SD->u1.f0.dv1[31508], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[31675] = -1.0;
  memset(&SD->u1.f0.dv1[31676], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31698] = -1.0;
  memset(&SD->u1.f0.dv1[31699], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[31866] = -1.0;
  memset(&SD->u1.f0.dv1[31867], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31889] = -1.0;
  memset(&SD->u1.f0.dv1[31890], 0, 167U * sizeof(real_T));
  SD->u1.f0.dv1[32057] = -1.0;
  memset(&SD->u1.f0.dv1[32058], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32080] = -1.0;
  memset(&SD->u1.f0.dv1[32081], 0, 218U * sizeof(real_T));
  SD->u1.f0.dv1[32299] = -1.0;
  memset(&SD->u1.f0.dv1[32300], 0, 4341U * sizeof(real_T));
  SD->u1.f0.dv1[36641] = -1.0;
  SD->u1.f0.dv1[36642] = 0.0;
  SD->u1.f0.dv1[36643] = 0.0;
  SD->u1.f0.dv1[36644] = 0.0;
  SD->u1.f0.dv1[36645] = 0.0;
  SD->u1.f0.dv1[36646] = 0.0;
  SD->u1.f0.dv1[36647] = 0.0;
  SD->u1.f0.dv1[36648] = -1.0;
  memset(&SD->u1.f0.dv1[36649], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[36832] = -1.0;
  SD->u1.f0.dv1[36833] = 0.0;
  SD->u1.f0.dv1[36834] = 0.0;
  SD->u1.f0.dv1[36835] = 0.0;
  SD->u1.f0.dv1[36836] = 0.0;
  SD->u1.f0.dv1[36837] = 0.0;
  SD->u1.f0.dv1[36838] = 0.0;
  SD->u1.f0.dv1[36839] = -1.0;
  memset(&SD->u1.f0.dv1[36840], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[37023] = -1.0;
  SD->u1.f0.dv1[37024] = 0.0;
  SD->u1.f0.dv1[37025] = 0.0;
  SD->u1.f0.dv1[37026] = 0.0;
  SD->u1.f0.dv1[37027] = 0.0;
  SD->u1.f0.dv1[37028] = 0.0;
  SD->u1.f0.dv1[37029] = 0.0;
  SD->u1.f0.dv1[37030] = -1.0;
  memset(&SD->u1.f0.dv1[37031], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[37214] = -1.0;
  SD->u1.f0.dv1[37215] = 0.0;
  SD->u1.f0.dv1[37216] = 0.0;
  SD->u1.f0.dv1[37217] = 0.0;
  SD->u1.f0.dv1[37218] = 0.0;
  SD->u1.f0.dv1[37219] = 0.0;
  SD->u1.f0.dv1[37220] = 0.0;
  SD->u1.f0.dv1[37221] = -1.0;
  memset(&SD->u1.f0.dv1[37222], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[37405] = -1.0;
  SD->u1.f0.dv1[37406] = 0.0;
  SD->u1.f0.dv1[37407] = 0.0;
  SD->u1.f0.dv1[37408] = 0.0;
  SD->u1.f0.dv1[37409] = 0.0;
  SD->u1.f0.dv1[37410] = 0.0;
  SD->u1.f0.dv1[37411] = 0.0;
  SD->u1.f0.dv1[37412] = -1.0;
  memset(&SD->u1.f0.dv1[37413], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[37596] = -1.0;
  SD->u1.f0.dv1[37597] = 0.0;
  SD->u1.f0.dv1[37598] = 0.0;
  SD->u1.f0.dv1[37599] = 0.0;
  SD->u1.f0.dv1[37600] = 0.0;
  SD->u1.f0.dv1[37601] = 0.0;
  SD->u1.f0.dv1[37602] = 0.0;
  SD->u1.f0.dv1[37603] = -1.0;
  memset(&SD->u1.f0.dv1[37604], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[37787] = -1.0;
  SD->u1.f0.dv1[37788] = 0.0;
  SD->u1.f0.dv1[37789] = 0.0;
  SD->u1.f0.dv1[37790] = 0.0;
  SD->u1.f0.dv1[37791] = 0.0;
  SD->u1.f0.dv1[37792] = 0.0;
  SD->u1.f0.dv1[37793] = 0.0;
  SD->u1.f0.dv1[37794] = -1.0;
  memset(&SD->u1.f0.dv1[37795], 0, 760U * sizeof(real_T));
  SD->u1.f0.dv1[38555] = -1.0;
  SD->u1.f0.dv1[38556] = 0.0;
  SD->u1.f0.dv1[38557] = 0.0;
  SD->u1.f0.dv1[38558] = 0.0;
  SD->u1.f0.dv1[38559] = 0.0;
  SD->u1.f0.dv1[38560] = 0.0;
  SD->u1.f0.dv1[38561] = 0.0;
  SD->u1.f0.dv1[38562] = -1.0;
  memset(&SD->u1.f0.dv1[38563], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[38746] = -1.0;
  SD->u1.f0.dv1[38747] = 0.0;
  SD->u1.f0.dv1[38748] = 0.0;
  SD->u1.f0.dv1[38749] = 0.0;
  SD->u1.f0.dv1[38750] = 0.0;
  SD->u1.f0.dv1[38751] = 0.0;
  SD->u1.f0.dv1[38752] = 0.0;
  SD->u1.f0.dv1[38753] = -1.0;
  memset(&SD->u1.f0.dv1[38754], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[38937] = -1.0;
  SD->u1.f0.dv1[38938] = 0.0;
  SD->u1.f0.dv1[38939] = 0.0;
  SD->u1.f0.dv1[38940] = 0.0;
  SD->u1.f0.dv1[38941] = 0.0;
  SD->u1.f0.dv1[38942] = 0.0;
  SD->u1.f0.dv1[38943] = 0.0;
  SD->u1.f0.dv1[38944] = -1.0;
  memset(&SD->u1.f0.dv1[38945], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[39128] = -1.0;
  SD->u1.f0.dv1[39129] = 0.0;
  SD->u1.f0.dv1[39130] = 0.0;
  SD->u1.f0.dv1[39131] = 0.0;
  SD->u1.f0.dv1[39132] = 0.0;
  SD->u1.f0.dv1[39133] = 0.0;
  SD->u1.f0.dv1[39134] = 0.0;
  SD->u1.f0.dv1[39135] = -1.0;
  memset(&SD->u1.f0.dv1[39136], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[39319] = -1.0;
  SD->u1.f0.dv1[39320] = 0.0;
  SD->u1.f0.dv1[39321] = 0.0;
  SD->u1.f0.dv1[39322] = 0.0;
  SD->u1.f0.dv1[39323] = 0.0;
  SD->u1.f0.dv1[39324] = 0.0;
  SD->u1.f0.dv1[39325] = 0.0;
  SD->u1.f0.dv1[39326] = -1.0;
  memset(&SD->u1.f0.dv1[39327], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[39510] = -1.0;
  SD->u1.f0.dv1[39511] = 0.0;
  SD->u1.f0.dv1[39512] = 0.0;
  SD->u1.f0.dv1[39513] = 0.0;
  SD->u1.f0.dv1[39514] = 0.0;
  SD->u1.f0.dv1[39515] = 0.0;
  SD->u1.f0.dv1[39516] = 0.0;
  SD->u1.f0.dv1[39517] = -1.0;
  memset(&SD->u1.f0.dv1[39518], 0, 183U * sizeof(real_T));
  SD->u1.f0.dv1[39701] = -1.0;
  SD->u1.f0.dv1[39702] = 0.0;
  SD->u1.f0.dv1[39703] = 0.0;
  SD->u1.f0.dv1[39704] = 0.0;
  SD->u1.f0.dv1[39705] = 0.0;
  SD->u1.f0.dv1[39706] = 0.0;
  SD->u1.f0.dv1[39707] = 0.0;
  SD->u1.f0.dv1[39708] = -1.0;
  memset(&SD->u1.f0.dv1[39709], 0, 2091U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 190], &SD->u1.f0.dv1[i1 * 190], 190U * sizeof(real_T));
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
  biq[168] = t9;
  biq[169] = t9;
  biq[170] = t9;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t9;
  biq[174] = t9;
  biq[175] = t10;
  biq[176] = t10;
  biq[177] = t10;
  biq[178] = t10;
  biq[179] = t10;
  biq[180] = t10;
  biq[181] = t10;
  biq[182] = t11;
  biq[183] = t11;
  biq[184] = t11;
  biq[185] = t11;
  biq[186] = t11;
  biq[187] = t11;
  biq[188] = t11;
  biq[189] = -in9[1];
}

/* End of code generation (IqFast_LeftStart3V40.cpp) */
