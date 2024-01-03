/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart1V11.cpp
 *
 * Code generation for function 'IqFast_RightStart1V11'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV11_form_Step1.h"
#include "IqFast_RightStart1V11.h"

/* Variable Definitions */
static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart1V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart1V11.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart1V11(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [21120], real_T biq[132])
{
  int32_T i2;
  real_T dv2[21120];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART1V11 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART1V11(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     24-Jul-2023 20:38:27 */
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
  memset(&dv2[103], 0, 162U * sizeof(real_T));
  dv2[265] = -1.0;
  memset(&dv2[266], 0, 33U * sizeof(real_T));
  dv2[299] = 1.0;
  memset(&dv2[300], 0, 33U * sizeof(real_T));
  dv2[333] = -in11[2];
  memset(&dv2[334], 0, 33U * sizeof(real_T));
  dv2[367] = -in11[2];
  memset(&dv2[368], 0, 162U * sizeof(real_T));
  dv2[530] = -1.0;
  memset(&dv2[531], 0, 33U * sizeof(real_T));
  dv2[564] = 1.0;
  memset(&dv2[565], 0, 33U * sizeof(real_T));
  dv2[598] = -in11[2];
  memset(&dv2[599], 0, 33U * sizeof(real_T));
  dv2[632] = -in11[2];
  memset(&dv2[633], 0, 162U * sizeof(real_T));
  dv2[795] = -1.0;
  memset(&dv2[796], 0, 33U * sizeof(real_T));
  dv2[829] = 1.0;
  memset(&dv2[830], 0, 33U * sizeof(real_T));
  dv2[863] = -in11[2];
  memset(&dv2[864], 0, 33U * sizeof(real_T));
  dv2[897] = -in11[2];
  memset(&dv2[898], 0, 162U * sizeof(real_T));
  dv2[1060] = -1.0;
  memset(&dv2[1061], 0, 33U * sizeof(real_T));
  dv2[1094] = 1.0;
  memset(&dv2[1095], 0, 33U * sizeof(real_T));
  dv2[1128] = -in11[2];
  memset(&dv2[1129], 0, 33U * sizeof(real_T));
  dv2[1162] = -in11[2];
  memset(&dv2[1163], 0, 162U * sizeof(real_T));
  dv2[1325] = -1.0;
  memset(&dv2[1326], 0, 33U * sizeof(real_T));
  dv2[1359] = 1.0;
  memset(&dv2[1360], 0, 33U * sizeof(real_T));
  dv2[1393] = -in11[2];
  memset(&dv2[1394], 0, 33U * sizeof(real_T));
  dv2[1427] = -in11[2];
  memset(&dv2[1428], 0, 162U * sizeof(real_T));
  dv2[1590] = -1.0;
  memset(&dv2[1591], 0, 33U * sizeof(real_T));
  dv2[1624] = 1.0;
  memset(&dv2[1625], 0, 33U * sizeof(real_T));
  dv2[1658] = -in11[2];
  memset(&dv2[1659], 0, 33U * sizeof(real_T));
  dv2[1692] = -in11[2];
  memset(&dv2[1693], 0, 162U * sizeof(real_T));
  dv2[1855] = -1.0;
  memset(&dv2[1856], 0, 33U * sizeof(real_T));
  dv2[1889] = 1.0;
  memset(&dv2[1890], 0, 33U * sizeof(real_T));
  dv2[1923] = -in11[2];
  memset(&dv2[1924], 0, 33U * sizeof(real_T));
  dv2[1957] = -in11[2];
  memset(&dv2[1958], 0, 162U * sizeof(real_T));
  dv2[2120] = -1.0;
  memset(&dv2[2121], 0, 33U * sizeof(real_T));
  dv2[2154] = 1.0;
  memset(&dv2[2155], 0, 33U * sizeof(real_T));
  dv2[2188] = -in11[2];
  memset(&dv2[2189], 0, 33U * sizeof(real_T));
  dv2[2222] = -in11[2];
  memset(&dv2[2223], 0, 162U * sizeof(real_T));
  dv2[2385] = -1.0;
  memset(&dv2[2386], 0, 33U * sizeof(real_T));
  dv2[2419] = 1.0;
  memset(&dv2[2420], 0, 33U * sizeof(real_T));
  dv2[2453] = -in11[2];
  memset(&dv2[2454], 0, 33U * sizeof(real_T));
  dv2[2487] = -in11[2];
  memset(&dv2[2488], 0, 162U * sizeof(real_T));
  dv2[2650] = -1.0;
  memset(&dv2[2651], 0, 33U * sizeof(real_T));
  dv2[2684] = 1.0;
  memset(&dv2[2685], 0, 33U * sizeof(real_T));
  dv2[2718] = -in11[2];
  memset(&dv2[2719], 0, 33U * sizeof(real_T));
  dv2[2752] = -in11[2];
  memset(&dv2[2753], 0, 162U * sizeof(real_T));
  dv2[2915] = -1.0;
  memset(&dv2[2916], 0, 33U * sizeof(real_T));
  dv2[2949] = 1.0;
  memset(&dv2[2950], 0, 33U * sizeof(real_T));
  dv2[2983] = -in11[2];
  memset(&dv2[2984], 0, 33U * sizeof(real_T));
  dv2[3017] = -in11[2];
  memset(&dv2[3018], 0, 162U * sizeof(real_T));
  dv2[3180] = -1.0;
  memset(&dv2[3181], 0, 33U * sizeof(real_T));
  dv2[3214] = 1.0;
  memset(&dv2[3215], 0, 33U * sizeof(real_T));
  dv2[3248] = -in11[2];
  memset(&dv2[3249], 0, 33U * sizeof(real_T));
  dv2[3282] = -in11[2];
  memset(&dv2[3283], 0, 162U * sizeof(real_T));
  dv2[3445] = -1.0;
  memset(&dv2[3446], 0, 33U * sizeof(real_T));
  dv2[3479] = 1.0;
  memset(&dv2[3480], 0, 33U * sizeof(real_T));
  dv2[3513] = -in11[2];
  memset(&dv2[3514], 0, 33U * sizeof(real_T));
  dv2[3547] = -in11[2];
  memset(&dv2[3548], 0, 162U * sizeof(real_T));
  dv2[3710] = -1.0;
  memset(&dv2[3711], 0, 33U * sizeof(real_T));
  dv2[3744] = 1.0;
  memset(&dv2[3745], 0, 33U * sizeof(real_T));
  dv2[3778] = -in11[2];
  memset(&dv2[3779], 0, 33U * sizeof(real_T));
  dv2[3812] = -in11[2];
  memset(&dv2[3813], 0, 162U * sizeof(real_T));
  dv2[3975] = -1.0;
  memset(&dv2[3976], 0, 33U * sizeof(real_T));
  dv2[4009] = 1.0;
  memset(&dv2[4010], 0, 33U * sizeof(real_T));
  dv2[4043] = -in11[2];
  memset(&dv2[4044], 0, 33U * sizeof(real_T));
  dv2[4077] = -in11[2];
  memset(&dv2[4078], 0, 162U * sizeof(real_T));
  dv2[4240] = -1.0;
  memset(&dv2[4241], 0, 33U * sizeof(real_T));
  dv2[4274] = 1.0;
  memset(&dv2[4275], 0, 33U * sizeof(real_T));
  dv2[4308] = -in11[2];
  memset(&dv2[4309], 0, 33U * sizeof(real_T));
  dv2[4342] = -in11[2];
  memset(&dv2[4343], 0, 162U * sizeof(real_T));
  dv2[4505] = -1.0;
  memset(&dv2[4506], 0, 33U * sizeof(real_T));
  dv2[4539] = 1.0;
  memset(&dv2[4540], 0, sizeof(real_T) << 4);
  dv2[4556] = -in11[3];
  memset(&dv2[4557], 0, 33U * sizeof(real_T));
  dv2[4590] = -in11[3];
  memset(&dv2[4591], 0, 179U * sizeof(real_T));
  dv2[4770] = -1.0;
  memset(&dv2[4771], 0, 33U * sizeof(real_T));
  dv2[4804] = 1.0;
  memset(&dv2[4805], 0, sizeof(real_T) << 4);
  dv2[4821] = -in11[3];
  memset(&dv2[4822], 0, 33U * sizeof(real_T));
  dv2[4855] = -in11[3];
  memset(&dv2[4856], 0, 179U * sizeof(real_T));
  dv2[5035] = -1.0;
  memset(&dv2[5036], 0, 33U * sizeof(real_T));
  dv2[5069] = 1.0;
  memset(&dv2[5070], 0, sizeof(real_T) << 4);
  dv2[5086] = -in11[3];
  memset(&dv2[5087], 0, 33U * sizeof(real_T));
  dv2[5120] = -in11[3];
  memset(&dv2[5121], 0, 179U * sizeof(real_T));
  dv2[5300] = -1.0;
  memset(&dv2[5301], 0, 33U * sizeof(real_T));
  dv2[5334] = 1.0;
  memset(&dv2[5335], 0, sizeof(real_T) << 4);
  dv2[5351] = -in11[3];
  memset(&dv2[5352], 0, 33U * sizeof(real_T));
  dv2[5385] = -in11[3];
  memset(&dv2[5386], 0, 179U * sizeof(real_T));
  dv2[5565] = -1.0;
  memset(&dv2[5566], 0, 33U * sizeof(real_T));
  dv2[5599] = 1.0;
  memset(&dv2[5600], 0, sizeof(real_T) << 4);
  dv2[5616] = -in11[3];
  memset(&dv2[5617], 0, 33U * sizeof(real_T));
  dv2[5650] = -in11[3];
  memset(&dv2[5651], 0, 179U * sizeof(real_T));
  dv2[5830] = -1.0;
  memset(&dv2[5831], 0, 33U * sizeof(real_T));
  dv2[5864] = 1.0;
  memset(&dv2[5865], 0, sizeof(real_T) << 4);
  dv2[5881] = -in11[3];
  memset(&dv2[5882], 0, 33U * sizeof(real_T));
  dv2[5915] = -in11[3];
  memset(&dv2[5916], 0, 179U * sizeof(real_T));
  dv2[6095] = -1.0;
  memset(&dv2[6096], 0, 33U * sizeof(real_T));
  dv2[6129] = 1.0;
  memset(&dv2[6130], 0, sizeof(real_T) << 4);
  dv2[6146] = -in11[3];
  memset(&dv2[6147], 0, 33U * sizeof(real_T));
  dv2[6180] = -in11[3];
  memset(&dv2[6181], 0, 179U * sizeof(real_T));
  dv2[6360] = -1.0;
  memset(&dv2[6361], 0, 33U * sizeof(real_T));
  dv2[6394] = 1.0;
  memset(&dv2[6395], 0, sizeof(real_T) << 4);
  dv2[6411] = -in11[3];
  memset(&dv2[6412], 0, 33U * sizeof(real_T));
  dv2[6445] = -in11[3];
  memset(&dv2[6446], 0, 179U * sizeof(real_T));
  dv2[6625] = -1.0;
  memset(&dv2[6626], 0, 33U * sizeof(real_T));
  dv2[6659] = 1.0;
  memset(&dv2[6660], 0, sizeof(real_T) << 4);
  dv2[6676] = -in11[3];
  memset(&dv2[6677], 0, 33U * sizeof(real_T));
  dv2[6710] = -in11[3];
  memset(&dv2[6711], 0, 179U * sizeof(real_T));
  dv2[6890] = -1.0;
  memset(&dv2[6891], 0, 33U * sizeof(real_T));
  dv2[6924] = 1.0;
  memset(&dv2[6925], 0, sizeof(real_T) << 4);
  dv2[6941] = -in11[3];
  memset(&dv2[6942], 0, 33U * sizeof(real_T));
  dv2[6975] = -in11[3];
  memset(&dv2[6976], 0, 179U * sizeof(real_T));
  dv2[7155] = -1.0;
  memset(&dv2[7156], 0, 33U * sizeof(real_T));
  dv2[7189] = 1.0;
  memset(&dv2[7190], 0, sizeof(real_T) << 4);
  dv2[7206] = -in11[3];
  memset(&dv2[7207], 0, 33U * sizeof(real_T));
  dv2[7240] = -in11[3];
  memset(&dv2[7241], 0, 179U * sizeof(real_T));
  dv2[7420] = -1.0;
  memset(&dv2[7421], 0, 33U * sizeof(real_T));
  dv2[7454] = 1.0;
  memset(&dv2[7455], 0, sizeof(real_T) << 4);
  dv2[7471] = -in11[3];
  memset(&dv2[7472], 0, 33U * sizeof(real_T));
  dv2[7505] = -in11[3];
  memset(&dv2[7506], 0, 179U * sizeof(real_T));
  dv2[7685] = -1.0;
  memset(&dv2[7686], 0, 33U * sizeof(real_T));
  dv2[7719] = 1.0;
  memset(&dv2[7720], 0, sizeof(real_T) << 4);
  dv2[7736] = -in11[3];
  memset(&dv2[7737], 0, 33U * sizeof(real_T));
  dv2[7770] = -in11[3];
  memset(&dv2[7771], 0, 179U * sizeof(real_T));
  dv2[7950] = -1.0;
  memset(&dv2[7951], 0, 33U * sizeof(real_T));
  dv2[7984] = 1.0;
  memset(&dv2[7985], 0, sizeof(real_T) << 4);
  dv2[8001] = -in11[3];
  memset(&dv2[8002], 0, 33U * sizeof(real_T));
  dv2[8035] = -in11[3];
  memset(&dv2[8036], 0, 179U * sizeof(real_T));
  dv2[8215] = -1.0;
  memset(&dv2[8216], 0, 33U * sizeof(real_T));
  dv2[8249] = 1.0;
  memset(&dv2[8250], 0, sizeof(real_T) << 4);
  dv2[8266] = -in11[3];
  memset(&dv2[8267], 0, 33U * sizeof(real_T));
  dv2[8300] = -in11[3];
  memset(&dv2[8301], 0, 179U * sizeof(real_T));
  dv2[8480] = -1.0;
  memset(&dv2[8481], 0, 33U * sizeof(real_T));
  dv2[8514] = 1.0;
  memset(&dv2[8515], 0, sizeof(real_T) << 4);
  dv2[8531] = -in11[3];
  memset(&dv2[8532], 0, 33U * sizeof(real_T));
  dv2[8565] = -in11[3];
  memset(&dv2[8566], 0, 179U * sizeof(real_T));
  dv2[8745] = -1.0;
  memset(&dv2[8746], 0, 33U * sizeof(real_T));
  dv2[8779] = 1.0;
  memset(&dv2[8780], 0, sizeof(real_T) << 4);
  dv2[8796] = -in11[3];
  memset(&dv2[8797], 0, 33U * sizeof(real_T));
  dv2[8830] = -in11[3];
  memset(&dv2[8831], 0, 145U * sizeof(real_T));
  dv2[8976] = 1.0;
  memset(&dv2[8977], 0, 33U * sizeof(real_T));
  dv2[9010] = -1.0;
  memset(&dv2[9011], 0, 84U * sizeof(real_T));
  dv2[9095] = 1.0;
  dv2[9096] = 0.0;
  dv2[9097] = 0.0;
  dv2[9098] = -1.0;
  memset(&dv2[9099], 0, 10U * sizeof(real_T));
  dv2[9109] = 1.0;
  memset(&dv2[9110], 0, 33U * sizeof(real_T));
  dv2[9143] = -1.0;
  memset(&dv2[9144], 0, 84U * sizeof(real_T));
  dv2[9228] = 1.0;
  dv2[9229] = 0.0;
  dv2[9230] = 0.0;
  dv2[9231] = -1.0;
  memset(&dv2[9232], 0, 10U * sizeof(real_T));
  dv2[9242] = 1.0;
  memset(&dv2[9243], 0, 33U * sizeof(real_T));
  dv2[9276] = -1.0;
  memset(&dv2[9277], 0, 84U * sizeof(real_T));
  dv2[9361] = 1.0;
  dv2[9362] = 0.0;
  dv2[9363] = 0.0;
  dv2[9364] = -1.0;
  memset(&dv2[9365], 0, 10U * sizeof(real_T));
  dv2[9375] = 1.0;
  memset(&dv2[9376], 0, 33U * sizeof(real_T));
  dv2[9409] = -1.0;
  memset(&dv2[9410], 0, 98U * sizeof(real_T));
  dv2[9508] = 1.0;
  memset(&dv2[9509], 0, 33U * sizeof(real_T));
  dv2[9542] = -1.0;
  memset(&dv2[9543], 0, 98U * sizeof(real_T));
  dv2[9641] = 1.0;
  memset(&dv2[9642], 0, 33U * sizeof(real_T));
  dv2[9675] = -1.0;
  memset(&dv2[9676], 0, 98U * sizeof(real_T));
  dv2[9774] = 1.0;
  memset(&dv2[9775], 0, 33U * sizeof(real_T));
  dv2[9808] = -1.0;
  memset(&dv2[9809], 0, 98U * sizeof(real_T));
  dv2[9907] = 1.0;
  memset(&dv2[9908], 0, 33U * sizeof(real_T));
  dv2[9941] = -1.0;
  memset(&dv2[9942], 0, 98U * sizeof(real_T));
  dv2[10040] = 1.0;
  memset(&dv2[10041], 0, 33U * sizeof(real_T));
  dv2[10074] = -1.0;
  memset(&dv2[10075], 0, 98U * sizeof(real_T));
  dv2[10173] = 1.0;
  memset(&dv2[10174], 0, 33U * sizeof(real_T));
  dv2[10207] = -1.0;
  memset(&dv2[10208], 0, 98U * sizeof(real_T));
  dv2[10306] = 1.0;
  memset(&dv2[10307], 0, 33U * sizeof(real_T));
  dv2[10340] = -1.0;
  memset(&dv2[10341], 0, 98U * sizeof(real_T));
  dv2[10439] = 1.0;
  memset(&dv2[10440], 0, 33U * sizeof(real_T));
  dv2[10473] = -1.0;
  memset(&dv2[10474], 0, 98U * sizeof(real_T));
  dv2[10572] = 1.0;
  memset(&dv2[10573], 0, 33U * sizeof(real_T));
  dv2[10606] = -1.0;
  memset(&dv2[10607], 0, 98U * sizeof(real_T));
  dv2[10705] = 1.0;
  memset(&dv2[10706], 0, 33U * sizeof(real_T));
  dv2[10739] = -1.0;
  memset(&dv2[10740], 0, 98U * sizeof(real_T));
  dv2[10838] = 1.0;
  memset(&dv2[10839], 0, 33U * sizeof(real_T));
  dv2[10872] = -1.0;
  memset(&dv2[10873], 0, 98U * sizeof(real_T));
  dv2[10971] = 1.0;
  memset(&dv2[10972], 0, 33U * sizeof(real_T));
  dv2[11005] = -1.0;
  memset(&dv2[11006], 0, 98U * sizeof(real_T));
  dv2[11104] = 1.0;
  memset(&dv2[11105], 0, 33U * sizeof(real_T));
  dv2[11138] = -1.0;
  memset(&dv2[11139], 0, 98U * sizeof(real_T));
  dv2[11237] = 1.0;
  memset(&dv2[11238], 0, 33U * sizeof(real_T));
  dv2[11271] = -1.0;
  memset(&dv2[11272], 0, 73U * sizeof(real_T));
  dv2[11345] = 1.0;
  dv2[11346] = 0.0;
  dv2[11347] = 0.0;
  dv2[11348] = -1.0;
  memset(&dv2[11349], 0, 21U * sizeof(real_T));
  dv2[11370] = 1.0;
  memset(&dv2[11371], 0, 33U * sizeof(real_T));
  dv2[11404] = -1.0;
  memset(&dv2[11405], 0, 73U * sizeof(real_T));
  dv2[11478] = 1.0;
  dv2[11479] = 0.0;
  dv2[11480] = 0.0;
  dv2[11481] = -1.0;
  memset(&dv2[11482], 0, 21U * sizeof(real_T));
  dv2[11503] = 1.0;
  memset(&dv2[11504], 0, 33U * sizeof(real_T));
  dv2[11537] = -1.0;
  memset(&dv2[11538], 0, 73U * sizeof(real_T));
  dv2[11611] = 1.0;
  dv2[11612] = 0.0;
  dv2[11613] = 0.0;
  dv2[11614] = -1.0;
  memset(&dv2[11615], 0, 21U * sizeof(real_T));
  dv2[11636] = 1.0;
  memset(&dv2[11637], 0, 33U * sizeof(real_T));
  dv2[11670] = -1.0;
  memset(&dv2[11671], 0, 98U * sizeof(real_T));
  dv2[11769] = 1.0;
  memset(&dv2[11770], 0, 33U * sizeof(real_T));
  dv2[11803] = -1.0;
  memset(&dv2[11804], 0, 98U * sizeof(real_T));
  dv2[11902] = 1.0;
  memset(&dv2[11903], 0, 33U * sizeof(real_T));
  dv2[11936] = -1.0;
  memset(&dv2[11937], 0, 98U * sizeof(real_T));
  dv2[12035] = 1.0;
  memset(&dv2[12036], 0, 33U * sizeof(real_T));
  dv2[12069] = -1.0;
  memset(&dv2[12070], 0, 98U * sizeof(real_T));
  dv2[12168] = 1.0;
  memset(&dv2[12169], 0, 33U * sizeof(real_T));
  dv2[12202] = -1.0;
  memset(&dv2[12203], 0, 98U * sizeof(real_T));
  dv2[12301] = 1.0;
  memset(&dv2[12302], 0, 33U * sizeof(real_T));
  dv2[12335] = -1.0;
  memset(&dv2[12336], 0, 98U * sizeof(real_T));
  dv2[12434] = 1.0;
  memset(&dv2[12435], 0, 33U * sizeof(real_T));
  dv2[12468] = -1.0;
  memset(&dv2[12469], 0, 98U * sizeof(real_T));
  dv2[12567] = 1.0;
  memset(&dv2[12568], 0, 33U * sizeof(real_T));
  dv2[12601] = -1.0;
  memset(&dv2[12602], 0, 98U * sizeof(real_T));
  dv2[12700] = 1.0;
  memset(&dv2[12701], 0, 33U * sizeof(real_T));
  dv2[12734] = -1.0;
  memset(&dv2[12735], 0, 98U * sizeof(real_T));
  dv2[12833] = 1.0;
  memset(&dv2[12834], 0, 33U * sizeof(real_T));
  dv2[12867] = -1.0;
  memset(&dv2[12868], 0, 98U * sizeof(real_T));
  dv2[12966] = 1.0;
  memset(&dv2[12967], 0, 33U * sizeof(real_T));
  dv2[13000] = -1.0;
  memset(&dv2[13001], 0, 98U * sizeof(real_T));
  dv2[13099] = 1.0;
  memset(&dv2[13100], 0, 33U * sizeof(real_T));
  dv2[13133] = -1.0;
  memset(&dv2[13134], 0, 98U * sizeof(real_T));
  dv2[13232] = 1.0;
  memset(&dv2[13233], 0, 33U * sizeof(real_T));
  dv2[13266] = -1.0;
  memset(&dv2[13267], 0, 98U * sizeof(real_T));
  dv2[13365] = 1.0;
  memset(&dv2[13366], 0, 33U * sizeof(real_T));
  dv2[13399] = -1.0;
  memset(&dv2[13400], 0, 723U * sizeof(real_T));
  dv2[14123] = -1.0;
  memset(&dv2[14124], 0, 481U * sizeof(real_T));
  dv2[14605] = -1.0;
  memset(&dv2[14606], 0, sizeof(real_T) << 4);
  dv2[14622] = -1.0;
  memset(&dv2[14623], 0, 115U * sizeof(real_T));
  dv2[14738] = -1.0;
  memset(&dv2[14739], 0, sizeof(real_T) << 4);
  dv2[14755] = -1.0;
  memset(&dv2[14756], 0, 115U * sizeof(real_T));
  dv2[14871] = -1.0;
  memset(&dv2[14872], 0, sizeof(real_T) << 4);
  dv2[14888] = -1.0;
  memset(&dv2[14889], 0, 115U * sizeof(real_T));
  dv2[15004] = -1.0;
  memset(&dv2[15005], 0, sizeof(real_T) << 4);
  dv2[15021] = -1.0;
  memset(&dv2[15022], 0, 115U * sizeof(real_T));
  dv2[15137] = -1.0;
  memset(&dv2[15138], 0, sizeof(real_T) << 4);
  dv2[15154] = -1.0;
  memset(&dv2[15155], 0, 115U * sizeof(real_T));
  dv2[15270] = -1.0;
  memset(&dv2[15271], 0, sizeof(real_T) << 4);
  dv2[15287] = -1.0;
  memset(&dv2[15288], 0, 115U * sizeof(real_T));
  dv2[15403] = -1.0;
  memset(&dv2[15404], 0, sizeof(real_T) << 4);
  dv2[15420] = -1.0;
  memset(&dv2[15421], 0, 115U * sizeof(real_T));
  dv2[15536] = -1.0;
  memset(&dv2[15537], 0, sizeof(real_T) << 4);
  dv2[15553] = -1.0;
  memset(&dv2[15554], 0, 115U * sizeof(real_T));
  dv2[15669] = -1.0;
  memset(&dv2[15670], 0, sizeof(real_T) << 4);
  dv2[15686] = -1.0;
  memset(&dv2[15687], 0, 115U * sizeof(real_T));
  dv2[15802] = -1.0;
  memset(&dv2[15803], 0, sizeof(real_T) << 4);
  dv2[15819] = -1.0;
  memset(&dv2[15820], 0, 115U * sizeof(real_T));
  dv2[15935] = -1.0;
  memset(&dv2[15936], 0, sizeof(real_T) << 4);
  dv2[15952] = -1.0;
  memset(&dv2[15953], 0, 115U * sizeof(real_T));
  dv2[16068] = -1.0;
  memset(&dv2[16069], 0, sizeof(real_T) << 4);
  dv2[16085] = -1.0;
  memset(&dv2[16086], 0, 115U * sizeof(real_T));
  dv2[16201] = -1.0;
  memset(&dv2[16202], 0, sizeof(real_T) << 4);
  dv2[16218] = -1.0;
  memset(&dv2[16219], 0, 115U * sizeof(real_T));
  dv2[16334] = -1.0;
  memset(&dv2[16335], 0, sizeof(real_T) << 4);
  dv2[16351] = -1.0;
  memset(&dv2[16352], 0, 115U * sizeof(real_T));
  dv2[16467] = -1.0;
  memset(&dv2[16468], 0, sizeof(real_T) << 4);
  dv2[16484] = -1.0;
  memset(&dv2[16485], 0, 115U * sizeof(real_T));
  dv2[16600] = -1.0;
  memset(&dv2[16601], 0, sizeof(real_T) << 4);
  dv2[16617] = -1.0;
  memset(&dv2[16618], 0, 115U * sizeof(real_T));
  dv2[16733] = -1.0;
  memset(&dv2[16734], 0, sizeof(real_T) << 4);
  dv2[16750] = -1.0;
  memset(&dv2[16751], 0, 2376U * sizeof(real_T));
  dv2[19127] = -1.0;
  dv2[19128] = 0.0;
  dv2[19129] = 0.0;
  dv2[19130] = -1.0;
  memset(&dv2[19131], 0, 129U * sizeof(real_T));
  dv2[19260] = -1.0;
  dv2[19261] = 0.0;
  dv2[19262] = 0.0;
  dv2[19263] = -1.0;
  memset(&dv2[19264], 0, 129U * sizeof(real_T));
  dv2[19393] = -1.0;
  dv2[19394] = 0.0;
  dv2[19395] = 0.0;
  dv2[19396] = -1.0;
  memset(&dv2[19397], 0, 264U * sizeof(real_T));
  dv2[19661] = -1.0;
  dv2[19662] = 0.0;
  dv2[19663] = 0.0;
  dv2[19664] = -1.0;
  memset(&dv2[19665], 0, 129U * sizeof(real_T));
  dv2[19794] = -1.0;
  dv2[19795] = 0.0;
  dv2[19796] = 0.0;
  dv2[19797] = -1.0;
  memset(&dv2[19798], 0, 129U * sizeof(real_T));
  dv2[19927] = -1.0;
  dv2[19928] = 0.0;
  dv2[19929] = 0.0;
  dv2[19930] = -1.0;
  memset(&dv2[19931], 0, 1189U * sizeof(real_T));
  for (i2 = 0; i2 < 160; i2++) {
    memcpy(&Aiq[i2 * 132], &dv2[i2 * 132], 132U * sizeof(real_T));
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
}

/* End of code generation (IqFast_RightStart1V11.cpp) */
