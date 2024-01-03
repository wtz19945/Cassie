/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart2V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart2V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step2.h"
#include "IqFast_LeftStart2V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart2V40(Fast_MPCV40_form_Step2StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[42680], real_T biq[194])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART2V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART2V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:22:57 */
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
  memset(&SD->u1.f0.dv1[139], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[389] = -1.0;
  memset(&SD->u1.f0.dv1[390], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[435] = 1.0;
  memset(&SD->u1.f0.dv1[436], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[481] = -in11[2];
  memset(&SD->u1.f0.dv1[482], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[527] = -in11[2];
  memset(&SD->u1.f0.dv1[528], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[778] = -1.0;
  memset(&SD->u1.f0.dv1[779], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[824] = 1.0;
  memset(&SD->u1.f0.dv1[825], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[870] = -in11[2];
  memset(&SD->u1.f0.dv1[871], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[916] = -in11[2];
  memset(&SD->u1.f0.dv1[917], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[1167] = -1.0;
  memset(&SD->u1.f0.dv1[1168], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1213] = 1.0;
  memset(&SD->u1.f0.dv1[1214], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1259] = -in11[2];
  memset(&SD->u1.f0.dv1[1260], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1305] = -in11[2];
  memset(&SD->u1.f0.dv1[1306], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[1556] = -1.0;
  memset(&SD->u1.f0.dv1[1557], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1602] = 1.0;
  memset(&SD->u1.f0.dv1[1603], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1648] = -in11[2];
  memset(&SD->u1.f0.dv1[1649], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1694] = -in11[2];
  memset(&SD->u1.f0.dv1[1695], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[1945] = -1.0;
  memset(&SD->u1.f0.dv1[1946], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1991] = 1.0;
  memset(&SD->u1.f0.dv1[1992], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2037] = -in11[2];
  memset(&SD->u1.f0.dv1[2038], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2083] = -in11[2];
  memset(&SD->u1.f0.dv1[2084], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[2334] = -1.0;
  memset(&SD->u1.f0.dv1[2335], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2380] = 1.0;
  memset(&SD->u1.f0.dv1[2381], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2426] = -in11[2];
  memset(&SD->u1.f0.dv1[2427], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2472] = -in11[2];
  memset(&SD->u1.f0.dv1[2473], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[2723] = -1.0;
  memset(&SD->u1.f0.dv1[2724], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2769] = 1.0;
  memset(&SD->u1.f0.dv1[2770], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2815] = -in11[2];
  memset(&SD->u1.f0.dv1[2816], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2861] = -in11[2];
  memset(&SD->u1.f0.dv1[2862], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[3112] = -1.0;
  memset(&SD->u1.f0.dv1[3113], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3158] = 1.0;
  memset(&SD->u1.f0.dv1[3159], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3204] = -in11[2];
  memset(&SD->u1.f0.dv1[3205], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3250] = -in11[2];
  memset(&SD->u1.f0.dv1[3251], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[3501] = -1.0;
  memset(&SD->u1.f0.dv1[3502], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3547] = 1.0;
  memset(&SD->u1.f0.dv1[3548], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3593] = -in11[2];
  memset(&SD->u1.f0.dv1[3594], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3639] = -in11[2];
  memset(&SD->u1.f0.dv1[3640], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[3890] = -1.0;
  memset(&SD->u1.f0.dv1[3891], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3936] = 1.0;
  memset(&SD->u1.f0.dv1[3937], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3982] = -in11[2];
  memset(&SD->u1.f0.dv1[3983], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4028] = -in11[2];
  memset(&SD->u1.f0.dv1[4029], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[4279] = -1.0;
  memset(&SD->u1.f0.dv1[4280], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4325] = 1.0;
  memset(&SD->u1.f0.dv1[4326], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4371] = -in11[2];
  memset(&SD->u1.f0.dv1[4372], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4417] = -in11[2];
  memset(&SD->u1.f0.dv1[4418], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[4668] = -1.0;
  memset(&SD->u1.f0.dv1[4669], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4714] = 1.0;
  memset(&SD->u1.f0.dv1[4715], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4760] = -in11[2];
  memset(&SD->u1.f0.dv1[4761], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4806] = -in11[2];
  memset(&SD->u1.f0.dv1[4807], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[5057] = -1.0;
  memset(&SD->u1.f0.dv1[5058], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5103] = 1.0;
  memset(&SD->u1.f0.dv1[5104], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5149] = -in11[2];
  memset(&SD->u1.f0.dv1[5150], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5195] = -in11[2];
  memset(&SD->u1.f0.dv1[5196], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[5446] = -1.0;
  memset(&SD->u1.f0.dv1[5447], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5492] = 1.0;
  memset(&SD->u1.f0.dv1[5493], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5538] = -in11[2];
  memset(&SD->u1.f0.dv1[5539], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5584] = -in11[2];
  memset(&SD->u1.f0.dv1[5585], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[5835] = -1.0;
  memset(&SD->u1.f0.dv1[5836], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5881] = 1.0;
  memset(&SD->u1.f0.dv1[5882], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5927] = -in11[2];
  memset(&SD->u1.f0.dv1[5928], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5973] = -in11[2];
  memset(&SD->u1.f0.dv1[5974], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[6224] = -1.0;
  memset(&SD->u1.f0.dv1[6225], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6270] = 1.0;
  memset(&SD->u1.f0.dv1[6271], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6316] = -in11[2];
  memset(&SD->u1.f0.dv1[6317], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6362] = -in11[2];
  memset(&SD->u1.f0.dv1[6363], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[6613] = -1.0;
  memset(&SD->u1.f0.dv1[6614], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6659] = 1.0;
  memset(&SD->u1.f0.dv1[6660], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6705] = -in11[2];
  memset(&SD->u1.f0.dv1[6706], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6751] = -in11[2];
  memset(&SD->u1.f0.dv1[6752], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[7002] = -1.0;
  memset(&SD->u1.f0.dv1[7003], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7048] = 1.0;
  memset(&SD->u1.f0.dv1[7049], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7094] = -in11[2];
  memset(&SD->u1.f0.dv1[7095], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7140] = -in11[2];
  memset(&SD->u1.f0.dv1[7141], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[7391] = -1.0;
  memset(&SD->u1.f0.dv1[7392], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7437] = 1.0;
  memset(&SD->u1.f0.dv1[7438], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7483] = -in11[2];
  memset(&SD->u1.f0.dv1[7484], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7529] = -in11[2];
  memset(&SD->u1.f0.dv1[7530], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[7780] = -1.0;
  memset(&SD->u1.f0.dv1[7781], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7826] = 1.0;
  memset(&SD->u1.f0.dv1[7827], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7872] = -in11[2];
  memset(&SD->u1.f0.dv1[7873], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7918] = -in11[2];
  memset(&SD->u1.f0.dv1[7919], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[8169] = -1.0;
  memset(&SD->u1.f0.dv1[8170], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8215] = 1.0;
  memset(&SD->u1.f0.dv1[8216], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8261] = -in11[2];
  memset(&SD->u1.f0.dv1[8262], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8307] = -in11[2];
  memset(&SD->u1.f0.dv1[8308], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[8558] = -1.0;
  memset(&SD->u1.f0.dv1[8559], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8604] = 1.0;
  memset(&SD->u1.f0.dv1[8605], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8650] = -in11[2];
  memset(&SD->u1.f0.dv1[8651], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8696] = -in11[2];
  memset(&SD->u1.f0.dv1[8697], 0, 250U * sizeof(real_T));
  SD->u1.f0.dv1[8947] = -1.0;
  memset(&SD->u1.f0.dv1[8948], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8993] = 1.0;
  memset(&SD->u1.f0.dv1[8994], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9016] = -in11[3];
  memset(&SD->u1.f0.dv1[9017], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9062] = -in11[3];
  memset(&SD->u1.f0.dv1[9063], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[9336] = -1.0;
  memset(&SD->u1.f0.dv1[9337], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9382] = 1.0;
  memset(&SD->u1.f0.dv1[9383], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9405] = -in11[3];
  memset(&SD->u1.f0.dv1[9406], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9451] = -in11[3];
  memset(&SD->u1.f0.dv1[9452], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[9725] = -1.0;
  memset(&SD->u1.f0.dv1[9726], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9771] = 1.0;
  memset(&SD->u1.f0.dv1[9772], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9794] = -in11[3];
  memset(&SD->u1.f0.dv1[9795], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9840] = -in11[3];
  memset(&SD->u1.f0.dv1[9841], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[10114] = -1.0;
  memset(&SD->u1.f0.dv1[10115], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10160] = 1.0;
  memset(&SD->u1.f0.dv1[10161], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10183] = -in11[3];
  memset(&SD->u1.f0.dv1[10184], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10229] = -in11[3];
  memset(&SD->u1.f0.dv1[10230], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[10503] = -1.0;
  memset(&SD->u1.f0.dv1[10504], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10549] = 1.0;
  memset(&SD->u1.f0.dv1[10550], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10572] = -in11[3];
  memset(&SD->u1.f0.dv1[10573], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10618] = -in11[3];
  memset(&SD->u1.f0.dv1[10619], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[10892] = -1.0;
  memset(&SD->u1.f0.dv1[10893], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10938] = 1.0;
  memset(&SD->u1.f0.dv1[10939], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10961] = -in11[3];
  memset(&SD->u1.f0.dv1[10962], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11007] = -in11[3];
  memset(&SD->u1.f0.dv1[11008], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[11281] = -1.0;
  memset(&SD->u1.f0.dv1[11282], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11327] = 1.0;
  memset(&SD->u1.f0.dv1[11328], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11350] = -in11[3];
  memset(&SD->u1.f0.dv1[11351], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11396] = -in11[3];
  memset(&SD->u1.f0.dv1[11397], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[11670] = -1.0;
  memset(&SD->u1.f0.dv1[11671], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11716] = 1.0;
  memset(&SD->u1.f0.dv1[11717], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11739] = -in11[3];
  memset(&SD->u1.f0.dv1[11740], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11785] = -in11[3];
  memset(&SD->u1.f0.dv1[11786], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[12059] = -1.0;
  memset(&SD->u1.f0.dv1[12060], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12105] = 1.0;
  memset(&SD->u1.f0.dv1[12106], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12128] = -in11[3];
  memset(&SD->u1.f0.dv1[12129], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12174] = -in11[3];
  memset(&SD->u1.f0.dv1[12175], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[12448] = -1.0;
  memset(&SD->u1.f0.dv1[12449], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12494] = 1.0;
  memset(&SD->u1.f0.dv1[12495], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12517] = -in11[3];
  memset(&SD->u1.f0.dv1[12518], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12563] = -in11[3];
  memset(&SD->u1.f0.dv1[12564], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[12837] = -1.0;
  memset(&SD->u1.f0.dv1[12838], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12883] = 1.0;
  memset(&SD->u1.f0.dv1[12884], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12906] = -in11[3];
  memset(&SD->u1.f0.dv1[12907], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12952] = -in11[3];
  memset(&SD->u1.f0.dv1[12953], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[13226] = -1.0;
  memset(&SD->u1.f0.dv1[13227], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13272] = 1.0;
  memset(&SD->u1.f0.dv1[13273], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13295] = -in11[3];
  memset(&SD->u1.f0.dv1[13296], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13341] = -in11[3];
  memset(&SD->u1.f0.dv1[13342], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[13615] = -1.0;
  memset(&SD->u1.f0.dv1[13616], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13661] = 1.0;
  memset(&SD->u1.f0.dv1[13662], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13684] = -in11[3];
  memset(&SD->u1.f0.dv1[13685], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13730] = -in11[3];
  memset(&SD->u1.f0.dv1[13731], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[14004] = -1.0;
  memset(&SD->u1.f0.dv1[14005], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14050] = 1.0;
  memset(&SD->u1.f0.dv1[14051], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14073] = -in11[3];
  memset(&SD->u1.f0.dv1[14074], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14119] = -in11[3];
  memset(&SD->u1.f0.dv1[14120], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[14393] = -1.0;
  memset(&SD->u1.f0.dv1[14394], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14439] = 1.0;
  memset(&SD->u1.f0.dv1[14440], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14462] = -in11[3];
  memset(&SD->u1.f0.dv1[14463], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14508] = -in11[3];
  memset(&SD->u1.f0.dv1[14509], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[14782] = -1.0;
  memset(&SD->u1.f0.dv1[14783], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14828] = 1.0;
  memset(&SD->u1.f0.dv1[14829], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14851] = -in11[3];
  memset(&SD->u1.f0.dv1[14852], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14897] = -in11[3];
  memset(&SD->u1.f0.dv1[14898], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[15171] = -1.0;
  memset(&SD->u1.f0.dv1[15172], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15217] = 1.0;
  memset(&SD->u1.f0.dv1[15218], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15240] = -in11[3];
  memset(&SD->u1.f0.dv1[15241], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15286] = -in11[3];
  memset(&SD->u1.f0.dv1[15287], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[15560] = -1.0;
  memset(&SD->u1.f0.dv1[15561], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15606] = 1.0;
  memset(&SD->u1.f0.dv1[15607], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15629] = -in11[3];
  memset(&SD->u1.f0.dv1[15630], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15675] = -in11[3];
  memset(&SD->u1.f0.dv1[15676], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[15949] = -1.0;
  memset(&SD->u1.f0.dv1[15950], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15995] = 1.0;
  memset(&SD->u1.f0.dv1[15996], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16018] = -in11[3];
  memset(&SD->u1.f0.dv1[16019], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16064] = -in11[3];
  memset(&SD->u1.f0.dv1[16065], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[16338] = -1.0;
  memset(&SD->u1.f0.dv1[16339], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16384] = 1.0;
  memset(&SD->u1.f0.dv1[16385], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16407] = -in11[3];
  memset(&SD->u1.f0.dv1[16408], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16453] = -in11[3];
  memset(&SD->u1.f0.dv1[16454], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[16727] = -1.0;
  memset(&SD->u1.f0.dv1[16728], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16773] = 1.0;
  memset(&SD->u1.f0.dv1[16774], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16796] = -in11[3];
  memset(&SD->u1.f0.dv1[16797], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16842] = -in11[3];
  memset(&SD->u1.f0.dv1[16843], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[17116] = -1.0;
  memset(&SD->u1.f0.dv1[17117], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17162] = 1.0;
  memset(&SD->u1.f0.dv1[17163], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17185] = -in11[3];
  memset(&SD->u1.f0.dv1[17186], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17231] = -in11[3];
  memset(&SD->u1.f0.dv1[17232], 0, 273U * sizeof(real_T));
  SD->u1.f0.dv1[17505] = -1.0;
  memset(&SD->u1.f0.dv1[17506], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17551] = 1.0;
  memset(&SD->u1.f0.dv1[17552], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[17574] = -in11[3];
  memset(&SD->u1.f0.dv1[17575], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17620] = -in11[3];
  memset(&SD->u1.f0.dv1[17621], 0, 227U * sizeof(real_T));
  SD->u1.f0.dv1[17848] = 1.0;
  memset(&SD->u1.f0.dv1[17849], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17894] = -1.0;
  memset(&SD->u1.f0.dv1[17895], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18009] = 1.0;
  SD->u1.f0.dv1[18010] = 0.0;
  SD->u1.f0.dv1[18011] = 0.0;
  SD->u1.f0.dv1[18012] = 0.0;
  SD->u1.f0.dv1[18013] = 0.0;
  SD->u1.f0.dv1[18014] = 0.0;
  SD->u1.f0.dv1[18015] = 0.0;
  SD->u1.f0.dv1[18016] = 0.0;
  SD->u1.f0.dv1[18017] = -1.0;
  memset(&SD->u1.f0.dv1[18018], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[18043] = 1.0;
  memset(&SD->u1.f0.dv1[18044], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18089] = -1.0;
  memset(&SD->u1.f0.dv1[18090], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18204] = 1.0;
  SD->u1.f0.dv1[18205] = 0.0;
  SD->u1.f0.dv1[18206] = 0.0;
  SD->u1.f0.dv1[18207] = 0.0;
  SD->u1.f0.dv1[18208] = 0.0;
  SD->u1.f0.dv1[18209] = 0.0;
  SD->u1.f0.dv1[18210] = 0.0;
  SD->u1.f0.dv1[18211] = 0.0;
  SD->u1.f0.dv1[18212] = -1.0;
  memset(&SD->u1.f0.dv1[18213], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[18238] = 1.0;
  memset(&SD->u1.f0.dv1[18239], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18284] = -1.0;
  memset(&SD->u1.f0.dv1[18285], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18399] = 1.0;
  SD->u1.f0.dv1[18400] = 0.0;
  SD->u1.f0.dv1[18401] = 0.0;
  SD->u1.f0.dv1[18402] = 0.0;
  SD->u1.f0.dv1[18403] = 0.0;
  SD->u1.f0.dv1[18404] = 0.0;
  SD->u1.f0.dv1[18405] = 0.0;
  SD->u1.f0.dv1[18406] = 0.0;
  SD->u1.f0.dv1[18407] = -1.0;
  memset(&SD->u1.f0.dv1[18408], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[18433] = 1.0;
  memset(&SD->u1.f0.dv1[18434], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18479] = -1.0;
  memset(&SD->u1.f0.dv1[18480], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18594] = 1.0;
  SD->u1.f0.dv1[18595] = 0.0;
  SD->u1.f0.dv1[18596] = 0.0;
  SD->u1.f0.dv1[18597] = 0.0;
  SD->u1.f0.dv1[18598] = 0.0;
  SD->u1.f0.dv1[18599] = 0.0;
  SD->u1.f0.dv1[18600] = 0.0;
  SD->u1.f0.dv1[18601] = 0.0;
  SD->u1.f0.dv1[18602] = -1.0;
  memset(&SD->u1.f0.dv1[18603], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[18628] = 1.0;
  memset(&SD->u1.f0.dv1[18629], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18674] = -1.0;
  memset(&SD->u1.f0.dv1[18675], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18789] = 1.0;
  SD->u1.f0.dv1[18790] = 0.0;
  SD->u1.f0.dv1[18791] = 0.0;
  SD->u1.f0.dv1[18792] = 0.0;
  SD->u1.f0.dv1[18793] = 0.0;
  SD->u1.f0.dv1[18794] = 0.0;
  SD->u1.f0.dv1[18795] = 0.0;
  SD->u1.f0.dv1[18796] = 0.0;
  SD->u1.f0.dv1[18797] = -1.0;
  memset(&SD->u1.f0.dv1[18798], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[18823] = 1.0;
  memset(&SD->u1.f0.dv1[18824], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18869] = -1.0;
  memset(&SD->u1.f0.dv1[18870], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18984] = 1.0;
  SD->u1.f0.dv1[18985] = 0.0;
  SD->u1.f0.dv1[18986] = 0.0;
  SD->u1.f0.dv1[18987] = 0.0;
  SD->u1.f0.dv1[18988] = 0.0;
  SD->u1.f0.dv1[18989] = 0.0;
  SD->u1.f0.dv1[18990] = 0.0;
  SD->u1.f0.dv1[18991] = 0.0;
  SD->u1.f0.dv1[18992] = -1.0;
  memset(&SD->u1.f0.dv1[18993], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[19018] = 1.0;
  memset(&SD->u1.f0.dv1[19019], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19064] = -1.0;
  memset(&SD->u1.f0.dv1[19065], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19179] = 1.0;
  SD->u1.f0.dv1[19180] = 0.0;
  SD->u1.f0.dv1[19181] = 0.0;
  SD->u1.f0.dv1[19182] = 0.0;
  SD->u1.f0.dv1[19183] = 0.0;
  SD->u1.f0.dv1[19184] = 0.0;
  SD->u1.f0.dv1[19185] = 0.0;
  SD->u1.f0.dv1[19186] = 0.0;
  SD->u1.f0.dv1[19187] = -1.0;
  memset(&SD->u1.f0.dv1[19188], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[19213] = 1.0;
  memset(&SD->u1.f0.dv1[19214], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19259] = -1.0;
  memset(&SD->u1.f0.dv1[19260], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[19374] = 1.0;
  SD->u1.f0.dv1[19375] = 0.0;
  SD->u1.f0.dv1[19376] = 0.0;
  SD->u1.f0.dv1[19377] = 0.0;
  SD->u1.f0.dv1[19378] = 0.0;
  SD->u1.f0.dv1[19379] = 0.0;
  SD->u1.f0.dv1[19380] = 0.0;
  SD->u1.f0.dv1[19381] = 0.0;
  SD->u1.f0.dv1[19382] = -1.0;
  memset(&SD->u1.f0.dv1[19383], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[19408] = 1.0;
  memset(&SD->u1.f0.dv1[19409], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19454] = -1.0;
  memset(&SD->u1.f0.dv1[19455], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[19603] = 1.0;
  memset(&SD->u1.f0.dv1[19604], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19649] = -1.0;
  memset(&SD->u1.f0.dv1[19650], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[19798] = 1.0;
  memset(&SD->u1.f0.dv1[19799], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19844] = -1.0;
  memset(&SD->u1.f0.dv1[19845], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[19993] = 1.0;
  memset(&SD->u1.f0.dv1[19994], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20039] = -1.0;
  memset(&SD->u1.f0.dv1[20040], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[20188] = 1.0;
  memset(&SD->u1.f0.dv1[20189], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20234] = -1.0;
  memset(&SD->u1.f0.dv1[20235], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[20383] = 1.0;
  memset(&SD->u1.f0.dv1[20384], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20429] = -1.0;
  memset(&SD->u1.f0.dv1[20430], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[20578] = 1.0;
  memset(&SD->u1.f0.dv1[20579], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20624] = -1.0;
  memset(&SD->u1.f0.dv1[20625], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[20773] = 1.0;
  memset(&SD->u1.f0.dv1[20774], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20819] = -1.0;
  memset(&SD->u1.f0.dv1[20820], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[20968] = 1.0;
  memset(&SD->u1.f0.dv1[20969], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21014] = -1.0;
  memset(&SD->u1.f0.dv1[21015], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[21163] = 1.0;
  memset(&SD->u1.f0.dv1[21164], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21209] = -1.0;
  memset(&SD->u1.f0.dv1[21210], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[21358] = 1.0;
  memset(&SD->u1.f0.dv1[21359], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21404] = -1.0;
  memset(&SD->u1.f0.dv1[21405], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[21553] = 1.0;
  memset(&SD->u1.f0.dv1[21554], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21599] = -1.0;
  memset(&SD->u1.f0.dv1[21600], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[21748] = 1.0;
  memset(&SD->u1.f0.dv1[21749], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21794] = -1.0;
  memset(&SD->u1.f0.dv1[21795], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[21943] = 1.0;
  memset(&SD->u1.f0.dv1[21944], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21989] = -1.0;
  memset(&SD->u1.f0.dv1[21990], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[22138] = 1.0;
  memset(&SD->u1.f0.dv1[22139], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22184] = -1.0;
  memset(&SD->u1.f0.dv1[22185], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[22333] = 1.0;
  memset(&SD->u1.f0.dv1[22334], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22379] = -1.0;
  memset(&SD->u1.f0.dv1[22380], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[22487] = 1.0;
  SD->u1.f0.dv1[22488] = 0.0;
  SD->u1.f0.dv1[22489] = 0.0;
  SD->u1.f0.dv1[22490] = 0.0;
  SD->u1.f0.dv1[22491] = 0.0;
  SD->u1.f0.dv1[22492] = 0.0;
  SD->u1.f0.dv1[22493] = 0.0;
  SD->u1.f0.dv1[22494] = 0.0;
  SD->u1.f0.dv1[22495] = -1.0;
  memset(&SD->u1.f0.dv1[22496], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[22528] = 1.0;
  memset(&SD->u1.f0.dv1[22529], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22574] = -1.0;
  memset(&SD->u1.f0.dv1[22575], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[22682] = 1.0;
  SD->u1.f0.dv1[22683] = 0.0;
  SD->u1.f0.dv1[22684] = 0.0;
  SD->u1.f0.dv1[22685] = 0.0;
  SD->u1.f0.dv1[22686] = 0.0;
  SD->u1.f0.dv1[22687] = 0.0;
  SD->u1.f0.dv1[22688] = 0.0;
  SD->u1.f0.dv1[22689] = 0.0;
  SD->u1.f0.dv1[22690] = -1.0;
  memset(&SD->u1.f0.dv1[22691], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[22723] = 1.0;
  memset(&SD->u1.f0.dv1[22724], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22769] = -1.0;
  memset(&SD->u1.f0.dv1[22770], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[22877] = 1.0;
  SD->u1.f0.dv1[22878] = 0.0;
  SD->u1.f0.dv1[22879] = 0.0;
  SD->u1.f0.dv1[22880] = 0.0;
  SD->u1.f0.dv1[22881] = 0.0;
  SD->u1.f0.dv1[22882] = 0.0;
  SD->u1.f0.dv1[22883] = 0.0;
  SD->u1.f0.dv1[22884] = 0.0;
  SD->u1.f0.dv1[22885] = -1.0;
  memset(&SD->u1.f0.dv1[22886], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[22918] = 1.0;
  memset(&SD->u1.f0.dv1[22919], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22964] = -1.0;
  memset(&SD->u1.f0.dv1[22965], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[23072] = 1.0;
  SD->u1.f0.dv1[23073] = 0.0;
  SD->u1.f0.dv1[23074] = 0.0;
  SD->u1.f0.dv1[23075] = 0.0;
  SD->u1.f0.dv1[23076] = 0.0;
  SD->u1.f0.dv1[23077] = 0.0;
  SD->u1.f0.dv1[23078] = 0.0;
  SD->u1.f0.dv1[23079] = 0.0;
  SD->u1.f0.dv1[23080] = -1.0;
  memset(&SD->u1.f0.dv1[23081], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[23113] = 1.0;
  memset(&SD->u1.f0.dv1[23114], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23159] = -1.0;
  memset(&SD->u1.f0.dv1[23160], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[23267] = 1.0;
  SD->u1.f0.dv1[23268] = 0.0;
  SD->u1.f0.dv1[23269] = 0.0;
  SD->u1.f0.dv1[23270] = 0.0;
  SD->u1.f0.dv1[23271] = 0.0;
  SD->u1.f0.dv1[23272] = 0.0;
  SD->u1.f0.dv1[23273] = 0.0;
  SD->u1.f0.dv1[23274] = 0.0;
  SD->u1.f0.dv1[23275] = -1.0;
  memset(&SD->u1.f0.dv1[23276], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[23308] = 1.0;
  memset(&SD->u1.f0.dv1[23309], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23354] = -1.0;
  memset(&SD->u1.f0.dv1[23355], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[23462] = 1.0;
  SD->u1.f0.dv1[23463] = 0.0;
  SD->u1.f0.dv1[23464] = 0.0;
  SD->u1.f0.dv1[23465] = 0.0;
  SD->u1.f0.dv1[23466] = 0.0;
  SD->u1.f0.dv1[23467] = 0.0;
  SD->u1.f0.dv1[23468] = 0.0;
  SD->u1.f0.dv1[23469] = 0.0;
  SD->u1.f0.dv1[23470] = -1.0;
  memset(&SD->u1.f0.dv1[23471], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[23503] = 1.0;
  memset(&SD->u1.f0.dv1[23504], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23549] = -1.0;
  memset(&SD->u1.f0.dv1[23550], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[23657] = 1.0;
  SD->u1.f0.dv1[23658] = 0.0;
  SD->u1.f0.dv1[23659] = 0.0;
  SD->u1.f0.dv1[23660] = 0.0;
  SD->u1.f0.dv1[23661] = 0.0;
  SD->u1.f0.dv1[23662] = 0.0;
  SD->u1.f0.dv1[23663] = 0.0;
  SD->u1.f0.dv1[23664] = 0.0;
  SD->u1.f0.dv1[23665] = -1.0;
  memset(&SD->u1.f0.dv1[23666], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[23698] = 1.0;
  memset(&SD->u1.f0.dv1[23699], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23744] = -1.0;
  memset(&SD->u1.f0.dv1[23745], 0, 107U * sizeof(real_T));
  SD->u1.f0.dv1[23852] = 1.0;
  SD->u1.f0.dv1[23853] = 0.0;
  SD->u1.f0.dv1[23854] = 0.0;
  SD->u1.f0.dv1[23855] = 0.0;
  SD->u1.f0.dv1[23856] = 0.0;
  SD->u1.f0.dv1[23857] = 0.0;
  SD->u1.f0.dv1[23858] = 0.0;
  SD->u1.f0.dv1[23859] = 0.0;
  SD->u1.f0.dv1[23860] = -1.0;
  memset(&SD->u1.f0.dv1[23861], 0, sizeof(real_T) << 5);
  SD->u1.f0.dv1[23893] = 1.0;
  memset(&SD->u1.f0.dv1[23894], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23939] = -1.0;
  memset(&SD->u1.f0.dv1[23940], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[24088] = 1.0;
  memset(&SD->u1.f0.dv1[24089], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24134] = -1.0;
  memset(&SD->u1.f0.dv1[24135], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[24283] = 1.0;
  memset(&SD->u1.f0.dv1[24284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24329] = -1.0;
  memset(&SD->u1.f0.dv1[24330], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[24478] = 1.0;
  memset(&SD->u1.f0.dv1[24479], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24524] = -1.0;
  memset(&SD->u1.f0.dv1[24525], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[24673] = 1.0;
  memset(&SD->u1.f0.dv1[24674], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24719] = -1.0;
  memset(&SD->u1.f0.dv1[24720], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[24868] = 1.0;
  memset(&SD->u1.f0.dv1[24869], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24914] = -1.0;
  memset(&SD->u1.f0.dv1[24915], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[25063] = 1.0;
  memset(&SD->u1.f0.dv1[25064], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25109] = -1.0;
  memset(&SD->u1.f0.dv1[25110], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[25258] = 1.0;
  memset(&SD->u1.f0.dv1[25259], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25304] = -1.0;
  memset(&SD->u1.f0.dv1[25305], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[25453] = 1.0;
  memset(&SD->u1.f0.dv1[25454], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25499] = -1.0;
  memset(&SD->u1.f0.dv1[25500], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[25648] = 1.0;
  memset(&SD->u1.f0.dv1[25649], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25694] = -1.0;
  memset(&SD->u1.f0.dv1[25695], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[25843] = 1.0;
  memset(&SD->u1.f0.dv1[25844], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25889] = -1.0;
  memset(&SD->u1.f0.dv1[25890], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[26038] = 1.0;
  memset(&SD->u1.f0.dv1[26039], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26084] = -1.0;
  memset(&SD->u1.f0.dv1[26085], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[26233] = 1.0;
  memset(&SD->u1.f0.dv1[26234], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26279] = -1.0;
  memset(&SD->u1.f0.dv1[26280], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[26428] = 1.0;
  memset(&SD->u1.f0.dv1[26429], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26474] = -1.0;
  memset(&SD->u1.f0.dv1[26475], 0, 148U * sizeof(real_T));
  SD->u1.f0.dv1[26623] = 1.0;
  memset(&SD->u1.f0.dv1[26624], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[26669] = -1.0;
  memset(&SD->u1.f0.dv1[26670], 0, 1071U * sizeof(real_T));
  SD->u1.f0.dv1[27741] = 1.0;
  memset(&SD->u1.f0.dv1[27742], 0, 697U * sizeof(real_T));
  SD->u1.f0.dv1[28439] = -1.0;
  memset(&SD->u1.f0.dv1[28440], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28462] = -1.0;
  memset(&SD->u1.f0.dv1[28463], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[28634] = -1.0;
  memset(&SD->u1.f0.dv1[28635], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28657] = -1.0;
  memset(&SD->u1.f0.dv1[28658], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[28829] = -1.0;
  memset(&SD->u1.f0.dv1[28830], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28852] = -1.0;
  memset(&SD->u1.f0.dv1[28853], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[29024] = -1.0;
  memset(&SD->u1.f0.dv1[29025], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29047] = -1.0;
  memset(&SD->u1.f0.dv1[29048], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[29219] = -1.0;
  memset(&SD->u1.f0.dv1[29220], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29242] = -1.0;
  memset(&SD->u1.f0.dv1[29243], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[29414] = -1.0;
  memset(&SD->u1.f0.dv1[29415], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29437] = -1.0;
  memset(&SD->u1.f0.dv1[29438], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[29609] = -1.0;
  memset(&SD->u1.f0.dv1[29610], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29632] = -1.0;
  memset(&SD->u1.f0.dv1[29633], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[29804] = -1.0;
  memset(&SD->u1.f0.dv1[29805], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29827] = -1.0;
  memset(&SD->u1.f0.dv1[29828], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[29999] = -1.0;
  memset(&SD->u1.f0.dv1[30000], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30022] = -1.0;
  memset(&SD->u1.f0.dv1[30023], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[30194] = -1.0;
  memset(&SD->u1.f0.dv1[30195], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30217] = -1.0;
  memset(&SD->u1.f0.dv1[30218], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[30389] = -1.0;
  memset(&SD->u1.f0.dv1[30390], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30412] = -1.0;
  memset(&SD->u1.f0.dv1[30413], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[30584] = -1.0;
  memset(&SD->u1.f0.dv1[30585], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30607] = -1.0;
  memset(&SD->u1.f0.dv1[30608], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[30779] = -1.0;
  memset(&SD->u1.f0.dv1[30780], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30802] = -1.0;
  memset(&SD->u1.f0.dv1[30803], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[30974] = -1.0;
  memset(&SD->u1.f0.dv1[30975], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30997] = -1.0;
  memset(&SD->u1.f0.dv1[30998], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[31169] = -1.0;
  memset(&SD->u1.f0.dv1[31170], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31192] = -1.0;
  memset(&SD->u1.f0.dv1[31193], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[31364] = -1.0;
  memset(&SD->u1.f0.dv1[31365], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31387] = -1.0;
  memset(&SD->u1.f0.dv1[31388], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[31559] = -1.0;
  memset(&SD->u1.f0.dv1[31560], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31582] = -1.0;
  memset(&SD->u1.f0.dv1[31583], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[31754] = -1.0;
  memset(&SD->u1.f0.dv1[31755], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31777] = -1.0;
  memset(&SD->u1.f0.dv1[31778], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[31949] = -1.0;
  memset(&SD->u1.f0.dv1[31950], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31972] = -1.0;
  memset(&SD->u1.f0.dv1[31973], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[32144] = -1.0;
  memset(&SD->u1.f0.dv1[32145], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32167] = -1.0;
  memset(&SD->u1.f0.dv1[32168], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[32339] = -1.0;
  memset(&SD->u1.f0.dv1[32340], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32362] = -1.0;
  memset(&SD->u1.f0.dv1[32363], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[32534] = -1.0;
  memset(&SD->u1.f0.dv1[32535], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32557] = -1.0;
  memset(&SD->u1.f0.dv1[32558], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[32729] = -1.0;
  memset(&SD->u1.f0.dv1[32730], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[32752] = -1.0;
  memset(&SD->u1.f0.dv1[32753], 0, 226U * sizeof(real_T));
  SD->u1.f0.dv1[32979] = -1.0;
  memset(&SD->u1.f0.dv1[32980], 0, 4429U * sizeof(real_T));
  SD->u1.f0.dv1[37409] = -1.0;
  SD->u1.f0.dv1[37410] = 0.0;
  SD->u1.f0.dv1[37411] = 0.0;
  SD->u1.f0.dv1[37412] = 0.0;
  SD->u1.f0.dv1[37413] = 0.0;
  SD->u1.f0.dv1[37414] = 0.0;
  SD->u1.f0.dv1[37415] = 0.0;
  SD->u1.f0.dv1[37416] = 0.0;
  SD->u1.f0.dv1[37417] = -1.0;
  memset(&SD->u1.f0.dv1[37418], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[37604] = -1.0;
  SD->u1.f0.dv1[37605] = 0.0;
  SD->u1.f0.dv1[37606] = 0.0;
  SD->u1.f0.dv1[37607] = 0.0;
  SD->u1.f0.dv1[37608] = 0.0;
  SD->u1.f0.dv1[37609] = 0.0;
  SD->u1.f0.dv1[37610] = 0.0;
  SD->u1.f0.dv1[37611] = 0.0;
  SD->u1.f0.dv1[37612] = -1.0;
  memset(&SD->u1.f0.dv1[37613], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[37799] = -1.0;
  SD->u1.f0.dv1[37800] = 0.0;
  SD->u1.f0.dv1[37801] = 0.0;
  SD->u1.f0.dv1[37802] = 0.0;
  SD->u1.f0.dv1[37803] = 0.0;
  SD->u1.f0.dv1[37804] = 0.0;
  SD->u1.f0.dv1[37805] = 0.0;
  SD->u1.f0.dv1[37806] = 0.0;
  SD->u1.f0.dv1[37807] = -1.0;
  memset(&SD->u1.f0.dv1[37808], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[37994] = -1.0;
  SD->u1.f0.dv1[37995] = 0.0;
  SD->u1.f0.dv1[37996] = 0.0;
  SD->u1.f0.dv1[37997] = 0.0;
  SD->u1.f0.dv1[37998] = 0.0;
  SD->u1.f0.dv1[37999] = 0.0;
  SD->u1.f0.dv1[38000] = 0.0;
  SD->u1.f0.dv1[38001] = 0.0;
  SD->u1.f0.dv1[38002] = -1.0;
  memset(&SD->u1.f0.dv1[38003], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[38189] = -1.0;
  SD->u1.f0.dv1[38190] = 0.0;
  SD->u1.f0.dv1[38191] = 0.0;
  SD->u1.f0.dv1[38192] = 0.0;
  SD->u1.f0.dv1[38193] = 0.0;
  SD->u1.f0.dv1[38194] = 0.0;
  SD->u1.f0.dv1[38195] = 0.0;
  SD->u1.f0.dv1[38196] = 0.0;
  SD->u1.f0.dv1[38197] = -1.0;
  memset(&SD->u1.f0.dv1[38198], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[38384] = -1.0;
  SD->u1.f0.dv1[38385] = 0.0;
  SD->u1.f0.dv1[38386] = 0.0;
  SD->u1.f0.dv1[38387] = 0.0;
  SD->u1.f0.dv1[38388] = 0.0;
  SD->u1.f0.dv1[38389] = 0.0;
  SD->u1.f0.dv1[38390] = 0.0;
  SD->u1.f0.dv1[38391] = 0.0;
  SD->u1.f0.dv1[38392] = -1.0;
  memset(&SD->u1.f0.dv1[38393], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[38579] = -1.0;
  SD->u1.f0.dv1[38580] = 0.0;
  SD->u1.f0.dv1[38581] = 0.0;
  SD->u1.f0.dv1[38582] = 0.0;
  SD->u1.f0.dv1[38583] = 0.0;
  SD->u1.f0.dv1[38584] = 0.0;
  SD->u1.f0.dv1[38585] = 0.0;
  SD->u1.f0.dv1[38586] = 0.0;
  SD->u1.f0.dv1[38587] = -1.0;
  memset(&SD->u1.f0.dv1[38588], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[38774] = -1.0;
  SD->u1.f0.dv1[38775] = 0.0;
  SD->u1.f0.dv1[38776] = 0.0;
  SD->u1.f0.dv1[38777] = 0.0;
  SD->u1.f0.dv1[38778] = 0.0;
  SD->u1.f0.dv1[38779] = 0.0;
  SD->u1.f0.dv1[38780] = 0.0;
  SD->u1.f0.dv1[38781] = 0.0;
  SD->u1.f0.dv1[38782] = -1.0;
  memset(&SD->u1.f0.dv1[38783], 0, 582U * sizeof(real_T));
  SD->u1.f0.dv1[39365] = -1.0;
  SD->u1.f0.dv1[39366] = 0.0;
  SD->u1.f0.dv1[39367] = 0.0;
  SD->u1.f0.dv1[39368] = 0.0;
  SD->u1.f0.dv1[39369] = 0.0;
  SD->u1.f0.dv1[39370] = 0.0;
  SD->u1.f0.dv1[39371] = 0.0;
  SD->u1.f0.dv1[39372] = 0.0;
  SD->u1.f0.dv1[39373] = -1.0;
  memset(&SD->u1.f0.dv1[39374], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[39560] = -1.0;
  SD->u1.f0.dv1[39561] = 0.0;
  SD->u1.f0.dv1[39562] = 0.0;
  SD->u1.f0.dv1[39563] = 0.0;
  SD->u1.f0.dv1[39564] = 0.0;
  SD->u1.f0.dv1[39565] = 0.0;
  SD->u1.f0.dv1[39566] = 0.0;
  SD->u1.f0.dv1[39567] = 0.0;
  SD->u1.f0.dv1[39568] = -1.0;
  memset(&SD->u1.f0.dv1[39569], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[39755] = -1.0;
  SD->u1.f0.dv1[39756] = 0.0;
  SD->u1.f0.dv1[39757] = 0.0;
  SD->u1.f0.dv1[39758] = 0.0;
  SD->u1.f0.dv1[39759] = 0.0;
  SD->u1.f0.dv1[39760] = 0.0;
  SD->u1.f0.dv1[39761] = 0.0;
  SD->u1.f0.dv1[39762] = 0.0;
  SD->u1.f0.dv1[39763] = -1.0;
  memset(&SD->u1.f0.dv1[39764], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[39950] = -1.0;
  SD->u1.f0.dv1[39951] = 0.0;
  SD->u1.f0.dv1[39952] = 0.0;
  SD->u1.f0.dv1[39953] = 0.0;
  SD->u1.f0.dv1[39954] = 0.0;
  SD->u1.f0.dv1[39955] = 0.0;
  SD->u1.f0.dv1[39956] = 0.0;
  SD->u1.f0.dv1[39957] = 0.0;
  SD->u1.f0.dv1[39958] = -1.0;
  memset(&SD->u1.f0.dv1[39959], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[40145] = -1.0;
  SD->u1.f0.dv1[40146] = 0.0;
  SD->u1.f0.dv1[40147] = 0.0;
  SD->u1.f0.dv1[40148] = 0.0;
  SD->u1.f0.dv1[40149] = 0.0;
  SD->u1.f0.dv1[40150] = 0.0;
  SD->u1.f0.dv1[40151] = 0.0;
  SD->u1.f0.dv1[40152] = 0.0;
  SD->u1.f0.dv1[40153] = -1.0;
  memset(&SD->u1.f0.dv1[40154], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[40340] = -1.0;
  SD->u1.f0.dv1[40341] = 0.0;
  SD->u1.f0.dv1[40342] = 0.0;
  SD->u1.f0.dv1[40343] = 0.0;
  SD->u1.f0.dv1[40344] = 0.0;
  SD->u1.f0.dv1[40345] = 0.0;
  SD->u1.f0.dv1[40346] = 0.0;
  SD->u1.f0.dv1[40347] = 0.0;
  SD->u1.f0.dv1[40348] = -1.0;
  memset(&SD->u1.f0.dv1[40349], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[40535] = -1.0;
  SD->u1.f0.dv1[40536] = 0.0;
  SD->u1.f0.dv1[40537] = 0.0;
  SD->u1.f0.dv1[40538] = 0.0;
  SD->u1.f0.dv1[40539] = 0.0;
  SD->u1.f0.dv1[40540] = 0.0;
  SD->u1.f0.dv1[40541] = 0.0;
  SD->u1.f0.dv1[40542] = 0.0;
  SD->u1.f0.dv1[40543] = -1.0;
  memset(&SD->u1.f0.dv1[40544], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[40730] = -1.0;
  SD->u1.f0.dv1[40731] = 0.0;
  SD->u1.f0.dv1[40732] = 0.0;
  SD->u1.f0.dv1[40733] = 0.0;
  SD->u1.f0.dv1[40734] = 0.0;
  SD->u1.f0.dv1[40735] = 0.0;
  SD->u1.f0.dv1[40736] = 0.0;
  SD->u1.f0.dv1[40737] = 0.0;
  SD->u1.f0.dv1[40738] = -1.0;
  memset(&SD->u1.f0.dv1[40739], 0, 1941U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 194], &SD->u1.f0.dv1[i1 * 194], 194U * sizeof(real_T));
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
  biq[169] = t9;
  biq[170] = t9;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t9;
  biq[174] = t9;
  biq[175] = t9;
  biq[176] = t9;
  biq[177] = t10;
  biq[178] = t10;
  biq[179] = t10;
  biq[180] = t10;
  biq[181] = t10;
  biq[182] = t10;
  biq[183] = t10;
  biq[184] = t10;
  biq[185] = t11;
  biq[186] = t11;
  biq[187] = t11;
  biq[188] = t11;
  biq[189] = t11;
  biq[190] = t11;
  biq[191] = t11;
  biq[192] = t11;
  biq[193] = -in9[1];
}

/* End of code generation (IqFast_LeftStart2V40.cpp) */
