/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart4V30.cpp
 *
 * Code generation for function 'IqFast_RightStart4V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step4.h"
#include "IqFast_RightStart4V30.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart4V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart4V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart4V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [22270], real_T biq[131])
{
  int32_T i2;
  real_T dv2[22270];
  real_T t7;
  real_T t3;

  /* IQFAST_RIGHTSTART4V30 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART4V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:16:07 */
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
  memset(&dv2[109], 0, 154U * sizeof(real_T));
  dv2[263] = -1.0;
  memset(&dv2[264], 0, 35U * sizeof(real_T));
  dv2[299] = 1.0;
  memset(&dv2[300], 0, 35U * sizeof(real_T));
  dv2[335] = -in11[2];
  memset(&dv2[336], 0, 35U * sizeof(real_T));
  dv2[371] = -in11[2];
  memset(&dv2[372], 0, 154U * sizeof(real_T));
  dv2[526] = -1.0;
  memset(&dv2[527], 0, 35U * sizeof(real_T));
  dv2[562] = 1.0;
  memset(&dv2[563], 0, 35U * sizeof(real_T));
  dv2[598] = -in11[2];
  memset(&dv2[599], 0, 35U * sizeof(real_T));
  dv2[634] = -in11[2];
  memset(&dv2[635], 0, 154U * sizeof(real_T));
  dv2[789] = -1.0;
  memset(&dv2[790], 0, 35U * sizeof(real_T));
  dv2[825] = 1.0;
  memset(&dv2[826], 0, 35U * sizeof(real_T));
  dv2[861] = -in11[2];
  memset(&dv2[862], 0, 35U * sizeof(real_T));
  dv2[897] = -in11[2];
  memset(&dv2[898], 0, 154U * sizeof(real_T));
  dv2[1052] = -1.0;
  memset(&dv2[1053], 0, 35U * sizeof(real_T));
  dv2[1088] = 1.0;
  memset(&dv2[1089], 0, 35U * sizeof(real_T));
  dv2[1124] = -in11[2];
  memset(&dv2[1125], 0, 35U * sizeof(real_T));
  dv2[1160] = -in11[2];
  memset(&dv2[1161], 0, 154U * sizeof(real_T));
  dv2[1315] = -1.0;
  memset(&dv2[1316], 0, 35U * sizeof(real_T));
  dv2[1351] = 1.0;
  memset(&dv2[1352], 0, 35U * sizeof(real_T));
  dv2[1387] = -in11[2];
  memset(&dv2[1388], 0, 35U * sizeof(real_T));
  dv2[1423] = -in11[2];
  memset(&dv2[1424], 0, 154U * sizeof(real_T));
  dv2[1578] = -1.0;
  memset(&dv2[1579], 0, 35U * sizeof(real_T));
  dv2[1614] = 1.0;
  memset(&dv2[1615], 0, 35U * sizeof(real_T));
  dv2[1650] = -in11[2];
  memset(&dv2[1651], 0, 35U * sizeof(real_T));
  dv2[1686] = -in11[2];
  memset(&dv2[1687], 0, 154U * sizeof(real_T));
  dv2[1841] = -1.0;
  memset(&dv2[1842], 0, 35U * sizeof(real_T));
  dv2[1877] = 1.0;
  memset(&dv2[1878], 0, 35U * sizeof(real_T));
  dv2[1913] = -in11[2];
  memset(&dv2[1914], 0, 35U * sizeof(real_T));
  dv2[1949] = -in11[2];
  memset(&dv2[1950], 0, 154U * sizeof(real_T));
  dv2[2104] = -1.0;
  memset(&dv2[2105], 0, 35U * sizeof(real_T));
  dv2[2140] = 1.0;
  memset(&dv2[2141], 0, 35U * sizeof(real_T));
  dv2[2176] = -in11[2];
  memset(&dv2[2177], 0, 35U * sizeof(real_T));
  dv2[2212] = -in11[2];
  memset(&dv2[2213], 0, 154U * sizeof(real_T));
  dv2[2367] = -1.0;
  memset(&dv2[2368], 0, 35U * sizeof(real_T));
  dv2[2403] = 1.0;
  memset(&dv2[2404], 0, 35U * sizeof(real_T));
  dv2[2439] = -in11[2];
  memset(&dv2[2440], 0, 35U * sizeof(real_T));
  dv2[2475] = -in11[2];
  memset(&dv2[2476], 0, 154U * sizeof(real_T));
  dv2[2630] = -1.0;
  memset(&dv2[2631], 0, 35U * sizeof(real_T));
  dv2[2666] = 1.0;
  memset(&dv2[2667], 0, 35U * sizeof(real_T));
  dv2[2702] = -in11[2];
  memset(&dv2[2703], 0, 35U * sizeof(real_T));
  dv2[2738] = -in11[2];
  memset(&dv2[2739], 0, 154U * sizeof(real_T));
  dv2[2893] = -1.0;
  memset(&dv2[2894], 0, 35U * sizeof(real_T));
  dv2[2929] = 1.0;
  memset(&dv2[2930], 0, 35U * sizeof(real_T));
  dv2[2965] = -in11[2];
  memset(&dv2[2966], 0, 35U * sizeof(real_T));
  dv2[3001] = -in11[2];
  memset(&dv2[3002], 0, 154U * sizeof(real_T));
  dv2[3156] = -1.0;
  memset(&dv2[3157], 0, 35U * sizeof(real_T));
  dv2[3192] = 1.0;
  memset(&dv2[3193], 0, 35U * sizeof(real_T));
  dv2[3228] = -in11[2];
  memset(&dv2[3229], 0, 35U * sizeof(real_T));
  dv2[3264] = -in11[2];
  memset(&dv2[3265], 0, 154U * sizeof(real_T));
  dv2[3419] = -1.0;
  memset(&dv2[3420], 0, 35U * sizeof(real_T));
  dv2[3455] = 1.0;
  memset(&dv2[3456], 0, 35U * sizeof(real_T));
  dv2[3491] = -in11[2];
  memset(&dv2[3492], 0, 35U * sizeof(real_T));
  dv2[3527] = -in11[2];
  memset(&dv2[3528], 0, 154U * sizeof(real_T));
  dv2[3682] = -1.0;
  memset(&dv2[3683], 0, 35U * sizeof(real_T));
  dv2[3718] = 1.0;
  memset(&dv2[3719], 0, 35U * sizeof(real_T));
  dv2[3754] = -in11[2];
  memset(&dv2[3755], 0, 35U * sizeof(real_T));
  dv2[3790] = -in11[2];
  memset(&dv2[3791], 0, 154U * sizeof(real_T));
  dv2[3945] = -1.0;
  memset(&dv2[3946], 0, 35U * sizeof(real_T));
  dv2[3981] = 1.0;
  memset(&dv2[3982], 0, 35U * sizeof(real_T));
  dv2[4017] = -in11[2];
  memset(&dv2[4018], 0, 35U * sizeof(real_T));
  dv2[4053] = -in11[2];
  memset(&dv2[4054], 0, 154U * sizeof(real_T));
  dv2[4208] = -1.0;
  memset(&dv2[4209], 0, 35U * sizeof(real_T));
  dv2[4244] = 1.0;
  memset(&dv2[4245], 0, 35U * sizeof(real_T));
  dv2[4280] = -in11[2];
  memset(&dv2[4281], 0, 35U * sizeof(real_T));
  dv2[4316] = -in11[2];
  memset(&dv2[4317], 0, 154U * sizeof(real_T));
  dv2[4471] = -1.0;
  memset(&dv2[4472], 0, 35U * sizeof(real_T));
  dv2[4507] = 1.0;
  memset(&dv2[4508], 0, 35U * sizeof(real_T));
  dv2[4543] = -in11[2];
  memset(&dv2[4544], 0, 35U * sizeof(real_T));
  dv2[4579] = -in11[2];
  memset(&dv2[4580], 0, 154U * sizeof(real_T));
  dv2[4734] = -1.0;
  memset(&dv2[4735], 0, 35U * sizeof(real_T));
  dv2[4770] = 1.0;
  memset(&dv2[4771], 0, 17U * sizeof(real_T));
  dv2[4788] = -in11[3];
  memset(&dv2[4789], 0, 35U * sizeof(real_T));
  dv2[4824] = -in11[3];
  memset(&dv2[4825], 0, 172U * sizeof(real_T));
  dv2[4997] = -1.0;
  memset(&dv2[4998], 0, 35U * sizeof(real_T));
  dv2[5033] = 1.0;
  memset(&dv2[5034], 0, 17U * sizeof(real_T));
  dv2[5051] = -in11[3];
  memset(&dv2[5052], 0, 35U * sizeof(real_T));
  dv2[5087] = -in11[3];
  memset(&dv2[5088], 0, 172U * sizeof(real_T));
  dv2[5260] = -1.0;
  memset(&dv2[5261], 0, 35U * sizeof(real_T));
  dv2[5296] = 1.0;
  memset(&dv2[5297], 0, 17U * sizeof(real_T));
  dv2[5314] = -in11[3];
  memset(&dv2[5315], 0, 35U * sizeof(real_T));
  dv2[5350] = -in11[3];
  memset(&dv2[5351], 0, 172U * sizeof(real_T));
  dv2[5523] = -1.0;
  memset(&dv2[5524], 0, 35U * sizeof(real_T));
  dv2[5559] = 1.0;
  memset(&dv2[5560], 0, 17U * sizeof(real_T));
  dv2[5577] = -in11[3];
  memset(&dv2[5578], 0, 35U * sizeof(real_T));
  dv2[5613] = -in11[3];
  memset(&dv2[5614], 0, 172U * sizeof(real_T));
  dv2[5786] = -1.0;
  memset(&dv2[5787], 0, 35U * sizeof(real_T));
  dv2[5822] = 1.0;
  memset(&dv2[5823], 0, 17U * sizeof(real_T));
  dv2[5840] = -in11[3];
  memset(&dv2[5841], 0, 35U * sizeof(real_T));
  dv2[5876] = -in11[3];
  memset(&dv2[5877], 0, 172U * sizeof(real_T));
  dv2[6049] = -1.0;
  memset(&dv2[6050], 0, 35U * sizeof(real_T));
  dv2[6085] = 1.0;
  memset(&dv2[6086], 0, 17U * sizeof(real_T));
  dv2[6103] = -in11[3];
  memset(&dv2[6104], 0, 35U * sizeof(real_T));
  dv2[6139] = -in11[3];
  memset(&dv2[6140], 0, 172U * sizeof(real_T));
  dv2[6312] = -1.0;
  memset(&dv2[6313], 0, 35U * sizeof(real_T));
  dv2[6348] = 1.0;
  memset(&dv2[6349], 0, 17U * sizeof(real_T));
  dv2[6366] = -in11[3];
  memset(&dv2[6367], 0, 35U * sizeof(real_T));
  dv2[6402] = -in11[3];
  memset(&dv2[6403], 0, 172U * sizeof(real_T));
  dv2[6575] = -1.0;
  memset(&dv2[6576], 0, 35U * sizeof(real_T));
  dv2[6611] = 1.0;
  memset(&dv2[6612], 0, 17U * sizeof(real_T));
  dv2[6629] = -in11[3];
  memset(&dv2[6630], 0, 35U * sizeof(real_T));
  dv2[6665] = -in11[3];
  memset(&dv2[6666], 0, 172U * sizeof(real_T));
  dv2[6838] = -1.0;
  memset(&dv2[6839], 0, 35U * sizeof(real_T));
  dv2[6874] = 1.0;
  memset(&dv2[6875], 0, 17U * sizeof(real_T));
  dv2[6892] = -in11[3];
  memset(&dv2[6893], 0, 35U * sizeof(real_T));
  dv2[6928] = -in11[3];
  memset(&dv2[6929], 0, 172U * sizeof(real_T));
  dv2[7101] = -1.0;
  memset(&dv2[7102], 0, 35U * sizeof(real_T));
  dv2[7137] = 1.0;
  memset(&dv2[7138], 0, 17U * sizeof(real_T));
  dv2[7155] = -in11[3];
  memset(&dv2[7156], 0, 35U * sizeof(real_T));
  dv2[7191] = -in11[3];
  memset(&dv2[7192], 0, 172U * sizeof(real_T));
  dv2[7364] = -1.0;
  memset(&dv2[7365], 0, 35U * sizeof(real_T));
  dv2[7400] = 1.0;
  memset(&dv2[7401], 0, 17U * sizeof(real_T));
  dv2[7418] = -in11[3];
  memset(&dv2[7419], 0, 35U * sizeof(real_T));
  dv2[7454] = -in11[3];
  memset(&dv2[7455], 0, 172U * sizeof(real_T));
  dv2[7627] = -1.0;
  memset(&dv2[7628], 0, 35U * sizeof(real_T));
  dv2[7663] = 1.0;
  memset(&dv2[7664], 0, 17U * sizeof(real_T));
  dv2[7681] = -in11[3];
  memset(&dv2[7682], 0, 35U * sizeof(real_T));
  dv2[7717] = -in11[3];
  memset(&dv2[7718], 0, 172U * sizeof(real_T));
  dv2[7890] = -1.0;
  memset(&dv2[7891], 0, 35U * sizeof(real_T));
  dv2[7926] = 1.0;
  memset(&dv2[7927], 0, 17U * sizeof(real_T));
  dv2[7944] = -in11[3];
  memset(&dv2[7945], 0, 35U * sizeof(real_T));
  dv2[7980] = -in11[3];
  memset(&dv2[7981], 0, 172U * sizeof(real_T));
  dv2[8153] = -1.0;
  memset(&dv2[8154], 0, 35U * sizeof(real_T));
  dv2[8189] = 1.0;
  memset(&dv2[8190], 0, 17U * sizeof(real_T));
  dv2[8207] = -in11[3];
  memset(&dv2[8208], 0, 35U * sizeof(real_T));
  dv2[8243] = -in11[3];
  memset(&dv2[8244], 0, 172U * sizeof(real_T));
  dv2[8416] = -1.0;
  memset(&dv2[8417], 0, 35U * sizeof(real_T));
  dv2[8452] = 1.0;
  memset(&dv2[8453], 0, 17U * sizeof(real_T));
  dv2[8470] = -in11[3];
  memset(&dv2[8471], 0, 35U * sizeof(real_T));
  dv2[8506] = -in11[3];
  memset(&dv2[8507], 0, 172U * sizeof(real_T));
  dv2[8679] = -1.0;
  memset(&dv2[8680], 0, 35U * sizeof(real_T));
  dv2[8715] = 1.0;
  memset(&dv2[8716], 0, 17U * sizeof(real_T));
  dv2[8733] = -in11[3];
  memset(&dv2[8734], 0, 35U * sizeof(real_T));
  dv2[8769] = -in11[3];
  memset(&dv2[8770], 0, 172U * sizeof(real_T));
  dv2[8942] = -1.0;
  memset(&dv2[8943], 0, 35U * sizeof(real_T));
  dv2[8978] = 1.0;
  memset(&dv2[8979], 0, 17U * sizeof(real_T));
  dv2[8996] = -in11[3];
  memset(&dv2[8997], 0, 35U * sizeof(real_T));
  dv2[9032] = -in11[3];
  memset(&dv2[9033], 0, 172U * sizeof(real_T));
  dv2[9205] = -1.0;
  memset(&dv2[9206], 0, 35U * sizeof(real_T));
  dv2[9241] = 1.0;
  memset(&dv2[9242], 0, 17U * sizeof(real_T));
  dv2[9259] = -in11[3];
  memset(&dv2[9260], 0, 35U * sizeof(real_T));
  dv2[9295] = -in11[3];
  memset(&dv2[9296], 0, 136U * sizeof(real_T));
  dv2[9432] = 1.0;
  memset(&dv2[9433], 0, 35U * sizeof(real_T));
  dv2[9468] = -1.0;
  memset(&dv2[9469], 0, 89U * sizeof(real_T));
  dv2[9558] = 1.0;
  dv2[9559] = -1.0;
  dv2[9560] = 0.0;
  dv2[9561] = 0.0;
  dv2[9562] = 0.0;
  dv2[9563] = 0.0;
  dv2[9564] = 1.0;
  memset(&dv2[9565], 0, 35U * sizeof(real_T));
  dv2[9600] = -1.0;
  memset(&dv2[9601], 0, 95U * sizeof(real_T));
  dv2[9696] = 1.0;
  memset(&dv2[9697], 0, 35U * sizeof(real_T));
  dv2[9732] = -1.0;
  memset(&dv2[9733], 0, 95U * sizeof(real_T));
  dv2[9828] = 1.0;
  memset(&dv2[9829], 0, 35U * sizeof(real_T));
  dv2[9864] = -1.0;
  memset(&dv2[9865], 0, 95U * sizeof(real_T));
  dv2[9960] = 1.0;
  memset(&dv2[9961], 0, 35U * sizeof(real_T));
  dv2[9996] = -1.0;
  memset(&dv2[9997], 0, 95U * sizeof(real_T));
  dv2[10092] = 1.0;
  memset(&dv2[10093], 0, 35U * sizeof(real_T));
  dv2[10128] = -1.0;
  memset(&dv2[10129], 0, 95U * sizeof(real_T));
  dv2[10224] = 1.0;
  memset(&dv2[10225], 0, 35U * sizeof(real_T));
  dv2[10260] = -1.0;
  memset(&dv2[10261], 0, 95U * sizeof(real_T));
  dv2[10356] = 1.0;
  memset(&dv2[10357], 0, 35U * sizeof(real_T));
  dv2[10392] = -1.0;
  memset(&dv2[10393], 0, 95U * sizeof(real_T));
  dv2[10488] = 1.0;
  memset(&dv2[10489], 0, 35U * sizeof(real_T));
  dv2[10524] = -1.0;
  memset(&dv2[10525], 0, 95U * sizeof(real_T));
  dv2[10620] = 1.0;
  memset(&dv2[10621], 0, 35U * sizeof(real_T));
  dv2[10656] = -1.0;
  memset(&dv2[10657], 0, 95U * sizeof(real_T));
  dv2[10752] = 1.0;
  memset(&dv2[10753], 0, 35U * sizeof(real_T));
  dv2[10788] = -1.0;
  memset(&dv2[10789], 0, 95U * sizeof(real_T));
  dv2[10884] = 1.0;
  memset(&dv2[10885], 0, 35U * sizeof(real_T));
  dv2[10920] = -1.0;
  memset(&dv2[10921], 0, 95U * sizeof(real_T));
  dv2[11016] = 1.0;
  memset(&dv2[11017], 0, 35U * sizeof(real_T));
  dv2[11052] = -1.0;
  memset(&dv2[11053], 0, 95U * sizeof(real_T));
  dv2[11148] = 1.0;
  memset(&dv2[11149], 0, 35U * sizeof(real_T));
  dv2[11184] = -1.0;
  memset(&dv2[11185], 0, 95U * sizeof(real_T));
  dv2[11280] = 1.0;
  memset(&dv2[11281], 0, 35U * sizeof(real_T));
  dv2[11316] = -1.0;
  memset(&dv2[11317], 0, 95U * sizeof(real_T));
  dv2[11412] = 1.0;
  memset(&dv2[11413], 0, 35U * sizeof(real_T));
  dv2[11448] = -1.0;
  memset(&dv2[11449], 0, 95U * sizeof(real_T));
  dv2[11544] = 1.0;
  memset(&dv2[11545], 0, 35U * sizeof(real_T));
  dv2[11580] = -1.0;
  memset(&dv2[11581], 0, 95U * sizeof(real_T));
  dv2[11676] = 1.0;
  memset(&dv2[11677], 0, 35U * sizeof(real_T));
  dv2[11712] = -1.0;
  memset(&dv2[11713], 0, 95U * sizeof(real_T));
  dv2[11808] = 1.0;
  memset(&dv2[11809], 0, 35U * sizeof(real_T));
  dv2[11844] = -1.0;
  memset(&dv2[11845], 0, 73U * sizeof(real_T));
  dv2[11918] = 1.0;
  dv2[11919] = -1.0;
  memset(&dv2[11920], 0, 20U * sizeof(real_T));
  dv2[11940] = 1.0;
  memset(&dv2[11941], 0, 35U * sizeof(real_T));
  dv2[11976] = -1.0;
  memset(&dv2[11977], 0, 95U * sizeof(real_T));
  dv2[12072] = 1.0;
  memset(&dv2[12073], 0, 35U * sizeof(real_T));
  dv2[12108] = -1.0;
  memset(&dv2[12109], 0, 95U * sizeof(real_T));
  dv2[12204] = 1.0;
  memset(&dv2[12205], 0, 35U * sizeof(real_T));
  dv2[12240] = -1.0;
  memset(&dv2[12241], 0, 95U * sizeof(real_T));
  dv2[12336] = 1.0;
  memset(&dv2[12337], 0, 35U * sizeof(real_T));
  dv2[12372] = -1.0;
  memset(&dv2[12373], 0, 95U * sizeof(real_T));
  dv2[12468] = 1.0;
  memset(&dv2[12469], 0, 35U * sizeof(real_T));
  dv2[12504] = -1.0;
  memset(&dv2[12505], 0, 95U * sizeof(real_T));
  dv2[12600] = 1.0;
  memset(&dv2[12601], 0, 35U * sizeof(real_T));
  dv2[12636] = -1.0;
  memset(&dv2[12637], 0, 95U * sizeof(real_T));
  dv2[12732] = 1.0;
  memset(&dv2[12733], 0, 35U * sizeof(real_T));
  dv2[12768] = -1.0;
  memset(&dv2[12769], 0, 95U * sizeof(real_T));
  dv2[12864] = 1.0;
  memset(&dv2[12865], 0, 35U * sizeof(real_T));
  dv2[12900] = -1.0;
  memset(&dv2[12901], 0, 95U * sizeof(real_T));
  dv2[12996] = 1.0;
  memset(&dv2[12997], 0, 35U * sizeof(real_T));
  dv2[13032] = -1.0;
  memset(&dv2[13033], 0, 95U * sizeof(real_T));
  dv2[13128] = 1.0;
  memset(&dv2[13129], 0, 35U * sizeof(real_T));
  dv2[13164] = -1.0;
  memset(&dv2[13165], 0, 95U * sizeof(real_T));
  dv2[13260] = 1.0;
  memset(&dv2[13261], 0, 35U * sizeof(real_T));
  dv2[13296] = -1.0;
  memset(&dv2[13297], 0, 95U * sizeof(real_T));
  dv2[13392] = 1.0;
  memset(&dv2[13393], 0, 35U * sizeof(real_T));
  dv2[13428] = -1.0;
  memset(&dv2[13429], 0, 95U * sizeof(real_T));
  dv2[13524] = 1.0;
  memset(&dv2[13525], 0, 35U * sizeof(real_T));
  dv2[13560] = -1.0;
  memset(&dv2[13561], 0, 95U * sizeof(real_T));
  dv2[13656] = 1.0;
  memset(&dv2[13657], 0, 35U * sizeof(real_T));
  dv2[13692] = -1.0;
  memset(&dv2[13693], 0, 95U * sizeof(real_T));
  dv2[13788] = 1.0;
  memset(&dv2[13789], 0, 35U * sizeof(real_T));
  dv2[13824] = -1.0;
  memset(&dv2[13825], 0, 95U * sizeof(real_T));
  dv2[13920] = 1.0;
  memset(&dv2[13921], 0, 35U * sizeof(real_T));
  dv2[13956] = -1.0;
  memset(&dv2[13957], 0, 95U * sizeof(real_T));
  dv2[14052] = 1.0;
  memset(&dv2[14053], 0, 35U * sizeof(real_T));
  dv2[14088] = -1.0;
  memset(&dv2[14089], 0, 713U * sizeof(real_T));
  dv2[14802] = -1.0;
  memset(&dv2[14803], 0, 483U * sizeof(real_T));
  dv2[15286] = -1.0;
  memset(&dv2[15287], 0, 17U * sizeof(real_T));
  dv2[15304] = -1.0;
  memset(&dv2[15305], 0, 113U * sizeof(real_T));
  dv2[15418] = -1.0;
  memset(&dv2[15419], 0, 17U * sizeof(real_T));
  dv2[15436] = -1.0;
  memset(&dv2[15437], 0, 113U * sizeof(real_T));
  dv2[15550] = -1.0;
  memset(&dv2[15551], 0, 17U * sizeof(real_T));
  dv2[15568] = -1.0;
  memset(&dv2[15569], 0, 113U * sizeof(real_T));
  dv2[15682] = -1.0;
  memset(&dv2[15683], 0, 17U * sizeof(real_T));
  dv2[15700] = -1.0;
  memset(&dv2[15701], 0, 113U * sizeof(real_T));
  dv2[15814] = -1.0;
  memset(&dv2[15815], 0, 17U * sizeof(real_T));
  dv2[15832] = -1.0;
  memset(&dv2[15833], 0, 113U * sizeof(real_T));
  dv2[15946] = -1.0;
  memset(&dv2[15947], 0, 17U * sizeof(real_T));
  dv2[15964] = -1.0;
  memset(&dv2[15965], 0, 113U * sizeof(real_T));
  dv2[16078] = -1.0;
  memset(&dv2[16079], 0, 17U * sizeof(real_T));
  dv2[16096] = -1.0;
  memset(&dv2[16097], 0, 113U * sizeof(real_T));
  dv2[16210] = -1.0;
  memset(&dv2[16211], 0, 17U * sizeof(real_T));
  dv2[16228] = -1.0;
  memset(&dv2[16229], 0, 113U * sizeof(real_T));
  dv2[16342] = -1.0;
  memset(&dv2[16343], 0, 17U * sizeof(real_T));
  dv2[16360] = -1.0;
  memset(&dv2[16361], 0, 113U * sizeof(real_T));
  dv2[16474] = -1.0;
  memset(&dv2[16475], 0, 17U * sizeof(real_T));
  dv2[16492] = -1.0;
  memset(&dv2[16493], 0, 113U * sizeof(real_T));
  dv2[16606] = -1.0;
  memset(&dv2[16607], 0, 17U * sizeof(real_T));
  dv2[16624] = -1.0;
  memset(&dv2[16625], 0, 113U * sizeof(real_T));
  dv2[16738] = -1.0;
  memset(&dv2[16739], 0, 17U * sizeof(real_T));
  dv2[16756] = -1.0;
  memset(&dv2[16757], 0, 113U * sizeof(real_T));
  dv2[16870] = -1.0;
  memset(&dv2[16871], 0, 17U * sizeof(real_T));
  dv2[16888] = -1.0;
  memset(&dv2[16889], 0, 113U * sizeof(real_T));
  dv2[17002] = -1.0;
  memset(&dv2[17003], 0, 17U * sizeof(real_T));
  dv2[17020] = -1.0;
  memset(&dv2[17021], 0, 113U * sizeof(real_T));
  dv2[17134] = -1.0;
  memset(&dv2[17135], 0, 17U * sizeof(real_T));
  dv2[17152] = -1.0;
  memset(&dv2[17153], 0, 113U * sizeof(real_T));
  dv2[17266] = -1.0;
  memset(&dv2[17267], 0, 17U * sizeof(real_T));
  dv2[17284] = -1.0;
  memset(&dv2[17285], 0, 113U * sizeof(real_T));
  dv2[17398] = -1.0;
  memset(&dv2[17399], 0, 17U * sizeof(real_T));
  dv2[17416] = -1.0;
  memset(&dv2[17417], 0, 113U * sizeof(real_T));
  dv2[17530] = -1.0;
  memset(&dv2[17531], 0, 17U * sizeof(real_T));
  dv2[17548] = -1.0;
  memset(&dv2[17549], 0, 135U * sizeof(real_T));
  dv2[17684] = 1.0;
  memset(&dv2[17685], 0, 2353U * sizeof(real_T));
  dv2[20038] = -1.0;
  dv2[20039] = -1.0;
  memset(&dv2[20040], 0, 655U * sizeof(real_T));
  dv2[20695] = -1.0;
  dv2[20696] = -1.0;
  memset(&dv2[20697], 0, 1573U * sizeof(real_T));
  for (i2 = 0; i2 < 170; i2++) {
    memcpy(&Aiq[i2 * 131], &dv2[i2 * 131], 131U * sizeof(real_T));
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
  biq[126] = Cpx1 + in8[0];
  biq[127] = -Cpx1 + in8[0];
  biq[128] = Cpy1 + in9[0];
  biq[129] = -Cpy1 + in9[0];
  biq[130] = -in9[1];
}

/* End of code generation (IqFast_RightStart4V30.cpp) */
