/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart7V40.cpp
 *
 * Code generation for function 'IqFast_RightStart7V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step7.h"
#include "IqFast_RightStart7V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart7V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart7V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart7V40(Fast_MPCV40_form_Step7StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[38280], real_T biq[174])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART7V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART7V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 15:23:25 */
  i2 = in4->size[1];
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&qd_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&pd_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&od_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(4 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i2, (emlrtBCInfo *)&nd_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&md_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(6 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i2, (emlrtBCInfo *)&ld_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&kd_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(8 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i2, (emlrtBCInfo *)&jd_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&id_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&hd_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&gd_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&fd_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(4 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i2, (emlrtBCInfo *)&ed_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&dd_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(6 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i2, (emlrtBCInfo *)&cd_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&bd_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(8 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i2, (emlrtBCInfo *)&ad_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&yc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(10 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i2, (emlrtBCInfo *)&xc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&wc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(12 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i2, (emlrtBCInfo *)&vc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&uc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(14 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i2, (emlrtBCInfo *)&tc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&sc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(16 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i2, (emlrtBCInfo *)&rc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&qc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(18 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i2, (emlrtBCInfo *)&pc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(19 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i2, (emlrtBCInfo *)&oc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(20 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(20, 1, i2, (emlrtBCInfo *)&nc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(21 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i2, (emlrtBCInfo *)&mc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(22 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(22, 1, i2, (emlrtBCInfo *)&lc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(23 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i2, (emlrtBCInfo *)&kc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(10 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i2, (emlrtBCInfo *)&jc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&ic_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(12 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i2, (emlrtBCInfo *)&hc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&gc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(14 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i2, (emlrtBCInfo *)&fc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&ec_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(16 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i2, (emlrtBCInfo *)&dc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&cc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(18 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i2, (emlrtBCInfo *)&bc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(19 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(19, 1, i2, (emlrtBCInfo *)&ac_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(20 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(20, 1, i2, (emlrtBCInfo *)&yb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(21 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(21, 1, i2, (emlrtBCInfo *)&xb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(22 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(22, 1, i2, (emlrtBCInfo *)&wb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(23 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(23, 1, i2, (emlrtBCInfo *)&vb_emlrtBCI, sp);
  }

  SD->u1.f1.dv2[0] = -1.0;
  memset(&SD->u1.f1.dv2[1], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[46] = 1.0;
  memset(&SD->u1.f1.dv2[47], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[92] = -in11[2];
  memset(&SD->u1.f1.dv2[93], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[138] = -in11[2];
  memset(&SD->u1.f1.dv2[139], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[349] = -1.0;
  memset(&SD->u1.f1.dv2[350], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[395] = 1.0;
  memset(&SD->u1.f1.dv2[396], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[441] = -in11[2];
  memset(&SD->u1.f1.dv2[442], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[487] = -in11[2];
  memset(&SD->u1.f1.dv2[488], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[698] = -1.0;
  memset(&SD->u1.f1.dv2[699], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[744] = 1.0;
  memset(&SD->u1.f1.dv2[745], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[790] = -in11[2];
  memset(&SD->u1.f1.dv2[791], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[836] = -in11[2];
  memset(&SD->u1.f1.dv2[837], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[1047] = -1.0;
  memset(&SD->u1.f1.dv2[1048], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1093] = 1.0;
  memset(&SD->u1.f1.dv2[1094], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1139] = -in11[2];
  memset(&SD->u1.f1.dv2[1140], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1185] = -in11[2];
  memset(&SD->u1.f1.dv2[1186], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[1396] = -1.0;
  memset(&SD->u1.f1.dv2[1397], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1442] = 1.0;
  memset(&SD->u1.f1.dv2[1443], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1488] = -in11[2];
  memset(&SD->u1.f1.dv2[1489], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1534] = -in11[2];
  memset(&SD->u1.f1.dv2[1535], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[1745] = -1.0;
  memset(&SD->u1.f1.dv2[1746], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1791] = 1.0;
  memset(&SD->u1.f1.dv2[1792], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1837] = -in11[2];
  memset(&SD->u1.f1.dv2[1838], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1883] = -in11[2];
  memset(&SD->u1.f1.dv2[1884], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[2094] = -1.0;
  memset(&SD->u1.f1.dv2[2095], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2140] = 1.0;
  memset(&SD->u1.f1.dv2[2141], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2186] = -in11[2];
  memset(&SD->u1.f1.dv2[2187], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2232] = -in11[2];
  memset(&SD->u1.f1.dv2[2233], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[2443] = -1.0;
  memset(&SD->u1.f1.dv2[2444], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2489] = 1.0;
  memset(&SD->u1.f1.dv2[2490], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2535] = -in11[2];
  memset(&SD->u1.f1.dv2[2536], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2581] = -in11[2];
  memset(&SD->u1.f1.dv2[2582], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[2792] = -1.0;
  memset(&SD->u1.f1.dv2[2793], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2838] = 1.0;
  memset(&SD->u1.f1.dv2[2839], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2884] = -in11[2];
  memset(&SD->u1.f1.dv2[2885], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2930] = -in11[2];
  memset(&SD->u1.f1.dv2[2931], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[3141] = -1.0;
  memset(&SD->u1.f1.dv2[3142], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3187] = 1.0;
  memset(&SD->u1.f1.dv2[3188], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3233] = -in11[2];
  memset(&SD->u1.f1.dv2[3234], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3279] = -in11[2];
  memset(&SD->u1.f1.dv2[3280], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[3490] = -1.0;
  memset(&SD->u1.f1.dv2[3491], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3536] = 1.0;
  memset(&SD->u1.f1.dv2[3537], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3582] = -in11[2];
  memset(&SD->u1.f1.dv2[3583], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3628] = -in11[2];
  memset(&SD->u1.f1.dv2[3629], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[3839] = -1.0;
  memset(&SD->u1.f1.dv2[3840], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3885] = 1.0;
  memset(&SD->u1.f1.dv2[3886], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3931] = -in11[2];
  memset(&SD->u1.f1.dv2[3932], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3977] = -in11[2];
  memset(&SD->u1.f1.dv2[3978], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[4188] = -1.0;
  memset(&SD->u1.f1.dv2[4189], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4234] = 1.0;
  memset(&SD->u1.f1.dv2[4235], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4280] = -in11[2];
  memset(&SD->u1.f1.dv2[4281], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4326] = -in11[2];
  memset(&SD->u1.f1.dv2[4327], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[4537] = -1.0;
  memset(&SD->u1.f1.dv2[4538], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4583] = 1.0;
  memset(&SD->u1.f1.dv2[4584], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4629] = -in11[2];
  memset(&SD->u1.f1.dv2[4630], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4675] = -in11[2];
  memset(&SD->u1.f1.dv2[4676], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[4886] = -1.0;
  memset(&SD->u1.f1.dv2[4887], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4932] = 1.0;
  memset(&SD->u1.f1.dv2[4933], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4978] = -in11[2];
  memset(&SD->u1.f1.dv2[4979], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5024] = -in11[2];
  memset(&SD->u1.f1.dv2[5025], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[5235] = -1.0;
  memset(&SD->u1.f1.dv2[5236], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5281] = 1.0;
  memset(&SD->u1.f1.dv2[5282], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5327] = -in11[2];
  memset(&SD->u1.f1.dv2[5328], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5373] = -in11[2];
  memset(&SD->u1.f1.dv2[5374], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[5584] = -1.0;
  memset(&SD->u1.f1.dv2[5585], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5630] = 1.0;
  memset(&SD->u1.f1.dv2[5631], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5676] = -in11[2];
  memset(&SD->u1.f1.dv2[5677], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5722] = -in11[2];
  memset(&SD->u1.f1.dv2[5723], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[5933] = -1.0;
  memset(&SD->u1.f1.dv2[5934], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5979] = 1.0;
  memset(&SD->u1.f1.dv2[5980], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6025] = -in11[2];
  memset(&SD->u1.f1.dv2[6026], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6071] = -in11[2];
  memset(&SD->u1.f1.dv2[6072], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[6282] = -1.0;
  memset(&SD->u1.f1.dv2[6283], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6328] = 1.0;
  memset(&SD->u1.f1.dv2[6329], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6374] = -in11[2];
  memset(&SD->u1.f1.dv2[6375], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6420] = -in11[2];
  memset(&SD->u1.f1.dv2[6421], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[6631] = -1.0;
  memset(&SD->u1.f1.dv2[6632], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6677] = 1.0;
  memset(&SD->u1.f1.dv2[6678], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6723] = -in11[2];
  memset(&SD->u1.f1.dv2[6724], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6769] = -in11[2];
  memset(&SD->u1.f1.dv2[6770], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[6980] = -1.0;
  memset(&SD->u1.f1.dv2[6981], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7026] = 1.0;
  memset(&SD->u1.f1.dv2[7027], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7072] = -in11[2];
  memset(&SD->u1.f1.dv2[7073], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7118] = -in11[2];
  memset(&SD->u1.f1.dv2[7119], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[7329] = -1.0;
  memset(&SD->u1.f1.dv2[7330], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7375] = 1.0;
  memset(&SD->u1.f1.dv2[7376], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7421] = -in11[2];
  memset(&SD->u1.f1.dv2[7422], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7467] = -in11[2];
  memset(&SD->u1.f1.dv2[7468], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[7678] = -1.0;
  memset(&SD->u1.f1.dv2[7679], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7724] = 1.0;
  memset(&SD->u1.f1.dv2[7725], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7770] = -in11[2];
  memset(&SD->u1.f1.dv2[7771], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7816] = -in11[2];
  memset(&SD->u1.f1.dv2[7817], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[8027] = -1.0;
  memset(&SD->u1.f1.dv2[8028], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8073] = 1.0;
  memset(&SD->u1.f1.dv2[8074], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8096] = -in11[3];
  memset(&SD->u1.f1.dv2[8097], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8142] = -in11[3];
  memset(&SD->u1.f1.dv2[8143], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[8376] = -1.0;
  memset(&SD->u1.f1.dv2[8377], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8422] = 1.0;
  memset(&SD->u1.f1.dv2[8423], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8445] = -in11[3];
  memset(&SD->u1.f1.dv2[8446], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8491] = -in11[3];
  memset(&SD->u1.f1.dv2[8492], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[8725] = -1.0;
  memset(&SD->u1.f1.dv2[8726], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8771] = 1.0;
  memset(&SD->u1.f1.dv2[8772], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8794] = -in11[3];
  memset(&SD->u1.f1.dv2[8795], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8840] = -in11[3];
  memset(&SD->u1.f1.dv2[8841], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[9074] = -1.0;
  memset(&SD->u1.f1.dv2[9075], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9120] = 1.0;
  memset(&SD->u1.f1.dv2[9121], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9143] = -in11[3];
  memset(&SD->u1.f1.dv2[9144], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9189] = -in11[3];
  memset(&SD->u1.f1.dv2[9190], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[9423] = -1.0;
  memset(&SD->u1.f1.dv2[9424], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9469] = 1.0;
  memset(&SD->u1.f1.dv2[9470], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9492] = -in11[3];
  memset(&SD->u1.f1.dv2[9493], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9538] = -in11[3];
  memset(&SD->u1.f1.dv2[9539], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[9772] = -1.0;
  memset(&SD->u1.f1.dv2[9773], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9818] = 1.0;
  memset(&SD->u1.f1.dv2[9819], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9841] = -in11[3];
  memset(&SD->u1.f1.dv2[9842], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9887] = -in11[3];
  memset(&SD->u1.f1.dv2[9888], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[10121] = -1.0;
  memset(&SD->u1.f1.dv2[10122], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10167] = 1.0;
  memset(&SD->u1.f1.dv2[10168], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10190] = -in11[3];
  memset(&SD->u1.f1.dv2[10191], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10236] = -in11[3];
  memset(&SD->u1.f1.dv2[10237], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[10470] = -1.0;
  memset(&SD->u1.f1.dv2[10471], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10516] = 1.0;
  memset(&SD->u1.f1.dv2[10517], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10539] = -in11[3];
  memset(&SD->u1.f1.dv2[10540], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10585] = -in11[3];
  memset(&SD->u1.f1.dv2[10586], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[10819] = -1.0;
  memset(&SD->u1.f1.dv2[10820], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10865] = 1.0;
  memset(&SD->u1.f1.dv2[10866], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10888] = -in11[3];
  memset(&SD->u1.f1.dv2[10889], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10934] = -in11[3];
  memset(&SD->u1.f1.dv2[10935], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[11168] = -1.0;
  memset(&SD->u1.f1.dv2[11169], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11214] = 1.0;
  memset(&SD->u1.f1.dv2[11215], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11237] = -in11[3];
  memset(&SD->u1.f1.dv2[11238], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11283] = -in11[3];
  memset(&SD->u1.f1.dv2[11284], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[11517] = -1.0;
  memset(&SD->u1.f1.dv2[11518], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11563] = 1.0;
  memset(&SD->u1.f1.dv2[11564], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11586] = -in11[3];
  memset(&SD->u1.f1.dv2[11587], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11632] = -in11[3];
  memset(&SD->u1.f1.dv2[11633], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[11866] = -1.0;
  memset(&SD->u1.f1.dv2[11867], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11912] = 1.0;
  memset(&SD->u1.f1.dv2[11913], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11935] = -in11[3];
  memset(&SD->u1.f1.dv2[11936], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11981] = -in11[3];
  memset(&SD->u1.f1.dv2[11982], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[12215] = -1.0;
  memset(&SD->u1.f1.dv2[12216], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12261] = 1.0;
  memset(&SD->u1.f1.dv2[12262], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12284] = -in11[3];
  memset(&SD->u1.f1.dv2[12285], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12330] = -in11[3];
  memset(&SD->u1.f1.dv2[12331], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[12564] = -1.0;
  memset(&SD->u1.f1.dv2[12565], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12610] = 1.0;
  memset(&SD->u1.f1.dv2[12611], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12633] = -in11[3];
  memset(&SD->u1.f1.dv2[12634], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12679] = -in11[3];
  memset(&SD->u1.f1.dv2[12680], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[12913] = -1.0;
  memset(&SD->u1.f1.dv2[12914], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12959] = 1.0;
  memset(&SD->u1.f1.dv2[12960], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12982] = -in11[3];
  memset(&SD->u1.f1.dv2[12983], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13028] = -in11[3];
  memset(&SD->u1.f1.dv2[13029], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[13262] = -1.0;
  memset(&SD->u1.f1.dv2[13263], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13308] = 1.0;
  memset(&SD->u1.f1.dv2[13309], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13331] = -in11[3];
  memset(&SD->u1.f1.dv2[13332], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13377] = -in11[3];
  memset(&SD->u1.f1.dv2[13378], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[13611] = -1.0;
  memset(&SD->u1.f1.dv2[13612], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13657] = 1.0;
  memset(&SD->u1.f1.dv2[13658], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13680] = -in11[3];
  memset(&SD->u1.f1.dv2[13681], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13726] = -in11[3];
  memset(&SD->u1.f1.dv2[13727], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[13960] = -1.0;
  memset(&SD->u1.f1.dv2[13961], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14006] = 1.0;
  memset(&SD->u1.f1.dv2[14007], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14029] = -in11[3];
  memset(&SD->u1.f1.dv2[14030], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14075] = -in11[3];
  memset(&SD->u1.f1.dv2[14076], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[14309] = -1.0;
  memset(&SD->u1.f1.dv2[14310], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14355] = 1.0;
  memset(&SD->u1.f1.dv2[14356], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14378] = -in11[3];
  memset(&SD->u1.f1.dv2[14379], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14424] = -in11[3];
  memset(&SD->u1.f1.dv2[14425], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[14658] = -1.0;
  memset(&SD->u1.f1.dv2[14659], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14704] = 1.0;
  memset(&SD->u1.f1.dv2[14705], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14727] = -in11[3];
  memset(&SD->u1.f1.dv2[14728], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14773] = -in11[3];
  memset(&SD->u1.f1.dv2[14774], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[15007] = -1.0;
  memset(&SD->u1.f1.dv2[15008], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15053] = 1.0;
  memset(&SD->u1.f1.dv2[15054], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15076] = -in11[3];
  memset(&SD->u1.f1.dv2[15077], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15122] = -in11[3];
  memset(&SD->u1.f1.dv2[15123], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[15356] = -1.0;
  memset(&SD->u1.f1.dv2[15357], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15402] = 1.0;
  memset(&SD->u1.f1.dv2[15403], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15425] = -in11[3];
  memset(&SD->u1.f1.dv2[15426], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15471] = -in11[3];
  memset(&SD->u1.f1.dv2[15472], 0, 233U * sizeof(real_T));
  SD->u1.f1.dv2[15705] = -1.0;
  memset(&SD->u1.f1.dv2[15706], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15751] = 1.0;
  memset(&SD->u1.f1.dv2[15752], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15774] = -in11[3];
  memset(&SD->u1.f1.dv2[15775], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15820] = -in11[3];
  memset(&SD->u1.f1.dv2[15821], 0, 187U * sizeof(real_T));
  SD->u1.f1.dv2[16008] = 1.0;
  memset(&SD->u1.f1.dv2[16009], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16054] = -1.0;
  memset(&SD->u1.f1.dv2[16055], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[16169] = 1.0;
  SD->u1.f1.dv2[16170] = 0.0;
  SD->u1.f1.dv2[16171] = 0.0;
  SD->u1.f1.dv2[16172] = -1.0;
  memset(&SD->u1.f1.dv2[16173], 0, 10U * sizeof(real_T));
  SD->u1.f1.dv2[16183] = 1.0;
  memset(&SD->u1.f1.dv2[16184], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16229] = -1.0;
  memset(&SD->u1.f1.dv2[16230], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[16344] = 1.0;
  SD->u1.f1.dv2[16345] = 0.0;
  SD->u1.f1.dv2[16346] = 0.0;
  SD->u1.f1.dv2[16347] = -1.0;
  memset(&SD->u1.f1.dv2[16348], 0, 10U * sizeof(real_T));
  SD->u1.f1.dv2[16358] = 1.0;
  memset(&SD->u1.f1.dv2[16359], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16404] = -1.0;
  memset(&SD->u1.f1.dv2[16405], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[16519] = 1.0;
  SD->u1.f1.dv2[16520] = 0.0;
  SD->u1.f1.dv2[16521] = 0.0;
  SD->u1.f1.dv2[16522] = -1.0;
  memset(&SD->u1.f1.dv2[16523], 0, 10U * sizeof(real_T));
  SD->u1.f1.dv2[16533] = 1.0;
  memset(&SD->u1.f1.dv2[16534], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16579] = -1.0;
  memset(&SD->u1.f1.dv2[16580], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[16708] = 1.0;
  memset(&SD->u1.f1.dv2[16709], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16754] = -1.0;
  memset(&SD->u1.f1.dv2[16755], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[16883] = 1.0;
  memset(&SD->u1.f1.dv2[16884], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16929] = -1.0;
  memset(&SD->u1.f1.dv2[16930], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[17058] = 1.0;
  memset(&SD->u1.f1.dv2[17059], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17104] = -1.0;
  memset(&SD->u1.f1.dv2[17105], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[17233] = 1.0;
  memset(&SD->u1.f1.dv2[17234], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17279] = -1.0;
  memset(&SD->u1.f1.dv2[17280], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[17408] = 1.0;
  memset(&SD->u1.f1.dv2[17409], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17454] = -1.0;
  memset(&SD->u1.f1.dv2[17455], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[17583] = 1.0;
  memset(&SD->u1.f1.dv2[17584], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17629] = -1.0;
  memset(&SD->u1.f1.dv2[17630], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[17758] = 1.0;
  memset(&SD->u1.f1.dv2[17759], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17804] = -1.0;
  memset(&SD->u1.f1.dv2[17805], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[17933] = 1.0;
  memset(&SD->u1.f1.dv2[17934], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17979] = -1.0;
  memset(&SD->u1.f1.dv2[17980], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[18108] = 1.0;
  memset(&SD->u1.f1.dv2[18109], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18154] = -1.0;
  memset(&SD->u1.f1.dv2[18155], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[18283] = 1.0;
  memset(&SD->u1.f1.dv2[18284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18329] = -1.0;
  memset(&SD->u1.f1.dv2[18330], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[18458] = 1.0;
  memset(&SD->u1.f1.dv2[18459], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18504] = -1.0;
  memset(&SD->u1.f1.dv2[18505], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[18633] = 1.0;
  memset(&SD->u1.f1.dv2[18634], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18679] = -1.0;
  memset(&SD->u1.f1.dv2[18680], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[18808] = 1.0;
  memset(&SD->u1.f1.dv2[18809], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18854] = -1.0;
  memset(&SD->u1.f1.dv2[18855], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[18983] = 1.0;
  memset(&SD->u1.f1.dv2[18984], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19029] = -1.0;
  memset(&SD->u1.f1.dv2[19030], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[19158] = 1.0;
  memset(&SD->u1.f1.dv2[19159], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19204] = -1.0;
  memset(&SD->u1.f1.dv2[19205], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[19333] = 1.0;
  memset(&SD->u1.f1.dv2[19334], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19379] = -1.0;
  memset(&SD->u1.f1.dv2[19380], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[19508] = 1.0;
  memset(&SD->u1.f1.dv2[19509], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19554] = -1.0;
  memset(&SD->u1.f1.dv2[19555], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[19683] = 1.0;
  memset(&SD->u1.f1.dv2[19684], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19729] = -1.0;
  memset(&SD->u1.f1.dv2[19730], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[19858] = 1.0;
  memset(&SD->u1.f1.dv2[19859], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19904] = -1.0;
  memset(&SD->u1.f1.dv2[19905], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[20033] = 1.0;
  memset(&SD->u1.f1.dv2[20034], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20079] = -1.0;
  memset(&SD->u1.f1.dv2[20080], 0, 97U * sizeof(real_T));
  SD->u1.f1.dv2[20177] = 1.0;
  SD->u1.f1.dv2[20178] = 0.0;
  SD->u1.f1.dv2[20179] = 0.0;
  SD->u1.f1.dv2[20180] = -1.0;
  memset(&SD->u1.f1.dv2[20181], 0, 27U * sizeof(real_T));
  SD->u1.f1.dv2[20208] = 1.0;
  memset(&SD->u1.f1.dv2[20209], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20254] = -1.0;
  memset(&SD->u1.f1.dv2[20255], 0, 97U * sizeof(real_T));
  SD->u1.f1.dv2[20352] = 1.0;
  SD->u1.f1.dv2[20353] = 0.0;
  SD->u1.f1.dv2[20354] = 0.0;
  SD->u1.f1.dv2[20355] = -1.0;
  memset(&SD->u1.f1.dv2[20356], 0, 27U * sizeof(real_T));
  SD->u1.f1.dv2[20383] = 1.0;
  memset(&SD->u1.f1.dv2[20384], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20429] = -1.0;
  memset(&SD->u1.f1.dv2[20430], 0, 97U * sizeof(real_T));
  SD->u1.f1.dv2[20527] = 1.0;
  SD->u1.f1.dv2[20528] = 0.0;
  SD->u1.f1.dv2[20529] = 0.0;
  SD->u1.f1.dv2[20530] = -1.0;
  memset(&SD->u1.f1.dv2[20531], 0, 27U * sizeof(real_T));
  SD->u1.f1.dv2[20558] = 1.0;
  memset(&SD->u1.f1.dv2[20559], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20604] = -1.0;
  memset(&SD->u1.f1.dv2[20605], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[20733] = 1.0;
  memset(&SD->u1.f1.dv2[20734], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20779] = -1.0;
  memset(&SD->u1.f1.dv2[20780], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[20908] = 1.0;
  memset(&SD->u1.f1.dv2[20909], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20954] = -1.0;
  memset(&SD->u1.f1.dv2[20955], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[21083] = 1.0;
  memset(&SD->u1.f1.dv2[21084], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21129] = -1.0;
  memset(&SD->u1.f1.dv2[21130], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[21258] = 1.0;
  memset(&SD->u1.f1.dv2[21259], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21304] = -1.0;
  memset(&SD->u1.f1.dv2[21305], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[21433] = 1.0;
  memset(&SD->u1.f1.dv2[21434], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21479] = -1.0;
  memset(&SD->u1.f1.dv2[21480], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[21608] = 1.0;
  memset(&SD->u1.f1.dv2[21609], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21654] = -1.0;
  memset(&SD->u1.f1.dv2[21655], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[21783] = 1.0;
  memset(&SD->u1.f1.dv2[21784], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21829] = -1.0;
  memset(&SD->u1.f1.dv2[21830], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[21958] = 1.0;
  memset(&SD->u1.f1.dv2[21959], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22004] = -1.0;
  memset(&SD->u1.f1.dv2[22005], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[22133] = 1.0;
  memset(&SD->u1.f1.dv2[22134], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22179] = -1.0;
  memset(&SD->u1.f1.dv2[22180], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[22308] = 1.0;
  memset(&SD->u1.f1.dv2[22309], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22354] = -1.0;
  memset(&SD->u1.f1.dv2[22355], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[22483] = 1.0;
  memset(&SD->u1.f1.dv2[22484], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22529] = -1.0;
  memset(&SD->u1.f1.dv2[22530], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[22658] = 1.0;
  memset(&SD->u1.f1.dv2[22659], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22704] = -1.0;
  memset(&SD->u1.f1.dv2[22705], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[22833] = 1.0;
  memset(&SD->u1.f1.dv2[22834], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22879] = -1.0;
  memset(&SD->u1.f1.dv2[22880], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[23008] = 1.0;
  memset(&SD->u1.f1.dv2[23009], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23054] = -1.0;
  memset(&SD->u1.f1.dv2[23055], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[23183] = 1.0;
  memset(&SD->u1.f1.dv2[23184], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23229] = -1.0;
  memset(&SD->u1.f1.dv2[23230], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[23358] = 1.0;
  memset(&SD->u1.f1.dv2[23359], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23404] = -1.0;
  memset(&SD->u1.f1.dv2[23405], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[23533] = 1.0;
  memset(&SD->u1.f1.dv2[23534], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23579] = -1.0;
  memset(&SD->u1.f1.dv2[23580], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[23708] = 1.0;
  memset(&SD->u1.f1.dv2[23709], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23754] = -1.0;
  memset(&SD->u1.f1.dv2[23755], 0, sizeof(real_T) << 7);
  SD->u1.f1.dv2[23883] = 1.0;
  memset(&SD->u1.f1.dv2[23884], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23929] = -1.0;
  memset(&SD->u1.f1.dv2[23930], 0, 951U * sizeof(real_T));
  SD->u1.f1.dv2[24881] = -1.0;
  memset(&SD->u1.f1.dv2[24882], 0, 637U * sizeof(real_T));
  SD->u1.f1.dv2[25519] = -1.0;
  memset(&SD->u1.f1.dv2[25520], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25542] = -1.0;
  memset(&SD->u1.f1.dv2[25543], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[25694] = -1.0;
  memset(&SD->u1.f1.dv2[25695], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25717] = -1.0;
  memset(&SD->u1.f1.dv2[25718], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[25869] = -1.0;
  memset(&SD->u1.f1.dv2[25870], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25892] = -1.0;
  memset(&SD->u1.f1.dv2[25893], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[26044] = -1.0;
  memset(&SD->u1.f1.dv2[26045], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26067] = -1.0;
  memset(&SD->u1.f1.dv2[26068], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[26219] = -1.0;
  memset(&SD->u1.f1.dv2[26220], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26242] = -1.0;
  memset(&SD->u1.f1.dv2[26243], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[26394] = -1.0;
  memset(&SD->u1.f1.dv2[26395], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26417] = -1.0;
  memset(&SD->u1.f1.dv2[26418], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[26569] = -1.0;
  memset(&SD->u1.f1.dv2[26570], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26592] = -1.0;
  memset(&SD->u1.f1.dv2[26593], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[26744] = -1.0;
  memset(&SD->u1.f1.dv2[26745], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26767] = -1.0;
  memset(&SD->u1.f1.dv2[26768], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[26919] = -1.0;
  memset(&SD->u1.f1.dv2[26920], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26942] = -1.0;
  memset(&SD->u1.f1.dv2[26943], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[27094] = -1.0;
  memset(&SD->u1.f1.dv2[27095], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27117] = -1.0;
  memset(&SD->u1.f1.dv2[27118], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[27269] = -1.0;
  memset(&SD->u1.f1.dv2[27270], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27292] = -1.0;
  memset(&SD->u1.f1.dv2[27293], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[27444] = -1.0;
  memset(&SD->u1.f1.dv2[27445], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27467] = -1.0;
  memset(&SD->u1.f1.dv2[27468], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[27619] = -1.0;
  memset(&SD->u1.f1.dv2[27620], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27642] = -1.0;
  memset(&SD->u1.f1.dv2[27643], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[27794] = -1.0;
  memset(&SD->u1.f1.dv2[27795], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27817] = -1.0;
  memset(&SD->u1.f1.dv2[27818], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[27969] = -1.0;
  memset(&SD->u1.f1.dv2[27970], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27992] = -1.0;
  memset(&SD->u1.f1.dv2[27993], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[28144] = -1.0;
  memset(&SD->u1.f1.dv2[28145], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28167] = -1.0;
  memset(&SD->u1.f1.dv2[28168], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[28319] = -1.0;
  memset(&SD->u1.f1.dv2[28320], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28342] = -1.0;
  memset(&SD->u1.f1.dv2[28343], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[28494] = -1.0;
  memset(&SD->u1.f1.dv2[28495], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28517] = -1.0;
  memset(&SD->u1.f1.dv2[28518], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[28669] = -1.0;
  memset(&SD->u1.f1.dv2[28670], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28692] = -1.0;
  memset(&SD->u1.f1.dv2[28693], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[28844] = -1.0;
  memset(&SD->u1.f1.dv2[28845], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28867] = -1.0;
  memset(&SD->u1.f1.dv2[28868], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[29019] = -1.0;
  memset(&SD->u1.f1.dv2[29020], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29042] = -1.0;
  memset(&SD->u1.f1.dv2[29043], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[29194] = -1.0;
  memset(&SD->u1.f1.dv2[29195], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29217] = -1.0;
  memset(&SD->u1.f1.dv2[29218], 0, 151U * sizeof(real_T));
  SD->u1.f1.dv2[29369] = -1.0;
  memset(&SD->u1.f1.dv2[29370], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29392] = -1.0;
  memset(&SD->u1.f1.dv2[29393], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[29579] = 1.0;
  memset(&SD->u1.f1.dv2[29580], 0, 3989U * sizeof(real_T));
  SD->u1.f1.dv2[33569] = -1.0;
  SD->u1.f1.dv2[33570] = 0.0;
  SD->u1.f1.dv2[33571] = 0.0;
  SD->u1.f1.dv2[33572] = -1.0;
  memset(&SD->u1.f1.dv2[33573], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[33744] = -1.0;
  SD->u1.f1.dv2[33745] = 0.0;
  SD->u1.f1.dv2[33746] = 0.0;
  SD->u1.f1.dv2[33747] = -1.0;
  memset(&SD->u1.f1.dv2[33748], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[33919] = -1.0;
  SD->u1.f1.dv2[33920] = 0.0;
  SD->u1.f1.dv2[33921] = 0.0;
  SD->u1.f1.dv2[33922] = -1.0;
  memset(&SD->u1.f1.dv2[33923], 0, 1392U * sizeof(real_T));
  SD->u1.f1.dv2[35315] = -1.0;
  SD->u1.f1.dv2[35316] = 0.0;
  SD->u1.f1.dv2[35317] = 0.0;
  SD->u1.f1.dv2[35318] = -1.0;
  memset(&SD->u1.f1.dv2[35319], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[35490] = -1.0;
  SD->u1.f1.dv2[35491] = 0.0;
  SD->u1.f1.dv2[35492] = 0.0;
  SD->u1.f1.dv2[35493] = -1.0;
  memset(&SD->u1.f1.dv2[35494], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[35665] = -1.0;
  SD->u1.f1.dv2[35666] = 0.0;
  SD->u1.f1.dv2[35667] = 0.0;
  SD->u1.f1.dv2[35668] = -1.0;
  memset(&SD->u1.f1.dv2[35669], 0, 2611U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 174], &SD->u1.f1.dv2[i2 * 174], 174U * sizeof(real_T));
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

/* End of code generation (IqFast_RightStart7V40.cpp) */
