/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart1V12.cpp
 *
 * Code generation for function 'IqFast_RightStart1V12'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step1.h"
#include "IqFast_RightStart1V12.h"

/* Variable Definitions */
static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V12.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart1V12(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [21280], real_T biq[133])
{
  int32_T i2;
  real_T dv2[21280];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART1V12 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART1V12(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     25-Jul-2023 13:27:10 */
  i2 = in4->size[1];
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&rc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&qc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&pc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(4 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i2, (emlrtBCInfo *)&oc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&nc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(6 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i2, (emlrtBCInfo *)&mc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&lc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(8 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i2, (emlrtBCInfo *)&kc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&jc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&ic_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&hc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&gc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(4 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i2, (emlrtBCInfo *)&fc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&ec_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(6 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i2, (emlrtBCInfo *)&dc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&cc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(8 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i2, (emlrtBCInfo *)&bc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&ac_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(10 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i2, (emlrtBCInfo *)&yb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&xb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(12 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i2, (emlrtBCInfo *)&wb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&vb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(14 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i2, (emlrtBCInfo *)&ub_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&tb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(16 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i2, (emlrtBCInfo *)&sb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&rb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(10 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i2, (emlrtBCInfo *)&qb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&pb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(12 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i2, (emlrtBCInfo *)&ob_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&nb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(14 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i2, (emlrtBCInfo *)&mb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&lb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(16 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i2, (emlrtBCInfo *)&kb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&jb_emlrtBCI, sp);
  }

  dv2[0] = -1.0;
  memset(&dv2[1], 0, 33U * sizeof(real_T));
  dv2[34] = 1.0;
  memset(&dv2[35], 0, 33U * sizeof(real_T));
  dv2[68] = -in11[2];
  memset(&dv2[69], 0, 33U * sizeof(real_T));
  dv2[102] = -in11[2];
  memset(&dv2[103], 0, 164U * sizeof(real_T));
  dv2[267] = -1.0;
  memset(&dv2[268], 0, 33U * sizeof(real_T));
  dv2[301] = 1.0;
  memset(&dv2[302], 0, 33U * sizeof(real_T));
  dv2[335] = -in11[2];
  memset(&dv2[336], 0, 33U * sizeof(real_T));
  dv2[369] = -in11[2];
  memset(&dv2[370], 0, 164U * sizeof(real_T));
  dv2[534] = -1.0;
  memset(&dv2[535], 0, 33U * sizeof(real_T));
  dv2[568] = 1.0;
  memset(&dv2[569], 0, 33U * sizeof(real_T));
  dv2[602] = -in11[2];
  memset(&dv2[603], 0, 33U * sizeof(real_T));
  dv2[636] = -in11[2];
  memset(&dv2[637], 0, 164U * sizeof(real_T));
  dv2[801] = -1.0;
  memset(&dv2[802], 0, 33U * sizeof(real_T));
  dv2[835] = 1.0;
  memset(&dv2[836], 0, 33U * sizeof(real_T));
  dv2[869] = -in11[2];
  memset(&dv2[870], 0, 33U * sizeof(real_T));
  dv2[903] = -in11[2];
  memset(&dv2[904], 0, 164U * sizeof(real_T));
  dv2[1068] = -1.0;
  memset(&dv2[1069], 0, 33U * sizeof(real_T));
  dv2[1102] = 1.0;
  memset(&dv2[1103], 0, 33U * sizeof(real_T));
  dv2[1136] = -in11[2];
  memset(&dv2[1137], 0, 33U * sizeof(real_T));
  dv2[1170] = -in11[2];
  memset(&dv2[1171], 0, 164U * sizeof(real_T));
  dv2[1335] = -1.0;
  memset(&dv2[1336], 0, 33U * sizeof(real_T));
  dv2[1369] = 1.0;
  memset(&dv2[1370], 0, 33U * sizeof(real_T));
  dv2[1403] = -in11[2];
  memset(&dv2[1404], 0, 33U * sizeof(real_T));
  dv2[1437] = -in11[2];
  memset(&dv2[1438], 0, 164U * sizeof(real_T));
  dv2[1602] = -1.0;
  memset(&dv2[1603], 0, 33U * sizeof(real_T));
  dv2[1636] = 1.0;
  memset(&dv2[1637], 0, 33U * sizeof(real_T));
  dv2[1670] = -in11[2];
  memset(&dv2[1671], 0, 33U * sizeof(real_T));
  dv2[1704] = -in11[2];
  memset(&dv2[1705], 0, 164U * sizeof(real_T));
  dv2[1869] = -1.0;
  memset(&dv2[1870], 0, 33U * sizeof(real_T));
  dv2[1903] = 1.0;
  memset(&dv2[1904], 0, 33U * sizeof(real_T));
  dv2[1937] = -in11[2];
  memset(&dv2[1938], 0, 33U * sizeof(real_T));
  dv2[1971] = -in11[2];
  memset(&dv2[1972], 0, 164U * sizeof(real_T));
  dv2[2136] = -1.0;
  memset(&dv2[2137], 0, 33U * sizeof(real_T));
  dv2[2170] = 1.0;
  memset(&dv2[2171], 0, 33U * sizeof(real_T));
  dv2[2204] = -in11[2];
  memset(&dv2[2205], 0, 33U * sizeof(real_T));
  dv2[2238] = -in11[2];
  memset(&dv2[2239], 0, 164U * sizeof(real_T));
  dv2[2403] = -1.0;
  memset(&dv2[2404], 0, 33U * sizeof(real_T));
  dv2[2437] = 1.0;
  memset(&dv2[2438], 0, 33U * sizeof(real_T));
  dv2[2471] = -in11[2];
  memset(&dv2[2472], 0, 33U * sizeof(real_T));
  dv2[2505] = -in11[2];
  memset(&dv2[2506], 0, 164U * sizeof(real_T));
  dv2[2670] = -1.0;
  memset(&dv2[2671], 0, 33U * sizeof(real_T));
  dv2[2704] = 1.0;
  memset(&dv2[2705], 0, 33U * sizeof(real_T));
  dv2[2738] = -in11[2];
  memset(&dv2[2739], 0, 33U * sizeof(real_T));
  dv2[2772] = -in11[2];
  memset(&dv2[2773], 0, 164U * sizeof(real_T));
  dv2[2937] = -1.0;
  memset(&dv2[2938], 0, 33U * sizeof(real_T));
  dv2[2971] = 1.0;
  memset(&dv2[2972], 0, 33U * sizeof(real_T));
  dv2[3005] = -in11[2];
  memset(&dv2[3006], 0, 33U * sizeof(real_T));
  dv2[3039] = -in11[2];
  memset(&dv2[3040], 0, 164U * sizeof(real_T));
  dv2[3204] = -1.0;
  memset(&dv2[3205], 0, 33U * sizeof(real_T));
  dv2[3238] = 1.0;
  memset(&dv2[3239], 0, 33U * sizeof(real_T));
  dv2[3272] = -in11[2];
  memset(&dv2[3273], 0, 33U * sizeof(real_T));
  dv2[3306] = -in11[2];
  memset(&dv2[3307], 0, 164U * sizeof(real_T));
  dv2[3471] = -1.0;
  memset(&dv2[3472], 0, 33U * sizeof(real_T));
  dv2[3505] = 1.0;
  memset(&dv2[3506], 0, 33U * sizeof(real_T));
  dv2[3539] = -in11[2];
  memset(&dv2[3540], 0, 33U * sizeof(real_T));
  dv2[3573] = -in11[2];
  memset(&dv2[3574], 0, 164U * sizeof(real_T));
  dv2[3738] = -1.0;
  memset(&dv2[3739], 0, 33U * sizeof(real_T));
  dv2[3772] = 1.0;
  memset(&dv2[3773], 0, 33U * sizeof(real_T));
  dv2[3806] = -in11[2];
  memset(&dv2[3807], 0, 33U * sizeof(real_T));
  dv2[3840] = -in11[2];
  memset(&dv2[3841], 0, 164U * sizeof(real_T));
  dv2[4005] = -1.0;
  memset(&dv2[4006], 0, 33U * sizeof(real_T));
  dv2[4039] = 1.0;
  memset(&dv2[4040], 0, 33U * sizeof(real_T));
  dv2[4073] = -in11[2];
  memset(&dv2[4074], 0, 33U * sizeof(real_T));
  dv2[4107] = -in11[2];
  memset(&dv2[4108], 0, 164U * sizeof(real_T));
  dv2[4272] = -1.0;
  memset(&dv2[4273], 0, 33U * sizeof(real_T));
  dv2[4306] = 1.0;
  memset(&dv2[4307], 0, 33U * sizeof(real_T));
  dv2[4340] = -in11[2];
  memset(&dv2[4341], 0, 33U * sizeof(real_T));
  dv2[4374] = -in11[2];
  memset(&dv2[4375], 0, 164U * sizeof(real_T));
  dv2[4539] = -1.0;
  memset(&dv2[4540], 0, 33U * sizeof(real_T));
  dv2[4573] = 1.0;
  memset(&dv2[4574], 0, sizeof(real_T) << 4);
  dv2[4590] = -in11[3];
  memset(&dv2[4591], 0, 33U * sizeof(real_T));
  dv2[4624] = -in11[3];
  memset(&dv2[4625], 0, 181U * sizeof(real_T));
  dv2[4806] = -1.0;
  memset(&dv2[4807], 0, 33U * sizeof(real_T));
  dv2[4840] = 1.0;
  memset(&dv2[4841], 0, sizeof(real_T) << 4);
  dv2[4857] = -in11[3];
  memset(&dv2[4858], 0, 33U * sizeof(real_T));
  dv2[4891] = -in11[3];
  memset(&dv2[4892], 0, 181U * sizeof(real_T));
  dv2[5073] = -1.0;
  memset(&dv2[5074], 0, 33U * sizeof(real_T));
  dv2[5107] = 1.0;
  memset(&dv2[5108], 0, sizeof(real_T) << 4);
  dv2[5124] = -in11[3];
  memset(&dv2[5125], 0, 33U * sizeof(real_T));
  dv2[5158] = -in11[3];
  memset(&dv2[5159], 0, 181U * sizeof(real_T));
  dv2[5340] = -1.0;
  memset(&dv2[5341], 0, 33U * sizeof(real_T));
  dv2[5374] = 1.0;
  memset(&dv2[5375], 0, sizeof(real_T) << 4);
  dv2[5391] = -in11[3];
  memset(&dv2[5392], 0, 33U * sizeof(real_T));
  dv2[5425] = -in11[3];
  memset(&dv2[5426], 0, 181U * sizeof(real_T));
  dv2[5607] = -1.0;
  memset(&dv2[5608], 0, 33U * sizeof(real_T));
  dv2[5641] = 1.0;
  memset(&dv2[5642], 0, sizeof(real_T) << 4);
  dv2[5658] = -in11[3];
  memset(&dv2[5659], 0, 33U * sizeof(real_T));
  dv2[5692] = -in11[3];
  memset(&dv2[5693], 0, 181U * sizeof(real_T));
  dv2[5874] = -1.0;
  memset(&dv2[5875], 0, 33U * sizeof(real_T));
  dv2[5908] = 1.0;
  memset(&dv2[5909], 0, sizeof(real_T) << 4);
  dv2[5925] = -in11[3];
  memset(&dv2[5926], 0, 33U * sizeof(real_T));
  dv2[5959] = -in11[3];
  memset(&dv2[5960], 0, 181U * sizeof(real_T));
  dv2[6141] = -1.0;
  memset(&dv2[6142], 0, 33U * sizeof(real_T));
  dv2[6175] = 1.0;
  memset(&dv2[6176], 0, sizeof(real_T) << 4);
  dv2[6192] = -in11[3];
  memset(&dv2[6193], 0, 33U * sizeof(real_T));
  dv2[6226] = -in11[3];
  memset(&dv2[6227], 0, 181U * sizeof(real_T));
  dv2[6408] = -1.0;
  memset(&dv2[6409], 0, 33U * sizeof(real_T));
  dv2[6442] = 1.0;
  memset(&dv2[6443], 0, sizeof(real_T) << 4);
  dv2[6459] = -in11[3];
  memset(&dv2[6460], 0, 33U * sizeof(real_T));
  dv2[6493] = -in11[3];
  memset(&dv2[6494], 0, 181U * sizeof(real_T));
  dv2[6675] = -1.0;
  memset(&dv2[6676], 0, 33U * sizeof(real_T));
  dv2[6709] = 1.0;
  memset(&dv2[6710], 0, sizeof(real_T) << 4);
  dv2[6726] = -in11[3];
  memset(&dv2[6727], 0, 33U * sizeof(real_T));
  dv2[6760] = -in11[3];
  memset(&dv2[6761], 0, 181U * sizeof(real_T));
  dv2[6942] = -1.0;
  memset(&dv2[6943], 0, 33U * sizeof(real_T));
  dv2[6976] = 1.0;
  memset(&dv2[6977], 0, sizeof(real_T) << 4);
  dv2[6993] = -in11[3];
  memset(&dv2[6994], 0, 33U * sizeof(real_T));
  dv2[7027] = -in11[3];
  memset(&dv2[7028], 0, 181U * sizeof(real_T));
  dv2[7209] = -1.0;
  memset(&dv2[7210], 0, 33U * sizeof(real_T));
  dv2[7243] = 1.0;
  memset(&dv2[7244], 0, sizeof(real_T) << 4);
  dv2[7260] = -in11[3];
  memset(&dv2[7261], 0, 33U * sizeof(real_T));
  dv2[7294] = -in11[3];
  memset(&dv2[7295], 0, 181U * sizeof(real_T));
  dv2[7476] = -1.0;
  memset(&dv2[7477], 0, 33U * sizeof(real_T));
  dv2[7510] = 1.0;
  memset(&dv2[7511], 0, sizeof(real_T) << 4);
  dv2[7527] = -in11[3];
  memset(&dv2[7528], 0, 33U * sizeof(real_T));
  dv2[7561] = -in11[3];
  memset(&dv2[7562], 0, 181U * sizeof(real_T));
  dv2[7743] = -1.0;
  memset(&dv2[7744], 0, 33U * sizeof(real_T));
  dv2[7777] = 1.0;
  memset(&dv2[7778], 0, sizeof(real_T) << 4);
  dv2[7794] = -in11[3];
  memset(&dv2[7795], 0, 33U * sizeof(real_T));
  dv2[7828] = -in11[3];
  memset(&dv2[7829], 0, 181U * sizeof(real_T));
  dv2[8010] = -1.0;
  memset(&dv2[8011], 0, 33U * sizeof(real_T));
  dv2[8044] = 1.0;
  memset(&dv2[8045], 0, sizeof(real_T) << 4);
  dv2[8061] = -in11[3];
  memset(&dv2[8062], 0, 33U * sizeof(real_T));
  dv2[8095] = -in11[3];
  memset(&dv2[8096], 0, 181U * sizeof(real_T));
  dv2[8277] = -1.0;
  memset(&dv2[8278], 0, 33U * sizeof(real_T));
  dv2[8311] = 1.0;
  memset(&dv2[8312], 0, sizeof(real_T) << 4);
  dv2[8328] = -in11[3];
  memset(&dv2[8329], 0, 33U * sizeof(real_T));
  dv2[8362] = -in11[3];
  memset(&dv2[8363], 0, 181U * sizeof(real_T));
  dv2[8544] = -1.0;
  memset(&dv2[8545], 0, 33U * sizeof(real_T));
  dv2[8578] = 1.0;
  memset(&dv2[8579], 0, sizeof(real_T) << 4);
  dv2[8595] = -in11[3];
  memset(&dv2[8596], 0, 33U * sizeof(real_T));
  dv2[8629] = -in11[3];
  memset(&dv2[8630], 0, 181U * sizeof(real_T));
  dv2[8811] = -1.0;
  memset(&dv2[8812], 0, 33U * sizeof(real_T));
  dv2[8845] = 1.0;
  memset(&dv2[8846], 0, sizeof(real_T) << 4);
  dv2[8862] = -in11[3];
  memset(&dv2[8863], 0, 33U * sizeof(real_T));
  dv2[8896] = -in11[3];
  memset(&dv2[8897], 0, 147U * sizeof(real_T));
  dv2[9044] = 1.0;
  memset(&dv2[9045], 0, 33U * sizeof(real_T));
  dv2[9078] = -1.0;
  memset(&dv2[9079], 0, 84U * sizeof(real_T));
  dv2[9163] = 1.0;
  dv2[9164] = 0.0;
  dv2[9165] = 0.0;
  dv2[9166] = -1.0;
  memset(&dv2[9167], 0, 11U * sizeof(real_T));
  dv2[9178] = 1.0;
  memset(&dv2[9179], 0, 33U * sizeof(real_T));
  dv2[9212] = -1.0;
  memset(&dv2[9213], 0, 84U * sizeof(real_T));
  dv2[9297] = 1.0;
  dv2[9298] = 0.0;
  dv2[9299] = 0.0;
  dv2[9300] = -1.0;
  memset(&dv2[9301], 0, 11U * sizeof(real_T));
  dv2[9312] = 1.0;
  memset(&dv2[9313], 0, 33U * sizeof(real_T));
  dv2[9346] = -1.0;
  memset(&dv2[9347], 0, 84U * sizeof(real_T));
  dv2[9431] = 1.0;
  dv2[9432] = 0.0;
  dv2[9433] = 0.0;
  dv2[9434] = -1.0;
  memset(&dv2[9435], 0, 11U * sizeof(real_T));
  dv2[9446] = 1.0;
  memset(&dv2[9447], 0, 33U * sizeof(real_T));
  dv2[9480] = -1.0;
  memset(&dv2[9481], 0, 99U * sizeof(real_T));
  dv2[9580] = 1.0;
  memset(&dv2[9581], 0, 33U * sizeof(real_T));
  dv2[9614] = -1.0;
  memset(&dv2[9615], 0, 99U * sizeof(real_T));
  dv2[9714] = 1.0;
  memset(&dv2[9715], 0, 33U * sizeof(real_T));
  dv2[9748] = -1.0;
  memset(&dv2[9749], 0, 99U * sizeof(real_T));
  dv2[9848] = 1.0;
  memset(&dv2[9849], 0, 33U * sizeof(real_T));
  dv2[9882] = -1.0;
  memset(&dv2[9883], 0, 99U * sizeof(real_T));
  dv2[9982] = 1.0;
  memset(&dv2[9983], 0, 33U * sizeof(real_T));
  dv2[10016] = -1.0;
  memset(&dv2[10017], 0, 99U * sizeof(real_T));
  dv2[10116] = 1.0;
  memset(&dv2[10117], 0, 33U * sizeof(real_T));
  dv2[10150] = -1.0;
  memset(&dv2[10151], 0, 99U * sizeof(real_T));
  dv2[10250] = 1.0;
  memset(&dv2[10251], 0, 33U * sizeof(real_T));
  dv2[10284] = -1.0;
  memset(&dv2[10285], 0, 99U * sizeof(real_T));
  dv2[10384] = 1.0;
  memset(&dv2[10385], 0, 33U * sizeof(real_T));
  dv2[10418] = -1.0;
  memset(&dv2[10419], 0, 99U * sizeof(real_T));
  dv2[10518] = 1.0;
  memset(&dv2[10519], 0, 33U * sizeof(real_T));
  dv2[10552] = -1.0;
  memset(&dv2[10553], 0, 99U * sizeof(real_T));
  dv2[10652] = 1.0;
  memset(&dv2[10653], 0, 33U * sizeof(real_T));
  dv2[10686] = -1.0;
  memset(&dv2[10687], 0, 99U * sizeof(real_T));
  dv2[10786] = 1.0;
  memset(&dv2[10787], 0, 33U * sizeof(real_T));
  dv2[10820] = -1.0;
  memset(&dv2[10821], 0, 99U * sizeof(real_T));
  dv2[10920] = 1.0;
  memset(&dv2[10921], 0, 33U * sizeof(real_T));
  dv2[10954] = -1.0;
  memset(&dv2[10955], 0, 99U * sizeof(real_T));
  dv2[11054] = 1.0;
  memset(&dv2[11055], 0, 33U * sizeof(real_T));
  dv2[11088] = -1.0;
  memset(&dv2[11089], 0, 99U * sizeof(real_T));
  dv2[11188] = 1.0;
  memset(&dv2[11189], 0, 33U * sizeof(real_T));
  dv2[11222] = -1.0;
  memset(&dv2[11223], 0, 99U * sizeof(real_T));
  dv2[11322] = 1.0;
  memset(&dv2[11323], 0, 33U * sizeof(real_T));
  dv2[11356] = -1.0;
  memset(&dv2[11357], 0, 73U * sizeof(real_T));
  dv2[11430] = 1.0;
  dv2[11431] = 0.0;
  dv2[11432] = 0.0;
  dv2[11433] = -1.0;
  memset(&dv2[11434], 0, 22U * sizeof(real_T));
  dv2[11456] = 1.0;
  memset(&dv2[11457], 0, 33U * sizeof(real_T));
  dv2[11490] = -1.0;
  memset(&dv2[11491], 0, 73U * sizeof(real_T));
  dv2[11564] = 1.0;
  dv2[11565] = 0.0;
  dv2[11566] = 0.0;
  dv2[11567] = -1.0;
  memset(&dv2[11568], 0, 22U * sizeof(real_T));
  dv2[11590] = 1.0;
  memset(&dv2[11591], 0, 33U * sizeof(real_T));
  dv2[11624] = -1.0;
  memset(&dv2[11625], 0, 73U * sizeof(real_T));
  dv2[11698] = 1.0;
  dv2[11699] = 0.0;
  dv2[11700] = 0.0;
  dv2[11701] = -1.0;
  memset(&dv2[11702], 0, 22U * sizeof(real_T));
  dv2[11724] = 1.0;
  memset(&dv2[11725], 0, 33U * sizeof(real_T));
  dv2[11758] = -1.0;
  memset(&dv2[11759], 0, 99U * sizeof(real_T));
  dv2[11858] = 1.0;
  memset(&dv2[11859], 0, 33U * sizeof(real_T));
  dv2[11892] = -1.0;
  memset(&dv2[11893], 0, 99U * sizeof(real_T));
  dv2[11992] = 1.0;
  memset(&dv2[11993], 0, 33U * sizeof(real_T));
  dv2[12026] = -1.0;
  memset(&dv2[12027], 0, 99U * sizeof(real_T));
  dv2[12126] = 1.0;
  memset(&dv2[12127], 0, 33U * sizeof(real_T));
  dv2[12160] = -1.0;
  memset(&dv2[12161], 0, 99U * sizeof(real_T));
  dv2[12260] = 1.0;
  memset(&dv2[12261], 0, 33U * sizeof(real_T));
  dv2[12294] = -1.0;
  memset(&dv2[12295], 0, 99U * sizeof(real_T));
  dv2[12394] = 1.0;
  memset(&dv2[12395], 0, 33U * sizeof(real_T));
  dv2[12428] = -1.0;
  memset(&dv2[12429], 0, 99U * sizeof(real_T));
  dv2[12528] = 1.0;
  memset(&dv2[12529], 0, 33U * sizeof(real_T));
  dv2[12562] = -1.0;
  memset(&dv2[12563], 0, 99U * sizeof(real_T));
  dv2[12662] = 1.0;
  memset(&dv2[12663], 0, 33U * sizeof(real_T));
  dv2[12696] = -1.0;
  memset(&dv2[12697], 0, 99U * sizeof(real_T));
  dv2[12796] = 1.0;
  memset(&dv2[12797], 0, 33U * sizeof(real_T));
  dv2[12830] = -1.0;
  memset(&dv2[12831], 0, 99U * sizeof(real_T));
  dv2[12930] = 1.0;
  memset(&dv2[12931], 0, 33U * sizeof(real_T));
  dv2[12964] = -1.0;
  memset(&dv2[12965], 0, 99U * sizeof(real_T));
  dv2[13064] = 1.0;
  memset(&dv2[13065], 0, 33U * sizeof(real_T));
  dv2[13098] = -1.0;
  memset(&dv2[13099], 0, 99U * sizeof(real_T));
  dv2[13198] = 1.0;
  memset(&dv2[13199], 0, 33U * sizeof(real_T));
  dv2[13232] = -1.0;
  memset(&dv2[13233], 0, 99U * sizeof(real_T));
  dv2[13332] = 1.0;
  memset(&dv2[13333], 0, 33U * sizeof(real_T));
  dv2[13366] = -1.0;
  memset(&dv2[13367], 0, 99U * sizeof(real_T));
  dv2[13466] = 1.0;
  memset(&dv2[13467], 0, 33U * sizeof(real_T));
  dv2[13500] = -1.0;
  memset(&dv2[13501], 0, 728U * sizeof(real_T));
  dv2[14229] = -1.0;
  memset(&dv2[14230], 0, 133U * sizeof(real_T));
  dv2[14363] = 1.0;
  memset(&dv2[14364], 0, 351U * sizeof(real_T));
  dv2[14715] = -1.0;
  memset(&dv2[14716], 0, sizeof(real_T) << 4);
  dv2[14732] = -1.0;
  memset(&dv2[14733], 0, 116U * sizeof(real_T));
  dv2[14849] = -1.0;
  memset(&dv2[14850], 0, sizeof(real_T) << 4);
  dv2[14866] = -1.0;
  memset(&dv2[14867], 0, 116U * sizeof(real_T));
  dv2[14983] = -1.0;
  memset(&dv2[14984], 0, sizeof(real_T) << 4);
  dv2[15000] = -1.0;
  memset(&dv2[15001], 0, 116U * sizeof(real_T));
  dv2[15117] = -1.0;
  memset(&dv2[15118], 0, sizeof(real_T) << 4);
  dv2[15134] = -1.0;
  memset(&dv2[15135], 0, 116U * sizeof(real_T));
  dv2[15251] = -1.0;
  memset(&dv2[15252], 0, sizeof(real_T) << 4);
  dv2[15268] = -1.0;
  memset(&dv2[15269], 0, 116U * sizeof(real_T));
  dv2[15385] = -1.0;
  memset(&dv2[15386], 0, sizeof(real_T) << 4);
  dv2[15402] = -1.0;
  memset(&dv2[15403], 0, 116U * sizeof(real_T));
  dv2[15519] = -1.0;
  memset(&dv2[15520], 0, sizeof(real_T) << 4);
  dv2[15536] = -1.0;
  memset(&dv2[15537], 0, 116U * sizeof(real_T));
  dv2[15653] = -1.0;
  memset(&dv2[15654], 0, sizeof(real_T) << 4);
  dv2[15670] = -1.0;
  memset(&dv2[15671], 0, 116U * sizeof(real_T));
  dv2[15787] = -1.0;
  memset(&dv2[15788], 0, sizeof(real_T) << 4);
  dv2[15804] = -1.0;
  memset(&dv2[15805], 0, 116U * sizeof(real_T));
  dv2[15921] = -1.0;
  memset(&dv2[15922], 0, sizeof(real_T) << 4);
  dv2[15938] = -1.0;
  memset(&dv2[15939], 0, 116U * sizeof(real_T));
  dv2[16055] = -1.0;
  memset(&dv2[16056], 0, sizeof(real_T) << 4);
  dv2[16072] = -1.0;
  memset(&dv2[16073], 0, 116U * sizeof(real_T));
  dv2[16189] = -1.0;
  memset(&dv2[16190], 0, sizeof(real_T) << 4);
  dv2[16206] = -1.0;
  memset(&dv2[16207], 0, 116U * sizeof(real_T));
  dv2[16323] = -1.0;
  memset(&dv2[16324], 0, sizeof(real_T) << 4);
  dv2[16340] = -1.0;
  memset(&dv2[16341], 0, 116U * sizeof(real_T));
  dv2[16457] = -1.0;
  memset(&dv2[16458], 0, sizeof(real_T) << 4);
  dv2[16474] = -1.0;
  memset(&dv2[16475], 0, 116U * sizeof(real_T));
  dv2[16591] = -1.0;
  memset(&dv2[16592], 0, sizeof(real_T) << 4);
  dv2[16608] = -1.0;
  memset(&dv2[16609], 0, 116U * sizeof(real_T));
  dv2[16725] = -1.0;
  memset(&dv2[16726], 0, sizeof(real_T) << 4);
  dv2[16742] = -1.0;
  memset(&dv2[16743], 0, 116U * sizeof(real_T));
  dv2[16859] = -1.0;
  memset(&dv2[16860], 0, sizeof(real_T) << 4);
  dv2[16876] = -1.0;
  memset(&dv2[16877], 0, 2394U * sizeof(real_T));
  dv2[19271] = -1.0;
  dv2[19272] = 0.0;
  dv2[19273] = 0.0;
  dv2[19274] = -1.0;
  memset(&dv2[19275], 0, 130U * sizeof(real_T));
  dv2[19405] = -1.0;
  dv2[19406] = 0.0;
  dv2[19407] = 0.0;
  dv2[19408] = -1.0;
  memset(&dv2[19409], 0, 130U * sizeof(real_T));
  dv2[19539] = -1.0;
  dv2[19540] = 0.0;
  dv2[19541] = 0.0;
  dv2[19542] = -1.0;
  memset(&dv2[19543], 0, 266U * sizeof(real_T));
  dv2[19809] = -1.0;
  dv2[19810] = 0.0;
  dv2[19811] = 0.0;
  dv2[19812] = -1.0;
  memset(&dv2[19813], 0, 130U * sizeof(real_T));
  dv2[19943] = -1.0;
  dv2[19944] = 0.0;
  dv2[19945] = 0.0;
  dv2[19946] = -1.0;
  memset(&dv2[19947], 0, 130U * sizeof(real_T));
  dv2[20077] = -1.0;
  dv2[20078] = 0.0;
  dv2[20079] = 0.0;
  dv2[20080] = -1.0;
  memset(&dv2[20081], 0, 1199U * sizeof(real_T));
  for (i2 = 0; i2 < 160; i2++) {
    memcpy(&Aiq[i2 * 133], &dv2[i2 * 133], 133U * sizeof(real_T));
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
  biq[17] = in10[1];
  biq[18] = in10[1];
  biq[19] = in10[1];
  biq[20] = in10[1];
  biq[21] = in10[1];
  biq[22] = in10[1];
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
  biq[34] = in10[0];
  biq[35] = in10[0];
  biq[36] = in10[0];
  biq[37] = in10[0];
  biq[38] = in10[0];
  biq[39] = in10[0];
  biq[40] = in10[0];
  biq[41] = in10[0];
  biq[42] = in10[0];
  biq[43] = in10[0];
  biq[44] = in10[0];
  biq[45] = in10[0];
  biq[46] = in10[0];
  biq[47] = in10[0];
  biq[48] = in10[0];
  biq[49] = in10[0];
  biq[50] = in10[0];
  biq[51] = in10[1];
  biq[52] = in10[1];
  biq[53] = in10[1];
  biq[54] = in10[1];
  biq[55] = in10[1];
  biq[56] = in10[1];
  biq[57] = in10[1];
  biq[58] = in10[1];
  biq[59] = in10[1];
  biq[60] = in10[1];
  biq[61] = in10[1];
  biq[62] = in10[1];
  biq[63] = in10[1];
  biq[64] = in10[1];
  biq[65] = in10[1];
  biq[66] = in10[1];
  biq[67] = in10[1];
  biq[68] = -in11[2] * (in11[0] + in11[2] * in4->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in4->data[0] * t7);
  biq[69] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0]] * t7);
  biq[70] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 1] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 1] * t7);
  biq[71] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 3] * t7);
  biq[72] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 2] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 2] * t7);
  biq[73] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 5] * t7);
  biq[74] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 6] * t7);
  biq[75] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 7] * t7);
  biq[76] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 3] * t7);
  biq[77] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 9] * t7);
  biq[78] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 10] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 10] * t7);
  biq[79] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 11] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 11] * t7);
  biq[80] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 12] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 12] * t7);
  biq[81] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 13] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 13] * t7);
  biq[82] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 14] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 14] * t7);
  biq[83] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 15] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 15] * t7);
  biq[84] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 4] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 4] * t7);
  memset(&biq[85], 0, 17U * sizeof(real_T));
  biq[102] = -in11[2] * (in11[0] + in11[2] * in5->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in5->data[0] * t7);
  biq[103] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0]] * t7);
  biq[104] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 1] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 1] * t7);
  biq[105] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 3] * t7);
  biq[106] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 2] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 2] * t7);
  biq[107] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 5] * t7);
  biq[108] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 6] * t7);
  biq[109] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 7] * t7);
  biq[110] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 3] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 3] * t7);
  biq[111] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 9] * t7);
  biq[112] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 10] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 10] * t7);
  biq[113] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 11] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 11] * t7);
  biq[114] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 12] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 12] * t7);
  biq[115] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 13] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 13] * t7);
  biq[116] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 14] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 14] * t7);
  biq[117] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 15] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 15] * t7);
  biq[118] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 4] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 4] * t7);
  biq[119] = t3;
  biq[120] = t3;
  biq[121] = t3;
  biq[122] = t9;
  biq[123] = t9;
  biq[124] = t9;
  biq[125] = t10;
  biq[126] = t10;
  biq[127] = t10;
  biq[128] = t11;
  biq[129] = t11;
  biq[130] = t11;
  biq[131] = -in9[1];
  biq[132] = -in9[1];
}

/* End of code generation (IqFast_RightStart1V12.cpp) */
