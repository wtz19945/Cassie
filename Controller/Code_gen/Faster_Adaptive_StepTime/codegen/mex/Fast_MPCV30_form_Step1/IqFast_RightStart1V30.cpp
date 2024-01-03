/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart1V30.cpp
 *
 * Code generation for function 'IqFast_RightStart1V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step1.h"
#include "IqFast_RightStart1V30.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart1V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [24310], real_T biq[143])
{
  int32_T i2;
  real_T dv2[24310];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART1V30 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART1V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:05:50 */
  i2 = in4->size[1];
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&vc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&uc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&tc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(4 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i2, (emlrtBCInfo *)&sc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&rc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(6 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i2, (emlrtBCInfo *)&qc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&pc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(8 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i2, (emlrtBCInfo *)&oc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&nc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(1 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i2, (emlrtBCInfo *)&mc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(2 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i2, (emlrtBCInfo *)&lc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(3 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i2, (emlrtBCInfo *)&kc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(4 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i2, (emlrtBCInfo *)&jc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(5 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i2, (emlrtBCInfo *)&ic_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(6 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i2, (emlrtBCInfo *)&hc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(7 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i2, (emlrtBCInfo *)&gc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(8 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i2, (emlrtBCInfo *)&fc_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(9 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(9, 1, i2, (emlrtBCInfo *)&ec_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(10 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i2, (emlrtBCInfo *)&dc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&cc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(12 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i2, (emlrtBCInfo *)&bc_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&ac_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(14 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i2, (emlrtBCInfo *)&yb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&xb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(16 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i2, (emlrtBCInfo *)&wb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&vb_emlrtBCI, sp);
  }

  i2 = in4->size[1];
  if (!(18 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i2, (emlrtBCInfo *)&ub_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(10 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(10, 1, i2, (emlrtBCInfo *)&tb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(11 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(11, 1, i2, (emlrtBCInfo *)&sb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(12 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(12, 1, i2, (emlrtBCInfo *)&rb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(13 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(13, 1, i2, (emlrtBCInfo *)&qb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(14 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(14, 1, i2, (emlrtBCInfo *)&pb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(15 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(15, 1, i2, (emlrtBCInfo *)&ob_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(16 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(16, 1, i2, (emlrtBCInfo *)&nb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(17 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(17, 1, i2, (emlrtBCInfo *)&mb_emlrtBCI, sp);
  }

  i2 = in5->size[1];
  if (!(18 <= i2)) {
    emlrtDynamicBoundsCheckR2012b(18, 1, i2, (emlrtBCInfo *)&lb_emlrtBCI, sp);
  }

  dv2[0] = -1.0;
  memset(&dv2[1], 0, 35U * sizeof(real_T));
  dv2[36] = 1.0;
  memset(&dv2[37], 0, 35U * sizeof(real_T));
  dv2[72] = -in11[2];
  memset(&dv2[73], 0, 35U * sizeof(real_T));
  dv2[108] = -in11[2];
  memset(&dv2[109], 0, 178U * sizeof(real_T));
  dv2[287] = -1.0;
  memset(&dv2[288], 0, 35U * sizeof(real_T));
  dv2[323] = 1.0;
  memset(&dv2[324], 0, 35U * sizeof(real_T));
  dv2[359] = -in11[2];
  memset(&dv2[360], 0, 35U * sizeof(real_T));
  dv2[395] = -in11[2];
  memset(&dv2[396], 0, 178U * sizeof(real_T));
  dv2[574] = -1.0;
  memset(&dv2[575], 0, 35U * sizeof(real_T));
  dv2[610] = 1.0;
  memset(&dv2[611], 0, 35U * sizeof(real_T));
  dv2[646] = -in11[2];
  memset(&dv2[647], 0, 35U * sizeof(real_T));
  dv2[682] = -in11[2];
  memset(&dv2[683], 0, 178U * sizeof(real_T));
  dv2[861] = -1.0;
  memset(&dv2[862], 0, 35U * sizeof(real_T));
  dv2[897] = 1.0;
  memset(&dv2[898], 0, 35U * sizeof(real_T));
  dv2[933] = -in11[2];
  memset(&dv2[934], 0, 35U * sizeof(real_T));
  dv2[969] = -in11[2];
  memset(&dv2[970], 0, 178U * sizeof(real_T));
  dv2[1148] = -1.0;
  memset(&dv2[1149], 0, 35U * sizeof(real_T));
  dv2[1184] = 1.0;
  memset(&dv2[1185], 0, 35U * sizeof(real_T));
  dv2[1220] = -in11[2];
  memset(&dv2[1221], 0, 35U * sizeof(real_T));
  dv2[1256] = -in11[2];
  memset(&dv2[1257], 0, 178U * sizeof(real_T));
  dv2[1435] = -1.0;
  memset(&dv2[1436], 0, 35U * sizeof(real_T));
  dv2[1471] = 1.0;
  memset(&dv2[1472], 0, 35U * sizeof(real_T));
  dv2[1507] = -in11[2];
  memset(&dv2[1508], 0, 35U * sizeof(real_T));
  dv2[1543] = -in11[2];
  memset(&dv2[1544], 0, 178U * sizeof(real_T));
  dv2[1722] = -1.0;
  memset(&dv2[1723], 0, 35U * sizeof(real_T));
  dv2[1758] = 1.0;
  memset(&dv2[1759], 0, 35U * sizeof(real_T));
  dv2[1794] = -in11[2];
  memset(&dv2[1795], 0, 35U * sizeof(real_T));
  dv2[1830] = -in11[2];
  memset(&dv2[1831], 0, 178U * sizeof(real_T));
  dv2[2009] = -1.0;
  memset(&dv2[2010], 0, 35U * sizeof(real_T));
  dv2[2045] = 1.0;
  memset(&dv2[2046], 0, 35U * sizeof(real_T));
  dv2[2081] = -in11[2];
  memset(&dv2[2082], 0, 35U * sizeof(real_T));
  dv2[2117] = -in11[2];
  memset(&dv2[2118], 0, 178U * sizeof(real_T));
  dv2[2296] = -1.0;
  memset(&dv2[2297], 0, 35U * sizeof(real_T));
  dv2[2332] = 1.0;
  memset(&dv2[2333], 0, 35U * sizeof(real_T));
  dv2[2368] = -in11[2];
  memset(&dv2[2369], 0, 35U * sizeof(real_T));
  dv2[2404] = -in11[2];
  memset(&dv2[2405], 0, 178U * sizeof(real_T));
  dv2[2583] = -1.0;
  memset(&dv2[2584], 0, 35U * sizeof(real_T));
  dv2[2619] = 1.0;
  memset(&dv2[2620], 0, 35U * sizeof(real_T));
  dv2[2655] = -in11[2];
  memset(&dv2[2656], 0, 35U * sizeof(real_T));
  dv2[2691] = -in11[2];
  memset(&dv2[2692], 0, 178U * sizeof(real_T));
  dv2[2870] = -1.0;
  memset(&dv2[2871], 0, 35U * sizeof(real_T));
  dv2[2906] = 1.0;
  memset(&dv2[2907], 0, 35U * sizeof(real_T));
  dv2[2942] = -in11[2];
  memset(&dv2[2943], 0, 35U * sizeof(real_T));
  dv2[2978] = -in11[2];
  memset(&dv2[2979], 0, 178U * sizeof(real_T));
  dv2[3157] = -1.0;
  memset(&dv2[3158], 0, 35U * sizeof(real_T));
  dv2[3193] = 1.0;
  memset(&dv2[3194], 0, 35U * sizeof(real_T));
  dv2[3229] = -in11[2];
  memset(&dv2[3230], 0, 35U * sizeof(real_T));
  dv2[3265] = -in11[2];
  memset(&dv2[3266], 0, 178U * sizeof(real_T));
  dv2[3444] = -1.0;
  memset(&dv2[3445], 0, 35U * sizeof(real_T));
  dv2[3480] = 1.0;
  memset(&dv2[3481], 0, 35U * sizeof(real_T));
  dv2[3516] = -in11[2];
  memset(&dv2[3517], 0, 35U * sizeof(real_T));
  dv2[3552] = -in11[2];
  memset(&dv2[3553], 0, 178U * sizeof(real_T));
  dv2[3731] = -1.0;
  memset(&dv2[3732], 0, 35U * sizeof(real_T));
  dv2[3767] = 1.0;
  memset(&dv2[3768], 0, 35U * sizeof(real_T));
  dv2[3803] = -in11[2];
  memset(&dv2[3804], 0, 35U * sizeof(real_T));
  dv2[3839] = -in11[2];
  memset(&dv2[3840], 0, 178U * sizeof(real_T));
  dv2[4018] = -1.0;
  memset(&dv2[4019], 0, 35U * sizeof(real_T));
  dv2[4054] = 1.0;
  memset(&dv2[4055], 0, 35U * sizeof(real_T));
  dv2[4090] = -in11[2];
  memset(&dv2[4091], 0, 35U * sizeof(real_T));
  dv2[4126] = -in11[2];
  memset(&dv2[4127], 0, 178U * sizeof(real_T));
  dv2[4305] = -1.0;
  memset(&dv2[4306], 0, 35U * sizeof(real_T));
  dv2[4341] = 1.0;
  memset(&dv2[4342], 0, 35U * sizeof(real_T));
  dv2[4377] = -in11[2];
  memset(&dv2[4378], 0, 35U * sizeof(real_T));
  dv2[4413] = -in11[2];
  memset(&dv2[4414], 0, 178U * sizeof(real_T));
  dv2[4592] = -1.0;
  memset(&dv2[4593], 0, 35U * sizeof(real_T));
  dv2[4628] = 1.0;
  memset(&dv2[4629], 0, 35U * sizeof(real_T));
  dv2[4664] = -in11[2];
  memset(&dv2[4665], 0, 35U * sizeof(real_T));
  dv2[4700] = -in11[2];
  memset(&dv2[4701], 0, 178U * sizeof(real_T));
  dv2[4879] = -1.0;
  memset(&dv2[4880], 0, 35U * sizeof(real_T));
  dv2[4915] = 1.0;
  memset(&dv2[4916], 0, 35U * sizeof(real_T));
  dv2[4951] = -in11[2];
  memset(&dv2[4952], 0, 35U * sizeof(real_T));
  dv2[4987] = -in11[2];
  memset(&dv2[4988], 0, 178U * sizeof(real_T));
  dv2[5166] = -1.0;
  memset(&dv2[5167], 0, 35U * sizeof(real_T));
  dv2[5202] = 1.0;
  memset(&dv2[5203], 0, 17U * sizeof(real_T));
  dv2[5220] = -in11[3];
  memset(&dv2[5221], 0, 35U * sizeof(real_T));
  dv2[5256] = -in11[3];
  memset(&dv2[5257], 0, 196U * sizeof(real_T));
  dv2[5453] = -1.0;
  memset(&dv2[5454], 0, 35U * sizeof(real_T));
  dv2[5489] = 1.0;
  memset(&dv2[5490], 0, 17U * sizeof(real_T));
  dv2[5507] = -in11[3];
  memset(&dv2[5508], 0, 35U * sizeof(real_T));
  dv2[5543] = -in11[3];
  memset(&dv2[5544], 0, 196U * sizeof(real_T));
  dv2[5740] = -1.0;
  memset(&dv2[5741], 0, 35U * sizeof(real_T));
  dv2[5776] = 1.0;
  memset(&dv2[5777], 0, 17U * sizeof(real_T));
  dv2[5794] = -in11[3];
  memset(&dv2[5795], 0, 35U * sizeof(real_T));
  dv2[5830] = -in11[3];
  memset(&dv2[5831], 0, 196U * sizeof(real_T));
  dv2[6027] = -1.0;
  memset(&dv2[6028], 0, 35U * sizeof(real_T));
  dv2[6063] = 1.0;
  memset(&dv2[6064], 0, 17U * sizeof(real_T));
  dv2[6081] = -in11[3];
  memset(&dv2[6082], 0, 35U * sizeof(real_T));
  dv2[6117] = -in11[3];
  memset(&dv2[6118], 0, 196U * sizeof(real_T));
  dv2[6314] = -1.0;
  memset(&dv2[6315], 0, 35U * sizeof(real_T));
  dv2[6350] = 1.0;
  memset(&dv2[6351], 0, 17U * sizeof(real_T));
  dv2[6368] = -in11[3];
  memset(&dv2[6369], 0, 35U * sizeof(real_T));
  dv2[6404] = -in11[3];
  memset(&dv2[6405], 0, 196U * sizeof(real_T));
  dv2[6601] = -1.0;
  memset(&dv2[6602], 0, 35U * sizeof(real_T));
  dv2[6637] = 1.0;
  memset(&dv2[6638], 0, 17U * sizeof(real_T));
  dv2[6655] = -in11[3];
  memset(&dv2[6656], 0, 35U * sizeof(real_T));
  dv2[6691] = -in11[3];
  memset(&dv2[6692], 0, 196U * sizeof(real_T));
  dv2[6888] = -1.0;
  memset(&dv2[6889], 0, 35U * sizeof(real_T));
  dv2[6924] = 1.0;
  memset(&dv2[6925], 0, 17U * sizeof(real_T));
  dv2[6942] = -in11[3];
  memset(&dv2[6943], 0, 35U * sizeof(real_T));
  dv2[6978] = -in11[3];
  memset(&dv2[6979], 0, 196U * sizeof(real_T));
  dv2[7175] = -1.0;
  memset(&dv2[7176], 0, 35U * sizeof(real_T));
  dv2[7211] = 1.0;
  memset(&dv2[7212], 0, 17U * sizeof(real_T));
  dv2[7229] = -in11[3];
  memset(&dv2[7230], 0, 35U * sizeof(real_T));
  dv2[7265] = -in11[3];
  memset(&dv2[7266], 0, 196U * sizeof(real_T));
  dv2[7462] = -1.0;
  memset(&dv2[7463], 0, 35U * sizeof(real_T));
  dv2[7498] = 1.0;
  memset(&dv2[7499], 0, 17U * sizeof(real_T));
  dv2[7516] = -in11[3];
  memset(&dv2[7517], 0, 35U * sizeof(real_T));
  dv2[7552] = -in11[3];
  memset(&dv2[7553], 0, 196U * sizeof(real_T));
  dv2[7749] = -1.0;
  memset(&dv2[7750], 0, 35U * sizeof(real_T));
  dv2[7785] = 1.0;
  memset(&dv2[7786], 0, 17U * sizeof(real_T));
  dv2[7803] = -in11[3];
  memset(&dv2[7804], 0, 35U * sizeof(real_T));
  dv2[7839] = -in11[3];
  memset(&dv2[7840], 0, 196U * sizeof(real_T));
  dv2[8036] = -1.0;
  memset(&dv2[8037], 0, 35U * sizeof(real_T));
  dv2[8072] = 1.0;
  memset(&dv2[8073], 0, 17U * sizeof(real_T));
  dv2[8090] = -in11[3];
  memset(&dv2[8091], 0, 35U * sizeof(real_T));
  dv2[8126] = -in11[3];
  memset(&dv2[8127], 0, 196U * sizeof(real_T));
  dv2[8323] = -1.0;
  memset(&dv2[8324], 0, 35U * sizeof(real_T));
  dv2[8359] = 1.0;
  memset(&dv2[8360], 0, 17U * sizeof(real_T));
  dv2[8377] = -in11[3];
  memset(&dv2[8378], 0, 35U * sizeof(real_T));
  dv2[8413] = -in11[3];
  memset(&dv2[8414], 0, 196U * sizeof(real_T));
  dv2[8610] = -1.0;
  memset(&dv2[8611], 0, 35U * sizeof(real_T));
  dv2[8646] = 1.0;
  memset(&dv2[8647], 0, 17U * sizeof(real_T));
  dv2[8664] = -in11[3];
  memset(&dv2[8665], 0, 35U * sizeof(real_T));
  dv2[8700] = -in11[3];
  memset(&dv2[8701], 0, 196U * sizeof(real_T));
  dv2[8897] = -1.0;
  memset(&dv2[8898], 0, 35U * sizeof(real_T));
  dv2[8933] = 1.0;
  memset(&dv2[8934], 0, 17U * sizeof(real_T));
  dv2[8951] = -in11[3];
  memset(&dv2[8952], 0, 35U * sizeof(real_T));
  dv2[8987] = -in11[3];
  memset(&dv2[8988], 0, 196U * sizeof(real_T));
  dv2[9184] = -1.0;
  memset(&dv2[9185], 0, 35U * sizeof(real_T));
  dv2[9220] = 1.0;
  memset(&dv2[9221], 0, 17U * sizeof(real_T));
  dv2[9238] = -in11[3];
  memset(&dv2[9239], 0, 35U * sizeof(real_T));
  dv2[9274] = -in11[3];
  memset(&dv2[9275], 0, 196U * sizeof(real_T));
  dv2[9471] = -1.0;
  memset(&dv2[9472], 0, 35U * sizeof(real_T));
  dv2[9507] = 1.0;
  memset(&dv2[9508], 0, 17U * sizeof(real_T));
  dv2[9525] = -in11[3];
  memset(&dv2[9526], 0, 35U * sizeof(real_T));
  dv2[9561] = -in11[3];
  memset(&dv2[9562], 0, 196U * sizeof(real_T));
  dv2[9758] = -1.0;
  memset(&dv2[9759], 0, 35U * sizeof(real_T));
  dv2[9794] = 1.0;
  memset(&dv2[9795], 0, 17U * sizeof(real_T));
  dv2[9812] = -in11[3];
  memset(&dv2[9813], 0, 35U * sizeof(real_T));
  dv2[9848] = -in11[3];
  memset(&dv2[9849], 0, 196U * sizeof(real_T));
  dv2[10045] = -1.0;
  memset(&dv2[10046], 0, 35U * sizeof(real_T));
  dv2[10081] = 1.0;
  memset(&dv2[10082], 0, 17U * sizeof(real_T));
  dv2[10099] = -in11[3];
  memset(&dv2[10100], 0, 35U * sizeof(real_T));
  dv2[10135] = -in11[3];
  memset(&dv2[10136], 0, 160U * sizeof(real_T));
  dv2[10296] = 1.0;
  memset(&dv2[10297], 0, 35U * sizeof(real_T));
  dv2[10332] = -1.0;
  memset(&dv2[10333], 0, 89U * sizeof(real_T));
  dv2[10422] = 1.0;
  dv2[10423] = 0.0;
  dv2[10424] = 0.0;
  dv2[10425] = 0.0;
  dv2[10426] = -1.0;
  memset(&dv2[10427], 0, 13U * sizeof(real_T));
  dv2[10440] = 1.0;
  memset(&dv2[10441], 0, 35U * sizeof(real_T));
  dv2[10476] = -1.0;
  memset(&dv2[10477], 0, 89U * sizeof(real_T));
  dv2[10566] = 1.0;
  dv2[10567] = 0.0;
  dv2[10568] = 0.0;
  dv2[10569] = 0.0;
  dv2[10570] = -1.0;
  memset(&dv2[10571], 0, 13U * sizeof(real_T));
  dv2[10584] = 1.0;
  memset(&dv2[10585], 0, 35U * sizeof(real_T));
  dv2[10620] = -1.0;
  memset(&dv2[10621], 0, 89U * sizeof(real_T));
  dv2[10710] = 1.0;
  dv2[10711] = 0.0;
  dv2[10712] = 0.0;
  dv2[10713] = 0.0;
  dv2[10714] = -1.0;
  memset(&dv2[10715], 0, 13U * sizeof(real_T));
  dv2[10728] = 1.0;
  memset(&dv2[10729], 0, 35U * sizeof(real_T));
  dv2[10764] = -1.0;
  memset(&dv2[10765], 0, 89U * sizeof(real_T));
  dv2[10854] = 1.0;
  dv2[10855] = 0.0;
  dv2[10856] = 0.0;
  dv2[10857] = 0.0;
  dv2[10858] = -1.0;
  memset(&dv2[10859], 0, 13U * sizeof(real_T));
  dv2[10872] = 1.0;
  memset(&dv2[10873], 0, 35U * sizeof(real_T));
  dv2[10908] = -1.0;
  memset(&dv2[10909], 0, 107U * sizeof(real_T));
  dv2[11016] = 1.0;
  memset(&dv2[11017], 0, 35U * sizeof(real_T));
  dv2[11052] = -1.0;
  memset(&dv2[11053], 0, 107U * sizeof(real_T));
  dv2[11160] = 1.0;
  memset(&dv2[11161], 0, 35U * sizeof(real_T));
  dv2[11196] = -1.0;
  memset(&dv2[11197], 0, 107U * sizeof(real_T));
  dv2[11304] = 1.0;
  memset(&dv2[11305], 0, 35U * sizeof(real_T));
  dv2[11340] = -1.0;
  memset(&dv2[11341], 0, 107U * sizeof(real_T));
  dv2[11448] = 1.0;
  memset(&dv2[11449], 0, 35U * sizeof(real_T));
  dv2[11484] = -1.0;
  memset(&dv2[11485], 0, 107U * sizeof(real_T));
  dv2[11592] = 1.0;
  memset(&dv2[11593], 0, 35U * sizeof(real_T));
  dv2[11628] = -1.0;
  memset(&dv2[11629], 0, 107U * sizeof(real_T));
  dv2[11736] = 1.0;
  memset(&dv2[11737], 0, 35U * sizeof(real_T));
  dv2[11772] = -1.0;
  memset(&dv2[11773], 0, 107U * sizeof(real_T));
  dv2[11880] = 1.0;
  memset(&dv2[11881], 0, 35U * sizeof(real_T));
  dv2[11916] = -1.0;
  memset(&dv2[11917], 0, 107U * sizeof(real_T));
  dv2[12024] = 1.0;
  memset(&dv2[12025], 0, 35U * sizeof(real_T));
  dv2[12060] = -1.0;
  memset(&dv2[12061], 0, 107U * sizeof(real_T));
  dv2[12168] = 1.0;
  memset(&dv2[12169], 0, 35U * sizeof(real_T));
  dv2[12204] = -1.0;
  memset(&dv2[12205], 0, 107U * sizeof(real_T));
  dv2[12312] = 1.0;
  memset(&dv2[12313], 0, 35U * sizeof(real_T));
  dv2[12348] = -1.0;
  memset(&dv2[12349], 0, 107U * sizeof(real_T));
  dv2[12456] = 1.0;
  memset(&dv2[12457], 0, 35U * sizeof(real_T));
  dv2[12492] = -1.0;
  memset(&dv2[12493], 0, 107U * sizeof(real_T));
  dv2[12600] = 1.0;
  memset(&dv2[12601], 0, 35U * sizeof(real_T));
  dv2[12636] = -1.0;
  memset(&dv2[12637], 0, 107U * sizeof(real_T));
  dv2[12744] = 1.0;
  memset(&dv2[12745], 0, 35U * sizeof(real_T));
  dv2[12780] = -1.0;
  memset(&dv2[12781], 0, 107U * sizeof(real_T));
  dv2[12888] = 1.0;
  memset(&dv2[12889], 0, 35U * sizeof(real_T));
  dv2[12924] = -1.0;
  memset(&dv2[12925], 0, 79U * sizeof(real_T));
  dv2[13004] = 1.0;
  dv2[13005] = 0.0;
  dv2[13006] = 0.0;
  dv2[13007] = 0.0;
  dv2[13008] = -1.0;
  memset(&dv2[13009], 0, 23U * sizeof(real_T));
  dv2[13032] = 1.0;
  memset(&dv2[13033], 0, 35U * sizeof(real_T));
  dv2[13068] = -1.0;
  memset(&dv2[13069], 0, 79U * sizeof(real_T));
  dv2[13148] = 1.0;
  dv2[13149] = 0.0;
  dv2[13150] = 0.0;
  dv2[13151] = 0.0;
  dv2[13152] = -1.0;
  memset(&dv2[13153], 0, 23U * sizeof(real_T));
  dv2[13176] = 1.0;
  memset(&dv2[13177], 0, 35U * sizeof(real_T));
  dv2[13212] = -1.0;
  memset(&dv2[13213], 0, 79U * sizeof(real_T));
  dv2[13292] = 1.0;
  dv2[13293] = 0.0;
  dv2[13294] = 0.0;
  dv2[13295] = 0.0;
  dv2[13296] = -1.0;
  memset(&dv2[13297], 0, 23U * sizeof(real_T));
  dv2[13320] = 1.0;
  memset(&dv2[13321], 0, 35U * sizeof(real_T));
  dv2[13356] = -1.0;
  memset(&dv2[13357], 0, 79U * sizeof(real_T));
  dv2[13436] = 1.0;
  dv2[13437] = 0.0;
  dv2[13438] = 0.0;
  dv2[13439] = 0.0;
  dv2[13440] = -1.0;
  memset(&dv2[13441], 0, 23U * sizeof(real_T));
  dv2[13464] = 1.0;
  memset(&dv2[13465], 0, 35U * sizeof(real_T));
  dv2[13500] = -1.0;
  memset(&dv2[13501], 0, 107U * sizeof(real_T));
  dv2[13608] = 1.0;
  memset(&dv2[13609], 0, 35U * sizeof(real_T));
  dv2[13644] = -1.0;
  memset(&dv2[13645], 0, 107U * sizeof(real_T));
  dv2[13752] = 1.0;
  memset(&dv2[13753], 0, 35U * sizeof(real_T));
  dv2[13788] = -1.0;
  memset(&dv2[13789], 0, 107U * sizeof(real_T));
  dv2[13896] = 1.0;
  memset(&dv2[13897], 0, 35U * sizeof(real_T));
  dv2[13932] = -1.0;
  memset(&dv2[13933], 0, 107U * sizeof(real_T));
  dv2[14040] = 1.0;
  memset(&dv2[14041], 0, 35U * sizeof(real_T));
  dv2[14076] = -1.0;
  memset(&dv2[14077], 0, 107U * sizeof(real_T));
  dv2[14184] = 1.0;
  memset(&dv2[14185], 0, 35U * sizeof(real_T));
  dv2[14220] = -1.0;
  memset(&dv2[14221], 0, 107U * sizeof(real_T));
  dv2[14328] = 1.0;
  memset(&dv2[14329], 0, 35U * sizeof(real_T));
  dv2[14364] = -1.0;
  memset(&dv2[14365], 0, 107U * sizeof(real_T));
  dv2[14472] = 1.0;
  memset(&dv2[14473], 0, 35U * sizeof(real_T));
  dv2[14508] = -1.0;
  memset(&dv2[14509], 0, 107U * sizeof(real_T));
  dv2[14616] = 1.0;
  memset(&dv2[14617], 0, 35U * sizeof(real_T));
  dv2[14652] = -1.0;
  memset(&dv2[14653], 0, 107U * sizeof(real_T));
  dv2[14760] = 1.0;
  memset(&dv2[14761], 0, 35U * sizeof(real_T));
  dv2[14796] = -1.0;
  memset(&dv2[14797], 0, 107U * sizeof(real_T));
  dv2[14904] = 1.0;
  memset(&dv2[14905], 0, 35U * sizeof(real_T));
  dv2[14940] = -1.0;
  memset(&dv2[14941], 0, 107U * sizeof(real_T));
  dv2[15048] = 1.0;
  memset(&dv2[15049], 0, 35U * sizeof(real_T));
  dv2[15084] = -1.0;
  memset(&dv2[15085], 0, 107U * sizeof(real_T));
  dv2[15192] = 1.0;
  memset(&dv2[15193], 0, 35U * sizeof(real_T));
  dv2[15228] = -1.0;
  memset(&dv2[15229], 0, 107U * sizeof(real_T));
  dv2[15336] = 1.0;
  memset(&dv2[15337], 0, 35U * sizeof(real_T));
  dv2[15372] = -1.0;
  memset(&dv2[15373], 0, 785U * sizeof(real_T));
  dv2[16158] = -1.0;
  memset(&dv2[16159], 0, 519U * sizeof(real_T));
  dv2[16678] = -1.0;
  memset(&dv2[16679], 0, 17U * sizeof(real_T));
  dv2[16696] = -1.0;
  memset(&dv2[16697], 0, 125U * sizeof(real_T));
  dv2[16822] = -1.0;
  memset(&dv2[16823], 0, 17U * sizeof(real_T));
  dv2[16840] = -1.0;
  memset(&dv2[16841], 0, 125U * sizeof(real_T));
  dv2[16966] = -1.0;
  memset(&dv2[16967], 0, 17U * sizeof(real_T));
  dv2[16984] = -1.0;
  memset(&dv2[16985], 0, 125U * sizeof(real_T));
  dv2[17110] = -1.0;
  memset(&dv2[17111], 0, 17U * sizeof(real_T));
  dv2[17128] = -1.0;
  memset(&dv2[17129], 0, 125U * sizeof(real_T));
  dv2[17254] = -1.0;
  memset(&dv2[17255], 0, 17U * sizeof(real_T));
  dv2[17272] = -1.0;
  memset(&dv2[17273], 0, 125U * sizeof(real_T));
  dv2[17398] = -1.0;
  memset(&dv2[17399], 0, 17U * sizeof(real_T));
  dv2[17416] = -1.0;
  memset(&dv2[17417], 0, 125U * sizeof(real_T));
  dv2[17542] = -1.0;
  memset(&dv2[17543], 0, 17U * sizeof(real_T));
  dv2[17560] = -1.0;
  memset(&dv2[17561], 0, 125U * sizeof(real_T));
  dv2[17686] = -1.0;
  memset(&dv2[17687], 0, 17U * sizeof(real_T));
  dv2[17704] = -1.0;
  memset(&dv2[17705], 0, 125U * sizeof(real_T));
  dv2[17830] = -1.0;
  memset(&dv2[17831], 0, 17U * sizeof(real_T));
  dv2[17848] = -1.0;
  memset(&dv2[17849], 0, 125U * sizeof(real_T));
  dv2[17974] = -1.0;
  memset(&dv2[17975], 0, 17U * sizeof(real_T));
  dv2[17992] = -1.0;
  memset(&dv2[17993], 0, 125U * sizeof(real_T));
  dv2[18118] = -1.0;
  memset(&dv2[18119], 0, 17U * sizeof(real_T));
  dv2[18136] = -1.0;
  memset(&dv2[18137], 0, 125U * sizeof(real_T));
  dv2[18262] = -1.0;
  memset(&dv2[18263], 0, 17U * sizeof(real_T));
  dv2[18280] = -1.0;
  memset(&dv2[18281], 0, 125U * sizeof(real_T));
  dv2[18406] = -1.0;
  memset(&dv2[18407], 0, 17U * sizeof(real_T));
  dv2[18424] = -1.0;
  memset(&dv2[18425], 0, 125U * sizeof(real_T));
  dv2[18550] = -1.0;
  memset(&dv2[18551], 0, 17U * sizeof(real_T));
  dv2[18568] = -1.0;
  memset(&dv2[18569], 0, 125U * sizeof(real_T));
  dv2[18694] = -1.0;
  memset(&dv2[18695], 0, 17U * sizeof(real_T));
  dv2[18712] = -1.0;
  memset(&dv2[18713], 0, 125U * sizeof(real_T));
  dv2[18838] = -1.0;
  memset(&dv2[18839], 0, 17U * sizeof(real_T));
  dv2[18856] = -1.0;
  memset(&dv2[18857], 0, 125U * sizeof(real_T));
  dv2[18982] = -1.0;
  memset(&dv2[18983], 0, 17U * sizeof(real_T));
  dv2[19000] = -1.0;
  memset(&dv2[19001], 0, 125U * sizeof(real_T));
  dv2[19126] = -1.0;
  memset(&dv2[19127], 0, 17U * sizeof(real_T));
  dv2[19144] = -1.0;
  memset(&dv2[19145], 0, 159U * sizeof(real_T));
  dv2[19304] = 1.0;
  memset(&dv2[19305], 0, 2557U * sizeof(real_T));
  dv2[21862] = -1.0;
  dv2[21863] = 0.0;
  dv2[21864] = 0.0;
  dv2[21865] = 0.0;
  dv2[21866] = -1.0;
  memset(&dv2[21867], 0, 139U * sizeof(real_T));
  dv2[22006] = -1.0;
  dv2[22007] = 0.0;
  dv2[22008] = 0.0;
  dv2[22009] = 0.0;
  dv2[22010] = -1.0;
  memset(&dv2[22011], 0, 139U * sizeof(real_T));
  dv2[22150] = -1.0;
  dv2[22151] = 0.0;
  dv2[22152] = 0.0;
  dv2[22153] = 0.0;
  dv2[22154] = -1.0;
  memset(&dv2[22155], 0, 139U * sizeof(real_T));
  dv2[22294] = -1.0;
  dv2[22295] = 0.0;
  dv2[22296] = 0.0;
  dv2[22297] = 0.0;
  dv2[22298] = -1.0;
  memset(&dv2[22299], 0, 286U * sizeof(real_T));
  dv2[22585] = -1.0;
  dv2[22586] = 0.0;
  dv2[22587] = 0.0;
  dv2[22588] = 0.0;
  dv2[22589] = -1.0;
  memset(&dv2[22590], 0, 139U * sizeof(real_T));
  dv2[22729] = -1.0;
  dv2[22730] = 0.0;
  dv2[22731] = 0.0;
  dv2[22732] = 0.0;
  dv2[22733] = -1.0;
  memset(&dv2[22734], 0, 139U * sizeof(real_T));
  dv2[22873] = -1.0;
  dv2[22874] = 0.0;
  dv2[22875] = 0.0;
  dv2[22876] = 0.0;
  dv2[22877] = -1.0;
  memset(&dv2[22878], 0, 139U * sizeof(real_T));
  dv2[23017] = -1.0;
  dv2[23018] = 0.0;
  dv2[23019] = 0.0;
  dv2[23020] = 0.0;
  dv2[23021] = -1.0;
  memset(&dv2[23022], 0, 1288U * sizeof(real_T));
  for (i2 = 0; i2 < 170; i2++) {
    memcpy(&Aiq[i2 * 143], &dv2[i2 * 143], 143U * sizeof(real_T));
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
  biq[34] = in10[1];
  biq[35] = in10[1];
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
  biq[51] = in10[0];
  biq[52] = in10[0];
  biq[53] = in10[0];
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
  biq[68] = in10[1];
  biq[69] = in10[1];
  biq[70] = in10[1];
  biq[71] = in10[1];
  biq[72] = -in11[2] * (in11[0] + in11[2] * in4->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in4->data[0] * t7);
  biq[73] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0]] * t7);
  biq[74] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 1] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 1] * t7);
  biq[75] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 3] * t7);
  biq[76] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 2] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 2] * t7);
  biq[77] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 5] * t7);
  biq[78] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 6] * t7);
  biq[79] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 7] * t7);
  biq[80] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 3] * t7);
  biq[81] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 9] * t7);
  biq[82] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 10] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 10] * t7);
  biq[83] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 11] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 11] * t7);
  biq[84] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 12] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 12] * t7);
  biq[85] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 13] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 13] * t7);
  biq[86] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 14] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 14] * t7);
  biq[87] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 15] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 15] * t7);
  biq[88] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] << 4] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] << 4] * t7);
  biq[89] = -in11[2] * (in11[0] + in11[2] * in4->data[in4->size[0] * 17] * t7) -
    in11[3] * (in11[1] + in11[3] * in4->data[in4->size[0] * 17] * t7);
  memset(&biq[90], 0, 18U * sizeof(real_T));
  biq[108] = -in11[2] * (in11[0] + in11[2] * in5->data[0] * t7) - in11[3] *
    (in11[1] + in11[3] * in5->data[0] * t7);
  biq[109] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0]] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0]] * t7);
  biq[110] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 1] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 1] * t7);
  biq[111] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 3] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 3] * t7);
  biq[112] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 2] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 2] * t7);
  biq[113] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 5] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 5] * t7);
  biq[114] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 6] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 6] * t7);
  biq[115] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 7] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 7] * t7);
  biq[116] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 3] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 3] * t7);
  biq[117] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 9] * t7) -
    in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 9] * t7);
  biq[118] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 10] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 10] * t7);
  biq[119] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 11] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 11] * t7);
  biq[120] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 12] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 12] * t7);
  biq[121] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 13] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 13] * t7);
  biq[122] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 14] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 14] * t7);
  biq[123] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 15] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 15] * t7);
  biq[124] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] << 4] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] << 4] * t7);
  biq[125] = -in11[2] * (in11[0] + in11[2] * in5->data[in5->size[0] * 17] * t7)
    - in11[3] * (in11[1] + in11[3] * in5->data[in5->size[0] * 17] * t7);
  biq[126] = t3;
  biq[127] = t3;
  biq[128] = t3;
  biq[129] = t3;
  biq[130] = t9;
  biq[131] = t9;
  biq[132] = t9;
  biq[133] = t9;
  biq[134] = t10;
  biq[135] = t10;
  biq[136] = t10;
  biq[137] = t10;
  biq[138] = t11;
  biq[139] = t11;
  biq[140] = t11;
  biq[141] = t11;
  biq[142] = -in9[1];
}

/* End of code generation (IqFast_RightStart1V30.cpp) */
