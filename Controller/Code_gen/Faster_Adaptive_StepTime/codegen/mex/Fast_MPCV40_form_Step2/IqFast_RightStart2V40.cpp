/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart2V40.cpp
 *
 * Code generation for function 'IqFast_RightStart2V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step2.h"
#include "IqFast_RightStart2V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart2V40(Fast_MPCV40_form_Step2StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[42680], real_T biq[194])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART2V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART2V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 14:29:29 */
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
  memset(&SD->u1.f1.dv2[139], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[389] = -1.0;
  memset(&SD->u1.f1.dv2[390], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[435] = 1.0;
  memset(&SD->u1.f1.dv2[436], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[481] = -in11[2];
  memset(&SD->u1.f1.dv2[482], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[527] = -in11[2];
  memset(&SD->u1.f1.dv2[528], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[778] = -1.0;
  memset(&SD->u1.f1.dv2[779], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[824] = 1.0;
  memset(&SD->u1.f1.dv2[825], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[870] = -in11[2];
  memset(&SD->u1.f1.dv2[871], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[916] = -in11[2];
  memset(&SD->u1.f1.dv2[917], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[1167] = -1.0;
  memset(&SD->u1.f1.dv2[1168], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1213] = 1.0;
  memset(&SD->u1.f1.dv2[1214], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1259] = -in11[2];
  memset(&SD->u1.f1.dv2[1260], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1305] = -in11[2];
  memset(&SD->u1.f1.dv2[1306], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[1556] = -1.0;
  memset(&SD->u1.f1.dv2[1557], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1602] = 1.0;
  memset(&SD->u1.f1.dv2[1603], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1648] = -in11[2];
  memset(&SD->u1.f1.dv2[1649], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1694] = -in11[2];
  memset(&SD->u1.f1.dv2[1695], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[1945] = -1.0;
  memset(&SD->u1.f1.dv2[1946], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1991] = 1.0;
  memset(&SD->u1.f1.dv2[1992], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2037] = -in11[2];
  memset(&SD->u1.f1.dv2[2038], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2083] = -in11[2];
  memset(&SD->u1.f1.dv2[2084], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[2334] = -1.0;
  memset(&SD->u1.f1.dv2[2335], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2380] = 1.0;
  memset(&SD->u1.f1.dv2[2381], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2426] = -in11[2];
  memset(&SD->u1.f1.dv2[2427], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2472] = -in11[2];
  memset(&SD->u1.f1.dv2[2473], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[2723] = -1.0;
  memset(&SD->u1.f1.dv2[2724], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2769] = 1.0;
  memset(&SD->u1.f1.dv2[2770], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2815] = -in11[2];
  memset(&SD->u1.f1.dv2[2816], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2861] = -in11[2];
  memset(&SD->u1.f1.dv2[2862], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[3112] = -1.0;
  memset(&SD->u1.f1.dv2[3113], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3158] = 1.0;
  memset(&SD->u1.f1.dv2[3159], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3204] = -in11[2];
  memset(&SD->u1.f1.dv2[3205], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3250] = -in11[2];
  memset(&SD->u1.f1.dv2[3251], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[3501] = -1.0;
  memset(&SD->u1.f1.dv2[3502], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3547] = 1.0;
  memset(&SD->u1.f1.dv2[3548], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3593] = -in11[2];
  memset(&SD->u1.f1.dv2[3594], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3639] = -in11[2];
  memset(&SD->u1.f1.dv2[3640], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[3890] = -1.0;
  memset(&SD->u1.f1.dv2[3891], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3936] = 1.0;
  memset(&SD->u1.f1.dv2[3937], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3982] = -in11[2];
  memset(&SD->u1.f1.dv2[3983], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4028] = -in11[2];
  memset(&SD->u1.f1.dv2[4029], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[4279] = -1.0;
  memset(&SD->u1.f1.dv2[4280], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4325] = 1.0;
  memset(&SD->u1.f1.dv2[4326], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4371] = -in11[2];
  memset(&SD->u1.f1.dv2[4372], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4417] = -in11[2];
  memset(&SD->u1.f1.dv2[4418], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[4668] = -1.0;
  memset(&SD->u1.f1.dv2[4669], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4714] = 1.0;
  memset(&SD->u1.f1.dv2[4715], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4760] = -in11[2];
  memset(&SD->u1.f1.dv2[4761], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4806] = -in11[2];
  memset(&SD->u1.f1.dv2[4807], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[5057] = -1.0;
  memset(&SD->u1.f1.dv2[5058], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5103] = 1.0;
  memset(&SD->u1.f1.dv2[5104], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5149] = -in11[2];
  memset(&SD->u1.f1.dv2[5150], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5195] = -in11[2];
  memset(&SD->u1.f1.dv2[5196], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[5446] = -1.0;
  memset(&SD->u1.f1.dv2[5447], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5492] = 1.0;
  memset(&SD->u1.f1.dv2[5493], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5538] = -in11[2];
  memset(&SD->u1.f1.dv2[5539], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5584] = -in11[2];
  memset(&SD->u1.f1.dv2[5585], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[5835] = -1.0;
  memset(&SD->u1.f1.dv2[5836], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5881] = 1.0;
  memset(&SD->u1.f1.dv2[5882], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5927] = -in11[2];
  memset(&SD->u1.f1.dv2[5928], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5973] = -in11[2];
  memset(&SD->u1.f1.dv2[5974], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[6224] = -1.0;
  memset(&SD->u1.f1.dv2[6225], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6270] = 1.0;
  memset(&SD->u1.f1.dv2[6271], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6316] = -in11[2];
  memset(&SD->u1.f1.dv2[6317], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6362] = -in11[2];
  memset(&SD->u1.f1.dv2[6363], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[6613] = -1.0;
  memset(&SD->u1.f1.dv2[6614], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6659] = 1.0;
  memset(&SD->u1.f1.dv2[6660], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6705] = -in11[2];
  memset(&SD->u1.f1.dv2[6706], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6751] = -in11[2];
  memset(&SD->u1.f1.dv2[6752], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[7002] = -1.0;
  memset(&SD->u1.f1.dv2[7003], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7048] = 1.0;
  memset(&SD->u1.f1.dv2[7049], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7094] = -in11[2];
  memset(&SD->u1.f1.dv2[7095], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7140] = -in11[2];
  memset(&SD->u1.f1.dv2[7141], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[7391] = -1.0;
  memset(&SD->u1.f1.dv2[7392], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7437] = 1.0;
  memset(&SD->u1.f1.dv2[7438], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7483] = -in11[2];
  memset(&SD->u1.f1.dv2[7484], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7529] = -in11[2];
  memset(&SD->u1.f1.dv2[7530], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[7780] = -1.0;
  memset(&SD->u1.f1.dv2[7781], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7826] = 1.0;
  memset(&SD->u1.f1.dv2[7827], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7872] = -in11[2];
  memset(&SD->u1.f1.dv2[7873], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7918] = -in11[2];
  memset(&SD->u1.f1.dv2[7919], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[8169] = -1.0;
  memset(&SD->u1.f1.dv2[8170], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8215] = 1.0;
  memset(&SD->u1.f1.dv2[8216], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8261] = -in11[2];
  memset(&SD->u1.f1.dv2[8262], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8307] = -in11[2];
  memset(&SD->u1.f1.dv2[8308], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[8558] = -1.0;
  memset(&SD->u1.f1.dv2[8559], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8604] = 1.0;
  memset(&SD->u1.f1.dv2[8605], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8650] = -in11[2];
  memset(&SD->u1.f1.dv2[8651], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8696] = -in11[2];
  memset(&SD->u1.f1.dv2[8697], 0, 250U * sizeof(real_T));
  SD->u1.f1.dv2[8947] = -1.0;
  memset(&SD->u1.f1.dv2[8948], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8993] = 1.0;
  memset(&SD->u1.f1.dv2[8994], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9016] = -in11[3];
  memset(&SD->u1.f1.dv2[9017], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9062] = -in11[3];
  memset(&SD->u1.f1.dv2[9063], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[9336] = -1.0;
  memset(&SD->u1.f1.dv2[9337], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9382] = 1.0;
  memset(&SD->u1.f1.dv2[9383], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9405] = -in11[3];
  memset(&SD->u1.f1.dv2[9406], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9451] = -in11[3];
  memset(&SD->u1.f1.dv2[9452], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[9725] = -1.0;
  memset(&SD->u1.f1.dv2[9726], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9771] = 1.0;
  memset(&SD->u1.f1.dv2[9772], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9794] = -in11[3];
  memset(&SD->u1.f1.dv2[9795], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9840] = -in11[3];
  memset(&SD->u1.f1.dv2[9841], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[10114] = -1.0;
  memset(&SD->u1.f1.dv2[10115], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10160] = 1.0;
  memset(&SD->u1.f1.dv2[10161], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10183] = -in11[3];
  memset(&SD->u1.f1.dv2[10184], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10229] = -in11[3];
  memset(&SD->u1.f1.dv2[10230], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[10503] = -1.0;
  memset(&SD->u1.f1.dv2[10504], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10549] = 1.0;
  memset(&SD->u1.f1.dv2[10550], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10572] = -in11[3];
  memset(&SD->u1.f1.dv2[10573], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10618] = -in11[3];
  memset(&SD->u1.f1.dv2[10619], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[10892] = -1.0;
  memset(&SD->u1.f1.dv2[10893], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10938] = 1.0;
  memset(&SD->u1.f1.dv2[10939], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10961] = -in11[3];
  memset(&SD->u1.f1.dv2[10962], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11007] = -in11[3];
  memset(&SD->u1.f1.dv2[11008], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[11281] = -1.0;
  memset(&SD->u1.f1.dv2[11282], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11327] = 1.0;
  memset(&SD->u1.f1.dv2[11328], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11350] = -in11[3];
  memset(&SD->u1.f1.dv2[11351], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11396] = -in11[3];
  memset(&SD->u1.f1.dv2[11397], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[11670] = -1.0;
  memset(&SD->u1.f1.dv2[11671], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11716] = 1.0;
  memset(&SD->u1.f1.dv2[11717], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11739] = -in11[3];
  memset(&SD->u1.f1.dv2[11740], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11785] = -in11[3];
  memset(&SD->u1.f1.dv2[11786], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[12059] = -1.0;
  memset(&SD->u1.f1.dv2[12060], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12105] = 1.0;
  memset(&SD->u1.f1.dv2[12106], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12128] = -in11[3];
  memset(&SD->u1.f1.dv2[12129], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12174] = -in11[3];
  memset(&SD->u1.f1.dv2[12175], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[12448] = -1.0;
  memset(&SD->u1.f1.dv2[12449], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12494] = 1.0;
  memset(&SD->u1.f1.dv2[12495], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12517] = -in11[3];
  memset(&SD->u1.f1.dv2[12518], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12563] = -in11[3];
  memset(&SD->u1.f1.dv2[12564], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[12837] = -1.0;
  memset(&SD->u1.f1.dv2[12838], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12883] = 1.0;
  memset(&SD->u1.f1.dv2[12884], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12906] = -in11[3];
  memset(&SD->u1.f1.dv2[12907], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12952] = -in11[3];
  memset(&SD->u1.f1.dv2[12953], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[13226] = -1.0;
  memset(&SD->u1.f1.dv2[13227], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13272] = 1.0;
  memset(&SD->u1.f1.dv2[13273], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13295] = -in11[3];
  memset(&SD->u1.f1.dv2[13296], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13341] = -in11[3];
  memset(&SD->u1.f1.dv2[13342], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[13615] = -1.0;
  memset(&SD->u1.f1.dv2[13616], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13661] = 1.0;
  memset(&SD->u1.f1.dv2[13662], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13684] = -in11[3];
  memset(&SD->u1.f1.dv2[13685], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13730] = -in11[3];
  memset(&SD->u1.f1.dv2[13731], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[14004] = -1.0;
  memset(&SD->u1.f1.dv2[14005], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14050] = 1.0;
  memset(&SD->u1.f1.dv2[14051], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14073] = -in11[3];
  memset(&SD->u1.f1.dv2[14074], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14119] = -in11[3];
  memset(&SD->u1.f1.dv2[14120], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[14393] = -1.0;
  memset(&SD->u1.f1.dv2[14394], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14439] = 1.0;
  memset(&SD->u1.f1.dv2[14440], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14462] = -in11[3];
  memset(&SD->u1.f1.dv2[14463], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14508] = -in11[3];
  memset(&SD->u1.f1.dv2[14509], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[14782] = -1.0;
  memset(&SD->u1.f1.dv2[14783], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14828] = 1.0;
  memset(&SD->u1.f1.dv2[14829], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14851] = -in11[3];
  memset(&SD->u1.f1.dv2[14852], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14897] = -in11[3];
  memset(&SD->u1.f1.dv2[14898], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[15171] = -1.0;
  memset(&SD->u1.f1.dv2[15172], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15217] = 1.0;
  memset(&SD->u1.f1.dv2[15218], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15240] = -in11[3];
  memset(&SD->u1.f1.dv2[15241], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15286] = -in11[3];
  memset(&SD->u1.f1.dv2[15287], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[15560] = -1.0;
  memset(&SD->u1.f1.dv2[15561], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15606] = 1.0;
  memset(&SD->u1.f1.dv2[15607], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15629] = -in11[3];
  memset(&SD->u1.f1.dv2[15630], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15675] = -in11[3];
  memset(&SD->u1.f1.dv2[15676], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[15949] = -1.0;
  memset(&SD->u1.f1.dv2[15950], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15995] = 1.0;
  memset(&SD->u1.f1.dv2[15996], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16018] = -in11[3];
  memset(&SD->u1.f1.dv2[16019], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16064] = -in11[3];
  memset(&SD->u1.f1.dv2[16065], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[16338] = -1.0;
  memset(&SD->u1.f1.dv2[16339], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16384] = 1.0;
  memset(&SD->u1.f1.dv2[16385], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16407] = -in11[3];
  memset(&SD->u1.f1.dv2[16408], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16453] = -in11[3];
  memset(&SD->u1.f1.dv2[16454], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[16727] = -1.0;
  memset(&SD->u1.f1.dv2[16728], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16773] = 1.0;
  memset(&SD->u1.f1.dv2[16774], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16796] = -in11[3];
  memset(&SD->u1.f1.dv2[16797], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16842] = -in11[3];
  memset(&SD->u1.f1.dv2[16843], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[17116] = -1.0;
  memset(&SD->u1.f1.dv2[17117], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17162] = 1.0;
  memset(&SD->u1.f1.dv2[17163], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17185] = -in11[3];
  memset(&SD->u1.f1.dv2[17186], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17231] = -in11[3];
  memset(&SD->u1.f1.dv2[17232], 0, 273U * sizeof(real_T));
  SD->u1.f1.dv2[17505] = -1.0;
  memset(&SD->u1.f1.dv2[17506], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17551] = 1.0;
  memset(&SD->u1.f1.dv2[17552], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[17574] = -in11[3];
  memset(&SD->u1.f1.dv2[17575], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17620] = -in11[3];
  memset(&SD->u1.f1.dv2[17621], 0, 227U * sizeof(real_T));
  SD->u1.f1.dv2[17848] = 1.0;
  memset(&SD->u1.f1.dv2[17849], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17894] = -1.0;
  memset(&SD->u1.f1.dv2[17895], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18009] = 1.0;
  SD->u1.f1.dv2[18010] = 0.0;
  SD->u1.f1.dv2[18011] = 0.0;
  SD->u1.f1.dv2[18012] = 0.0;
  SD->u1.f1.dv2[18013] = 0.0;
  SD->u1.f1.dv2[18014] = 0.0;
  SD->u1.f1.dv2[18015] = 0.0;
  SD->u1.f1.dv2[18016] = 0.0;
  SD->u1.f1.dv2[18017] = -1.0;
  memset(&SD->u1.f1.dv2[18018], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[18043] = 1.0;
  memset(&SD->u1.f1.dv2[18044], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18089] = -1.0;
  memset(&SD->u1.f1.dv2[18090], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18204] = 1.0;
  SD->u1.f1.dv2[18205] = 0.0;
  SD->u1.f1.dv2[18206] = 0.0;
  SD->u1.f1.dv2[18207] = 0.0;
  SD->u1.f1.dv2[18208] = 0.0;
  SD->u1.f1.dv2[18209] = 0.0;
  SD->u1.f1.dv2[18210] = 0.0;
  SD->u1.f1.dv2[18211] = 0.0;
  SD->u1.f1.dv2[18212] = -1.0;
  memset(&SD->u1.f1.dv2[18213], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[18238] = 1.0;
  memset(&SD->u1.f1.dv2[18239], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18284] = -1.0;
  memset(&SD->u1.f1.dv2[18285], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18399] = 1.0;
  SD->u1.f1.dv2[18400] = 0.0;
  SD->u1.f1.dv2[18401] = 0.0;
  SD->u1.f1.dv2[18402] = 0.0;
  SD->u1.f1.dv2[18403] = 0.0;
  SD->u1.f1.dv2[18404] = 0.0;
  SD->u1.f1.dv2[18405] = 0.0;
  SD->u1.f1.dv2[18406] = 0.0;
  SD->u1.f1.dv2[18407] = -1.0;
  memset(&SD->u1.f1.dv2[18408], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[18433] = 1.0;
  memset(&SD->u1.f1.dv2[18434], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18479] = -1.0;
  memset(&SD->u1.f1.dv2[18480], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18594] = 1.0;
  SD->u1.f1.dv2[18595] = 0.0;
  SD->u1.f1.dv2[18596] = 0.0;
  SD->u1.f1.dv2[18597] = 0.0;
  SD->u1.f1.dv2[18598] = 0.0;
  SD->u1.f1.dv2[18599] = 0.0;
  SD->u1.f1.dv2[18600] = 0.0;
  SD->u1.f1.dv2[18601] = 0.0;
  SD->u1.f1.dv2[18602] = -1.0;
  memset(&SD->u1.f1.dv2[18603], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[18628] = 1.0;
  memset(&SD->u1.f1.dv2[18629], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18674] = -1.0;
  memset(&SD->u1.f1.dv2[18675], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18789] = 1.0;
  SD->u1.f1.dv2[18790] = 0.0;
  SD->u1.f1.dv2[18791] = 0.0;
  SD->u1.f1.dv2[18792] = 0.0;
  SD->u1.f1.dv2[18793] = 0.0;
  SD->u1.f1.dv2[18794] = 0.0;
  SD->u1.f1.dv2[18795] = 0.0;
  SD->u1.f1.dv2[18796] = 0.0;
  SD->u1.f1.dv2[18797] = -1.0;
  memset(&SD->u1.f1.dv2[18798], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[18823] = 1.0;
  memset(&SD->u1.f1.dv2[18824], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18869] = -1.0;
  memset(&SD->u1.f1.dv2[18870], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18984] = 1.0;
  SD->u1.f1.dv2[18985] = 0.0;
  SD->u1.f1.dv2[18986] = 0.0;
  SD->u1.f1.dv2[18987] = 0.0;
  SD->u1.f1.dv2[18988] = 0.0;
  SD->u1.f1.dv2[18989] = 0.0;
  SD->u1.f1.dv2[18990] = 0.0;
  SD->u1.f1.dv2[18991] = 0.0;
  SD->u1.f1.dv2[18992] = -1.0;
  memset(&SD->u1.f1.dv2[18993], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[19018] = 1.0;
  memset(&SD->u1.f1.dv2[19019], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19064] = -1.0;
  memset(&SD->u1.f1.dv2[19065], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19179] = 1.0;
  SD->u1.f1.dv2[19180] = 0.0;
  SD->u1.f1.dv2[19181] = 0.0;
  SD->u1.f1.dv2[19182] = 0.0;
  SD->u1.f1.dv2[19183] = 0.0;
  SD->u1.f1.dv2[19184] = 0.0;
  SD->u1.f1.dv2[19185] = 0.0;
  SD->u1.f1.dv2[19186] = 0.0;
  SD->u1.f1.dv2[19187] = -1.0;
  memset(&SD->u1.f1.dv2[19188], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[19213] = 1.0;
  memset(&SD->u1.f1.dv2[19214], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19259] = -1.0;
  memset(&SD->u1.f1.dv2[19260], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[19374] = 1.0;
  SD->u1.f1.dv2[19375] = 0.0;
  SD->u1.f1.dv2[19376] = 0.0;
  SD->u1.f1.dv2[19377] = 0.0;
  SD->u1.f1.dv2[19378] = 0.0;
  SD->u1.f1.dv2[19379] = 0.0;
  SD->u1.f1.dv2[19380] = 0.0;
  SD->u1.f1.dv2[19381] = 0.0;
  SD->u1.f1.dv2[19382] = -1.0;
  memset(&SD->u1.f1.dv2[19383], 0, 25U * sizeof(real_T));
  SD->u1.f1.dv2[19408] = 1.0;
  memset(&SD->u1.f1.dv2[19409], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19454] = -1.0;
  memset(&SD->u1.f1.dv2[19455], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[19603] = 1.0;
  memset(&SD->u1.f1.dv2[19604], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19649] = -1.0;
  memset(&SD->u1.f1.dv2[19650], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[19798] = 1.0;
  memset(&SD->u1.f1.dv2[19799], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19844] = -1.0;
  memset(&SD->u1.f1.dv2[19845], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[19993] = 1.0;
  memset(&SD->u1.f1.dv2[19994], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20039] = -1.0;
  memset(&SD->u1.f1.dv2[20040], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[20188] = 1.0;
  memset(&SD->u1.f1.dv2[20189], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20234] = -1.0;
  memset(&SD->u1.f1.dv2[20235], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[20383] = 1.0;
  memset(&SD->u1.f1.dv2[20384], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20429] = -1.0;
  memset(&SD->u1.f1.dv2[20430], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[20578] = 1.0;
  memset(&SD->u1.f1.dv2[20579], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20624] = -1.0;
  memset(&SD->u1.f1.dv2[20625], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[20773] = 1.0;
  memset(&SD->u1.f1.dv2[20774], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20819] = -1.0;
  memset(&SD->u1.f1.dv2[20820], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[20968] = 1.0;
  memset(&SD->u1.f1.dv2[20969], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21014] = -1.0;
  memset(&SD->u1.f1.dv2[21015], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[21163] = 1.0;
  memset(&SD->u1.f1.dv2[21164], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21209] = -1.0;
  memset(&SD->u1.f1.dv2[21210], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[21358] = 1.0;
  memset(&SD->u1.f1.dv2[21359], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21404] = -1.0;
  memset(&SD->u1.f1.dv2[21405], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[21553] = 1.0;
  memset(&SD->u1.f1.dv2[21554], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21599] = -1.0;
  memset(&SD->u1.f1.dv2[21600], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[21748] = 1.0;
  memset(&SD->u1.f1.dv2[21749], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21794] = -1.0;
  memset(&SD->u1.f1.dv2[21795], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[21943] = 1.0;
  memset(&SD->u1.f1.dv2[21944], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21989] = -1.0;
  memset(&SD->u1.f1.dv2[21990], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[22138] = 1.0;
  memset(&SD->u1.f1.dv2[22139], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22184] = -1.0;
  memset(&SD->u1.f1.dv2[22185], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[22333] = 1.0;
  memset(&SD->u1.f1.dv2[22334], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22379] = -1.0;
  memset(&SD->u1.f1.dv2[22380], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[22487] = 1.0;
  SD->u1.f1.dv2[22488] = 0.0;
  SD->u1.f1.dv2[22489] = 0.0;
  SD->u1.f1.dv2[22490] = 0.0;
  SD->u1.f1.dv2[22491] = 0.0;
  SD->u1.f1.dv2[22492] = 0.0;
  SD->u1.f1.dv2[22493] = 0.0;
  SD->u1.f1.dv2[22494] = 0.0;
  SD->u1.f1.dv2[22495] = -1.0;
  memset(&SD->u1.f1.dv2[22496], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[22528] = 1.0;
  memset(&SD->u1.f1.dv2[22529], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22574] = -1.0;
  memset(&SD->u1.f1.dv2[22575], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[22682] = 1.0;
  SD->u1.f1.dv2[22683] = 0.0;
  SD->u1.f1.dv2[22684] = 0.0;
  SD->u1.f1.dv2[22685] = 0.0;
  SD->u1.f1.dv2[22686] = 0.0;
  SD->u1.f1.dv2[22687] = 0.0;
  SD->u1.f1.dv2[22688] = 0.0;
  SD->u1.f1.dv2[22689] = 0.0;
  SD->u1.f1.dv2[22690] = -1.0;
  memset(&SD->u1.f1.dv2[22691], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[22723] = 1.0;
  memset(&SD->u1.f1.dv2[22724], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22769] = -1.0;
  memset(&SD->u1.f1.dv2[22770], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[22877] = 1.0;
  SD->u1.f1.dv2[22878] = 0.0;
  SD->u1.f1.dv2[22879] = 0.0;
  SD->u1.f1.dv2[22880] = 0.0;
  SD->u1.f1.dv2[22881] = 0.0;
  SD->u1.f1.dv2[22882] = 0.0;
  SD->u1.f1.dv2[22883] = 0.0;
  SD->u1.f1.dv2[22884] = 0.0;
  SD->u1.f1.dv2[22885] = -1.0;
  memset(&SD->u1.f1.dv2[22886], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[22918] = 1.0;
  memset(&SD->u1.f1.dv2[22919], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22964] = -1.0;
  memset(&SD->u1.f1.dv2[22965], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[23072] = 1.0;
  SD->u1.f1.dv2[23073] = 0.0;
  SD->u1.f1.dv2[23074] = 0.0;
  SD->u1.f1.dv2[23075] = 0.0;
  SD->u1.f1.dv2[23076] = 0.0;
  SD->u1.f1.dv2[23077] = 0.0;
  SD->u1.f1.dv2[23078] = 0.0;
  SD->u1.f1.dv2[23079] = 0.0;
  SD->u1.f1.dv2[23080] = -1.0;
  memset(&SD->u1.f1.dv2[23081], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[23113] = 1.0;
  memset(&SD->u1.f1.dv2[23114], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23159] = -1.0;
  memset(&SD->u1.f1.dv2[23160], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[23267] = 1.0;
  SD->u1.f1.dv2[23268] = 0.0;
  SD->u1.f1.dv2[23269] = 0.0;
  SD->u1.f1.dv2[23270] = 0.0;
  SD->u1.f1.dv2[23271] = 0.0;
  SD->u1.f1.dv2[23272] = 0.0;
  SD->u1.f1.dv2[23273] = 0.0;
  SD->u1.f1.dv2[23274] = 0.0;
  SD->u1.f1.dv2[23275] = -1.0;
  memset(&SD->u1.f1.dv2[23276], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[23308] = 1.0;
  memset(&SD->u1.f1.dv2[23309], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23354] = -1.0;
  memset(&SD->u1.f1.dv2[23355], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[23462] = 1.0;
  SD->u1.f1.dv2[23463] = 0.0;
  SD->u1.f1.dv2[23464] = 0.0;
  SD->u1.f1.dv2[23465] = 0.0;
  SD->u1.f1.dv2[23466] = 0.0;
  SD->u1.f1.dv2[23467] = 0.0;
  SD->u1.f1.dv2[23468] = 0.0;
  SD->u1.f1.dv2[23469] = 0.0;
  SD->u1.f1.dv2[23470] = -1.0;
  memset(&SD->u1.f1.dv2[23471], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[23503] = 1.0;
  memset(&SD->u1.f1.dv2[23504], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23549] = -1.0;
  memset(&SD->u1.f1.dv2[23550], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[23657] = 1.0;
  SD->u1.f1.dv2[23658] = 0.0;
  SD->u1.f1.dv2[23659] = 0.0;
  SD->u1.f1.dv2[23660] = 0.0;
  SD->u1.f1.dv2[23661] = 0.0;
  SD->u1.f1.dv2[23662] = 0.0;
  SD->u1.f1.dv2[23663] = 0.0;
  SD->u1.f1.dv2[23664] = 0.0;
  SD->u1.f1.dv2[23665] = -1.0;
  memset(&SD->u1.f1.dv2[23666], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[23698] = 1.0;
  memset(&SD->u1.f1.dv2[23699], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23744] = -1.0;
  memset(&SD->u1.f1.dv2[23745], 0, 107U * sizeof(real_T));
  SD->u1.f1.dv2[23852] = 1.0;
  SD->u1.f1.dv2[23853] = 0.0;
  SD->u1.f1.dv2[23854] = 0.0;
  SD->u1.f1.dv2[23855] = 0.0;
  SD->u1.f1.dv2[23856] = 0.0;
  SD->u1.f1.dv2[23857] = 0.0;
  SD->u1.f1.dv2[23858] = 0.0;
  SD->u1.f1.dv2[23859] = 0.0;
  SD->u1.f1.dv2[23860] = -1.0;
  memset(&SD->u1.f1.dv2[23861], 0, sizeof(real_T) << 5);
  SD->u1.f1.dv2[23893] = 1.0;
  memset(&SD->u1.f1.dv2[23894], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23939] = -1.0;
  memset(&SD->u1.f1.dv2[23940], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[24088] = 1.0;
  memset(&SD->u1.f1.dv2[24089], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24134] = -1.0;
  memset(&SD->u1.f1.dv2[24135], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[24283] = 1.0;
  memset(&SD->u1.f1.dv2[24284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24329] = -1.0;
  memset(&SD->u1.f1.dv2[24330], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[24478] = 1.0;
  memset(&SD->u1.f1.dv2[24479], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24524] = -1.0;
  memset(&SD->u1.f1.dv2[24525], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[24673] = 1.0;
  memset(&SD->u1.f1.dv2[24674], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24719] = -1.0;
  memset(&SD->u1.f1.dv2[24720], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[24868] = 1.0;
  memset(&SD->u1.f1.dv2[24869], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24914] = -1.0;
  memset(&SD->u1.f1.dv2[24915], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[25063] = 1.0;
  memset(&SD->u1.f1.dv2[25064], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25109] = -1.0;
  memset(&SD->u1.f1.dv2[25110], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[25258] = 1.0;
  memset(&SD->u1.f1.dv2[25259], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25304] = -1.0;
  memset(&SD->u1.f1.dv2[25305], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[25453] = 1.0;
  memset(&SD->u1.f1.dv2[25454], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25499] = -1.0;
  memset(&SD->u1.f1.dv2[25500], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[25648] = 1.0;
  memset(&SD->u1.f1.dv2[25649], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25694] = -1.0;
  memset(&SD->u1.f1.dv2[25695], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[25843] = 1.0;
  memset(&SD->u1.f1.dv2[25844], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25889] = -1.0;
  memset(&SD->u1.f1.dv2[25890], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[26038] = 1.0;
  memset(&SD->u1.f1.dv2[26039], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26084] = -1.0;
  memset(&SD->u1.f1.dv2[26085], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[26233] = 1.0;
  memset(&SD->u1.f1.dv2[26234], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26279] = -1.0;
  memset(&SD->u1.f1.dv2[26280], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[26428] = 1.0;
  memset(&SD->u1.f1.dv2[26429], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26474] = -1.0;
  memset(&SD->u1.f1.dv2[26475], 0, 148U * sizeof(real_T));
  SD->u1.f1.dv2[26623] = 1.0;
  memset(&SD->u1.f1.dv2[26624], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[26669] = -1.0;
  memset(&SD->u1.f1.dv2[26670], 0, 1071U * sizeof(real_T));
  SD->u1.f1.dv2[27741] = -1.0;
  memset(&SD->u1.f1.dv2[27742], 0, 697U * sizeof(real_T));
  SD->u1.f1.dv2[28439] = -1.0;
  memset(&SD->u1.f1.dv2[28440], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28462] = -1.0;
  memset(&SD->u1.f1.dv2[28463], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[28634] = -1.0;
  memset(&SD->u1.f1.dv2[28635], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28657] = -1.0;
  memset(&SD->u1.f1.dv2[28658], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[28829] = -1.0;
  memset(&SD->u1.f1.dv2[28830], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28852] = -1.0;
  memset(&SD->u1.f1.dv2[28853], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[29024] = -1.0;
  memset(&SD->u1.f1.dv2[29025], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29047] = -1.0;
  memset(&SD->u1.f1.dv2[29048], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[29219] = -1.0;
  memset(&SD->u1.f1.dv2[29220], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29242] = -1.0;
  memset(&SD->u1.f1.dv2[29243], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[29414] = -1.0;
  memset(&SD->u1.f1.dv2[29415], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29437] = -1.0;
  memset(&SD->u1.f1.dv2[29438], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[29609] = -1.0;
  memset(&SD->u1.f1.dv2[29610], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29632] = -1.0;
  memset(&SD->u1.f1.dv2[29633], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[29804] = -1.0;
  memset(&SD->u1.f1.dv2[29805], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29827] = -1.0;
  memset(&SD->u1.f1.dv2[29828], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[29999] = -1.0;
  memset(&SD->u1.f1.dv2[30000], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30022] = -1.0;
  memset(&SD->u1.f1.dv2[30023], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[30194] = -1.0;
  memset(&SD->u1.f1.dv2[30195], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30217] = -1.0;
  memset(&SD->u1.f1.dv2[30218], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[30389] = -1.0;
  memset(&SD->u1.f1.dv2[30390], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30412] = -1.0;
  memset(&SD->u1.f1.dv2[30413], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[30584] = -1.0;
  memset(&SD->u1.f1.dv2[30585], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30607] = -1.0;
  memset(&SD->u1.f1.dv2[30608], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[30779] = -1.0;
  memset(&SD->u1.f1.dv2[30780], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30802] = -1.0;
  memset(&SD->u1.f1.dv2[30803], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[30974] = -1.0;
  memset(&SD->u1.f1.dv2[30975], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30997] = -1.0;
  memset(&SD->u1.f1.dv2[30998], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[31169] = -1.0;
  memset(&SD->u1.f1.dv2[31170], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31192] = -1.0;
  memset(&SD->u1.f1.dv2[31193], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[31364] = -1.0;
  memset(&SD->u1.f1.dv2[31365], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31387] = -1.0;
  memset(&SD->u1.f1.dv2[31388], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[31559] = -1.0;
  memset(&SD->u1.f1.dv2[31560], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31582] = -1.0;
  memset(&SD->u1.f1.dv2[31583], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[31754] = -1.0;
  memset(&SD->u1.f1.dv2[31755], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31777] = -1.0;
  memset(&SD->u1.f1.dv2[31778], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[31949] = -1.0;
  memset(&SD->u1.f1.dv2[31950], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31972] = -1.0;
  memset(&SD->u1.f1.dv2[31973], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[32144] = -1.0;
  memset(&SD->u1.f1.dv2[32145], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32167] = -1.0;
  memset(&SD->u1.f1.dv2[32168], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[32339] = -1.0;
  memset(&SD->u1.f1.dv2[32340], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32362] = -1.0;
  memset(&SD->u1.f1.dv2[32363], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[32534] = -1.0;
  memset(&SD->u1.f1.dv2[32535], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32557] = -1.0;
  memset(&SD->u1.f1.dv2[32558], 0, 171U * sizeof(real_T));
  SD->u1.f1.dv2[32729] = -1.0;
  memset(&SD->u1.f1.dv2[32730], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[32752] = -1.0;
  memset(&SD->u1.f1.dv2[32753], 0, 226U * sizeof(real_T));
  SD->u1.f1.dv2[32979] = 1.0;
  memset(&SD->u1.f1.dv2[32980], 0, 4429U * sizeof(real_T));
  SD->u1.f1.dv2[37409] = -1.0;
  SD->u1.f1.dv2[37410] = 0.0;
  SD->u1.f1.dv2[37411] = 0.0;
  SD->u1.f1.dv2[37412] = 0.0;
  SD->u1.f1.dv2[37413] = 0.0;
  SD->u1.f1.dv2[37414] = 0.0;
  SD->u1.f1.dv2[37415] = 0.0;
  SD->u1.f1.dv2[37416] = 0.0;
  SD->u1.f1.dv2[37417] = -1.0;
  memset(&SD->u1.f1.dv2[37418], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[37604] = -1.0;
  SD->u1.f1.dv2[37605] = 0.0;
  SD->u1.f1.dv2[37606] = 0.0;
  SD->u1.f1.dv2[37607] = 0.0;
  SD->u1.f1.dv2[37608] = 0.0;
  SD->u1.f1.dv2[37609] = 0.0;
  SD->u1.f1.dv2[37610] = 0.0;
  SD->u1.f1.dv2[37611] = 0.0;
  SD->u1.f1.dv2[37612] = -1.0;
  memset(&SD->u1.f1.dv2[37613], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[37799] = -1.0;
  SD->u1.f1.dv2[37800] = 0.0;
  SD->u1.f1.dv2[37801] = 0.0;
  SD->u1.f1.dv2[37802] = 0.0;
  SD->u1.f1.dv2[37803] = 0.0;
  SD->u1.f1.dv2[37804] = 0.0;
  SD->u1.f1.dv2[37805] = 0.0;
  SD->u1.f1.dv2[37806] = 0.0;
  SD->u1.f1.dv2[37807] = -1.0;
  memset(&SD->u1.f1.dv2[37808], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[37994] = -1.0;
  SD->u1.f1.dv2[37995] = 0.0;
  SD->u1.f1.dv2[37996] = 0.0;
  SD->u1.f1.dv2[37997] = 0.0;
  SD->u1.f1.dv2[37998] = 0.0;
  SD->u1.f1.dv2[37999] = 0.0;
  SD->u1.f1.dv2[38000] = 0.0;
  SD->u1.f1.dv2[38001] = 0.0;
  SD->u1.f1.dv2[38002] = -1.0;
  memset(&SD->u1.f1.dv2[38003], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[38189] = -1.0;
  SD->u1.f1.dv2[38190] = 0.0;
  SD->u1.f1.dv2[38191] = 0.0;
  SD->u1.f1.dv2[38192] = 0.0;
  SD->u1.f1.dv2[38193] = 0.0;
  SD->u1.f1.dv2[38194] = 0.0;
  SD->u1.f1.dv2[38195] = 0.0;
  SD->u1.f1.dv2[38196] = 0.0;
  SD->u1.f1.dv2[38197] = -1.0;
  memset(&SD->u1.f1.dv2[38198], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[38384] = -1.0;
  SD->u1.f1.dv2[38385] = 0.0;
  SD->u1.f1.dv2[38386] = 0.0;
  SD->u1.f1.dv2[38387] = 0.0;
  SD->u1.f1.dv2[38388] = 0.0;
  SD->u1.f1.dv2[38389] = 0.0;
  SD->u1.f1.dv2[38390] = 0.0;
  SD->u1.f1.dv2[38391] = 0.0;
  SD->u1.f1.dv2[38392] = -1.0;
  memset(&SD->u1.f1.dv2[38393], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[38579] = -1.0;
  SD->u1.f1.dv2[38580] = 0.0;
  SD->u1.f1.dv2[38581] = 0.0;
  SD->u1.f1.dv2[38582] = 0.0;
  SD->u1.f1.dv2[38583] = 0.0;
  SD->u1.f1.dv2[38584] = 0.0;
  SD->u1.f1.dv2[38585] = 0.0;
  SD->u1.f1.dv2[38586] = 0.0;
  SD->u1.f1.dv2[38587] = -1.0;
  memset(&SD->u1.f1.dv2[38588], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[38774] = -1.0;
  SD->u1.f1.dv2[38775] = 0.0;
  SD->u1.f1.dv2[38776] = 0.0;
  SD->u1.f1.dv2[38777] = 0.0;
  SD->u1.f1.dv2[38778] = 0.0;
  SD->u1.f1.dv2[38779] = 0.0;
  SD->u1.f1.dv2[38780] = 0.0;
  SD->u1.f1.dv2[38781] = 0.0;
  SD->u1.f1.dv2[38782] = -1.0;
  memset(&SD->u1.f1.dv2[38783], 0, 582U * sizeof(real_T));
  SD->u1.f1.dv2[39365] = -1.0;
  SD->u1.f1.dv2[39366] = 0.0;
  SD->u1.f1.dv2[39367] = 0.0;
  SD->u1.f1.dv2[39368] = 0.0;
  SD->u1.f1.dv2[39369] = 0.0;
  SD->u1.f1.dv2[39370] = 0.0;
  SD->u1.f1.dv2[39371] = 0.0;
  SD->u1.f1.dv2[39372] = 0.0;
  SD->u1.f1.dv2[39373] = -1.0;
  memset(&SD->u1.f1.dv2[39374], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[39560] = -1.0;
  SD->u1.f1.dv2[39561] = 0.0;
  SD->u1.f1.dv2[39562] = 0.0;
  SD->u1.f1.dv2[39563] = 0.0;
  SD->u1.f1.dv2[39564] = 0.0;
  SD->u1.f1.dv2[39565] = 0.0;
  SD->u1.f1.dv2[39566] = 0.0;
  SD->u1.f1.dv2[39567] = 0.0;
  SD->u1.f1.dv2[39568] = -1.0;
  memset(&SD->u1.f1.dv2[39569], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[39755] = -1.0;
  SD->u1.f1.dv2[39756] = 0.0;
  SD->u1.f1.dv2[39757] = 0.0;
  SD->u1.f1.dv2[39758] = 0.0;
  SD->u1.f1.dv2[39759] = 0.0;
  SD->u1.f1.dv2[39760] = 0.0;
  SD->u1.f1.dv2[39761] = 0.0;
  SD->u1.f1.dv2[39762] = 0.0;
  SD->u1.f1.dv2[39763] = -1.0;
  memset(&SD->u1.f1.dv2[39764], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[39950] = -1.0;
  SD->u1.f1.dv2[39951] = 0.0;
  SD->u1.f1.dv2[39952] = 0.0;
  SD->u1.f1.dv2[39953] = 0.0;
  SD->u1.f1.dv2[39954] = 0.0;
  SD->u1.f1.dv2[39955] = 0.0;
  SD->u1.f1.dv2[39956] = 0.0;
  SD->u1.f1.dv2[39957] = 0.0;
  SD->u1.f1.dv2[39958] = -1.0;
  memset(&SD->u1.f1.dv2[39959], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[40145] = -1.0;
  SD->u1.f1.dv2[40146] = 0.0;
  SD->u1.f1.dv2[40147] = 0.0;
  SD->u1.f1.dv2[40148] = 0.0;
  SD->u1.f1.dv2[40149] = 0.0;
  SD->u1.f1.dv2[40150] = 0.0;
  SD->u1.f1.dv2[40151] = 0.0;
  SD->u1.f1.dv2[40152] = 0.0;
  SD->u1.f1.dv2[40153] = -1.0;
  memset(&SD->u1.f1.dv2[40154], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[40340] = -1.0;
  SD->u1.f1.dv2[40341] = 0.0;
  SD->u1.f1.dv2[40342] = 0.0;
  SD->u1.f1.dv2[40343] = 0.0;
  SD->u1.f1.dv2[40344] = 0.0;
  SD->u1.f1.dv2[40345] = 0.0;
  SD->u1.f1.dv2[40346] = 0.0;
  SD->u1.f1.dv2[40347] = 0.0;
  SD->u1.f1.dv2[40348] = -1.0;
  memset(&SD->u1.f1.dv2[40349], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[40535] = -1.0;
  SD->u1.f1.dv2[40536] = 0.0;
  SD->u1.f1.dv2[40537] = 0.0;
  SD->u1.f1.dv2[40538] = 0.0;
  SD->u1.f1.dv2[40539] = 0.0;
  SD->u1.f1.dv2[40540] = 0.0;
  SD->u1.f1.dv2[40541] = 0.0;
  SD->u1.f1.dv2[40542] = 0.0;
  SD->u1.f1.dv2[40543] = -1.0;
  memset(&SD->u1.f1.dv2[40544], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[40730] = -1.0;
  SD->u1.f1.dv2[40731] = 0.0;
  SD->u1.f1.dv2[40732] = 0.0;
  SD->u1.f1.dv2[40733] = 0.0;
  SD->u1.f1.dv2[40734] = 0.0;
  SD->u1.f1.dv2[40735] = 0.0;
  SD->u1.f1.dv2[40736] = 0.0;
  SD->u1.f1.dv2[40737] = 0.0;
  SD->u1.f1.dv2[40738] = -1.0;
  memset(&SD->u1.f1.dv2[40739], 0, 1941U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 194], &SD->u1.f1.dv2[i2 * 194], 194U * sizeof(real_T));
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
  biq[169] = t9;
  biq[170] = t9;
  biq[171] = t9;
  biq[172] = t9;
  biq[173] = t9;
  biq[174] = t9;
  biq[175] = t9;
  biq[176] = t9;
  biq[177] = t10;
  biq[178] = t10;
  biq[179] = t10;
  biq[180] = t10;
  biq[181] = t10;
  biq[182] = t10;
  biq[183] = t10;
  biq[184] = t10;
  biq[185] = t11;
  biq[186] = t11;
  biq[187] = t11;
  biq[188] = t11;
  biq[189] = t11;
  biq[190] = t11;
  biq[191] = t11;
  biq[192] = t11;
  biq[193] = -in9[1];
}

/* End of code generation (IqFast_RightStart2V40.cpp) */
