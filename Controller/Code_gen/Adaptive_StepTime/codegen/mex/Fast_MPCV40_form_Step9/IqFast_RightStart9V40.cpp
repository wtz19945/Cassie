/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart9V40.cpp
 *
 * Code generation for function 'IqFast_RightStart9V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step9.h"
#include "IqFast_RightStart9V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart9V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart9V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart9V40(Fast_MPCV40_form_Step9StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[36520], real_T biq[166])
{
  int32_T i2;
  real_T t7;
  real_T t3;

  /* IQFAST_RIGHTSTART9V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART9V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 15:46:47 */
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
  memset(&SD->u1.f1.dv2[139], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[333] = -1.0;
  memset(&SD->u1.f1.dv2[334], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[379] = 1.0;
  memset(&SD->u1.f1.dv2[380], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[425] = -in11[2];
  memset(&SD->u1.f1.dv2[426], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[471] = -in11[2];
  memset(&SD->u1.f1.dv2[472], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[666] = -1.0;
  memset(&SD->u1.f1.dv2[667], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[712] = 1.0;
  memset(&SD->u1.f1.dv2[713], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[758] = -in11[2];
  memset(&SD->u1.f1.dv2[759], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[804] = -in11[2];
  memset(&SD->u1.f1.dv2[805], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[999] = -1.0;
  memset(&SD->u1.f1.dv2[1000], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1045] = 1.0;
  memset(&SD->u1.f1.dv2[1046], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1091] = -in11[2];
  memset(&SD->u1.f1.dv2[1092], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1137] = -in11[2];
  memset(&SD->u1.f1.dv2[1138], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[1332] = -1.0;
  memset(&SD->u1.f1.dv2[1333], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1378] = 1.0;
  memset(&SD->u1.f1.dv2[1379], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1424] = -in11[2];
  memset(&SD->u1.f1.dv2[1425], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1470] = -in11[2];
  memset(&SD->u1.f1.dv2[1471], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[1665] = -1.0;
  memset(&SD->u1.f1.dv2[1666], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1711] = 1.0;
  memset(&SD->u1.f1.dv2[1712], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1757] = -in11[2];
  memset(&SD->u1.f1.dv2[1758], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1803] = -in11[2];
  memset(&SD->u1.f1.dv2[1804], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[1998] = -1.0;
  memset(&SD->u1.f1.dv2[1999], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2044] = 1.0;
  memset(&SD->u1.f1.dv2[2045], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2090] = -in11[2];
  memset(&SD->u1.f1.dv2[2091], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2136] = -in11[2];
  memset(&SD->u1.f1.dv2[2137], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[2331] = -1.0;
  memset(&SD->u1.f1.dv2[2332], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2377] = 1.0;
  memset(&SD->u1.f1.dv2[2378], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2423] = -in11[2];
  memset(&SD->u1.f1.dv2[2424], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2469] = -in11[2];
  memset(&SD->u1.f1.dv2[2470], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[2664] = -1.0;
  memset(&SD->u1.f1.dv2[2665], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2710] = 1.0;
  memset(&SD->u1.f1.dv2[2711], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2756] = -in11[2];
  memset(&SD->u1.f1.dv2[2757], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2802] = -in11[2];
  memset(&SD->u1.f1.dv2[2803], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[2997] = -1.0;
  memset(&SD->u1.f1.dv2[2998], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3043] = 1.0;
  memset(&SD->u1.f1.dv2[3044], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3089] = -in11[2];
  memset(&SD->u1.f1.dv2[3090], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3135] = -in11[2];
  memset(&SD->u1.f1.dv2[3136], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[3330] = -1.0;
  memset(&SD->u1.f1.dv2[3331], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3376] = 1.0;
  memset(&SD->u1.f1.dv2[3377], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3422] = -in11[2];
  memset(&SD->u1.f1.dv2[3423], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3468] = -in11[2];
  memset(&SD->u1.f1.dv2[3469], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[3663] = -1.0;
  memset(&SD->u1.f1.dv2[3664], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3709] = 1.0;
  memset(&SD->u1.f1.dv2[3710], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3755] = -in11[2];
  memset(&SD->u1.f1.dv2[3756], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3801] = -in11[2];
  memset(&SD->u1.f1.dv2[3802], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[3996] = -1.0;
  memset(&SD->u1.f1.dv2[3997], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4042] = 1.0;
  memset(&SD->u1.f1.dv2[4043], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4088] = -in11[2];
  memset(&SD->u1.f1.dv2[4089], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4134] = -in11[2];
  memset(&SD->u1.f1.dv2[4135], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[4329] = -1.0;
  memset(&SD->u1.f1.dv2[4330], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4375] = 1.0;
  memset(&SD->u1.f1.dv2[4376], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4421] = -in11[2];
  memset(&SD->u1.f1.dv2[4422], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4467] = -in11[2];
  memset(&SD->u1.f1.dv2[4468], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[4662] = -1.0;
  memset(&SD->u1.f1.dv2[4663], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4708] = 1.0;
  memset(&SD->u1.f1.dv2[4709], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4754] = -in11[2];
  memset(&SD->u1.f1.dv2[4755], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4800] = -in11[2];
  memset(&SD->u1.f1.dv2[4801], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[4995] = -1.0;
  memset(&SD->u1.f1.dv2[4996], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5041] = 1.0;
  memset(&SD->u1.f1.dv2[5042], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5087] = -in11[2];
  memset(&SD->u1.f1.dv2[5088], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5133] = -in11[2];
  memset(&SD->u1.f1.dv2[5134], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[5328] = -1.0;
  memset(&SD->u1.f1.dv2[5329], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5374] = 1.0;
  memset(&SD->u1.f1.dv2[5375], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5420] = -in11[2];
  memset(&SD->u1.f1.dv2[5421], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5466] = -in11[2];
  memset(&SD->u1.f1.dv2[5467], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[5661] = -1.0;
  memset(&SD->u1.f1.dv2[5662], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5707] = 1.0;
  memset(&SD->u1.f1.dv2[5708], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5753] = -in11[2];
  memset(&SD->u1.f1.dv2[5754], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5799] = -in11[2];
  memset(&SD->u1.f1.dv2[5800], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[5994] = -1.0;
  memset(&SD->u1.f1.dv2[5995], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6040] = 1.0;
  memset(&SD->u1.f1.dv2[6041], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6086] = -in11[2];
  memset(&SD->u1.f1.dv2[6087], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6132] = -in11[2];
  memset(&SD->u1.f1.dv2[6133], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[6327] = -1.0;
  memset(&SD->u1.f1.dv2[6328], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6373] = 1.0;
  memset(&SD->u1.f1.dv2[6374], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6419] = -in11[2];
  memset(&SD->u1.f1.dv2[6420], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6465] = -in11[2];
  memset(&SD->u1.f1.dv2[6466], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[6660] = -1.0;
  memset(&SD->u1.f1.dv2[6661], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6706] = 1.0;
  memset(&SD->u1.f1.dv2[6707], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6752] = -in11[2];
  memset(&SD->u1.f1.dv2[6753], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6798] = -in11[2];
  memset(&SD->u1.f1.dv2[6799], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[6993] = -1.0;
  memset(&SD->u1.f1.dv2[6994], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7039] = 1.0;
  memset(&SD->u1.f1.dv2[7040], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7085] = -in11[2];
  memset(&SD->u1.f1.dv2[7086], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7131] = -in11[2];
  memset(&SD->u1.f1.dv2[7132], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[7326] = -1.0;
  memset(&SD->u1.f1.dv2[7327], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7372] = 1.0;
  memset(&SD->u1.f1.dv2[7373], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7418] = -in11[2];
  memset(&SD->u1.f1.dv2[7419], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7464] = -in11[2];
  memset(&SD->u1.f1.dv2[7465], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[7659] = -1.0;
  memset(&SD->u1.f1.dv2[7660], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7705] = 1.0;
  memset(&SD->u1.f1.dv2[7706], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[7728] = -in11[3];
  memset(&SD->u1.f1.dv2[7729], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7774] = -in11[3];
  memset(&SD->u1.f1.dv2[7775], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[7992] = -1.0;
  memset(&SD->u1.f1.dv2[7993], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8038] = 1.0;
  memset(&SD->u1.f1.dv2[8039], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8061] = -in11[3];
  memset(&SD->u1.f1.dv2[8062], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8107] = -in11[3];
  memset(&SD->u1.f1.dv2[8108], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[8325] = -1.0;
  memset(&SD->u1.f1.dv2[8326], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8371] = 1.0;
  memset(&SD->u1.f1.dv2[8372], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8394] = -in11[3];
  memset(&SD->u1.f1.dv2[8395], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8440] = -in11[3];
  memset(&SD->u1.f1.dv2[8441], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[8658] = -1.0;
  memset(&SD->u1.f1.dv2[8659], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8704] = 1.0;
  memset(&SD->u1.f1.dv2[8705], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8727] = -in11[3];
  memset(&SD->u1.f1.dv2[8728], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8773] = -in11[3];
  memset(&SD->u1.f1.dv2[8774], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[8991] = -1.0;
  memset(&SD->u1.f1.dv2[8992], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9037] = 1.0;
  memset(&SD->u1.f1.dv2[9038], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9060] = -in11[3];
  memset(&SD->u1.f1.dv2[9061], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9106] = -in11[3];
  memset(&SD->u1.f1.dv2[9107], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[9324] = -1.0;
  memset(&SD->u1.f1.dv2[9325], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9370] = 1.0;
  memset(&SD->u1.f1.dv2[9371], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9393] = -in11[3];
  memset(&SD->u1.f1.dv2[9394], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9439] = -in11[3];
  memset(&SD->u1.f1.dv2[9440], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[9657] = -1.0;
  memset(&SD->u1.f1.dv2[9658], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9703] = 1.0;
  memset(&SD->u1.f1.dv2[9704], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9726] = -in11[3];
  memset(&SD->u1.f1.dv2[9727], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9772] = -in11[3];
  memset(&SD->u1.f1.dv2[9773], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[9990] = -1.0;
  memset(&SD->u1.f1.dv2[9991], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10036] = 1.0;
  memset(&SD->u1.f1.dv2[10037], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10059] = -in11[3];
  memset(&SD->u1.f1.dv2[10060], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10105] = -in11[3];
  memset(&SD->u1.f1.dv2[10106], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[10323] = -1.0;
  memset(&SD->u1.f1.dv2[10324], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10369] = 1.0;
  memset(&SD->u1.f1.dv2[10370], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10392] = -in11[3];
  memset(&SD->u1.f1.dv2[10393], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10438] = -in11[3];
  memset(&SD->u1.f1.dv2[10439], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[10656] = -1.0;
  memset(&SD->u1.f1.dv2[10657], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10702] = 1.0;
  memset(&SD->u1.f1.dv2[10703], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10725] = -in11[3];
  memset(&SD->u1.f1.dv2[10726], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10771] = -in11[3];
  memset(&SD->u1.f1.dv2[10772], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[10989] = -1.0;
  memset(&SD->u1.f1.dv2[10990], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11035] = 1.0;
  memset(&SD->u1.f1.dv2[11036], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11058] = -in11[3];
  memset(&SD->u1.f1.dv2[11059], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11104] = -in11[3];
  memset(&SD->u1.f1.dv2[11105], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[11322] = -1.0;
  memset(&SD->u1.f1.dv2[11323], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11368] = 1.0;
  memset(&SD->u1.f1.dv2[11369], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11391] = -in11[3];
  memset(&SD->u1.f1.dv2[11392], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11437] = -in11[3];
  memset(&SD->u1.f1.dv2[11438], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[11655] = -1.0;
  memset(&SD->u1.f1.dv2[11656], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11701] = 1.0;
  memset(&SD->u1.f1.dv2[11702], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11724] = -in11[3];
  memset(&SD->u1.f1.dv2[11725], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11770] = -in11[3];
  memset(&SD->u1.f1.dv2[11771], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[11988] = -1.0;
  memset(&SD->u1.f1.dv2[11989], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12034] = 1.0;
  memset(&SD->u1.f1.dv2[12035], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12057] = -in11[3];
  memset(&SD->u1.f1.dv2[12058], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12103] = -in11[3];
  memset(&SD->u1.f1.dv2[12104], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[12321] = -1.0;
  memset(&SD->u1.f1.dv2[12322], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12367] = 1.0;
  memset(&SD->u1.f1.dv2[12368], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12390] = -in11[3];
  memset(&SD->u1.f1.dv2[12391], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12436] = -in11[3];
  memset(&SD->u1.f1.dv2[12437], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[12654] = -1.0;
  memset(&SD->u1.f1.dv2[12655], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12700] = 1.0;
  memset(&SD->u1.f1.dv2[12701], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12723] = -in11[3];
  memset(&SD->u1.f1.dv2[12724], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12769] = -in11[3];
  memset(&SD->u1.f1.dv2[12770], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[12987] = -1.0;
  memset(&SD->u1.f1.dv2[12988], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13033] = 1.0;
  memset(&SD->u1.f1.dv2[13034], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13056] = -in11[3];
  memset(&SD->u1.f1.dv2[13057], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13102] = -in11[3];
  memset(&SD->u1.f1.dv2[13103], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[13320] = -1.0;
  memset(&SD->u1.f1.dv2[13321], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13366] = 1.0;
  memset(&SD->u1.f1.dv2[13367], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13389] = -in11[3];
  memset(&SD->u1.f1.dv2[13390], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13435] = -in11[3];
  memset(&SD->u1.f1.dv2[13436], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[13653] = -1.0;
  memset(&SD->u1.f1.dv2[13654], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13699] = 1.0;
  memset(&SD->u1.f1.dv2[13700], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13722] = -in11[3];
  memset(&SD->u1.f1.dv2[13723], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13768] = -in11[3];
  memset(&SD->u1.f1.dv2[13769], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[13986] = -1.0;
  memset(&SD->u1.f1.dv2[13987], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14032] = 1.0;
  memset(&SD->u1.f1.dv2[14033], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14055] = -in11[3];
  memset(&SD->u1.f1.dv2[14056], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14101] = -in11[3];
  memset(&SD->u1.f1.dv2[14102], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[14319] = -1.0;
  memset(&SD->u1.f1.dv2[14320], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14365] = 1.0;
  memset(&SD->u1.f1.dv2[14366], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14388] = -in11[3];
  memset(&SD->u1.f1.dv2[14389], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14434] = -in11[3];
  memset(&SD->u1.f1.dv2[14435], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[14652] = -1.0;
  memset(&SD->u1.f1.dv2[14653], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14698] = 1.0;
  memset(&SD->u1.f1.dv2[14699], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14721] = -in11[3];
  memset(&SD->u1.f1.dv2[14722], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14767] = -in11[3];
  memset(&SD->u1.f1.dv2[14768], 0, 217U * sizeof(real_T));
  SD->u1.f1.dv2[14985] = -1.0;
  memset(&SD->u1.f1.dv2[14986], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15031] = 1.0;
  memset(&SD->u1.f1.dv2[15032], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15054] = -in11[3];
  memset(&SD->u1.f1.dv2[15055], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15100] = -in11[3];
  memset(&SD->u1.f1.dv2[15101], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[15272] = 1.0;
  memset(&SD->u1.f1.dv2[15273], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15318] = -1.0;
  memset(&SD->u1.f1.dv2[15319], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[15433] = 1.0;
  SD->u1.f1.dv2[15434] = -1.0;
  SD->u1.f1.dv2[15435] = 0.0;
  SD->u1.f1.dv2[15436] = 0.0;
  SD->u1.f1.dv2[15437] = 0.0;
  SD->u1.f1.dv2[15438] = 0.0;
  SD->u1.f1.dv2[15439] = 1.0;
  memset(&SD->u1.f1.dv2[15440], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15485] = -1.0;
  memset(&SD->u1.f1.dv2[15486], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[15606] = 1.0;
  memset(&SD->u1.f1.dv2[15607], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15652] = -1.0;
  memset(&SD->u1.f1.dv2[15653], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[15773] = 1.0;
  memset(&SD->u1.f1.dv2[15774], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15819] = -1.0;
  memset(&SD->u1.f1.dv2[15820], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[15940] = 1.0;
  memset(&SD->u1.f1.dv2[15941], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15986] = -1.0;
  memset(&SD->u1.f1.dv2[15987], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[16107] = 1.0;
  memset(&SD->u1.f1.dv2[16108], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16153] = -1.0;
  memset(&SD->u1.f1.dv2[16154], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[16274] = 1.0;
  memset(&SD->u1.f1.dv2[16275], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16320] = -1.0;
  memset(&SD->u1.f1.dv2[16321], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[16441] = 1.0;
  memset(&SD->u1.f1.dv2[16442], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16487] = -1.0;
  memset(&SD->u1.f1.dv2[16488], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[16608] = 1.0;
  memset(&SD->u1.f1.dv2[16609], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16654] = -1.0;
  memset(&SD->u1.f1.dv2[16655], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[16775] = 1.0;
  memset(&SD->u1.f1.dv2[16776], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16821] = -1.0;
  memset(&SD->u1.f1.dv2[16822], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[16942] = 1.0;
  memset(&SD->u1.f1.dv2[16943], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16988] = -1.0;
  memset(&SD->u1.f1.dv2[16989], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[17109] = 1.0;
  memset(&SD->u1.f1.dv2[17110], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17155] = -1.0;
  memset(&SD->u1.f1.dv2[17156], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[17276] = 1.0;
  memset(&SD->u1.f1.dv2[17277], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17322] = -1.0;
  memset(&SD->u1.f1.dv2[17323], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[17443] = 1.0;
  memset(&SD->u1.f1.dv2[17444], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17489] = -1.0;
  memset(&SD->u1.f1.dv2[17490], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[17610] = 1.0;
  memset(&SD->u1.f1.dv2[17611], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17656] = -1.0;
  memset(&SD->u1.f1.dv2[17657], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[17777] = 1.0;
  memset(&SD->u1.f1.dv2[17778], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17823] = -1.0;
  memset(&SD->u1.f1.dv2[17824], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[17944] = 1.0;
  memset(&SD->u1.f1.dv2[17945], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17990] = -1.0;
  memset(&SD->u1.f1.dv2[17991], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[18111] = 1.0;
  memset(&SD->u1.f1.dv2[18112], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18157] = -1.0;
  memset(&SD->u1.f1.dv2[18158], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[18278] = 1.0;
  memset(&SD->u1.f1.dv2[18279], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18324] = -1.0;
  memset(&SD->u1.f1.dv2[18325], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[18445] = 1.0;
  memset(&SD->u1.f1.dv2[18446], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18491] = -1.0;
  memset(&SD->u1.f1.dv2[18492], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[18612] = 1.0;
  memset(&SD->u1.f1.dv2[18613], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18658] = -1.0;
  memset(&SD->u1.f1.dv2[18659], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[18779] = 1.0;
  memset(&SD->u1.f1.dv2[18780], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18825] = -1.0;
  memset(&SD->u1.f1.dv2[18826], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[18946] = 1.0;
  memset(&SD->u1.f1.dv2[18947], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18992] = -1.0;
  memset(&SD->u1.f1.dv2[18993], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[19113] = 1.0;
  memset(&SD->u1.f1.dv2[19114], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19159] = -1.0;
  memset(&SD->u1.f1.dv2[19160], 0, 93U * sizeof(real_T));
  SD->u1.f1.dv2[19253] = 1.0;
  SD->u1.f1.dv2[19254] = -1.0;
  memset(&SD->u1.f1.dv2[19255], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[19280] = 1.0;
  memset(&SD->u1.f1.dv2[19281], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19326] = -1.0;
  memset(&SD->u1.f1.dv2[19327], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[19447] = 1.0;
  memset(&SD->u1.f1.dv2[19448], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19493] = -1.0;
  memset(&SD->u1.f1.dv2[19494], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[19614] = 1.0;
  memset(&SD->u1.f1.dv2[19615], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19660] = -1.0;
  memset(&SD->u1.f1.dv2[19661], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[19781] = 1.0;
  memset(&SD->u1.f1.dv2[19782], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19827] = -1.0;
  memset(&SD->u1.f1.dv2[19828], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[19948] = 1.0;
  memset(&SD->u1.f1.dv2[19949], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19994] = -1.0;
  memset(&SD->u1.f1.dv2[19995], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[20115] = 1.0;
  memset(&SD->u1.f1.dv2[20116], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20161] = -1.0;
  memset(&SD->u1.f1.dv2[20162], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[20282] = 1.0;
  memset(&SD->u1.f1.dv2[20283], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20328] = -1.0;
  memset(&SD->u1.f1.dv2[20329], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[20449] = 1.0;
  memset(&SD->u1.f1.dv2[20450], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20495] = -1.0;
  memset(&SD->u1.f1.dv2[20496], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[20616] = 1.0;
  memset(&SD->u1.f1.dv2[20617], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20662] = -1.0;
  memset(&SD->u1.f1.dv2[20663], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[20783] = 1.0;
  memset(&SD->u1.f1.dv2[20784], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20829] = -1.0;
  memset(&SD->u1.f1.dv2[20830], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[20950] = 1.0;
  memset(&SD->u1.f1.dv2[20951], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20996] = -1.0;
  memset(&SD->u1.f1.dv2[20997], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[21117] = 1.0;
  memset(&SD->u1.f1.dv2[21118], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21163] = -1.0;
  memset(&SD->u1.f1.dv2[21164], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[21284] = 1.0;
  memset(&SD->u1.f1.dv2[21285], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21330] = -1.0;
  memset(&SD->u1.f1.dv2[21331], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[21451] = 1.0;
  memset(&SD->u1.f1.dv2[21452], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21497] = -1.0;
  memset(&SD->u1.f1.dv2[21498], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[21618] = 1.0;
  memset(&SD->u1.f1.dv2[21619], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21664] = -1.0;
  memset(&SD->u1.f1.dv2[21665], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[21785] = 1.0;
  memset(&SD->u1.f1.dv2[21786], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21831] = -1.0;
  memset(&SD->u1.f1.dv2[21832], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[21952] = 1.0;
  memset(&SD->u1.f1.dv2[21953], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21998] = -1.0;
  memset(&SD->u1.f1.dv2[21999], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[22119] = 1.0;
  memset(&SD->u1.f1.dv2[22120], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22165] = -1.0;
  memset(&SD->u1.f1.dv2[22166], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[22286] = 1.0;
  memset(&SD->u1.f1.dv2[22287], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22332] = -1.0;
  memset(&SD->u1.f1.dv2[22333], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[22453] = 1.0;
  memset(&SD->u1.f1.dv2[22454], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22499] = -1.0;
  memset(&SD->u1.f1.dv2[22500], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[22620] = 1.0;
  memset(&SD->u1.f1.dv2[22621], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22666] = -1.0;
  memset(&SD->u1.f1.dv2[22667], 0, 120U * sizeof(real_T));
  SD->u1.f1.dv2[22787] = 1.0;
  memset(&SD->u1.f1.dv2[22788], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22833] = -1.0;
  memset(&SD->u1.f1.dv2[22834], 0, 903U * sizeof(real_T));
  SD->u1.f1.dv2[23737] = -1.0;
  memset(&SD->u1.f1.dv2[23738], 0, 613U * sizeof(real_T));
  SD->u1.f1.dv2[24351] = -1.0;
  memset(&SD->u1.f1.dv2[24352], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[24374] = -1.0;
  memset(&SD->u1.f1.dv2[24375], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[24518] = -1.0;
  memset(&SD->u1.f1.dv2[24519], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[24541] = -1.0;
  memset(&SD->u1.f1.dv2[24542], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[24685] = -1.0;
  memset(&SD->u1.f1.dv2[24686], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[24708] = -1.0;
  memset(&SD->u1.f1.dv2[24709], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[24852] = -1.0;
  memset(&SD->u1.f1.dv2[24853], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[24875] = -1.0;
  memset(&SD->u1.f1.dv2[24876], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[25019] = -1.0;
  memset(&SD->u1.f1.dv2[25020], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25042] = -1.0;
  memset(&SD->u1.f1.dv2[25043], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[25186] = -1.0;
  memset(&SD->u1.f1.dv2[25187], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25209] = -1.0;
  memset(&SD->u1.f1.dv2[25210], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[25353] = -1.0;
  memset(&SD->u1.f1.dv2[25354], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25376] = -1.0;
  memset(&SD->u1.f1.dv2[25377], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[25520] = -1.0;
  memset(&SD->u1.f1.dv2[25521], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25543] = -1.0;
  memset(&SD->u1.f1.dv2[25544], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[25687] = -1.0;
  memset(&SD->u1.f1.dv2[25688], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25710] = -1.0;
  memset(&SD->u1.f1.dv2[25711], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[25854] = -1.0;
  memset(&SD->u1.f1.dv2[25855], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25877] = -1.0;
  memset(&SD->u1.f1.dv2[25878], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[26021] = -1.0;
  memset(&SD->u1.f1.dv2[26022], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26044] = -1.0;
  memset(&SD->u1.f1.dv2[26045], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[26188] = -1.0;
  memset(&SD->u1.f1.dv2[26189], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26211] = -1.0;
  memset(&SD->u1.f1.dv2[26212], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[26355] = -1.0;
  memset(&SD->u1.f1.dv2[26356], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26378] = -1.0;
  memset(&SD->u1.f1.dv2[26379], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[26522] = -1.0;
  memset(&SD->u1.f1.dv2[26523], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26545] = -1.0;
  memset(&SD->u1.f1.dv2[26546], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[26689] = -1.0;
  memset(&SD->u1.f1.dv2[26690], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26712] = -1.0;
  memset(&SD->u1.f1.dv2[26713], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[26856] = -1.0;
  memset(&SD->u1.f1.dv2[26857], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26879] = -1.0;
  memset(&SD->u1.f1.dv2[26880], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[27023] = -1.0;
  memset(&SD->u1.f1.dv2[27024], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27046] = -1.0;
  memset(&SD->u1.f1.dv2[27047], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[27190] = -1.0;
  memset(&SD->u1.f1.dv2[27191], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27213] = -1.0;
  memset(&SD->u1.f1.dv2[27214], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[27357] = -1.0;
  memset(&SD->u1.f1.dv2[27358], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27380] = -1.0;
  memset(&SD->u1.f1.dv2[27381], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[27524] = -1.0;
  memset(&SD->u1.f1.dv2[27525], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27547] = -1.0;
  memset(&SD->u1.f1.dv2[27548], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[27691] = -1.0;
  memset(&SD->u1.f1.dv2[27692], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27714] = -1.0;
  memset(&SD->u1.f1.dv2[27715], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[27858] = -1.0;
  memset(&SD->u1.f1.dv2[27859], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27881] = -1.0;
  memset(&SD->u1.f1.dv2[27882], 0, 143U * sizeof(real_T));
  SD->u1.f1.dv2[28025] = -1.0;
  memset(&SD->u1.f1.dv2[28026], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28048] = -1.0;
  memset(&SD->u1.f1.dv2[28049], 0, 170U * sizeof(real_T));
  SD->u1.f1.dv2[28219] = 1.0;
  memset(&SD->u1.f1.dv2[28220], 0, 3813U * sizeof(real_T));
  SD->u1.f1.dv2[32033] = -1.0;
  SD->u1.f1.dv2[32034] = -1.0;
  memset(&SD->u1.f1.dv2[32035], 0, 1660U * sizeof(real_T));
  SD->u1.f1.dv2[33695] = -1.0;
  SD->u1.f1.dv2[33696] = -1.0;
  memset(&SD->u1.f1.dv2[33697], 0, 2823U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 166], &SD->u1.f1.dv2[i2 * 166], 166U * sizeof(real_T));
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

/* End of code generation (IqFast_RightStart9V40.cpp) */
