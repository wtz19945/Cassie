/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart2V30.cpp
 *
 * Code generation for function 'IqFast_RightStart2V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step2.h"
#include "IqFast_RightStart2V30.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart2V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [23630], real_T biq[139])
{
  int32_T i2;
  real_T dv2[23630];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART2V30 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART2V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:09:08 */
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
  memset(&dv2[109], 0, 170U * sizeof(real_T));
  dv2[279] = -1.0;
  memset(&dv2[280], 0, 35U * sizeof(real_T));
  dv2[315] = 1.0;
  memset(&dv2[316], 0, 35U * sizeof(real_T));
  dv2[351] = -in11[2];
  memset(&dv2[352], 0, 35U * sizeof(real_T));
  dv2[387] = -in11[2];
  memset(&dv2[388], 0, 170U * sizeof(real_T));
  dv2[558] = -1.0;
  memset(&dv2[559], 0, 35U * sizeof(real_T));
  dv2[594] = 1.0;
  memset(&dv2[595], 0, 35U * sizeof(real_T));
  dv2[630] = -in11[2];
  memset(&dv2[631], 0, 35U * sizeof(real_T));
  dv2[666] = -in11[2];
  memset(&dv2[667], 0, 170U * sizeof(real_T));
  dv2[837] = -1.0;
  memset(&dv2[838], 0, 35U * sizeof(real_T));
  dv2[873] = 1.0;
  memset(&dv2[874], 0, 35U * sizeof(real_T));
  dv2[909] = -in11[2];
  memset(&dv2[910], 0, 35U * sizeof(real_T));
  dv2[945] = -in11[2];
  memset(&dv2[946], 0, 170U * sizeof(real_T));
  dv2[1116] = -1.0;
  memset(&dv2[1117], 0, 35U * sizeof(real_T));
  dv2[1152] = 1.0;
  memset(&dv2[1153], 0, 35U * sizeof(real_T));
  dv2[1188] = -in11[2];
  memset(&dv2[1189], 0, 35U * sizeof(real_T));
  dv2[1224] = -in11[2];
  memset(&dv2[1225], 0, 170U * sizeof(real_T));
  dv2[1395] = -1.0;
  memset(&dv2[1396], 0, 35U * sizeof(real_T));
  dv2[1431] = 1.0;
  memset(&dv2[1432], 0, 35U * sizeof(real_T));
  dv2[1467] = -in11[2];
  memset(&dv2[1468], 0, 35U * sizeof(real_T));
  dv2[1503] = -in11[2];
  memset(&dv2[1504], 0, 170U * sizeof(real_T));
  dv2[1674] = -1.0;
  memset(&dv2[1675], 0, 35U * sizeof(real_T));
  dv2[1710] = 1.0;
  memset(&dv2[1711], 0, 35U * sizeof(real_T));
  dv2[1746] = -in11[2];
  memset(&dv2[1747], 0, 35U * sizeof(real_T));
  dv2[1782] = -in11[2];
  memset(&dv2[1783], 0, 170U * sizeof(real_T));
  dv2[1953] = -1.0;
  memset(&dv2[1954], 0, 35U * sizeof(real_T));
  dv2[1989] = 1.0;
  memset(&dv2[1990], 0, 35U * sizeof(real_T));
  dv2[2025] = -in11[2];
  memset(&dv2[2026], 0, 35U * sizeof(real_T));
  dv2[2061] = -in11[2];
  memset(&dv2[2062], 0, 170U * sizeof(real_T));
  dv2[2232] = -1.0;
  memset(&dv2[2233], 0, 35U * sizeof(real_T));
  dv2[2268] = 1.0;
  memset(&dv2[2269], 0, 35U * sizeof(real_T));
  dv2[2304] = -in11[2];
  memset(&dv2[2305], 0, 35U * sizeof(real_T));
  dv2[2340] = -in11[2];
  memset(&dv2[2341], 0, 170U * sizeof(real_T));
  dv2[2511] = -1.0;
  memset(&dv2[2512], 0, 35U * sizeof(real_T));
  dv2[2547] = 1.0;
  memset(&dv2[2548], 0, 35U * sizeof(real_T));
  dv2[2583] = -in11[2];
  memset(&dv2[2584], 0, 35U * sizeof(real_T));
  dv2[2619] = -in11[2];
  memset(&dv2[2620], 0, 170U * sizeof(real_T));
  dv2[2790] = -1.0;
  memset(&dv2[2791], 0, 35U * sizeof(real_T));
  dv2[2826] = 1.0;
  memset(&dv2[2827], 0, 35U * sizeof(real_T));
  dv2[2862] = -in11[2];
  memset(&dv2[2863], 0, 35U * sizeof(real_T));
  dv2[2898] = -in11[2];
  memset(&dv2[2899], 0, 170U * sizeof(real_T));
  dv2[3069] = -1.0;
  memset(&dv2[3070], 0, 35U * sizeof(real_T));
  dv2[3105] = 1.0;
  memset(&dv2[3106], 0, 35U * sizeof(real_T));
  dv2[3141] = -in11[2];
  memset(&dv2[3142], 0, 35U * sizeof(real_T));
  dv2[3177] = -in11[2];
  memset(&dv2[3178], 0, 170U * sizeof(real_T));
  dv2[3348] = -1.0;
  memset(&dv2[3349], 0, 35U * sizeof(real_T));
  dv2[3384] = 1.0;
  memset(&dv2[3385], 0, 35U * sizeof(real_T));
  dv2[3420] = -in11[2];
  memset(&dv2[3421], 0, 35U * sizeof(real_T));
  dv2[3456] = -in11[2];
  memset(&dv2[3457], 0, 170U * sizeof(real_T));
  dv2[3627] = -1.0;
  memset(&dv2[3628], 0, 35U * sizeof(real_T));
  dv2[3663] = 1.0;
  memset(&dv2[3664], 0, 35U * sizeof(real_T));
  dv2[3699] = -in11[2];
  memset(&dv2[3700], 0, 35U * sizeof(real_T));
  dv2[3735] = -in11[2];
  memset(&dv2[3736], 0, 170U * sizeof(real_T));
  dv2[3906] = -1.0;
  memset(&dv2[3907], 0, 35U * sizeof(real_T));
  dv2[3942] = 1.0;
  memset(&dv2[3943], 0, 35U * sizeof(real_T));
  dv2[3978] = -in11[2];
  memset(&dv2[3979], 0, 35U * sizeof(real_T));
  dv2[4014] = -in11[2];
  memset(&dv2[4015], 0, 170U * sizeof(real_T));
  dv2[4185] = -1.0;
  memset(&dv2[4186], 0, 35U * sizeof(real_T));
  dv2[4221] = 1.0;
  memset(&dv2[4222], 0, 35U * sizeof(real_T));
  dv2[4257] = -in11[2];
  memset(&dv2[4258], 0, 35U * sizeof(real_T));
  dv2[4293] = -in11[2];
  memset(&dv2[4294], 0, 170U * sizeof(real_T));
  dv2[4464] = -1.0;
  memset(&dv2[4465], 0, 35U * sizeof(real_T));
  dv2[4500] = 1.0;
  memset(&dv2[4501], 0, 35U * sizeof(real_T));
  dv2[4536] = -in11[2];
  memset(&dv2[4537], 0, 35U * sizeof(real_T));
  dv2[4572] = -in11[2];
  memset(&dv2[4573], 0, 170U * sizeof(real_T));
  dv2[4743] = -1.0;
  memset(&dv2[4744], 0, 35U * sizeof(real_T));
  dv2[4779] = 1.0;
  memset(&dv2[4780], 0, 35U * sizeof(real_T));
  dv2[4815] = -in11[2];
  memset(&dv2[4816], 0, 35U * sizeof(real_T));
  dv2[4851] = -in11[2];
  memset(&dv2[4852], 0, 170U * sizeof(real_T));
  dv2[5022] = -1.0;
  memset(&dv2[5023], 0, 35U * sizeof(real_T));
  dv2[5058] = 1.0;
  memset(&dv2[5059], 0, 17U * sizeof(real_T));
  dv2[5076] = -in11[3];
  memset(&dv2[5077], 0, 35U * sizeof(real_T));
  dv2[5112] = -in11[3];
  memset(&dv2[5113], 0, 188U * sizeof(real_T));
  dv2[5301] = -1.0;
  memset(&dv2[5302], 0, 35U * sizeof(real_T));
  dv2[5337] = 1.0;
  memset(&dv2[5338], 0, 17U * sizeof(real_T));
  dv2[5355] = -in11[3];
  memset(&dv2[5356], 0, 35U * sizeof(real_T));
  dv2[5391] = -in11[3];
  memset(&dv2[5392], 0, 188U * sizeof(real_T));
  dv2[5580] = -1.0;
  memset(&dv2[5581], 0, 35U * sizeof(real_T));
  dv2[5616] = 1.0;
  memset(&dv2[5617], 0, 17U * sizeof(real_T));
  dv2[5634] = -in11[3];
  memset(&dv2[5635], 0, 35U * sizeof(real_T));
  dv2[5670] = -in11[3];
  memset(&dv2[5671], 0, 188U * sizeof(real_T));
  dv2[5859] = -1.0;
  memset(&dv2[5860], 0, 35U * sizeof(real_T));
  dv2[5895] = 1.0;
  memset(&dv2[5896], 0, 17U * sizeof(real_T));
  dv2[5913] = -in11[3];
  memset(&dv2[5914], 0, 35U * sizeof(real_T));
  dv2[5949] = -in11[3];
  memset(&dv2[5950], 0, 188U * sizeof(real_T));
  dv2[6138] = -1.0;
  memset(&dv2[6139], 0, 35U * sizeof(real_T));
  dv2[6174] = 1.0;
  memset(&dv2[6175], 0, 17U * sizeof(real_T));
  dv2[6192] = -in11[3];
  memset(&dv2[6193], 0, 35U * sizeof(real_T));
  dv2[6228] = -in11[3];
  memset(&dv2[6229], 0, 188U * sizeof(real_T));
  dv2[6417] = -1.0;
  memset(&dv2[6418], 0, 35U * sizeof(real_T));
  dv2[6453] = 1.0;
  memset(&dv2[6454], 0, 17U * sizeof(real_T));
  dv2[6471] = -in11[3];
  memset(&dv2[6472], 0, 35U * sizeof(real_T));
  dv2[6507] = -in11[3];
  memset(&dv2[6508], 0, 188U * sizeof(real_T));
  dv2[6696] = -1.0;
  memset(&dv2[6697], 0, 35U * sizeof(real_T));
  dv2[6732] = 1.0;
  memset(&dv2[6733], 0, 17U * sizeof(real_T));
  dv2[6750] = -in11[3];
  memset(&dv2[6751], 0, 35U * sizeof(real_T));
  dv2[6786] = -in11[3];
  memset(&dv2[6787], 0, 188U * sizeof(real_T));
  dv2[6975] = -1.0;
  memset(&dv2[6976], 0, 35U * sizeof(real_T));
  dv2[7011] = 1.0;
  memset(&dv2[7012], 0, 17U * sizeof(real_T));
  dv2[7029] = -in11[3];
  memset(&dv2[7030], 0, 35U * sizeof(real_T));
  dv2[7065] = -in11[3];
  memset(&dv2[7066], 0, 188U * sizeof(real_T));
  dv2[7254] = -1.0;
  memset(&dv2[7255], 0, 35U * sizeof(real_T));
  dv2[7290] = 1.0;
  memset(&dv2[7291], 0, 17U * sizeof(real_T));
  dv2[7308] = -in11[3];
  memset(&dv2[7309], 0, 35U * sizeof(real_T));
  dv2[7344] = -in11[3];
  memset(&dv2[7345], 0, 188U * sizeof(real_T));
  dv2[7533] = -1.0;
  memset(&dv2[7534], 0, 35U * sizeof(real_T));
  dv2[7569] = 1.0;
  memset(&dv2[7570], 0, 17U * sizeof(real_T));
  dv2[7587] = -in11[3];
  memset(&dv2[7588], 0, 35U * sizeof(real_T));
  dv2[7623] = -in11[3];
  memset(&dv2[7624], 0, 188U * sizeof(real_T));
  dv2[7812] = -1.0;
  memset(&dv2[7813], 0, 35U * sizeof(real_T));
  dv2[7848] = 1.0;
  memset(&dv2[7849], 0, 17U * sizeof(real_T));
  dv2[7866] = -in11[3];
  memset(&dv2[7867], 0, 35U * sizeof(real_T));
  dv2[7902] = -in11[3];
  memset(&dv2[7903], 0, 188U * sizeof(real_T));
  dv2[8091] = -1.0;
  memset(&dv2[8092], 0, 35U * sizeof(real_T));
  dv2[8127] = 1.0;
  memset(&dv2[8128], 0, 17U * sizeof(real_T));
  dv2[8145] = -in11[3];
  memset(&dv2[8146], 0, 35U * sizeof(real_T));
  dv2[8181] = -in11[3];
  memset(&dv2[8182], 0, 188U * sizeof(real_T));
  dv2[8370] = -1.0;
  memset(&dv2[8371], 0, 35U * sizeof(real_T));
  dv2[8406] = 1.0;
  memset(&dv2[8407], 0, 17U * sizeof(real_T));
  dv2[8424] = -in11[3];
  memset(&dv2[8425], 0, 35U * sizeof(real_T));
  dv2[8460] = -in11[3];
  memset(&dv2[8461], 0, 188U * sizeof(real_T));
  dv2[8649] = -1.0;
  memset(&dv2[8650], 0, 35U * sizeof(real_T));
  dv2[8685] = 1.0;
  memset(&dv2[8686], 0, 17U * sizeof(real_T));
  dv2[8703] = -in11[3];
  memset(&dv2[8704], 0, 35U * sizeof(real_T));
  dv2[8739] = -in11[3];
  memset(&dv2[8740], 0, 188U * sizeof(real_T));
  dv2[8928] = -1.0;
  memset(&dv2[8929], 0, 35U * sizeof(real_T));
  dv2[8964] = 1.0;
  memset(&dv2[8965], 0, 17U * sizeof(real_T));
  dv2[8982] = -in11[3];
  memset(&dv2[8983], 0, 35U * sizeof(real_T));
  dv2[9018] = -in11[3];
  memset(&dv2[9019], 0, 188U * sizeof(real_T));
  dv2[9207] = -1.0;
  memset(&dv2[9208], 0, 35U * sizeof(real_T));
  dv2[9243] = 1.0;
  memset(&dv2[9244], 0, 17U * sizeof(real_T));
  dv2[9261] = -in11[3];
  memset(&dv2[9262], 0, 35U * sizeof(real_T));
  dv2[9297] = -in11[3];
  memset(&dv2[9298], 0, 188U * sizeof(real_T));
  dv2[9486] = -1.0;
  memset(&dv2[9487], 0, 35U * sizeof(real_T));
  dv2[9522] = 1.0;
  memset(&dv2[9523], 0, 17U * sizeof(real_T));
  dv2[9540] = -in11[3];
  memset(&dv2[9541], 0, 35U * sizeof(real_T));
  dv2[9576] = -in11[3];
  memset(&dv2[9577], 0, 188U * sizeof(real_T));
  dv2[9765] = -1.0;
  memset(&dv2[9766], 0, 35U * sizeof(real_T));
  dv2[9801] = 1.0;
  memset(&dv2[9802], 0, 17U * sizeof(real_T));
  dv2[9819] = -in11[3];
  memset(&dv2[9820], 0, 35U * sizeof(real_T));
  dv2[9855] = -in11[3];
  memset(&dv2[9856], 0, 152U * sizeof(real_T));
  dv2[10008] = 1.0;
  memset(&dv2[10009], 0, 35U * sizeof(real_T));
  dv2[10044] = -1.0;
  memset(&dv2[10045], 0, 89U * sizeof(real_T));
  dv2[10134] = 1.0;
  dv2[10135] = 0.0;
  dv2[10136] = 0.0;
  dv2[10137] = -1.0;
  memset(&dv2[10138], 0, 10U * sizeof(real_T));
  dv2[10148] = 1.0;
  memset(&dv2[10149], 0, 35U * sizeof(real_T));
  dv2[10184] = -1.0;
  memset(&dv2[10185], 0, 89U * sizeof(real_T));
  dv2[10274] = 1.0;
  dv2[10275] = 0.0;
  dv2[10276] = 0.0;
  dv2[10277] = -1.0;
  memset(&dv2[10278], 0, 10U * sizeof(real_T));
  dv2[10288] = 1.0;
  memset(&dv2[10289], 0, 35U * sizeof(real_T));
  dv2[10324] = -1.0;
  memset(&dv2[10325], 0, 89U * sizeof(real_T));
  dv2[10414] = 1.0;
  dv2[10415] = 0.0;
  dv2[10416] = 0.0;
  dv2[10417] = -1.0;
  memset(&dv2[10418], 0, 10U * sizeof(real_T));
  dv2[10428] = 1.0;
  memset(&dv2[10429], 0, 35U * sizeof(real_T));
  dv2[10464] = -1.0;
  memset(&dv2[10465], 0, 103U * sizeof(real_T));
  dv2[10568] = 1.0;
  memset(&dv2[10569], 0, 35U * sizeof(real_T));
  dv2[10604] = -1.0;
  memset(&dv2[10605], 0, 103U * sizeof(real_T));
  dv2[10708] = 1.0;
  memset(&dv2[10709], 0, 35U * sizeof(real_T));
  dv2[10744] = -1.0;
  memset(&dv2[10745], 0, 103U * sizeof(real_T));
  dv2[10848] = 1.0;
  memset(&dv2[10849], 0, 35U * sizeof(real_T));
  dv2[10884] = -1.0;
  memset(&dv2[10885], 0, 103U * sizeof(real_T));
  dv2[10988] = 1.0;
  memset(&dv2[10989], 0, 35U * sizeof(real_T));
  dv2[11024] = -1.0;
  memset(&dv2[11025], 0, 103U * sizeof(real_T));
  dv2[11128] = 1.0;
  memset(&dv2[11129], 0, 35U * sizeof(real_T));
  dv2[11164] = -1.0;
  memset(&dv2[11165], 0, 103U * sizeof(real_T));
  dv2[11268] = 1.0;
  memset(&dv2[11269], 0, 35U * sizeof(real_T));
  dv2[11304] = -1.0;
  memset(&dv2[11305], 0, 103U * sizeof(real_T));
  dv2[11408] = 1.0;
  memset(&dv2[11409], 0, 35U * sizeof(real_T));
  dv2[11444] = -1.0;
  memset(&dv2[11445], 0, 103U * sizeof(real_T));
  dv2[11548] = 1.0;
  memset(&dv2[11549], 0, 35U * sizeof(real_T));
  dv2[11584] = -1.0;
  memset(&dv2[11585], 0, 103U * sizeof(real_T));
  dv2[11688] = 1.0;
  memset(&dv2[11689], 0, 35U * sizeof(real_T));
  dv2[11724] = -1.0;
  memset(&dv2[11725], 0, 103U * sizeof(real_T));
  dv2[11828] = 1.0;
  memset(&dv2[11829], 0, 35U * sizeof(real_T));
  dv2[11864] = -1.0;
  memset(&dv2[11865], 0, 103U * sizeof(real_T));
  dv2[11968] = 1.0;
  memset(&dv2[11969], 0, 35U * sizeof(real_T));
  dv2[12004] = -1.0;
  memset(&dv2[12005], 0, 103U * sizeof(real_T));
  dv2[12108] = 1.0;
  memset(&dv2[12109], 0, 35U * sizeof(real_T));
  dv2[12144] = -1.0;
  memset(&dv2[12145], 0, 103U * sizeof(real_T));
  dv2[12248] = 1.0;
  memset(&dv2[12249], 0, 35U * sizeof(real_T));
  dv2[12284] = -1.0;
  memset(&dv2[12285], 0, 103U * sizeof(real_T));
  dv2[12388] = 1.0;
  memset(&dv2[12389], 0, 35U * sizeof(real_T));
  dv2[12424] = -1.0;
  memset(&dv2[12425], 0, 103U * sizeof(real_T));
  dv2[12528] = 1.0;
  memset(&dv2[12529], 0, 35U * sizeof(real_T));
  dv2[12564] = -1.0;
  memset(&dv2[12565], 0, 77U * sizeof(real_T));
  dv2[12642] = 1.0;
  dv2[12643] = 0.0;
  dv2[12644] = 0.0;
  dv2[12645] = -1.0;
  memset(&dv2[12646], 0, 22U * sizeof(real_T));
  dv2[12668] = 1.0;
  memset(&dv2[12669], 0, 35U * sizeof(real_T));
  dv2[12704] = -1.0;
  memset(&dv2[12705], 0, 77U * sizeof(real_T));
  dv2[12782] = 1.0;
  dv2[12783] = 0.0;
  dv2[12784] = 0.0;
  dv2[12785] = -1.0;
  memset(&dv2[12786], 0, 22U * sizeof(real_T));
  dv2[12808] = 1.0;
  memset(&dv2[12809], 0, 35U * sizeof(real_T));
  dv2[12844] = -1.0;
  memset(&dv2[12845], 0, 77U * sizeof(real_T));
  dv2[12922] = 1.0;
  dv2[12923] = 0.0;
  dv2[12924] = 0.0;
  dv2[12925] = -1.0;
  memset(&dv2[12926], 0, 22U * sizeof(real_T));
  dv2[12948] = 1.0;
  memset(&dv2[12949], 0, 35U * sizeof(real_T));
  dv2[12984] = -1.0;
  memset(&dv2[12985], 0, 103U * sizeof(real_T));
  dv2[13088] = 1.0;
  memset(&dv2[13089], 0, 35U * sizeof(real_T));
  dv2[13124] = -1.0;
  memset(&dv2[13125], 0, 103U * sizeof(real_T));
  dv2[13228] = 1.0;
  memset(&dv2[13229], 0, 35U * sizeof(real_T));
  dv2[13264] = -1.0;
  memset(&dv2[13265], 0, 103U * sizeof(real_T));
  dv2[13368] = 1.0;
  memset(&dv2[13369], 0, 35U * sizeof(real_T));
  dv2[13404] = -1.0;
  memset(&dv2[13405], 0, 103U * sizeof(real_T));
  dv2[13508] = 1.0;
  memset(&dv2[13509], 0, 35U * sizeof(real_T));
  dv2[13544] = -1.0;
  memset(&dv2[13545], 0, 103U * sizeof(real_T));
  dv2[13648] = 1.0;
  memset(&dv2[13649], 0, 35U * sizeof(real_T));
  dv2[13684] = -1.0;
  memset(&dv2[13685], 0, 103U * sizeof(real_T));
  dv2[13788] = 1.0;
  memset(&dv2[13789], 0, 35U * sizeof(real_T));
  dv2[13824] = -1.0;
  memset(&dv2[13825], 0, 103U * sizeof(real_T));
  dv2[13928] = 1.0;
  memset(&dv2[13929], 0, 35U * sizeof(real_T));
  dv2[13964] = -1.0;
  memset(&dv2[13965], 0, 103U * sizeof(real_T));
  dv2[14068] = 1.0;
  memset(&dv2[14069], 0, 35U * sizeof(real_T));
  dv2[14104] = -1.0;
  memset(&dv2[14105], 0, 103U * sizeof(real_T));
  dv2[14208] = 1.0;
  memset(&dv2[14209], 0, 35U * sizeof(real_T));
  dv2[14244] = -1.0;
  memset(&dv2[14245], 0, 103U * sizeof(real_T));
  dv2[14348] = 1.0;
  memset(&dv2[14349], 0, 35U * sizeof(real_T));
  dv2[14384] = -1.0;
  memset(&dv2[14385], 0, 103U * sizeof(real_T));
  dv2[14488] = 1.0;
  memset(&dv2[14489], 0, 35U * sizeof(real_T));
  dv2[14524] = -1.0;
  memset(&dv2[14525], 0, 103U * sizeof(real_T));
  dv2[14628] = 1.0;
  memset(&dv2[14629], 0, 35U * sizeof(real_T));
  dv2[14664] = -1.0;
  memset(&dv2[14665], 0, 103U * sizeof(real_T));
  dv2[14768] = 1.0;
  memset(&dv2[14769], 0, 35U * sizeof(real_T));
  dv2[14804] = -1.0;
  memset(&dv2[14805], 0, 103U * sizeof(real_T));
  dv2[14908] = 1.0;
  memset(&dv2[14909], 0, 35U * sizeof(real_T));
  dv2[14944] = -1.0;
  memset(&dv2[14945], 0, 761U * sizeof(real_T));
  dv2[15706] = -1.0;
  memset(&dv2[15707], 0, 507U * sizeof(real_T));
  dv2[16214] = -1.0;
  memset(&dv2[16215], 0, 17U * sizeof(real_T));
  dv2[16232] = -1.0;
  memset(&dv2[16233], 0, 121U * sizeof(real_T));
  dv2[16354] = -1.0;
  memset(&dv2[16355], 0, 17U * sizeof(real_T));
  dv2[16372] = -1.0;
  memset(&dv2[16373], 0, 121U * sizeof(real_T));
  dv2[16494] = -1.0;
  memset(&dv2[16495], 0, 17U * sizeof(real_T));
  dv2[16512] = -1.0;
  memset(&dv2[16513], 0, 121U * sizeof(real_T));
  dv2[16634] = -1.0;
  memset(&dv2[16635], 0, 17U * sizeof(real_T));
  dv2[16652] = -1.0;
  memset(&dv2[16653], 0, 121U * sizeof(real_T));
  dv2[16774] = -1.0;
  memset(&dv2[16775], 0, 17U * sizeof(real_T));
  dv2[16792] = -1.0;
  memset(&dv2[16793], 0, 121U * sizeof(real_T));
  dv2[16914] = -1.0;
  memset(&dv2[16915], 0, 17U * sizeof(real_T));
  dv2[16932] = -1.0;
  memset(&dv2[16933], 0, 121U * sizeof(real_T));
  dv2[17054] = -1.0;
  memset(&dv2[17055], 0, 17U * sizeof(real_T));
  dv2[17072] = -1.0;
  memset(&dv2[17073], 0, 121U * sizeof(real_T));
  dv2[17194] = -1.0;
  memset(&dv2[17195], 0, 17U * sizeof(real_T));
  dv2[17212] = -1.0;
  memset(&dv2[17213], 0, 121U * sizeof(real_T));
  dv2[17334] = -1.0;
  memset(&dv2[17335], 0, 17U * sizeof(real_T));
  dv2[17352] = -1.0;
  memset(&dv2[17353], 0, 121U * sizeof(real_T));
  dv2[17474] = -1.0;
  memset(&dv2[17475], 0, 17U * sizeof(real_T));
  dv2[17492] = -1.0;
  memset(&dv2[17493], 0, 121U * sizeof(real_T));
  dv2[17614] = -1.0;
  memset(&dv2[17615], 0, 17U * sizeof(real_T));
  dv2[17632] = -1.0;
  memset(&dv2[17633], 0, 121U * sizeof(real_T));
  dv2[17754] = -1.0;
  memset(&dv2[17755], 0, 17U * sizeof(real_T));
  dv2[17772] = -1.0;
  memset(&dv2[17773], 0, 121U * sizeof(real_T));
  dv2[17894] = -1.0;
  memset(&dv2[17895], 0, 17U * sizeof(real_T));
  dv2[17912] = -1.0;
  memset(&dv2[17913], 0, 121U * sizeof(real_T));
  dv2[18034] = -1.0;
  memset(&dv2[18035], 0, 17U * sizeof(real_T));
  dv2[18052] = -1.0;
  memset(&dv2[18053], 0, 121U * sizeof(real_T));
  dv2[18174] = -1.0;
  memset(&dv2[18175], 0, 17U * sizeof(real_T));
  dv2[18192] = -1.0;
  memset(&dv2[18193], 0, 121U * sizeof(real_T));
  dv2[18314] = -1.0;
  memset(&dv2[18315], 0, 17U * sizeof(real_T));
  dv2[18332] = -1.0;
  memset(&dv2[18333], 0, 121U * sizeof(real_T));
  dv2[18454] = -1.0;
  memset(&dv2[18455], 0, 17U * sizeof(real_T));
  dv2[18472] = -1.0;
  memset(&dv2[18473], 0, 121U * sizeof(real_T));
  dv2[18594] = -1.0;
  memset(&dv2[18595], 0, 17U * sizeof(real_T));
  dv2[18612] = -1.0;
  memset(&dv2[18613], 0, 151U * sizeof(real_T));
  dv2[18764] = 1.0;
  memset(&dv2[18765], 0, 2489U * sizeof(real_T));
  dv2[21254] = -1.0;
  dv2[21255] = 0.0;
  dv2[21256] = 0.0;
  dv2[21257] = -1.0;
  memset(&dv2[21258], 0, 136U * sizeof(real_T));
  dv2[21394] = -1.0;
  dv2[21395] = 0.0;
  dv2[21396] = 0.0;
  dv2[21397] = -1.0;
  memset(&dv2[21398], 0, 136U * sizeof(real_T));
  dv2[21534] = -1.0;
  dv2[21535] = 0.0;
  dv2[21536] = 0.0;
  dv2[21537] = -1.0;
  memset(&dv2[21538], 0, 417U * sizeof(real_T));
  dv2[21955] = -1.0;
  dv2[21956] = 0.0;
  dv2[21957] = 0.0;
  dv2[21958] = -1.0;
  memset(&dv2[21959], 0, 136U * sizeof(real_T));
  dv2[22095] = -1.0;
  dv2[22096] = 0.0;
  dv2[22097] = 0.0;
  dv2[22098] = -1.0;
  memset(&dv2[22099], 0, 136U * sizeof(real_T));
  dv2[22235] = -1.0;
  dv2[22236] = 0.0;
  dv2[22237] = 0.0;
  dv2[22238] = -1.0;
  memset(&dv2[22239], 0, 1391U * sizeof(real_T));
  for (i2 = 0; i2 < 170; i2++) {
    memcpy(&Aiq[i2 * 139], &dv2[i2 * 139], 139U * sizeof(real_T));
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
  biq[129] = t9;
  biq[130] = t9;
  biq[131] = t9;
  biq[132] = t10;
  biq[133] = t10;
  biq[134] = t10;
  biq[135] = t11;
  biq[136] = t11;
  biq[137] = t11;
  biq[138] = -in9[1];
}

/* End of code generation (IqFast_RightStart2V30.cpp) */
