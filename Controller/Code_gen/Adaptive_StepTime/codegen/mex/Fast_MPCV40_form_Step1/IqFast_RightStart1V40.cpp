/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart1V40.cpp
 *
 * Code generation for function 'IqFast_RightStart1V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step1.h"
#include "IqFast_RightStart1V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart1V40(Fast_MPCV40_form_Step1StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[43560], real_T biq[198])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART1V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART1V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 14:18:59 */
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
  memset(&SD->u1.f1.dv2[139], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[397] = -1.0;
  memset(&SD->u1.f1.dv2[398], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[443] = 1.0;
  memset(&SD->u1.f1.dv2[444], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[489] = -in11[2];
  memset(&SD->u1.f1.dv2[490], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[535] = -in11[2];
  memset(&SD->u1.f1.dv2[536], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[794] = -1.0;
  memset(&SD->u1.f1.dv2[795], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[840] = 1.0;
  memset(&SD->u1.f1.dv2[841], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[886] = -in11[2];
  memset(&SD->u1.f1.dv2[887], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[932] = -in11[2];
  memset(&SD->u1.f1.dv2[933], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[1191] = -1.0;
  memset(&SD->u1.f1.dv2[1192], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1237] = 1.0;
  memset(&SD->u1.f1.dv2[1238], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1283] = -in11[2];
  memset(&SD->u1.f1.dv2[1284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1329] = -in11[2];
  memset(&SD->u1.f1.dv2[1330], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[1588] = -1.0;
  memset(&SD->u1.f1.dv2[1589], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1634] = 1.0;
  memset(&SD->u1.f1.dv2[1635], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1680] = -in11[2];
  memset(&SD->u1.f1.dv2[1681], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1726] = -in11[2];
  memset(&SD->u1.f1.dv2[1727], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[1985] = -1.0;
  memset(&SD->u1.f1.dv2[1986], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2031] = 1.0;
  memset(&SD->u1.f1.dv2[2032], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2077] = -in11[2];
  memset(&SD->u1.f1.dv2[2078], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2123] = -in11[2];
  memset(&SD->u1.f1.dv2[2124], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[2382] = -1.0;
  memset(&SD->u1.f1.dv2[2383], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2428] = 1.0;
  memset(&SD->u1.f1.dv2[2429], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2474] = -in11[2];
  memset(&SD->u1.f1.dv2[2475], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2520] = -in11[2];
  memset(&SD->u1.f1.dv2[2521], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[2779] = -1.0;
  memset(&SD->u1.f1.dv2[2780], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2825] = 1.0;
  memset(&SD->u1.f1.dv2[2826], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2871] = -in11[2];
  memset(&SD->u1.f1.dv2[2872], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2917] = -in11[2];
  memset(&SD->u1.f1.dv2[2918], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[3176] = -1.0;
  memset(&SD->u1.f1.dv2[3177], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3222] = 1.0;
  memset(&SD->u1.f1.dv2[3223], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3268] = -in11[2];
  memset(&SD->u1.f1.dv2[3269], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3314] = -in11[2];
  memset(&SD->u1.f1.dv2[3315], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[3573] = -1.0;
  memset(&SD->u1.f1.dv2[3574], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3619] = 1.0;
  memset(&SD->u1.f1.dv2[3620], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3665] = -in11[2];
  memset(&SD->u1.f1.dv2[3666], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3711] = -in11[2];
  memset(&SD->u1.f1.dv2[3712], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[3970] = -1.0;
  memset(&SD->u1.f1.dv2[3971], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4016] = 1.0;
  memset(&SD->u1.f1.dv2[4017], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4062] = -in11[2];
  memset(&SD->u1.f1.dv2[4063], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4108] = -in11[2];
  memset(&SD->u1.f1.dv2[4109], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[4367] = -1.0;
  memset(&SD->u1.f1.dv2[4368], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4413] = 1.0;
  memset(&SD->u1.f1.dv2[4414], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4459] = -in11[2];
  memset(&SD->u1.f1.dv2[4460], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4505] = -in11[2];
  memset(&SD->u1.f1.dv2[4506], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[4764] = -1.0;
  memset(&SD->u1.f1.dv2[4765], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4810] = 1.0;
  memset(&SD->u1.f1.dv2[4811], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4856] = -in11[2];
  memset(&SD->u1.f1.dv2[4857], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4902] = -in11[2];
  memset(&SD->u1.f1.dv2[4903], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[5161] = -1.0;
  memset(&SD->u1.f1.dv2[5162], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5207] = 1.0;
  memset(&SD->u1.f1.dv2[5208], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5253] = -in11[2];
  memset(&SD->u1.f1.dv2[5254], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5299] = -in11[2];
  memset(&SD->u1.f1.dv2[5300], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[5558] = -1.0;
  memset(&SD->u1.f1.dv2[5559], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5604] = 1.0;
  memset(&SD->u1.f1.dv2[5605], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5650] = -in11[2];
  memset(&SD->u1.f1.dv2[5651], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5696] = -in11[2];
  memset(&SD->u1.f1.dv2[5697], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[5955] = -1.0;
  memset(&SD->u1.f1.dv2[5956], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6001] = 1.0;
  memset(&SD->u1.f1.dv2[6002], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6047] = -in11[2];
  memset(&SD->u1.f1.dv2[6048], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6093] = -in11[2];
  memset(&SD->u1.f1.dv2[6094], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[6352] = -1.0;
  memset(&SD->u1.f1.dv2[6353], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6398] = 1.0;
  memset(&SD->u1.f1.dv2[6399], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6444] = -in11[2];
  memset(&SD->u1.f1.dv2[6445], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6490] = -in11[2];
  memset(&SD->u1.f1.dv2[6491], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[6749] = -1.0;
  memset(&SD->u1.f1.dv2[6750], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6795] = 1.0;
  memset(&SD->u1.f1.dv2[6796], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6841] = -in11[2];
  memset(&SD->u1.f1.dv2[6842], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6887] = -in11[2];
  memset(&SD->u1.f1.dv2[6888], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[7146] = -1.0;
  memset(&SD->u1.f1.dv2[7147], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7192] = 1.0;
  memset(&SD->u1.f1.dv2[7193], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7238] = -in11[2];
  memset(&SD->u1.f1.dv2[7239], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7284] = -in11[2];
  memset(&SD->u1.f1.dv2[7285], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[7543] = -1.0;
  memset(&SD->u1.f1.dv2[7544], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7589] = 1.0;
  memset(&SD->u1.f1.dv2[7590], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7635] = -in11[2];
  memset(&SD->u1.f1.dv2[7636], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7681] = -in11[2];
  memset(&SD->u1.f1.dv2[7682], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[7940] = -1.0;
  memset(&SD->u1.f1.dv2[7941], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7986] = 1.0;
  memset(&SD->u1.f1.dv2[7987], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8032] = -in11[2];
  memset(&SD->u1.f1.dv2[8033], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8078] = -in11[2];
  memset(&SD->u1.f1.dv2[8079], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[8337] = -1.0;
  memset(&SD->u1.f1.dv2[8338], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8383] = 1.0;
  memset(&SD->u1.f1.dv2[8384], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8429] = -in11[2];
  memset(&SD->u1.f1.dv2[8430], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8475] = -in11[2];
  memset(&SD->u1.f1.dv2[8476], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[8734] = -1.0;
  memset(&SD->u1.f1.dv2[8735], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8780] = 1.0;
  memset(&SD->u1.f1.dv2[8781], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8826] = -in11[2];
  memset(&SD->u1.f1.dv2[8827], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8872] = -in11[2];
  memset(&SD->u1.f1.dv2[8873], 0, 258U * sizeof(real_T));
  SD->u1.f1.dv2[9131] = -1.0;
  memset(&SD->u1.f1.dv2[9132], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9177] = 1.0;
  memset(&SD->u1.f1.dv2[9178], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9200] = -in11[3];
  memset(&SD->u1.f1.dv2[9201], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9246] = -in11[3];
  memset(&SD->u1.f1.dv2[9247], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[9528] = -1.0;
  memset(&SD->u1.f1.dv2[9529], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9574] = 1.0;
  memset(&SD->u1.f1.dv2[9575], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9597] = -in11[3];
  memset(&SD->u1.f1.dv2[9598], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9643] = -in11[3];
  memset(&SD->u1.f1.dv2[9644], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[9925] = -1.0;
  memset(&SD->u1.f1.dv2[9926], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9971] = 1.0;
  memset(&SD->u1.f1.dv2[9972], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9994] = -in11[3];
  memset(&SD->u1.f1.dv2[9995], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10040] = -in11[3];
  memset(&SD->u1.f1.dv2[10041], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[10322] = -1.0;
  memset(&SD->u1.f1.dv2[10323], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10368] = 1.0;
  memset(&SD->u1.f1.dv2[10369], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10391] = -in11[3];
  memset(&SD->u1.f1.dv2[10392], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10437] = -in11[3];
  memset(&SD->u1.f1.dv2[10438], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[10719] = -1.0;
  memset(&SD->u1.f1.dv2[10720], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10765] = 1.0;
  memset(&SD->u1.f1.dv2[10766], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10788] = -in11[3];
  memset(&SD->u1.f1.dv2[10789], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10834] = -in11[3];
  memset(&SD->u1.f1.dv2[10835], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[11116] = -1.0;
  memset(&SD->u1.f1.dv2[11117], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11162] = 1.0;
  memset(&SD->u1.f1.dv2[11163], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11185] = -in11[3];
  memset(&SD->u1.f1.dv2[11186], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11231] = -in11[3];
  memset(&SD->u1.f1.dv2[11232], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[11513] = -1.0;
  memset(&SD->u1.f1.dv2[11514], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11559] = 1.0;
  memset(&SD->u1.f1.dv2[11560], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11582] = -in11[3];
  memset(&SD->u1.f1.dv2[11583], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11628] = -in11[3];
  memset(&SD->u1.f1.dv2[11629], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[11910] = -1.0;
  memset(&SD->u1.f1.dv2[11911], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11956] = 1.0;
  memset(&SD->u1.f1.dv2[11957], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11979] = -in11[3];
  memset(&SD->u1.f1.dv2[11980], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12025] = -in11[3];
  memset(&SD->u1.f1.dv2[12026], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[12307] = -1.0;
  memset(&SD->u1.f1.dv2[12308], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12353] = 1.0;
  memset(&SD->u1.f1.dv2[12354], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12376] = -in11[3];
  memset(&SD->u1.f1.dv2[12377], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12422] = -in11[3];
  memset(&SD->u1.f1.dv2[12423], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[12704] = -1.0;
  memset(&SD->u1.f1.dv2[12705], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12750] = 1.0;
  memset(&SD->u1.f1.dv2[12751], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12773] = -in11[3];
  memset(&SD->u1.f1.dv2[12774], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12819] = -in11[3];
  memset(&SD->u1.f1.dv2[12820], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[13101] = -1.0;
  memset(&SD->u1.f1.dv2[13102], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13147] = 1.0;
  memset(&SD->u1.f1.dv2[13148], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13170] = -in11[3];
  memset(&SD->u1.f1.dv2[13171], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13216] = -in11[3];
  memset(&SD->u1.f1.dv2[13217], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[13498] = -1.0;
  memset(&SD->u1.f1.dv2[13499], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13544] = 1.0;
  memset(&SD->u1.f1.dv2[13545], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13567] = -in11[3];
  memset(&SD->u1.f1.dv2[13568], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13613] = -in11[3];
  memset(&SD->u1.f1.dv2[13614], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[13895] = -1.0;
  memset(&SD->u1.f1.dv2[13896], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13941] = 1.0;
  memset(&SD->u1.f1.dv2[13942], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13964] = -in11[3];
  memset(&SD->u1.f1.dv2[13965], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14010] = -in11[3];
  memset(&SD->u1.f1.dv2[14011], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[14292] = -1.0;
  memset(&SD->u1.f1.dv2[14293], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14338] = 1.0;
  memset(&SD->u1.f1.dv2[14339], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14361] = -in11[3];
  memset(&SD->u1.f1.dv2[14362], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14407] = -in11[3];
  memset(&SD->u1.f1.dv2[14408], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[14689] = -1.0;
  memset(&SD->u1.f1.dv2[14690], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14735] = 1.0;
  memset(&SD->u1.f1.dv2[14736], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14758] = -in11[3];
  memset(&SD->u1.f1.dv2[14759], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14804] = -in11[3];
  memset(&SD->u1.f1.dv2[14805], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[15086] = -1.0;
  memset(&SD->u1.f1.dv2[15087], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15132] = 1.0;
  memset(&SD->u1.f1.dv2[15133], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15155] = -in11[3];
  memset(&SD->u1.f1.dv2[15156], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15201] = -in11[3];
  memset(&SD->u1.f1.dv2[15202], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[15483] = -1.0;
  memset(&SD->u1.f1.dv2[15484], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15529] = 1.0;
  memset(&SD->u1.f1.dv2[15530], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15552] = -in11[3];
  memset(&SD->u1.f1.dv2[15553], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15598] = -in11[3];
  memset(&SD->u1.f1.dv2[15599], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[15880] = -1.0;
  memset(&SD->u1.f1.dv2[15881], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15926] = 1.0;
  memset(&SD->u1.f1.dv2[15927], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15949] = -in11[3];
  memset(&SD->u1.f1.dv2[15950], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15995] = -in11[3];
  memset(&SD->u1.f1.dv2[15996], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[16277] = -1.0;
  memset(&SD->u1.f1.dv2[16278], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16323] = 1.0;
  memset(&SD->u1.f1.dv2[16324], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16346] = -in11[3];
  memset(&SD->u1.f1.dv2[16347], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16392] = -in11[3];
  memset(&SD->u1.f1.dv2[16393], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[16674] = -1.0;
  memset(&SD->u1.f1.dv2[16675], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16720] = 1.0;
  memset(&SD->u1.f1.dv2[16721], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16743] = -in11[3];
  memset(&SD->u1.f1.dv2[16744], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16789] = -in11[3];
  memset(&SD->u1.f1.dv2[16790], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[17071] = -1.0;
  memset(&SD->u1.f1.dv2[17072], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17117] = 1.0;
  memset(&SD->u1.f1.dv2[17118], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17140] = -in11[3];
  memset(&SD->u1.f1.dv2[17141], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17186] = -in11[3];
  memset(&SD->u1.f1.dv2[17187], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[17468] = -1.0;
  memset(&SD->u1.f1.dv2[17469], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17514] = 1.0;
  memset(&SD->u1.f1.dv2[17515], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17537] = -in11[3];
  memset(&SD->u1.f1.dv2[17538], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17583] = -in11[3];
  memset(&SD->u1.f1.dv2[17584], 0, 281U * sizeof(real_T));
  SD->u1.f1.dv2[17865] = -1.0;
  memset(&SD->u1.f1.dv2[17866], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17911] = 1.0;
  memset(&SD->u1.f1.dv2[17912], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17934] = -in11[3];
  memset(&SD->u1.f1.dv2[17935], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17980] = -in11[3];
  memset(&SD->u1.f1.dv2[17981], 0, 235U * sizeof(real_T));
  SD->u1.f1.dv2[18216] = 1.0;
  memset(&SD->u1.f1.dv2[18217], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18262] = -1.0;
  memset(&SD->u1.f1.dv2[18263], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18377] = 1.0;
  memset(&SD->u1.f1.dv2[18378], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[18386] = -1.0;
  memset(&SD->u1.f1.dv2[18387], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[18415] = 1.0;
  memset(&SD->u1.f1.dv2[18416], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18461] = -1.0;
  memset(&SD->u1.f1.dv2[18462], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18576] = 1.0;
  memset(&SD->u1.f1.dv2[18577], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[18585] = -1.0;
  memset(&SD->u1.f1.dv2[18586], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[18614] = 1.0;
  memset(&SD->u1.f1.dv2[18615], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18660] = -1.0;
  memset(&SD->u1.f1.dv2[18661], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18775] = 1.0;
  memset(&SD->u1.f1.dv2[18776], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[18784] = -1.0;
  memset(&SD->u1.f1.dv2[18785], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[18813] = 1.0;
  memset(&SD->u1.f1.dv2[18814], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18859] = -1.0;
  memset(&SD->u1.f1.dv2[18860], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18974] = 1.0;
  memset(&SD->u1.f1.dv2[18975], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[18983] = -1.0;
  memset(&SD->u1.f1.dv2[18984], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[19012] = 1.0;
  memset(&SD->u1.f1.dv2[19013], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19058] = -1.0;
  memset(&SD->u1.f1.dv2[19059], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19173] = 1.0;
  memset(&SD->u1.f1.dv2[19174], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[19182] = -1.0;
  memset(&SD->u1.f1.dv2[19183], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[19211] = 1.0;
  memset(&SD->u1.f1.dv2[19212], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19257] = -1.0;
  memset(&SD->u1.f1.dv2[19258], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19372] = 1.0;
  memset(&SD->u1.f1.dv2[19373], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[19381] = -1.0;
  memset(&SD->u1.f1.dv2[19382], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[19410] = 1.0;
  memset(&SD->u1.f1.dv2[19411], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19456] = -1.0;
  memset(&SD->u1.f1.dv2[19457], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19571] = 1.0;
  memset(&SD->u1.f1.dv2[19572], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[19580] = -1.0;
  memset(&SD->u1.f1.dv2[19581], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[19609] = 1.0;
  memset(&SD->u1.f1.dv2[19610], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19655] = -1.0;
  memset(&SD->u1.f1.dv2[19656], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19770] = 1.0;
  memset(&SD->u1.f1.dv2[19771], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[19779] = -1.0;
  memset(&SD->u1.f1.dv2[19780], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[19808] = 1.0;
  memset(&SD->u1.f1.dv2[19809], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19854] = -1.0;
  memset(&SD->u1.f1.dv2[19855], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19969] = 1.0;
  memset(&SD->u1.f1.dv2[19970], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[19978] = -1.0;
  memset(&SD->u1.f1.dv2[19979], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[20007] = 1.0;
  memset(&SD->u1.f1.dv2[20008], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20053] = -1.0;
  memset(&SD->u1.f1.dv2[20054], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[20206] = 1.0;
  memset(&SD->u1.f1.dv2[20207], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20252] = -1.0;
  memset(&SD->u1.f1.dv2[20253], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[20405] = 1.0;
  memset(&SD->u1.f1.dv2[20406], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20451] = -1.0;
  memset(&SD->u1.f1.dv2[20452], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[20604] = 1.0;
  memset(&SD->u1.f1.dv2[20605], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20650] = -1.0;
  memset(&SD->u1.f1.dv2[20651], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[20803] = 1.0;
  memset(&SD->u1.f1.dv2[20804], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20849] = -1.0;
  memset(&SD->u1.f1.dv2[20850], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[21002] = 1.0;
  memset(&SD->u1.f1.dv2[21003], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21048] = -1.0;
  memset(&SD->u1.f1.dv2[21049], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[21201] = 1.0;
  memset(&SD->u1.f1.dv2[21202], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21247] = -1.0;
  memset(&SD->u1.f1.dv2[21248], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[21400] = 1.0;
  memset(&SD->u1.f1.dv2[21401], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21446] = -1.0;
  memset(&SD->u1.f1.dv2[21447], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[21599] = 1.0;
  memset(&SD->u1.f1.dv2[21600], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21645] = -1.0;
  memset(&SD->u1.f1.dv2[21646], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[21798] = 1.0;
  memset(&SD->u1.f1.dv2[21799], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21844] = -1.0;
  memset(&SD->u1.f1.dv2[21845], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[21997] = 1.0;
  memset(&SD->u1.f1.dv2[21998], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22043] = -1.0;
  memset(&SD->u1.f1.dv2[22044], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[22196] = 1.0;
  memset(&SD->u1.f1.dv2[22197], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22242] = -1.0;
  memset(&SD->u1.f1.dv2[22243], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[22395] = 1.0;
  memset(&SD->u1.f1.dv2[22396], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22441] = -1.0;
  memset(&SD->u1.f1.dv2[22442], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[22594] = 1.0;
  memset(&SD->u1.f1.dv2[22595], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22640] = -1.0;
  memset(&SD->u1.f1.dv2[22641], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[22793] = 1.0;
  memset(&SD->u1.f1.dv2[22794], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22839] = -1.0;
  memset(&SD->u1.f1.dv2[22840], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[22949] = 1.0;
  memset(&SD->u1.f1.dv2[22950], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[22958] = -1.0;
  memset(&SD->u1.f1.dv2[22959], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[22992] = 1.0;
  memset(&SD->u1.f1.dv2[22993], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23038] = -1.0;
  memset(&SD->u1.f1.dv2[23039], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[23148] = 1.0;
  memset(&SD->u1.f1.dv2[23149], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[23157] = -1.0;
  memset(&SD->u1.f1.dv2[23158], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[23191] = 1.0;
  memset(&SD->u1.f1.dv2[23192], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23237] = -1.0;
  memset(&SD->u1.f1.dv2[23238], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[23347] = 1.0;
  memset(&SD->u1.f1.dv2[23348], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[23356] = -1.0;
  memset(&SD->u1.f1.dv2[23357], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[23390] = 1.0;
  memset(&SD->u1.f1.dv2[23391], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23436] = -1.0;
  memset(&SD->u1.f1.dv2[23437], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[23546] = 1.0;
  memset(&SD->u1.f1.dv2[23547], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[23555] = -1.0;
  memset(&SD->u1.f1.dv2[23556], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[23589] = 1.0;
  memset(&SD->u1.f1.dv2[23590], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23635] = -1.0;
  memset(&SD->u1.f1.dv2[23636], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[23745] = 1.0;
  memset(&SD->u1.f1.dv2[23746], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[23754] = -1.0;
  memset(&SD->u1.f1.dv2[23755], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[23788] = 1.0;
  memset(&SD->u1.f1.dv2[23789], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23834] = -1.0;
  memset(&SD->u1.f1.dv2[23835], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[23944] = 1.0;
  memset(&SD->u1.f1.dv2[23945], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[23953] = -1.0;
  memset(&SD->u1.f1.dv2[23954], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[23987] = 1.0;
  memset(&SD->u1.f1.dv2[23988], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24033] = -1.0;
  memset(&SD->u1.f1.dv2[24034], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[24143] = 1.0;
  memset(&SD->u1.f1.dv2[24144], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[24152] = -1.0;
  memset(&SD->u1.f1.dv2[24153], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[24186] = 1.0;
  memset(&SD->u1.f1.dv2[24187], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24232] = -1.0;
  memset(&SD->u1.f1.dv2[24233], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[24342] = 1.0;
  memset(&SD->u1.f1.dv2[24343], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[24351] = -1.0;
  memset(&SD->u1.f1.dv2[24352], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[24385] = 1.0;
  memset(&SD->u1.f1.dv2[24386], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24431] = -1.0;
  memset(&SD->u1.f1.dv2[24432], 0, 109U * sizeof(real_T));
  SD->u1.f1.dv2[24541] = 1.0;
  memset(&SD->u1.f1.dv2[24542], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[24550] = -1.0;
  memset(&SD->u1.f1.dv2[24551], 0, 33U * sizeof(real_T));
  SD->u1.f1.dv2[24584] = 1.0;
  memset(&SD->u1.f1.dv2[24585], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24630] = -1.0;
  memset(&SD->u1.f1.dv2[24631], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[24783] = 1.0;
  memset(&SD->u1.f1.dv2[24784], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24829] = -1.0;
  memset(&SD->u1.f1.dv2[24830], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[24982] = 1.0;
  memset(&SD->u1.f1.dv2[24983], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25028] = -1.0;
  memset(&SD->u1.f1.dv2[25029], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[25181] = 1.0;
  memset(&SD->u1.f1.dv2[25182], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25227] = -1.0;
  memset(&SD->u1.f1.dv2[25228], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[25380] = 1.0;
  memset(&SD->u1.f1.dv2[25381], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25426] = -1.0;
  memset(&SD->u1.f1.dv2[25427], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[25579] = 1.0;
  memset(&SD->u1.f1.dv2[25580], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25625] = -1.0;
  memset(&SD->u1.f1.dv2[25626], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[25778] = 1.0;
  memset(&SD->u1.f1.dv2[25779], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25824] = -1.0;
  memset(&SD->u1.f1.dv2[25825], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[25977] = 1.0;
  memset(&SD->u1.f1.dv2[25978], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26023] = -1.0;
  memset(&SD->u1.f1.dv2[26024], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[26176] = 1.0;
  memset(&SD->u1.f1.dv2[26177], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26222] = -1.0;
  memset(&SD->u1.f1.dv2[26223], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[26375] = 1.0;
  memset(&SD->u1.f1.dv2[26376], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26421] = -1.0;
  memset(&SD->u1.f1.dv2[26422], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[26574] = 1.0;
  memset(&SD->u1.f1.dv2[26575], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26620] = -1.0;
  memset(&SD->u1.f1.dv2[26621], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[26773] = 1.0;
  memset(&SD->u1.f1.dv2[26774], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26819] = -1.0;
  memset(&SD->u1.f1.dv2[26820], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[26972] = 1.0;
  memset(&SD->u1.f1.dv2[26973], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[27018] = -1.0;
  memset(&SD->u1.f1.dv2[27019], 0, 152U * sizeof(real_T));
  SD->u1.f1.dv2[27171] = 1.0;
  memset(&SD->u1.f1.dv2[27172], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[27217] = -1.0;
  memset(&SD->u1.f1.dv2[27218], 0, 1095U * sizeof(real_T));
  SD->u1.f1.dv2[28313] = -1.0;
  memset(&SD->u1.f1.dv2[28314], 0, 709U * sizeof(real_T));
  SD->u1.f1.dv2[29023] = -1.0;
  memset(&SD->u1.f1.dv2[29024], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29046] = -1.0;
  memset(&SD->u1.f1.dv2[29047], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[29222] = -1.0;
  memset(&SD->u1.f1.dv2[29223], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29245] = -1.0;
  memset(&SD->u1.f1.dv2[29246], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[29421] = -1.0;
  memset(&SD->u1.f1.dv2[29422], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29444] = -1.0;
  memset(&SD->u1.f1.dv2[29445], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[29620] = -1.0;
  memset(&SD->u1.f1.dv2[29621], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29643] = -1.0;
  memset(&SD->u1.f1.dv2[29644], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[29819] = -1.0;
  memset(&SD->u1.f1.dv2[29820], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29842] = -1.0;
  memset(&SD->u1.f1.dv2[29843], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[30018] = -1.0;
  memset(&SD->u1.f1.dv2[30019], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30041] = -1.0;
  memset(&SD->u1.f1.dv2[30042], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[30217] = -1.0;
  memset(&SD->u1.f1.dv2[30218], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30240] = -1.0;
  memset(&SD->u1.f1.dv2[30241], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[30416] = -1.0;
  memset(&SD->u1.f1.dv2[30417], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30439] = -1.0;
  memset(&SD->u1.f1.dv2[30440], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[30615] = -1.0;
  memset(&SD->u1.f1.dv2[30616], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30638] = -1.0;
  memset(&SD->u1.f1.dv2[30639], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[30814] = -1.0;
  memset(&SD->u1.f1.dv2[30815], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30837] = -1.0;
  memset(&SD->u1.f1.dv2[30838], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[31013] = -1.0;
  memset(&SD->u1.f1.dv2[31014], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31036] = -1.0;
  memset(&SD->u1.f1.dv2[31037], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[31212] = -1.0;
  memset(&SD->u1.f1.dv2[31213], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31235] = -1.0;
  memset(&SD->u1.f1.dv2[31236], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[31411] = -1.0;
  memset(&SD->u1.f1.dv2[31412], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31434] = -1.0;
  memset(&SD->u1.f1.dv2[31435], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[31610] = -1.0;
  memset(&SD->u1.f1.dv2[31611], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31633] = -1.0;
  memset(&SD->u1.f1.dv2[31634], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[31809] = -1.0;
  memset(&SD->u1.f1.dv2[31810], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31832] = -1.0;
  memset(&SD->u1.f1.dv2[31833], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[32008] = -1.0;
  memset(&SD->u1.f1.dv2[32009], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32031] = -1.0;
  memset(&SD->u1.f1.dv2[32032], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[32207] = -1.0;
  memset(&SD->u1.f1.dv2[32208], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32230] = -1.0;
  memset(&SD->u1.f1.dv2[32231], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[32406] = -1.0;
  memset(&SD->u1.f1.dv2[32407], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32429] = -1.0;
  memset(&SD->u1.f1.dv2[32430], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[32605] = -1.0;
  memset(&SD->u1.f1.dv2[32606], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32628] = -1.0;
  memset(&SD->u1.f1.dv2[32629], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[32804] = -1.0;
  memset(&SD->u1.f1.dv2[32805], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32827] = -1.0;
  memset(&SD->u1.f1.dv2[32828], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[33003] = -1.0;
  memset(&SD->u1.f1.dv2[33004], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33026] = -1.0;
  memset(&SD->u1.f1.dv2[33027], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[33202] = -1.0;
  memset(&SD->u1.f1.dv2[33203], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33225] = -1.0;
  memset(&SD->u1.f1.dv2[33226], 0, 175U * sizeof(real_T));
  SD->u1.f1.dv2[33401] = -1.0;
  memset(&SD->u1.f1.dv2[33402], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33424] = -1.0;
  memset(&SD->u1.f1.dv2[33425], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[33659] = 1.0;
  memset(&SD->u1.f1.dv2[33660], 0, 4517U * sizeof(real_T));
  SD->u1.f1.dv2[38177] = -1.0;
  memset(&SD->u1.f1.dv2[38178], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[38186] = -1.0;
  memset(&SD->u1.f1.dv2[38187], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[38376] = -1.0;
  memset(&SD->u1.f1.dv2[38377], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[38385] = -1.0;
  memset(&SD->u1.f1.dv2[38386], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[38575] = -1.0;
  memset(&SD->u1.f1.dv2[38576], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[38584] = -1.0;
  memset(&SD->u1.f1.dv2[38585], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[38774] = -1.0;
  memset(&SD->u1.f1.dv2[38775], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[38783] = -1.0;
  memset(&SD->u1.f1.dv2[38784], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[38973] = -1.0;
  memset(&SD->u1.f1.dv2[38974], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[38982] = -1.0;
  memset(&SD->u1.f1.dv2[38983], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[39172] = -1.0;
  memset(&SD->u1.f1.dv2[39173], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[39181] = -1.0;
  memset(&SD->u1.f1.dv2[39182], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[39371] = -1.0;
  memset(&SD->u1.f1.dv2[39372], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[39380] = -1.0;
  memset(&SD->u1.f1.dv2[39381], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[39570] = -1.0;
  memset(&SD->u1.f1.dv2[39571], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[39579] = -1.0;
  memset(&SD->u1.f1.dv2[39580], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[39769] = -1.0;
  memset(&SD->u1.f1.dv2[39770], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[39778] = -1.0;
  memset(&SD->u1.f1.dv2[39779], 0, 396U * sizeof(real_T));
  SD->u1.f1.dv2[40175] = -1.0;
  memset(&SD->u1.f1.dv2[40176], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[40184] = -1.0;
  memset(&SD->u1.f1.dv2[40185], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[40374] = -1.0;
  memset(&SD->u1.f1.dv2[40375], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[40383] = -1.0;
  memset(&SD->u1.f1.dv2[40384], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[40573] = -1.0;
  memset(&SD->u1.f1.dv2[40574], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[40582] = -1.0;
  memset(&SD->u1.f1.dv2[40583], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[40772] = -1.0;
  memset(&SD->u1.f1.dv2[40773], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[40781] = -1.0;
  memset(&SD->u1.f1.dv2[40782], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[40971] = -1.0;
  memset(&SD->u1.f1.dv2[40972], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[40980] = -1.0;
  memset(&SD->u1.f1.dv2[40981], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[41170] = -1.0;
  memset(&SD->u1.f1.dv2[41171], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[41179] = -1.0;
  memset(&SD->u1.f1.dv2[41180], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[41369] = -1.0;
  memset(&SD->u1.f1.dv2[41370], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[41378] = -1.0;
  memset(&SD->u1.f1.dv2[41379], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[41568] = -1.0;
  memset(&SD->u1.f1.dv2[41569], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[41577] = -1.0;
  memset(&SD->u1.f1.dv2[41578], 0, 189U * sizeof(real_T));
  SD->u1.f1.dv2[41767] = -1.0;
  memset(&SD->u1.f1.dv2[41768], 0, sizeof(real_T) << 3);
  SD->u1.f1.dv2[41776] = -1.0;
  memset(&SD->u1.f1.dv2[41777], 0, 1783U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 198], &SD->u1.f1.dv2[i2 * 198], 198U * sizeof(real_T));
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

/* End of code generation (IqFast_RightStart1V40.cpp) */
