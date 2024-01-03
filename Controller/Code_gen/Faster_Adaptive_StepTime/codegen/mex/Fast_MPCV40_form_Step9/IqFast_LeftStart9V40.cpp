/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart9V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart9V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step9.h"
#include "IqFast_LeftStart9V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart9V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart9V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart9V40(Fast_MPCV40_form_Step9StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[36520], real_T biq[166])
{
  int32_T i1;
  real_T t7;
  real_T t3;

  /* IQFAST_LEFTSTART9V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART9V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 21:01:33 */
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
  memset(&SD->u1.f0.dv1[139], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[333] = -1.0;
  memset(&SD->u1.f0.dv1[334], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[379] = 1.0;
  memset(&SD->u1.f0.dv1[380], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[425] = -in11[2];
  memset(&SD->u1.f0.dv1[426], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[471] = -in11[2];
  memset(&SD->u1.f0.dv1[472], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[666] = -1.0;
  memset(&SD->u1.f0.dv1[667], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[712] = 1.0;
  memset(&SD->u1.f0.dv1[713], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[758] = -in11[2];
  memset(&SD->u1.f0.dv1[759], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[804] = -in11[2];
  memset(&SD->u1.f0.dv1[805], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[999] = -1.0;
  memset(&SD->u1.f0.dv1[1000], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1045] = 1.0;
  memset(&SD->u1.f0.dv1[1046], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1091] = -in11[2];
  memset(&SD->u1.f0.dv1[1092], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1137] = -in11[2];
  memset(&SD->u1.f0.dv1[1138], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[1332] = -1.0;
  memset(&SD->u1.f0.dv1[1333], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1378] = 1.0;
  memset(&SD->u1.f0.dv1[1379], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1424] = -in11[2];
  memset(&SD->u1.f0.dv1[1425], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1470] = -in11[2];
  memset(&SD->u1.f0.dv1[1471], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[1665] = -1.0;
  memset(&SD->u1.f0.dv1[1666], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1711] = 1.0;
  memset(&SD->u1.f0.dv1[1712], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1757] = -in11[2];
  memset(&SD->u1.f0.dv1[1758], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1803] = -in11[2];
  memset(&SD->u1.f0.dv1[1804], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[1998] = -1.0;
  memset(&SD->u1.f0.dv1[1999], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2044] = 1.0;
  memset(&SD->u1.f0.dv1[2045], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2090] = -in11[2];
  memset(&SD->u1.f0.dv1[2091], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2136] = -in11[2];
  memset(&SD->u1.f0.dv1[2137], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[2331] = -1.0;
  memset(&SD->u1.f0.dv1[2332], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2377] = 1.0;
  memset(&SD->u1.f0.dv1[2378], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2423] = -in11[2];
  memset(&SD->u1.f0.dv1[2424], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2469] = -in11[2];
  memset(&SD->u1.f0.dv1[2470], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[2664] = -1.0;
  memset(&SD->u1.f0.dv1[2665], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2710] = 1.0;
  memset(&SD->u1.f0.dv1[2711], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2756] = -in11[2];
  memset(&SD->u1.f0.dv1[2757], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2802] = -in11[2];
  memset(&SD->u1.f0.dv1[2803], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[2997] = -1.0;
  memset(&SD->u1.f0.dv1[2998], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3043] = 1.0;
  memset(&SD->u1.f0.dv1[3044], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3089] = -in11[2];
  memset(&SD->u1.f0.dv1[3090], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3135] = -in11[2];
  memset(&SD->u1.f0.dv1[3136], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[3330] = -1.0;
  memset(&SD->u1.f0.dv1[3331], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3376] = 1.0;
  memset(&SD->u1.f0.dv1[3377], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3422] = -in11[2];
  memset(&SD->u1.f0.dv1[3423], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3468] = -in11[2];
  memset(&SD->u1.f0.dv1[3469], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[3663] = -1.0;
  memset(&SD->u1.f0.dv1[3664], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3709] = 1.0;
  memset(&SD->u1.f0.dv1[3710], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3755] = -in11[2];
  memset(&SD->u1.f0.dv1[3756], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3801] = -in11[2];
  memset(&SD->u1.f0.dv1[3802], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[3996] = -1.0;
  memset(&SD->u1.f0.dv1[3997], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4042] = 1.0;
  memset(&SD->u1.f0.dv1[4043], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4088] = -in11[2];
  memset(&SD->u1.f0.dv1[4089], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4134] = -in11[2];
  memset(&SD->u1.f0.dv1[4135], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[4329] = -1.0;
  memset(&SD->u1.f0.dv1[4330], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4375] = 1.0;
  memset(&SD->u1.f0.dv1[4376], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4421] = -in11[2];
  memset(&SD->u1.f0.dv1[4422], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4467] = -in11[2];
  memset(&SD->u1.f0.dv1[4468], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[4662] = -1.0;
  memset(&SD->u1.f0.dv1[4663], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4708] = 1.0;
  memset(&SD->u1.f0.dv1[4709], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4754] = -in11[2];
  memset(&SD->u1.f0.dv1[4755], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4800] = -in11[2];
  memset(&SD->u1.f0.dv1[4801], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[4995] = -1.0;
  memset(&SD->u1.f0.dv1[4996], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5041] = 1.0;
  memset(&SD->u1.f0.dv1[5042], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5087] = -in11[2];
  memset(&SD->u1.f0.dv1[5088], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5133] = -in11[2];
  memset(&SD->u1.f0.dv1[5134], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[5328] = -1.0;
  memset(&SD->u1.f0.dv1[5329], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5374] = 1.0;
  memset(&SD->u1.f0.dv1[5375], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5420] = -in11[2];
  memset(&SD->u1.f0.dv1[5421], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5466] = -in11[2];
  memset(&SD->u1.f0.dv1[5467], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[5661] = -1.0;
  memset(&SD->u1.f0.dv1[5662], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5707] = 1.0;
  memset(&SD->u1.f0.dv1[5708], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5753] = -in11[2];
  memset(&SD->u1.f0.dv1[5754], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5799] = -in11[2];
  memset(&SD->u1.f0.dv1[5800], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[5994] = -1.0;
  memset(&SD->u1.f0.dv1[5995], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6040] = 1.0;
  memset(&SD->u1.f0.dv1[6041], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6086] = -in11[2];
  memset(&SD->u1.f0.dv1[6087], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6132] = -in11[2];
  memset(&SD->u1.f0.dv1[6133], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[6327] = -1.0;
  memset(&SD->u1.f0.dv1[6328], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6373] = 1.0;
  memset(&SD->u1.f0.dv1[6374], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6419] = -in11[2];
  memset(&SD->u1.f0.dv1[6420], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6465] = -in11[2];
  memset(&SD->u1.f0.dv1[6466], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[6660] = -1.0;
  memset(&SD->u1.f0.dv1[6661], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6706] = 1.0;
  memset(&SD->u1.f0.dv1[6707], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6752] = -in11[2];
  memset(&SD->u1.f0.dv1[6753], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6798] = -in11[2];
  memset(&SD->u1.f0.dv1[6799], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[6993] = -1.0;
  memset(&SD->u1.f0.dv1[6994], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7039] = 1.0;
  memset(&SD->u1.f0.dv1[7040], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7085] = -in11[2];
  memset(&SD->u1.f0.dv1[7086], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7131] = -in11[2];
  memset(&SD->u1.f0.dv1[7132], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[7326] = -1.0;
  memset(&SD->u1.f0.dv1[7327], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7372] = 1.0;
  memset(&SD->u1.f0.dv1[7373], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7418] = -in11[2];
  memset(&SD->u1.f0.dv1[7419], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7464] = -in11[2];
  memset(&SD->u1.f0.dv1[7465], 0, 194U * sizeof(real_T));
  SD->u1.f0.dv1[7659] = -1.0;
  memset(&SD->u1.f0.dv1[7660], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7705] = 1.0;
  memset(&SD->u1.f0.dv1[7706], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[7728] = -in11[3];
  memset(&SD->u1.f0.dv1[7729], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7774] = -in11[3];
  memset(&SD->u1.f0.dv1[7775], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[7992] = -1.0;
  memset(&SD->u1.f0.dv1[7993], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8038] = 1.0;
  memset(&SD->u1.f0.dv1[8039], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8061] = -in11[3];
  memset(&SD->u1.f0.dv1[8062], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8107] = -in11[3];
  memset(&SD->u1.f0.dv1[8108], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[8325] = -1.0;
  memset(&SD->u1.f0.dv1[8326], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8371] = 1.0;
  memset(&SD->u1.f0.dv1[8372], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8394] = -in11[3];
  memset(&SD->u1.f0.dv1[8395], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8440] = -in11[3];
  memset(&SD->u1.f0.dv1[8441], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[8658] = -1.0;
  memset(&SD->u1.f0.dv1[8659], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8704] = 1.0;
  memset(&SD->u1.f0.dv1[8705], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8727] = -in11[3];
  memset(&SD->u1.f0.dv1[8728], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8773] = -in11[3];
  memset(&SD->u1.f0.dv1[8774], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[8991] = -1.0;
  memset(&SD->u1.f0.dv1[8992], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9037] = 1.0;
  memset(&SD->u1.f0.dv1[9038], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9060] = -in11[3];
  memset(&SD->u1.f0.dv1[9061], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9106] = -in11[3];
  memset(&SD->u1.f0.dv1[9107], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[9324] = -1.0;
  memset(&SD->u1.f0.dv1[9325], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9370] = 1.0;
  memset(&SD->u1.f0.dv1[9371], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9393] = -in11[3];
  memset(&SD->u1.f0.dv1[9394], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9439] = -in11[3];
  memset(&SD->u1.f0.dv1[9440], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[9657] = -1.0;
  memset(&SD->u1.f0.dv1[9658], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9703] = 1.0;
  memset(&SD->u1.f0.dv1[9704], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9726] = -in11[3];
  memset(&SD->u1.f0.dv1[9727], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9772] = -in11[3];
  memset(&SD->u1.f0.dv1[9773], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[9990] = -1.0;
  memset(&SD->u1.f0.dv1[9991], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10036] = 1.0;
  memset(&SD->u1.f0.dv1[10037], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10059] = -in11[3];
  memset(&SD->u1.f0.dv1[10060], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10105] = -in11[3];
  memset(&SD->u1.f0.dv1[10106], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[10323] = -1.0;
  memset(&SD->u1.f0.dv1[10324], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10369] = 1.0;
  memset(&SD->u1.f0.dv1[10370], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10392] = -in11[3];
  memset(&SD->u1.f0.dv1[10393], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10438] = -in11[3];
  memset(&SD->u1.f0.dv1[10439], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[10656] = -1.0;
  memset(&SD->u1.f0.dv1[10657], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10702] = 1.0;
  memset(&SD->u1.f0.dv1[10703], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10725] = -in11[3];
  memset(&SD->u1.f0.dv1[10726], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10771] = -in11[3];
  memset(&SD->u1.f0.dv1[10772], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[10989] = -1.0;
  memset(&SD->u1.f0.dv1[10990], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11035] = 1.0;
  memset(&SD->u1.f0.dv1[11036], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11058] = -in11[3];
  memset(&SD->u1.f0.dv1[11059], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11104] = -in11[3];
  memset(&SD->u1.f0.dv1[11105], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[11322] = -1.0;
  memset(&SD->u1.f0.dv1[11323], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11368] = 1.0;
  memset(&SD->u1.f0.dv1[11369], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11391] = -in11[3];
  memset(&SD->u1.f0.dv1[11392], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11437] = -in11[3];
  memset(&SD->u1.f0.dv1[11438], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[11655] = -1.0;
  memset(&SD->u1.f0.dv1[11656], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11701] = 1.0;
  memset(&SD->u1.f0.dv1[11702], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11724] = -in11[3];
  memset(&SD->u1.f0.dv1[11725], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11770] = -in11[3];
  memset(&SD->u1.f0.dv1[11771], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[11988] = -1.0;
  memset(&SD->u1.f0.dv1[11989], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12034] = 1.0;
  memset(&SD->u1.f0.dv1[12035], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12057] = -in11[3];
  memset(&SD->u1.f0.dv1[12058], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12103] = -in11[3];
  memset(&SD->u1.f0.dv1[12104], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[12321] = -1.0;
  memset(&SD->u1.f0.dv1[12322], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12367] = 1.0;
  memset(&SD->u1.f0.dv1[12368], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12390] = -in11[3];
  memset(&SD->u1.f0.dv1[12391], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12436] = -in11[3];
  memset(&SD->u1.f0.dv1[12437], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[12654] = -1.0;
  memset(&SD->u1.f0.dv1[12655], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12700] = 1.0;
  memset(&SD->u1.f0.dv1[12701], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12723] = -in11[3];
  memset(&SD->u1.f0.dv1[12724], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12769] = -in11[3];
  memset(&SD->u1.f0.dv1[12770], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[12987] = -1.0;
  memset(&SD->u1.f0.dv1[12988], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13033] = 1.0;
  memset(&SD->u1.f0.dv1[13034], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13056] = -in11[3];
  memset(&SD->u1.f0.dv1[13057], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13102] = -in11[3];
  memset(&SD->u1.f0.dv1[13103], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[13320] = -1.0;
  memset(&SD->u1.f0.dv1[13321], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13366] = 1.0;
  memset(&SD->u1.f0.dv1[13367], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13389] = -in11[3];
  memset(&SD->u1.f0.dv1[13390], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13435] = -in11[3];
  memset(&SD->u1.f0.dv1[13436], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[13653] = -1.0;
  memset(&SD->u1.f0.dv1[13654], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13699] = 1.0;
  memset(&SD->u1.f0.dv1[13700], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13722] = -in11[3];
  memset(&SD->u1.f0.dv1[13723], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13768] = -in11[3];
  memset(&SD->u1.f0.dv1[13769], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[13986] = -1.0;
  memset(&SD->u1.f0.dv1[13987], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14032] = 1.0;
  memset(&SD->u1.f0.dv1[14033], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14055] = -in11[3];
  memset(&SD->u1.f0.dv1[14056], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14101] = -in11[3];
  memset(&SD->u1.f0.dv1[14102], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[14319] = -1.0;
  memset(&SD->u1.f0.dv1[14320], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14365] = 1.0;
  memset(&SD->u1.f0.dv1[14366], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14388] = -in11[3];
  memset(&SD->u1.f0.dv1[14389], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14434] = -in11[3];
  memset(&SD->u1.f0.dv1[14435], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[14652] = -1.0;
  memset(&SD->u1.f0.dv1[14653], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14698] = 1.0;
  memset(&SD->u1.f0.dv1[14699], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14721] = -in11[3];
  memset(&SD->u1.f0.dv1[14722], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14767] = -in11[3];
  memset(&SD->u1.f0.dv1[14768], 0, 217U * sizeof(real_T));
  SD->u1.f0.dv1[14985] = -1.0;
  memset(&SD->u1.f0.dv1[14986], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15031] = 1.0;
  memset(&SD->u1.f0.dv1[15032], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15054] = -in11[3];
  memset(&SD->u1.f0.dv1[15055], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15100] = -in11[3];
  memset(&SD->u1.f0.dv1[15101], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[15272] = 1.0;
  memset(&SD->u1.f0.dv1[15273], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15318] = -1.0;
  memset(&SD->u1.f0.dv1[15319], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[15433] = 1.0;
  SD->u1.f0.dv1[15434] = -1.0;
  SD->u1.f0.dv1[15435] = 0.0;
  SD->u1.f0.dv1[15436] = 0.0;
  SD->u1.f0.dv1[15437] = 0.0;
  SD->u1.f0.dv1[15438] = 0.0;
  SD->u1.f0.dv1[15439] = 1.0;
  memset(&SD->u1.f0.dv1[15440], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15485] = -1.0;
  memset(&SD->u1.f0.dv1[15486], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[15606] = 1.0;
  memset(&SD->u1.f0.dv1[15607], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15652] = -1.0;
  memset(&SD->u1.f0.dv1[15653], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[15773] = 1.0;
  memset(&SD->u1.f0.dv1[15774], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15819] = -1.0;
  memset(&SD->u1.f0.dv1[15820], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[15940] = 1.0;
  memset(&SD->u1.f0.dv1[15941], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15986] = -1.0;
  memset(&SD->u1.f0.dv1[15987], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[16107] = 1.0;
  memset(&SD->u1.f0.dv1[16108], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16153] = -1.0;
  memset(&SD->u1.f0.dv1[16154], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[16274] = 1.0;
  memset(&SD->u1.f0.dv1[16275], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16320] = -1.0;
  memset(&SD->u1.f0.dv1[16321], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[16441] = 1.0;
  memset(&SD->u1.f0.dv1[16442], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16487] = -1.0;
  memset(&SD->u1.f0.dv1[16488], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[16608] = 1.0;
  memset(&SD->u1.f0.dv1[16609], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16654] = -1.0;
  memset(&SD->u1.f0.dv1[16655], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[16775] = 1.0;
  memset(&SD->u1.f0.dv1[16776], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16821] = -1.0;
  memset(&SD->u1.f0.dv1[16822], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[16942] = 1.0;
  memset(&SD->u1.f0.dv1[16943], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16988] = -1.0;
  memset(&SD->u1.f0.dv1[16989], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[17109] = 1.0;
  memset(&SD->u1.f0.dv1[17110], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17155] = -1.0;
  memset(&SD->u1.f0.dv1[17156], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[17276] = 1.0;
  memset(&SD->u1.f0.dv1[17277], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17322] = -1.0;
  memset(&SD->u1.f0.dv1[17323], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[17443] = 1.0;
  memset(&SD->u1.f0.dv1[17444], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17489] = -1.0;
  memset(&SD->u1.f0.dv1[17490], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[17610] = 1.0;
  memset(&SD->u1.f0.dv1[17611], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17656] = -1.0;
  memset(&SD->u1.f0.dv1[17657], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[17777] = 1.0;
  memset(&SD->u1.f0.dv1[17778], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17823] = -1.0;
  memset(&SD->u1.f0.dv1[17824], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[17944] = 1.0;
  memset(&SD->u1.f0.dv1[17945], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17990] = -1.0;
  memset(&SD->u1.f0.dv1[17991], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[18111] = 1.0;
  memset(&SD->u1.f0.dv1[18112], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18157] = -1.0;
  memset(&SD->u1.f0.dv1[18158], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[18278] = 1.0;
  memset(&SD->u1.f0.dv1[18279], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18324] = -1.0;
  memset(&SD->u1.f0.dv1[18325], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[18445] = 1.0;
  memset(&SD->u1.f0.dv1[18446], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18491] = -1.0;
  memset(&SD->u1.f0.dv1[18492], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[18612] = 1.0;
  memset(&SD->u1.f0.dv1[18613], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18658] = -1.0;
  memset(&SD->u1.f0.dv1[18659], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[18779] = 1.0;
  memset(&SD->u1.f0.dv1[18780], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18825] = -1.0;
  memset(&SD->u1.f0.dv1[18826], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[18946] = 1.0;
  memset(&SD->u1.f0.dv1[18947], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18992] = -1.0;
  memset(&SD->u1.f0.dv1[18993], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[19113] = 1.0;
  memset(&SD->u1.f0.dv1[19114], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19159] = -1.0;
  memset(&SD->u1.f0.dv1[19160], 0, 93U * sizeof(real_T));
  SD->u1.f0.dv1[19253] = 1.0;
  SD->u1.f0.dv1[19254] = -1.0;
  memset(&SD->u1.f0.dv1[19255], 0, 25U * sizeof(real_T));
  SD->u1.f0.dv1[19280] = 1.0;
  memset(&SD->u1.f0.dv1[19281], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19326] = -1.0;
  memset(&SD->u1.f0.dv1[19327], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[19447] = 1.0;
  memset(&SD->u1.f0.dv1[19448], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19493] = -1.0;
  memset(&SD->u1.f0.dv1[19494], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[19614] = 1.0;
  memset(&SD->u1.f0.dv1[19615], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19660] = -1.0;
  memset(&SD->u1.f0.dv1[19661], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[19781] = 1.0;
  memset(&SD->u1.f0.dv1[19782], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19827] = -1.0;
  memset(&SD->u1.f0.dv1[19828], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[19948] = 1.0;
  memset(&SD->u1.f0.dv1[19949], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19994] = -1.0;
  memset(&SD->u1.f0.dv1[19995], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[20115] = 1.0;
  memset(&SD->u1.f0.dv1[20116], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20161] = -1.0;
  memset(&SD->u1.f0.dv1[20162], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[20282] = 1.0;
  memset(&SD->u1.f0.dv1[20283], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20328] = -1.0;
  memset(&SD->u1.f0.dv1[20329], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[20449] = 1.0;
  memset(&SD->u1.f0.dv1[20450], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20495] = -1.0;
  memset(&SD->u1.f0.dv1[20496], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[20616] = 1.0;
  memset(&SD->u1.f0.dv1[20617], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20662] = -1.0;
  memset(&SD->u1.f0.dv1[20663], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[20783] = 1.0;
  memset(&SD->u1.f0.dv1[20784], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20829] = -1.0;
  memset(&SD->u1.f0.dv1[20830], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[20950] = 1.0;
  memset(&SD->u1.f0.dv1[20951], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20996] = -1.0;
  memset(&SD->u1.f0.dv1[20997], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[21117] = 1.0;
  memset(&SD->u1.f0.dv1[21118], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21163] = -1.0;
  memset(&SD->u1.f0.dv1[21164], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[21284] = 1.0;
  memset(&SD->u1.f0.dv1[21285], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21330] = -1.0;
  memset(&SD->u1.f0.dv1[21331], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[21451] = 1.0;
  memset(&SD->u1.f0.dv1[21452], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21497] = -1.0;
  memset(&SD->u1.f0.dv1[21498], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[21618] = 1.0;
  memset(&SD->u1.f0.dv1[21619], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21664] = -1.0;
  memset(&SD->u1.f0.dv1[21665], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[21785] = 1.0;
  memset(&SD->u1.f0.dv1[21786], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21831] = -1.0;
  memset(&SD->u1.f0.dv1[21832], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[21952] = 1.0;
  memset(&SD->u1.f0.dv1[21953], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21998] = -1.0;
  memset(&SD->u1.f0.dv1[21999], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[22119] = 1.0;
  memset(&SD->u1.f0.dv1[22120], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22165] = -1.0;
  memset(&SD->u1.f0.dv1[22166], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[22286] = 1.0;
  memset(&SD->u1.f0.dv1[22287], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22332] = -1.0;
  memset(&SD->u1.f0.dv1[22333], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[22453] = 1.0;
  memset(&SD->u1.f0.dv1[22454], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22499] = -1.0;
  memset(&SD->u1.f0.dv1[22500], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[22620] = 1.0;
  memset(&SD->u1.f0.dv1[22621], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22666] = -1.0;
  memset(&SD->u1.f0.dv1[22667], 0, 120U * sizeof(real_T));
  SD->u1.f0.dv1[22787] = 1.0;
  memset(&SD->u1.f0.dv1[22788], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22833] = -1.0;
  memset(&SD->u1.f0.dv1[22834], 0, 903U * sizeof(real_T));
  SD->u1.f0.dv1[23737] = 1.0;
  memset(&SD->u1.f0.dv1[23738], 0, 613U * sizeof(real_T));
  SD->u1.f0.dv1[24351] = -1.0;
  memset(&SD->u1.f0.dv1[24352], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[24374] = -1.0;
  memset(&SD->u1.f0.dv1[24375], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[24518] = -1.0;
  memset(&SD->u1.f0.dv1[24519], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[24541] = -1.0;
  memset(&SD->u1.f0.dv1[24542], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[24685] = -1.0;
  memset(&SD->u1.f0.dv1[24686], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[24708] = -1.0;
  memset(&SD->u1.f0.dv1[24709], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[24852] = -1.0;
  memset(&SD->u1.f0.dv1[24853], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[24875] = -1.0;
  memset(&SD->u1.f0.dv1[24876], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[25019] = -1.0;
  memset(&SD->u1.f0.dv1[25020], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25042] = -1.0;
  memset(&SD->u1.f0.dv1[25043], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[25186] = -1.0;
  memset(&SD->u1.f0.dv1[25187], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25209] = -1.0;
  memset(&SD->u1.f0.dv1[25210], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[25353] = -1.0;
  memset(&SD->u1.f0.dv1[25354], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25376] = -1.0;
  memset(&SD->u1.f0.dv1[25377], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[25520] = -1.0;
  memset(&SD->u1.f0.dv1[25521], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25543] = -1.0;
  memset(&SD->u1.f0.dv1[25544], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[25687] = -1.0;
  memset(&SD->u1.f0.dv1[25688], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25710] = -1.0;
  memset(&SD->u1.f0.dv1[25711], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[25854] = -1.0;
  memset(&SD->u1.f0.dv1[25855], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25877] = -1.0;
  memset(&SD->u1.f0.dv1[25878], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[26021] = -1.0;
  memset(&SD->u1.f0.dv1[26022], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26044] = -1.0;
  memset(&SD->u1.f0.dv1[26045], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[26188] = -1.0;
  memset(&SD->u1.f0.dv1[26189], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26211] = -1.0;
  memset(&SD->u1.f0.dv1[26212], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[26355] = -1.0;
  memset(&SD->u1.f0.dv1[26356], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26378] = -1.0;
  memset(&SD->u1.f0.dv1[26379], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[26522] = -1.0;
  memset(&SD->u1.f0.dv1[26523], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26545] = -1.0;
  memset(&SD->u1.f0.dv1[26546], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[26689] = -1.0;
  memset(&SD->u1.f0.dv1[26690], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26712] = -1.0;
  memset(&SD->u1.f0.dv1[26713], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[26856] = -1.0;
  memset(&SD->u1.f0.dv1[26857], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26879] = -1.0;
  memset(&SD->u1.f0.dv1[26880], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[27023] = -1.0;
  memset(&SD->u1.f0.dv1[27024], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27046] = -1.0;
  memset(&SD->u1.f0.dv1[27047], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[27190] = -1.0;
  memset(&SD->u1.f0.dv1[27191], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27213] = -1.0;
  memset(&SD->u1.f0.dv1[27214], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[27357] = -1.0;
  memset(&SD->u1.f0.dv1[27358], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27380] = -1.0;
  memset(&SD->u1.f0.dv1[27381], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[27524] = -1.0;
  memset(&SD->u1.f0.dv1[27525], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27547] = -1.0;
  memset(&SD->u1.f0.dv1[27548], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[27691] = -1.0;
  memset(&SD->u1.f0.dv1[27692], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27714] = -1.0;
  memset(&SD->u1.f0.dv1[27715], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[27858] = -1.0;
  memset(&SD->u1.f0.dv1[27859], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27881] = -1.0;
  memset(&SD->u1.f0.dv1[27882], 0, 143U * sizeof(real_T));
  SD->u1.f0.dv1[28025] = -1.0;
  memset(&SD->u1.f0.dv1[28026], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28048] = -1.0;
  memset(&SD->u1.f0.dv1[28049], 0, 170U * sizeof(real_T));
  SD->u1.f0.dv1[28219] = -1.0;
  memset(&SD->u1.f0.dv1[28220], 0, 3813U * sizeof(real_T));
  SD->u1.f0.dv1[32033] = -1.0;
  SD->u1.f0.dv1[32034] = -1.0;
  memset(&SD->u1.f0.dv1[32035], 0, 1660U * sizeof(real_T));
  SD->u1.f0.dv1[33695] = -1.0;
  SD->u1.f0.dv1[33696] = -1.0;
  memset(&SD->u1.f0.dv1[33697], 0, 2823U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 166], &SD->u1.f0.dv1[i1 * 166], 166U * sizeof(real_T));
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
  biq[161] = Cpx1 + in8[0];
  biq[162] = -Cpx1 + in8[0];
  biq[163] = Cpy1 + in9[0];
  biq[164] = -Cpy1 + in9[0];
  biq[165] = -in9[1];
}

/* End of code generation (IqFast_LeftStart9V40.cpp) */
