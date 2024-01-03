/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart8V40.cpp
 *
 * Code generation for function 'IqFast_RightStart8V40'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step8.h"
#include "IqFast_RightStart8V40.h"

/* Variable Definitions */
static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart8V40",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart8V40.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart8V40(Fast_MPCV40_form_Step8StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[37400], real_T biq[170])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART8V40 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART8V40(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     18-Aug-2023 15:34:58 */
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
  memset(&SD->u1.f1.dv2[139], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[341] = -1.0;
  memset(&SD->u1.f1.dv2[342], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[387] = 1.0;
  memset(&SD->u1.f1.dv2[388], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[433] = -in11[2];
  memset(&SD->u1.f1.dv2[434], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[479] = -in11[2];
  memset(&SD->u1.f1.dv2[480], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[682] = -1.0;
  memset(&SD->u1.f1.dv2[683], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[728] = 1.0;
  memset(&SD->u1.f1.dv2[729], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[774] = -in11[2];
  memset(&SD->u1.f1.dv2[775], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[820] = -in11[2];
  memset(&SD->u1.f1.dv2[821], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[1023] = -1.0;
  memset(&SD->u1.f1.dv2[1024], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1069] = 1.0;
  memset(&SD->u1.f1.dv2[1070], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1115] = -in11[2];
  memset(&SD->u1.f1.dv2[1116], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1161] = -in11[2];
  memset(&SD->u1.f1.dv2[1162], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[1364] = -1.0;
  memset(&SD->u1.f1.dv2[1365], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1410] = 1.0;
  memset(&SD->u1.f1.dv2[1411], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1456] = -in11[2];
  memset(&SD->u1.f1.dv2[1457], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1502] = -in11[2];
  memset(&SD->u1.f1.dv2[1503], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[1705] = -1.0;
  memset(&SD->u1.f1.dv2[1706], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1751] = 1.0;
  memset(&SD->u1.f1.dv2[1752], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1797] = -in11[2];
  memset(&SD->u1.f1.dv2[1798], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[1843] = -in11[2];
  memset(&SD->u1.f1.dv2[1844], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[2046] = -1.0;
  memset(&SD->u1.f1.dv2[2047], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2092] = 1.0;
  memset(&SD->u1.f1.dv2[2093], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2138] = -in11[2];
  memset(&SD->u1.f1.dv2[2139], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2184] = -in11[2];
  memset(&SD->u1.f1.dv2[2185], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[2387] = -1.0;
  memset(&SD->u1.f1.dv2[2388], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2433] = 1.0;
  memset(&SD->u1.f1.dv2[2434], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2479] = -in11[2];
  memset(&SD->u1.f1.dv2[2480], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2525] = -in11[2];
  memset(&SD->u1.f1.dv2[2526], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[2728] = -1.0;
  memset(&SD->u1.f1.dv2[2729], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2774] = 1.0;
  memset(&SD->u1.f1.dv2[2775], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2820] = -in11[2];
  memset(&SD->u1.f1.dv2[2821], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[2866] = -in11[2];
  memset(&SD->u1.f1.dv2[2867], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[3069] = -1.0;
  memset(&SD->u1.f1.dv2[3070], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3115] = 1.0;
  memset(&SD->u1.f1.dv2[3116], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3161] = -in11[2];
  memset(&SD->u1.f1.dv2[3162], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3207] = -in11[2];
  memset(&SD->u1.f1.dv2[3208], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[3410] = -1.0;
  memset(&SD->u1.f1.dv2[3411], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3456] = 1.0;
  memset(&SD->u1.f1.dv2[3457], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3502] = -in11[2];
  memset(&SD->u1.f1.dv2[3503], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3548] = -in11[2];
  memset(&SD->u1.f1.dv2[3549], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[3751] = -1.0;
  memset(&SD->u1.f1.dv2[3752], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3797] = 1.0;
  memset(&SD->u1.f1.dv2[3798], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3843] = -in11[2];
  memset(&SD->u1.f1.dv2[3844], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[3889] = -in11[2];
  memset(&SD->u1.f1.dv2[3890], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[4092] = -1.0;
  memset(&SD->u1.f1.dv2[4093], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4138] = 1.0;
  memset(&SD->u1.f1.dv2[4139], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4184] = -in11[2];
  memset(&SD->u1.f1.dv2[4185], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4230] = -in11[2];
  memset(&SD->u1.f1.dv2[4231], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[4433] = -1.0;
  memset(&SD->u1.f1.dv2[4434], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4479] = 1.0;
  memset(&SD->u1.f1.dv2[4480], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4525] = -in11[2];
  memset(&SD->u1.f1.dv2[4526], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4571] = -in11[2];
  memset(&SD->u1.f1.dv2[4572], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[4774] = -1.0;
  memset(&SD->u1.f1.dv2[4775], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4820] = 1.0;
  memset(&SD->u1.f1.dv2[4821], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4866] = -in11[2];
  memset(&SD->u1.f1.dv2[4867], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[4912] = -in11[2];
  memset(&SD->u1.f1.dv2[4913], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[5115] = -1.0;
  memset(&SD->u1.f1.dv2[5116], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5161] = 1.0;
  memset(&SD->u1.f1.dv2[5162], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5207] = -in11[2];
  memset(&SD->u1.f1.dv2[5208], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5253] = -in11[2];
  memset(&SD->u1.f1.dv2[5254], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[5456] = -1.0;
  memset(&SD->u1.f1.dv2[5457], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5502] = 1.0;
  memset(&SD->u1.f1.dv2[5503], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5548] = -in11[2];
  memset(&SD->u1.f1.dv2[5549], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5594] = -in11[2];
  memset(&SD->u1.f1.dv2[5595], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[5797] = -1.0;
  memset(&SD->u1.f1.dv2[5798], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5843] = 1.0;
  memset(&SD->u1.f1.dv2[5844], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5889] = -in11[2];
  memset(&SD->u1.f1.dv2[5890], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[5935] = -in11[2];
  memset(&SD->u1.f1.dv2[5936], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[6138] = -1.0;
  memset(&SD->u1.f1.dv2[6139], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6184] = 1.0;
  memset(&SD->u1.f1.dv2[6185], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6230] = -in11[2];
  memset(&SD->u1.f1.dv2[6231], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6276] = -in11[2];
  memset(&SD->u1.f1.dv2[6277], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[6479] = -1.0;
  memset(&SD->u1.f1.dv2[6480], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6525] = 1.0;
  memset(&SD->u1.f1.dv2[6526], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6571] = -in11[2];
  memset(&SD->u1.f1.dv2[6572], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6617] = -in11[2];
  memset(&SD->u1.f1.dv2[6618], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[6820] = -1.0;
  memset(&SD->u1.f1.dv2[6821], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6866] = 1.0;
  memset(&SD->u1.f1.dv2[6867], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6912] = -in11[2];
  memset(&SD->u1.f1.dv2[6913], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[6958] = -in11[2];
  memset(&SD->u1.f1.dv2[6959], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[7161] = -1.0;
  memset(&SD->u1.f1.dv2[7162], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7207] = 1.0;
  memset(&SD->u1.f1.dv2[7208], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7253] = -in11[2];
  memset(&SD->u1.f1.dv2[7254], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7299] = -in11[2];
  memset(&SD->u1.f1.dv2[7300], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[7502] = -1.0;
  memset(&SD->u1.f1.dv2[7503], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7548] = 1.0;
  memset(&SD->u1.f1.dv2[7549], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7594] = -in11[2];
  memset(&SD->u1.f1.dv2[7595], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7640] = -in11[2];
  memset(&SD->u1.f1.dv2[7641], 0, 202U * sizeof(real_T));
  SD->u1.f1.dv2[7843] = -1.0;
  memset(&SD->u1.f1.dv2[7844], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7889] = 1.0;
  memset(&SD->u1.f1.dv2[7890], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[7912] = -in11[3];
  memset(&SD->u1.f1.dv2[7913], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[7958] = -in11[3];
  memset(&SD->u1.f1.dv2[7959], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[8184] = -1.0;
  memset(&SD->u1.f1.dv2[8185], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8230] = 1.0;
  memset(&SD->u1.f1.dv2[8231], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8253] = -in11[3];
  memset(&SD->u1.f1.dv2[8254], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8299] = -in11[3];
  memset(&SD->u1.f1.dv2[8300], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[8525] = -1.0;
  memset(&SD->u1.f1.dv2[8526], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8571] = 1.0;
  memset(&SD->u1.f1.dv2[8572], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8594] = -in11[3];
  memset(&SD->u1.f1.dv2[8595], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8640] = -in11[3];
  memset(&SD->u1.f1.dv2[8641], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[8866] = -1.0;
  memset(&SD->u1.f1.dv2[8867], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8912] = 1.0;
  memset(&SD->u1.f1.dv2[8913], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[8935] = -in11[3];
  memset(&SD->u1.f1.dv2[8936], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[8981] = -in11[3];
  memset(&SD->u1.f1.dv2[8982], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[9207] = -1.0;
  memset(&SD->u1.f1.dv2[9208], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9253] = 1.0;
  memset(&SD->u1.f1.dv2[9254], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9276] = -in11[3];
  memset(&SD->u1.f1.dv2[9277], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9322] = -in11[3];
  memset(&SD->u1.f1.dv2[9323], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[9548] = -1.0;
  memset(&SD->u1.f1.dv2[9549], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9594] = 1.0;
  memset(&SD->u1.f1.dv2[9595], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9617] = -in11[3];
  memset(&SD->u1.f1.dv2[9618], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9663] = -in11[3];
  memset(&SD->u1.f1.dv2[9664], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[9889] = -1.0;
  memset(&SD->u1.f1.dv2[9890], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[9935] = 1.0;
  memset(&SD->u1.f1.dv2[9936], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[9958] = -in11[3];
  memset(&SD->u1.f1.dv2[9959], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10004] = -in11[3];
  memset(&SD->u1.f1.dv2[10005], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[10230] = -1.0;
  memset(&SD->u1.f1.dv2[10231], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10276] = 1.0;
  memset(&SD->u1.f1.dv2[10277], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10299] = -in11[3];
  memset(&SD->u1.f1.dv2[10300], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10345] = -in11[3];
  memset(&SD->u1.f1.dv2[10346], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[10571] = -1.0;
  memset(&SD->u1.f1.dv2[10572], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10617] = 1.0;
  memset(&SD->u1.f1.dv2[10618], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10640] = -in11[3];
  memset(&SD->u1.f1.dv2[10641], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10686] = -in11[3];
  memset(&SD->u1.f1.dv2[10687], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[10912] = -1.0;
  memset(&SD->u1.f1.dv2[10913], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[10958] = 1.0;
  memset(&SD->u1.f1.dv2[10959], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[10981] = -in11[3];
  memset(&SD->u1.f1.dv2[10982], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11027] = -in11[3];
  memset(&SD->u1.f1.dv2[11028], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[11253] = -1.0;
  memset(&SD->u1.f1.dv2[11254], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11299] = 1.0;
  memset(&SD->u1.f1.dv2[11300], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11322] = -in11[3];
  memset(&SD->u1.f1.dv2[11323], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11368] = -in11[3];
  memset(&SD->u1.f1.dv2[11369], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[11594] = -1.0;
  memset(&SD->u1.f1.dv2[11595], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11640] = 1.0;
  memset(&SD->u1.f1.dv2[11641], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[11663] = -in11[3];
  memset(&SD->u1.f1.dv2[11664], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11709] = -in11[3];
  memset(&SD->u1.f1.dv2[11710], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[11935] = -1.0;
  memset(&SD->u1.f1.dv2[11936], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[11981] = 1.0;
  memset(&SD->u1.f1.dv2[11982], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12004] = -in11[3];
  memset(&SD->u1.f1.dv2[12005], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12050] = -in11[3];
  memset(&SD->u1.f1.dv2[12051], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[12276] = -1.0;
  memset(&SD->u1.f1.dv2[12277], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12322] = 1.0;
  memset(&SD->u1.f1.dv2[12323], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12345] = -in11[3];
  memset(&SD->u1.f1.dv2[12346], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12391] = -in11[3];
  memset(&SD->u1.f1.dv2[12392], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[12617] = -1.0;
  memset(&SD->u1.f1.dv2[12618], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12663] = 1.0;
  memset(&SD->u1.f1.dv2[12664], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[12686] = -in11[3];
  memset(&SD->u1.f1.dv2[12687], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[12732] = -in11[3];
  memset(&SD->u1.f1.dv2[12733], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[12958] = -1.0;
  memset(&SD->u1.f1.dv2[12959], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13004] = 1.0;
  memset(&SD->u1.f1.dv2[13005], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13027] = -in11[3];
  memset(&SD->u1.f1.dv2[13028], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13073] = -in11[3];
  memset(&SD->u1.f1.dv2[13074], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[13299] = -1.0;
  memset(&SD->u1.f1.dv2[13300], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13345] = 1.0;
  memset(&SD->u1.f1.dv2[13346], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13368] = -in11[3];
  memset(&SD->u1.f1.dv2[13369], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13414] = -in11[3];
  memset(&SD->u1.f1.dv2[13415], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[13640] = -1.0;
  memset(&SD->u1.f1.dv2[13641], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13686] = 1.0;
  memset(&SD->u1.f1.dv2[13687], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[13709] = -in11[3];
  memset(&SD->u1.f1.dv2[13710], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[13755] = -in11[3];
  memset(&SD->u1.f1.dv2[13756], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[13981] = -1.0;
  memset(&SD->u1.f1.dv2[13982], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14027] = 1.0;
  memset(&SD->u1.f1.dv2[14028], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14050] = -in11[3];
  memset(&SD->u1.f1.dv2[14051], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14096] = -in11[3];
  memset(&SD->u1.f1.dv2[14097], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[14322] = -1.0;
  memset(&SD->u1.f1.dv2[14323], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14368] = 1.0;
  memset(&SD->u1.f1.dv2[14369], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14391] = -in11[3];
  memset(&SD->u1.f1.dv2[14392], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14437] = -in11[3];
  memset(&SD->u1.f1.dv2[14438], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[14663] = -1.0;
  memset(&SD->u1.f1.dv2[14664], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14709] = 1.0;
  memset(&SD->u1.f1.dv2[14710], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[14732] = -in11[3];
  memset(&SD->u1.f1.dv2[14733], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[14778] = -in11[3];
  memset(&SD->u1.f1.dv2[14779], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[15004] = -1.0;
  memset(&SD->u1.f1.dv2[15005], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15050] = 1.0;
  memset(&SD->u1.f1.dv2[15051], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15073] = -in11[3];
  memset(&SD->u1.f1.dv2[15074], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15119] = -in11[3];
  memset(&SD->u1.f1.dv2[15120], 0, 225U * sizeof(real_T));
  SD->u1.f1.dv2[15345] = -1.0;
  memset(&SD->u1.f1.dv2[15346], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15391] = 1.0;
  memset(&SD->u1.f1.dv2[15392], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[15414] = -in11[3];
  memset(&SD->u1.f1.dv2[15415], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15460] = -in11[3];
  memset(&SD->u1.f1.dv2[15461], 0, 179U * sizeof(real_T));
  SD->u1.f1.dv2[15640] = 1.0;
  memset(&SD->u1.f1.dv2[15641], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15686] = -1.0;
  memset(&SD->u1.f1.dv2[15687], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[15801] = 1.0;
  SD->u1.f1.dv2[15802] = 0.0;
  SD->u1.f1.dv2[15803] = -1.0;
  SD->u1.f1.dv2[15804] = 0.0;
  SD->u1.f1.dv2[15805] = 0.0;
  SD->u1.f1.dv2[15806] = 0.0;
  SD->u1.f1.dv2[15807] = 0.0;
  SD->u1.f1.dv2[15808] = 0.0;
  SD->u1.f1.dv2[15809] = 0.0;
  SD->u1.f1.dv2[15810] = 0.0;
  SD->u1.f1.dv2[15811] = 1.0;
  memset(&SD->u1.f1.dv2[15812], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[15857] = -1.0;
  memset(&SD->u1.f1.dv2[15858], 0, 114U * sizeof(real_T));
  SD->u1.f1.dv2[15972] = 1.0;
  SD->u1.f1.dv2[15973] = 0.0;
  SD->u1.f1.dv2[15974] = -1.0;
  SD->u1.f1.dv2[15975] = 0.0;
  SD->u1.f1.dv2[15976] = 0.0;
  SD->u1.f1.dv2[15977] = 0.0;
  SD->u1.f1.dv2[15978] = 0.0;
  SD->u1.f1.dv2[15979] = 0.0;
  SD->u1.f1.dv2[15980] = 0.0;
  SD->u1.f1.dv2[15981] = 0.0;
  SD->u1.f1.dv2[15982] = 1.0;
  memset(&SD->u1.f1.dv2[15983], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16028] = -1.0;
  memset(&SD->u1.f1.dv2[16029], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[16153] = 1.0;
  memset(&SD->u1.f1.dv2[16154], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16199] = -1.0;
  memset(&SD->u1.f1.dv2[16200], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[16324] = 1.0;
  memset(&SD->u1.f1.dv2[16325], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16370] = -1.0;
  memset(&SD->u1.f1.dv2[16371], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[16495] = 1.0;
  memset(&SD->u1.f1.dv2[16496], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16541] = -1.0;
  memset(&SD->u1.f1.dv2[16542], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[16666] = 1.0;
  memset(&SD->u1.f1.dv2[16667], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16712] = -1.0;
  memset(&SD->u1.f1.dv2[16713], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[16837] = 1.0;
  memset(&SD->u1.f1.dv2[16838], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[16883] = -1.0;
  memset(&SD->u1.f1.dv2[16884], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[17008] = 1.0;
  memset(&SD->u1.f1.dv2[17009], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17054] = -1.0;
  memset(&SD->u1.f1.dv2[17055], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[17179] = 1.0;
  memset(&SD->u1.f1.dv2[17180], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17225] = -1.0;
  memset(&SD->u1.f1.dv2[17226], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[17350] = 1.0;
  memset(&SD->u1.f1.dv2[17351], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17396] = -1.0;
  memset(&SD->u1.f1.dv2[17397], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[17521] = 1.0;
  memset(&SD->u1.f1.dv2[17522], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17567] = -1.0;
  memset(&SD->u1.f1.dv2[17568], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[17692] = 1.0;
  memset(&SD->u1.f1.dv2[17693], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17738] = -1.0;
  memset(&SD->u1.f1.dv2[17739], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[17863] = 1.0;
  memset(&SD->u1.f1.dv2[17864], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[17909] = -1.0;
  memset(&SD->u1.f1.dv2[17910], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[18034] = 1.0;
  memset(&SD->u1.f1.dv2[18035], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18080] = -1.0;
  memset(&SD->u1.f1.dv2[18081], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[18205] = 1.0;
  memset(&SD->u1.f1.dv2[18206], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18251] = -1.0;
  memset(&SD->u1.f1.dv2[18252], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[18376] = 1.0;
  memset(&SD->u1.f1.dv2[18377], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18422] = -1.0;
  memset(&SD->u1.f1.dv2[18423], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[18547] = 1.0;
  memset(&SD->u1.f1.dv2[18548], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18593] = -1.0;
  memset(&SD->u1.f1.dv2[18594], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[18718] = 1.0;
  memset(&SD->u1.f1.dv2[18719], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18764] = -1.0;
  memset(&SD->u1.f1.dv2[18765], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[18889] = 1.0;
  memset(&SD->u1.f1.dv2[18890], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[18935] = -1.0;
  memset(&SD->u1.f1.dv2[18936], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[19060] = 1.0;
  memset(&SD->u1.f1.dv2[19061], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19106] = -1.0;
  memset(&SD->u1.f1.dv2[19107], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[19231] = 1.0;
  memset(&SD->u1.f1.dv2[19232], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19277] = -1.0;
  memset(&SD->u1.f1.dv2[19278], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[19402] = 1.0;
  memset(&SD->u1.f1.dv2[19403], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19448] = -1.0;
  memset(&SD->u1.f1.dv2[19449], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[19573] = 1.0;
  memset(&SD->u1.f1.dv2[19574], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19619] = -1.0;
  memset(&SD->u1.f1.dv2[19620], 0, 95U * sizeof(real_T));
  SD->u1.f1.dv2[19715] = 1.0;
  SD->u1.f1.dv2[19716] = 0.0;
  SD->u1.f1.dv2[19717] = -1.0;
  memset(&SD->u1.f1.dv2[19718], 0, 26U * sizeof(real_T));
  SD->u1.f1.dv2[19744] = 1.0;
  memset(&SD->u1.f1.dv2[19745], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19790] = -1.0;
  memset(&SD->u1.f1.dv2[19791], 0, 95U * sizeof(real_T));
  SD->u1.f1.dv2[19886] = 1.0;
  SD->u1.f1.dv2[19887] = 0.0;
  SD->u1.f1.dv2[19888] = -1.0;
  memset(&SD->u1.f1.dv2[19889], 0, 26U * sizeof(real_T));
  SD->u1.f1.dv2[19915] = 1.0;
  memset(&SD->u1.f1.dv2[19916], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[19961] = -1.0;
  memset(&SD->u1.f1.dv2[19962], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[20086] = 1.0;
  memset(&SD->u1.f1.dv2[20087], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20132] = -1.0;
  memset(&SD->u1.f1.dv2[20133], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[20257] = 1.0;
  memset(&SD->u1.f1.dv2[20258], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20303] = -1.0;
  memset(&SD->u1.f1.dv2[20304], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[20428] = 1.0;
  memset(&SD->u1.f1.dv2[20429], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20474] = -1.0;
  memset(&SD->u1.f1.dv2[20475], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[20599] = 1.0;
  memset(&SD->u1.f1.dv2[20600], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20645] = -1.0;
  memset(&SD->u1.f1.dv2[20646], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[20770] = 1.0;
  memset(&SD->u1.f1.dv2[20771], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20816] = -1.0;
  memset(&SD->u1.f1.dv2[20817], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[20941] = 1.0;
  memset(&SD->u1.f1.dv2[20942], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[20987] = -1.0;
  memset(&SD->u1.f1.dv2[20988], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[21112] = 1.0;
  memset(&SD->u1.f1.dv2[21113], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21158] = -1.0;
  memset(&SD->u1.f1.dv2[21159], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[21283] = 1.0;
  memset(&SD->u1.f1.dv2[21284], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21329] = -1.0;
  memset(&SD->u1.f1.dv2[21330], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[21454] = 1.0;
  memset(&SD->u1.f1.dv2[21455], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21500] = -1.0;
  memset(&SD->u1.f1.dv2[21501], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[21625] = 1.0;
  memset(&SD->u1.f1.dv2[21626], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21671] = -1.0;
  memset(&SD->u1.f1.dv2[21672], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[21796] = 1.0;
  memset(&SD->u1.f1.dv2[21797], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[21842] = -1.0;
  memset(&SD->u1.f1.dv2[21843], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[21967] = 1.0;
  memset(&SD->u1.f1.dv2[21968], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22013] = -1.0;
  memset(&SD->u1.f1.dv2[22014], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[22138] = 1.0;
  memset(&SD->u1.f1.dv2[22139], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22184] = -1.0;
  memset(&SD->u1.f1.dv2[22185], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[22309] = 1.0;
  memset(&SD->u1.f1.dv2[22310], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22355] = -1.0;
  memset(&SD->u1.f1.dv2[22356], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[22480] = 1.0;
  memset(&SD->u1.f1.dv2[22481], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22526] = -1.0;
  memset(&SD->u1.f1.dv2[22527], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[22651] = 1.0;
  memset(&SD->u1.f1.dv2[22652], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22697] = -1.0;
  memset(&SD->u1.f1.dv2[22698], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[22822] = 1.0;
  memset(&SD->u1.f1.dv2[22823], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[22868] = -1.0;
  memset(&SD->u1.f1.dv2[22869], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[22993] = 1.0;
  memset(&SD->u1.f1.dv2[22994], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23039] = -1.0;
  memset(&SD->u1.f1.dv2[23040], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[23164] = 1.0;
  memset(&SD->u1.f1.dv2[23165], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23210] = -1.0;
  memset(&SD->u1.f1.dv2[23211], 0, 124U * sizeof(real_T));
  SD->u1.f1.dv2[23335] = 1.0;
  memset(&SD->u1.f1.dv2[23336], 0, 45U * sizeof(real_T));
  SD->u1.f1.dv2[23381] = -1.0;
  memset(&SD->u1.f1.dv2[23382], 0, 927U * sizeof(real_T));
  SD->u1.f1.dv2[24309] = -1.0;
  memset(&SD->u1.f1.dv2[24310], 0, 625U * sizeof(real_T));
  SD->u1.f1.dv2[24935] = -1.0;
  memset(&SD->u1.f1.dv2[24936], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[24958] = -1.0;
  memset(&SD->u1.f1.dv2[24959], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[25106] = -1.0;
  memset(&SD->u1.f1.dv2[25107], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25129] = -1.0;
  memset(&SD->u1.f1.dv2[25130], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[25277] = -1.0;
  memset(&SD->u1.f1.dv2[25278], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25300] = -1.0;
  memset(&SD->u1.f1.dv2[25301], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[25448] = -1.0;
  memset(&SD->u1.f1.dv2[25449], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25471] = -1.0;
  memset(&SD->u1.f1.dv2[25472], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[25619] = -1.0;
  memset(&SD->u1.f1.dv2[25620], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25642] = -1.0;
  memset(&SD->u1.f1.dv2[25643], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[25790] = -1.0;
  memset(&SD->u1.f1.dv2[25791], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25813] = -1.0;
  memset(&SD->u1.f1.dv2[25814], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[25961] = -1.0;
  memset(&SD->u1.f1.dv2[25962], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[25984] = -1.0;
  memset(&SD->u1.f1.dv2[25985], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[26132] = -1.0;
  memset(&SD->u1.f1.dv2[26133], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26155] = -1.0;
  memset(&SD->u1.f1.dv2[26156], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[26303] = -1.0;
  memset(&SD->u1.f1.dv2[26304], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26326] = -1.0;
  memset(&SD->u1.f1.dv2[26327], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[26474] = -1.0;
  memset(&SD->u1.f1.dv2[26475], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26497] = -1.0;
  memset(&SD->u1.f1.dv2[26498], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[26645] = -1.0;
  memset(&SD->u1.f1.dv2[26646], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26668] = -1.0;
  memset(&SD->u1.f1.dv2[26669], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[26816] = -1.0;
  memset(&SD->u1.f1.dv2[26817], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[26839] = -1.0;
  memset(&SD->u1.f1.dv2[26840], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[26987] = -1.0;
  memset(&SD->u1.f1.dv2[26988], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27010] = -1.0;
  memset(&SD->u1.f1.dv2[27011], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[27158] = -1.0;
  memset(&SD->u1.f1.dv2[27159], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27181] = -1.0;
  memset(&SD->u1.f1.dv2[27182], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[27329] = -1.0;
  memset(&SD->u1.f1.dv2[27330], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27352] = -1.0;
  memset(&SD->u1.f1.dv2[27353], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[27500] = -1.0;
  memset(&SD->u1.f1.dv2[27501], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27523] = -1.0;
  memset(&SD->u1.f1.dv2[27524], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[27671] = -1.0;
  memset(&SD->u1.f1.dv2[27672], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27694] = -1.0;
  memset(&SD->u1.f1.dv2[27695], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[27842] = -1.0;
  memset(&SD->u1.f1.dv2[27843], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[27865] = -1.0;
  memset(&SD->u1.f1.dv2[27866], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[28013] = -1.0;
  memset(&SD->u1.f1.dv2[28014], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28036] = -1.0;
  memset(&SD->u1.f1.dv2[28037], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[28184] = -1.0;
  memset(&SD->u1.f1.dv2[28185], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28207] = -1.0;
  memset(&SD->u1.f1.dv2[28208], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[28355] = -1.0;
  memset(&SD->u1.f1.dv2[28356], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28378] = -1.0;
  memset(&SD->u1.f1.dv2[28379], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[28526] = -1.0;
  memset(&SD->u1.f1.dv2[28527], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28549] = -1.0;
  memset(&SD->u1.f1.dv2[28550], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[28697] = -1.0;
  memset(&SD->u1.f1.dv2[28698], 0, 22U * sizeof(real_T));
  SD->u1.f1.dv2[28720] = -1.0;
  memset(&SD->u1.f1.dv2[28721], 0, 178U * sizeof(real_T));
  SD->u1.f1.dv2[28899] = 1.0;
  memset(&SD->u1.f1.dv2[28900], 0, 3901U * sizeof(real_T));
  SD->u1.f1.dv2[32801] = -1.0;
  SD->u1.f1.dv2[32802] = 0.0;
  SD->u1.f1.dv2[32803] = -1.0;
  memset(&SD->u1.f1.dv2[32804], 0, 168U * sizeof(real_T));
  SD->u1.f1.dv2[32972] = -1.0;
  SD->u1.f1.dv2[32973] = 0.0;
  SD->u1.f1.dv2[32974] = -1.0;
  memset(&SD->u1.f1.dv2[32975], 0, 1530U * sizeof(real_T));
  SD->u1.f1.dv2[34505] = -1.0;
  SD->u1.f1.dv2[34506] = 0.0;
  SD->u1.f1.dv2[34507] = -1.0;
  memset(&SD->u1.f1.dv2[34508], 0, 168U * sizeof(real_T));
  SD->u1.f1.dv2[34676] = -1.0;
  SD->u1.f1.dv2[34677] = 0.0;
  SD->u1.f1.dv2[34678] = -1.0;
  memset(&SD->u1.f1.dv2[34679], 0, 2721U * sizeof(real_T));
  for (i2 = 0; i2 < 220; i2++) {
    memcpy(&Aiq[i2 * 170], &SD->u1.f1.dv2[i2 * 170], 170U * sizeof(real_T));
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
  biq[163] = t9;
  biq[164] = t9;
  biq[165] = t10;
  biq[166] = t10;
  biq[167] = t11;
  biq[168] = t11;
  biq[169] = -in9[1];
}

/* End of code generation (IqFast_RightStart8V40.cpp) */
