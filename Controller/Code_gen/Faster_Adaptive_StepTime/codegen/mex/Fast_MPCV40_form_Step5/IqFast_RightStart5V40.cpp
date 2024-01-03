/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart5V40.cpp
 *
 * Code generation for function 'IqFast_RightStart5V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step5.h"
#include "IqFast_RightStart5V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart5V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart5V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart5V40(Fast_MPCV40_form_Step5StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[40040], real_T biq[182])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART5V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART5V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 15:01:11 */
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
  memset(&SD->u1.f1.dv2[139], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[365] = -1.0;
  memset(&SD->u1.f1.dv2[366], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[411] = 1.0;
  memset(&SD->u1.f1.dv2[412], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[457] = -in11[2];
  memset(&SD->u1.f1.dv2[458], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[503] = -in11[2];
  memset(&SD->u1.f1.dv2[504], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[730] = -1.0;
  memset(&SD->u1.f1.dv2[731], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[776] = 1.0;
  memset(&SD->u1.f1.dv2[777], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[822] = -in11[2];
  memset(&SD->u1.f1.dv2[823], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[868] = -in11[2];
  memset(&SD->u1.f1.dv2[869], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[1095] = -1.0;
  memset(&SD->u1.f1.dv2[1096], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1141] = 1.0;
  memset(&SD->u1.f1.dv2[1142], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1187] = -in11[2];
  memset(&SD->u1.f1.dv2[1188], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1233] = -in11[2];
  memset(&SD->u1.f1.dv2[1234], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[1460] = -1.0;
  memset(&SD->u1.f1.dv2[1461], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1506] = 1.0;
  memset(&SD->u1.f1.dv2[1507], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1552] = -in11[2];
  memset(&SD->u1.f1.dv2[1553], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1598] = -in11[2];
  memset(&SD->u1.f1.dv2[1599], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[1825] = -1.0;
  memset(&SD->u1.f1.dv2[1826], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1871] = 1.0;
  memset(&SD->u1.f1.dv2[1872], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1917] = -in11[2];
  memset(&SD->u1.f1.dv2[1918], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1963] = -in11[2];
  memset(&SD->u1.f1.dv2[1964], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[2190] = -1.0;
  memset(&SD->u1.f1.dv2[2191], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2236] = 1.0;
  memset(&SD->u1.f1.dv2[2237], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2282] = -in11[2];
  memset(&SD->u1.f1.dv2[2283], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2328] = -in11[2];
  memset(&SD->u1.f1.dv2[2329], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[2555] = -1.0;
  memset(&SD->u1.f1.dv2[2556], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2601] = 1.0;
  memset(&SD->u1.f1.dv2[2602], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2647] = -in11[2];
  memset(&SD->u1.f1.dv2[2648], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2693] = -in11[2];
  memset(&SD->u1.f1.dv2[2694], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[2920] = -1.0;
  memset(&SD->u1.f1.dv2[2921], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2966] = 1.0;
  memset(&SD->u1.f1.dv2[2967], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3012] = -in11[2];
  memset(&SD->u1.f1.dv2[3013], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3058] = -in11[2];
  memset(&SD->u1.f1.dv2[3059], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[3285] = -1.0;
  memset(&SD->u1.f1.dv2[3286], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3331] = 1.0;
  memset(&SD->u1.f1.dv2[3332], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3377] = -in11[2];
  memset(&SD->u1.f1.dv2[3378], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3423] = -in11[2];
  memset(&SD->u1.f1.dv2[3424], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[3650] = -1.0;
  memset(&SD->u1.f1.dv2[3651], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3696] = 1.0;
  memset(&SD->u1.f1.dv2[3697], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3742] = -in11[2];
  memset(&SD->u1.f1.dv2[3743], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3788] = -in11[2];
  memset(&SD->u1.f1.dv2[3789], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[4015] = -1.0;
  memset(&SD->u1.f1.dv2[4016], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4061] = 1.0;
  memset(&SD->u1.f1.dv2[4062], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4107] = -in11[2];
  memset(&SD->u1.f1.dv2[4108], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4153] = -in11[2];
  memset(&SD->u1.f1.dv2[4154], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[4380] = -1.0;
  memset(&SD->u1.f1.dv2[4381], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4426] = 1.0;
  memset(&SD->u1.f1.dv2[4427], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4472] = -in11[2];
  memset(&SD->u1.f1.dv2[4473], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4518] = -in11[2];
  memset(&SD->u1.f1.dv2[4519], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[4745] = -1.0;
  memset(&SD->u1.f1.dv2[4746], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4791] = 1.0;
  memset(&SD->u1.f1.dv2[4792], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4837] = -in11[2];
  memset(&SD->u1.f1.dv2[4838], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4883] = -in11[2];
  memset(&SD->u1.f1.dv2[4884], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[5110] = -1.0;
  memset(&SD->u1.f1.dv2[5111], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5156] = 1.0;
  memset(&SD->u1.f1.dv2[5157], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5202] = -in11[2];
  memset(&SD->u1.f1.dv2[5203], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5248] = -in11[2];
  memset(&SD->u1.f1.dv2[5249], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[5475] = -1.0;
  memset(&SD->u1.f1.dv2[5476], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5521] = 1.0;
  memset(&SD->u1.f1.dv2[5522], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5567] = -in11[2];
  memset(&SD->u1.f1.dv2[5568], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5613] = -in11[2];
  memset(&SD->u1.f1.dv2[5614], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[5840] = -1.0;
  memset(&SD->u1.f1.dv2[5841], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5886] = 1.0;
  memset(&SD->u1.f1.dv2[5887], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5932] = -in11[2];
  memset(&SD->u1.f1.dv2[5933], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5978] = -in11[2];
  memset(&SD->u1.f1.dv2[5979], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[6205] = -1.0;
  memset(&SD->u1.f1.dv2[6206], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6251] = 1.0;
  memset(&SD->u1.f1.dv2[6252], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6297] = -in11[2];
  memset(&SD->u1.f1.dv2[6298], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6343] = -in11[2];
  memset(&SD->u1.f1.dv2[6344], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[6570] = -1.0;
  memset(&SD->u1.f1.dv2[6571], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6616] = 1.0;
  memset(&SD->u1.f1.dv2[6617], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6662] = -in11[2];
  memset(&SD->u1.f1.dv2[6663], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6708] = -in11[2];
  memset(&SD->u1.f1.dv2[6709], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[6935] = -1.0;
  memset(&SD->u1.f1.dv2[6936], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6981] = 1.0;
  memset(&SD->u1.f1.dv2[6982], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7027] = -in11[2];
  memset(&SD->u1.f1.dv2[7028], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7073] = -in11[2];
  memset(&SD->u1.f1.dv2[7074], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[7300] = -1.0;
  memset(&SD->u1.f1.dv2[7301], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7346] = 1.0;
  memset(&SD->u1.f1.dv2[7347], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7392] = -in11[2];
  memset(&SD->u1.f1.dv2[7393], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7438] = -in11[2];
  memset(&SD->u1.f1.dv2[7439], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[7665] = -1.0;
  memset(&SD->u1.f1.dv2[7666], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7711] = 1.0;
  memset(&SD->u1.f1.dv2[7712], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7757] = -in11[2];
  memset(&SD->u1.f1.dv2[7758], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7803] = -in11[2];
  memset(&SD->u1.f1.dv2[7804], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[8030] = -1.0;
  memset(&SD->u1.f1.dv2[8031], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8076] = 1.0;
  memset(&SD->u1.f1.dv2[8077], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8122] = -in11[2];
  memset(&SD->u1.f1.dv2[8123], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8168] = -in11[2];
  memset(&SD->u1.f1.dv2[8169], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[8395] = -1.0;
  memset(&SD->u1.f1.dv2[8396], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8441] = 1.0;
  memset(&SD->u1.f1.dv2[8442], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8464] = -in11[3];
  memset(&SD->u1.f1.dv2[8465], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8510] = -in11[3];
  memset(&SD->u1.f1.dv2[8511], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[8760] = -1.0;
  memset(&SD->u1.f1.dv2[8761], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8806] = 1.0;
  memset(&SD->u1.f1.dv2[8807], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8829] = -in11[3];
  memset(&SD->u1.f1.dv2[8830], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8875] = -in11[3];
  memset(&SD->u1.f1.dv2[8876], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[9125] = -1.0;
  memset(&SD->u1.f1.dv2[9126], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9171] = 1.0;
  memset(&SD->u1.f1.dv2[9172], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9194] = -in11[3];
  memset(&SD->u1.f1.dv2[9195], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9240] = -in11[3];
  memset(&SD->u1.f1.dv2[9241], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[9490] = -1.0;
  memset(&SD->u1.f1.dv2[9491], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9536] = 1.0;
  memset(&SD->u1.f1.dv2[9537], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9559] = -in11[3];
  memset(&SD->u1.f1.dv2[9560], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9605] = -in11[3];
  memset(&SD->u1.f1.dv2[9606], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[9855] = -1.0;
  memset(&SD->u1.f1.dv2[9856], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9901] = 1.0;
  memset(&SD->u1.f1.dv2[9902], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9924] = -in11[3];
  memset(&SD->u1.f1.dv2[9925], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9970] = -in11[3];
  memset(&SD->u1.f1.dv2[9971], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[10220] = -1.0;
  memset(&SD->u1.f1.dv2[10221], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10266] = 1.0;
  memset(&SD->u1.f1.dv2[10267], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10289] = -in11[3];
  memset(&SD->u1.f1.dv2[10290], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10335] = -in11[3];
  memset(&SD->u1.f1.dv2[10336], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[10585] = -1.0;
  memset(&SD->u1.f1.dv2[10586], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10631] = 1.0;
  memset(&SD->u1.f1.dv2[10632], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10654] = -in11[3];
  memset(&SD->u1.f1.dv2[10655], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10700] = -in11[3];
  memset(&SD->u1.f1.dv2[10701], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[10950] = -1.0;
  memset(&SD->u1.f1.dv2[10951], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10996] = 1.0;
  memset(&SD->u1.f1.dv2[10997], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11019] = -in11[3];
  memset(&SD->u1.f1.dv2[11020], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11065] = -in11[3];
  memset(&SD->u1.f1.dv2[11066], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[11315] = -1.0;
  memset(&SD->u1.f1.dv2[11316], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11361] = 1.0;
  memset(&SD->u1.f1.dv2[11362], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11384] = -in11[3];
  memset(&SD->u1.f1.dv2[11385], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11430] = -in11[3];
  memset(&SD->u1.f1.dv2[11431], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[11680] = -1.0;
  memset(&SD->u1.f1.dv2[11681], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11726] = 1.0;
  memset(&SD->u1.f1.dv2[11727], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11749] = -in11[3];
  memset(&SD->u1.f1.dv2[11750], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11795] = -in11[3];
  memset(&SD->u1.f1.dv2[11796], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[12045] = -1.0;
  memset(&SD->u1.f1.dv2[12046], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12091] = 1.0;
  memset(&SD->u1.f1.dv2[12092], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12114] = -in11[3];
  memset(&SD->u1.f1.dv2[12115], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12160] = -in11[3];
  memset(&SD->u1.f1.dv2[12161], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[12410] = -1.0;
  memset(&SD->u1.f1.dv2[12411], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12456] = 1.0;
  memset(&SD->u1.f1.dv2[12457], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12479] = -in11[3];
  memset(&SD->u1.f1.dv2[12480], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12525] = -in11[3];
  memset(&SD->u1.f1.dv2[12526], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[12775] = -1.0;
  memset(&SD->u1.f1.dv2[12776], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12821] = 1.0;
  memset(&SD->u1.f1.dv2[12822], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12844] = -in11[3];
  memset(&SD->u1.f1.dv2[12845], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12890] = -in11[3];
  memset(&SD->u1.f1.dv2[12891], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[13140] = -1.0;
  memset(&SD->u1.f1.dv2[13141], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13186] = 1.0;
  memset(&SD->u1.f1.dv2[13187], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13209] = -in11[3];
  memset(&SD->u1.f1.dv2[13210], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13255] = -in11[3];
  memset(&SD->u1.f1.dv2[13256], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[13505] = -1.0;
  memset(&SD->u1.f1.dv2[13506], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13551] = 1.0;
  memset(&SD->u1.f1.dv2[13552], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13574] = -in11[3];
  memset(&SD->u1.f1.dv2[13575], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13620] = -in11[3];
  memset(&SD->u1.f1.dv2[13621], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[13870] = -1.0;
  memset(&SD->u1.f1.dv2[13871], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13916] = 1.0;
  memset(&SD->u1.f1.dv2[13917], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13939] = -in11[3];
  memset(&SD->u1.f1.dv2[13940], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13985] = -in11[3];
  memset(&SD->u1.f1.dv2[13986], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[14235] = -1.0;
  memset(&SD->u1.f1.dv2[14236], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14281] = 1.0;
  memset(&SD->u1.f1.dv2[14282], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14304] = -in11[3];
  memset(&SD->u1.f1.dv2[14305], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14350] = -in11[3];
  memset(&SD->u1.f1.dv2[14351], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[14600] = -1.0;
  memset(&SD->u1.f1.dv2[14601], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14646] = 1.0;
  memset(&SD->u1.f1.dv2[14647], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14669] = -in11[3];
  memset(&SD->u1.f1.dv2[14670], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14715] = -in11[3];
  memset(&SD->u1.f1.dv2[14716], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[14965] = -1.0;
  memset(&SD->u1.f1.dv2[14966], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15011] = 1.0;
  memset(&SD->u1.f1.dv2[15012], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15034] = -in11[3];
  memset(&SD->u1.f1.dv2[15035], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15080] = -in11[3];
  memset(&SD->u1.f1.dv2[15081], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[15330] = -1.0;
  memset(&SD->u1.f1.dv2[15331], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15376] = 1.0;
  memset(&SD->u1.f1.dv2[15377], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15399] = -in11[3];
  memset(&SD->u1.f1.dv2[15400], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15445] = -in11[3];
  memset(&SD->u1.f1.dv2[15446], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[15695] = -1.0;
  memset(&SD->u1.f1.dv2[15696], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15741] = 1.0;
  memset(&SD->u1.f1.dv2[15742], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15764] = -in11[3];
  memset(&SD->u1.f1.dv2[15765], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15810] = -in11[3];
  memset(&SD->u1.f1.dv2[15811], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[16060] = -1.0;
  memset(&SD->u1.f1.dv2[16061], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16106] = 1.0;
  memset(&SD->u1.f1.dv2[16107], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16129] = -in11[3];
  memset(&SD->u1.f1.dv2[16130], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16175] = -in11[3];
  memset(&SD->u1.f1.dv2[16176], 0, 249U * sizeof(real_T));
  SD->u1.f1.dv2[16425] = -1.0;
  memset(&SD->u1.f1.dv2[16426], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16471] = 1.0;
  memset(&SD->u1.f1.dv2[16472], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16494] = -in11[3];
  memset(&SD->u1.f1.dv2[16495], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16540] = -in11[3];
  memset(&SD->u1.f1.dv2[16541], 0, 203U * sizeof(real_T));
  SD->u1.f1.dv2[16744] = 1.0;
  memset(&SD->u1.f1.dv2[16745], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16790] = -1.0;
  memset(&SD->u1.f1.dv2[16791], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[16905] = 1.0;
  SD->u1.f1.dv2[16906] = 0.0;
  SD->u1.f1.dv2[16907] = 0.0;
  SD->u1.f1.dv2[16908] = 0.0;
  SD->u1.f1.dv2[16909] = 0.0;
  SD->u1.f1.dv2[16910] = -1.0;
  memset(&SD->u1.f1.dv2[16911], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[16927] = 1.0;
  memset(&SD->u1.f1.dv2[16928], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16973] = -1.0;
  memset(&SD->u1.f1.dv2[16974], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17088] = 1.0;
  SD->u1.f1.dv2[17089] = 0.0;
  SD->u1.f1.dv2[17090] = 0.0;
  SD->u1.f1.dv2[17091] = 0.0;
  SD->u1.f1.dv2[17092] = 0.0;
  SD->u1.f1.dv2[17093] = -1.0;
  memset(&SD->u1.f1.dv2[17094], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[17110] = 1.0;
  memset(&SD->u1.f1.dv2[17111], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17156] = -1.0;
  memset(&SD->u1.f1.dv2[17157], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17271] = 1.0;
  SD->u1.f1.dv2[17272] = 0.0;
  SD->u1.f1.dv2[17273] = 0.0;
  SD->u1.f1.dv2[17274] = 0.0;
  SD->u1.f1.dv2[17275] = 0.0;
  SD->u1.f1.dv2[17276] = -1.0;
  memset(&SD->u1.f1.dv2[17277], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[17293] = 1.0;
  memset(&SD->u1.f1.dv2[17294], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17339] = -1.0;
  memset(&SD->u1.f1.dv2[17340], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17454] = 1.0;
  SD->u1.f1.dv2[17455] = 0.0;
  SD->u1.f1.dv2[17456] = 0.0;
  SD->u1.f1.dv2[17457] = 0.0;
  SD->u1.f1.dv2[17458] = 0.0;
  SD->u1.f1.dv2[17459] = -1.0;
  memset(&SD->u1.f1.dv2[17460], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[17476] = 1.0;
  memset(&SD->u1.f1.dv2[17477], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17522] = -1.0;
  memset(&SD->u1.f1.dv2[17523], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17637] = 1.0;
  SD->u1.f1.dv2[17638] = 0.0;
  SD->u1.f1.dv2[17639] = 0.0;
  SD->u1.f1.dv2[17640] = 0.0;
  SD->u1.f1.dv2[17641] = 0.0;
  SD->u1.f1.dv2[17642] = -1.0;
  memset(&SD->u1.f1.dv2[17643], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[17659] = 1.0;
  memset(&SD->u1.f1.dv2[17660], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17705] = -1.0;
  memset(&SD->u1.f1.dv2[17706], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[17842] = 1.0;
  memset(&SD->u1.f1.dv2[17843], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17888] = -1.0;
  memset(&SD->u1.f1.dv2[17889], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[18025] = 1.0;
  memset(&SD->u1.f1.dv2[18026], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18071] = -1.0;
  memset(&SD->u1.f1.dv2[18072], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[18208] = 1.0;
  memset(&SD->u1.f1.dv2[18209], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18254] = -1.0;
  memset(&SD->u1.f1.dv2[18255], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[18391] = 1.0;
  memset(&SD->u1.f1.dv2[18392], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18437] = -1.0;
  memset(&SD->u1.f1.dv2[18438], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[18574] = 1.0;
  memset(&SD->u1.f1.dv2[18575], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18620] = -1.0;
  memset(&SD->u1.f1.dv2[18621], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[18757] = 1.0;
  memset(&SD->u1.f1.dv2[18758], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18803] = -1.0;
  memset(&SD->u1.f1.dv2[18804], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[18940] = 1.0;
  memset(&SD->u1.f1.dv2[18941], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18986] = -1.0;
  memset(&SD->u1.f1.dv2[18987], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[19123] = 1.0;
  memset(&SD->u1.f1.dv2[19124], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19169] = -1.0;
  memset(&SD->u1.f1.dv2[19170], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[19306] = 1.0;
  memset(&SD->u1.f1.dv2[19307], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19352] = -1.0;
  memset(&SD->u1.f1.dv2[19353], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[19489] = 1.0;
  memset(&SD->u1.f1.dv2[19490], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19535] = -1.0;
  memset(&SD->u1.f1.dv2[19536], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[19672] = 1.0;
  memset(&SD->u1.f1.dv2[19673], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19718] = -1.0;
  memset(&SD->u1.f1.dv2[19719], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[19855] = 1.0;
  memset(&SD->u1.f1.dv2[19856], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19901] = -1.0;
  memset(&SD->u1.f1.dv2[19902], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[20038] = 1.0;
  memset(&SD->u1.f1.dv2[20039], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20084] = -1.0;
  memset(&SD->u1.f1.dv2[20085], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[20221] = 1.0;
  memset(&SD->u1.f1.dv2[20222], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20267] = -1.0;
  memset(&SD->u1.f1.dv2[20268], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[20404] = 1.0;
  memset(&SD->u1.f1.dv2[20405], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20450] = -1.0;
  memset(&SD->u1.f1.dv2[20451], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[20587] = 1.0;
  memset(&SD->u1.f1.dv2[20588], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20633] = -1.0;
  memset(&SD->u1.f1.dv2[20634], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[20770] = 1.0;
  memset(&SD->u1.f1.dv2[20771], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20816] = -1.0;
  memset(&SD->u1.f1.dv2[20817], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[20953] = 1.0;
  memset(&SD->u1.f1.dv2[20954], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20999] = -1.0;
  memset(&SD->u1.f1.dv2[21000], 0, 101U * sizeof(real_T));
  SD->u1.f1.dv2[21101] = 1.0;
  SD->u1.f1.dv2[21102] = 0.0;
  SD->u1.f1.dv2[21103] = 0.0;
  SD->u1.f1.dv2[21104] = 0.0;
  SD->u1.f1.dv2[21105] = 0.0;
  SD->u1.f1.dv2[21106] = -1.0;
  memset(&SD->u1.f1.dv2[21107], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv2[21136] = 1.0;
  memset(&SD->u1.f1.dv2[21137], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21182] = -1.0;
  memset(&SD->u1.f1.dv2[21183], 0, 101U * sizeof(real_T));
  SD->u1.f1.dv2[21284] = 1.0;
  SD->u1.f1.dv2[21285] = 0.0;
  SD->u1.f1.dv2[21286] = 0.0;
  SD->u1.f1.dv2[21287] = 0.0;
  SD->u1.f1.dv2[21288] = 0.0;
  SD->u1.f1.dv2[21289] = -1.0;
  memset(&SD->u1.f1.dv2[21290], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv2[21319] = 1.0;
  memset(&SD->u1.f1.dv2[21320], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21365] = -1.0;
  memset(&SD->u1.f1.dv2[21366], 0, 101U * sizeof(real_T));
  SD->u1.f1.dv2[21467] = 1.0;
  SD->u1.f1.dv2[21468] = 0.0;
  SD->u1.f1.dv2[21469] = 0.0;
  SD->u1.f1.dv2[21470] = 0.0;
  SD->u1.f1.dv2[21471] = 0.0;
  SD->u1.f1.dv2[21472] = -1.0;
  memset(&SD->u1.f1.dv2[21473], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv2[21502] = 1.0;
  memset(&SD->u1.f1.dv2[21503], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21548] = -1.0;
  memset(&SD->u1.f1.dv2[21549], 0, 101U * sizeof(real_T));
  SD->u1.f1.dv2[21650] = 1.0;
  SD->u1.f1.dv2[21651] = 0.0;
  SD->u1.f1.dv2[21652] = 0.0;
  SD->u1.f1.dv2[21653] = 0.0;
  SD->u1.f1.dv2[21654] = 0.0;
  SD->u1.f1.dv2[21655] = -1.0;
  memset(&SD->u1.f1.dv2[21656], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv2[21685] = 1.0;
  memset(&SD->u1.f1.dv2[21686], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21731] = -1.0;
  memset(&SD->u1.f1.dv2[21732], 0, 101U * sizeof(real_T));
  SD->u1.f1.dv2[21833] = 1.0;
  SD->u1.f1.dv2[21834] = 0.0;
  SD->u1.f1.dv2[21835] = 0.0;
  SD->u1.f1.dv2[21836] = 0.0;
  SD->u1.f1.dv2[21837] = 0.0;
  SD->u1.f1.dv2[21838] = -1.0;
  memset(&SD->u1.f1.dv2[21839], 0, 29U * sizeof(real_T));
  SD->u1.f1.dv2[21868] = 1.0;
  memset(&SD->u1.f1.dv2[21869], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21914] = -1.0;
  memset(&SD->u1.f1.dv2[21915], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[22051] = 1.0;
  memset(&SD->u1.f1.dv2[22052], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22097] = -1.0;
  memset(&SD->u1.f1.dv2[22098], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[22234] = 1.0;
  memset(&SD->u1.f1.dv2[22235], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22280] = -1.0;
  memset(&SD->u1.f1.dv2[22281], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[22417] = 1.0;
  memset(&SD->u1.f1.dv2[22418], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22463] = -1.0;
  memset(&SD->u1.f1.dv2[22464], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[22600] = 1.0;
  memset(&SD->u1.f1.dv2[22601], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22646] = -1.0;
  memset(&SD->u1.f1.dv2[22647], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[22783] = 1.0;
  memset(&SD->u1.f1.dv2[22784], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22829] = -1.0;
  memset(&SD->u1.f1.dv2[22830], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[22966] = 1.0;
  memset(&SD->u1.f1.dv2[22967], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23012] = -1.0;
  memset(&SD->u1.f1.dv2[23013], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[23149] = 1.0;
  memset(&SD->u1.f1.dv2[23150], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23195] = -1.0;
  memset(&SD->u1.f1.dv2[23196], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[23332] = 1.0;
  memset(&SD->u1.f1.dv2[23333], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23378] = -1.0;
  memset(&SD->u1.f1.dv2[23379], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[23515] = 1.0;
  memset(&SD->u1.f1.dv2[23516], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23561] = -1.0;
  memset(&SD->u1.f1.dv2[23562], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[23698] = 1.0;
  memset(&SD->u1.f1.dv2[23699], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23744] = -1.0;
  memset(&SD->u1.f1.dv2[23745], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[23881] = 1.0;
  memset(&SD->u1.f1.dv2[23882], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23927] = -1.0;
  memset(&SD->u1.f1.dv2[23928], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[24064] = 1.0;
  memset(&SD->u1.f1.dv2[24065], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24110] = -1.0;
  memset(&SD->u1.f1.dv2[24111], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[24247] = 1.0;
  memset(&SD->u1.f1.dv2[24248], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24293] = -1.0;
  memset(&SD->u1.f1.dv2[24294], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[24430] = 1.0;
  memset(&SD->u1.f1.dv2[24431], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24476] = -1.0;
  memset(&SD->u1.f1.dv2[24477], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[24613] = 1.0;
  memset(&SD->u1.f1.dv2[24614], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24659] = -1.0;
  memset(&SD->u1.f1.dv2[24660], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[24796] = 1.0;
  memset(&SD->u1.f1.dv2[24797], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24842] = -1.0;
  memset(&SD->u1.f1.dv2[24843], 0, 136U * sizeof(real_T));
  SD->u1.f1.dv2[24979] = 1.0;
  memset(&SD->u1.f1.dv2[24980], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25025] = -1.0;
  memset(&SD->u1.f1.dv2[25026], 0, 999U * sizeof(real_T));
  SD->u1.f1.dv2[26025] = -1.0;
  memset(&SD->u1.f1.dv2[26026], 0, 661U * sizeof(real_T));
  SD->u1.f1.dv2[26687] = -1.0;
  memset(&SD->u1.f1.dv2[26688], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26710] = -1.0;
  memset(&SD->u1.f1.dv2[26711], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[26870] = -1.0;
  memset(&SD->u1.f1.dv2[26871], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26893] = -1.0;
  memset(&SD->u1.f1.dv2[26894], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[27053] = -1.0;
  memset(&SD->u1.f1.dv2[27054], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27076] = -1.0;
  memset(&SD->u1.f1.dv2[27077], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[27236] = -1.0;
  memset(&SD->u1.f1.dv2[27237], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27259] = -1.0;
  memset(&SD->u1.f1.dv2[27260], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[27419] = -1.0;
  memset(&SD->u1.f1.dv2[27420], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27442] = -1.0;
  memset(&SD->u1.f1.dv2[27443], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[27602] = -1.0;
  memset(&SD->u1.f1.dv2[27603], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27625] = -1.0;
  memset(&SD->u1.f1.dv2[27626], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[27785] = -1.0;
  memset(&SD->u1.f1.dv2[27786], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27808] = -1.0;
  memset(&SD->u1.f1.dv2[27809], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[27968] = -1.0;
  memset(&SD->u1.f1.dv2[27969], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27991] = -1.0;
  memset(&SD->u1.f1.dv2[27992], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[28151] = -1.0;
  memset(&SD->u1.f1.dv2[28152], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28174] = -1.0;
  memset(&SD->u1.f1.dv2[28175], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[28334] = -1.0;
  memset(&SD->u1.f1.dv2[28335], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28357] = -1.0;
  memset(&SD->u1.f1.dv2[28358], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[28517] = -1.0;
  memset(&SD->u1.f1.dv2[28518], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28540] = -1.0;
  memset(&SD->u1.f1.dv2[28541], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[28700] = -1.0;
  memset(&SD->u1.f1.dv2[28701], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28723] = -1.0;
  memset(&SD->u1.f1.dv2[28724], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[28883] = -1.0;
  memset(&SD->u1.f1.dv2[28884], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28906] = -1.0;
  memset(&SD->u1.f1.dv2[28907], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[29066] = -1.0;
  memset(&SD->u1.f1.dv2[29067], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29089] = -1.0;
  memset(&SD->u1.f1.dv2[29090], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[29249] = -1.0;
  memset(&SD->u1.f1.dv2[29250], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29272] = -1.0;
  memset(&SD->u1.f1.dv2[29273], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[29432] = -1.0;
  memset(&SD->u1.f1.dv2[29433], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29455] = -1.0;
  memset(&SD->u1.f1.dv2[29456], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[29615] = -1.0;
  memset(&SD->u1.f1.dv2[29616], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29638] = -1.0;
  memset(&SD->u1.f1.dv2[29639], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[29798] = -1.0;
  memset(&SD->u1.f1.dv2[29799], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29821] = -1.0;
  memset(&SD->u1.f1.dv2[29822], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[29981] = -1.0;
  memset(&SD->u1.f1.dv2[29982], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30004] = -1.0;
  memset(&SD->u1.f1.dv2[30005], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[30164] = -1.0;
  memset(&SD->u1.f1.dv2[30165], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30187] = -1.0;
  memset(&SD->u1.f1.dv2[30188], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[30347] = -1.0;
  memset(&SD->u1.f1.dv2[30348], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30370] = -1.0;
  memset(&SD->u1.f1.dv2[30371], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[30530] = -1.0;
  memset(&SD->u1.f1.dv2[30531], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30553] = -1.0;
  memset(&SD->u1.f1.dv2[30554], 0, 159U * sizeof(real_T));
  SD->u1.f1.dv2[30713] = -1.0;
  memset(&SD->u1.f1.dv2[30714], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30736] = -1.0;
  memset(&SD->u1.f1.dv2[30737], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[30939] = 1.0;
  memset(&SD->u1.f1.dv2[30940], 0, 4165U * sizeof(real_T));
  SD->u1.f1.dv2[35105] = -1.0;
  SD->u1.f1.dv2[35106] = 0.0;
  SD->u1.f1.dv2[35107] = 0.0;
  SD->u1.f1.dv2[35108] = 0.0;
  SD->u1.f1.dv2[35109] = 0.0;
  SD->u1.f1.dv2[35110] = -1.0;
  memset(&SD->u1.f1.dv2[35111], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[35288] = -1.0;
  SD->u1.f1.dv2[35289] = 0.0;
  SD->u1.f1.dv2[35290] = 0.0;
  SD->u1.f1.dv2[35291] = 0.0;
  SD->u1.f1.dv2[35292] = 0.0;
  SD->u1.f1.dv2[35293] = -1.0;
  memset(&SD->u1.f1.dv2[35294], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[35471] = -1.0;
  SD->u1.f1.dv2[35472] = 0.0;
  SD->u1.f1.dv2[35473] = 0.0;
  SD->u1.f1.dv2[35474] = 0.0;
  SD->u1.f1.dv2[35475] = 0.0;
  SD->u1.f1.dv2[35476] = -1.0;
  memset(&SD->u1.f1.dv2[35477], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[35654] = -1.0;
  SD->u1.f1.dv2[35655] = 0.0;
  SD->u1.f1.dv2[35656] = 0.0;
  SD->u1.f1.dv2[35657] = 0.0;
  SD->u1.f1.dv2[35658] = 0.0;
  SD->u1.f1.dv2[35659] = -1.0;
  memset(&SD->u1.f1.dv2[35660], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[35837] = -1.0;
  SD->u1.f1.dv2[35838] = 0.0;
  SD->u1.f1.dv2[35839] = 0.0;
  SD->u1.f1.dv2[35840] = 0.0;
  SD->u1.f1.dv2[35841] = 0.0;
  SD->u1.f1.dv2[35842] = -1.0;
  memset(&SD->u1.f1.dv2[35843], 0, 1092U * sizeof(real_T));
  SD->u1.f1.dv2[36935] = -1.0;
  SD->u1.f1.dv2[36936] = 0.0;
  SD->u1.f1.dv2[36937] = 0.0;
  SD->u1.f1.dv2[36938] = 0.0;
  SD->u1.f1.dv2[36939] = 0.0;
  SD->u1.f1.dv2[36940] = -1.0;
  memset(&SD->u1.f1.dv2[36941], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[37118] = -1.0;
  SD->u1.f1.dv2[37119] = 0.0;
  SD->u1.f1.dv2[37120] = 0.0;
  SD->u1.f1.dv2[37121] = 0.0;
  SD->u1.f1.dv2[37122] = 0.0;
  SD->u1.f1.dv2[37123] = -1.0;
  memset(&SD->u1.f1.dv2[37124], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[37301] = -1.0;
  SD->u1.f1.dv2[37302] = 0.0;
  SD->u1.f1.dv2[37303] = 0.0;
  SD->u1.f1.dv2[37304] = 0.0;
  SD->u1.f1.dv2[37305] = 0.0;
  SD->u1.f1.dv2[37306] = -1.0;
  memset(&SD->u1.f1.dv2[37307], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[37484] = -1.0;
  SD->u1.f1.dv2[37485] = 0.0;
  SD->u1.f1.dv2[37486] = 0.0;
  SD->u1.f1.dv2[37487] = 0.0;
  SD->u1.f1.dv2[37488] = 0.0;
  SD->u1.f1.dv2[37489] = -1.0;
  memset(&SD->u1.f1.dv2[37490], 0, 177U * sizeof(real_T));
  SD->u1.f1.dv2[37667] = -1.0;
  SD->u1.f1.dv2[37668] = 0.0;
  SD->u1.f1.dv2[37669] = 0.0;
  SD->u1.f1.dv2[37670] = 0.0;
  SD->u1.f1.dv2[37671] = 0.0;
  SD->u1.f1.dv2[37672] = -1.0;
  memset(&SD->u1.f1.dv2[37673], 0, 2367U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 182], &SD->u1.f1.dv2[i2 * 182], 182U * sizeof(real_T));
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
  biq[166] = t9;
  biq[167] = t9;
  biq[168] = t9;
  biq[169] = t9;
  biq[170] = t9;
  biq[171] = t10;
  biq[172] = t10;
  biq[173] = t10;
  biq[174] = t10;
  biq[175] = t10;
  biq[176] = t11;
  biq[177] = t11;
  biq[178] = t11;
  biq[179] = t11;
  biq[180] = t11;
  biq[181] = -in9[1];
}

/* End of code generation (IqFast_RightStart5V40.cpp) */
