/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart8V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart8V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step8.h"
#include "IqFast_LeftStart8V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart8V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart8V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart8V40(Fast_MPCV40_form_Step8StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[37400], real_T biq[170])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART8V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART8V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:55:40 */
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
  memset(&SD->u1.f0.dv1[139], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[341] = -1.0;
  memset(&SD->u1.f0.dv1[342], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[387] = 1.0;
  memset(&SD->u1.f0.dv1[388], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[433] = -in11[2];
  memset(&SD->u1.f0.dv1[434], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[479] = -in11[2];
  memset(&SD->u1.f0.dv1[480], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[682] = -1.0;
  memset(&SD->u1.f0.dv1[683], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[728] = 1.0;
  memset(&SD->u1.f0.dv1[729], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[774] = -in11[2];
  memset(&SD->u1.f0.dv1[775], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[820] = -in11[2];
  memset(&SD->u1.f0.dv1[821], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[1023] = -1.0;
  memset(&SD->u1.f0.dv1[1024], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1069] = 1.0;
  memset(&SD->u1.f0.dv1[1070], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1115] = -in11[2];
  memset(&SD->u1.f0.dv1[1116], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1161] = -in11[2];
  memset(&SD->u1.f0.dv1[1162], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[1364] = -1.0;
  memset(&SD->u1.f0.dv1[1365], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1410] = 1.0;
  memset(&SD->u1.f0.dv1[1411], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1456] = -in11[2];
  memset(&SD->u1.f0.dv1[1457], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1502] = -in11[2];
  memset(&SD->u1.f0.dv1[1503], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[1705] = -1.0;
  memset(&SD->u1.f0.dv1[1706], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1751] = 1.0;
  memset(&SD->u1.f0.dv1[1752], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1797] = -in11[2];
  memset(&SD->u1.f0.dv1[1798], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1843] = -in11[2];
  memset(&SD->u1.f0.dv1[1844], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[2046] = -1.0;
  memset(&SD->u1.f0.dv1[2047], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2092] = 1.0;
  memset(&SD->u1.f0.dv1[2093], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2138] = -in11[2];
  memset(&SD->u1.f0.dv1[2139], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2184] = -in11[2];
  memset(&SD->u1.f0.dv1[2185], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[2387] = -1.0;
  memset(&SD->u1.f0.dv1[2388], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2433] = 1.0;
  memset(&SD->u1.f0.dv1[2434], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2479] = -in11[2];
  memset(&SD->u1.f0.dv1[2480], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2525] = -in11[2];
  memset(&SD->u1.f0.dv1[2526], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[2728] = -1.0;
  memset(&SD->u1.f0.dv1[2729], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2774] = 1.0;
  memset(&SD->u1.f0.dv1[2775], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2820] = -in11[2];
  memset(&SD->u1.f0.dv1[2821], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2866] = -in11[2];
  memset(&SD->u1.f0.dv1[2867], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[3069] = -1.0;
  memset(&SD->u1.f0.dv1[3070], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3115] = 1.0;
  memset(&SD->u1.f0.dv1[3116], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3161] = -in11[2];
  memset(&SD->u1.f0.dv1[3162], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3207] = -in11[2];
  memset(&SD->u1.f0.dv1[3208], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[3410] = -1.0;
  memset(&SD->u1.f0.dv1[3411], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3456] = 1.0;
  memset(&SD->u1.f0.dv1[3457], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3502] = -in11[2];
  memset(&SD->u1.f0.dv1[3503], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3548] = -in11[2];
  memset(&SD->u1.f0.dv1[3549], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[3751] = -1.0;
  memset(&SD->u1.f0.dv1[3752], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3797] = 1.0;
  memset(&SD->u1.f0.dv1[3798], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3843] = -in11[2];
  memset(&SD->u1.f0.dv1[3844], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3889] = -in11[2];
  memset(&SD->u1.f0.dv1[3890], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[4092] = -1.0;
  memset(&SD->u1.f0.dv1[4093], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4138] = 1.0;
  memset(&SD->u1.f0.dv1[4139], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4184] = -in11[2];
  memset(&SD->u1.f0.dv1[4185], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4230] = -in11[2];
  memset(&SD->u1.f0.dv1[4231], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[4433] = -1.0;
  memset(&SD->u1.f0.dv1[4434], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4479] = 1.0;
  memset(&SD->u1.f0.dv1[4480], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4525] = -in11[2];
  memset(&SD->u1.f0.dv1[4526], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4571] = -in11[2];
  memset(&SD->u1.f0.dv1[4572], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[4774] = -1.0;
  memset(&SD->u1.f0.dv1[4775], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4820] = 1.0;
  memset(&SD->u1.f0.dv1[4821], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4866] = -in11[2];
  memset(&SD->u1.f0.dv1[4867], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4912] = -in11[2];
  memset(&SD->u1.f0.dv1[4913], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[5115] = -1.0;
  memset(&SD->u1.f0.dv1[5116], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5161] = 1.0;
  memset(&SD->u1.f0.dv1[5162], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5207] = -in11[2];
  memset(&SD->u1.f0.dv1[5208], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5253] = -in11[2];
  memset(&SD->u1.f0.dv1[5254], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[5456] = -1.0;
  memset(&SD->u1.f0.dv1[5457], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5502] = 1.0;
  memset(&SD->u1.f0.dv1[5503], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5548] = -in11[2];
  memset(&SD->u1.f0.dv1[5549], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5594] = -in11[2];
  memset(&SD->u1.f0.dv1[5595], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[5797] = -1.0;
  memset(&SD->u1.f0.dv1[5798], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5843] = 1.0;
  memset(&SD->u1.f0.dv1[5844], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5889] = -in11[2];
  memset(&SD->u1.f0.dv1[5890], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5935] = -in11[2];
  memset(&SD->u1.f0.dv1[5936], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[6138] = -1.0;
  memset(&SD->u1.f0.dv1[6139], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6184] = 1.0;
  memset(&SD->u1.f0.dv1[6185], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6230] = -in11[2];
  memset(&SD->u1.f0.dv1[6231], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6276] = -in11[2];
  memset(&SD->u1.f0.dv1[6277], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[6479] = -1.0;
  memset(&SD->u1.f0.dv1[6480], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6525] = 1.0;
  memset(&SD->u1.f0.dv1[6526], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6571] = -in11[2];
  memset(&SD->u1.f0.dv1[6572], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6617] = -in11[2];
  memset(&SD->u1.f0.dv1[6618], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[6820] = -1.0;
  memset(&SD->u1.f0.dv1[6821], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6866] = 1.0;
  memset(&SD->u1.f0.dv1[6867], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6912] = -in11[2];
  memset(&SD->u1.f0.dv1[6913], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6958] = -in11[2];
  memset(&SD->u1.f0.dv1[6959], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[7161] = -1.0;
  memset(&SD->u1.f0.dv1[7162], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7207] = 1.0;
  memset(&SD->u1.f0.dv1[7208], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7253] = -in11[2];
  memset(&SD->u1.f0.dv1[7254], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7299] = -in11[2];
  memset(&SD->u1.f0.dv1[7300], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[7502] = -1.0;
  memset(&SD->u1.f0.dv1[7503], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7548] = 1.0;
  memset(&SD->u1.f0.dv1[7549], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7594] = -in11[2];
  memset(&SD->u1.f0.dv1[7595], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7640] = -in11[2];
  memset(&SD->u1.f0.dv1[7641], 0, 202U * sizeof(real_T));
  SD->u1.f0.dv1[7843] = -1.0;
  memset(&SD->u1.f0.dv1[7844], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7889] = 1.0;
  memset(&SD->u1.f0.dv1[7890], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[7912] = -in11[3];
  memset(&SD->u1.f0.dv1[7913], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7958] = -in11[3];
  memset(&SD->u1.f0.dv1[7959], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[8184] = -1.0;
  memset(&SD->u1.f0.dv1[8185], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8230] = 1.0;
  memset(&SD->u1.f0.dv1[8231], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8253] = -in11[3];
  memset(&SD->u1.f0.dv1[8254], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8299] = -in11[3];
  memset(&SD->u1.f0.dv1[8300], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[8525] = -1.0;
  memset(&SD->u1.f0.dv1[8526], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8571] = 1.0;
  memset(&SD->u1.f0.dv1[8572], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8594] = -in11[3];
  memset(&SD->u1.f0.dv1[8595], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8640] = -in11[3];
  memset(&SD->u1.f0.dv1[8641], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[8866] = -1.0;
  memset(&SD->u1.f0.dv1[8867], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8912] = 1.0;
  memset(&SD->u1.f0.dv1[8913], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8935] = -in11[3];
  memset(&SD->u1.f0.dv1[8936], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8981] = -in11[3];
  memset(&SD->u1.f0.dv1[8982], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[9207] = -1.0;
  memset(&SD->u1.f0.dv1[9208], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9253] = 1.0;
  memset(&SD->u1.f0.dv1[9254], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9276] = -in11[3];
  memset(&SD->u1.f0.dv1[9277], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9322] = -in11[3];
  memset(&SD->u1.f0.dv1[9323], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[9548] = -1.0;
  memset(&SD->u1.f0.dv1[9549], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9594] = 1.0;
  memset(&SD->u1.f0.dv1[9595], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9617] = -in11[3];
  memset(&SD->u1.f0.dv1[9618], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9663] = -in11[3];
  memset(&SD->u1.f0.dv1[9664], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[9889] = -1.0;
  memset(&SD->u1.f0.dv1[9890], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9935] = 1.0;
  memset(&SD->u1.f0.dv1[9936], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9958] = -in11[3];
  memset(&SD->u1.f0.dv1[9959], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10004] = -in11[3];
  memset(&SD->u1.f0.dv1[10005], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[10230] = -1.0;
  memset(&SD->u1.f0.dv1[10231], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10276] = 1.0;
  memset(&SD->u1.f0.dv1[10277], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10299] = -in11[3];
  memset(&SD->u1.f0.dv1[10300], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10345] = -in11[3];
  memset(&SD->u1.f0.dv1[10346], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[10571] = -1.0;
  memset(&SD->u1.f0.dv1[10572], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10617] = 1.0;
  memset(&SD->u1.f0.dv1[10618], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10640] = -in11[3];
  memset(&SD->u1.f0.dv1[10641], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10686] = -in11[3];
  memset(&SD->u1.f0.dv1[10687], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[10912] = -1.0;
  memset(&SD->u1.f0.dv1[10913], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10958] = 1.0;
  memset(&SD->u1.f0.dv1[10959], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10981] = -in11[3];
  memset(&SD->u1.f0.dv1[10982], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11027] = -in11[3];
  memset(&SD->u1.f0.dv1[11028], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[11253] = -1.0;
  memset(&SD->u1.f0.dv1[11254], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11299] = 1.0;
  memset(&SD->u1.f0.dv1[11300], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11322] = -in11[3];
  memset(&SD->u1.f0.dv1[11323], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11368] = -in11[3];
  memset(&SD->u1.f0.dv1[11369], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[11594] = -1.0;
  memset(&SD->u1.f0.dv1[11595], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11640] = 1.0;
  memset(&SD->u1.f0.dv1[11641], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11663] = -in11[3];
  memset(&SD->u1.f0.dv1[11664], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11709] = -in11[3];
  memset(&SD->u1.f0.dv1[11710], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[11935] = -1.0;
  memset(&SD->u1.f0.dv1[11936], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11981] = 1.0;
  memset(&SD->u1.f0.dv1[11982], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12004] = -in11[3];
  memset(&SD->u1.f0.dv1[12005], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12050] = -in11[3];
  memset(&SD->u1.f0.dv1[12051], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[12276] = -1.0;
  memset(&SD->u1.f0.dv1[12277], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12322] = 1.0;
  memset(&SD->u1.f0.dv1[12323], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12345] = -in11[3];
  memset(&SD->u1.f0.dv1[12346], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12391] = -in11[3];
  memset(&SD->u1.f0.dv1[12392], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[12617] = -1.0;
  memset(&SD->u1.f0.dv1[12618], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12663] = 1.0;
  memset(&SD->u1.f0.dv1[12664], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12686] = -in11[3];
  memset(&SD->u1.f0.dv1[12687], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12732] = -in11[3];
  memset(&SD->u1.f0.dv1[12733], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[12958] = -1.0;
  memset(&SD->u1.f0.dv1[12959], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13004] = 1.0;
  memset(&SD->u1.f0.dv1[13005], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13027] = -in11[3];
  memset(&SD->u1.f0.dv1[13028], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13073] = -in11[3];
  memset(&SD->u1.f0.dv1[13074], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[13299] = -1.0;
  memset(&SD->u1.f0.dv1[13300], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13345] = 1.0;
  memset(&SD->u1.f0.dv1[13346], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13368] = -in11[3];
  memset(&SD->u1.f0.dv1[13369], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13414] = -in11[3];
  memset(&SD->u1.f0.dv1[13415], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[13640] = -1.0;
  memset(&SD->u1.f0.dv1[13641], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13686] = 1.0;
  memset(&SD->u1.f0.dv1[13687], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13709] = -in11[3];
  memset(&SD->u1.f0.dv1[13710], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13755] = -in11[3];
  memset(&SD->u1.f0.dv1[13756], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[13981] = -1.0;
  memset(&SD->u1.f0.dv1[13982], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14027] = 1.0;
  memset(&SD->u1.f0.dv1[14028], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14050] = -in11[3];
  memset(&SD->u1.f0.dv1[14051], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14096] = -in11[3];
  memset(&SD->u1.f0.dv1[14097], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[14322] = -1.0;
  memset(&SD->u1.f0.dv1[14323], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14368] = 1.0;
  memset(&SD->u1.f0.dv1[14369], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14391] = -in11[3];
  memset(&SD->u1.f0.dv1[14392], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14437] = -in11[3];
  memset(&SD->u1.f0.dv1[14438], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[14663] = -1.0;
  memset(&SD->u1.f0.dv1[14664], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14709] = 1.0;
  memset(&SD->u1.f0.dv1[14710], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14732] = -in11[3];
  memset(&SD->u1.f0.dv1[14733], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14778] = -in11[3];
  memset(&SD->u1.f0.dv1[14779], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[15004] = -1.0;
  memset(&SD->u1.f0.dv1[15005], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15050] = 1.0;
  memset(&SD->u1.f0.dv1[15051], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15073] = -in11[3];
  memset(&SD->u1.f0.dv1[15074], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15119] = -in11[3];
  memset(&SD->u1.f0.dv1[15120], 0, 225U * sizeof(real_T));
  SD->u1.f0.dv1[15345] = -1.0;
  memset(&SD->u1.f0.dv1[15346], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15391] = 1.0;
  memset(&SD->u1.f0.dv1[15392], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15414] = -in11[3];
  memset(&SD->u1.f0.dv1[15415], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15460] = -in11[3];
  memset(&SD->u1.f0.dv1[15461], 0, 179U * sizeof(real_T));
  SD->u1.f0.dv1[15640] = 1.0;
  memset(&SD->u1.f0.dv1[15641], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15686] = -1.0;
  memset(&SD->u1.f0.dv1[15687], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[15801] = 1.0;
  SD->u1.f0.dv1[15802] = 0.0;
  SD->u1.f0.dv1[15803] = -1.0;
  SD->u1.f0.dv1[15804] = 0.0;
  SD->u1.f0.dv1[15805] = 0.0;
  SD->u1.f0.dv1[15806] = 0.0;
  SD->u1.f0.dv1[15807] = 0.0;
  SD->u1.f0.dv1[15808] = 0.0;
  SD->u1.f0.dv1[15809] = 0.0;
  SD->u1.f0.dv1[15810] = 0.0;
  SD->u1.f0.dv1[15811] = 1.0;
  memset(&SD->u1.f0.dv1[15812], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15857] = -1.0;
  memset(&SD->u1.f0.dv1[15858], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[15972] = 1.0;
  SD->u1.f0.dv1[15973] = 0.0;
  SD->u1.f0.dv1[15974] = -1.0;
  SD->u1.f0.dv1[15975] = 0.0;
  SD->u1.f0.dv1[15976] = 0.0;
  SD->u1.f0.dv1[15977] = 0.0;
  SD->u1.f0.dv1[15978] = 0.0;
  SD->u1.f0.dv1[15979] = 0.0;
  SD->u1.f0.dv1[15980] = 0.0;
  SD->u1.f0.dv1[15981] = 0.0;
  SD->u1.f0.dv1[15982] = 1.0;
  memset(&SD->u1.f0.dv1[15983], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16028] = -1.0;
  memset(&SD->u1.f0.dv1[16029], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[16153] = 1.0;
  memset(&SD->u1.f0.dv1[16154], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16199] = -1.0;
  memset(&SD->u1.f0.dv1[16200], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[16324] = 1.0;
  memset(&SD->u1.f0.dv1[16325], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16370] = -1.0;
  memset(&SD->u1.f0.dv1[16371], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[16495] = 1.0;
  memset(&SD->u1.f0.dv1[16496], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16541] = -1.0;
  memset(&SD->u1.f0.dv1[16542], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[16666] = 1.0;
  memset(&SD->u1.f0.dv1[16667], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16712] = -1.0;
  memset(&SD->u1.f0.dv1[16713], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[16837] = 1.0;
  memset(&SD->u1.f0.dv1[16838], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16883] = -1.0;
  memset(&SD->u1.f0.dv1[16884], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[17008] = 1.0;
  memset(&SD->u1.f0.dv1[17009], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17054] = -1.0;
  memset(&SD->u1.f0.dv1[17055], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[17179] = 1.0;
  memset(&SD->u1.f0.dv1[17180], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17225] = -1.0;
  memset(&SD->u1.f0.dv1[17226], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[17350] = 1.0;
  memset(&SD->u1.f0.dv1[17351], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17396] = -1.0;
  memset(&SD->u1.f0.dv1[17397], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[17521] = 1.0;
  memset(&SD->u1.f0.dv1[17522], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17567] = -1.0;
  memset(&SD->u1.f0.dv1[17568], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[17692] = 1.0;
  memset(&SD->u1.f0.dv1[17693], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17738] = -1.0;
  memset(&SD->u1.f0.dv1[17739], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[17863] = 1.0;
  memset(&SD->u1.f0.dv1[17864], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17909] = -1.0;
  memset(&SD->u1.f0.dv1[17910], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[18034] = 1.0;
  memset(&SD->u1.f0.dv1[18035], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18080] = -1.0;
  memset(&SD->u1.f0.dv1[18081], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[18205] = 1.0;
  memset(&SD->u1.f0.dv1[18206], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18251] = -1.0;
  memset(&SD->u1.f0.dv1[18252], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[18376] = 1.0;
  memset(&SD->u1.f0.dv1[18377], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18422] = -1.0;
  memset(&SD->u1.f0.dv1[18423], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[18547] = 1.0;
  memset(&SD->u1.f0.dv1[18548], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18593] = -1.0;
  memset(&SD->u1.f0.dv1[18594], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[18718] = 1.0;
  memset(&SD->u1.f0.dv1[18719], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18764] = -1.0;
  memset(&SD->u1.f0.dv1[18765], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[18889] = 1.0;
  memset(&SD->u1.f0.dv1[18890], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18935] = -1.0;
  memset(&SD->u1.f0.dv1[18936], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[19060] = 1.0;
  memset(&SD->u1.f0.dv1[19061], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19106] = -1.0;
  memset(&SD->u1.f0.dv1[19107], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[19231] = 1.0;
  memset(&SD->u1.f0.dv1[19232], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19277] = -1.0;
  memset(&SD->u1.f0.dv1[19278], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[19402] = 1.0;
  memset(&SD->u1.f0.dv1[19403], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19448] = -1.0;
  memset(&SD->u1.f0.dv1[19449], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[19573] = 1.0;
  memset(&SD->u1.f0.dv1[19574], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19619] = -1.0;
  memset(&SD->u1.f0.dv1[19620], 0, 95U * sizeof(real_T));
  SD->u1.f0.dv1[19715] = 1.0;
  SD->u1.f0.dv1[19716] = 0.0;
  SD->u1.f0.dv1[19717] = -1.0;
  memset(&SD->u1.f0.dv1[19718], 0, 26U * sizeof(real_T));
  SD->u1.f0.dv1[19744] = 1.0;
  memset(&SD->u1.f0.dv1[19745], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19790] = -1.0;
  memset(&SD->u1.f0.dv1[19791], 0, 95U * sizeof(real_T));
  SD->u1.f0.dv1[19886] = 1.0;
  SD->u1.f0.dv1[19887] = 0.0;
  SD->u1.f0.dv1[19888] = -1.0;
  memset(&SD->u1.f0.dv1[19889], 0, 26U * sizeof(real_T));
  SD->u1.f0.dv1[19915] = 1.0;
  memset(&SD->u1.f0.dv1[19916], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19961] = -1.0;
  memset(&SD->u1.f0.dv1[19962], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[20086] = 1.0;
  memset(&SD->u1.f0.dv1[20087], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20132] = -1.0;
  memset(&SD->u1.f0.dv1[20133], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[20257] = 1.0;
  memset(&SD->u1.f0.dv1[20258], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20303] = -1.0;
  memset(&SD->u1.f0.dv1[20304], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[20428] = 1.0;
  memset(&SD->u1.f0.dv1[20429], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20474] = -1.0;
  memset(&SD->u1.f0.dv1[20475], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[20599] = 1.0;
  memset(&SD->u1.f0.dv1[20600], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20645] = -1.0;
  memset(&SD->u1.f0.dv1[20646], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[20770] = 1.0;
  memset(&SD->u1.f0.dv1[20771], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20816] = -1.0;
  memset(&SD->u1.f0.dv1[20817], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[20941] = 1.0;
  memset(&SD->u1.f0.dv1[20942], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20987] = -1.0;
  memset(&SD->u1.f0.dv1[20988], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[21112] = 1.0;
  memset(&SD->u1.f0.dv1[21113], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21158] = -1.0;
  memset(&SD->u1.f0.dv1[21159], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[21283] = 1.0;
  memset(&SD->u1.f0.dv1[21284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21329] = -1.0;
  memset(&SD->u1.f0.dv1[21330], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[21454] = 1.0;
  memset(&SD->u1.f0.dv1[21455], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21500] = -1.0;
  memset(&SD->u1.f0.dv1[21501], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[21625] = 1.0;
  memset(&SD->u1.f0.dv1[21626], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21671] = -1.0;
  memset(&SD->u1.f0.dv1[21672], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[21796] = 1.0;
  memset(&SD->u1.f0.dv1[21797], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21842] = -1.0;
  memset(&SD->u1.f0.dv1[21843], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[21967] = 1.0;
  memset(&SD->u1.f0.dv1[21968], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22013] = -1.0;
  memset(&SD->u1.f0.dv1[22014], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[22138] = 1.0;
  memset(&SD->u1.f0.dv1[22139], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22184] = -1.0;
  memset(&SD->u1.f0.dv1[22185], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[22309] = 1.0;
  memset(&SD->u1.f0.dv1[22310], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22355] = -1.0;
  memset(&SD->u1.f0.dv1[22356], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[22480] = 1.0;
  memset(&SD->u1.f0.dv1[22481], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22526] = -1.0;
  memset(&SD->u1.f0.dv1[22527], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[22651] = 1.0;
  memset(&SD->u1.f0.dv1[22652], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22697] = -1.0;
  memset(&SD->u1.f0.dv1[22698], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[22822] = 1.0;
  memset(&SD->u1.f0.dv1[22823], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22868] = -1.0;
  memset(&SD->u1.f0.dv1[22869], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[22993] = 1.0;
  memset(&SD->u1.f0.dv1[22994], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23039] = -1.0;
  memset(&SD->u1.f0.dv1[23040], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[23164] = 1.0;
  memset(&SD->u1.f0.dv1[23165], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23210] = -1.0;
  memset(&SD->u1.f0.dv1[23211], 0, 124U * sizeof(real_T));
  SD->u1.f0.dv1[23335] = 1.0;
  memset(&SD->u1.f0.dv1[23336], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23381] = -1.0;
  memset(&SD->u1.f0.dv1[23382], 0, 927U * sizeof(real_T));
  SD->u1.f0.dv1[24309] = 1.0;
  memset(&SD->u1.f0.dv1[24310], 0, 625U * sizeof(real_T));
  SD->u1.f0.dv1[24935] = -1.0;
  memset(&SD->u1.f0.dv1[24936], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[24958] = -1.0;
  memset(&SD->u1.f0.dv1[24959], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[25106] = -1.0;
  memset(&SD->u1.f0.dv1[25107], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25129] = -1.0;
  memset(&SD->u1.f0.dv1[25130], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[25277] = -1.0;
  memset(&SD->u1.f0.dv1[25278], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25300] = -1.0;
  memset(&SD->u1.f0.dv1[25301], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[25448] = -1.0;
  memset(&SD->u1.f0.dv1[25449], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25471] = -1.0;
  memset(&SD->u1.f0.dv1[25472], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[25619] = -1.0;
  memset(&SD->u1.f0.dv1[25620], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25642] = -1.0;
  memset(&SD->u1.f0.dv1[25643], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[25790] = -1.0;
  memset(&SD->u1.f0.dv1[25791], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25813] = -1.0;
  memset(&SD->u1.f0.dv1[25814], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[25961] = -1.0;
  memset(&SD->u1.f0.dv1[25962], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[25984] = -1.0;
  memset(&SD->u1.f0.dv1[25985], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[26132] = -1.0;
  memset(&SD->u1.f0.dv1[26133], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26155] = -1.0;
  memset(&SD->u1.f0.dv1[26156], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[26303] = -1.0;
  memset(&SD->u1.f0.dv1[26304], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26326] = -1.0;
  memset(&SD->u1.f0.dv1[26327], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[26474] = -1.0;
  memset(&SD->u1.f0.dv1[26475], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26497] = -1.0;
  memset(&SD->u1.f0.dv1[26498], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[26645] = -1.0;
  memset(&SD->u1.f0.dv1[26646], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26668] = -1.0;
  memset(&SD->u1.f0.dv1[26669], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[26816] = -1.0;
  memset(&SD->u1.f0.dv1[26817], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[26839] = -1.0;
  memset(&SD->u1.f0.dv1[26840], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[26987] = -1.0;
  memset(&SD->u1.f0.dv1[26988], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27010] = -1.0;
  memset(&SD->u1.f0.dv1[27011], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[27158] = -1.0;
  memset(&SD->u1.f0.dv1[27159], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27181] = -1.0;
  memset(&SD->u1.f0.dv1[27182], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[27329] = -1.0;
  memset(&SD->u1.f0.dv1[27330], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27352] = -1.0;
  memset(&SD->u1.f0.dv1[27353], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[27500] = -1.0;
  memset(&SD->u1.f0.dv1[27501], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27523] = -1.0;
  memset(&SD->u1.f0.dv1[27524], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[27671] = -1.0;
  memset(&SD->u1.f0.dv1[27672], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27694] = -1.0;
  memset(&SD->u1.f0.dv1[27695], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[27842] = -1.0;
  memset(&SD->u1.f0.dv1[27843], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27865] = -1.0;
  memset(&SD->u1.f0.dv1[27866], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[28013] = -1.0;
  memset(&SD->u1.f0.dv1[28014], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28036] = -1.0;
  memset(&SD->u1.f0.dv1[28037], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[28184] = -1.0;
  memset(&SD->u1.f0.dv1[28185], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28207] = -1.0;
  memset(&SD->u1.f0.dv1[28208], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[28355] = -1.0;
  memset(&SD->u1.f0.dv1[28356], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28378] = -1.0;
  memset(&SD->u1.f0.dv1[28379], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[28526] = -1.0;
  memset(&SD->u1.f0.dv1[28527], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28549] = -1.0;
  memset(&SD->u1.f0.dv1[28550], 0, 147U * sizeof(real_T));
  SD->u1.f0.dv1[28697] = -1.0;
  memset(&SD->u1.f0.dv1[28698], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28720] = -1.0;
  memset(&SD->u1.f0.dv1[28721], 0, 178U * sizeof(real_T));
  SD->u1.f0.dv1[28899] = -1.0;
  memset(&SD->u1.f0.dv1[28900], 0, 3901U * sizeof(real_T));
  SD->u1.f0.dv1[32801] = -1.0;
  SD->u1.f0.dv1[32802] = 0.0;
  SD->u1.f0.dv1[32803] = -1.0;
  memset(&SD->u1.f0.dv1[32804], 0, 168U * sizeof(real_T));
  SD->u1.f0.dv1[32972] = -1.0;
  SD->u1.f0.dv1[32973] = 0.0;
  SD->u1.f0.dv1[32974] = -1.0;
  memset(&SD->u1.f0.dv1[32975], 0, 1530U * sizeof(real_T));
  SD->u1.f0.dv1[34505] = -1.0;
  SD->u1.f0.dv1[34506] = 0.0;
  SD->u1.f0.dv1[34507] = -1.0;
  memset(&SD->u1.f0.dv1[34508], 0, 168U * sizeof(real_T));
  SD->u1.f0.dv1[34676] = -1.0;
  SD->u1.f0.dv1[34677] = 0.0;
  SD->u1.f0.dv1[34678] = -1.0;
  memset(&SD->u1.f0.dv1[34679], 0, 2721U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 170], &SD->u1.f0.dv1[i1 * 170], 170U * sizeof(real_T));
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
  biq[163] = t9;
  biq[164] = t9;
  biq[165] = t10;
  biq[166] = t10;
  biq[167] = t11;
  biq[168] = t11;
  biq[169] = -in9[1];
}

/* End of code generation (IqFast_LeftStart8V40.cpp) */
