/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart6V40.cpp
 *
 * Code generation for function 'IqFast_RightStart6V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step6.h"
#include "IqFast_RightStart6V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart6V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart6V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart6V40(Fast_MPCV40_form_Step6StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[39160], real_T biq[178])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART6V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART6V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 15:12:09 */
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
  memset(&SD->u1.f1.dv2[139], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[357] = -1.0;
  memset(&SD->u1.f1.dv2[358], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[403] = 1.0;
  memset(&SD->u1.f1.dv2[404], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[449] = -in11[2];
  memset(&SD->u1.f1.dv2[450], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[495] = -in11[2];
  memset(&SD->u1.f1.dv2[496], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[714] = -1.0;
  memset(&SD->u1.f1.dv2[715], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[760] = 1.0;
  memset(&SD->u1.f1.dv2[761], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[806] = -in11[2];
  memset(&SD->u1.f1.dv2[807], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[852] = -in11[2];
  memset(&SD->u1.f1.dv2[853], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[1071] = -1.0;
  memset(&SD->u1.f1.dv2[1072], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1117] = 1.0;
  memset(&SD->u1.f1.dv2[1118], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1163] = -in11[2];
  memset(&SD->u1.f1.dv2[1164], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1209] = -in11[2];
  memset(&SD->u1.f1.dv2[1210], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[1428] = -1.0;
  memset(&SD->u1.f1.dv2[1429], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1474] = 1.0;
  memset(&SD->u1.f1.dv2[1475], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1520] = -in11[2];
  memset(&SD->u1.f1.dv2[1521], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1566] = -in11[2];
  memset(&SD->u1.f1.dv2[1567], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[1785] = -1.0;
  memset(&SD->u1.f1.dv2[1786], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1831] = 1.0;
  memset(&SD->u1.f1.dv2[1832], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1877] = -in11[2];
  memset(&SD->u1.f1.dv2[1878], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1923] = -in11[2];
  memset(&SD->u1.f1.dv2[1924], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[2142] = -1.0;
  memset(&SD->u1.f1.dv2[2143], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2188] = 1.0;
  memset(&SD->u1.f1.dv2[2189], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2234] = -in11[2];
  memset(&SD->u1.f1.dv2[2235], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2280] = -in11[2];
  memset(&SD->u1.f1.dv2[2281], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[2499] = -1.0;
  memset(&SD->u1.f1.dv2[2500], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2545] = 1.0;
  memset(&SD->u1.f1.dv2[2546], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2591] = -in11[2];
  memset(&SD->u1.f1.dv2[2592], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2637] = -in11[2];
  memset(&SD->u1.f1.dv2[2638], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[2856] = -1.0;
  memset(&SD->u1.f1.dv2[2857], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2902] = 1.0;
  memset(&SD->u1.f1.dv2[2903], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2948] = -in11[2];
  memset(&SD->u1.f1.dv2[2949], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2994] = -in11[2];
  memset(&SD->u1.f1.dv2[2995], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[3213] = -1.0;
  memset(&SD->u1.f1.dv2[3214], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3259] = 1.0;
  memset(&SD->u1.f1.dv2[3260], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3305] = -in11[2];
  memset(&SD->u1.f1.dv2[3306], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3351] = -in11[2];
  memset(&SD->u1.f1.dv2[3352], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[3570] = -1.0;
  memset(&SD->u1.f1.dv2[3571], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3616] = 1.0;
  memset(&SD->u1.f1.dv2[3617], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3662] = -in11[2];
  memset(&SD->u1.f1.dv2[3663], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3708] = -in11[2];
  memset(&SD->u1.f1.dv2[3709], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[3927] = -1.0;
  memset(&SD->u1.f1.dv2[3928], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3973] = 1.0;
  memset(&SD->u1.f1.dv2[3974], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4019] = -in11[2];
  memset(&SD->u1.f1.dv2[4020], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4065] = -in11[2];
  memset(&SD->u1.f1.dv2[4066], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[4284] = -1.0;
  memset(&SD->u1.f1.dv2[4285], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4330] = 1.0;
  memset(&SD->u1.f1.dv2[4331], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4376] = -in11[2];
  memset(&SD->u1.f1.dv2[4377], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4422] = -in11[2];
  memset(&SD->u1.f1.dv2[4423], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[4641] = -1.0;
  memset(&SD->u1.f1.dv2[4642], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4687] = 1.0;
  memset(&SD->u1.f1.dv2[4688], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4733] = -in11[2];
  memset(&SD->u1.f1.dv2[4734], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4779] = -in11[2];
  memset(&SD->u1.f1.dv2[4780], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[4998] = -1.0;
  memset(&SD->u1.f1.dv2[4999], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5044] = 1.0;
  memset(&SD->u1.f1.dv2[5045], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5090] = -in11[2];
  memset(&SD->u1.f1.dv2[5091], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5136] = -in11[2];
  memset(&SD->u1.f1.dv2[5137], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[5355] = -1.0;
  memset(&SD->u1.f1.dv2[5356], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5401] = 1.0;
  memset(&SD->u1.f1.dv2[5402], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5447] = -in11[2];
  memset(&SD->u1.f1.dv2[5448], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5493] = -in11[2];
  memset(&SD->u1.f1.dv2[5494], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[5712] = -1.0;
  memset(&SD->u1.f1.dv2[5713], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5758] = 1.0;
  memset(&SD->u1.f1.dv2[5759], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5804] = -in11[2];
  memset(&SD->u1.f1.dv2[5805], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5850] = -in11[2];
  memset(&SD->u1.f1.dv2[5851], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[6069] = -1.0;
  memset(&SD->u1.f1.dv2[6070], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6115] = 1.0;
  memset(&SD->u1.f1.dv2[6116], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6161] = -in11[2];
  memset(&SD->u1.f1.dv2[6162], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6207] = -in11[2];
  memset(&SD->u1.f1.dv2[6208], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[6426] = -1.0;
  memset(&SD->u1.f1.dv2[6427], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6472] = 1.0;
  memset(&SD->u1.f1.dv2[6473], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6518] = -in11[2];
  memset(&SD->u1.f1.dv2[6519], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6564] = -in11[2];
  memset(&SD->u1.f1.dv2[6565], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[6783] = -1.0;
  memset(&SD->u1.f1.dv2[6784], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6829] = 1.0;
  memset(&SD->u1.f1.dv2[6830], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6875] = -in11[2];
  memset(&SD->u1.f1.dv2[6876], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6921] = -in11[2];
  memset(&SD->u1.f1.dv2[6922], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[7140] = -1.0;
  memset(&SD->u1.f1.dv2[7141], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7186] = 1.0;
  memset(&SD->u1.f1.dv2[7187], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7232] = -in11[2];
  memset(&SD->u1.f1.dv2[7233], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7278] = -in11[2];
  memset(&SD->u1.f1.dv2[7279], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[7497] = -1.0;
  memset(&SD->u1.f1.dv2[7498], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7543] = 1.0;
  memset(&SD->u1.f1.dv2[7544], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7589] = -in11[2];
  memset(&SD->u1.f1.dv2[7590], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7635] = -in11[2];
  memset(&SD->u1.f1.dv2[7636], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[7854] = -1.0;
  memset(&SD->u1.f1.dv2[7855], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7900] = 1.0;
  memset(&SD->u1.f1.dv2[7901], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7946] = -in11[2];
  memset(&SD->u1.f1.dv2[7947], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7992] = -in11[2];
  memset(&SD->u1.f1.dv2[7993], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[8211] = -1.0;
  memset(&SD->u1.f1.dv2[8212], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8257] = 1.0;
  memset(&SD->u1.f1.dv2[8258], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8280] = -in11[3];
  memset(&SD->u1.f1.dv2[8281], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8326] = -in11[3];
  memset(&SD->u1.f1.dv2[8327], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[8568] = -1.0;
  memset(&SD->u1.f1.dv2[8569], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8614] = 1.0;
  memset(&SD->u1.f1.dv2[8615], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8637] = -in11[3];
  memset(&SD->u1.f1.dv2[8638], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8683] = -in11[3];
  memset(&SD->u1.f1.dv2[8684], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[8925] = -1.0;
  memset(&SD->u1.f1.dv2[8926], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8971] = 1.0;
  memset(&SD->u1.f1.dv2[8972], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8994] = -in11[3];
  memset(&SD->u1.f1.dv2[8995], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9040] = -in11[3];
  memset(&SD->u1.f1.dv2[9041], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[9282] = -1.0;
  memset(&SD->u1.f1.dv2[9283], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9328] = 1.0;
  memset(&SD->u1.f1.dv2[9329], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9351] = -in11[3];
  memset(&SD->u1.f1.dv2[9352], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9397] = -in11[3];
  memset(&SD->u1.f1.dv2[9398], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[9639] = -1.0;
  memset(&SD->u1.f1.dv2[9640], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9685] = 1.0;
  memset(&SD->u1.f1.dv2[9686], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9708] = -in11[3];
  memset(&SD->u1.f1.dv2[9709], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9754] = -in11[3];
  memset(&SD->u1.f1.dv2[9755], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[9996] = -1.0;
  memset(&SD->u1.f1.dv2[9997], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10042] = 1.0;
  memset(&SD->u1.f1.dv2[10043], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10065] = -in11[3];
  memset(&SD->u1.f1.dv2[10066], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10111] = -in11[3];
  memset(&SD->u1.f1.dv2[10112], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[10353] = -1.0;
  memset(&SD->u1.f1.dv2[10354], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10399] = 1.0;
  memset(&SD->u1.f1.dv2[10400], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10422] = -in11[3];
  memset(&SD->u1.f1.dv2[10423], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10468] = -in11[3];
  memset(&SD->u1.f1.dv2[10469], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[10710] = -1.0;
  memset(&SD->u1.f1.dv2[10711], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10756] = 1.0;
  memset(&SD->u1.f1.dv2[10757], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10779] = -in11[3];
  memset(&SD->u1.f1.dv2[10780], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10825] = -in11[3];
  memset(&SD->u1.f1.dv2[10826], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[11067] = -1.0;
  memset(&SD->u1.f1.dv2[11068], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11113] = 1.0;
  memset(&SD->u1.f1.dv2[11114], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11136] = -in11[3];
  memset(&SD->u1.f1.dv2[11137], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11182] = -in11[3];
  memset(&SD->u1.f1.dv2[11183], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[11424] = -1.0;
  memset(&SD->u1.f1.dv2[11425], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11470] = 1.0;
  memset(&SD->u1.f1.dv2[11471], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11493] = -in11[3];
  memset(&SD->u1.f1.dv2[11494], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11539] = -in11[3];
  memset(&SD->u1.f1.dv2[11540], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[11781] = -1.0;
  memset(&SD->u1.f1.dv2[11782], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11827] = 1.0;
  memset(&SD->u1.f1.dv2[11828], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11850] = -in11[3];
  memset(&SD->u1.f1.dv2[11851], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11896] = -in11[3];
  memset(&SD->u1.f1.dv2[11897], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[12138] = -1.0;
  memset(&SD->u1.f1.dv2[12139], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12184] = 1.0;
  memset(&SD->u1.f1.dv2[12185], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12207] = -in11[3];
  memset(&SD->u1.f1.dv2[12208], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12253] = -in11[3];
  memset(&SD->u1.f1.dv2[12254], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[12495] = -1.0;
  memset(&SD->u1.f1.dv2[12496], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12541] = 1.0;
  memset(&SD->u1.f1.dv2[12542], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12564] = -in11[3];
  memset(&SD->u1.f1.dv2[12565], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12610] = -in11[3];
  memset(&SD->u1.f1.dv2[12611], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[12852] = -1.0;
  memset(&SD->u1.f1.dv2[12853], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12898] = 1.0;
  memset(&SD->u1.f1.dv2[12899], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12921] = -in11[3];
  memset(&SD->u1.f1.dv2[12922], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12967] = -in11[3];
  memset(&SD->u1.f1.dv2[12968], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[13209] = -1.0;
  memset(&SD->u1.f1.dv2[13210], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13255] = 1.0;
  memset(&SD->u1.f1.dv2[13256], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13278] = -in11[3];
  memset(&SD->u1.f1.dv2[13279], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13324] = -in11[3];
  memset(&SD->u1.f1.dv2[13325], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[13566] = -1.0;
  memset(&SD->u1.f1.dv2[13567], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13612] = 1.0;
  memset(&SD->u1.f1.dv2[13613], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13635] = -in11[3];
  memset(&SD->u1.f1.dv2[13636], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13681] = -in11[3];
  memset(&SD->u1.f1.dv2[13682], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[13923] = -1.0;
  memset(&SD->u1.f1.dv2[13924], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13969] = 1.0;
  memset(&SD->u1.f1.dv2[13970], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13992] = -in11[3];
  memset(&SD->u1.f1.dv2[13993], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14038] = -in11[3];
  memset(&SD->u1.f1.dv2[14039], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[14280] = -1.0;
  memset(&SD->u1.f1.dv2[14281], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14326] = 1.0;
  memset(&SD->u1.f1.dv2[14327], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14349] = -in11[3];
  memset(&SD->u1.f1.dv2[14350], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14395] = -in11[3];
  memset(&SD->u1.f1.dv2[14396], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[14637] = -1.0;
  memset(&SD->u1.f1.dv2[14638], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14683] = 1.0;
  memset(&SD->u1.f1.dv2[14684], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14706] = -in11[3];
  memset(&SD->u1.f1.dv2[14707], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14752] = -in11[3];
  memset(&SD->u1.f1.dv2[14753], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[14994] = -1.0;
  memset(&SD->u1.f1.dv2[14995], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15040] = 1.0;
  memset(&SD->u1.f1.dv2[15041], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15063] = -in11[3];
  memset(&SD->u1.f1.dv2[15064], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15109] = -in11[3];
  memset(&SD->u1.f1.dv2[15110], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[15351] = -1.0;
  memset(&SD->u1.f1.dv2[15352], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15397] = 1.0;
  memset(&SD->u1.f1.dv2[15398], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15420] = -in11[3];
  memset(&SD->u1.f1.dv2[15421], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15466] = -in11[3];
  memset(&SD->u1.f1.dv2[15467], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[15708] = -1.0;
  memset(&SD->u1.f1.dv2[15709], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15754] = 1.0;
  memset(&SD->u1.f1.dv2[15755], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15777] = -in11[3];
  memset(&SD->u1.f1.dv2[15778], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15823] = -in11[3];
  memset(&SD->u1.f1.dv2[15824], 0, 241U * sizeof(real_T));
  SD->u1.f1.dv2[16065] = -1.0;
  memset(&SD->u1.f1.dv2[16066], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16111] = 1.0;
  memset(&SD->u1.f1.dv2[16112], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16134] = -in11[3];
  memset(&SD->u1.f1.dv2[16135], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16180] = -in11[3];
  memset(&SD->u1.f1.dv2[16181], 0, 195U * sizeof(real_T));
  SD->u1.f1.dv2[16376] = 1.0;
  memset(&SD->u1.f1.dv2[16377], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16422] = -1.0;
  memset(&SD->u1.f1.dv2[16423], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[16537] = 1.0;
  SD->u1.f1.dv2[16538] = 0.0;
  SD->u1.f1.dv2[16539] = 0.0;
  SD->u1.f1.dv2[16540] = 0.0;
  SD->u1.f1.dv2[16541] = -1.0;
  memset(&SD->u1.f1.dv2[16542], 0, 13U * sizeof(real_T));
  SD->u1.f1.dv2[16555] = 1.0;
  memset(&SD->u1.f1.dv2[16556], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16601] = -1.0;
  memset(&SD->u1.f1.dv2[16602], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[16716] = 1.0;
  SD->u1.f1.dv2[16717] = 0.0;
  SD->u1.f1.dv2[16718] = 0.0;
  SD->u1.f1.dv2[16719] = 0.0;
  SD->u1.f1.dv2[16720] = -1.0;
  memset(&SD->u1.f1.dv2[16721], 0, 13U * sizeof(real_T));
  SD->u1.f1.dv2[16734] = 1.0;
  memset(&SD->u1.f1.dv2[16735], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16780] = -1.0;
  memset(&SD->u1.f1.dv2[16781], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[16895] = 1.0;
  SD->u1.f1.dv2[16896] = 0.0;
  SD->u1.f1.dv2[16897] = 0.0;
  SD->u1.f1.dv2[16898] = 0.0;
  SD->u1.f1.dv2[16899] = -1.0;
  memset(&SD->u1.f1.dv2[16900], 0, 13U * sizeof(real_T));
  SD->u1.f1.dv2[16913] = 1.0;
  memset(&SD->u1.f1.dv2[16914], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16959] = -1.0;
  memset(&SD->u1.f1.dv2[16960], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17074] = 1.0;
  SD->u1.f1.dv2[17075] = 0.0;
  SD->u1.f1.dv2[17076] = 0.0;
  SD->u1.f1.dv2[17077] = 0.0;
  SD->u1.f1.dv2[17078] = -1.0;
  memset(&SD->u1.f1.dv2[17079], 0, 13U * sizeof(real_T));
  SD->u1.f1.dv2[17092] = 1.0;
  memset(&SD->u1.f1.dv2[17093], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17138] = -1.0;
  memset(&SD->u1.f1.dv2[17139], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[17271] = 1.0;
  memset(&SD->u1.f1.dv2[17272], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17317] = -1.0;
  memset(&SD->u1.f1.dv2[17318], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[17450] = 1.0;
  memset(&SD->u1.f1.dv2[17451], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17496] = -1.0;
  memset(&SD->u1.f1.dv2[17497], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[17629] = 1.0;
  memset(&SD->u1.f1.dv2[17630], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17675] = -1.0;
  memset(&SD->u1.f1.dv2[17676], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[17808] = 1.0;
  memset(&SD->u1.f1.dv2[17809], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17854] = -1.0;
  memset(&SD->u1.f1.dv2[17855], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[17987] = 1.0;
  memset(&SD->u1.f1.dv2[17988], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18033] = -1.0;
  memset(&SD->u1.f1.dv2[18034], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[18166] = 1.0;
  memset(&SD->u1.f1.dv2[18167], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18212] = -1.0;
  memset(&SD->u1.f1.dv2[18213], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[18345] = 1.0;
  memset(&SD->u1.f1.dv2[18346], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18391] = -1.0;
  memset(&SD->u1.f1.dv2[18392], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[18524] = 1.0;
  memset(&SD->u1.f1.dv2[18525], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18570] = -1.0;
  memset(&SD->u1.f1.dv2[18571], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[18703] = 1.0;
  memset(&SD->u1.f1.dv2[18704], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18749] = -1.0;
  memset(&SD->u1.f1.dv2[18750], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[18882] = 1.0;
  memset(&SD->u1.f1.dv2[18883], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18928] = -1.0;
  memset(&SD->u1.f1.dv2[18929], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[19061] = 1.0;
  memset(&SD->u1.f1.dv2[19062], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19107] = -1.0;
  memset(&SD->u1.f1.dv2[19108], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[19240] = 1.0;
  memset(&SD->u1.f1.dv2[19241], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19286] = -1.0;
  memset(&SD->u1.f1.dv2[19287], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[19419] = 1.0;
  memset(&SD->u1.f1.dv2[19420], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19465] = -1.0;
  memset(&SD->u1.f1.dv2[19466], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[19598] = 1.0;
  memset(&SD->u1.f1.dv2[19599], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19644] = -1.0;
  memset(&SD->u1.f1.dv2[19645], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[19777] = 1.0;
  memset(&SD->u1.f1.dv2[19778], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19823] = -1.0;
  memset(&SD->u1.f1.dv2[19824], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[19956] = 1.0;
  memset(&SD->u1.f1.dv2[19957], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20002] = -1.0;
  memset(&SD->u1.f1.dv2[20003], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[20135] = 1.0;
  memset(&SD->u1.f1.dv2[20136], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20181] = -1.0;
  memset(&SD->u1.f1.dv2[20182], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[20314] = 1.0;
  memset(&SD->u1.f1.dv2[20315], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20360] = -1.0;
  memset(&SD->u1.f1.dv2[20361], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[20493] = 1.0;
  memset(&SD->u1.f1.dv2[20494], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20539] = -1.0;
  memset(&SD->u1.f1.dv2[20540], 0, 99U * sizeof(real_T));
  SD->u1.f1.dv2[20639] = 1.0;
  SD->u1.f1.dv2[20640] = 0.0;
  SD->u1.f1.dv2[20641] = 0.0;
  SD->u1.f1.dv2[20642] = 0.0;
  SD->u1.f1.dv2[20643] = -1.0;
  memset(&SD->u1.f1.dv2[20644], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[20672] = 1.0;
  memset(&SD->u1.f1.dv2[20673], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20718] = -1.0;
  memset(&SD->u1.f1.dv2[20719], 0, 99U * sizeof(real_T));
  SD->u1.f1.dv2[20818] = 1.0;
  SD->u1.f1.dv2[20819] = 0.0;
  SD->u1.f1.dv2[20820] = 0.0;
  SD->u1.f1.dv2[20821] = 0.0;
  SD->u1.f1.dv2[20822] = -1.0;
  memset(&SD->u1.f1.dv2[20823], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[20851] = 1.0;
  memset(&SD->u1.f1.dv2[20852], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20897] = -1.0;
  memset(&SD->u1.f1.dv2[20898], 0, 99U * sizeof(real_T));
  SD->u1.f1.dv2[20997] = 1.0;
  SD->u1.f1.dv2[20998] = 0.0;
  SD->u1.f1.dv2[20999] = 0.0;
  SD->u1.f1.dv2[21000] = 0.0;
  SD->u1.f1.dv2[21001] = -1.0;
  memset(&SD->u1.f1.dv2[21002], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[21030] = 1.0;
  memset(&SD->u1.f1.dv2[21031], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21076] = -1.0;
  memset(&SD->u1.f1.dv2[21077], 0, 99U * sizeof(real_T));
  SD->u1.f1.dv2[21176] = 1.0;
  SD->u1.f1.dv2[21177] = 0.0;
  SD->u1.f1.dv2[21178] = 0.0;
  SD->u1.f1.dv2[21179] = 0.0;
  SD->u1.f1.dv2[21180] = -1.0;
  memset(&SD->u1.f1.dv2[21181], 0, 28U * sizeof(real_T));
  SD->u1.f1.dv2[21209] = 1.0;
  memset(&SD->u1.f1.dv2[21210], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21255] = -1.0;
  memset(&SD->u1.f1.dv2[21256], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[21388] = 1.0;
  memset(&SD->u1.f1.dv2[21389], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21434] = -1.0;
  memset(&SD->u1.f1.dv2[21435], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[21567] = 1.0;
  memset(&SD->u1.f1.dv2[21568], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21613] = -1.0;
  memset(&SD->u1.f1.dv2[21614], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[21746] = 1.0;
  memset(&SD->u1.f1.dv2[21747], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21792] = -1.0;
  memset(&SD->u1.f1.dv2[21793], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[21925] = 1.0;
  memset(&SD->u1.f1.dv2[21926], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21971] = -1.0;
  memset(&SD->u1.f1.dv2[21972], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[22104] = 1.0;
  memset(&SD->u1.f1.dv2[22105], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22150] = -1.0;
  memset(&SD->u1.f1.dv2[22151], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[22283] = 1.0;
  memset(&SD->u1.f1.dv2[22284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22329] = -1.0;
  memset(&SD->u1.f1.dv2[22330], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[22462] = 1.0;
  memset(&SD->u1.f1.dv2[22463], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22508] = -1.0;
  memset(&SD->u1.f1.dv2[22509], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[22641] = 1.0;
  memset(&SD->u1.f1.dv2[22642], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22687] = -1.0;
  memset(&SD->u1.f1.dv2[22688], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[22820] = 1.0;
  memset(&SD->u1.f1.dv2[22821], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22866] = -1.0;
  memset(&SD->u1.f1.dv2[22867], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[22999] = 1.0;
  memset(&SD->u1.f1.dv2[23000], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23045] = -1.0;
  memset(&SD->u1.f1.dv2[23046], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[23178] = 1.0;
  memset(&SD->u1.f1.dv2[23179], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23224] = -1.0;
  memset(&SD->u1.f1.dv2[23225], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[23357] = 1.0;
  memset(&SD->u1.f1.dv2[23358], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23403] = -1.0;
  memset(&SD->u1.f1.dv2[23404], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[23536] = 1.0;
  memset(&SD->u1.f1.dv2[23537], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23582] = -1.0;
  memset(&SD->u1.f1.dv2[23583], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[23715] = 1.0;
  memset(&SD->u1.f1.dv2[23716], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23761] = -1.0;
  memset(&SD->u1.f1.dv2[23762], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[23894] = 1.0;
  memset(&SD->u1.f1.dv2[23895], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23940] = -1.0;
  memset(&SD->u1.f1.dv2[23941], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[24073] = 1.0;
  memset(&SD->u1.f1.dv2[24074], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24119] = -1.0;
  memset(&SD->u1.f1.dv2[24120], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[24252] = 1.0;
  memset(&SD->u1.f1.dv2[24253], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24298] = -1.0;
  memset(&SD->u1.f1.dv2[24299], 0, 132U * sizeof(real_T));
  SD->u1.f1.dv2[24431] = 1.0;
  memset(&SD->u1.f1.dv2[24432], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24477] = -1.0;
  memset(&SD->u1.f1.dv2[24478], 0, 975U * sizeof(real_T));
  SD->u1.f1.dv2[25453] = -1.0;
  memset(&SD->u1.f1.dv2[25454], 0, 649U * sizeof(real_T));
  SD->u1.f1.dv2[26103] = -1.0;
  memset(&SD->u1.f1.dv2[26104], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26126] = -1.0;
  memset(&SD->u1.f1.dv2[26127], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[26282] = -1.0;
  memset(&SD->u1.f1.dv2[26283], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26305] = -1.0;
  memset(&SD->u1.f1.dv2[26306], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[26461] = -1.0;
  memset(&SD->u1.f1.dv2[26462], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26484] = -1.0;
  memset(&SD->u1.f1.dv2[26485], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[26640] = -1.0;
  memset(&SD->u1.f1.dv2[26641], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26663] = -1.0;
  memset(&SD->u1.f1.dv2[26664], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[26819] = -1.0;
  memset(&SD->u1.f1.dv2[26820], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26842] = -1.0;
  memset(&SD->u1.f1.dv2[26843], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[26998] = -1.0;
  memset(&SD->u1.f1.dv2[26999], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27021] = -1.0;
  memset(&SD->u1.f1.dv2[27022], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[27177] = -1.0;
  memset(&SD->u1.f1.dv2[27178], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27200] = -1.0;
  memset(&SD->u1.f1.dv2[27201], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[27356] = -1.0;
  memset(&SD->u1.f1.dv2[27357], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27379] = -1.0;
  memset(&SD->u1.f1.dv2[27380], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[27535] = -1.0;
  memset(&SD->u1.f1.dv2[27536], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27558] = -1.0;
  memset(&SD->u1.f1.dv2[27559], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[27714] = -1.0;
  memset(&SD->u1.f1.dv2[27715], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27737] = -1.0;
  memset(&SD->u1.f1.dv2[27738], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[27893] = -1.0;
  memset(&SD->u1.f1.dv2[27894], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27916] = -1.0;
  memset(&SD->u1.f1.dv2[27917], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[28072] = -1.0;
  memset(&SD->u1.f1.dv2[28073], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28095] = -1.0;
  memset(&SD->u1.f1.dv2[28096], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[28251] = -1.0;
  memset(&SD->u1.f1.dv2[28252], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28274] = -1.0;
  memset(&SD->u1.f1.dv2[28275], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[28430] = -1.0;
  memset(&SD->u1.f1.dv2[28431], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28453] = -1.0;
  memset(&SD->u1.f1.dv2[28454], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[28609] = -1.0;
  memset(&SD->u1.f1.dv2[28610], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28632] = -1.0;
  memset(&SD->u1.f1.dv2[28633], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[28788] = -1.0;
  memset(&SD->u1.f1.dv2[28789], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28811] = -1.0;
  memset(&SD->u1.f1.dv2[28812], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[28967] = -1.0;
  memset(&SD->u1.f1.dv2[28968], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28990] = -1.0;
  memset(&SD->u1.f1.dv2[28991], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[29146] = -1.0;
  memset(&SD->u1.f1.dv2[29147], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29169] = -1.0;
  memset(&SD->u1.f1.dv2[29170], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[29325] = -1.0;
  memset(&SD->u1.f1.dv2[29326], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29348] = -1.0;
  memset(&SD->u1.f1.dv2[29349], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[29504] = -1.0;
  memset(&SD->u1.f1.dv2[29505], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29527] = -1.0;
  memset(&SD->u1.f1.dv2[29528], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[29683] = -1.0;
  memset(&SD->u1.f1.dv2[29684], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29706] = -1.0;
  memset(&SD->u1.f1.dv2[29707], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[29862] = -1.0;
  memset(&SD->u1.f1.dv2[29863], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29885] = -1.0;
  memset(&SD->u1.f1.dv2[29886], 0, 155U * sizeof(real_T));
  SD->u1.f1.dv2[30041] = -1.0;
  memset(&SD->u1.f1.dv2[30042], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30064] = -1.0;
  memset(&SD->u1.f1.dv2[30065], 0, 194U * sizeof(real_T));
  SD->u1.f1.dv2[30259] = 1.0;
  memset(&SD->u1.f1.dv2[30260], 0, 4077U * sizeof(real_T));
  SD->u1.f1.dv2[34337] = -1.0;
  SD->u1.f1.dv2[34338] = 0.0;
  SD->u1.f1.dv2[34339] = 0.0;
  SD->u1.f1.dv2[34340] = 0.0;
  SD->u1.f1.dv2[34341] = -1.0;
  memset(&SD->u1.f1.dv2[34342], 0, 174U * sizeof(real_T));
  SD->u1.f1.dv2[34516] = -1.0;
  SD->u1.f1.dv2[34517] = 0.0;
  SD->u1.f1.dv2[34518] = 0.0;
  SD->u1.f1.dv2[34519] = 0.0;
  SD->u1.f1.dv2[34520] = -1.0;
  memset(&SD->u1.f1.dv2[34521], 0, 174U * sizeof(real_T));
  SD->u1.f1.dv2[34695] = -1.0;
  SD->u1.f1.dv2[34696] = 0.0;
  SD->u1.f1.dv2[34697] = 0.0;
  SD->u1.f1.dv2[34698] = 0.0;
  SD->u1.f1.dv2[34699] = -1.0;
  memset(&SD->u1.f1.dv2[34700], 0, 174U * sizeof(real_T));
  SD->u1.f1.dv2[34874] = -1.0;
  SD->u1.f1.dv2[34875] = 0.0;
  SD->u1.f1.dv2[34876] = 0.0;
  SD->u1.f1.dv2[34877] = 0.0;
  SD->u1.f1.dv2[34878] = -1.0;
  memset(&SD->u1.f1.dv2[34879], 0, 1246U * sizeof(real_T));
  SD->u1.f1.dv2[36125] = -1.0;
  SD->u1.f1.dv2[36126] = 0.0;
  SD->u1.f1.dv2[36127] = 0.0;
  SD->u1.f1.dv2[36128] = 0.0;
  SD->u1.f1.dv2[36129] = -1.0;
  memset(&SD->u1.f1.dv2[36130], 0, 174U * sizeof(real_T));
  SD->u1.f1.dv2[36304] = -1.0;
  SD->u1.f1.dv2[36305] = 0.0;
  SD->u1.f1.dv2[36306] = 0.0;
  SD->u1.f1.dv2[36307] = 0.0;
  SD->u1.f1.dv2[36308] = -1.0;
  memset(&SD->u1.f1.dv2[36309], 0, 174U * sizeof(real_T));
  SD->u1.f1.dv2[36483] = -1.0;
  SD->u1.f1.dv2[36484] = 0.0;
  SD->u1.f1.dv2[36485] = 0.0;
  SD->u1.f1.dv2[36486] = 0.0;
  SD->u1.f1.dv2[36487] = -1.0;
  memset(&SD->u1.f1.dv2[36488], 0, 174U * sizeof(real_T));
  SD->u1.f1.dv2[36662] = -1.0;
  SD->u1.f1.dv2[36663] = 0.0;
  SD->u1.f1.dv2[36664] = 0.0;
  SD->u1.f1.dv2[36665] = 0.0;
  SD->u1.f1.dv2[36666] = -1.0;
  memset(&SD->u1.f1.dv2[36667], 0, 2493U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 178], &SD->u1.f1.dv2[i2 * 178], 178U * sizeof(real_T));
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
  biq[165] = t9;
  biq[166] = t9;
  biq[167] = t9;
  biq[168] = t9;
  biq[169] = t10;
  biq[170] = t10;
  biq[171] = t10;
  biq[172] = t10;
  biq[173] = t11;
  biq[174] = t11;
  biq[175] = t11;
  biq[176] = t11;
  biq[177] = -in9[1];
}

/* End of code generation (IqFast_RightStart6V40.cpp) */
