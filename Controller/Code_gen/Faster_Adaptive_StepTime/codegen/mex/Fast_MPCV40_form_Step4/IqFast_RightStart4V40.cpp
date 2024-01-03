/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart4V40.cpp
 *
 * Code generation for function 'IqFast_RightStart4V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step4.h"
#include "IqFast_RightStart4V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart4V40(Fast_MPCV40_form_Step4StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[40920], real_T biq[186])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART4V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART4V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 14:50:29 */
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
  memset(&SD->u1.f1.dv2[139], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[373] = -1.0;
  memset(&SD->u1.f1.dv2[374], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[419] = 1.0;
  memset(&SD->u1.f1.dv2[420], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[465] = -in11[2];
  memset(&SD->u1.f1.dv2[466], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[511] = -in11[2];
  memset(&SD->u1.f1.dv2[512], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[746] = -1.0;
  memset(&SD->u1.f1.dv2[747], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[792] = 1.0;
  memset(&SD->u1.f1.dv2[793], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[838] = -in11[2];
  memset(&SD->u1.f1.dv2[839], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[884] = -in11[2];
  memset(&SD->u1.f1.dv2[885], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[1119] = -1.0;
  memset(&SD->u1.f1.dv2[1120], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1165] = 1.0;
  memset(&SD->u1.f1.dv2[1166], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1211] = -in11[2];
  memset(&SD->u1.f1.dv2[1212], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1257] = -in11[2];
  memset(&SD->u1.f1.dv2[1258], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[1492] = -1.0;
  memset(&SD->u1.f1.dv2[1493], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1538] = 1.0;
  memset(&SD->u1.f1.dv2[1539], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1584] = -in11[2];
  memset(&SD->u1.f1.dv2[1585], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1630] = -in11[2];
  memset(&SD->u1.f1.dv2[1631], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[1865] = -1.0;
  memset(&SD->u1.f1.dv2[1866], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1911] = 1.0;
  memset(&SD->u1.f1.dv2[1912], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1957] = -in11[2];
  memset(&SD->u1.f1.dv2[1958], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2003] = -in11[2];
  memset(&SD->u1.f1.dv2[2004], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[2238] = -1.0;
  memset(&SD->u1.f1.dv2[2239], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2284] = 1.0;
  memset(&SD->u1.f1.dv2[2285], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2330] = -in11[2];
  memset(&SD->u1.f1.dv2[2331], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2376] = -in11[2];
  memset(&SD->u1.f1.dv2[2377], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[2611] = -1.0;
  memset(&SD->u1.f1.dv2[2612], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2657] = 1.0;
  memset(&SD->u1.f1.dv2[2658], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2703] = -in11[2];
  memset(&SD->u1.f1.dv2[2704], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2749] = -in11[2];
  memset(&SD->u1.f1.dv2[2750], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[2984] = -1.0;
  memset(&SD->u1.f1.dv2[2985], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3030] = 1.0;
  memset(&SD->u1.f1.dv2[3031], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3076] = -in11[2];
  memset(&SD->u1.f1.dv2[3077], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3122] = -in11[2];
  memset(&SD->u1.f1.dv2[3123], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[3357] = -1.0;
  memset(&SD->u1.f1.dv2[3358], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3403] = 1.0;
  memset(&SD->u1.f1.dv2[3404], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3449] = -in11[2];
  memset(&SD->u1.f1.dv2[3450], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3495] = -in11[2];
  memset(&SD->u1.f1.dv2[3496], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[3730] = -1.0;
  memset(&SD->u1.f1.dv2[3731], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3776] = 1.0;
  memset(&SD->u1.f1.dv2[3777], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3822] = -in11[2];
  memset(&SD->u1.f1.dv2[3823], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3868] = -in11[2];
  memset(&SD->u1.f1.dv2[3869], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[4103] = -1.0;
  memset(&SD->u1.f1.dv2[4104], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4149] = 1.0;
  memset(&SD->u1.f1.dv2[4150], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4195] = -in11[2];
  memset(&SD->u1.f1.dv2[4196], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4241] = -in11[2];
  memset(&SD->u1.f1.dv2[4242], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[4476] = -1.0;
  memset(&SD->u1.f1.dv2[4477], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4522] = 1.0;
  memset(&SD->u1.f1.dv2[4523], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4568] = -in11[2];
  memset(&SD->u1.f1.dv2[4569], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4614] = -in11[2];
  memset(&SD->u1.f1.dv2[4615], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[4849] = -1.0;
  memset(&SD->u1.f1.dv2[4850], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4895] = 1.0;
  memset(&SD->u1.f1.dv2[4896], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4941] = -in11[2];
  memset(&SD->u1.f1.dv2[4942], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4987] = -in11[2];
  memset(&SD->u1.f1.dv2[4988], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[5222] = -1.0;
  memset(&SD->u1.f1.dv2[5223], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5268] = 1.0;
  memset(&SD->u1.f1.dv2[5269], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5314] = -in11[2];
  memset(&SD->u1.f1.dv2[5315], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5360] = -in11[2];
  memset(&SD->u1.f1.dv2[5361], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[5595] = -1.0;
  memset(&SD->u1.f1.dv2[5596], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5641] = 1.0;
  memset(&SD->u1.f1.dv2[5642], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5687] = -in11[2];
  memset(&SD->u1.f1.dv2[5688], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5733] = -in11[2];
  memset(&SD->u1.f1.dv2[5734], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[5968] = -1.0;
  memset(&SD->u1.f1.dv2[5969], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6014] = 1.0;
  memset(&SD->u1.f1.dv2[6015], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6060] = -in11[2];
  memset(&SD->u1.f1.dv2[6061], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6106] = -in11[2];
  memset(&SD->u1.f1.dv2[6107], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[6341] = -1.0;
  memset(&SD->u1.f1.dv2[6342], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6387] = 1.0;
  memset(&SD->u1.f1.dv2[6388], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6433] = -in11[2];
  memset(&SD->u1.f1.dv2[6434], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6479] = -in11[2];
  memset(&SD->u1.f1.dv2[6480], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[6714] = -1.0;
  memset(&SD->u1.f1.dv2[6715], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6760] = 1.0;
  memset(&SD->u1.f1.dv2[6761], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6806] = -in11[2];
  memset(&SD->u1.f1.dv2[6807], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6852] = -in11[2];
  memset(&SD->u1.f1.dv2[6853], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[7087] = -1.0;
  memset(&SD->u1.f1.dv2[7088], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7133] = 1.0;
  memset(&SD->u1.f1.dv2[7134], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7179] = -in11[2];
  memset(&SD->u1.f1.dv2[7180], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7225] = -in11[2];
  memset(&SD->u1.f1.dv2[7226], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[7460] = -1.0;
  memset(&SD->u1.f1.dv2[7461], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7506] = 1.0;
  memset(&SD->u1.f1.dv2[7507], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7552] = -in11[2];
  memset(&SD->u1.f1.dv2[7553], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7598] = -in11[2];
  memset(&SD->u1.f1.dv2[7599], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[7833] = -1.0;
  memset(&SD->u1.f1.dv2[7834], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7879] = 1.0;
  memset(&SD->u1.f1.dv2[7880], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7925] = -in11[2];
  memset(&SD->u1.f1.dv2[7926], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7971] = -in11[2];
  memset(&SD->u1.f1.dv2[7972], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[8206] = -1.0;
  memset(&SD->u1.f1.dv2[8207], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8252] = 1.0;
  memset(&SD->u1.f1.dv2[8253], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8298] = -in11[2];
  memset(&SD->u1.f1.dv2[8299], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8344] = -in11[2];
  memset(&SD->u1.f1.dv2[8345], 0, 234U * sizeof(real_T));
  SD->u1.f1.dv2[8579] = -1.0;
  memset(&SD->u1.f1.dv2[8580], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8625] = 1.0;
  memset(&SD->u1.f1.dv2[8626], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8648] = -in11[3];
  memset(&SD->u1.f1.dv2[8649], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8694] = -in11[3];
  memset(&SD->u1.f1.dv2[8695], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[8952] = -1.0;
  memset(&SD->u1.f1.dv2[8953], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8998] = 1.0;
  memset(&SD->u1.f1.dv2[8999], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9021] = -in11[3];
  memset(&SD->u1.f1.dv2[9022], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9067] = -in11[3];
  memset(&SD->u1.f1.dv2[9068], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[9325] = -1.0;
  memset(&SD->u1.f1.dv2[9326], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9371] = 1.0;
  memset(&SD->u1.f1.dv2[9372], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9394] = -in11[3];
  memset(&SD->u1.f1.dv2[9395], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9440] = -in11[3];
  memset(&SD->u1.f1.dv2[9441], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[9698] = -1.0;
  memset(&SD->u1.f1.dv2[9699], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9744] = 1.0;
  memset(&SD->u1.f1.dv2[9745], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9767] = -in11[3];
  memset(&SD->u1.f1.dv2[9768], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9813] = -in11[3];
  memset(&SD->u1.f1.dv2[9814], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[10071] = -1.0;
  memset(&SD->u1.f1.dv2[10072], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10117] = 1.0;
  memset(&SD->u1.f1.dv2[10118], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10140] = -in11[3];
  memset(&SD->u1.f1.dv2[10141], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10186] = -in11[3];
  memset(&SD->u1.f1.dv2[10187], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[10444] = -1.0;
  memset(&SD->u1.f1.dv2[10445], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10490] = 1.0;
  memset(&SD->u1.f1.dv2[10491], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10513] = -in11[3];
  memset(&SD->u1.f1.dv2[10514], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10559] = -in11[3];
  memset(&SD->u1.f1.dv2[10560], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[10817] = -1.0;
  memset(&SD->u1.f1.dv2[10818], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10863] = 1.0;
  memset(&SD->u1.f1.dv2[10864], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10886] = -in11[3];
  memset(&SD->u1.f1.dv2[10887], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10932] = -in11[3];
  memset(&SD->u1.f1.dv2[10933], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[11190] = -1.0;
  memset(&SD->u1.f1.dv2[11191], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11236] = 1.0;
  memset(&SD->u1.f1.dv2[11237], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11259] = -in11[3];
  memset(&SD->u1.f1.dv2[11260], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11305] = -in11[3];
  memset(&SD->u1.f1.dv2[11306], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[11563] = -1.0;
  memset(&SD->u1.f1.dv2[11564], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11609] = 1.0;
  memset(&SD->u1.f1.dv2[11610], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11632] = -in11[3];
  memset(&SD->u1.f1.dv2[11633], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11678] = -in11[3];
  memset(&SD->u1.f1.dv2[11679], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[11936] = -1.0;
  memset(&SD->u1.f1.dv2[11937], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11982] = 1.0;
  memset(&SD->u1.f1.dv2[11983], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12005] = -in11[3];
  memset(&SD->u1.f1.dv2[12006], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12051] = -in11[3];
  memset(&SD->u1.f1.dv2[12052], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[12309] = -1.0;
  memset(&SD->u1.f1.dv2[12310], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12355] = 1.0;
  memset(&SD->u1.f1.dv2[12356], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12378] = -in11[3];
  memset(&SD->u1.f1.dv2[12379], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12424] = -in11[3];
  memset(&SD->u1.f1.dv2[12425], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[12682] = -1.0;
  memset(&SD->u1.f1.dv2[12683], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12728] = 1.0;
  memset(&SD->u1.f1.dv2[12729], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12751] = -in11[3];
  memset(&SD->u1.f1.dv2[12752], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12797] = -in11[3];
  memset(&SD->u1.f1.dv2[12798], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[13055] = -1.0;
  memset(&SD->u1.f1.dv2[13056], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13101] = 1.0;
  memset(&SD->u1.f1.dv2[13102], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13124] = -in11[3];
  memset(&SD->u1.f1.dv2[13125], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13170] = -in11[3];
  memset(&SD->u1.f1.dv2[13171], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[13428] = -1.0;
  memset(&SD->u1.f1.dv2[13429], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13474] = 1.0;
  memset(&SD->u1.f1.dv2[13475], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13497] = -in11[3];
  memset(&SD->u1.f1.dv2[13498], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13543] = -in11[3];
  memset(&SD->u1.f1.dv2[13544], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[13801] = -1.0;
  memset(&SD->u1.f1.dv2[13802], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13847] = 1.0;
  memset(&SD->u1.f1.dv2[13848], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13870] = -in11[3];
  memset(&SD->u1.f1.dv2[13871], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13916] = -in11[3];
  memset(&SD->u1.f1.dv2[13917], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[14174] = -1.0;
  memset(&SD->u1.f1.dv2[14175], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14220] = 1.0;
  memset(&SD->u1.f1.dv2[14221], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14243] = -in11[3];
  memset(&SD->u1.f1.dv2[14244], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14289] = -in11[3];
  memset(&SD->u1.f1.dv2[14290], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[14547] = -1.0;
  memset(&SD->u1.f1.dv2[14548], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14593] = 1.0;
  memset(&SD->u1.f1.dv2[14594], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14616] = -in11[3];
  memset(&SD->u1.f1.dv2[14617], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14662] = -in11[3];
  memset(&SD->u1.f1.dv2[14663], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[14920] = -1.0;
  memset(&SD->u1.f1.dv2[14921], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14966] = 1.0;
  memset(&SD->u1.f1.dv2[14967], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14989] = -in11[3];
  memset(&SD->u1.f1.dv2[14990], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15035] = -in11[3];
  memset(&SD->u1.f1.dv2[15036], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[15293] = -1.0;
  memset(&SD->u1.f1.dv2[15294], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15339] = 1.0;
  memset(&SD->u1.f1.dv2[15340], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15362] = -in11[3];
  memset(&SD->u1.f1.dv2[15363], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15408] = -in11[3];
  memset(&SD->u1.f1.dv2[15409], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[15666] = -1.0;
  memset(&SD->u1.f1.dv2[15667], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15712] = 1.0;
  memset(&SD->u1.f1.dv2[15713], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15735] = -in11[3];
  memset(&SD->u1.f1.dv2[15736], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15781] = -in11[3];
  memset(&SD->u1.f1.dv2[15782], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[16039] = -1.0;
  memset(&SD->u1.f1.dv2[16040], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16085] = 1.0;
  memset(&SD->u1.f1.dv2[16086], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16108] = -in11[3];
  memset(&SD->u1.f1.dv2[16109], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16154] = -in11[3];
  memset(&SD->u1.f1.dv2[16155], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[16412] = -1.0;
  memset(&SD->u1.f1.dv2[16413], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16458] = 1.0;
  memset(&SD->u1.f1.dv2[16459], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16481] = -in11[3];
  memset(&SD->u1.f1.dv2[16482], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16527] = -in11[3];
  memset(&SD->u1.f1.dv2[16528], 0, 257U * sizeof(real_T));
  SD->u1.f1.dv2[16785] = -1.0;
  memset(&SD->u1.f1.dv2[16786], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16831] = 1.0;
  memset(&SD->u1.f1.dv2[16832], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[16854] = -in11[3];
  memset(&SD->u1.f1.dv2[16855], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16900] = -in11[3];
  memset(&SD->u1.f1.dv2[16901], 0, 211U * sizeof(real_T));
  SD->u1.f1.dv2[17112] = 1.0;
  memset(&SD->u1.f1.dv2[17113], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17158] = -1.0;
  memset(&SD->u1.f1.dv2[17159], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17273] = 1.0;
  SD->u1.f1.dv2[17274] = 0.0;
  SD->u1.f1.dv2[17275] = 0.0;
  SD->u1.f1.dv2[17276] = 0.0;
  SD->u1.f1.dv2[17277] = 0.0;
  SD->u1.f1.dv2[17278] = 0.0;
  SD->u1.f1.dv2[17279] = -1.0;
  memset(&SD->u1.f1.dv2[17280], 0, 19U * sizeof(real_T));
  SD->u1.f1.dv2[17299] = 1.0;
  memset(&SD->u1.f1.dv2[17300], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17345] = -1.0;
  memset(&SD->u1.f1.dv2[17346], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17460] = 1.0;
  SD->u1.f1.dv2[17461] = 0.0;
  SD->u1.f1.dv2[17462] = 0.0;
  SD->u1.f1.dv2[17463] = 0.0;
  SD->u1.f1.dv2[17464] = 0.0;
  SD->u1.f1.dv2[17465] = 0.0;
  SD->u1.f1.dv2[17466] = -1.0;
  memset(&SD->u1.f1.dv2[17467], 0, 19U * sizeof(real_T));
  SD->u1.f1.dv2[17486] = 1.0;
  memset(&SD->u1.f1.dv2[17487], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17532] = -1.0;
  memset(&SD->u1.f1.dv2[17533], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17647] = 1.0;
  SD->u1.f1.dv2[17648] = 0.0;
  SD->u1.f1.dv2[17649] = 0.0;
  SD->u1.f1.dv2[17650] = 0.0;
  SD->u1.f1.dv2[17651] = 0.0;
  SD->u1.f1.dv2[17652] = 0.0;
  SD->u1.f1.dv2[17653] = -1.0;
  memset(&SD->u1.f1.dv2[17654], 0, 19U * sizeof(real_T));
  SD->u1.f1.dv2[17673] = 1.0;
  memset(&SD->u1.f1.dv2[17674], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17719] = -1.0;
  memset(&SD->u1.f1.dv2[17720], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[17834] = 1.0;
  SD->u1.f1.dv2[17835] = 0.0;
  SD->u1.f1.dv2[17836] = 0.0;
  SD->u1.f1.dv2[17837] = 0.0;
  SD->u1.f1.dv2[17838] = 0.0;
  SD->u1.f1.dv2[17839] = 0.0;
  SD->u1.f1.dv2[17840] = -1.0;
  memset(&SD->u1.f1.dv2[17841], 0, 19U * sizeof(real_T));
  SD->u1.f1.dv2[17860] = 1.0;
  memset(&SD->u1.f1.dv2[17861], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17906] = -1.0;
  memset(&SD->u1.f1.dv2[17907], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18021] = 1.0;
  SD->u1.f1.dv2[18022] = 0.0;
  SD->u1.f1.dv2[18023] = 0.0;
  SD->u1.f1.dv2[18024] = 0.0;
  SD->u1.f1.dv2[18025] = 0.0;
  SD->u1.f1.dv2[18026] = 0.0;
  SD->u1.f1.dv2[18027] = -1.0;
  memset(&SD->u1.f1.dv2[18028], 0, 19U * sizeof(real_T));
  SD->u1.f1.dv2[18047] = 1.0;
  memset(&SD->u1.f1.dv2[18048], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18093] = -1.0;
  memset(&SD->u1.f1.dv2[18094], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[18208] = 1.0;
  SD->u1.f1.dv2[18209] = 0.0;
  SD->u1.f1.dv2[18210] = 0.0;
  SD->u1.f1.dv2[18211] = 0.0;
  SD->u1.f1.dv2[18212] = 0.0;
  SD->u1.f1.dv2[18213] = 0.0;
  SD->u1.f1.dv2[18214] = -1.0;
  memset(&SD->u1.f1.dv2[18215], 0, 19U * sizeof(real_T));
  SD->u1.f1.dv2[18234] = 1.0;
  memset(&SD->u1.f1.dv2[18235], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18280] = -1.0;
  memset(&SD->u1.f1.dv2[18281], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[18421] = 1.0;
  memset(&SD->u1.f1.dv2[18422], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18467] = -1.0;
  memset(&SD->u1.f1.dv2[18468], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[18608] = 1.0;
  memset(&SD->u1.f1.dv2[18609], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18654] = -1.0;
  memset(&SD->u1.f1.dv2[18655], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[18795] = 1.0;
  memset(&SD->u1.f1.dv2[18796], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18841] = -1.0;
  memset(&SD->u1.f1.dv2[18842], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[18982] = 1.0;
  memset(&SD->u1.f1.dv2[18983], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19028] = -1.0;
  memset(&SD->u1.f1.dv2[19029], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[19169] = 1.0;
  memset(&SD->u1.f1.dv2[19170], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19215] = -1.0;
  memset(&SD->u1.f1.dv2[19216], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[19356] = 1.0;
  memset(&SD->u1.f1.dv2[19357], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19402] = -1.0;
  memset(&SD->u1.f1.dv2[19403], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[19543] = 1.0;
  memset(&SD->u1.f1.dv2[19544], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19589] = -1.0;
  memset(&SD->u1.f1.dv2[19590], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[19730] = 1.0;
  memset(&SD->u1.f1.dv2[19731], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19776] = -1.0;
  memset(&SD->u1.f1.dv2[19777], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[19917] = 1.0;
  memset(&SD->u1.f1.dv2[19918], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19963] = -1.0;
  memset(&SD->u1.f1.dv2[19964], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[20104] = 1.0;
  memset(&SD->u1.f1.dv2[20105], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20150] = -1.0;
  memset(&SD->u1.f1.dv2[20151], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[20291] = 1.0;
  memset(&SD->u1.f1.dv2[20292], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20337] = -1.0;
  memset(&SD->u1.f1.dv2[20338], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[20478] = 1.0;
  memset(&SD->u1.f1.dv2[20479], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20524] = -1.0;
  memset(&SD->u1.f1.dv2[20525], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[20665] = 1.0;
  memset(&SD->u1.f1.dv2[20666], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20711] = -1.0;
  memset(&SD->u1.f1.dv2[20712], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[20852] = 1.0;
  memset(&SD->u1.f1.dv2[20853], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20898] = -1.0;
  memset(&SD->u1.f1.dv2[20899], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[21039] = 1.0;
  memset(&SD->u1.f1.dv2[21040], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21085] = -1.0;
  memset(&SD->u1.f1.dv2[21086], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[21226] = 1.0;
  memset(&SD->u1.f1.dv2[21227], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21272] = -1.0;
  memset(&SD->u1.f1.dv2[21273], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[21413] = 1.0;
  memset(&SD->u1.f1.dv2[21414], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21459] = -1.0;
  memset(&SD->u1.f1.dv2[21460], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv2[21563] = 1.0;
  SD->u1.f1.dv2[21564] = 0.0;
  SD->u1.f1.dv2[21565] = 0.0;
  SD->u1.f1.dv2[21566] = 0.0;
  SD->u1.f1.dv2[21567] = 0.0;
  SD->u1.f1.dv2[21568] = 0.0;
  SD->u1.f1.dv2[21569] = -1.0;
  memset(&SD->u1.f1.dv2[21570], 0, 30U * sizeof(real_T));
  SD->u1.f1.dv2[21600] = 1.0;
  memset(&SD->u1.f1.dv2[21601], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21646] = -1.0;
  memset(&SD->u1.f1.dv2[21647], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv2[21750] = 1.0;
  SD->u1.f1.dv2[21751] = 0.0;
  SD->u1.f1.dv2[21752] = 0.0;
  SD->u1.f1.dv2[21753] = 0.0;
  SD->u1.f1.dv2[21754] = 0.0;
  SD->u1.f1.dv2[21755] = 0.0;
  SD->u1.f1.dv2[21756] = -1.0;
  memset(&SD->u1.f1.dv2[21757], 0, 30U * sizeof(real_T));
  SD->u1.f1.dv2[21787] = 1.0;
  memset(&SD->u1.f1.dv2[21788], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21833] = -1.0;
  memset(&SD->u1.f1.dv2[21834], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv2[21937] = 1.0;
  SD->u1.f1.dv2[21938] = 0.0;
  SD->u1.f1.dv2[21939] = 0.0;
  SD->u1.f1.dv2[21940] = 0.0;
  SD->u1.f1.dv2[21941] = 0.0;
  SD->u1.f1.dv2[21942] = 0.0;
  SD->u1.f1.dv2[21943] = -1.0;
  memset(&SD->u1.f1.dv2[21944], 0, 30U * sizeof(real_T));
  SD->u1.f1.dv2[21974] = 1.0;
  memset(&SD->u1.f1.dv2[21975], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22020] = -1.0;
  memset(&SD->u1.f1.dv2[22021], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv2[22124] = 1.0;
  SD->u1.f1.dv2[22125] = 0.0;
  SD->u1.f1.dv2[22126] = 0.0;
  SD->u1.f1.dv2[22127] = 0.0;
  SD->u1.f1.dv2[22128] = 0.0;
  SD->u1.f1.dv2[22129] = 0.0;
  SD->u1.f1.dv2[22130] = -1.0;
  memset(&SD->u1.f1.dv2[22131], 0, 30U * sizeof(real_T));
  SD->u1.f1.dv2[22161] = 1.0;
  memset(&SD->u1.f1.dv2[22162], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22207] = -1.0;
  memset(&SD->u1.f1.dv2[22208], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv2[22311] = 1.0;
  SD->u1.f1.dv2[22312] = 0.0;
  SD->u1.f1.dv2[22313] = 0.0;
  SD->u1.f1.dv2[22314] = 0.0;
  SD->u1.f1.dv2[22315] = 0.0;
  SD->u1.f1.dv2[22316] = 0.0;
  SD->u1.f1.dv2[22317] = -1.0;
  memset(&SD->u1.f1.dv2[22318], 0, 30U * sizeof(real_T));
  SD->u1.f1.dv2[22348] = 1.0;
  memset(&SD->u1.f1.dv2[22349], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22394] = -1.0;
  memset(&SD->u1.f1.dv2[22395], 0, 103U * sizeof(real_T));
  SD->u1.f1.dv2[22498] = 1.0;
  SD->u1.f1.dv2[22499] = 0.0;
  SD->u1.f1.dv2[22500] = 0.0;
  SD->u1.f1.dv2[22501] = 0.0;
  SD->u1.f1.dv2[22502] = 0.0;
  SD->u1.f1.dv2[22503] = 0.0;
  SD->u1.f1.dv2[22504] = -1.0;
  memset(&SD->u1.f1.dv2[22505], 0, 30U * sizeof(real_T));
  SD->u1.f1.dv2[22535] = 1.0;
  memset(&SD->u1.f1.dv2[22536], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22581] = -1.0;
  memset(&SD->u1.f1.dv2[22582], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[22722] = 1.0;
  memset(&SD->u1.f1.dv2[22723], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22768] = -1.0;
  memset(&SD->u1.f1.dv2[22769], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[22909] = 1.0;
  memset(&SD->u1.f1.dv2[22910], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22955] = -1.0;
  memset(&SD->u1.f1.dv2[22956], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[23096] = 1.0;
  memset(&SD->u1.f1.dv2[23097], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23142] = -1.0;
  memset(&SD->u1.f1.dv2[23143], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[23283] = 1.0;
  memset(&SD->u1.f1.dv2[23284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23329] = -1.0;
  memset(&SD->u1.f1.dv2[23330], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[23470] = 1.0;
  memset(&SD->u1.f1.dv2[23471], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23516] = -1.0;
  memset(&SD->u1.f1.dv2[23517], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[23657] = 1.0;
  memset(&SD->u1.f1.dv2[23658], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23703] = -1.0;
  memset(&SD->u1.f1.dv2[23704], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[23844] = 1.0;
  memset(&SD->u1.f1.dv2[23845], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23890] = -1.0;
  memset(&SD->u1.f1.dv2[23891], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[24031] = 1.0;
  memset(&SD->u1.f1.dv2[24032], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24077] = -1.0;
  memset(&SD->u1.f1.dv2[24078], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[24218] = 1.0;
  memset(&SD->u1.f1.dv2[24219], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24264] = -1.0;
  memset(&SD->u1.f1.dv2[24265], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[24405] = 1.0;
  memset(&SD->u1.f1.dv2[24406], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24451] = -1.0;
  memset(&SD->u1.f1.dv2[24452], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[24592] = 1.0;
  memset(&SD->u1.f1.dv2[24593], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24638] = -1.0;
  memset(&SD->u1.f1.dv2[24639], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[24779] = 1.0;
  memset(&SD->u1.f1.dv2[24780], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[24825] = -1.0;
  memset(&SD->u1.f1.dv2[24826], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[24966] = 1.0;
  memset(&SD->u1.f1.dv2[24967], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25012] = -1.0;
  memset(&SD->u1.f1.dv2[25013], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[25153] = 1.0;
  memset(&SD->u1.f1.dv2[25154], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25199] = -1.0;
  memset(&SD->u1.f1.dv2[25200], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[25340] = 1.0;
  memset(&SD->u1.f1.dv2[25341], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25386] = -1.0;
  memset(&SD->u1.f1.dv2[25387], 0, 140U * sizeof(real_T));
  SD->u1.f1.dv2[25527] = 1.0;
  memset(&SD->u1.f1.dv2[25528], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[25573] = -1.0;
  memset(&SD->u1.f1.dv2[25574], 0, 1023U * sizeof(real_T));
  SD->u1.f1.dv2[26597] = -1.0;
  memset(&SD->u1.f1.dv2[26598], 0, 673U * sizeof(real_T));
  SD->u1.f1.dv2[27271] = -1.0;
  memset(&SD->u1.f1.dv2[27272], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27294] = -1.0;
  memset(&SD->u1.f1.dv2[27295], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[27458] = -1.0;
  memset(&SD->u1.f1.dv2[27459], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27481] = -1.0;
  memset(&SD->u1.f1.dv2[27482], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[27645] = -1.0;
  memset(&SD->u1.f1.dv2[27646], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27668] = -1.0;
  memset(&SD->u1.f1.dv2[27669], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[27832] = -1.0;
  memset(&SD->u1.f1.dv2[27833], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27855] = -1.0;
  memset(&SD->u1.f1.dv2[27856], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[28019] = -1.0;
  memset(&SD->u1.f1.dv2[28020], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28042] = -1.0;
  memset(&SD->u1.f1.dv2[28043], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[28206] = -1.0;
  memset(&SD->u1.f1.dv2[28207], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28229] = -1.0;
  memset(&SD->u1.f1.dv2[28230], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[28393] = -1.0;
  memset(&SD->u1.f1.dv2[28394], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28416] = -1.0;
  memset(&SD->u1.f1.dv2[28417], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[28580] = -1.0;
  memset(&SD->u1.f1.dv2[28581], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28603] = -1.0;
  memset(&SD->u1.f1.dv2[28604], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[28767] = -1.0;
  memset(&SD->u1.f1.dv2[28768], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28790] = -1.0;
  memset(&SD->u1.f1.dv2[28791], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[28954] = -1.0;
  memset(&SD->u1.f1.dv2[28955], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28977] = -1.0;
  memset(&SD->u1.f1.dv2[28978], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[29141] = -1.0;
  memset(&SD->u1.f1.dv2[29142], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29164] = -1.0;
  memset(&SD->u1.f1.dv2[29165], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[29328] = -1.0;
  memset(&SD->u1.f1.dv2[29329], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29351] = -1.0;
  memset(&SD->u1.f1.dv2[29352], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[29515] = -1.0;
  memset(&SD->u1.f1.dv2[29516], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29538] = -1.0;
  memset(&SD->u1.f1.dv2[29539], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[29702] = -1.0;
  memset(&SD->u1.f1.dv2[29703], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29725] = -1.0;
  memset(&SD->u1.f1.dv2[29726], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[29889] = -1.0;
  memset(&SD->u1.f1.dv2[29890], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[29912] = -1.0;
  memset(&SD->u1.f1.dv2[29913], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[30076] = -1.0;
  memset(&SD->u1.f1.dv2[30077], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30099] = -1.0;
  memset(&SD->u1.f1.dv2[30100], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[30263] = -1.0;
  memset(&SD->u1.f1.dv2[30264], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30286] = -1.0;
  memset(&SD->u1.f1.dv2[30287], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[30450] = -1.0;
  memset(&SD->u1.f1.dv2[30451], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30473] = -1.0;
  memset(&SD->u1.f1.dv2[30474], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[30637] = -1.0;
  memset(&SD->u1.f1.dv2[30638], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30660] = -1.0;
  memset(&SD->u1.f1.dv2[30661], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[30824] = -1.0;
  memset(&SD->u1.f1.dv2[30825], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[30847] = -1.0;
  memset(&SD->u1.f1.dv2[30848], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[31011] = -1.0;
  memset(&SD->u1.f1.dv2[31012], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31034] = -1.0;
  memset(&SD->u1.f1.dv2[31035], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[31198] = -1.0;
  memset(&SD->u1.f1.dv2[31199], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31221] = -1.0;
  memset(&SD->u1.f1.dv2[31222], 0, 163U * sizeof(real_T));
  SD->u1.f1.dv2[31385] = -1.0;
  memset(&SD->u1.f1.dv2[31386], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[31408] = -1.0;
  memset(&SD->u1.f1.dv2[31409], 0, 210U * sizeof(real_T));
  SD->u1.f1.dv2[31619] = 1.0;
  memset(&SD->u1.f1.dv2[31620], 0, 4253U * sizeof(real_T));
  SD->u1.f1.dv2[35873] = -1.0;
  SD->u1.f1.dv2[35874] = 0.0;
  SD->u1.f1.dv2[35875] = 0.0;
  SD->u1.f1.dv2[35876] = 0.0;
  SD->u1.f1.dv2[35877] = 0.0;
  SD->u1.f1.dv2[35878] = 0.0;
  SD->u1.f1.dv2[35879] = -1.0;
  memset(&SD->u1.f1.dv2[35880], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[36060] = -1.0;
  SD->u1.f1.dv2[36061] = 0.0;
  SD->u1.f1.dv2[36062] = 0.0;
  SD->u1.f1.dv2[36063] = 0.0;
  SD->u1.f1.dv2[36064] = 0.0;
  SD->u1.f1.dv2[36065] = 0.0;
  SD->u1.f1.dv2[36066] = -1.0;
  memset(&SD->u1.f1.dv2[36067], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[36247] = -1.0;
  SD->u1.f1.dv2[36248] = 0.0;
  SD->u1.f1.dv2[36249] = 0.0;
  SD->u1.f1.dv2[36250] = 0.0;
  SD->u1.f1.dv2[36251] = 0.0;
  SD->u1.f1.dv2[36252] = 0.0;
  SD->u1.f1.dv2[36253] = -1.0;
  memset(&SD->u1.f1.dv2[36254], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[36434] = -1.0;
  SD->u1.f1.dv2[36435] = 0.0;
  SD->u1.f1.dv2[36436] = 0.0;
  SD->u1.f1.dv2[36437] = 0.0;
  SD->u1.f1.dv2[36438] = 0.0;
  SD->u1.f1.dv2[36439] = 0.0;
  SD->u1.f1.dv2[36440] = -1.0;
  memset(&SD->u1.f1.dv2[36441], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[36621] = -1.0;
  SD->u1.f1.dv2[36622] = 0.0;
  SD->u1.f1.dv2[36623] = 0.0;
  SD->u1.f1.dv2[36624] = 0.0;
  SD->u1.f1.dv2[36625] = 0.0;
  SD->u1.f1.dv2[36626] = 0.0;
  SD->u1.f1.dv2[36627] = -1.0;
  memset(&SD->u1.f1.dv2[36628], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[36808] = -1.0;
  SD->u1.f1.dv2[36809] = 0.0;
  SD->u1.f1.dv2[36810] = 0.0;
  SD->u1.f1.dv2[36811] = 0.0;
  SD->u1.f1.dv2[36812] = 0.0;
  SD->u1.f1.dv2[36813] = 0.0;
  SD->u1.f1.dv2[36814] = -1.0;
  memset(&SD->u1.f1.dv2[36815], 0, 930U * sizeof(real_T));
  SD->u1.f1.dv2[37745] = -1.0;
  SD->u1.f1.dv2[37746] = 0.0;
  SD->u1.f1.dv2[37747] = 0.0;
  SD->u1.f1.dv2[37748] = 0.0;
  SD->u1.f1.dv2[37749] = 0.0;
  SD->u1.f1.dv2[37750] = 0.0;
  SD->u1.f1.dv2[37751] = -1.0;
  memset(&SD->u1.f1.dv2[37752], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[37932] = -1.0;
  SD->u1.f1.dv2[37933] = 0.0;
  SD->u1.f1.dv2[37934] = 0.0;
  SD->u1.f1.dv2[37935] = 0.0;
  SD->u1.f1.dv2[37936] = 0.0;
  SD->u1.f1.dv2[37937] = 0.0;
  SD->u1.f1.dv2[37938] = -1.0;
  memset(&SD->u1.f1.dv2[37939], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[38119] = -1.0;
  SD->u1.f1.dv2[38120] = 0.0;
  SD->u1.f1.dv2[38121] = 0.0;
  SD->u1.f1.dv2[38122] = 0.0;
  SD->u1.f1.dv2[38123] = 0.0;
  SD->u1.f1.dv2[38124] = 0.0;
  SD->u1.f1.dv2[38125] = -1.0;
  memset(&SD->u1.f1.dv2[38126], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[38306] = -1.0;
  SD->u1.f1.dv2[38307] = 0.0;
  SD->u1.f1.dv2[38308] = 0.0;
  SD->u1.f1.dv2[38309] = 0.0;
  SD->u1.f1.dv2[38310] = 0.0;
  SD->u1.f1.dv2[38311] = 0.0;
  SD->u1.f1.dv2[38312] = -1.0;
  memset(&SD->u1.f1.dv2[38313], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[38493] = -1.0;
  SD->u1.f1.dv2[38494] = 0.0;
  SD->u1.f1.dv2[38495] = 0.0;
  SD->u1.f1.dv2[38496] = 0.0;
  SD->u1.f1.dv2[38497] = 0.0;
  SD->u1.f1.dv2[38498] = 0.0;
  SD->u1.f1.dv2[38499] = -1.0;
  memset(&SD->u1.f1.dv2[38500], 0, 180U * sizeof(real_T));
  SD->u1.f1.dv2[38680] = -1.0;
  SD->u1.f1.dv2[38681] = 0.0;
  SD->u1.f1.dv2[38682] = 0.0;
  SD->u1.f1.dv2[38683] = 0.0;
  SD->u1.f1.dv2[38684] = 0.0;
  SD->u1.f1.dv2[38685] = 0.0;
  SD->u1.f1.dv2[38686] = -1.0;
  memset(&SD->u1.f1.dv2[38687], 0, 2233U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 186], &SD->u1.f1.dv2[i2 * 186], 186U * sizeof(real_T));
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

/* End of code generation (IqFast_RightStart4V40.cpp) */
