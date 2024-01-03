/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart0V40.cpp
 *
 * Code generation for function 'IqFast_RightStart0V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step0.h"
#include "IqFast_RightStart0V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart0V40(Fast_MPCV40_form_Step0StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[44440], real_T biq[202])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART0V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART0V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 14:09:08 */
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
  memset(&SD->u1.f1.dv2[139], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[405] = -1.0;
  memset(&SD->u1.f1.dv2[406], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[451] = 1.0;
  memset(&SD->u1.f1.dv2[452], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[497] = -in11[2];
  memset(&SD->u1.f1.dv2[498], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[543] = -in11[2];
  memset(&SD->u1.f1.dv2[544], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[810] = -1.0;
  memset(&SD->u1.f1.dv2[811], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[856] = 1.0;
  memset(&SD->u1.f1.dv2[857], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[902] = -in11[2];
  memset(&SD->u1.f1.dv2[903], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[948] = -in11[2];
  memset(&SD->u1.f1.dv2[949], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[1215] = -1.0;
  memset(&SD->u1.f1.dv2[1216], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1261] = 1.0;
  memset(&SD->u1.f1.dv2[1262], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1307] = -in11[2];
  memset(&SD->u1.f1.dv2[1308], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1353] = -in11[2];
  memset(&SD->u1.f1.dv2[1354], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[1620] = -1.0;
  memset(&SD->u1.f1.dv2[1621], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1666] = 1.0;
  memset(&SD->u1.f1.dv2[1667], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1712] = -in11[2];
  memset(&SD->u1.f1.dv2[1713], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1758] = -in11[2];
  memset(&SD->u1.f1.dv2[1759], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[2025] = -1.0;
  memset(&SD->u1.f1.dv2[2026], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2071] = 1.0;
  memset(&SD->u1.f1.dv2[2072], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2117] = -in11[2];
  memset(&SD->u1.f1.dv2[2118], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2163] = -in11[2];
  memset(&SD->u1.f1.dv2[2164], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[2430] = -1.0;
  memset(&SD->u1.f1.dv2[2431], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2476] = 1.0;
  memset(&SD->u1.f1.dv2[2477], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2522] = -in11[2];
  memset(&SD->u1.f1.dv2[2523], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2568] = -in11[2];
  memset(&SD->u1.f1.dv2[2569], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[2835] = -1.0;
  memset(&SD->u1.f1.dv2[2836], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2881] = 1.0;
  memset(&SD->u1.f1.dv2[2882], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2927] = -in11[2];
  memset(&SD->u1.f1.dv2[2928], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2973] = -in11[2];
  memset(&SD->u1.f1.dv2[2974], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[3240] = -1.0;
  memset(&SD->u1.f1.dv2[3241], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3286] = 1.0;
  memset(&SD->u1.f1.dv2[3287], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3332] = -in11[2];
  memset(&SD->u1.f1.dv2[3333], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3378] = -in11[2];
  memset(&SD->u1.f1.dv2[3379], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[3645] = -1.0;
  memset(&SD->u1.f1.dv2[3646], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3691] = 1.0;
  memset(&SD->u1.f1.dv2[3692], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3737] = -in11[2];
  memset(&SD->u1.f1.dv2[3738], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3783] = -in11[2];
  memset(&SD->u1.f1.dv2[3784], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[4050] = -1.0;
  memset(&SD->u1.f1.dv2[4051], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4096] = 1.0;
  memset(&SD->u1.f1.dv2[4097], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4142] = -in11[2];
  memset(&SD->u1.f1.dv2[4143], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4188] = -in11[2];
  memset(&SD->u1.f1.dv2[4189], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[4455] = -1.0;
  memset(&SD->u1.f1.dv2[4456], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4501] = 1.0;
  memset(&SD->u1.f1.dv2[4502], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4547] = -in11[2];
  memset(&SD->u1.f1.dv2[4548], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4593] = -in11[2];
  memset(&SD->u1.f1.dv2[4594], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[4860] = -1.0;
  memset(&SD->u1.f1.dv2[4861], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4906] = 1.0;
  memset(&SD->u1.f1.dv2[4907], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4952] = -in11[2];
  memset(&SD->u1.f1.dv2[4953], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4998] = -in11[2];
  memset(&SD->u1.f1.dv2[4999], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[5265] = -1.0;
  memset(&SD->u1.f1.dv2[5266], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5311] = 1.0;
  memset(&SD->u1.f1.dv2[5312], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5357] = -in11[2];
  memset(&SD->u1.f1.dv2[5358], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5403] = -in11[2];
  memset(&SD->u1.f1.dv2[5404], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[5670] = -1.0;
  memset(&SD->u1.f1.dv2[5671], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5716] = 1.0;
  memset(&SD->u1.f1.dv2[5717], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5762] = -in11[2];
  memset(&SD->u1.f1.dv2[5763], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5808] = -in11[2];
  memset(&SD->u1.f1.dv2[5809], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[6075] = -1.0;
  memset(&SD->u1.f1.dv2[6076], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6121] = 1.0;
  memset(&SD->u1.f1.dv2[6122], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6167] = -in11[2];
  memset(&SD->u1.f1.dv2[6168], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6213] = -in11[2];
  memset(&SD->u1.f1.dv2[6214], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[6480] = -1.0;
  memset(&SD->u1.f1.dv2[6481], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6526] = 1.0;
  memset(&SD->u1.f1.dv2[6527], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6572] = -in11[2];
  memset(&SD->u1.f1.dv2[6573], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6618] = -in11[2];
  memset(&SD->u1.f1.dv2[6619], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[6885] = -1.0;
  memset(&SD->u1.f1.dv2[6886], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6931] = 1.0;
  memset(&SD->u1.f1.dv2[6932], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6977] = -in11[2];
  memset(&SD->u1.f1.dv2[6978], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7023] = -in11[2];
  memset(&SD->u1.f1.dv2[7024], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[7290] = -1.0;
  memset(&SD->u1.f1.dv2[7291], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7336] = 1.0;
  memset(&SD->u1.f1.dv2[7337], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7382] = -in11[2];
  memset(&SD->u1.f1.dv2[7383], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7428] = -in11[2];
  memset(&SD->u1.f1.dv2[7429], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[7695] = -1.0;
  memset(&SD->u1.f1.dv2[7696], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7741] = 1.0;
  memset(&SD->u1.f1.dv2[7742], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7787] = -in11[2];
  memset(&SD->u1.f1.dv2[7788], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7833] = -in11[2];
  memset(&SD->u1.f1.dv2[7834], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[8100] = -1.0;
  memset(&SD->u1.f1.dv2[8101], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8146] = 1.0;
  memset(&SD->u1.f1.dv2[8147], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8192] = -in11[2];
  memset(&SD->u1.f1.dv2[8193], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8238] = -in11[2];
  memset(&SD->u1.f1.dv2[8239], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[8505] = -1.0;
  memset(&SD->u1.f1.dv2[8506], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8551] = 1.0;
  memset(&SD->u1.f1.dv2[8552], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8597] = -in11[2];
  memset(&SD->u1.f1.dv2[8598], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8643] = -in11[2];
  memset(&SD->u1.f1.dv2[8644], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[8910] = -1.0;
  memset(&SD->u1.f1.dv2[8911], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8956] = 1.0;
  memset(&SD->u1.f1.dv2[8957], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9002] = -in11[2];
  memset(&SD->u1.f1.dv2[9003], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9048] = -in11[2];
  memset(&SD->u1.f1.dv2[9049], 0, 266U * sizeof(real_T));
  SD->u1.f1.dv2[9315] = -1.0;
  memset(&SD->u1.f1.dv2[9316], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9361] = 1.0;
  memset(&SD->u1.f1.dv2[9362], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9384] = -in11[3];
  memset(&SD->u1.f1.dv2[9385], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9430] = -in11[3];
  memset(&SD->u1.f1.dv2[9431], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[9720] = -1.0;
  memset(&SD->u1.f1.dv2[9721], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9766] = 1.0;
  memset(&SD->u1.f1.dv2[9767], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9789] = -in11[3];
  memset(&SD->u1.f1.dv2[9790], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9835] = -in11[3];
  memset(&SD->u1.f1.dv2[9836], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[10125] = -1.0;
  memset(&SD->u1.f1.dv2[10126], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10171] = 1.0;
  memset(&SD->u1.f1.dv2[10172], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10194] = -in11[3];
  memset(&SD->u1.f1.dv2[10195], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10240] = -in11[3];
  memset(&SD->u1.f1.dv2[10241], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[10530] = -1.0;
  memset(&SD->u1.f1.dv2[10531], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10576] = 1.0;
  memset(&SD->u1.f1.dv2[10577], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10599] = -in11[3];
  memset(&SD->u1.f1.dv2[10600], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10645] = -in11[3];
  memset(&SD->u1.f1.dv2[10646], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[10935] = -1.0;
  memset(&SD->u1.f1.dv2[10936], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10981] = 1.0;
  memset(&SD->u1.f1.dv2[10982], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11004] = -in11[3];
  memset(&SD->u1.f1.dv2[11005], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11050] = -in11[3];
  memset(&SD->u1.f1.dv2[11051], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[11340] = -1.0;
  memset(&SD->u1.f1.dv2[11341], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11386] = 1.0;
  memset(&SD->u1.f1.dv2[11387], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11409] = -in11[3];
  memset(&SD->u1.f1.dv2[11410], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11455] = -in11[3];
  memset(&SD->u1.f1.dv2[11456], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[11745] = -1.0;
  memset(&SD->u1.f1.dv2[11746], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11791] = 1.0;
  memset(&SD->u1.f1.dv2[11792], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11814] = -in11[3];
  memset(&SD->u1.f1.dv2[11815], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11860] = -in11[3];
  memset(&SD->u1.f1.dv2[11861], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[12150] = -1.0;
  memset(&SD->u1.f1.dv2[12151], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12196] = 1.0;
  memset(&SD->u1.f1.dv2[12197], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12219] = -in11[3];
  memset(&SD->u1.f1.dv2[12220], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12265] = -in11[3];
  memset(&SD->u1.f1.dv2[12266], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[12555] = -1.0;
  memset(&SD->u1.f1.dv2[12556], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12601] = 1.0;
  memset(&SD->u1.f1.dv2[12602], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12624] = -in11[3];
  memset(&SD->u1.f1.dv2[12625], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12670] = -in11[3];
  memset(&SD->u1.f1.dv2[12671], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[12960] = -1.0;
  memset(&SD->u1.f1.dv2[12961], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13006] = 1.0;
  memset(&SD->u1.f1.dv2[13007], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13029] = -in11[3];
  memset(&SD->u1.f1.dv2[13030], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13075] = -in11[3];
  memset(&SD->u1.f1.dv2[13076], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[13365] = -1.0;
  memset(&SD->u1.f1.dv2[13366], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13411] = 1.0;
  memset(&SD->u1.f1.dv2[13412], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13434] = -in11[3];
  memset(&SD->u1.f1.dv2[13435], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13480] = -in11[3];
  memset(&SD->u1.f1.dv2[13481], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[13770] = -1.0;
  memset(&SD->u1.f1.dv2[13771], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13816] = 1.0;
  memset(&SD->u1.f1.dv2[13817], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13839] = -in11[3];
  memset(&SD->u1.f1.dv2[13840], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13885] = -in11[3];
  memset(&SD->u1.f1.dv2[13886], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[14175] = -1.0;
  memset(&SD->u1.f1.dv2[14176], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14221] = 1.0;
  memset(&SD->u1.f1.dv2[14222], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14244] = -in11[3];
  memset(&SD->u1.f1.dv2[14245], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14290] = -in11[3];
  memset(&SD->u1.f1.dv2[14291], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[14580] = -1.0;
  memset(&SD->u1.f1.dv2[14581], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14626] = 1.0;
  memset(&SD->u1.f1.dv2[14627], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14649] = -in11[3];
  memset(&SD->u1.f1.dv2[14650], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14695] = -in11[3];
  memset(&SD->u1.f1.dv2[14696], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[14985] = -1.0;
  memset(&SD->u1.f1.dv2[14986], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15031] = 1.0;
  memset(&SD->u1.f1.dv2[15032], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15054] = -in11[3];
  memset(&SD->u1.f1.dv2[15055], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15100] = -in11[3];
  memset(&SD->u1.f1.dv2[15101], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[15390] = -1.0;
  memset(&SD->u1.f1.dv2[15391], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15436] = 1.0;
  memset(&SD->u1.f1.dv2[15437], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15459] = -in11[3];
  memset(&SD->u1.f1.dv2[15460], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15505] = -in11[3];
  memset(&SD->u1.f1.dv2[15506], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[15795] = -1.0;
  memset(&SD->u1.f1.dv2[15796], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15841] = 1.0;
  memset(&SD->u1.f1.dv2[15842], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15864] = -in11[3];
  memset(&SD->u1.f1.dv2[15865], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15910] = -in11[3];
  memset(&SD->u1.f1.dv2[15911], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[16200] = -1.0;
  memset(&SD->u1.f1.dv2[16201], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16246] = 1.0;
  memset(&SD->u1.f1.dv2[16247], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16269] = -in11[3];
  memset(&SD->u1.f1.dv2[16270], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16315] = -in11[3];
  memset(&SD->u1.f1.dv2[16316], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[16605] = -1.0;
  memset(&SD->u1.f1.dv2[16606], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16651] = 1.0;
  memset(&SD->u1.f1.dv2[16652], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16674] = -in11[3];
  memset(&SD->u1.f1.dv2[16675], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16720] = -in11[3];
  memset(&SD->u1.f1.dv2[16721], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[17010] = -1.0;
  memset(&SD->u1.f1.dv2[17011], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17056] = 1.0;
  memset(&SD->u1.f1.dv2[17057], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17079] = -in11[3];
  memset(&SD->u1.f1.dv2[17080], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17125] = -in11[3];
  memset(&SD->u1.f1.dv2[17126], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[17415] = -1.0;
  memset(&SD->u1.f1.dv2[17416], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17461] = 1.0;
  memset(&SD->u1.f1.dv2[17462], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17484] = -in11[3];
  memset(&SD->u1.f1.dv2[17485], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17530] = -in11[3];
  memset(&SD->u1.f1.dv2[17531], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[17820] = -1.0;
  memset(&SD->u1.f1.dv2[17821], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17866] = 1.0;
  memset(&SD->u1.f1.dv2[17867], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17889] = -in11[3];
  memset(&SD->u1.f1.dv2[17890], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17935] = -in11[3];
  memset(&SD->u1.f1.dv2[17936], 0, 289U * sizeof(real_T));
  SD->u1.f1.dv2[18225] = -1.0;
  memset(&SD->u1.f1.dv2[18226], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18271] = 1.0;
  memset(&SD->u1.f1.dv2[18272], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[18294] = -in11[3];
  memset(&SD->u1.f1.dv2[18295], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18340] = -in11[3];
  memset(&SD->u1.f1.dv2[18341], 0, 243U * sizeof(real_T));
  SD->u1.f1.dv2[18584] = 1.0;
  memset(&SD->u1.f1.dv2[18585], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18630] = -1.0;
  memset(&SD->u1.f1.dv2[18631], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18745] = 1.0;
  memset(&SD->u1.f1.dv2[18746], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[18755] = -1.0;
  memset(&SD->u1.f1.dv2[18756], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[18787] = 1.0;
  memset(&SD->u1.f1.dv2[18788], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18833] = -1.0;
  memset(&SD->u1.f1.dv2[18834], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18948] = 1.0;
  memset(&SD->u1.f1.dv2[18949], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[18958] = -1.0;
  memset(&SD->u1.f1.dv2[18959], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[18990] = 1.0;
  memset(&SD->u1.f1.dv2[18991], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19036] = -1.0;
  memset(&SD->u1.f1.dv2[19037], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19151] = 1.0;
  memset(&SD->u1.f1.dv2[19152], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[19161] = -1.0;
  memset(&SD->u1.f1.dv2[19162], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[19193] = 1.0;
  memset(&SD->u1.f1.dv2[19194], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19239] = -1.0;
  memset(&SD->u1.f1.dv2[19240], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19354] = 1.0;
  memset(&SD->u1.f1.dv2[19355], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[19364] = -1.0;
  memset(&SD->u1.f1.dv2[19365], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[19396] = 1.0;
  memset(&SD->u1.f1.dv2[19397], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19442] = -1.0;
  memset(&SD->u1.f1.dv2[19443], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19557] = 1.0;
  memset(&SD->u1.f1.dv2[19558], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[19567] = -1.0;
  memset(&SD->u1.f1.dv2[19568], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[19599] = 1.0;
  memset(&SD->u1.f1.dv2[19600], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19645] = -1.0;
  memset(&SD->u1.f1.dv2[19646], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19760] = 1.0;
  memset(&SD->u1.f1.dv2[19761], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[19770] = -1.0;
  memset(&SD->u1.f1.dv2[19771], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[19802] = 1.0;
  memset(&SD->u1.f1.dv2[19803], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19848] = -1.0;
  memset(&SD->u1.f1.dv2[19849], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19963] = 1.0;
  memset(&SD->u1.f1.dv2[19964], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[19973] = -1.0;
  memset(&SD->u1.f1.dv2[19974], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[20005] = 1.0;
  memset(&SD->u1.f1.dv2[20006], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20051] = -1.0;
  memset(&SD->u1.f1.dv2[20052], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[20166] = 1.0;
  memset(&SD->u1.f1.dv2[20167], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[20176] = -1.0;
  memset(&SD->u1.f1.dv2[20177], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[20208] = 1.0;
  memset(&SD->u1.f1.dv2[20209], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20254] = -1.0;
  memset(&SD->u1.f1.dv2[20255], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[20369] = 1.0;
  memset(&SD->u1.f1.dv2[20370], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[20379] = -1.0;
  memset(&SD->u1.f1.dv2[20380], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[20411] = 1.0;
  memset(&SD->u1.f1.dv2[20412], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20457] = -1.0;
  memset(&SD->u1.f1.dv2[20458], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[20572] = 1.0;
  memset(&SD->u1.f1.dv2[20573], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[20582] = -1.0;
  memset(&SD->u1.f1.dv2[20583], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[20614] = 1.0;
  memset(&SD->u1.f1.dv2[20615], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20660] = -1.0;
  memset(&SD->u1.f1.dv2[20661], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[20817] = 1.0;
  memset(&SD->u1.f1.dv2[20818], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20863] = -1.0;
  memset(&SD->u1.f1.dv2[20864], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[21020] = 1.0;
  memset(&SD->u1.f1.dv2[21021], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21066] = -1.0;
  memset(&SD->u1.f1.dv2[21067], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[21223] = 1.0;
  memset(&SD->u1.f1.dv2[21224], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21269] = -1.0;
  memset(&SD->u1.f1.dv2[21270], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[21426] = 1.0;
  memset(&SD->u1.f1.dv2[21427], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21472] = -1.0;
  memset(&SD->u1.f1.dv2[21473], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[21629] = 1.0;
  memset(&SD->u1.f1.dv2[21630], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21675] = -1.0;
  memset(&SD->u1.f1.dv2[21676], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[21832] = 1.0;
  memset(&SD->u1.f1.dv2[21833], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21878] = -1.0;
  memset(&SD->u1.f1.dv2[21879], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[22035] = 1.0;
  memset(&SD->u1.f1.dv2[22036], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22081] = -1.0;
  memset(&SD->u1.f1.dv2[22082], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[22238] = 1.0;
  memset(&SD->u1.f1.dv2[22239], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22284] = -1.0;
  memset(&SD->u1.f1.dv2[22285], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[22441] = 1.0;
  memset(&SD->u1.f1.dv2[22442], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22487] = -1.0;
  memset(&SD->u1.f1.dv2[22488], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[22644] = 1.0;
  memset(&SD->u1.f1.dv2[22645], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22690] = -1.0;
  memset(&SD->u1.f1.dv2[22691], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[22847] = 1.0;
  memset(&SD->u1.f1.dv2[22848], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22893] = -1.0;
  memset(&SD->u1.f1.dv2[22894], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[23050] = 1.0;
  memset(&SD->u1.f1.dv2[23051], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23096] = -1.0;
  memset(&SD->u1.f1.dv2[23097], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[23253] = 1.0;
  memset(&SD->u1.f1.dv2[23254], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23299] = -1.0;
  memset(&SD->u1.f1.dv2[23300], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[23411] = 1.0;
  memset(&SD->u1.f1.dv2[23412], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[23421] = -1.0;
  memset(&SD->u1.f1.dv2[23422], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[23456] = 1.0;
  memset(&SD->u1.f1.dv2[23457], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23502] = -1.0;
  memset(&SD->u1.f1.dv2[23503], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[23614] = 1.0;
  memset(&SD->u1.f1.dv2[23615], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[23624] = -1.0;
  memset(&SD->u1.f1.dv2[23625], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[23659] = 1.0;
  memset(&SD->u1.f1.dv2[23660], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23705] = -1.0;
  memset(&SD->u1.f1.dv2[23706], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[23817] = 1.0;
  memset(&SD->u1.f1.dv2[23818], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[23827] = -1.0;
  memset(&SD->u1.f1.dv2[23828], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[23862] = 1.0;
  memset(&SD->u1.f1.dv2[23863], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23908] = -1.0;
  memset(&SD->u1.f1.dv2[23909], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[24020] = 1.0;
  memset(&SD->u1.f1.dv2[24021], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[24030] = -1.0;
  memset(&SD->u1.f1.dv2[24031], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[24065] = 1.0;
  memset(&SD->u1.f1.dv2[24066], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24111] = -1.0;
  memset(&SD->u1.f1.dv2[24112], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[24223] = 1.0;
  memset(&SD->u1.f1.dv2[24224], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[24233] = -1.0;
  memset(&SD->u1.f1.dv2[24234], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[24268] = 1.0;
  memset(&SD->u1.f1.dv2[24269], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24314] = -1.0;
  memset(&SD->u1.f1.dv2[24315], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[24426] = 1.0;
  memset(&SD->u1.f1.dv2[24427], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[24436] = -1.0;
  memset(&SD->u1.f1.dv2[24437], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[24471] = 1.0;
  memset(&SD->u1.f1.dv2[24472], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24517] = -1.0;
  memset(&SD->u1.f1.dv2[24518], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[24629] = 1.0;
  memset(&SD->u1.f1.dv2[24630], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[24639] = -1.0;
  memset(&SD->u1.f1.dv2[24640], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[24674] = 1.0;
  memset(&SD->u1.f1.dv2[24675], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24720] = -1.0;
  memset(&SD->u1.f1.dv2[24721], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[24832] = 1.0;
  memset(&SD->u1.f1.dv2[24833], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[24842] = -1.0;
  memset(&SD->u1.f1.dv2[24843], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[24877] = 1.0;
  memset(&SD->u1.f1.dv2[24878], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24923] = -1.0;
  memset(&SD->u1.f1.dv2[24924], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[25035] = 1.0;
  memset(&SD->u1.f1.dv2[25036], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[25045] = -1.0;
  memset(&SD->u1.f1.dv2[25046], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[25080] = 1.0;
  memset(&SD->u1.f1.dv2[25081], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25126] = -1.0;
  memset(&SD->u1.f1.dv2[25127], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[25238] = 1.0;
  memset(&SD->u1.f1.dv2[25239], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[25248] = -1.0;
  memset(&SD->u1.f1.dv2[25249], 0, 34U * sizeof(real_T));
  SD->u1.f1.dv2[25283] = 1.0;
  memset(&SD->u1.f1.dv2[25284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25329] = -1.0;
  memset(&SD->u1.f1.dv2[25330], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[25486] = 1.0;
  memset(&SD->u1.f1.dv2[25487], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25532] = -1.0;
  memset(&SD->u1.f1.dv2[25533], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[25689] = 1.0;
  memset(&SD->u1.f1.dv2[25690], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25735] = -1.0;
  memset(&SD->u1.f1.dv2[25736], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[25892] = 1.0;
  memset(&SD->u1.f1.dv2[25893], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25938] = -1.0;
  memset(&SD->u1.f1.dv2[25939], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[26095] = 1.0;
  memset(&SD->u1.f1.dv2[26096], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26141] = -1.0;
  memset(&SD->u1.f1.dv2[26142], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[26298] = 1.0;
  memset(&SD->u1.f1.dv2[26299], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26344] = -1.0;
  memset(&SD->u1.f1.dv2[26345], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[26501] = 1.0;
  memset(&SD->u1.f1.dv2[26502], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26547] = -1.0;
  memset(&SD->u1.f1.dv2[26548], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[26704] = 1.0;
  memset(&SD->u1.f1.dv2[26705], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26750] = -1.0;
  memset(&SD->u1.f1.dv2[26751], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[26907] = 1.0;
  memset(&SD->u1.f1.dv2[26908], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26953] = -1.0;
  memset(&SD->u1.f1.dv2[26954], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[27110] = 1.0;
  memset(&SD->u1.f1.dv2[27111], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[27156] = -1.0;
  memset(&SD->u1.f1.dv2[27157], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[27313] = 1.0;
  memset(&SD->u1.f1.dv2[27314], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[27359] = -1.0;
  memset(&SD->u1.f1.dv2[27360], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[27516] = 1.0;
  memset(&SD->u1.f1.dv2[27517], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[27562] = -1.0;
  memset(&SD->u1.f1.dv2[27563], 0, 156U * sizeof(real_T));
  SD->u1.f1.dv2[27719] = 1.0;
  memset(&SD->u1.f1.dv2[27720], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[27765] = -1.0;
  memset(&SD->u1.f1.dv2[27766], 0, 1119U * sizeof(real_T));
  SD->u1.f1.dv2[28885] = -1.0;
  memset(&SD->u1.f1.dv2[28886], 0, 721U * sizeof(real_T));
  SD->u1.f1.dv2[29607] = -1.0;
  memset(&SD->u1.f1.dv2[29608], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29630] = -1.0;
  memset(&SD->u1.f1.dv2[29631], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[29810] = -1.0;
  memset(&SD->u1.f1.dv2[29811], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29833] = -1.0;
  memset(&SD->u1.f1.dv2[29834], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[30013] = -1.0;
  memset(&SD->u1.f1.dv2[30014], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30036] = -1.0;
  memset(&SD->u1.f1.dv2[30037], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[30216] = -1.0;
  memset(&SD->u1.f1.dv2[30217], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30239] = -1.0;
  memset(&SD->u1.f1.dv2[30240], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[30419] = -1.0;
  memset(&SD->u1.f1.dv2[30420], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30442] = -1.0;
  memset(&SD->u1.f1.dv2[30443], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[30622] = -1.0;
  memset(&SD->u1.f1.dv2[30623], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30645] = -1.0;
  memset(&SD->u1.f1.dv2[30646], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[30825] = -1.0;
  memset(&SD->u1.f1.dv2[30826], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30848] = -1.0;
  memset(&SD->u1.f1.dv2[30849], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[31028] = -1.0;
  memset(&SD->u1.f1.dv2[31029], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31051] = -1.0;
  memset(&SD->u1.f1.dv2[31052], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[31231] = -1.0;
  memset(&SD->u1.f1.dv2[31232], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31254] = -1.0;
  memset(&SD->u1.f1.dv2[31255], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[31434] = -1.0;
  memset(&SD->u1.f1.dv2[31435], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31457] = -1.0;
  memset(&SD->u1.f1.dv2[31458], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[31637] = -1.0;
  memset(&SD->u1.f1.dv2[31638], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31660] = -1.0;
  memset(&SD->u1.f1.dv2[31661], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[31840] = -1.0;
  memset(&SD->u1.f1.dv2[31841], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31863] = -1.0;
  memset(&SD->u1.f1.dv2[31864], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[32043] = -1.0;
  memset(&SD->u1.f1.dv2[32044], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32066] = -1.0;
  memset(&SD->u1.f1.dv2[32067], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[32246] = -1.0;
  memset(&SD->u1.f1.dv2[32247], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32269] = -1.0;
  memset(&SD->u1.f1.dv2[32270], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[32449] = -1.0;
  memset(&SD->u1.f1.dv2[32450], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32472] = -1.0;
  memset(&SD->u1.f1.dv2[32473], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[32652] = -1.0;
  memset(&SD->u1.f1.dv2[32653], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32675] = -1.0;
  memset(&SD->u1.f1.dv2[32676], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[32855] = -1.0;
  memset(&SD->u1.f1.dv2[32856], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32878] = -1.0;
  memset(&SD->u1.f1.dv2[32879], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[33058] = -1.0;
  memset(&SD->u1.f1.dv2[33059], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33081] = -1.0;
  memset(&SD->u1.f1.dv2[33082], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[33261] = -1.0;
  memset(&SD->u1.f1.dv2[33262], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33284] = -1.0;
  memset(&SD->u1.f1.dv2[33285], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[33464] = -1.0;
  memset(&SD->u1.f1.dv2[33465], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33487] = -1.0;
  memset(&SD->u1.f1.dv2[33488], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[33667] = -1.0;
  memset(&SD->u1.f1.dv2[33668], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33690] = -1.0;
  memset(&SD->u1.f1.dv2[33691], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[33870] = -1.0;
  memset(&SD->u1.f1.dv2[33871], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[33893] = -1.0;
  memset(&SD->u1.f1.dv2[33894], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[34073] = -1.0;
  memset(&SD->u1.f1.dv2[34074], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[34096] = -1.0;
  memset(&SD->u1.f1.dv2[34097], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[34339] = 1.0;
  memset(&SD->u1.f1.dv2[34340], 0, 4605U * sizeof(real_T));
  SD->u1.f1.dv2[38945] = -1.0;
  memset(&SD->u1.f1.dv2[38946], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[38955] = -1.0;
  memset(&SD->u1.f1.dv2[38956], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[39148] = -1.0;
  memset(&SD->u1.f1.dv2[39149], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[39158] = -1.0;
  memset(&SD->u1.f1.dv2[39159], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[39351] = -1.0;
  memset(&SD->u1.f1.dv2[39352], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[39361] = -1.0;
  memset(&SD->u1.f1.dv2[39362], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[39554] = -1.0;
  memset(&SD->u1.f1.dv2[39555], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[39564] = -1.0;
  memset(&SD->u1.f1.dv2[39565], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[39757] = -1.0;
  memset(&SD->u1.f1.dv2[39758], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[39767] = -1.0;
  memset(&SD->u1.f1.dv2[39768], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[39960] = -1.0;
  memset(&SD->u1.f1.dv2[39961], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[39970] = -1.0;
  memset(&SD->u1.f1.dv2[39971], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[40163] = -1.0;
  memset(&SD->u1.f1.dv2[40164], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[40173] = -1.0;
  memset(&SD->u1.f1.dv2[40174], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[40366] = -1.0;
  memset(&SD->u1.f1.dv2[40367], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[40376] = -1.0;
  memset(&SD->u1.f1.dv2[40377], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[40569] = -1.0;
  memset(&SD->u1.f1.dv2[40570], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[40579] = -1.0;
  memset(&SD->u1.f1.dv2[40580], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[40772] = -1.0;
  memset(&SD->u1.f1.dv2[40773], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[40782] = -1.0;
  memset(&SD->u1.f1.dv2[40783], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[40985] = -1.0;
  memset(&SD->u1.f1.dv2[40986], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[40995] = -1.0;
  memset(&SD->u1.f1.dv2[40996], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[41188] = -1.0;
  memset(&SD->u1.f1.dv2[41189], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[41198] = -1.0;
  memset(&SD->u1.f1.dv2[41199], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[41391] = -1.0;
  memset(&SD->u1.f1.dv2[41392], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[41401] = -1.0;
  memset(&SD->u1.f1.dv2[41402], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[41594] = -1.0;
  memset(&SD->u1.f1.dv2[41595], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[41604] = -1.0;
  memset(&SD->u1.f1.dv2[41605], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[41797] = -1.0;
  memset(&SD->u1.f1.dv2[41798], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[41807] = -1.0;
  memset(&SD->u1.f1.dv2[41808], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[42000] = -1.0;
  memset(&SD->u1.f1.dv2[42001], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[42010] = -1.0;
  memset(&SD->u1.f1.dv2[42011], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[42203] = -1.0;
  memset(&SD->u1.f1.dv2[42204], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[42213] = -1.0;
  memset(&SD->u1.f1.dv2[42214], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[42406] = -1.0;
  memset(&SD->u1.f1.dv2[42407], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[42416] = -1.0;
  memset(&SD->u1.f1.dv2[42417], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[42609] = -1.0;
  memset(&SD->u1.f1.dv2[42610], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[42619] = -1.0;
  memset(&SD->u1.f1.dv2[42620], 0, 192U * sizeof(real_T));
  SD->u1.f1.dv2[42812] = -1.0;
  memset(&SD->u1.f1.dv2[42813], 0, 9U * sizeof(real_T));
  SD->u1.f1.dv2[42822] = -1.0;
  memset(&SD->u1.f1.dv2[42823], 0, 1617U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 202], &SD->u1.f1.dv2[i2 * 202], 202U * sizeof(real_T));
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
  biq[170] = t3;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t9;
  biq[174] = t9;
  biq[175] = t9;
  biq[176] = t9;
  biq[177] = t9;
  biq[178] = t9;
  biq[179] = t9;
  biq[180] = t9;
  biq[181] = t10;
  biq[182] = t10;
  biq[183] = t10;
  biq[184] = t10;
  biq[185] = t10;
  biq[186] = t10;
  biq[187] = t10;
  biq[188] = t10;
  biq[189] = t10;
  biq[190] = t10;
  biq[191] = t11;
  biq[192] = t11;
  biq[193] = t11;
  biq[194] = t11;
  biq[195] = t11;
  biq[196] = t11;
  biq[197] = t11;
  biq[198] = t11;
  biq[199] = t11;
  biq[200] = t11;
  biq[201] = -in9[1];
}

/* End of code generation (IqFast_RightStart0V40.cpp) */
