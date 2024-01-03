/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart4V40.cpp
 *
 * Code generation for function 'IqFast_LeftStart4V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step4.h"
#include "IqFast_LeftStart4V40.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart4V40",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart4V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart4V40(Fast_MPCV40_form_Step4StackData *SD, const emlrtStack *
  sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[40920], real_T biq[186])
{
  int32_T i1;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_LEFTSTART4V40 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART4V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     21-Aug-2023 20:33:13 */
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
  memset(&SD->u1.f0.dv1[139], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[373] = -1.0;
  memset(&SD->u1.f0.dv1[374], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[419] = 1.0;
  memset(&SD->u1.f0.dv1[420], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[465] = -in11[2];
  memset(&SD->u1.f0.dv1[466], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[511] = -in11[2];
  memset(&SD->u1.f0.dv1[512], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[746] = -1.0;
  memset(&SD->u1.f0.dv1[747], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[792] = 1.0;
  memset(&SD->u1.f0.dv1[793], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[838] = -in11[2];
  memset(&SD->u1.f0.dv1[839], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[884] = -in11[2];
  memset(&SD->u1.f0.dv1[885], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[1119] = -1.0;
  memset(&SD->u1.f0.dv1[1120], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1165] = 1.0;
  memset(&SD->u1.f0.dv1[1166], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1211] = -in11[2];
  memset(&SD->u1.f0.dv1[1212], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1257] = -in11[2];
  memset(&SD->u1.f0.dv1[1258], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[1492] = -1.0;
  memset(&SD->u1.f0.dv1[1493], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1538] = 1.0;
  memset(&SD->u1.f0.dv1[1539], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1584] = -in11[2];
  memset(&SD->u1.f0.dv1[1585], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1630] = -in11[2];
  memset(&SD->u1.f0.dv1[1631], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[1865] = -1.0;
  memset(&SD->u1.f0.dv1[1866], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1911] = 1.0;
  memset(&SD->u1.f0.dv1[1912], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[1957] = -in11[2];
  memset(&SD->u1.f0.dv1[1958], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2003] = -in11[2];
  memset(&SD->u1.f0.dv1[2004], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[2238] = -1.0;
  memset(&SD->u1.f0.dv1[2239], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2284] = 1.0;
  memset(&SD->u1.f0.dv1[2285], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2330] = -in11[2];
  memset(&SD->u1.f0.dv1[2331], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2376] = -in11[2];
  memset(&SD->u1.f0.dv1[2377], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[2611] = -1.0;
  memset(&SD->u1.f0.dv1[2612], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2657] = 1.0;
  memset(&SD->u1.f0.dv1[2658], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2703] = -in11[2];
  memset(&SD->u1.f0.dv1[2704], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[2749] = -in11[2];
  memset(&SD->u1.f0.dv1[2750], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[2984] = -1.0;
  memset(&SD->u1.f0.dv1[2985], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3030] = 1.0;
  memset(&SD->u1.f0.dv1[3031], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3076] = -in11[2];
  memset(&SD->u1.f0.dv1[3077], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3122] = -in11[2];
  memset(&SD->u1.f0.dv1[3123], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[3357] = -1.0;
  memset(&SD->u1.f0.dv1[3358], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3403] = 1.0;
  memset(&SD->u1.f0.dv1[3404], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3449] = -in11[2];
  memset(&SD->u1.f0.dv1[3450], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3495] = -in11[2];
  memset(&SD->u1.f0.dv1[3496], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[3730] = -1.0;
  memset(&SD->u1.f0.dv1[3731], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3776] = 1.0;
  memset(&SD->u1.f0.dv1[3777], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3822] = -in11[2];
  memset(&SD->u1.f0.dv1[3823], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[3868] = -in11[2];
  memset(&SD->u1.f0.dv1[3869], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[4103] = -1.0;
  memset(&SD->u1.f0.dv1[4104], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4149] = 1.0;
  memset(&SD->u1.f0.dv1[4150], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4195] = -in11[2];
  memset(&SD->u1.f0.dv1[4196], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4241] = -in11[2];
  memset(&SD->u1.f0.dv1[4242], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[4476] = -1.0;
  memset(&SD->u1.f0.dv1[4477], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4522] = 1.0;
  memset(&SD->u1.f0.dv1[4523], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4568] = -in11[2];
  memset(&SD->u1.f0.dv1[4569], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4614] = -in11[2];
  memset(&SD->u1.f0.dv1[4615], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[4849] = -1.0;
  memset(&SD->u1.f0.dv1[4850], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4895] = 1.0;
  memset(&SD->u1.f0.dv1[4896], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4941] = -in11[2];
  memset(&SD->u1.f0.dv1[4942], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[4987] = -in11[2];
  memset(&SD->u1.f0.dv1[4988], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[5222] = -1.0;
  memset(&SD->u1.f0.dv1[5223], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5268] = 1.0;
  memset(&SD->u1.f0.dv1[5269], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5314] = -in11[2];
  memset(&SD->u1.f0.dv1[5315], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5360] = -in11[2];
  memset(&SD->u1.f0.dv1[5361], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[5595] = -1.0;
  memset(&SD->u1.f0.dv1[5596], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5641] = 1.0;
  memset(&SD->u1.f0.dv1[5642], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5687] = -in11[2];
  memset(&SD->u1.f0.dv1[5688], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[5733] = -in11[2];
  memset(&SD->u1.f0.dv1[5734], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[5968] = -1.0;
  memset(&SD->u1.f0.dv1[5969], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6014] = 1.0;
  memset(&SD->u1.f0.dv1[6015], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6060] = -in11[2];
  memset(&SD->u1.f0.dv1[6061], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6106] = -in11[2];
  memset(&SD->u1.f0.dv1[6107], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[6341] = -1.0;
  memset(&SD->u1.f0.dv1[6342], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6387] = 1.0;
  memset(&SD->u1.f0.dv1[6388], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6433] = -in11[2];
  memset(&SD->u1.f0.dv1[6434], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6479] = -in11[2];
  memset(&SD->u1.f0.dv1[6480], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[6714] = -1.0;
  memset(&SD->u1.f0.dv1[6715], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6760] = 1.0;
  memset(&SD->u1.f0.dv1[6761], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6806] = -in11[2];
  memset(&SD->u1.f0.dv1[6807], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[6852] = -in11[2];
  memset(&SD->u1.f0.dv1[6853], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[7087] = -1.0;
  memset(&SD->u1.f0.dv1[7088], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7133] = 1.0;
  memset(&SD->u1.f0.dv1[7134], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7179] = -in11[2];
  memset(&SD->u1.f0.dv1[7180], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7225] = -in11[2];
  memset(&SD->u1.f0.dv1[7226], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[7460] = -1.0;
  memset(&SD->u1.f0.dv1[7461], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7506] = 1.0;
  memset(&SD->u1.f0.dv1[7507], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7552] = -in11[2];
  memset(&SD->u1.f0.dv1[7553], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7598] = -in11[2];
  memset(&SD->u1.f0.dv1[7599], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[7833] = -1.0;
  memset(&SD->u1.f0.dv1[7834], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7879] = 1.0;
  memset(&SD->u1.f0.dv1[7880], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7925] = -in11[2];
  memset(&SD->u1.f0.dv1[7926], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[7971] = -in11[2];
  memset(&SD->u1.f0.dv1[7972], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[8206] = -1.0;
  memset(&SD->u1.f0.dv1[8207], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8252] = 1.0;
  memset(&SD->u1.f0.dv1[8253], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8298] = -in11[2];
  memset(&SD->u1.f0.dv1[8299], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8344] = -in11[2];
  memset(&SD->u1.f0.dv1[8345], 0, 234U * sizeof(real_T));
  SD->u1.f0.dv1[8579] = -1.0;
  memset(&SD->u1.f0.dv1[8580], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8625] = 1.0;
  memset(&SD->u1.f0.dv1[8626], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[8648] = -in11[3];
  memset(&SD->u1.f0.dv1[8649], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8694] = -in11[3];
  memset(&SD->u1.f0.dv1[8695], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[8952] = -1.0;
  memset(&SD->u1.f0.dv1[8953], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[8998] = 1.0;
  memset(&SD->u1.f0.dv1[8999], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9021] = -in11[3];
  memset(&SD->u1.f0.dv1[9022], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9067] = -in11[3];
  memset(&SD->u1.f0.dv1[9068], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[9325] = -1.0;
  memset(&SD->u1.f0.dv1[9326], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9371] = 1.0;
  memset(&SD->u1.f0.dv1[9372], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9394] = -in11[3];
  memset(&SD->u1.f0.dv1[9395], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9440] = -in11[3];
  memset(&SD->u1.f0.dv1[9441], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[9698] = -1.0;
  memset(&SD->u1.f0.dv1[9699], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9744] = 1.0;
  memset(&SD->u1.f0.dv1[9745], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[9767] = -in11[3];
  memset(&SD->u1.f0.dv1[9768], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[9813] = -in11[3];
  memset(&SD->u1.f0.dv1[9814], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[10071] = -1.0;
  memset(&SD->u1.f0.dv1[10072], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10117] = 1.0;
  memset(&SD->u1.f0.dv1[10118], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10140] = -in11[3];
  memset(&SD->u1.f0.dv1[10141], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10186] = -in11[3];
  memset(&SD->u1.f0.dv1[10187], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[10444] = -1.0;
  memset(&SD->u1.f0.dv1[10445], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10490] = 1.0;
  memset(&SD->u1.f0.dv1[10491], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10513] = -in11[3];
  memset(&SD->u1.f0.dv1[10514], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10559] = -in11[3];
  memset(&SD->u1.f0.dv1[10560], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[10817] = -1.0;
  memset(&SD->u1.f0.dv1[10818], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10863] = 1.0;
  memset(&SD->u1.f0.dv1[10864], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[10886] = -in11[3];
  memset(&SD->u1.f0.dv1[10887], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[10932] = -in11[3];
  memset(&SD->u1.f0.dv1[10933], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[11190] = -1.0;
  memset(&SD->u1.f0.dv1[11191], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11236] = 1.0;
  memset(&SD->u1.f0.dv1[11237], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11259] = -in11[3];
  memset(&SD->u1.f0.dv1[11260], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11305] = -in11[3];
  memset(&SD->u1.f0.dv1[11306], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[11563] = -1.0;
  memset(&SD->u1.f0.dv1[11564], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11609] = 1.0;
  memset(&SD->u1.f0.dv1[11610], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[11632] = -in11[3];
  memset(&SD->u1.f0.dv1[11633], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11678] = -in11[3];
  memset(&SD->u1.f0.dv1[11679], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[11936] = -1.0;
  memset(&SD->u1.f0.dv1[11937], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[11982] = 1.0;
  memset(&SD->u1.f0.dv1[11983], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12005] = -in11[3];
  memset(&SD->u1.f0.dv1[12006], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12051] = -in11[3];
  memset(&SD->u1.f0.dv1[12052], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[12309] = -1.0;
  memset(&SD->u1.f0.dv1[12310], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12355] = 1.0;
  memset(&SD->u1.f0.dv1[12356], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12378] = -in11[3];
  memset(&SD->u1.f0.dv1[12379], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12424] = -in11[3];
  memset(&SD->u1.f0.dv1[12425], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[12682] = -1.0;
  memset(&SD->u1.f0.dv1[12683], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12728] = 1.0;
  memset(&SD->u1.f0.dv1[12729], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[12751] = -in11[3];
  memset(&SD->u1.f0.dv1[12752], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[12797] = -in11[3];
  memset(&SD->u1.f0.dv1[12798], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[13055] = -1.0;
  memset(&SD->u1.f0.dv1[13056], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13101] = 1.0;
  memset(&SD->u1.f0.dv1[13102], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13124] = -in11[3];
  memset(&SD->u1.f0.dv1[13125], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13170] = -in11[3];
  memset(&SD->u1.f0.dv1[13171], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[13428] = -1.0;
  memset(&SD->u1.f0.dv1[13429], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13474] = 1.0;
  memset(&SD->u1.f0.dv1[13475], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13497] = -in11[3];
  memset(&SD->u1.f0.dv1[13498], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13543] = -in11[3];
  memset(&SD->u1.f0.dv1[13544], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[13801] = -1.0;
  memset(&SD->u1.f0.dv1[13802], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13847] = 1.0;
  memset(&SD->u1.f0.dv1[13848], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[13870] = -in11[3];
  memset(&SD->u1.f0.dv1[13871], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[13916] = -in11[3];
  memset(&SD->u1.f0.dv1[13917], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[14174] = -1.0;
  memset(&SD->u1.f0.dv1[14175], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14220] = 1.0;
  memset(&SD->u1.f0.dv1[14221], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14243] = -in11[3];
  memset(&SD->u1.f0.dv1[14244], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14289] = -in11[3];
  memset(&SD->u1.f0.dv1[14290], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[14547] = -1.0;
  memset(&SD->u1.f0.dv1[14548], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14593] = 1.0;
  memset(&SD->u1.f0.dv1[14594], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14616] = -in11[3];
  memset(&SD->u1.f0.dv1[14617], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14662] = -in11[3];
  memset(&SD->u1.f0.dv1[14663], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[14920] = -1.0;
  memset(&SD->u1.f0.dv1[14921], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[14966] = 1.0;
  memset(&SD->u1.f0.dv1[14967], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[14989] = -in11[3];
  memset(&SD->u1.f0.dv1[14990], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15035] = -in11[3];
  memset(&SD->u1.f0.dv1[15036], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[15293] = -1.0;
  memset(&SD->u1.f0.dv1[15294], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15339] = 1.0;
  memset(&SD->u1.f0.dv1[15340], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15362] = -in11[3];
  memset(&SD->u1.f0.dv1[15363], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15408] = -in11[3];
  memset(&SD->u1.f0.dv1[15409], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[15666] = -1.0;
  memset(&SD->u1.f0.dv1[15667], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15712] = 1.0;
  memset(&SD->u1.f0.dv1[15713], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[15735] = -in11[3];
  memset(&SD->u1.f0.dv1[15736], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[15781] = -in11[3];
  memset(&SD->u1.f0.dv1[15782], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[16039] = -1.0;
  memset(&SD->u1.f0.dv1[16040], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16085] = 1.0;
  memset(&SD->u1.f0.dv1[16086], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16108] = -in11[3];
  memset(&SD->u1.f0.dv1[16109], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16154] = -in11[3];
  memset(&SD->u1.f0.dv1[16155], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[16412] = -1.0;
  memset(&SD->u1.f0.dv1[16413], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16458] = 1.0;
  memset(&SD->u1.f0.dv1[16459], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16481] = -in11[3];
  memset(&SD->u1.f0.dv1[16482], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16527] = -in11[3];
  memset(&SD->u1.f0.dv1[16528], 0, 257U * sizeof(real_T));
  SD->u1.f0.dv1[16785] = -1.0;
  memset(&SD->u1.f0.dv1[16786], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16831] = 1.0;
  memset(&SD->u1.f0.dv1[16832], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[16854] = -in11[3];
  memset(&SD->u1.f0.dv1[16855], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[16900] = -in11[3];
  memset(&SD->u1.f0.dv1[16901], 0, 211U * sizeof(real_T));
  SD->u1.f0.dv1[17112] = 1.0;
  memset(&SD->u1.f0.dv1[17113], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17158] = -1.0;
  memset(&SD->u1.f0.dv1[17159], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17273] = 1.0;
  SD->u1.f0.dv1[17274] = 0.0;
  SD->u1.f0.dv1[17275] = 0.0;
  SD->u1.f0.dv1[17276] = 0.0;
  SD->u1.f0.dv1[17277] = 0.0;
  SD->u1.f0.dv1[17278] = 0.0;
  SD->u1.f0.dv1[17279] = -1.0;
  memset(&SD->u1.f0.dv1[17280], 0, 19U * sizeof(real_T));
  SD->u1.f0.dv1[17299] = 1.0;
  memset(&SD->u1.f0.dv1[17300], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17345] = -1.0;
  memset(&SD->u1.f0.dv1[17346], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17460] = 1.0;
  SD->u1.f0.dv1[17461] = 0.0;
  SD->u1.f0.dv1[17462] = 0.0;
  SD->u1.f0.dv1[17463] = 0.0;
  SD->u1.f0.dv1[17464] = 0.0;
  SD->u1.f0.dv1[17465] = 0.0;
  SD->u1.f0.dv1[17466] = -1.0;
  memset(&SD->u1.f0.dv1[17467], 0, 19U * sizeof(real_T));
  SD->u1.f0.dv1[17486] = 1.0;
  memset(&SD->u1.f0.dv1[17487], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17532] = -1.0;
  memset(&SD->u1.f0.dv1[17533], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17647] = 1.0;
  SD->u1.f0.dv1[17648] = 0.0;
  SD->u1.f0.dv1[17649] = 0.0;
  SD->u1.f0.dv1[17650] = 0.0;
  SD->u1.f0.dv1[17651] = 0.0;
  SD->u1.f0.dv1[17652] = 0.0;
  SD->u1.f0.dv1[17653] = -1.0;
  memset(&SD->u1.f0.dv1[17654], 0, 19U * sizeof(real_T));
  SD->u1.f0.dv1[17673] = 1.0;
  memset(&SD->u1.f0.dv1[17674], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17719] = -1.0;
  memset(&SD->u1.f0.dv1[17720], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[17834] = 1.0;
  SD->u1.f0.dv1[17835] = 0.0;
  SD->u1.f0.dv1[17836] = 0.0;
  SD->u1.f0.dv1[17837] = 0.0;
  SD->u1.f0.dv1[17838] = 0.0;
  SD->u1.f0.dv1[17839] = 0.0;
  SD->u1.f0.dv1[17840] = -1.0;
  memset(&SD->u1.f0.dv1[17841], 0, 19U * sizeof(real_T));
  SD->u1.f0.dv1[17860] = 1.0;
  memset(&SD->u1.f0.dv1[17861], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[17906] = -1.0;
  memset(&SD->u1.f0.dv1[17907], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18021] = 1.0;
  SD->u1.f0.dv1[18022] = 0.0;
  SD->u1.f0.dv1[18023] = 0.0;
  SD->u1.f0.dv1[18024] = 0.0;
  SD->u1.f0.dv1[18025] = 0.0;
  SD->u1.f0.dv1[18026] = 0.0;
  SD->u1.f0.dv1[18027] = -1.0;
  memset(&SD->u1.f0.dv1[18028], 0, 19U * sizeof(real_T));
  SD->u1.f0.dv1[18047] = 1.0;
  memset(&SD->u1.f0.dv1[18048], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18093] = -1.0;
  memset(&SD->u1.f0.dv1[18094], 0, 114U * sizeof(real_T));
  SD->u1.f0.dv1[18208] = 1.0;
  SD->u1.f0.dv1[18209] = 0.0;
  SD->u1.f0.dv1[18210] = 0.0;
  SD->u1.f0.dv1[18211] = 0.0;
  SD->u1.f0.dv1[18212] = 0.0;
  SD->u1.f0.dv1[18213] = 0.0;
  SD->u1.f0.dv1[18214] = -1.0;
  memset(&SD->u1.f0.dv1[18215], 0, 19U * sizeof(real_T));
  SD->u1.f0.dv1[18234] = 1.0;
  memset(&SD->u1.f0.dv1[18235], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18280] = -1.0;
  memset(&SD->u1.f0.dv1[18281], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[18421] = 1.0;
  memset(&SD->u1.f0.dv1[18422], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18467] = -1.0;
  memset(&SD->u1.f0.dv1[18468], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[18608] = 1.0;
  memset(&SD->u1.f0.dv1[18609], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18654] = -1.0;
  memset(&SD->u1.f0.dv1[18655], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[18795] = 1.0;
  memset(&SD->u1.f0.dv1[18796], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[18841] = -1.0;
  memset(&SD->u1.f0.dv1[18842], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[18982] = 1.0;
  memset(&SD->u1.f0.dv1[18983], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19028] = -1.0;
  memset(&SD->u1.f0.dv1[19029], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[19169] = 1.0;
  memset(&SD->u1.f0.dv1[19170], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19215] = -1.0;
  memset(&SD->u1.f0.dv1[19216], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[19356] = 1.0;
  memset(&SD->u1.f0.dv1[19357], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19402] = -1.0;
  memset(&SD->u1.f0.dv1[19403], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[19543] = 1.0;
  memset(&SD->u1.f0.dv1[19544], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19589] = -1.0;
  memset(&SD->u1.f0.dv1[19590], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[19730] = 1.0;
  memset(&SD->u1.f0.dv1[19731], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19776] = -1.0;
  memset(&SD->u1.f0.dv1[19777], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[19917] = 1.0;
  memset(&SD->u1.f0.dv1[19918], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[19963] = -1.0;
  memset(&SD->u1.f0.dv1[19964], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[20104] = 1.0;
  memset(&SD->u1.f0.dv1[20105], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20150] = -1.0;
  memset(&SD->u1.f0.dv1[20151], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[20291] = 1.0;
  memset(&SD->u1.f0.dv1[20292], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20337] = -1.0;
  memset(&SD->u1.f0.dv1[20338], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[20478] = 1.0;
  memset(&SD->u1.f0.dv1[20479], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20524] = -1.0;
  memset(&SD->u1.f0.dv1[20525], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[20665] = 1.0;
  memset(&SD->u1.f0.dv1[20666], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20711] = -1.0;
  memset(&SD->u1.f0.dv1[20712], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[20852] = 1.0;
  memset(&SD->u1.f0.dv1[20853], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[20898] = -1.0;
  memset(&SD->u1.f0.dv1[20899], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[21039] = 1.0;
  memset(&SD->u1.f0.dv1[21040], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21085] = -1.0;
  memset(&SD->u1.f0.dv1[21086], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[21226] = 1.0;
  memset(&SD->u1.f0.dv1[21227], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21272] = -1.0;
  memset(&SD->u1.f0.dv1[21273], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[21413] = 1.0;
  memset(&SD->u1.f0.dv1[21414], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21459] = -1.0;
  memset(&SD->u1.f0.dv1[21460], 0, 103U * sizeof(real_T));
  SD->u1.f0.dv1[21563] = 1.0;
  SD->u1.f0.dv1[21564] = 0.0;
  SD->u1.f0.dv1[21565] = 0.0;
  SD->u1.f0.dv1[21566] = 0.0;
  SD->u1.f0.dv1[21567] = 0.0;
  SD->u1.f0.dv1[21568] = 0.0;
  SD->u1.f0.dv1[21569] = -1.0;
  memset(&SD->u1.f0.dv1[21570], 0, 30U * sizeof(real_T));
  SD->u1.f0.dv1[21600] = 1.0;
  memset(&SD->u1.f0.dv1[21601], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21646] = -1.0;
  memset(&SD->u1.f0.dv1[21647], 0, 103U * sizeof(real_T));
  SD->u1.f0.dv1[21750] = 1.0;
  SD->u1.f0.dv1[21751] = 0.0;
  SD->u1.f0.dv1[21752] = 0.0;
  SD->u1.f0.dv1[21753] = 0.0;
  SD->u1.f0.dv1[21754] = 0.0;
  SD->u1.f0.dv1[21755] = 0.0;
  SD->u1.f0.dv1[21756] = -1.0;
  memset(&SD->u1.f0.dv1[21757], 0, 30U * sizeof(real_T));
  SD->u1.f0.dv1[21787] = 1.0;
  memset(&SD->u1.f0.dv1[21788], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[21833] = -1.0;
  memset(&SD->u1.f0.dv1[21834], 0, 103U * sizeof(real_T));
  SD->u1.f0.dv1[21937] = 1.0;
  SD->u1.f0.dv1[21938] = 0.0;
  SD->u1.f0.dv1[21939] = 0.0;
  SD->u1.f0.dv1[21940] = 0.0;
  SD->u1.f0.dv1[21941] = 0.0;
  SD->u1.f0.dv1[21942] = 0.0;
  SD->u1.f0.dv1[21943] = -1.0;
  memset(&SD->u1.f0.dv1[21944], 0, 30U * sizeof(real_T));
  SD->u1.f0.dv1[21974] = 1.0;
  memset(&SD->u1.f0.dv1[21975], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22020] = -1.0;
  memset(&SD->u1.f0.dv1[22021], 0, 103U * sizeof(real_T));
  SD->u1.f0.dv1[22124] = 1.0;
  SD->u1.f0.dv1[22125] = 0.0;
  SD->u1.f0.dv1[22126] = 0.0;
  SD->u1.f0.dv1[22127] = 0.0;
  SD->u1.f0.dv1[22128] = 0.0;
  SD->u1.f0.dv1[22129] = 0.0;
  SD->u1.f0.dv1[22130] = -1.0;
  memset(&SD->u1.f0.dv1[22131], 0, 30U * sizeof(real_T));
  SD->u1.f0.dv1[22161] = 1.0;
  memset(&SD->u1.f0.dv1[22162], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22207] = -1.0;
  memset(&SD->u1.f0.dv1[22208], 0, 103U * sizeof(real_T));
  SD->u1.f0.dv1[22311] = 1.0;
  SD->u1.f0.dv1[22312] = 0.0;
  SD->u1.f0.dv1[22313] = 0.0;
  SD->u1.f0.dv1[22314] = 0.0;
  SD->u1.f0.dv1[22315] = 0.0;
  SD->u1.f0.dv1[22316] = 0.0;
  SD->u1.f0.dv1[22317] = -1.0;
  memset(&SD->u1.f0.dv1[22318], 0, 30U * sizeof(real_T));
  SD->u1.f0.dv1[22348] = 1.0;
  memset(&SD->u1.f0.dv1[22349], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22394] = -1.0;
  memset(&SD->u1.f0.dv1[22395], 0, 103U * sizeof(real_T));
  SD->u1.f0.dv1[22498] = 1.0;
  SD->u1.f0.dv1[22499] = 0.0;
  SD->u1.f0.dv1[22500] = 0.0;
  SD->u1.f0.dv1[22501] = 0.0;
  SD->u1.f0.dv1[22502] = 0.0;
  SD->u1.f0.dv1[22503] = 0.0;
  SD->u1.f0.dv1[22504] = -1.0;
  memset(&SD->u1.f0.dv1[22505], 0, 30U * sizeof(real_T));
  SD->u1.f0.dv1[22535] = 1.0;
  memset(&SD->u1.f0.dv1[22536], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22581] = -1.0;
  memset(&SD->u1.f0.dv1[22582], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[22722] = 1.0;
  memset(&SD->u1.f0.dv1[22723], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22768] = -1.0;
  memset(&SD->u1.f0.dv1[22769], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[22909] = 1.0;
  memset(&SD->u1.f0.dv1[22910], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[22955] = -1.0;
  memset(&SD->u1.f0.dv1[22956], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[23096] = 1.0;
  memset(&SD->u1.f0.dv1[23097], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23142] = -1.0;
  memset(&SD->u1.f0.dv1[23143], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[23283] = 1.0;
  memset(&SD->u1.f0.dv1[23284], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23329] = -1.0;
  memset(&SD->u1.f0.dv1[23330], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[23470] = 1.0;
  memset(&SD->u1.f0.dv1[23471], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23516] = -1.0;
  memset(&SD->u1.f0.dv1[23517], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[23657] = 1.0;
  memset(&SD->u1.f0.dv1[23658], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23703] = -1.0;
  memset(&SD->u1.f0.dv1[23704], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[23844] = 1.0;
  memset(&SD->u1.f0.dv1[23845], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[23890] = -1.0;
  memset(&SD->u1.f0.dv1[23891], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[24031] = 1.0;
  memset(&SD->u1.f0.dv1[24032], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24077] = -1.0;
  memset(&SD->u1.f0.dv1[24078], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[24218] = 1.0;
  memset(&SD->u1.f0.dv1[24219], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24264] = -1.0;
  memset(&SD->u1.f0.dv1[24265], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[24405] = 1.0;
  memset(&SD->u1.f0.dv1[24406], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24451] = -1.0;
  memset(&SD->u1.f0.dv1[24452], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[24592] = 1.0;
  memset(&SD->u1.f0.dv1[24593], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24638] = -1.0;
  memset(&SD->u1.f0.dv1[24639], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[24779] = 1.0;
  memset(&SD->u1.f0.dv1[24780], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[24825] = -1.0;
  memset(&SD->u1.f0.dv1[24826], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[24966] = 1.0;
  memset(&SD->u1.f0.dv1[24967], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25012] = -1.0;
  memset(&SD->u1.f0.dv1[25013], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[25153] = 1.0;
  memset(&SD->u1.f0.dv1[25154], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25199] = -1.0;
  memset(&SD->u1.f0.dv1[25200], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[25340] = 1.0;
  memset(&SD->u1.f0.dv1[25341], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25386] = -1.0;
  memset(&SD->u1.f0.dv1[25387], 0, 140U * sizeof(real_T));
  SD->u1.f0.dv1[25527] = 1.0;
  memset(&SD->u1.f0.dv1[25528], 0, 45U * sizeof(real_T));
  SD->u1.f0.dv1[25573] = -1.0;
  memset(&SD->u1.f0.dv1[25574], 0, 1023U * sizeof(real_T));
  SD->u1.f0.dv1[26597] = 1.0;
  memset(&SD->u1.f0.dv1[26598], 0, 673U * sizeof(real_T));
  SD->u1.f0.dv1[27271] = -1.0;
  memset(&SD->u1.f0.dv1[27272], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27294] = -1.0;
  memset(&SD->u1.f0.dv1[27295], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[27458] = -1.0;
  memset(&SD->u1.f0.dv1[27459], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27481] = -1.0;
  memset(&SD->u1.f0.dv1[27482], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[27645] = -1.0;
  memset(&SD->u1.f0.dv1[27646], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27668] = -1.0;
  memset(&SD->u1.f0.dv1[27669], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[27832] = -1.0;
  memset(&SD->u1.f0.dv1[27833], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[27855] = -1.0;
  memset(&SD->u1.f0.dv1[27856], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[28019] = -1.0;
  memset(&SD->u1.f0.dv1[28020], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28042] = -1.0;
  memset(&SD->u1.f0.dv1[28043], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[28206] = -1.0;
  memset(&SD->u1.f0.dv1[28207], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28229] = -1.0;
  memset(&SD->u1.f0.dv1[28230], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[28393] = -1.0;
  memset(&SD->u1.f0.dv1[28394], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28416] = -1.0;
  memset(&SD->u1.f0.dv1[28417], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[28580] = -1.0;
  memset(&SD->u1.f0.dv1[28581], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28603] = -1.0;
  memset(&SD->u1.f0.dv1[28604], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[28767] = -1.0;
  memset(&SD->u1.f0.dv1[28768], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28790] = -1.0;
  memset(&SD->u1.f0.dv1[28791], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[28954] = -1.0;
  memset(&SD->u1.f0.dv1[28955], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[28977] = -1.0;
  memset(&SD->u1.f0.dv1[28978], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[29141] = -1.0;
  memset(&SD->u1.f0.dv1[29142], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29164] = -1.0;
  memset(&SD->u1.f0.dv1[29165], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[29328] = -1.0;
  memset(&SD->u1.f0.dv1[29329], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29351] = -1.0;
  memset(&SD->u1.f0.dv1[29352], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[29515] = -1.0;
  memset(&SD->u1.f0.dv1[29516], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29538] = -1.0;
  memset(&SD->u1.f0.dv1[29539], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[29702] = -1.0;
  memset(&SD->u1.f0.dv1[29703], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29725] = -1.0;
  memset(&SD->u1.f0.dv1[29726], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[29889] = -1.0;
  memset(&SD->u1.f0.dv1[29890], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[29912] = -1.0;
  memset(&SD->u1.f0.dv1[29913], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[30076] = -1.0;
  memset(&SD->u1.f0.dv1[30077], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30099] = -1.0;
  memset(&SD->u1.f0.dv1[30100], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[30263] = -1.0;
  memset(&SD->u1.f0.dv1[30264], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30286] = -1.0;
  memset(&SD->u1.f0.dv1[30287], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[30450] = -1.0;
  memset(&SD->u1.f0.dv1[30451], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30473] = -1.0;
  memset(&SD->u1.f0.dv1[30474], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[30637] = -1.0;
  memset(&SD->u1.f0.dv1[30638], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30660] = -1.0;
  memset(&SD->u1.f0.dv1[30661], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[30824] = -1.0;
  memset(&SD->u1.f0.dv1[30825], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[30847] = -1.0;
  memset(&SD->u1.f0.dv1[30848], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[31011] = -1.0;
  memset(&SD->u1.f0.dv1[31012], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31034] = -1.0;
  memset(&SD->u1.f0.dv1[31035], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[31198] = -1.0;
  memset(&SD->u1.f0.dv1[31199], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31221] = -1.0;
  memset(&SD->u1.f0.dv1[31222], 0, 163U * sizeof(real_T));
  SD->u1.f0.dv1[31385] = -1.0;
  memset(&SD->u1.f0.dv1[31386], 0, 22U * sizeof(real_T));
  SD->u1.f0.dv1[31408] = -1.0;
  memset(&SD->u1.f0.dv1[31409], 0, 210U * sizeof(real_T));
  SD->u1.f0.dv1[31619] = -1.0;
  memset(&SD->u1.f0.dv1[31620], 0, 4253U * sizeof(real_T));
  SD->u1.f0.dv1[35873] = -1.0;
  SD->u1.f0.dv1[35874] = 0.0;
  SD->u1.f0.dv1[35875] = 0.0;
  SD->u1.f0.dv1[35876] = 0.0;
  SD->u1.f0.dv1[35877] = 0.0;
  SD->u1.f0.dv1[35878] = 0.0;
  SD->u1.f0.dv1[35879] = -1.0;
  memset(&SD->u1.f0.dv1[35880], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[36060] = -1.0;
  SD->u1.f0.dv1[36061] = 0.0;
  SD->u1.f0.dv1[36062] = 0.0;
  SD->u1.f0.dv1[36063] = 0.0;
  SD->u1.f0.dv1[36064] = 0.0;
  SD->u1.f0.dv1[36065] = 0.0;
  SD->u1.f0.dv1[36066] = -1.0;
  memset(&SD->u1.f0.dv1[36067], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[36247] = -1.0;
  SD->u1.f0.dv1[36248] = 0.0;
  SD->u1.f0.dv1[36249] = 0.0;
  SD->u1.f0.dv1[36250] = 0.0;
  SD->u1.f0.dv1[36251] = 0.0;
  SD->u1.f0.dv1[36252] = 0.0;
  SD->u1.f0.dv1[36253] = -1.0;
  memset(&SD->u1.f0.dv1[36254], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[36434] = -1.0;
  SD->u1.f0.dv1[36435] = 0.0;
  SD->u1.f0.dv1[36436] = 0.0;
  SD->u1.f0.dv1[36437] = 0.0;
  SD->u1.f0.dv1[36438] = 0.0;
  SD->u1.f0.dv1[36439] = 0.0;
  SD->u1.f0.dv1[36440] = -1.0;
  memset(&SD->u1.f0.dv1[36441], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[36621] = -1.0;
  SD->u1.f0.dv1[36622] = 0.0;
  SD->u1.f0.dv1[36623] = 0.0;
  SD->u1.f0.dv1[36624] = 0.0;
  SD->u1.f0.dv1[36625] = 0.0;
  SD->u1.f0.dv1[36626] = 0.0;
  SD->u1.f0.dv1[36627] = -1.0;
  memset(&SD->u1.f0.dv1[36628], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[36808] = -1.0;
  SD->u1.f0.dv1[36809] = 0.0;
  SD->u1.f0.dv1[36810] = 0.0;
  SD->u1.f0.dv1[36811] = 0.0;
  SD->u1.f0.dv1[36812] = 0.0;
  SD->u1.f0.dv1[36813] = 0.0;
  SD->u1.f0.dv1[36814] = -1.0;
  memset(&SD->u1.f0.dv1[36815], 0, 930U * sizeof(real_T));
  SD->u1.f0.dv1[37745] = -1.0;
  SD->u1.f0.dv1[37746] = 0.0;
  SD->u1.f0.dv1[37747] = 0.0;
  SD->u1.f0.dv1[37748] = 0.0;
  SD->u1.f0.dv1[37749] = 0.0;
  SD->u1.f0.dv1[37750] = 0.0;
  SD->u1.f0.dv1[37751] = -1.0;
  memset(&SD->u1.f0.dv1[37752], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[37932] = -1.0;
  SD->u1.f0.dv1[37933] = 0.0;
  SD->u1.f0.dv1[37934] = 0.0;
  SD->u1.f0.dv1[37935] = 0.0;
  SD->u1.f0.dv1[37936] = 0.0;
  SD->u1.f0.dv1[37937] = 0.0;
  SD->u1.f0.dv1[37938] = -1.0;
  memset(&SD->u1.f0.dv1[37939], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[38119] = -1.0;
  SD->u1.f0.dv1[38120] = 0.0;
  SD->u1.f0.dv1[38121] = 0.0;
  SD->u1.f0.dv1[38122] = 0.0;
  SD->u1.f0.dv1[38123] = 0.0;
  SD->u1.f0.dv1[38124] = 0.0;
  SD->u1.f0.dv1[38125] = -1.0;
  memset(&SD->u1.f0.dv1[38126], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[38306] = -1.0;
  SD->u1.f0.dv1[38307] = 0.0;
  SD->u1.f0.dv1[38308] = 0.0;
  SD->u1.f0.dv1[38309] = 0.0;
  SD->u1.f0.dv1[38310] = 0.0;
  SD->u1.f0.dv1[38311] = 0.0;
  SD->u1.f0.dv1[38312] = -1.0;
  memset(&SD->u1.f0.dv1[38313], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[38493] = -1.0;
  SD->u1.f0.dv1[38494] = 0.0;
  SD->u1.f0.dv1[38495] = 0.0;
  SD->u1.f0.dv1[38496] = 0.0;
  SD->u1.f0.dv1[38497] = 0.0;
  SD->u1.f0.dv1[38498] = 0.0;
  SD->u1.f0.dv1[38499] = -1.0;
  memset(&SD->u1.f0.dv1[38500], 0, 180U * sizeof(real_T));
  SD->u1.f0.dv1[38680] = -1.0;
  SD->u1.f0.dv1[38681] = 0.0;
  SD->u1.f0.dv1[38682] = 0.0;
  SD->u1.f0.dv1[38683] = 0.0;
  SD->u1.f0.dv1[38684] = 0.0;
  SD->u1.f0.dv1[38685] = 0.0;
  SD->u1.f0.dv1[38686] = -1.0;
  memset(&SD->u1.f0.dv1[38687], 0, 2233U * sizeof(real_T));
  for (i1 = 0; i1 < 220; i1++) {
    memcpy(&Aiq[i1 * 186], &SD->u1.f0.dv1[i1 * 186], 186U * sizeof(real_T));
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
  biq[167] = t9;
  biq[168] = t9;
  biq[169] = t9;
  biq[170] = t9;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t10;
  biq[174] = t10;
  biq[175] = t10;
  biq[176] = t10;
  biq[177] = t10;
  biq[178] = t10;
  biq[179] = t11;
  biq[180] = t11;
  biq[181] = t11;
  biq[182] = t11;
  biq[183] = t11;
  biq[184] = t11;
  biq[185] = -in9[1];
}

/* End of code generation (IqFast_LeftStart4V40.cpp) */
