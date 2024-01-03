/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart0V30.cpp
 *
 * Code generation for function 'IqFast_RightStart0V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step0.h"
#include "IqFast_RightStart0V30.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart0V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart0V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart0V30(Fast_MPCV30_form_Step0StackData *SD, const emlrtStack
  *sp, const emxArray_real_T *in4, const emxArray_real_T *in5, real_T Cpx1,
  real_T Cpy1, const real_T in8[3], const real_T in9[3], const real_T in10[2],
  const real_T in11[4], real_T Aiq[24990], real_T biq[147])
{
  int32_T i2;
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART0V30 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART0V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:02:34 */
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

  SD->u1.f1.dv2[0] = -1.0;
  memset(&SD->u1.f1.dv2[1], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[36] = 1.0;
  memset(&SD->u1.f1.dv2[37], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[72] = -in11[2];
  memset(&SD->u1.f1.dv2[73], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[108] = -in11[2];
  memset(&SD->u1.f1.dv2[109], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[295] = -1.0;
  memset(&SD->u1.f1.dv2[296], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[331] = 1.0;
  memset(&SD->u1.f1.dv2[332], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[367] = -in11[2];
  memset(&SD->u1.f1.dv2[368], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[403] = -in11[2];
  memset(&SD->u1.f1.dv2[404], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[590] = -1.0;
  memset(&SD->u1.f1.dv2[591], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[626] = 1.0;
  memset(&SD->u1.f1.dv2[627], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[662] = -in11[2];
  memset(&SD->u1.f1.dv2[663], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[698] = -in11[2];
  memset(&SD->u1.f1.dv2[699], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[885] = -1.0;
  memset(&SD->u1.f1.dv2[886], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[921] = 1.0;
  memset(&SD->u1.f1.dv2[922], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[957] = -in11[2];
  memset(&SD->u1.f1.dv2[958], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[993] = -in11[2];
  memset(&SD->u1.f1.dv2[994], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[1180] = -1.0;
  memset(&SD->u1.f1.dv2[1181], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1216] = 1.0;
  memset(&SD->u1.f1.dv2[1217], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1252] = -in11[2];
  memset(&SD->u1.f1.dv2[1253], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1288] = -in11[2];
  memset(&SD->u1.f1.dv2[1289], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[1475] = -1.0;
  memset(&SD->u1.f1.dv2[1476], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1511] = 1.0;
  memset(&SD->u1.f1.dv2[1512], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1547] = -in11[2];
  memset(&SD->u1.f1.dv2[1548], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1583] = -in11[2];
  memset(&SD->u1.f1.dv2[1584], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[1770] = -1.0;
  memset(&SD->u1.f1.dv2[1771], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1806] = 1.0;
  memset(&SD->u1.f1.dv2[1807], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1842] = -in11[2];
  memset(&SD->u1.f1.dv2[1843], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[1878] = -in11[2];
  memset(&SD->u1.f1.dv2[1879], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[2065] = -1.0;
  memset(&SD->u1.f1.dv2[2066], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2101] = 1.0;
  memset(&SD->u1.f1.dv2[2102], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2137] = -in11[2];
  memset(&SD->u1.f1.dv2[2138], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2173] = -in11[2];
  memset(&SD->u1.f1.dv2[2174], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[2360] = -1.0;
  memset(&SD->u1.f1.dv2[2361], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2396] = 1.0;
  memset(&SD->u1.f1.dv2[2397], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2432] = -in11[2];
  memset(&SD->u1.f1.dv2[2433], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2468] = -in11[2];
  memset(&SD->u1.f1.dv2[2469], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[2655] = -1.0;
  memset(&SD->u1.f1.dv2[2656], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2691] = 1.0;
  memset(&SD->u1.f1.dv2[2692], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2727] = -in11[2];
  memset(&SD->u1.f1.dv2[2728], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2763] = -in11[2];
  memset(&SD->u1.f1.dv2[2764], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[2950] = -1.0;
  memset(&SD->u1.f1.dv2[2951], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[2986] = 1.0;
  memset(&SD->u1.f1.dv2[2987], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3022] = -in11[2];
  memset(&SD->u1.f1.dv2[3023], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3058] = -in11[2];
  memset(&SD->u1.f1.dv2[3059], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[3245] = -1.0;
  memset(&SD->u1.f1.dv2[3246], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3281] = 1.0;
  memset(&SD->u1.f1.dv2[3282], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3317] = -in11[2];
  memset(&SD->u1.f1.dv2[3318], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3353] = -in11[2];
  memset(&SD->u1.f1.dv2[3354], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[3540] = -1.0;
  memset(&SD->u1.f1.dv2[3541], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3576] = 1.0;
  memset(&SD->u1.f1.dv2[3577], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3612] = -in11[2];
  memset(&SD->u1.f1.dv2[3613], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3648] = -in11[2];
  memset(&SD->u1.f1.dv2[3649], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[3835] = -1.0;
  memset(&SD->u1.f1.dv2[3836], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3871] = 1.0;
  memset(&SD->u1.f1.dv2[3872], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3907] = -in11[2];
  memset(&SD->u1.f1.dv2[3908], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[3943] = -in11[2];
  memset(&SD->u1.f1.dv2[3944], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[4130] = -1.0;
  memset(&SD->u1.f1.dv2[4131], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4166] = 1.0;
  memset(&SD->u1.f1.dv2[4167], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4202] = -in11[2];
  memset(&SD->u1.f1.dv2[4203], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4238] = -in11[2];
  memset(&SD->u1.f1.dv2[4239], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[4425] = -1.0;
  memset(&SD->u1.f1.dv2[4426], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4461] = 1.0;
  memset(&SD->u1.f1.dv2[4462], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4497] = -in11[2];
  memset(&SD->u1.f1.dv2[4498], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4533] = -in11[2];
  memset(&SD->u1.f1.dv2[4534], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[4720] = -1.0;
  memset(&SD->u1.f1.dv2[4721], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4756] = 1.0;
  memset(&SD->u1.f1.dv2[4757], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4792] = -in11[2];
  memset(&SD->u1.f1.dv2[4793], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[4828] = -in11[2];
  memset(&SD->u1.f1.dv2[4829], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[5015] = -1.0;
  memset(&SD->u1.f1.dv2[5016], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5051] = 1.0;
  memset(&SD->u1.f1.dv2[5052], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5087] = -in11[2];
  memset(&SD->u1.f1.dv2[5088], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5123] = -in11[2];
  memset(&SD->u1.f1.dv2[5124], 0, 186U * sizeof(real_T));
  SD->u1.f1.dv2[5310] = -1.0;
  memset(&SD->u1.f1.dv2[5311], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5346] = 1.0;
  memset(&SD->u1.f1.dv2[5347], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[5364] = -in11[3];
  memset(&SD->u1.f1.dv2[5365], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5400] = -in11[3];
  memset(&SD->u1.f1.dv2[5401], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[5605] = -1.0;
  memset(&SD->u1.f1.dv2[5606], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5641] = 1.0;
  memset(&SD->u1.f1.dv2[5642], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[5659] = -in11[3];
  memset(&SD->u1.f1.dv2[5660], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5695] = -in11[3];
  memset(&SD->u1.f1.dv2[5696], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[5900] = -1.0;
  memset(&SD->u1.f1.dv2[5901], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5936] = 1.0;
  memset(&SD->u1.f1.dv2[5937], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[5954] = -in11[3];
  memset(&SD->u1.f1.dv2[5955], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[5990] = -in11[3];
  memset(&SD->u1.f1.dv2[5991], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[6195] = -1.0;
  memset(&SD->u1.f1.dv2[6196], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[6231] = 1.0;
  memset(&SD->u1.f1.dv2[6232], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[6249] = -in11[3];
  memset(&SD->u1.f1.dv2[6250], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[6285] = -in11[3];
  memset(&SD->u1.f1.dv2[6286], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[6490] = -1.0;
  memset(&SD->u1.f1.dv2[6491], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[6526] = 1.0;
  memset(&SD->u1.f1.dv2[6527], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[6544] = -in11[3];
  memset(&SD->u1.f1.dv2[6545], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[6580] = -in11[3];
  memset(&SD->u1.f1.dv2[6581], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[6785] = -1.0;
  memset(&SD->u1.f1.dv2[6786], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[6821] = 1.0;
  memset(&SD->u1.f1.dv2[6822], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[6839] = -in11[3];
  memset(&SD->u1.f1.dv2[6840], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[6875] = -in11[3];
  memset(&SD->u1.f1.dv2[6876], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[7080] = -1.0;
  memset(&SD->u1.f1.dv2[7081], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[7116] = 1.0;
  memset(&SD->u1.f1.dv2[7117], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[7134] = -in11[3];
  memset(&SD->u1.f1.dv2[7135], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[7170] = -in11[3];
  memset(&SD->u1.f1.dv2[7171], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[7375] = -1.0;
  memset(&SD->u1.f1.dv2[7376], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[7411] = 1.0;
  memset(&SD->u1.f1.dv2[7412], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[7429] = -in11[3];
  memset(&SD->u1.f1.dv2[7430], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[7465] = -in11[3];
  memset(&SD->u1.f1.dv2[7466], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[7670] = -1.0;
  memset(&SD->u1.f1.dv2[7671], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[7706] = 1.0;
  memset(&SD->u1.f1.dv2[7707], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[7724] = -in11[3];
  memset(&SD->u1.f1.dv2[7725], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[7760] = -in11[3];
  memset(&SD->u1.f1.dv2[7761], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[7965] = -1.0;
  memset(&SD->u1.f1.dv2[7966], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8001] = 1.0;
  memset(&SD->u1.f1.dv2[8002], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[8019] = -in11[3];
  memset(&SD->u1.f1.dv2[8020], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8055] = -in11[3];
  memset(&SD->u1.f1.dv2[8056], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[8260] = -1.0;
  memset(&SD->u1.f1.dv2[8261], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8296] = 1.0;
  memset(&SD->u1.f1.dv2[8297], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[8314] = -in11[3];
  memset(&SD->u1.f1.dv2[8315], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8350] = -in11[3];
  memset(&SD->u1.f1.dv2[8351], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[8555] = -1.0;
  memset(&SD->u1.f1.dv2[8556], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8591] = 1.0;
  memset(&SD->u1.f1.dv2[8592], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[8609] = -in11[3];
  memset(&SD->u1.f1.dv2[8610], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8645] = -in11[3];
  memset(&SD->u1.f1.dv2[8646], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[8850] = -1.0;
  memset(&SD->u1.f1.dv2[8851], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8886] = 1.0;
  memset(&SD->u1.f1.dv2[8887], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[8904] = -in11[3];
  memset(&SD->u1.f1.dv2[8905], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[8940] = -in11[3];
  memset(&SD->u1.f1.dv2[8941], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[9145] = -1.0;
  memset(&SD->u1.f1.dv2[9146], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[9181] = 1.0;
  memset(&SD->u1.f1.dv2[9182], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[9199] = -in11[3];
  memset(&SD->u1.f1.dv2[9200], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[9235] = -in11[3];
  memset(&SD->u1.f1.dv2[9236], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[9440] = -1.0;
  memset(&SD->u1.f1.dv2[9441], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[9476] = 1.0;
  memset(&SD->u1.f1.dv2[9477], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[9494] = -in11[3];
  memset(&SD->u1.f1.dv2[9495], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[9530] = -in11[3];
  memset(&SD->u1.f1.dv2[9531], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[9735] = -1.0;
  memset(&SD->u1.f1.dv2[9736], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[9771] = 1.0;
  memset(&SD->u1.f1.dv2[9772], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[9789] = -in11[3];
  memset(&SD->u1.f1.dv2[9790], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[9825] = -in11[3];
  memset(&SD->u1.f1.dv2[9826], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[10030] = -1.0;
  memset(&SD->u1.f1.dv2[10031], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[10066] = 1.0;
  memset(&SD->u1.f1.dv2[10067], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[10084] = -in11[3];
  memset(&SD->u1.f1.dv2[10085], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[10120] = -in11[3];
  memset(&SD->u1.f1.dv2[10121], 0, 204U * sizeof(real_T));
  SD->u1.f1.dv2[10325] = -1.0;
  memset(&SD->u1.f1.dv2[10326], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[10361] = 1.0;
  memset(&SD->u1.f1.dv2[10362], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[10379] = -in11[3];
  memset(&SD->u1.f1.dv2[10380], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[10415] = -in11[3];
  memset(&SD->u1.f1.dv2[10416], 0, 168U * sizeof(real_T));
  SD->u1.f1.dv2[10584] = 1.0;
  memset(&SD->u1.f1.dv2[10585], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[10620] = -1.0;
  memset(&SD->u1.f1.dv2[10621], 0, 89U * sizeof(real_T));
  SD->u1.f1.dv2[10710] = 1.0;
  SD->u1.f1.dv2[10711] = 0.0;
  SD->u1.f1.dv2[10712] = 0.0;
  SD->u1.f1.dv2[10713] = 0.0;
  SD->u1.f1.dv2[10714] = 0.0;
  SD->u1.f1.dv2[10715] = -1.0;
  memset(&SD->u1.f1.dv2[10716], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[10732] = 1.0;
  memset(&SD->u1.f1.dv2[10733], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[10768] = -1.0;
  memset(&SD->u1.f1.dv2[10769], 0, 89U * sizeof(real_T));
  SD->u1.f1.dv2[10858] = 1.0;
  SD->u1.f1.dv2[10859] = 0.0;
  SD->u1.f1.dv2[10860] = 0.0;
  SD->u1.f1.dv2[10861] = 0.0;
  SD->u1.f1.dv2[10862] = 0.0;
  SD->u1.f1.dv2[10863] = -1.0;
  memset(&SD->u1.f1.dv2[10864], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[10880] = 1.0;
  memset(&SD->u1.f1.dv2[10881], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[10916] = -1.0;
  memset(&SD->u1.f1.dv2[10917], 0, 89U * sizeof(real_T));
  SD->u1.f1.dv2[11006] = 1.0;
  SD->u1.f1.dv2[11007] = 0.0;
  SD->u1.f1.dv2[11008] = 0.0;
  SD->u1.f1.dv2[11009] = 0.0;
  SD->u1.f1.dv2[11010] = 0.0;
  SD->u1.f1.dv2[11011] = -1.0;
  memset(&SD->u1.f1.dv2[11012], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[11028] = 1.0;
  memset(&SD->u1.f1.dv2[11029], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[11064] = -1.0;
  memset(&SD->u1.f1.dv2[11065], 0, 89U * sizeof(real_T));
  SD->u1.f1.dv2[11154] = 1.0;
  SD->u1.f1.dv2[11155] = 0.0;
  SD->u1.f1.dv2[11156] = 0.0;
  SD->u1.f1.dv2[11157] = 0.0;
  SD->u1.f1.dv2[11158] = 0.0;
  SD->u1.f1.dv2[11159] = -1.0;
  memset(&SD->u1.f1.dv2[11160], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[11176] = 1.0;
  memset(&SD->u1.f1.dv2[11177], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[11212] = -1.0;
  memset(&SD->u1.f1.dv2[11213], 0, 89U * sizeof(real_T));
  SD->u1.f1.dv2[11302] = 1.0;
  SD->u1.f1.dv2[11303] = 0.0;
  SD->u1.f1.dv2[11304] = 0.0;
  SD->u1.f1.dv2[11305] = 0.0;
  SD->u1.f1.dv2[11306] = 0.0;
  SD->u1.f1.dv2[11307] = -1.0;
  memset(&SD->u1.f1.dv2[11308], 0, sizeof(real_T) << 4);
  SD->u1.f1.dv2[11324] = 1.0;
  memset(&SD->u1.f1.dv2[11325], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[11360] = -1.0;
  memset(&SD->u1.f1.dv2[11361], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[11472] = 1.0;
  memset(&SD->u1.f1.dv2[11473], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[11508] = -1.0;
  memset(&SD->u1.f1.dv2[11509], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[11620] = 1.0;
  memset(&SD->u1.f1.dv2[11621], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[11656] = -1.0;
  memset(&SD->u1.f1.dv2[11657], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[11768] = 1.0;
  memset(&SD->u1.f1.dv2[11769], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[11804] = -1.0;
  memset(&SD->u1.f1.dv2[11805], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[11916] = 1.0;
  memset(&SD->u1.f1.dv2[11917], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[11952] = -1.0;
  memset(&SD->u1.f1.dv2[11953], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[12064] = 1.0;
  memset(&SD->u1.f1.dv2[12065], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[12100] = -1.0;
  memset(&SD->u1.f1.dv2[12101], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[12212] = 1.0;
  memset(&SD->u1.f1.dv2[12213], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[12248] = -1.0;
  memset(&SD->u1.f1.dv2[12249], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[12360] = 1.0;
  memset(&SD->u1.f1.dv2[12361], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[12396] = -1.0;
  memset(&SD->u1.f1.dv2[12397], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[12508] = 1.0;
  memset(&SD->u1.f1.dv2[12509], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[12544] = -1.0;
  memset(&SD->u1.f1.dv2[12545], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[12656] = 1.0;
  memset(&SD->u1.f1.dv2[12657], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[12692] = -1.0;
  memset(&SD->u1.f1.dv2[12693], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[12804] = 1.0;
  memset(&SD->u1.f1.dv2[12805], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[12840] = -1.0;
  memset(&SD->u1.f1.dv2[12841], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[12952] = 1.0;
  memset(&SD->u1.f1.dv2[12953], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[12988] = -1.0;
  memset(&SD->u1.f1.dv2[12989], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[13100] = 1.0;
  memset(&SD->u1.f1.dv2[13101], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[13136] = -1.0;
  memset(&SD->u1.f1.dv2[13137], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[13248] = 1.0;
  memset(&SD->u1.f1.dv2[13249], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[13284] = -1.0;
  memset(&SD->u1.f1.dv2[13285], 0, 81U * sizeof(real_T));
  SD->u1.f1.dv2[13366] = 1.0;
  SD->u1.f1.dv2[13367] = 0.0;
  SD->u1.f1.dv2[13368] = 0.0;
  SD->u1.f1.dv2[13369] = 0.0;
  SD->u1.f1.dv2[13370] = 0.0;
  SD->u1.f1.dv2[13371] = -1.0;
  memset(&SD->u1.f1.dv2[13372], 0, 24U * sizeof(real_T));
  SD->u1.f1.dv2[13396] = 1.0;
  memset(&SD->u1.f1.dv2[13397], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[13432] = -1.0;
  memset(&SD->u1.f1.dv2[13433], 0, 81U * sizeof(real_T));
  SD->u1.f1.dv2[13514] = 1.0;
  SD->u1.f1.dv2[13515] = 0.0;
  SD->u1.f1.dv2[13516] = 0.0;
  SD->u1.f1.dv2[13517] = 0.0;
  SD->u1.f1.dv2[13518] = 0.0;
  SD->u1.f1.dv2[13519] = -1.0;
  memset(&SD->u1.f1.dv2[13520], 0, 24U * sizeof(real_T));
  SD->u1.f1.dv2[13544] = 1.0;
  memset(&SD->u1.f1.dv2[13545], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[13580] = -1.0;
  memset(&SD->u1.f1.dv2[13581], 0, 81U * sizeof(real_T));
  SD->u1.f1.dv2[13662] = 1.0;
  SD->u1.f1.dv2[13663] = 0.0;
  SD->u1.f1.dv2[13664] = 0.0;
  SD->u1.f1.dv2[13665] = 0.0;
  SD->u1.f1.dv2[13666] = 0.0;
  SD->u1.f1.dv2[13667] = -1.0;
  memset(&SD->u1.f1.dv2[13668], 0, 24U * sizeof(real_T));
  SD->u1.f1.dv2[13692] = 1.0;
  memset(&SD->u1.f1.dv2[13693], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[13728] = -1.0;
  memset(&SD->u1.f1.dv2[13729], 0, 81U * sizeof(real_T));
  SD->u1.f1.dv2[13810] = 1.0;
  SD->u1.f1.dv2[13811] = 0.0;
  SD->u1.f1.dv2[13812] = 0.0;
  SD->u1.f1.dv2[13813] = 0.0;
  SD->u1.f1.dv2[13814] = 0.0;
  SD->u1.f1.dv2[13815] = -1.0;
  memset(&SD->u1.f1.dv2[13816], 0, 24U * sizeof(real_T));
  SD->u1.f1.dv2[13840] = 1.0;
  memset(&SD->u1.f1.dv2[13841], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[13876] = -1.0;
  memset(&SD->u1.f1.dv2[13877], 0, 81U * sizeof(real_T));
  SD->u1.f1.dv2[13958] = 1.0;
  SD->u1.f1.dv2[13959] = 0.0;
  SD->u1.f1.dv2[13960] = 0.0;
  SD->u1.f1.dv2[13961] = 0.0;
  SD->u1.f1.dv2[13962] = 0.0;
  SD->u1.f1.dv2[13963] = -1.0;
  memset(&SD->u1.f1.dv2[13964], 0, 24U * sizeof(real_T));
  SD->u1.f1.dv2[13988] = 1.0;
  memset(&SD->u1.f1.dv2[13989], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[14024] = -1.0;
  memset(&SD->u1.f1.dv2[14025], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[14136] = 1.0;
  memset(&SD->u1.f1.dv2[14137], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[14172] = -1.0;
  memset(&SD->u1.f1.dv2[14173], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[14284] = 1.0;
  memset(&SD->u1.f1.dv2[14285], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[14320] = -1.0;
  memset(&SD->u1.f1.dv2[14321], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[14432] = 1.0;
  memset(&SD->u1.f1.dv2[14433], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[14468] = -1.0;
  memset(&SD->u1.f1.dv2[14469], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[14580] = 1.0;
  memset(&SD->u1.f1.dv2[14581], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[14616] = -1.0;
  memset(&SD->u1.f1.dv2[14617], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[14728] = 1.0;
  memset(&SD->u1.f1.dv2[14729], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[14764] = -1.0;
  memset(&SD->u1.f1.dv2[14765], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[14876] = 1.0;
  memset(&SD->u1.f1.dv2[14877], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[14912] = -1.0;
  memset(&SD->u1.f1.dv2[14913], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[15024] = 1.0;
  memset(&SD->u1.f1.dv2[15025], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[15060] = -1.0;
  memset(&SD->u1.f1.dv2[15061], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[15172] = 1.0;
  memset(&SD->u1.f1.dv2[15173], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[15208] = -1.0;
  memset(&SD->u1.f1.dv2[15209], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[15320] = 1.0;
  memset(&SD->u1.f1.dv2[15321], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[15356] = -1.0;
  memset(&SD->u1.f1.dv2[15357], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[15468] = 1.0;
  memset(&SD->u1.f1.dv2[15469], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[15504] = -1.0;
  memset(&SD->u1.f1.dv2[15505], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[15616] = 1.0;
  memset(&SD->u1.f1.dv2[15617], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[15652] = -1.0;
  memset(&SD->u1.f1.dv2[15653], 0, 111U * sizeof(real_T));
  SD->u1.f1.dv2[15764] = 1.0;
  memset(&SD->u1.f1.dv2[15765], 0, 35U * sizeof(real_T));
  SD->u1.f1.dv2[15800] = -1.0;
  memset(&SD->u1.f1.dv2[15801], 0, 809U * sizeof(real_T));
  SD->u1.f1.dv2[16610] = -1.0;
  memset(&SD->u1.f1.dv2[16611], 0, 531U * sizeof(real_T));
  SD->u1.f1.dv2[17142] = -1.0;
  memset(&SD->u1.f1.dv2[17143], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[17160] = -1.0;
  memset(&SD->u1.f1.dv2[17161], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[17290] = -1.0;
  memset(&SD->u1.f1.dv2[17291], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[17308] = -1.0;
  memset(&SD->u1.f1.dv2[17309], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[17438] = -1.0;
  memset(&SD->u1.f1.dv2[17439], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[17456] = -1.0;
  memset(&SD->u1.f1.dv2[17457], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[17586] = -1.0;
  memset(&SD->u1.f1.dv2[17587], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[17604] = -1.0;
  memset(&SD->u1.f1.dv2[17605], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[17734] = -1.0;
  memset(&SD->u1.f1.dv2[17735], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[17752] = -1.0;
  memset(&SD->u1.f1.dv2[17753], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[17882] = -1.0;
  memset(&SD->u1.f1.dv2[17883], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[17900] = -1.0;
  memset(&SD->u1.f1.dv2[17901], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[18030] = -1.0;
  memset(&SD->u1.f1.dv2[18031], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[18048] = -1.0;
  memset(&SD->u1.f1.dv2[18049], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[18178] = -1.0;
  memset(&SD->u1.f1.dv2[18179], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[18196] = -1.0;
  memset(&SD->u1.f1.dv2[18197], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[18326] = -1.0;
  memset(&SD->u1.f1.dv2[18327], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[18344] = -1.0;
  memset(&SD->u1.f1.dv2[18345], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[18474] = -1.0;
  memset(&SD->u1.f1.dv2[18475], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[18492] = -1.0;
  memset(&SD->u1.f1.dv2[18493], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[18622] = -1.0;
  memset(&SD->u1.f1.dv2[18623], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[18640] = -1.0;
  memset(&SD->u1.f1.dv2[18641], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[18770] = -1.0;
  memset(&SD->u1.f1.dv2[18771], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[18788] = -1.0;
  memset(&SD->u1.f1.dv2[18789], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[18918] = -1.0;
  memset(&SD->u1.f1.dv2[18919], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[18936] = -1.0;
  memset(&SD->u1.f1.dv2[18937], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[19066] = -1.0;
  memset(&SD->u1.f1.dv2[19067], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[19084] = -1.0;
  memset(&SD->u1.f1.dv2[19085], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[19214] = -1.0;
  memset(&SD->u1.f1.dv2[19215], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[19232] = -1.0;
  memset(&SD->u1.f1.dv2[19233], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[19362] = -1.0;
  memset(&SD->u1.f1.dv2[19363], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[19380] = -1.0;
  memset(&SD->u1.f1.dv2[19381], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[19510] = -1.0;
  memset(&SD->u1.f1.dv2[19511], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[19528] = -1.0;
  memset(&SD->u1.f1.dv2[19529], 0, 129U * sizeof(real_T));
  SD->u1.f1.dv2[19658] = -1.0;
  memset(&SD->u1.f1.dv2[19659], 0, 17U * sizeof(real_T));
  SD->u1.f1.dv2[19676] = -1.0;
  memset(&SD->u1.f1.dv2[19677], 0, 167U * sizeof(real_T));
  SD->u1.f1.dv2[19844] = 1.0;
  memset(&SD->u1.f1.dv2[19845], 0, 2625U * sizeof(real_T));
  SD->u1.f1.dv2[22470] = -1.0;
  SD->u1.f1.dv2[22471] = 0.0;
  SD->u1.f1.dv2[22472] = 0.0;
  SD->u1.f1.dv2[22473] = 0.0;
  SD->u1.f1.dv2[22474] = 0.0;
  SD->u1.f1.dv2[22475] = -1.0;
  memset(&SD->u1.f1.dv2[22476], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[22618] = -1.0;
  SD->u1.f1.dv2[22619] = 0.0;
  SD->u1.f1.dv2[22620] = 0.0;
  SD->u1.f1.dv2[22621] = 0.0;
  SD->u1.f1.dv2[22622] = 0.0;
  SD->u1.f1.dv2[22623] = -1.0;
  memset(&SD->u1.f1.dv2[22624], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[22766] = -1.0;
  SD->u1.f1.dv2[22767] = 0.0;
  SD->u1.f1.dv2[22768] = 0.0;
  SD->u1.f1.dv2[22769] = 0.0;
  SD->u1.f1.dv2[22770] = 0.0;
  SD->u1.f1.dv2[22771] = -1.0;
  memset(&SD->u1.f1.dv2[22772], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[22914] = -1.0;
  SD->u1.f1.dv2[22915] = 0.0;
  SD->u1.f1.dv2[22916] = 0.0;
  SD->u1.f1.dv2[22917] = 0.0;
  SD->u1.f1.dv2[22918] = 0.0;
  SD->u1.f1.dv2[22919] = -1.0;
  memset(&SD->u1.f1.dv2[22920], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[23062] = -1.0;
  SD->u1.f1.dv2[23063] = 0.0;
  SD->u1.f1.dv2[23064] = 0.0;
  SD->u1.f1.dv2[23065] = 0.0;
  SD->u1.f1.dv2[23066] = 0.0;
  SD->u1.f1.dv2[23067] = -1.0;
  memset(&SD->u1.f1.dv2[23068], 0, 147U * sizeof(real_T));
  SD->u1.f1.dv2[23215] = -1.0;
  SD->u1.f1.dv2[23216] = 0.0;
  SD->u1.f1.dv2[23217] = 0.0;
  SD->u1.f1.dv2[23218] = 0.0;
  SD->u1.f1.dv2[23219] = 0.0;
  SD->u1.f1.dv2[23220] = -1.0;
  memset(&SD->u1.f1.dv2[23221], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[23363] = -1.0;
  SD->u1.f1.dv2[23364] = 0.0;
  SD->u1.f1.dv2[23365] = 0.0;
  SD->u1.f1.dv2[23366] = 0.0;
  SD->u1.f1.dv2[23367] = 0.0;
  SD->u1.f1.dv2[23368] = -1.0;
  memset(&SD->u1.f1.dv2[23369], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[23511] = -1.0;
  SD->u1.f1.dv2[23512] = 0.0;
  SD->u1.f1.dv2[23513] = 0.0;
  SD->u1.f1.dv2[23514] = 0.0;
  SD->u1.f1.dv2[23515] = 0.0;
  SD->u1.f1.dv2[23516] = -1.0;
  memset(&SD->u1.f1.dv2[23517], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[23659] = -1.0;
  SD->u1.f1.dv2[23660] = 0.0;
  SD->u1.f1.dv2[23661] = 0.0;
  SD->u1.f1.dv2[23662] = 0.0;
  SD->u1.f1.dv2[23663] = 0.0;
  SD->u1.f1.dv2[23664] = -1.0;
  memset(&SD->u1.f1.dv2[23665], 0, 142U * sizeof(real_T));
  SD->u1.f1.dv2[23807] = -1.0;
  SD->u1.f1.dv2[23808] = 0.0;
  SD->u1.f1.dv2[23809] = 0.0;
  SD->u1.f1.dv2[23810] = 0.0;
  SD->u1.f1.dv2[23811] = 0.0;
  SD->u1.f1.dv2[23812] = -1.0;
  memset(&SD->u1.f1.dv2[23813], 0, 1177U * sizeof(real_T));
  for (i2 = 0; i2 < 170; i2++) {
    memcpy(&Aiq[i2 * 147], &SD->u1.f1.dv2[i2 * 147], 147U * sizeof(real_T));
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
  biq[130] = t3;
  biq[131] = t9;
  biq[132] = t9;
  biq[133] = t9;
  biq[134] = t9;
  biq[135] = t9;
  biq[136] = t10;
  biq[137] = t10;
  biq[138] = t10;
  biq[139] = t10;
  biq[140] = t10;
  biq[141] = t11;
  biq[142] = t11;
  biq[143] = t11;
  biq[144] = t11;
  biq[145] = t11;
  biq[146] = -in9[1];
}

/* End of code generation (IqFast_RightStart0V30.cpp) */
