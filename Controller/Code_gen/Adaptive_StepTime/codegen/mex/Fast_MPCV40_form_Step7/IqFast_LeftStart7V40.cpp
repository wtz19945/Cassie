/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart7V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart7V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step7.h"
#include "IqFast_LeftStart7V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart7V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart7V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart7V40(Fast_MPCV40_form_Step7StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[38280], real_T biq[174])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART7V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART7V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:50:04 */
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
  memset(&SD->u1.f0.dv1[139], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[349] = -1.0;
  memset(&SD->u1.f0.dv1[350], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[395] = 1.0;
  memset(&SD->u1.f0.dv1[396], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[441] = -in11[2];
  memset(&SD->u1.f0.dv1[442], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[487] = -in11[2];
  memset(&SD->u1.f0.dv1[488], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[698] = -1.0;
  memset(&SD->u1.f0.dv1[699], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[744] = 1.0;
  memset(&SD->u1.f0.dv1[745], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[790] = -in11[2];
  memset(&SD->u1.f0.dv1[791], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[836] = -in11[2];
  memset(&SD->u1.f0.dv1[837], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[1047] = -1.0;
  memset(&SD->u1.f0.dv1[1048], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1093] = 1.0;
  memset(&SD->u1.f0.dv1[1094], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1139] = -in11[2];
  memset(&SD->u1.f0.dv1[1140], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1185] = -in11[2];
  memset(&SD->u1.f0.dv1[1186], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[1396] = -1.0;
  memset(&SD->u1.f0.dv1[1397], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1442] = 1.0;
  memset(&SD->u1.f0.dv1[1443], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1488] = -in11[2];
  memset(&SD->u1.f0.dv1[1489], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1534] = -in11[2];
  memset(&SD->u1.f0.dv1[1535], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[1745] = -1.0;
  memset(&SD->u1.f0.dv1[1746], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1791] = 1.0;
  memset(&SD->u1.f0.dv1[1792], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1837] = -in11[2];
  memset(&SD->u1.f0.dv1[1838], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1883] = -in11[2];
  memset(&SD->u1.f0.dv1[1884], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[2094] = -1.0;
  memset(&SD->u1.f0.dv1[2095], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2140] = 1.0;
  memset(&SD->u1.f0.dv1[2141], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2186] = -in11[2];
  memset(&SD->u1.f0.dv1[2187], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2232] = -in11[2];
  memset(&SD->u1.f0.dv1[2233], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[2443] = -1.0;
  memset(&SD->u1.f0.dv1[2444], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2489] = 1.0;
  memset(&SD->u1.f0.dv1[2490], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2535] = -in11[2];
  memset(&SD->u1.f0.dv1[2536], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2581] = -in11[2];
  memset(&SD->u1.f0.dv1[2582], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[2792] = -1.0;
  memset(&SD->u1.f0.dv1[2793], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2838] = 1.0;
  memset(&SD->u1.f0.dv1[2839], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2884] = -in11[2];
  memset(&SD->u1.f0.dv1[2885], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2930] = -in11[2];
  memset(&SD->u1.f0.dv1[2931], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[3141] = -1.0;
  memset(&SD->u1.f0.dv1[3142], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3187] = 1.0;
  memset(&SD->u1.f0.dv1[3188], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3233] = -in11[2];
  memset(&SD->u1.f0.dv1[3234], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3279] = -in11[2];
  memset(&SD->u1.f0.dv1[3280], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[3490] = -1.0;
  memset(&SD->u1.f0.dv1[3491], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3536] = 1.0;
  memset(&SD->u1.f0.dv1[3537], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3582] = -in11[2];
  memset(&SD->u1.f0.dv1[3583], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3628] = -in11[2];
  memset(&SD->u1.f0.dv1[3629], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[3839] = -1.0;
  memset(&SD->u1.f0.dv1[3840], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3885] = 1.0;
  memset(&SD->u1.f0.dv1[3886], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3931] = -in11[2];
  memset(&SD->u1.f0.dv1[3932], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3977] = -in11[2];
  memset(&SD->u1.f0.dv1[3978], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[4188] = -1.0;
  memset(&SD->u1.f0.dv1[4189], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4234] = 1.0;
  memset(&SD->u1.f0.dv1[4235], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4280] = -in11[2];
  memset(&SD->u1.f0.dv1[4281], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4326] = -in11[2];
  memset(&SD->u1.f0.dv1[4327], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[4537] = -1.0;
  memset(&SD->u1.f0.dv1[4538], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4583] = 1.0;
  memset(&SD->u1.f0.dv1[4584], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4629] = -in11[2];
  memset(&SD->u1.f0.dv1[4630], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4675] = -in11[2];
  memset(&SD->u1.f0.dv1[4676], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[4886] = -1.0;
  memset(&SD->u1.f0.dv1[4887], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4932] = 1.0;
  memset(&SD->u1.f0.dv1[4933], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4978] = -in11[2];
  memset(&SD->u1.f0.dv1[4979], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5024] = -in11[2];
  memset(&SD->u1.f0.dv1[5025], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[5235] = -1.0;
  memset(&SD->u1.f0.dv1[5236], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5281] = 1.0;
  memset(&SD->u1.f0.dv1[5282], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5327] = -in11[2];
  memset(&SD->u1.f0.dv1[5328], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5373] = -in11[2];
  memset(&SD->u1.f0.dv1[5374], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[5584] = -1.0;
  memset(&SD->u1.f0.dv1[5585], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5630] = 1.0;
  memset(&SD->u1.f0.dv1[5631], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5676] = -in11[2];
  memset(&SD->u1.f0.dv1[5677], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5722] = -in11[2];
  memset(&SD->u1.f0.dv1[5723], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[5933] = -1.0;
  memset(&SD->u1.f0.dv1[5934], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5979] = 1.0;
  memset(&SD->u1.f0.dv1[5980], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6025] = -in11[2];
  memset(&SD->u1.f0.dv1[6026], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6071] = -in11[2];
  memset(&SD->u1.f0.dv1[6072], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[6282] = -1.0;
  memset(&SD->u1.f0.dv1[6283], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6328] = 1.0;
  memset(&SD->u1.f0.dv1[6329], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6374] = -in11[2];
  memset(&SD->u1.f0.dv1[6375], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6420] = -in11[2];
  memset(&SD->u1.f0.dv1[6421], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[6631] = -1.0;
  memset(&SD->u1.f0.dv1[6632], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6677] = 1.0;
  memset(&SD->u1.f0.dv1[6678], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6723] = -in11[2];
  memset(&SD->u1.f0.dv1[6724], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6769] = -in11[2];
  memset(&SD->u1.f0.dv1[6770], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[6980] = -1.0;
  memset(&SD->u1.f0.dv1[6981], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7026] = 1.0;
  memset(&SD->u1.f0.dv1[7027], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7072] = -in11[2];
  memset(&SD->u1.f0.dv1[7073], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7118] = -in11[2];
  memset(&SD->u1.f0.dv1[7119], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[7329] = -1.0;
  memset(&SD->u1.f0.dv1[7330], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7375] = 1.0;
  memset(&SD->u1.f0.dv1[7376], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7421] = -in11[2];
  memset(&SD->u1.f0.dv1[7422], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7467] = -in11[2];
  memset(&SD->u1.f0.dv1[7468], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[7678] = -1.0;
  memset(&SD->u1.f0.dv1[7679], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7724] = 1.0;
  memset(&SD->u1.f0.dv1[7725], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7770] = -in11[2];
  memset(&SD->u1.f0.dv1[7771], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7816] = -in11[2];
  memset(&SD->u1.f0.dv1[7817], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[8027] = -1.0;
  memset(&SD->u1.f0.dv1[8028], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8073] = 1.0;
  memset(&SD->u1.f0.dv1[8074], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8096] = -in11[3];
  memset(&SD->u1.f0.dv1[8097], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8142] = -in11[3];
  memset(&SD->u1.f0.dv1[8143], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[8376] = -1.0;
  memset(&SD->u1.f0.dv1[8377], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8422] = 1.0;
  memset(&SD->u1.f0.dv1[8423], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8445] = -in11[3];
  memset(&SD->u1.f0.dv1[8446], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8491] = -in11[3];
  memset(&SD->u1.f0.dv1[8492], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[8725] = -1.0;
  memset(&SD->u1.f0.dv1[8726], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8771] = 1.0;
  memset(&SD->u1.f0.dv1[8772], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8794] = -in11[3];
  memset(&SD->u1.f0.dv1[8795], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8840] = -in11[3];
  memset(&SD->u1.f0.dv1[8841], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[9074] = -1.0;
  memset(&SD->u1.f0.dv1[9075], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9120] = 1.0;
  memset(&SD->u1.f0.dv1[9121], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9143] = -in11[3];
  memset(&SD->u1.f0.dv1[9144], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9189] = -in11[3];
  memset(&SD->u1.f0.dv1[9190], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[9423] = -1.0;
  memset(&SD->u1.f0.dv1[9424], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9469] = 1.0;
  memset(&SD->u1.f0.dv1[9470], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9492] = -in11[3];
  memset(&SD->u1.f0.dv1[9493], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9538] = -in11[3];
  memset(&SD->u1.f0.dv1[9539], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[9772] = -1.0;
  memset(&SD->u1.f0.dv1[9773], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9818] = 1.0;
  memset(&SD->u1.f0.dv1[9819], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9841] = -in11[3];
  memset(&SD->u1.f0.dv1[9842], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9887] = -in11[3];
  memset(&SD->u1.f0.dv1[9888], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[10121] = -1.0;
  memset(&SD->u1.f0.dv1[10122], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10167] = 1.0;
  memset(&SD->u1.f0.dv1[10168], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10190] = -in11[3];
  memset(&SD->u1.f0.dv1[10191], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10236] = -in11[3];
  memset(&SD->u1.f0.dv1[10237], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[10470] = -1.0;
  memset(&SD->u1.f0.dv1[10471], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10516] = 1.0;
  memset(&SD->u1.f0.dv1[10517], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10539] = -in11[3];
  memset(&SD->u1.f0.dv1[10540], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10585] = -in11[3];
  memset(&SD->u1.f0.dv1[10586], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[10819] = -1.0;
  memset(&SD->u1.f0.dv1[10820], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10865] = 1.0;
  memset(&SD->u1.f0.dv1[10866], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10888] = -in11[3];
  memset(&SD->u1.f0.dv1[10889], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10934] = -in11[3];
  memset(&SD->u1.f0.dv1[10935], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[11168] = -1.0;
  memset(&SD->u1.f0.dv1[11169], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11214] = 1.0;
  memset(&SD->u1.f0.dv1[11215], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11237] = -in11[3];
  memset(&SD->u1.f0.dv1[11238], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11283] = -in11[3];
  memset(&SD->u1.f0.dv1[11284], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[11517] = -1.0;
  memset(&SD->u1.f0.dv1[11518], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11563] = 1.0;
  memset(&SD->u1.f0.dv1[11564], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11586] = -in11[3];
  memset(&SD->u1.f0.dv1[11587], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11632] = -in11[3];
  memset(&SD->u1.f0.dv1[11633], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[11866] = -1.0;
  memset(&SD->u1.f0.dv1[11867], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11912] = 1.0;
  memset(&SD->u1.f0.dv1[11913], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11935] = -in11[3];
  memset(&SD->u1.f0.dv1[11936], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11981] = -in11[3];
  memset(&SD->u1.f0.dv1[11982], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[12215] = -1.0;
  memset(&SD->u1.f0.dv1[12216], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12261] = 1.0;
  memset(&SD->u1.f0.dv1[12262], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12284] = -in11[3];
  memset(&SD->u1.f0.dv1[12285], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12330] = -in11[3];
  memset(&SD->u1.f0.dv1[12331], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[12564] = -1.0;
  memset(&SD->u1.f0.dv1[12565], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12610] = 1.0;
  memset(&SD->u1.f0.dv1[12611], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12633] = -in11[3];
  memset(&SD->u1.f0.dv1[12634], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12679] = -in11[3];
  memset(&SD->u1.f0.dv1[12680], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[12913] = -1.0;
  memset(&SD->u1.f0.dv1[12914], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12959] = 1.0;
  memset(&SD->u1.f0.dv1[12960], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12982] = -in11[3];
  memset(&SD->u1.f0.dv1[12983], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13028] = -in11[3];
  memset(&SD->u1.f0.dv1[13029], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[13262] = -1.0;
  memset(&SD->u1.f0.dv1[13263], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13308] = 1.0;
  memset(&SD->u1.f0.dv1[13309], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13331] = -in11[3];
  memset(&SD->u1.f0.dv1[13332], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13377] = -in11[3];
  memset(&SD->u1.f0.dv1[13378], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[13611] = -1.0;
  memset(&SD->u1.f0.dv1[13612], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13657] = 1.0;
  memset(&SD->u1.f0.dv1[13658], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13680] = -in11[3];
  memset(&SD->u1.f0.dv1[13681], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13726] = -in11[3];
  memset(&SD->u1.f0.dv1[13727], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[13960] = -1.0;
  memset(&SD->u1.f0.dv1[13961], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14006] = 1.0;
  memset(&SD->u1.f0.dv1[14007], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14029] = -in11[3];
  memset(&SD->u1.f0.dv1[14030], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14075] = -in11[3];
  memset(&SD->u1.f0.dv1[14076], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[14309] = -1.0;
  memset(&SD->u1.f0.dv1[14310], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14355] = 1.0;
  memset(&SD->u1.f0.dv1[14356], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14378] = -in11[3];
  memset(&SD->u1.f0.dv1[14379], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14424] = -in11[3];
  memset(&SD->u1.f0.dv1[14425], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[14658] = -1.0;
  memset(&SD->u1.f0.dv1[14659], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14704] = 1.0;
  memset(&SD->u1.f0.dv1[14705], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14727] = -in11[3];
  memset(&SD->u1.f0.dv1[14728], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14773] = -in11[3];
  memset(&SD->u1.f0.dv1[14774], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[15007] = -1.0;
  memset(&SD->u1.f0.dv1[15008], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15053] = 1.0;
  memset(&SD->u1.f0.dv1[15054], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15076] = -in11[3];
  memset(&SD->u1.f0.dv1[15077], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15122] = -in11[3];
  memset(&SD->u1.f0.dv1[15123], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[15356] = -1.0;
  memset(&SD->u1.f0.dv1[15357], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15402] = 1.0;
  memset(&SD->u1.f0.dv1[15403], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15425] = -in11[3];
  memset(&SD->u1.f0.dv1[15426], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15471] = -in11[3];
  memset(&SD->u1.f0.dv1[15472], 0, 233U * sizeof(real_T));
  SD->u1.f0.dv1[15705] = -1.0;
  memset(&SD->u1.f0.dv1[15706], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15751] = 1.0;
  memset(&SD->u1.f0.dv1[15752], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15774] = -in11[3];
  memset(&SD->u1.f0.dv1[15775], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15820] = -in11[3];
  memset(&SD->u1.f0.dv1[15821], 0, 187U * sizeof(real_T));
  SD->u1.f0.dv1[16008] = 1.0;
  memset(&SD->u1.f0.dv1[16009], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16054] = -1.0;
  memset(&SD->u1.f0.dv1[16055], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[16169] = 1.0;
  SD->u1.f0.dv1[16170] = 0.0;
  SD->u1.f0.dv1[16171] = 0.0;
  SD->u1.f0.dv1[16172] = -1.0;
  memset(&SD->u1.f0.dv1[16173], 0, 10U * sizeof(real_T));
  SD->u1.f0.dv1[16183] = 1.0;
  memset(&SD->u1.f0.dv1[16184], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16229] = -1.0;
  memset(&SD->u1.f0.dv1[16230], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[16344] = 1.0;
  SD->u1.f0.dv1[16345] = 0.0;
  SD->u1.f0.dv1[16346] = 0.0;
  SD->u1.f0.dv1[16347] = -1.0;
  memset(&SD->u1.f0.dv1[16348], 0, 10U * sizeof(real_T));
  SD->u1.f0.dv1[16358] = 1.0;
  memset(&SD->u1.f0.dv1[16359], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16404] = -1.0;
  memset(&SD->u1.f0.dv1[16405], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[16519] = 1.0;
  SD->u1.f0.dv1[16520] = 0.0;
  SD->u1.f0.dv1[16521] = 0.0;
  SD->u1.f0.dv1[16522] = -1.0;
  memset(&SD->u1.f0.dv1[16523], 0, 10U * sizeof(real_T));
  SD->u1.f0.dv1[16533] = 1.0;
  memset(&SD->u1.f0.dv1[16534], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16579] = -1.0;
  memset(&SD->u1.f0.dv1[16580], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[16708] = 1.0;
  memset(&SD->u1.f0.dv1[16709], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16754] = -1.0;
  memset(&SD->u1.f0.dv1[16755], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[16883] = 1.0;
  memset(&SD->u1.f0.dv1[16884], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16929] = -1.0;
  memset(&SD->u1.f0.dv1[16930], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[17058] = 1.0;
  memset(&SD->u1.f0.dv1[17059], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17104] = -1.0;
  memset(&SD->u1.f0.dv1[17105], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[17233] = 1.0;
  memset(&SD->u1.f0.dv1[17234], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17279] = -1.0;
  memset(&SD->u1.f0.dv1[17280], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[17408] = 1.0;
  memset(&SD->u1.f0.dv1[17409], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17454] = -1.0;
  memset(&SD->u1.f0.dv1[17455], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[17583] = 1.0;
  memset(&SD->u1.f0.dv1[17584], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17629] = -1.0;
  memset(&SD->u1.f0.dv1[17630], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[17758] = 1.0;
  memset(&SD->u1.f0.dv1[17759], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17804] = -1.0;
  memset(&SD->u1.f0.dv1[17805], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[17933] = 1.0;
  memset(&SD->u1.f0.dv1[17934], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17979] = -1.0;
  memset(&SD->u1.f0.dv1[17980], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[18108] = 1.0;
  memset(&SD->u1.f0.dv1[18109], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18154] = -1.0;
  memset(&SD->u1.f0.dv1[18155], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[18283] = 1.0;
  memset(&SD->u1.f0.dv1[18284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18329] = -1.0;
  memset(&SD->u1.f0.dv1[18330], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[18458] = 1.0;
  memset(&SD->u1.f0.dv1[18459], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18504] = -1.0;
  memset(&SD->u1.f0.dv1[18505], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[18633] = 1.0;
  memset(&SD->u1.f0.dv1[18634], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18679] = -1.0;
  memset(&SD->u1.f0.dv1[18680], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[18808] = 1.0;
  memset(&SD->u1.f0.dv1[18809], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18854] = -1.0;
  memset(&SD->u1.f0.dv1[18855], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[18983] = 1.0;
  memset(&SD->u1.f0.dv1[18984], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19029] = -1.0;
  memset(&SD->u1.f0.dv1[19030], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[19158] = 1.0;
  memset(&SD->u1.f0.dv1[19159], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19204] = -1.0;
  memset(&SD->u1.f0.dv1[19205], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[19333] = 1.0;
  memset(&SD->u1.f0.dv1[19334], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19379] = -1.0;
  memset(&SD->u1.f0.dv1[19380], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[19508] = 1.0;
  memset(&SD->u1.f0.dv1[19509], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19554] = -1.0;
  memset(&SD->u1.f0.dv1[19555], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[19683] = 1.0;
  memset(&SD->u1.f0.dv1[19684], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19729] = -1.0;
  memset(&SD->u1.f0.dv1[19730], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[19858] = 1.0;
  memset(&SD->u1.f0.dv1[19859], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19904] = -1.0;
  memset(&SD->u1.f0.dv1[19905], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[20033] = 1.0;
  memset(&SD->u1.f0.dv1[20034], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20079] = -1.0;
  memset(&SD->u1.f0.dv1[20080], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv1[20177] = 1.0;
  SD->u1.f0.dv1[20178] = 0.0;
  SD->u1.f0.dv1[20179] = 0.0;
  SD->u1.f0.dv1[20180] = -1.0;
  memset(&SD->u1.f0.dv1[20181], 0, 27U * sizeof(real_T));
  SD->u1.f0.dv1[20208] = 1.0;
  memset(&SD->u1.f0.dv1[20209], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20254] = -1.0;
  memset(&SD->u1.f0.dv1[20255], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv1[20352] = 1.0;
  SD->u1.f0.dv1[20353] = 0.0;
  SD->u1.f0.dv1[20354] = 0.0;
  SD->u1.f0.dv1[20355] = -1.0;
  memset(&SD->u1.f0.dv1[20356], 0, 27U * sizeof(real_T));
  SD->u1.f0.dv1[20383] = 1.0;
  memset(&SD->u1.f0.dv1[20384], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20429] = -1.0;
  memset(&SD->u1.f0.dv1[20430], 0, 97U * sizeof(real_T));
  SD->u1.f0.dv1[20527] = 1.0;
  SD->u1.f0.dv1[20528] = 0.0;
  SD->u1.f0.dv1[20529] = 0.0;
  SD->u1.f0.dv1[20530] = -1.0;
  memset(&SD->u1.f0.dv1[20531], 0, 27U * sizeof(real_T));
  SD->u1.f0.dv1[20558] = 1.0;
  memset(&SD->u1.f0.dv1[20559], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20604] = -1.0;
  memset(&SD->u1.f0.dv1[20605], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[20733] = 1.0;
  memset(&SD->u1.f0.dv1[20734], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20779] = -1.0;
  memset(&SD->u1.f0.dv1[20780], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[20908] = 1.0;
  memset(&SD->u1.f0.dv1[20909], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20954] = -1.0;
  memset(&SD->u1.f0.dv1[20955], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[21083] = 1.0;
  memset(&SD->u1.f0.dv1[21084], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21129] = -1.0;
  memset(&SD->u1.f0.dv1[21130], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[21258] = 1.0;
  memset(&SD->u1.f0.dv1[21259], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21304] = -1.0;
  memset(&SD->u1.f0.dv1[21305], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[21433] = 1.0;
  memset(&SD->u1.f0.dv1[21434], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21479] = -1.0;
  memset(&SD->u1.f0.dv1[21480], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[21608] = 1.0;
  memset(&SD->u1.f0.dv1[21609], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21654] = -1.0;
  memset(&SD->u1.f0.dv1[21655], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[21783] = 1.0;
  memset(&SD->u1.f0.dv1[21784], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21829] = -1.0;
  memset(&SD->u1.f0.dv1[21830], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[21958] = 1.0;
  memset(&SD->u1.f0.dv1[21959], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22004] = -1.0;
  memset(&SD->u1.f0.dv1[22005], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[22133] = 1.0;
  memset(&SD->u1.f0.dv1[22134], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22179] = -1.0;
  memset(&SD->u1.f0.dv1[22180], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[22308] = 1.0;
  memset(&SD->u1.f0.dv1[22309], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22354] = -1.0;
  memset(&SD->u1.f0.dv1[22355], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[22483] = 1.0;
  memset(&SD->u1.f0.dv1[22484], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22529] = -1.0;
  memset(&SD->u1.f0.dv1[22530], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[22658] = 1.0;
  memset(&SD->u1.f0.dv1[22659], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22704] = -1.0;
  memset(&SD->u1.f0.dv1[22705], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[22833] = 1.0;
  memset(&SD->u1.f0.dv1[22834], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22879] = -1.0;
  memset(&SD->u1.f0.dv1[22880], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[23008] = 1.0;
  memset(&SD->u1.f0.dv1[23009], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23054] = -1.0;
  memset(&SD->u1.f0.dv1[23055], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[23183] = 1.0;
  memset(&SD->u1.f0.dv1[23184], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23229] = -1.0;
  memset(&SD->u1.f0.dv1[23230], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[23358] = 1.0;
  memset(&SD->u1.f0.dv1[23359], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23404] = -1.0;
  memset(&SD->u1.f0.dv1[23405], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[23533] = 1.0;
  memset(&SD->u1.f0.dv1[23534], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23579] = -1.0;
  memset(&SD->u1.f0.dv1[23580], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[23708] = 1.0;
  memset(&SD->u1.f0.dv1[23709], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23754] = -1.0;
  memset(&SD->u1.f0.dv1[23755], 0, sizeof(real_T) << 7);
  SD->u1.f0.dv1[23883] = 1.0;
  memset(&SD->u1.f0.dv1[23884], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23929] = -1.0;
  memset(&SD->u1.f0.dv1[23930], 0, 951U * sizeof(real_T));
  SD->u1.f0.dv1[24881] = 1.0;
  memset(&SD->u1.f0.dv1[24882], 0, 637U * sizeof(real_T));
  SD->u1.f0.dv1[25519] = -1.0;
  memset(&SD->u1.f0.dv1[25520], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25542] = -1.0;
  memset(&SD->u1.f0.dv1[25543], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[25694] = -1.0;
  memset(&SD->u1.f0.dv1[25695], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25717] = -1.0;
  memset(&SD->u1.f0.dv1[25718], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[25869] = -1.0;
  memset(&SD->u1.f0.dv1[25870], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25892] = -1.0;
  memset(&SD->u1.f0.dv1[25893], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[26044] = -1.0;
  memset(&SD->u1.f0.dv1[26045], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26067] = -1.0;
  memset(&SD->u1.f0.dv1[26068], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[26219] = -1.0;
  memset(&SD->u1.f0.dv1[26220], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26242] = -1.0;
  memset(&SD->u1.f0.dv1[26243], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[26394] = -1.0;
  memset(&SD->u1.f0.dv1[26395], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26417] = -1.0;
  memset(&SD->u1.f0.dv1[26418], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[26569] = -1.0;
  memset(&SD->u1.f0.dv1[26570], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26592] = -1.0;
  memset(&SD->u1.f0.dv1[26593], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[26744] = -1.0;
  memset(&SD->u1.f0.dv1[26745], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26767] = -1.0;
  memset(&SD->u1.f0.dv1[26768], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[26919] = -1.0;
  memset(&SD->u1.f0.dv1[26920], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26942] = -1.0;
  memset(&SD->u1.f0.dv1[26943], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[27094] = -1.0;
  memset(&SD->u1.f0.dv1[27095], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27117] = -1.0;
  memset(&SD->u1.f0.dv1[27118], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[27269] = -1.0;
  memset(&SD->u1.f0.dv1[27270], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27292] = -1.0;
  memset(&SD->u1.f0.dv1[27293], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[27444] = -1.0;
  memset(&SD->u1.f0.dv1[27445], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27467] = -1.0;
  memset(&SD->u1.f0.dv1[27468], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[27619] = -1.0;
  memset(&SD->u1.f0.dv1[27620], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27642] = -1.0;
  memset(&SD->u1.f0.dv1[27643], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[27794] = -1.0;
  memset(&SD->u1.f0.dv1[27795], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27817] = -1.0;
  memset(&SD->u1.f0.dv1[27818], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[27969] = -1.0;
  memset(&SD->u1.f0.dv1[27970], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27992] = -1.0;
  memset(&SD->u1.f0.dv1[27993], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[28144] = -1.0;
  memset(&SD->u1.f0.dv1[28145], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28167] = -1.0;
  memset(&SD->u1.f0.dv1[28168], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[28319] = -1.0;
  memset(&SD->u1.f0.dv1[28320], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28342] = -1.0;
  memset(&SD->u1.f0.dv1[28343], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[28494] = -1.0;
  memset(&SD->u1.f0.dv1[28495], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28517] = -1.0;
  memset(&SD->u1.f0.dv1[28518], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[28669] = -1.0;
  memset(&SD->u1.f0.dv1[28670], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28692] = -1.0;
  memset(&SD->u1.f0.dv1[28693], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[28844] = -1.0;
  memset(&SD->u1.f0.dv1[28845], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28867] = -1.0;
  memset(&SD->u1.f0.dv1[28868], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[29019] = -1.0;
  memset(&SD->u1.f0.dv1[29020], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29042] = -1.0;
  memset(&SD->u1.f0.dv1[29043], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[29194] = -1.0;
  memset(&SD->u1.f0.dv1[29195], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29217] = -1.0;
  memset(&SD->u1.f0.dv1[29218], 0, 151U * sizeof(real_T));
  SD->u1.f0.dv1[29369] = -1.0;
  memset(&SD->u1.f0.dv1[29370], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29392] = -1.0;
  memset(&SD->u1.f0.dv1[29393], 0, 186U * sizeof(real_T));
  SD->u1.f0.dv1[29579] = -1.0;
  memset(&SD->u1.f0.dv1[29580], 0, 3989U * sizeof(real_T));
  SD->u1.f0.dv1[33569] = -1.0;
  SD->u1.f0.dv1[33570] = 0.0;
  SD->u1.f0.dv1[33571] = 0.0;
  SD->u1.f0.dv1[33572] = -1.0;
  memset(&SD->u1.f0.dv1[33573], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[33744] = -1.0;
  SD->u1.f0.dv1[33745] = 0.0;
  SD->u1.f0.dv1[33746] = 0.0;
  SD->u1.f0.dv1[33747] = -1.0;
  memset(&SD->u1.f0.dv1[33748], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[33919] = -1.0;
  SD->u1.f0.dv1[33920] = 0.0;
  SD->u1.f0.dv1[33921] = 0.0;
  SD->u1.f0.dv1[33922] = -1.0;
  memset(&SD->u1.f0.dv1[33923], 0, 1392U * sizeof(real_T));
  SD->u1.f0.dv1[35315] = -1.0;
  SD->u1.f0.dv1[35316] = 0.0;
  SD->u1.f0.dv1[35317] = 0.0;
  SD->u1.f0.dv1[35318] = -1.0;
  memset(&SD->u1.f0.dv1[35319], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[35490] = -1.0;
  SD->u1.f0.dv1[35491] = 0.0;
  SD->u1.f0.dv1[35492] = 0.0;
  SD->u1.f0.dv1[35493] = -1.0;
  memset(&SD->u1.f0.dv1[35494], 0, 171U * sizeof(real_T));
  SD->u1.f0.dv1[35665] = -1.0;
  SD->u1.f0.dv1[35666] = 0.0;
  SD->u1.f0.dv1[35667] = 0.0;
  SD->u1.f0.dv1[35668] = -1.0;
  memset(&SD->u1.f0.dv1[35669], 0, 2611U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 174], &SD->u1.f0.dv1[i1 * 174], 174U * sizeof(real_T));
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
  biq[164] = t9;
  biq[165] = t9;
  biq[166] = t9;
  biq[167] = t10;
  biq[168] = t10;
  biq[169] = t10;
  biq[170] = t11;
  biq[171] = t11;
  biq[172] = t11;
  biq[173] = -in9[1];
}

/* End of code generation (IqFast_LeftStart7V40.cpp) */
