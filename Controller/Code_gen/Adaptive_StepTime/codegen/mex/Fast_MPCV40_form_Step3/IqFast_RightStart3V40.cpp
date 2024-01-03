/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart3V40.cpp
 *
 * Code generation for function 'IqFast_RightStart3V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step3.h"
#include "IqFast_RightStart3V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart3V40(Fast_MPCV40_form_Step3StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[41800], real_T biq[190])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART3V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART3V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 14:39:44 */
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
  memset(&SD->u1.f1.dv2[139], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[381] = -1.0;
  memset(&SD->u1.f1.dv2[382], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[427] = 1.0;
  memset(&SD->u1.f1.dv2[428], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[473] = -in11[2];
  memset(&SD->u1.f1.dv2[474], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[519] = -in11[2];
  memset(&SD->u1.f1.dv2[520], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[762] = -1.0;
  memset(&SD->u1.f1.dv2[763], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[808] = 1.0;
  memset(&SD->u1.f1.dv2[809], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[854] = -in11[2];
  memset(&SD->u1.f1.dv2[855], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[900] = -in11[2];
  memset(&SD->u1.f1.dv2[901], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[1143] = -1.0;
  memset(&SD->u1.f1.dv2[1144], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1189] = 1.0;
  memset(&SD->u1.f1.dv2[1190], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1235] = -in11[2];
  memset(&SD->u1.f1.dv2[1236], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1281] = -in11[2];
  memset(&SD->u1.f1.dv2[1282], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[1524] = -1.0;
  memset(&SD->u1.f1.dv2[1525], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1570] = 1.0;
  memset(&SD->u1.f1.dv2[1571], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1616] = -in11[2];
  memset(&SD->u1.f1.dv2[1617], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1662] = -in11[2];
  memset(&SD->u1.f1.dv2[1663], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[1905] = -1.0;
  memset(&SD->u1.f1.dv2[1906], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1951] = 1.0;
  memset(&SD->u1.f1.dv2[1952], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1997] = -in11[2];
  memset(&SD->u1.f1.dv2[1998], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2043] = -in11[2];
  memset(&SD->u1.f1.dv2[2044], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[2286] = -1.0;
  memset(&SD->u1.f1.dv2[2287], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2332] = 1.0;
  memset(&SD->u1.f1.dv2[2333], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2378] = -in11[2];
  memset(&SD->u1.f1.dv2[2379], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2424] = -in11[2];
  memset(&SD->u1.f1.dv2[2425], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[2667] = -1.0;
  memset(&SD->u1.f1.dv2[2668], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2713] = 1.0;
  memset(&SD->u1.f1.dv2[2714], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2759] = -in11[2];
  memset(&SD->u1.f1.dv2[2760], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2805] = -in11[2];
  memset(&SD->u1.f1.dv2[2806], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[3048] = -1.0;
  memset(&SD->u1.f1.dv2[3049], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3094] = 1.0;
  memset(&SD->u1.f1.dv2[3095], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3140] = -in11[2];
  memset(&SD->u1.f1.dv2[3141], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3186] = -in11[2];
  memset(&SD->u1.f1.dv2[3187], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[3429] = -1.0;
  memset(&SD->u1.f1.dv2[3430], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3475] = 1.0;
  memset(&SD->u1.f1.dv2[3476], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3521] = -in11[2];
  memset(&SD->u1.f1.dv2[3522], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3567] = -in11[2];
  memset(&SD->u1.f1.dv2[3568], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[3810] = -1.0;
  memset(&SD->u1.f1.dv2[3811], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3856] = 1.0;
  memset(&SD->u1.f1.dv2[3857], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3902] = -in11[2];
  memset(&SD->u1.f1.dv2[3903], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3948] = -in11[2];
  memset(&SD->u1.f1.dv2[3949], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[4191] = -1.0;
  memset(&SD->u1.f1.dv2[4192], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4237] = 1.0;
  memset(&SD->u1.f1.dv2[4238], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4283] = -in11[2];
  memset(&SD->u1.f1.dv2[4284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4329] = -in11[2];
  memset(&SD->u1.f1.dv2[4330], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[4572] = -1.0;
  memset(&SD->u1.f1.dv2[4573], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4618] = 1.0;
  memset(&SD->u1.f1.dv2[4619], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4664] = -in11[2];
  memset(&SD->u1.f1.dv2[4665], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4710] = -in11[2];
  memset(&SD->u1.f1.dv2[4711], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[4953] = -1.0;
  memset(&SD->u1.f1.dv2[4954], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4999] = 1.0;
  memset(&SD->u1.f1.dv2[5000], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5045] = -in11[2];
  memset(&SD->u1.f1.dv2[5046], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5091] = -in11[2];
  memset(&SD->u1.f1.dv2[5092], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[5334] = -1.0;
  memset(&SD->u1.f1.dv2[5335], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5380] = 1.0;
  memset(&SD->u1.f1.dv2[5381], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5426] = -in11[2];
  memset(&SD->u1.f1.dv2[5427], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5472] = -in11[2];
  memset(&SD->u1.f1.dv2[5473], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[5715] = -1.0;
  memset(&SD->u1.f1.dv2[5716], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5761] = 1.0;
  memset(&SD->u1.f1.dv2[5762], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5807] = -in11[2];
  memset(&SD->u1.f1.dv2[5808], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5853] = -in11[2];
  memset(&SD->u1.f1.dv2[5854], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[6096] = -1.0;
  memset(&SD->u1.f1.dv2[6097], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6142] = 1.0;
  memset(&SD->u1.f1.dv2[6143], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6188] = -in11[2];
  memset(&SD->u1.f1.dv2[6189], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6234] = -in11[2];
  memset(&SD->u1.f1.dv2[6235], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[6477] = -1.0;
  memset(&SD->u1.f1.dv2[6478], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6523] = 1.0;
  memset(&SD->u1.f1.dv2[6524], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6569] = -in11[2];
  memset(&SD->u1.f1.dv2[6570], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6615] = -in11[2];
  memset(&SD->u1.f1.dv2[6616], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[6858] = -1.0;
  memset(&SD->u1.f1.dv2[6859], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6904] = 1.0;
  memset(&SD->u1.f1.dv2[6905], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6950] = -in11[2];
  memset(&SD->u1.f1.dv2[6951], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6996] = -in11[2];
  memset(&SD->u1.f1.dv2[6997], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[7239] = -1.0;
  memset(&SD->u1.f1.dv2[7240], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7285] = 1.0;
  memset(&SD->u1.f1.dv2[7286], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7331] = -in11[2];
  memset(&SD->u1.f1.dv2[7332], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7377] = -in11[2];
  memset(&SD->u1.f1.dv2[7378], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[7620] = -1.0;
  memset(&SD->u1.f1.dv2[7621], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7666] = 1.0;
  memset(&SD->u1.f1.dv2[7667], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7712] = -in11[2];
  memset(&SD->u1.f1.dv2[7713], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7758] = -in11[2];
  memset(&SD->u1.f1.dv2[7759], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[8001] = -1.0;
  memset(&SD->u1.f1.dv2[8002], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8047] = 1.0;
  memset(&SD->u1.f1.dv2[8048], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8093] = -in11[2];
  memset(&SD->u1.f1.dv2[8094], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8139] = -in11[2];
  memset(&SD->u1.f1.dv2[8140], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[8382] = -1.0;
  memset(&SD->u1.f1.dv2[8383], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8428] = 1.0;
  memset(&SD->u1.f1.dv2[8429], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8474] = -in11[2];
  memset(&SD->u1.f1.dv2[8475], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8520] = -in11[2];
  memset(&SD->u1.f1.dv2[8521], 0, 242U * sizeof(real_T));
  SD->u1.f1.dv2[8763] = -1.0;
  memset(&SD->u1.f1.dv2[8764], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8809] = 1.0;
  memset(&SD->u1.f1.dv2[8810], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8832] = -in11[3];
  memset(&SD->u1.f1.dv2[8833], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8878] = -in11[3];
  memset(&SD->u1.f1.dv2[8879], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[9144] = -1.0;
  memset(&SD->u1.f1.dv2[9145], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9190] = 1.0;
  memset(&SD->u1.f1.dv2[9191], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9213] = -in11[3];
  memset(&SD->u1.f1.dv2[9214], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9259] = -in11[3];
  memset(&SD->u1.f1.dv2[9260], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[9525] = -1.0;
  memset(&SD->u1.f1.dv2[9526], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9571] = 1.0;
  memset(&SD->u1.f1.dv2[9572], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9594] = -in11[3];
  memset(&SD->u1.f1.dv2[9595], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9640] = -in11[3];
  memset(&SD->u1.f1.dv2[9641], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[9906] = -1.0;
  memset(&SD->u1.f1.dv2[9907], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9952] = 1.0;
  memset(&SD->u1.f1.dv2[9953], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9975] = -in11[3];
  memset(&SD->u1.f1.dv2[9976], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10021] = -in11[3];
  memset(&SD->u1.f1.dv2[10022], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[10287] = -1.0;
  memset(&SD->u1.f1.dv2[10288], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10333] = 1.0;
  memset(&SD->u1.f1.dv2[10334], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10356] = -in11[3];
  memset(&SD->u1.f1.dv2[10357], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10402] = -in11[3];
  memset(&SD->u1.f1.dv2[10403], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[10668] = -1.0;
  memset(&SD->u1.f1.dv2[10669], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10714] = 1.0;
  memset(&SD->u1.f1.dv2[10715], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10737] = -in11[3];
  memset(&SD->u1.f1.dv2[10738], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10783] = -in11[3];
  memset(&SD->u1.f1.dv2[10784], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[11049] = -1.0;
  memset(&SD->u1.f1.dv2[11050], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11095] = 1.0;
  memset(&SD->u1.f1.dv2[11096], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11118] = -in11[3];
  memset(&SD->u1.f1.dv2[11119], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11164] = -in11[3];
  memset(&SD->u1.f1.dv2[11165], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[11430] = -1.0;
  memset(&SD->u1.f1.dv2[11431], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11476] = 1.0;
  memset(&SD->u1.f1.dv2[11477], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11499] = -in11[3];
  memset(&SD->u1.f1.dv2[11500], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11545] = -in11[3];
  memset(&SD->u1.f1.dv2[11546], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[11811] = -1.0;
  memset(&SD->u1.f1.dv2[11812], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11857] = 1.0;
  memset(&SD->u1.f1.dv2[11858], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11880] = -in11[3];
  memset(&SD->u1.f1.dv2[11881], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11926] = -in11[3];
  memset(&SD->u1.f1.dv2[11927], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[12192] = -1.0;
  memset(&SD->u1.f1.dv2[12193], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12238] = 1.0;
  memset(&SD->u1.f1.dv2[12239], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12261] = -in11[3];
  memset(&SD->u1.f1.dv2[12262], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12307] = -in11[3];
  memset(&SD->u1.f1.dv2[12308], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[12573] = -1.0;
  memset(&SD->u1.f1.dv2[12574], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12619] = 1.0;
  memset(&SD->u1.f1.dv2[12620], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12642] = -in11[3];
  memset(&SD->u1.f1.dv2[12643], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12688] = -in11[3];
  memset(&SD->u1.f1.dv2[12689], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[12954] = -1.0;
  memset(&SD->u1.f1.dv2[12955], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13000] = 1.0;
  memset(&SD->u1.f1.dv2[13001], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13023] = -in11[3];
  memset(&SD->u1.f1.dv2[13024], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13069] = -in11[3];
  memset(&SD->u1.f1.dv2[13070], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[13335] = -1.0;
  memset(&SD->u1.f1.dv2[13336], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13381] = 1.0;
  memset(&SD->u1.f1.dv2[13382], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13404] = -in11[3];
  memset(&SD->u1.f1.dv2[13405], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13450] = -in11[3];
  memset(&SD->u1.f1.dv2[13451], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[13716] = -1.0;
  memset(&SD->u1.f1.dv2[13717], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13762] = 1.0;
  memset(&SD->u1.f1.dv2[13763], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13785] = -in11[3];
  memset(&SD->u1.f1.dv2[13786], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13831] = -in11[3];
  memset(&SD->u1.f1.dv2[13832], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[14097] = -1.0;
  memset(&SD->u1.f1.dv2[14098], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14143] = 1.0;
  memset(&SD->u1.f1.dv2[14144], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14166] = -in11[3];
  memset(&SD->u1.f1.dv2[14167], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14212] = -in11[3];
  memset(&SD->u1.f1.dv2[14213], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[14478] = -1.0;
  memset(&SD->u1.f1.dv2[14479], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14524] = 1.0;
  memset(&SD->u1.f1.dv2[14525], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14547] = -in11[3];
  memset(&SD->u1.f1.dv2[14548], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14593] = -in11[3];
  memset(&SD->u1.f1.dv2[14594], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[14859] = -1.0;
  memset(&SD->u1.f1.dv2[14860], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14905] = 1.0;
  memset(&SD->u1.f1.dv2[14906], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14928] = -in11[3];
  memset(&SD->u1.f1.dv2[14929], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14974] = -in11[3];
  memset(&SD->u1.f1.dv2[14975], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[15240] = -1.0;
  memset(&SD->u1.f1.dv2[15241], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15286] = 1.0;
  memset(&SD->u1.f1.dv2[15287], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15309] = -in11[3];
  memset(&SD->u1.f1.dv2[15310], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15355] = -in11[3];
  memset(&SD->u1.f1.dv2[15356], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[15621] = -1.0;
  memset(&SD->u1.f1.dv2[15622], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15667] = 1.0;
  memset(&SD->u1.f1.dv2[15668], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15690] = -in11[3];
  memset(&SD->u1.f1.dv2[15691], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15736] = -in11[3];
  memset(&SD->u1.f1.dv2[15737], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[16002] = -1.0;
  memset(&SD->u1.f1.dv2[16003], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16048] = 1.0;
  memset(&SD->u1.f1.dv2[16049], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16071] = -in11[3];
  memset(&SD->u1.f1.dv2[16072], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16117] = -in11[3];
  memset(&SD->u1.f1.dv2[16118], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[16383] = -1.0;
  memset(&SD->u1.f1.dv2[16384], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16429] = 1.0;
  memset(&SD->u1.f1.dv2[16430], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16452] = -in11[3];
  memset(&SD->u1.f1.dv2[16453], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16498] = -in11[3];
  memset(&SD->u1.f1.dv2[16499], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[16764] = -1.0;
  memset(&SD->u1.f1.dv2[16765], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16810] = 1.0;
  memset(&SD->u1.f1.dv2[16811], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16833] = -in11[3];
  memset(&SD->u1.f1.dv2[16834], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16879] = -in11[3];
  memset(&SD->u1.f1.dv2[16880], 0, 265U * sizeof(real_T));
  SD->u1.f1.dv2[17145] = -1.0;
  memset(&SD->u1.f1.dv2[17146], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17191] = 1.0;
  memset(&SD->u1.f1.dv2[17192], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17214] = -in11[3];
  memset(&SD->u1.f1.dv2[17215], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17260] = -in11[3];
  memset(&SD->u1.f1.dv2[17261], 0, 219U * sizeof(real_T));
  SD->u1.f1.dv2[17480] = 1.0;
  memset(&SD->u1.f1.dv2[17481], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17526] = -1.0;
  memset(&SD->u1.f1.dv2[17527], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17641] = 1.0;
  SD->u1.f1.dv2[17642] = 0.0;
  SD->u1.f1.dv2[17643] = 0.0;
  SD->u1.f1.dv2[17644] = 0.0;
  SD->u1.f1.dv2[17645] = 0.0;
  SD->u1.f1.dv2[17646] = 0.0;
  SD->u1.f1.dv2[17647] = 0.0;
  SD->u1.f1.dv2[17648] = -1.0;
  memset(&SD->u1.f1.dv2[17649], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17671] = 1.0;
  memset(&SD->u1.f1.dv2[17672], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17717] = -1.0;
  memset(&SD->u1.f1.dv2[17718], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17832] = 1.0;
  SD->u1.f1.dv2[17833] = 0.0;
  SD->u1.f1.dv2[17834] = 0.0;
  SD->u1.f1.dv2[17835] = 0.0;
  SD->u1.f1.dv2[17836] = 0.0;
  SD->u1.f1.dv2[17837] = 0.0;
  SD->u1.f1.dv2[17838] = 0.0;
  SD->u1.f1.dv2[17839] = -1.0;
  memset(&SD->u1.f1.dv2[17840], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17862] = 1.0;
  memset(&SD->u1.f1.dv2[17863], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17908] = -1.0;
  memset(&SD->u1.f1.dv2[17909], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18023] = 1.0;
  SD->u1.f1.dv2[18024] = 0.0;
  SD->u1.f1.dv2[18025] = 0.0;
  SD->u1.f1.dv2[18026] = 0.0;
  SD->u1.f1.dv2[18027] = 0.0;
  SD->u1.f1.dv2[18028] = 0.0;
  SD->u1.f1.dv2[18029] = 0.0;
  SD->u1.f1.dv2[18030] = -1.0;
  memset(&SD->u1.f1.dv2[18031], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[18053] = 1.0;
  memset(&SD->u1.f1.dv2[18054], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18099] = -1.0;
  memset(&SD->u1.f1.dv2[18100], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18214] = 1.0;
  SD->u1.f1.dv2[18215] = 0.0;
  SD->u1.f1.dv2[18216] = 0.0;
  SD->u1.f1.dv2[18217] = 0.0;
  SD->u1.f1.dv2[18218] = 0.0;
  SD->u1.f1.dv2[18219] = 0.0;
  SD->u1.f1.dv2[18220] = 0.0;
  SD->u1.f1.dv2[18221] = -1.0;
  memset(&SD->u1.f1.dv2[18222], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[18244] = 1.0;
  memset(&SD->u1.f1.dv2[18245], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18290] = -1.0;
  memset(&SD->u1.f1.dv2[18291], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18405] = 1.0;
  SD->u1.f1.dv2[18406] = 0.0;
  SD->u1.f1.dv2[18407] = 0.0;
  SD->u1.f1.dv2[18408] = 0.0;
  SD->u1.f1.dv2[18409] = 0.0;
  SD->u1.f1.dv2[18410] = 0.0;
  SD->u1.f1.dv2[18411] = 0.0;
  SD->u1.f1.dv2[18412] = -1.0;
  memset(&SD->u1.f1.dv2[18413], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[18435] = 1.0;
  memset(&SD->u1.f1.dv2[18436], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18481] = -1.0;
  memset(&SD->u1.f1.dv2[18482], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18596] = 1.0;
  SD->u1.f1.dv2[18597] = 0.0;
  SD->u1.f1.dv2[18598] = 0.0;
  SD->u1.f1.dv2[18599] = 0.0;
  SD->u1.f1.dv2[18600] = 0.0;
  SD->u1.f1.dv2[18601] = 0.0;
  SD->u1.f1.dv2[18602] = 0.0;
  SD->u1.f1.dv2[18603] = -1.0;
  memset(&SD->u1.f1.dv2[18604], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[18626] = 1.0;
  memset(&SD->u1.f1.dv2[18627], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18672] = -1.0;
  memset(&SD->u1.f1.dv2[18673], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18787] = 1.0;
  SD->u1.f1.dv2[18788] = 0.0;
  SD->u1.f1.dv2[18789] = 0.0;
  SD->u1.f1.dv2[18790] = 0.0;
  SD->u1.f1.dv2[18791] = 0.0;
  SD->u1.f1.dv2[18792] = 0.0;
  SD->u1.f1.dv2[18793] = 0.0;
  SD->u1.f1.dv2[18794] = -1.0;
  memset(&SD->u1.f1.dv2[18795], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[18817] = 1.0;
  memset(&SD->u1.f1.dv2[18818], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18863] = -1.0;
  memset(&SD->u1.f1.dv2[18864], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[19008] = 1.0;
  memset(&SD->u1.f1.dv2[19009], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19054] = -1.0;
  memset(&SD->u1.f1.dv2[19055], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[19199] = 1.0;
  memset(&SD->u1.f1.dv2[19200], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19245] = -1.0;
  memset(&SD->u1.f1.dv2[19246], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[19390] = 1.0;
  memset(&SD->u1.f1.dv2[19391], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19436] = -1.0;
  memset(&SD->u1.f1.dv2[19437], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[19581] = 1.0;
  memset(&SD->u1.f1.dv2[19582], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19627] = -1.0;
  memset(&SD->u1.f1.dv2[19628], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[19772] = 1.0;
  memset(&SD->u1.f1.dv2[19773], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19818] = -1.0;
  memset(&SD->u1.f1.dv2[19819], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[19963] = 1.0;
  memset(&SD->u1.f1.dv2[19964], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20009] = -1.0;
  memset(&SD->u1.f1.dv2[20010], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[20154] = 1.0;
  memset(&SD->u1.f1.dv2[20155], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20200] = -1.0;
  memset(&SD->u1.f1.dv2[20201], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[20345] = 1.0;
  memset(&SD->u1.f1.dv2[20346], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20391] = -1.0;
  memset(&SD->u1.f1.dv2[20392], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[20536] = 1.0;
  memset(&SD->u1.f1.dv2[20537], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20582] = -1.0;
  memset(&SD->u1.f1.dv2[20583], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[20727] = 1.0;
  memset(&SD->u1.f1.dv2[20728], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20773] = -1.0;
  memset(&SD->u1.f1.dv2[20774], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[20918] = 1.0;
  memset(&SD->u1.f1.dv2[20919], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20964] = -1.0;
  memset(&SD->u1.f1.dv2[20965], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[21109] = 1.0;
  memset(&SD->u1.f1.dv2[21110], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21155] = -1.0;
  memset(&SD->u1.f1.dv2[21156], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[21300] = 1.0;
  memset(&SD->u1.f1.dv2[21301], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21346] = -1.0;
  memset(&SD->u1.f1.dv2[21347], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[21491] = 1.0;
  memset(&SD->u1.f1.dv2[21492], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21537] = -1.0;
  memset(&SD->u1.f1.dv2[21538], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[21682] = 1.0;
  memset(&SD->u1.f1.dv2[21683], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21728] = -1.0;
  memset(&SD->u1.f1.dv2[21729], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[21873] = 1.0;
  memset(&SD->u1.f1.dv2[21874], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21919] = -1.0;
  memset(&SD->u1.f1.dv2[21920], 0, 105U * sizeof(real_T));
  SD->u1.f1.dv2[22025] = 1.0;
  SD->u1.f1.dv2[22026] = 0.0;
  SD->u1.f1.dv2[22027] = 0.0;
  SD->u1.f1.dv2[22028] = 0.0;
  SD->u1.f1.dv2[22029] = 0.0;
  SD->u1.f1.dv2[22030] = 0.0;
  SD->u1.f1.dv2[22031] = 0.0;
  SD->u1.f1.dv2[22032] = -1.0;
  memset(&SD->u1.f1.dv2[22033], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[22064] = 1.0;
  memset(&SD->u1.f1.dv2[22065], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22110] = -1.0;
  memset(&SD->u1.f1.dv2[22111], 0, 105U * sizeof(real_T));
  SD->u1.f1.dv2[22216] = 1.0;
  SD->u1.f1.dv2[22217] = 0.0;
  SD->u1.f1.dv2[22218] = 0.0;
  SD->u1.f1.dv2[22219] = 0.0;
  SD->u1.f1.dv2[22220] = 0.0;
  SD->u1.f1.dv2[22221] = 0.0;
  SD->u1.f1.dv2[22222] = 0.0;
  SD->u1.f1.dv2[22223] = -1.0;
  memset(&SD->u1.f1.dv2[22224], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[22255] = 1.0;
  memset(&SD->u1.f1.dv2[22256], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22301] = -1.0;
  memset(&SD->u1.f1.dv2[22302], 0, 105U * sizeof(real_T));
  SD->u1.f1.dv2[22407] = 1.0;
  SD->u1.f1.dv2[22408] = 0.0;
  SD->u1.f1.dv2[22409] = 0.0;
  SD->u1.f1.dv2[22410] = 0.0;
  SD->u1.f1.dv2[22411] = 0.0;
  SD->u1.f1.dv2[22412] = 0.0;
  SD->u1.f1.dv2[22413] = 0.0;
  SD->u1.f1.dv2[22414] = -1.0;
  memset(&SD->u1.f1.dv2[22415], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[22446] = 1.0;
  memset(&SD->u1.f1.dv2[22447], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22492] = -1.0;
  memset(&SD->u1.f1.dv2[22493], 0, 105U * sizeof(real_T));
  SD->u1.f1.dv2[22598] = 1.0;
  SD->u1.f1.dv2[22599] = 0.0;
  SD->u1.f1.dv2[22600] = 0.0;
  SD->u1.f1.dv2[22601] = 0.0;
  SD->u1.f1.dv2[22602] = 0.0;
  SD->u1.f1.dv2[22603] = 0.0;
  SD->u1.f1.dv2[22604] = 0.0;
  SD->u1.f1.dv2[22605] = -1.0;
  memset(&SD->u1.f1.dv2[22606], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[22637] = 1.0;
  memset(&SD->u1.f1.dv2[22638], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22683] = -1.0;
  memset(&SD->u1.f1.dv2[22684], 0, 105U * sizeof(real_T));
  SD->u1.f1.dv2[22789] = 1.0;
  SD->u1.f1.dv2[22790] = 0.0;
  SD->u1.f1.dv2[22791] = 0.0;
  SD->u1.f1.dv2[22792] = 0.0;
  SD->u1.f1.dv2[22793] = 0.0;
  SD->u1.f1.dv2[22794] = 0.0;
  SD->u1.f1.dv2[22795] = 0.0;
  SD->u1.f1.dv2[22796] = -1.0;
  memset(&SD->u1.f1.dv2[22797], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[22828] = 1.0;
  memset(&SD->u1.f1.dv2[22829], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22874] = -1.0;
  memset(&SD->u1.f1.dv2[22875], 0, 105U * sizeof(real_T));
  SD->u1.f1.dv2[22980] = 1.0;
  SD->u1.f1.dv2[22981] = 0.0;
  SD->u1.f1.dv2[22982] = 0.0;
  SD->u1.f1.dv2[22983] = 0.0;
  SD->u1.f1.dv2[22984] = 0.0;
  SD->u1.f1.dv2[22985] = 0.0;
  SD->u1.f1.dv2[22986] = 0.0;
  SD->u1.f1.dv2[22987] = -1.0;
  memset(&SD->u1.f1.dv2[22988], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[23019] = 1.0;
  memset(&SD->u1.f1.dv2[23020], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23065] = -1.0;
  memset(&SD->u1.f1.dv2[23066], 0, 105U * sizeof(real_T));
  SD->u1.f1.dv2[23171] = 1.0;
  SD->u1.f1.dv2[23172] = 0.0;
  SD->u1.f1.dv2[23173] = 0.0;
  SD->u1.f1.dv2[23174] = 0.0;
  SD->u1.f1.dv2[23175] = 0.0;
  SD->u1.f1.dv2[23176] = 0.0;
  SD->u1.f1.dv2[23177] = 0.0;
  SD->u1.f1.dv2[23178] = -1.0;
  memset(&SD->u1.f1.dv2[23179], 0, 31U * sizeof(real_T));
  SD->u1.f1.dv2[23210] = 1.0;
  memset(&SD->u1.f1.dv2[23211], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23256] = -1.0;
  memset(&SD->u1.f1.dv2[23257], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[23401] = 1.0;
  memset(&SD->u1.f1.dv2[23402], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23447] = -1.0;
  memset(&SD->u1.f1.dv2[23448], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[23592] = 1.0;
  memset(&SD->u1.f1.dv2[23593], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23638] = -1.0;
  memset(&SD->u1.f1.dv2[23639], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[23783] = 1.0;
  memset(&SD->u1.f1.dv2[23784], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23829] = -1.0;
  memset(&SD->u1.f1.dv2[23830], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[23974] = 1.0;
  memset(&SD->u1.f1.dv2[23975], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24020] = -1.0;
  memset(&SD->u1.f1.dv2[24021], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[24165] = 1.0;
  memset(&SD->u1.f1.dv2[24166], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24211] = -1.0;
  memset(&SD->u1.f1.dv2[24212], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[24356] = 1.0;
  memset(&SD->u1.f1.dv2[24357], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24402] = -1.0;
  memset(&SD->u1.f1.dv2[24403], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[24547] = 1.0;
  memset(&SD->u1.f1.dv2[24548], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24593] = -1.0;
  memset(&SD->u1.f1.dv2[24594], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[24738] = 1.0;
  memset(&SD->u1.f1.dv2[24739], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24784] = -1.0;
  memset(&SD->u1.f1.dv2[24785], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[24929] = 1.0;
  memset(&SD->u1.f1.dv2[24930], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24975] = -1.0;
  memset(&SD->u1.f1.dv2[24976], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[25120] = 1.0;
  memset(&SD->u1.f1.dv2[25121], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25166] = -1.0;
  memset(&SD->u1.f1.dv2[25167], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[25311] = 1.0;
  memset(&SD->u1.f1.dv2[25312], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25357] = -1.0;
  memset(&SD->u1.f1.dv2[25358], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[25502] = 1.0;
  memset(&SD->u1.f1.dv2[25503], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25548] = -1.0;
  memset(&SD->u1.f1.dv2[25549], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[25693] = 1.0;
  memset(&SD->u1.f1.dv2[25694], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25739] = -1.0;
  memset(&SD->u1.f1.dv2[25740], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[25884] = 1.0;
  memset(&SD->u1.f1.dv2[25885], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25930] = -1.0;
  memset(&SD->u1.f1.dv2[25931], 0, 144U * sizeof(real_T));
  SD->u1.f1.dv2[26075] = 1.0;
  memset(&SD->u1.f1.dv2[26076], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26121] = -1.0;
  memset(&SD->u1.f1.dv2[26122], 0, 1047U * sizeof(real_T));
  SD->u1.f1.dv2[27169] = -1.0;
  memset(&SD->u1.f1.dv2[27170], 0, 685U * sizeof(real_T));
  SD->u1.f1.dv2[27855] = -1.0;
  memset(&SD->u1.f1.dv2[27856], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27878] = -1.0;
  memset(&SD->u1.f1.dv2[27879], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[28046] = -1.0;
  memset(&SD->u1.f1.dv2[28047], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28069] = -1.0;
  memset(&SD->u1.f1.dv2[28070], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[28237] = -1.0;
  memset(&SD->u1.f1.dv2[28238], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28260] = -1.0;
  memset(&SD->u1.f1.dv2[28261], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[28428] = -1.0;
  memset(&SD->u1.f1.dv2[28429], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28451] = -1.0;
  memset(&SD->u1.f1.dv2[28452], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[28619] = -1.0;
  memset(&SD->u1.f1.dv2[28620], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28642] = -1.0;
  memset(&SD->u1.f1.dv2[28643], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[28810] = -1.0;
  memset(&SD->u1.f1.dv2[28811], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28833] = -1.0;
  memset(&SD->u1.f1.dv2[28834], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[29001] = -1.0;
  memset(&SD->u1.f1.dv2[29002], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29024] = -1.0;
  memset(&SD->u1.f1.dv2[29025], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[29192] = -1.0;
  memset(&SD->u1.f1.dv2[29193], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29215] = -1.0;
  memset(&SD->u1.f1.dv2[29216], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[29383] = -1.0;
  memset(&SD->u1.f1.dv2[29384], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29406] = -1.0;
  memset(&SD->u1.f1.dv2[29407], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[29574] = -1.0;
  memset(&SD->u1.f1.dv2[29575], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29597] = -1.0;
  memset(&SD->u1.f1.dv2[29598], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[29765] = -1.0;
  memset(&SD->u1.f1.dv2[29766], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29788] = -1.0;
  memset(&SD->u1.f1.dv2[29789], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[29956] = -1.0;
  memset(&SD->u1.f1.dv2[29957], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29979] = -1.0;
  memset(&SD->u1.f1.dv2[29980], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[30147] = -1.0;
  memset(&SD->u1.f1.dv2[30148], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30170] = -1.0;
  memset(&SD->u1.f1.dv2[30171], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[30338] = -1.0;
  memset(&SD->u1.f1.dv2[30339], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30361] = -1.0;
  memset(&SD->u1.f1.dv2[30362], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[30529] = -1.0;
  memset(&SD->u1.f1.dv2[30530], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30552] = -1.0;
  memset(&SD->u1.f1.dv2[30553], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[30720] = -1.0;
  memset(&SD->u1.f1.dv2[30721], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30743] = -1.0;
  memset(&SD->u1.f1.dv2[30744], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[30911] = -1.0;
  memset(&SD->u1.f1.dv2[30912], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30934] = -1.0;
  memset(&SD->u1.f1.dv2[30935], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[31102] = -1.0;
  memset(&SD->u1.f1.dv2[31103], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31125] = -1.0;
  memset(&SD->u1.f1.dv2[31126], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[31293] = -1.0;
  memset(&SD->u1.f1.dv2[31294], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31316] = -1.0;
  memset(&SD->u1.f1.dv2[31317], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[31484] = -1.0;
  memset(&SD->u1.f1.dv2[31485], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31507] = -1.0;
  memset(&SD->u1.f1.dv2[31508], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[31675] = -1.0;
  memset(&SD->u1.f1.dv2[31676], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31698] = -1.0;
  memset(&SD->u1.f1.dv2[31699], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[31866] = -1.0;
  memset(&SD->u1.f1.dv2[31867], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31889] = -1.0;
  memset(&SD->u1.f1.dv2[31890], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[32057] = -1.0;
  memset(&SD->u1.f1.dv2[32058], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32080] = -1.0;
  memset(&SD->u1.f1.dv2[32081], 0, 218U * sizeof(real_T));
  SD->u1.f1.dv2[32299] = 1.0;
  memset(&SD->u1.f1.dv2[32300], 0, 4341U * sizeof(real_T));
  SD->u1.f1.dv2[36641] = -1.0;
  SD->u1.f1.dv2[36642] = 0.0;
  SD->u1.f1.dv2[36643] = 0.0;
  SD->u1.f1.dv2[36644] = 0.0;
  SD->u1.f1.dv2[36645] = 0.0;
  SD->u1.f1.dv2[36646] = 0.0;
  SD->u1.f1.dv2[36647] = 0.0;
  SD->u1.f1.dv2[36648] = -1.0;
  memset(&SD->u1.f1.dv2[36649], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[36832] = -1.0;
  SD->u1.f1.dv2[36833] = 0.0;
  SD->u1.f1.dv2[36834] = 0.0;
  SD->u1.f1.dv2[36835] = 0.0;
  SD->u1.f1.dv2[36836] = 0.0;
  SD->u1.f1.dv2[36837] = 0.0;
  SD->u1.f1.dv2[36838] = 0.0;
  SD->u1.f1.dv2[36839] = -1.0;
  memset(&SD->u1.f1.dv2[36840], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[37023] = -1.0;
  SD->u1.f1.dv2[37024] = 0.0;
  SD->u1.f1.dv2[37025] = 0.0;
  SD->u1.f1.dv2[37026] = 0.0;
  SD->u1.f1.dv2[37027] = 0.0;
  SD->u1.f1.dv2[37028] = 0.0;
  SD->u1.f1.dv2[37029] = 0.0;
  SD->u1.f1.dv2[37030] = -1.0;
  memset(&SD->u1.f1.dv2[37031], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[37214] = -1.0;
  SD->u1.f1.dv2[37215] = 0.0;
  SD->u1.f1.dv2[37216] = 0.0;
  SD->u1.f1.dv2[37217] = 0.0;
  SD->u1.f1.dv2[37218] = 0.0;
  SD->u1.f1.dv2[37219] = 0.0;
  SD->u1.f1.dv2[37220] = 0.0;
  SD->u1.f1.dv2[37221] = -1.0;
  memset(&SD->u1.f1.dv2[37222], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[37405] = -1.0;
  SD->u1.f1.dv2[37406] = 0.0;
  SD->u1.f1.dv2[37407] = 0.0;
  SD->u1.f1.dv2[37408] = 0.0;
  SD->u1.f1.dv2[37409] = 0.0;
  SD->u1.f1.dv2[37410] = 0.0;
  SD->u1.f1.dv2[37411] = 0.0;
  SD->u1.f1.dv2[37412] = -1.0;
  memset(&SD->u1.f1.dv2[37413], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[37596] = -1.0;
  SD->u1.f1.dv2[37597] = 0.0;
  SD->u1.f1.dv2[37598] = 0.0;
  SD->u1.f1.dv2[37599] = 0.0;
  SD->u1.f1.dv2[37600] = 0.0;
  SD->u1.f1.dv2[37601] = 0.0;
  SD->u1.f1.dv2[37602] = 0.0;
  SD->u1.f1.dv2[37603] = -1.0;
  memset(&SD->u1.f1.dv2[37604], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[37787] = -1.0;
  SD->u1.f1.dv2[37788] = 0.0;
  SD->u1.f1.dv2[37789] = 0.0;
  SD->u1.f1.dv2[37790] = 0.0;
  SD->u1.f1.dv2[37791] = 0.0;
  SD->u1.f1.dv2[37792] = 0.0;
  SD->u1.f1.dv2[37793] = 0.0;
  SD->u1.f1.dv2[37794] = -1.0;
  memset(&SD->u1.f1.dv2[37795], 0, 760U * sizeof(real_T));
  SD->u1.f1.dv2[38555] = -1.0;
  SD->u1.f1.dv2[38556] = 0.0;
  SD->u1.f1.dv2[38557] = 0.0;
  SD->u1.f1.dv2[38558] = 0.0;
  SD->u1.f1.dv2[38559] = 0.0;
  SD->u1.f1.dv2[38560] = 0.0;
  SD->u1.f1.dv2[38561] = 0.0;
  SD->u1.f1.dv2[38562] = -1.0;
  memset(&SD->u1.f1.dv2[38563], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[38746] = -1.0;
  SD->u1.f1.dv2[38747] = 0.0;
  SD->u1.f1.dv2[38748] = 0.0;
  SD->u1.f1.dv2[38749] = 0.0;
  SD->u1.f1.dv2[38750] = 0.0;
  SD->u1.f1.dv2[38751] = 0.0;
  SD->u1.f1.dv2[38752] = 0.0;
  SD->u1.f1.dv2[38753] = -1.0;
  memset(&SD->u1.f1.dv2[38754], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[38937] = -1.0;
  SD->u1.f1.dv2[38938] = 0.0;
  SD->u1.f1.dv2[38939] = 0.0;
  SD->u1.f1.dv2[38940] = 0.0;
  SD->u1.f1.dv2[38941] = 0.0;
  SD->u1.f1.dv2[38942] = 0.0;
  SD->u1.f1.dv2[38943] = 0.0;
  SD->u1.f1.dv2[38944] = -1.0;
  memset(&SD->u1.f1.dv2[38945], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[39128] = -1.0;
  SD->u1.f1.dv2[39129] = 0.0;
  SD->u1.f1.dv2[39130] = 0.0;
  SD->u1.f1.dv2[39131] = 0.0;
  SD->u1.f1.dv2[39132] = 0.0;
  SD->u1.f1.dv2[39133] = 0.0;
  SD->u1.f1.dv2[39134] = 0.0;
  SD->u1.f1.dv2[39135] = -1.0;
  memset(&SD->u1.f1.dv2[39136], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[39319] = -1.0;
  SD->u1.f1.dv2[39320] = 0.0;
  SD->u1.f1.dv2[39321] = 0.0;
  SD->u1.f1.dv2[39322] = 0.0;
  SD->u1.f1.dv2[39323] = 0.0;
  SD->u1.f1.dv2[39324] = 0.0;
  SD->u1.f1.dv2[39325] = 0.0;
  SD->u1.f1.dv2[39326] = -1.0;
  memset(&SD->u1.f1.dv2[39327], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[39510] = -1.0;
  SD->u1.f1.dv2[39511] = 0.0;
  SD->u1.f1.dv2[39512] = 0.0;
  SD->u1.f1.dv2[39513] = 0.0;
  SD->u1.f1.dv2[39514] = 0.0;
  SD->u1.f1.dv2[39515] = 0.0;
  SD->u1.f1.dv2[39516] = 0.0;
  SD->u1.f1.dv2[39517] = -1.0;
  memset(&SD->u1.f1.dv2[39518], 0, 183U * sizeof(real_T));
  SD->u1.f1.dv2[39701] = -1.0;
  SD->u1.f1.dv2[39702] = 0.0;
  SD->u1.f1.dv2[39703] = 0.0;
  SD->u1.f1.dv2[39704] = 0.0;
  SD->u1.f1.dv2[39705] = 0.0;
  SD->u1.f1.dv2[39706] = 0.0;
  SD->u1.f1.dv2[39707] = 0.0;
  SD->u1.f1.dv2[39708] = -1.0;
  memset(&SD->u1.f1.dv2[39709], 0, 2091U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 190], &SD->u1.f1.dv2[i2 * 190], 190U * sizeof(real_T));
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
  biq[168] = t9;
  biq[169] = t9;
  biq[170] = t9;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t9;
  biq[174] = t9;
  biq[175] = t10;
  biq[176] = t10;
  biq[177] = t10;
  biq[178] = t10;
  biq[179] = t10;
  biq[180] = t10;
  biq[181] = t10;
  biq[182] = t11;
  biq[183] = t11;
  biq[184] = t11;
  biq[185] = t11;
  biq[186] = t11;
  biq[187] = t11;
  biq[188] = t11;
  biq[189] = -in9[1];
}

/* End of code generation (IqFast_RightStart3V40.cpp) */
