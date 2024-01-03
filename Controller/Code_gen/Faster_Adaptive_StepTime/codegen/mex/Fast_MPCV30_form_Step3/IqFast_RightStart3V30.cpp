/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart3V30.cpp
 *
 * Code generation for function 'IqFast_RightStart3V30'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step3.h"
#include "IqFast_RightStart3V30.h"

/* Variable Definitions */
static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V30",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V30.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart3V30(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [22950], real_T biq[135])
{
  int32_T i2;
  real_T dv2[22950];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART3V30 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART3V30(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     22-Aug-2023 19:12:31 */
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
  memset(&dv2[109], 0, 162U * sizeof(real_T));
  dv2[271] = -1.0;
  memset(&dv2[272], 0, 35U * sizeof(real_T));
  dv2[307] = 1.0;
  memset(&dv2[308], 0, 35U * sizeof(real_T));
  dv2[343] = -in11[2];
  memset(&dv2[344], 0, 35U * sizeof(real_T));
  dv2[379] = -in11[2];
  memset(&dv2[380], 0, 162U * sizeof(real_T));
  dv2[542] = -1.0;
  memset(&dv2[543], 0, 35U * sizeof(real_T));
  dv2[578] = 1.0;
  memset(&dv2[579], 0, 35U * sizeof(real_T));
  dv2[614] = -in11[2];
  memset(&dv2[615], 0, 35U * sizeof(real_T));
  dv2[650] = -in11[2];
  memset(&dv2[651], 0, 162U * sizeof(real_T));
  dv2[813] = -1.0;
  memset(&dv2[814], 0, 35U * sizeof(real_T));
  dv2[849] = 1.0;
  memset(&dv2[850], 0, 35U * sizeof(real_T));
  dv2[885] = -in11[2];
  memset(&dv2[886], 0, 35U * sizeof(real_T));
  dv2[921] = -in11[2];
  memset(&dv2[922], 0, 162U * sizeof(real_T));
  dv2[1084] = -1.0;
  memset(&dv2[1085], 0, 35U * sizeof(real_T));
  dv2[1120] = 1.0;
  memset(&dv2[1121], 0, 35U * sizeof(real_T));
  dv2[1156] = -in11[2];
  memset(&dv2[1157], 0, 35U * sizeof(real_T));
  dv2[1192] = -in11[2];
  memset(&dv2[1193], 0, 162U * sizeof(real_T));
  dv2[1355] = -1.0;
  memset(&dv2[1356], 0, 35U * sizeof(real_T));
  dv2[1391] = 1.0;
  memset(&dv2[1392], 0, 35U * sizeof(real_T));
  dv2[1427] = -in11[2];
  memset(&dv2[1428], 0, 35U * sizeof(real_T));
  dv2[1463] = -in11[2];
  memset(&dv2[1464], 0, 162U * sizeof(real_T));
  dv2[1626] = -1.0;
  memset(&dv2[1627], 0, 35U * sizeof(real_T));
  dv2[1662] = 1.0;
  memset(&dv2[1663], 0, 35U * sizeof(real_T));
  dv2[1698] = -in11[2];
  memset(&dv2[1699], 0, 35U * sizeof(real_T));
  dv2[1734] = -in11[2];
  memset(&dv2[1735], 0, 162U * sizeof(real_T));
  dv2[1897] = -1.0;
  memset(&dv2[1898], 0, 35U * sizeof(real_T));
  dv2[1933] = 1.0;
  memset(&dv2[1934], 0, 35U * sizeof(real_T));
  dv2[1969] = -in11[2];
  memset(&dv2[1970], 0, 35U * sizeof(real_T));
  dv2[2005] = -in11[2];
  memset(&dv2[2006], 0, 162U * sizeof(real_T));
  dv2[2168] = -1.0;
  memset(&dv2[2169], 0, 35U * sizeof(real_T));
  dv2[2204] = 1.0;
  memset(&dv2[2205], 0, 35U * sizeof(real_T));
  dv2[2240] = -in11[2];
  memset(&dv2[2241], 0, 35U * sizeof(real_T));
  dv2[2276] = -in11[2];
  memset(&dv2[2277], 0, 162U * sizeof(real_T));
  dv2[2439] = -1.0;
  memset(&dv2[2440], 0, 35U * sizeof(real_T));
  dv2[2475] = 1.0;
  memset(&dv2[2476], 0, 35U * sizeof(real_T));
  dv2[2511] = -in11[2];
  memset(&dv2[2512], 0, 35U * sizeof(real_T));
  dv2[2547] = -in11[2];
  memset(&dv2[2548], 0, 162U * sizeof(real_T));
  dv2[2710] = -1.0;
  memset(&dv2[2711], 0, 35U * sizeof(real_T));
  dv2[2746] = 1.0;
  memset(&dv2[2747], 0, 35U * sizeof(real_T));
  dv2[2782] = -in11[2];
  memset(&dv2[2783], 0, 35U * sizeof(real_T));
  dv2[2818] = -in11[2];
  memset(&dv2[2819], 0, 162U * sizeof(real_T));
  dv2[2981] = -1.0;
  memset(&dv2[2982], 0, 35U * sizeof(real_T));
  dv2[3017] = 1.0;
  memset(&dv2[3018], 0, 35U * sizeof(real_T));
  dv2[3053] = -in11[2];
  memset(&dv2[3054], 0, 35U * sizeof(real_T));
  dv2[3089] = -in11[2];
  memset(&dv2[3090], 0, 162U * sizeof(real_T));
  dv2[3252] = -1.0;
  memset(&dv2[3253], 0, 35U * sizeof(real_T));
  dv2[3288] = 1.0;
  memset(&dv2[3289], 0, 35U * sizeof(real_T));
  dv2[3324] = -in11[2];
  memset(&dv2[3325], 0, 35U * sizeof(real_T));
  dv2[3360] = -in11[2];
  memset(&dv2[3361], 0, 162U * sizeof(real_T));
  dv2[3523] = -1.0;
  memset(&dv2[3524], 0, 35U * sizeof(real_T));
  dv2[3559] = 1.0;
  memset(&dv2[3560], 0, 35U * sizeof(real_T));
  dv2[3595] = -in11[2];
  memset(&dv2[3596], 0, 35U * sizeof(real_T));
  dv2[3631] = -in11[2];
  memset(&dv2[3632], 0, 162U * sizeof(real_T));
  dv2[3794] = -1.0;
  memset(&dv2[3795], 0, 35U * sizeof(real_T));
  dv2[3830] = 1.0;
  memset(&dv2[3831], 0, 35U * sizeof(real_T));
  dv2[3866] = -in11[2];
  memset(&dv2[3867], 0, 35U * sizeof(real_T));
  dv2[3902] = -in11[2];
  memset(&dv2[3903], 0, 162U * sizeof(real_T));
  dv2[4065] = -1.0;
  memset(&dv2[4066], 0, 35U * sizeof(real_T));
  dv2[4101] = 1.0;
  memset(&dv2[4102], 0, 35U * sizeof(real_T));
  dv2[4137] = -in11[2];
  memset(&dv2[4138], 0, 35U * sizeof(real_T));
  dv2[4173] = -in11[2];
  memset(&dv2[4174], 0, 162U * sizeof(real_T));
  dv2[4336] = -1.0;
  memset(&dv2[4337], 0, 35U * sizeof(real_T));
  dv2[4372] = 1.0;
  memset(&dv2[4373], 0, 35U * sizeof(real_T));
  dv2[4408] = -in11[2];
  memset(&dv2[4409], 0, 35U * sizeof(real_T));
  dv2[4444] = -in11[2];
  memset(&dv2[4445], 0, 162U * sizeof(real_T));
  dv2[4607] = -1.0;
  memset(&dv2[4608], 0, 35U * sizeof(real_T));
  dv2[4643] = 1.0;
  memset(&dv2[4644], 0, 35U * sizeof(real_T));
  dv2[4679] = -in11[2];
  memset(&dv2[4680], 0, 35U * sizeof(real_T));
  dv2[4715] = -in11[2];
  memset(&dv2[4716], 0, 162U * sizeof(real_T));
  dv2[4878] = -1.0;
  memset(&dv2[4879], 0, 35U * sizeof(real_T));
  dv2[4914] = 1.0;
  memset(&dv2[4915], 0, 17U * sizeof(real_T));
  dv2[4932] = -in11[3];
  memset(&dv2[4933], 0, 35U * sizeof(real_T));
  dv2[4968] = -in11[3];
  memset(&dv2[4969], 0, 180U * sizeof(real_T));
  dv2[5149] = -1.0;
  memset(&dv2[5150], 0, 35U * sizeof(real_T));
  dv2[5185] = 1.0;
  memset(&dv2[5186], 0, 17U * sizeof(real_T));
  dv2[5203] = -in11[3];
  memset(&dv2[5204], 0, 35U * sizeof(real_T));
  dv2[5239] = -in11[3];
  memset(&dv2[5240], 0, 180U * sizeof(real_T));
  dv2[5420] = -1.0;
  memset(&dv2[5421], 0, 35U * sizeof(real_T));
  dv2[5456] = 1.0;
  memset(&dv2[5457], 0, 17U * sizeof(real_T));
  dv2[5474] = -in11[3];
  memset(&dv2[5475], 0, 35U * sizeof(real_T));
  dv2[5510] = -in11[3];
  memset(&dv2[5511], 0, 180U * sizeof(real_T));
  dv2[5691] = -1.0;
  memset(&dv2[5692], 0, 35U * sizeof(real_T));
  dv2[5727] = 1.0;
  memset(&dv2[5728], 0, 17U * sizeof(real_T));
  dv2[5745] = -in11[3];
  memset(&dv2[5746], 0, 35U * sizeof(real_T));
  dv2[5781] = -in11[3];
  memset(&dv2[5782], 0, 180U * sizeof(real_T));
  dv2[5962] = -1.0;
  memset(&dv2[5963], 0, 35U * sizeof(real_T));
  dv2[5998] = 1.0;
  memset(&dv2[5999], 0, 17U * sizeof(real_T));
  dv2[6016] = -in11[3];
  memset(&dv2[6017], 0, 35U * sizeof(real_T));
  dv2[6052] = -in11[3];
  memset(&dv2[6053], 0, 180U * sizeof(real_T));
  dv2[6233] = -1.0;
  memset(&dv2[6234], 0, 35U * sizeof(real_T));
  dv2[6269] = 1.0;
  memset(&dv2[6270], 0, 17U * sizeof(real_T));
  dv2[6287] = -in11[3];
  memset(&dv2[6288], 0, 35U * sizeof(real_T));
  dv2[6323] = -in11[3];
  memset(&dv2[6324], 0, 180U * sizeof(real_T));
  dv2[6504] = -1.0;
  memset(&dv2[6505], 0, 35U * sizeof(real_T));
  dv2[6540] = 1.0;
  memset(&dv2[6541], 0, 17U * sizeof(real_T));
  dv2[6558] = -in11[3];
  memset(&dv2[6559], 0, 35U * sizeof(real_T));
  dv2[6594] = -in11[3];
  memset(&dv2[6595], 0, 180U * sizeof(real_T));
  dv2[6775] = -1.0;
  memset(&dv2[6776], 0, 35U * sizeof(real_T));
  dv2[6811] = 1.0;
  memset(&dv2[6812], 0, 17U * sizeof(real_T));
  dv2[6829] = -in11[3];
  memset(&dv2[6830], 0, 35U * sizeof(real_T));
  dv2[6865] = -in11[3];
  memset(&dv2[6866], 0, 180U * sizeof(real_T));
  dv2[7046] = -1.0;
  memset(&dv2[7047], 0, 35U * sizeof(real_T));
  dv2[7082] = 1.0;
  memset(&dv2[7083], 0, 17U * sizeof(real_T));
  dv2[7100] = -in11[3];
  memset(&dv2[7101], 0, 35U * sizeof(real_T));
  dv2[7136] = -in11[3];
  memset(&dv2[7137], 0, 180U * sizeof(real_T));
  dv2[7317] = -1.0;
  memset(&dv2[7318], 0, 35U * sizeof(real_T));
  dv2[7353] = 1.0;
  memset(&dv2[7354], 0, 17U * sizeof(real_T));
  dv2[7371] = -in11[3];
  memset(&dv2[7372], 0, 35U * sizeof(real_T));
  dv2[7407] = -in11[3];
  memset(&dv2[7408], 0, 180U * sizeof(real_T));
  dv2[7588] = -1.0;
  memset(&dv2[7589], 0, 35U * sizeof(real_T));
  dv2[7624] = 1.0;
  memset(&dv2[7625], 0, 17U * sizeof(real_T));
  dv2[7642] = -in11[3];
  memset(&dv2[7643], 0, 35U * sizeof(real_T));
  dv2[7678] = -in11[3];
  memset(&dv2[7679], 0, 180U * sizeof(real_T));
  dv2[7859] = -1.0;
  memset(&dv2[7860], 0, 35U * sizeof(real_T));
  dv2[7895] = 1.0;
  memset(&dv2[7896], 0, 17U * sizeof(real_T));
  dv2[7913] = -in11[3];
  memset(&dv2[7914], 0, 35U * sizeof(real_T));
  dv2[7949] = -in11[3];
  memset(&dv2[7950], 0, 180U * sizeof(real_T));
  dv2[8130] = -1.0;
  memset(&dv2[8131], 0, 35U * sizeof(real_T));
  dv2[8166] = 1.0;
  memset(&dv2[8167], 0, 17U * sizeof(real_T));
  dv2[8184] = -in11[3];
  memset(&dv2[8185], 0, 35U * sizeof(real_T));
  dv2[8220] = -in11[3];
  memset(&dv2[8221], 0, 180U * sizeof(real_T));
  dv2[8401] = -1.0;
  memset(&dv2[8402], 0, 35U * sizeof(real_T));
  dv2[8437] = 1.0;
  memset(&dv2[8438], 0, 17U * sizeof(real_T));
  dv2[8455] = -in11[3];
  memset(&dv2[8456], 0, 35U * sizeof(real_T));
  dv2[8491] = -in11[3];
  memset(&dv2[8492], 0, 180U * sizeof(real_T));
  dv2[8672] = -1.0;
  memset(&dv2[8673], 0, 35U * sizeof(real_T));
  dv2[8708] = 1.0;
  memset(&dv2[8709], 0, 17U * sizeof(real_T));
  dv2[8726] = -in11[3];
  memset(&dv2[8727], 0, 35U * sizeof(real_T));
  dv2[8762] = -in11[3];
  memset(&dv2[8763], 0, 180U * sizeof(real_T));
  dv2[8943] = -1.0;
  memset(&dv2[8944], 0, 35U * sizeof(real_T));
  dv2[8979] = 1.0;
  memset(&dv2[8980], 0, 17U * sizeof(real_T));
  dv2[8997] = -in11[3];
  memset(&dv2[8998], 0, 35U * sizeof(real_T));
  dv2[9033] = -in11[3];
  memset(&dv2[9034], 0, 180U * sizeof(real_T));
  dv2[9214] = -1.0;
  memset(&dv2[9215], 0, 35U * sizeof(real_T));
  dv2[9250] = 1.0;
  memset(&dv2[9251], 0, 17U * sizeof(real_T));
  dv2[9268] = -in11[3];
  memset(&dv2[9269], 0, 35U * sizeof(real_T));
  dv2[9304] = -in11[3];
  memset(&dv2[9305], 0, 180U * sizeof(real_T));
  dv2[9485] = -1.0;
  memset(&dv2[9486], 0, 35U * sizeof(real_T));
  dv2[9521] = 1.0;
  memset(&dv2[9522], 0, 17U * sizeof(real_T));
  dv2[9539] = -in11[3];
  memset(&dv2[9540], 0, 35U * sizeof(real_T));
  dv2[9575] = -in11[3];
  memset(&dv2[9576], 0, 144U * sizeof(real_T));
  dv2[9720] = 1.0;
  memset(&dv2[9721], 0, 35U * sizeof(real_T));
  dv2[9756] = -1.0;
  memset(&dv2[9757], 0, 89U * sizeof(real_T));
  dv2[9846] = 1.0;
  dv2[9847] = 0.0;
  dv2[9848] = -1.0;
  dv2[9849] = 0.0;
  dv2[9850] = 0.0;
  dv2[9851] = 0.0;
  dv2[9852] = 0.0;
  dv2[9853] = 0.0;
  dv2[9854] = 0.0;
  dv2[9855] = 0.0;
  dv2[9856] = 1.0;
  memset(&dv2[9857], 0, 35U * sizeof(real_T));
  dv2[9892] = -1.0;
  memset(&dv2[9893], 0, 89U * sizeof(real_T));
  dv2[9982] = 1.0;
  dv2[9983] = 0.0;
  dv2[9984] = -1.0;
  dv2[9985] = 0.0;
  dv2[9986] = 0.0;
  dv2[9987] = 0.0;
  dv2[9988] = 0.0;
  dv2[9989] = 0.0;
  dv2[9990] = 0.0;
  dv2[9991] = 0.0;
  dv2[9992] = 1.0;
  memset(&dv2[9993], 0, 35U * sizeof(real_T));
  dv2[10028] = -1.0;
  memset(&dv2[10029], 0, 99U * sizeof(real_T));
  dv2[10128] = 1.0;
  memset(&dv2[10129], 0, 35U * sizeof(real_T));
  dv2[10164] = -1.0;
  memset(&dv2[10165], 0, 99U * sizeof(real_T));
  dv2[10264] = 1.0;
  memset(&dv2[10265], 0, 35U * sizeof(real_T));
  dv2[10300] = -1.0;
  memset(&dv2[10301], 0, 99U * sizeof(real_T));
  dv2[10400] = 1.0;
  memset(&dv2[10401], 0, 35U * sizeof(real_T));
  dv2[10436] = -1.0;
  memset(&dv2[10437], 0, 99U * sizeof(real_T));
  dv2[10536] = 1.0;
  memset(&dv2[10537], 0, 35U * sizeof(real_T));
  dv2[10572] = -1.0;
  memset(&dv2[10573], 0, 99U * sizeof(real_T));
  dv2[10672] = 1.0;
  memset(&dv2[10673], 0, 35U * sizeof(real_T));
  dv2[10708] = -1.0;
  memset(&dv2[10709], 0, 99U * sizeof(real_T));
  dv2[10808] = 1.0;
  memset(&dv2[10809], 0, 35U * sizeof(real_T));
  dv2[10844] = -1.0;
  memset(&dv2[10845], 0, 99U * sizeof(real_T));
  dv2[10944] = 1.0;
  memset(&dv2[10945], 0, 35U * sizeof(real_T));
  dv2[10980] = -1.0;
  memset(&dv2[10981], 0, 99U * sizeof(real_T));
  dv2[11080] = 1.0;
  memset(&dv2[11081], 0, 35U * sizeof(real_T));
  dv2[11116] = -1.0;
  memset(&dv2[11117], 0, 99U * sizeof(real_T));
  dv2[11216] = 1.0;
  memset(&dv2[11217], 0, 35U * sizeof(real_T));
  dv2[11252] = -1.0;
  memset(&dv2[11253], 0, 99U * sizeof(real_T));
  dv2[11352] = 1.0;
  memset(&dv2[11353], 0, 35U * sizeof(real_T));
  dv2[11388] = -1.0;
  memset(&dv2[11389], 0, 99U * sizeof(real_T));
  dv2[11488] = 1.0;
  memset(&dv2[11489], 0, 35U * sizeof(real_T));
  dv2[11524] = -1.0;
  memset(&dv2[11525], 0, 99U * sizeof(real_T));
  dv2[11624] = 1.0;
  memset(&dv2[11625], 0, 35U * sizeof(real_T));
  dv2[11660] = -1.0;
  memset(&dv2[11661], 0, 99U * sizeof(real_T));
  dv2[11760] = 1.0;
  memset(&dv2[11761], 0, 35U * sizeof(real_T));
  dv2[11796] = -1.0;
  memset(&dv2[11797], 0, 99U * sizeof(real_T));
  dv2[11896] = 1.0;
  memset(&dv2[11897], 0, 35U * sizeof(real_T));
  dv2[11932] = -1.0;
  memset(&dv2[11933], 0, 99U * sizeof(real_T));
  dv2[12032] = 1.0;
  memset(&dv2[12033], 0, 35U * sizeof(real_T));
  dv2[12068] = -1.0;
  memset(&dv2[12069], 0, 99U * sizeof(real_T));
  dv2[12168] = 1.0;
  memset(&dv2[12169], 0, 35U * sizeof(real_T));
  dv2[12204] = -1.0;
  memset(&dv2[12205], 0, 75U * sizeof(real_T));
  dv2[12280] = 1.0;
  dv2[12281] = 0.0;
  dv2[12282] = -1.0;
  memset(&dv2[12283], 0, 21U * sizeof(real_T));
  dv2[12304] = 1.0;
  memset(&dv2[12305], 0, 35U * sizeof(real_T));
  dv2[12340] = -1.0;
  memset(&dv2[12341], 0, 75U * sizeof(real_T));
  dv2[12416] = 1.0;
  dv2[12417] = 0.0;
  dv2[12418] = -1.0;
  memset(&dv2[12419], 0, 21U * sizeof(real_T));
  dv2[12440] = 1.0;
  memset(&dv2[12441], 0, 35U * sizeof(real_T));
  dv2[12476] = -1.0;
  memset(&dv2[12477], 0, 99U * sizeof(real_T));
  dv2[12576] = 1.0;
  memset(&dv2[12577], 0, 35U * sizeof(real_T));
  dv2[12612] = -1.0;
  memset(&dv2[12613], 0, 99U * sizeof(real_T));
  dv2[12712] = 1.0;
  memset(&dv2[12713], 0, 35U * sizeof(real_T));
  dv2[12748] = -1.0;
  memset(&dv2[12749], 0, 99U * sizeof(real_T));
  dv2[12848] = 1.0;
  memset(&dv2[12849], 0, 35U * sizeof(real_T));
  dv2[12884] = -1.0;
  memset(&dv2[12885], 0, 99U * sizeof(real_T));
  dv2[12984] = 1.0;
  memset(&dv2[12985], 0, 35U * sizeof(real_T));
  dv2[13020] = -1.0;
  memset(&dv2[13021], 0, 99U * sizeof(real_T));
  dv2[13120] = 1.0;
  memset(&dv2[13121], 0, 35U * sizeof(real_T));
  dv2[13156] = -1.0;
  memset(&dv2[13157], 0, 99U * sizeof(real_T));
  dv2[13256] = 1.0;
  memset(&dv2[13257], 0, 35U * sizeof(real_T));
  dv2[13292] = -1.0;
  memset(&dv2[13293], 0, 99U * sizeof(real_T));
  dv2[13392] = 1.0;
  memset(&dv2[13393], 0, 35U * sizeof(real_T));
  dv2[13428] = -1.0;
  memset(&dv2[13429], 0, 99U * sizeof(real_T));
  dv2[13528] = 1.0;
  memset(&dv2[13529], 0, 35U * sizeof(real_T));
  dv2[13564] = -1.0;
  memset(&dv2[13565], 0, 99U * sizeof(real_T));
  dv2[13664] = 1.0;
  memset(&dv2[13665], 0, 35U * sizeof(real_T));
  dv2[13700] = -1.0;
  memset(&dv2[13701], 0, 99U * sizeof(real_T));
  dv2[13800] = 1.0;
  memset(&dv2[13801], 0, 35U * sizeof(real_T));
  dv2[13836] = -1.0;
  memset(&dv2[13837], 0, 99U * sizeof(real_T));
  dv2[13936] = 1.0;
  memset(&dv2[13937], 0, 35U * sizeof(real_T));
  dv2[13972] = -1.0;
  memset(&dv2[13973], 0, 99U * sizeof(real_T));
  dv2[14072] = 1.0;
  memset(&dv2[14073], 0, 35U * sizeof(real_T));
  dv2[14108] = -1.0;
  memset(&dv2[14109], 0, 99U * sizeof(real_T));
  dv2[14208] = 1.0;
  memset(&dv2[14209], 0, 35U * sizeof(real_T));
  dv2[14244] = -1.0;
  memset(&dv2[14245], 0, 99U * sizeof(real_T));
  dv2[14344] = 1.0;
  memset(&dv2[14345], 0, 35U * sizeof(real_T));
  dv2[14380] = -1.0;
  memset(&dv2[14381], 0, 99U * sizeof(real_T));
  dv2[14480] = 1.0;
  memset(&dv2[14481], 0, 35U * sizeof(real_T));
  dv2[14516] = -1.0;
  memset(&dv2[14517], 0, 737U * sizeof(real_T));
  dv2[15254] = -1.0;
  memset(&dv2[15255], 0, 495U * sizeof(real_T));
  dv2[15750] = -1.0;
  memset(&dv2[15751], 0, 17U * sizeof(real_T));
  dv2[15768] = -1.0;
  memset(&dv2[15769], 0, 117U * sizeof(real_T));
  dv2[15886] = -1.0;
  memset(&dv2[15887], 0, 17U * sizeof(real_T));
  dv2[15904] = -1.0;
  memset(&dv2[15905], 0, 117U * sizeof(real_T));
  dv2[16022] = -1.0;
  memset(&dv2[16023], 0, 17U * sizeof(real_T));
  dv2[16040] = -1.0;
  memset(&dv2[16041], 0, 117U * sizeof(real_T));
  dv2[16158] = -1.0;
  memset(&dv2[16159], 0, 17U * sizeof(real_T));
  dv2[16176] = -1.0;
  memset(&dv2[16177], 0, 117U * sizeof(real_T));
  dv2[16294] = -1.0;
  memset(&dv2[16295], 0, 17U * sizeof(real_T));
  dv2[16312] = -1.0;
  memset(&dv2[16313], 0, 117U * sizeof(real_T));
  dv2[16430] = -1.0;
  memset(&dv2[16431], 0, 17U * sizeof(real_T));
  dv2[16448] = -1.0;
  memset(&dv2[16449], 0, 117U * sizeof(real_T));
  dv2[16566] = -1.0;
  memset(&dv2[16567], 0, 17U * sizeof(real_T));
  dv2[16584] = -1.0;
  memset(&dv2[16585], 0, 117U * sizeof(real_T));
  dv2[16702] = -1.0;
  memset(&dv2[16703], 0, 17U * sizeof(real_T));
  dv2[16720] = -1.0;
  memset(&dv2[16721], 0, 117U * sizeof(real_T));
  dv2[16838] = -1.0;
  memset(&dv2[16839], 0, 17U * sizeof(real_T));
  dv2[16856] = -1.0;
  memset(&dv2[16857], 0, 117U * sizeof(real_T));
  dv2[16974] = -1.0;
  memset(&dv2[16975], 0, 17U * sizeof(real_T));
  dv2[16992] = -1.0;
  memset(&dv2[16993], 0, 117U * sizeof(real_T));
  dv2[17110] = -1.0;
  memset(&dv2[17111], 0, 17U * sizeof(real_T));
  dv2[17128] = -1.0;
  memset(&dv2[17129], 0, 117U * sizeof(real_T));
  dv2[17246] = -1.0;
  memset(&dv2[17247], 0, 17U * sizeof(real_T));
  dv2[17264] = -1.0;
  memset(&dv2[17265], 0, 117U * sizeof(real_T));
  dv2[17382] = -1.0;
  memset(&dv2[17383], 0, 17U * sizeof(real_T));
  dv2[17400] = -1.0;
  memset(&dv2[17401], 0, 117U * sizeof(real_T));
  dv2[17518] = -1.0;
  memset(&dv2[17519], 0, 17U * sizeof(real_T));
  dv2[17536] = -1.0;
  memset(&dv2[17537], 0, 117U * sizeof(real_T));
  dv2[17654] = -1.0;
  memset(&dv2[17655], 0, 17U * sizeof(real_T));
  dv2[17672] = -1.0;
  memset(&dv2[17673], 0, 117U * sizeof(real_T));
  dv2[17790] = -1.0;
  memset(&dv2[17791], 0, 17U * sizeof(real_T));
  dv2[17808] = -1.0;
  memset(&dv2[17809], 0, 117U * sizeof(real_T));
  dv2[17926] = -1.0;
  memset(&dv2[17927], 0, 17U * sizeof(real_T));
  dv2[17944] = -1.0;
  memset(&dv2[17945], 0, 117U * sizeof(real_T));
  dv2[18062] = -1.0;
  memset(&dv2[18063], 0, 17U * sizeof(real_T));
  dv2[18080] = -1.0;
  memset(&dv2[18081], 0, 143U * sizeof(real_T));
  dv2[18224] = 1.0;
  memset(&dv2[18225], 0, 2421U * sizeof(real_T));
  dv2[20646] = -1.0;
  dv2[20647] = 0.0;
  dv2[20648] = -1.0;
  memset(&dv2[20649], 0, 133U * sizeof(real_T));
  dv2[20782] = -1.0;
  dv2[20783] = 0.0;
  dv2[20784] = -1.0;
  memset(&dv2[20785], 0, 540U * sizeof(real_T));
  dv2[21325] = -1.0;
  dv2[21326] = 0.0;
  dv2[21327] = -1.0;
  memset(&dv2[21328], 0, 133U * sizeof(real_T));
  dv2[21461] = -1.0;
  dv2[21462] = 0.0;
  dv2[21463] = -1.0;
  memset(&dv2[21464], 0, 1486U * sizeof(real_T));
  for (i2 = 0; i2 < 170; i2++) {
    memcpy(&Aiq[i2 * 135], &dv2[i2 * 135], 135U * sizeof(real_T));
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
  biq[128] = t9;
  biq[129] = t9;
  biq[130] = t10;
  biq[131] = t10;
  biq[132] = t11;
  biq[133] = t11;
  biq[134] = -in9[1];
}

/* End of code generation (IqFast_RightStart3V30.cpp) */
