/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart2V12.cpp
 *
 * Code generation for function 'IqFast_RightStart2V12'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step2.h"
#include "IqFast_RightStart2V12.h"

/* Variable Definitions */
static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V12.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart2V12(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [20640], real_T biq[129])
{
  int32_T i2;
  real_T dv2[20640];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART2V12 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART2V12(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     25-Jul-2023 13:29:51 */
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
  memset(&dv2[103], 0, 156U * sizeof(real_T));
  dv2[259] = -1.0;
  memset(&dv2[260], 0, 33U * sizeof(real_T));
  dv2[293] = 1.0;
  memset(&dv2[294], 0, 33U * sizeof(real_T));
  dv2[327] = -in11[2];
  memset(&dv2[328], 0, 33U * sizeof(real_T));
  dv2[361] = -in11[2];
  memset(&dv2[362], 0, 156U * sizeof(real_T));
  dv2[518] = -1.0;
  memset(&dv2[519], 0, 33U * sizeof(real_T));
  dv2[552] = 1.0;
  memset(&dv2[553], 0, 33U * sizeof(real_T));
  dv2[586] = -in11[2];
  memset(&dv2[587], 0, 33U * sizeof(real_T));
  dv2[620] = -in11[2];
  memset(&dv2[621], 0, 156U * sizeof(real_T));
  dv2[777] = -1.0;
  memset(&dv2[778], 0, 33U * sizeof(real_T));
  dv2[811] = 1.0;
  memset(&dv2[812], 0, 33U * sizeof(real_T));
  dv2[845] = -in11[2];
  memset(&dv2[846], 0, 33U * sizeof(real_T));
  dv2[879] = -in11[2];
  memset(&dv2[880], 0, 156U * sizeof(real_T));
  dv2[1036] = -1.0;
  memset(&dv2[1037], 0, 33U * sizeof(real_T));
  dv2[1070] = 1.0;
  memset(&dv2[1071], 0, 33U * sizeof(real_T));
  dv2[1104] = -in11[2];
  memset(&dv2[1105], 0, 33U * sizeof(real_T));
  dv2[1138] = -in11[2];
  memset(&dv2[1139], 0, 156U * sizeof(real_T));
  dv2[1295] = -1.0;
  memset(&dv2[1296], 0, 33U * sizeof(real_T));
  dv2[1329] = 1.0;
  memset(&dv2[1330], 0, 33U * sizeof(real_T));
  dv2[1363] = -in11[2];
  memset(&dv2[1364], 0, 33U * sizeof(real_T));
  dv2[1397] = -in11[2];
  memset(&dv2[1398], 0, 156U * sizeof(real_T));
  dv2[1554] = -1.0;
  memset(&dv2[1555], 0, 33U * sizeof(real_T));
  dv2[1588] = 1.0;
  memset(&dv2[1589], 0, 33U * sizeof(real_T));
  dv2[1622] = -in11[2];
  memset(&dv2[1623], 0, 33U * sizeof(real_T));
  dv2[1656] = -in11[2];
  memset(&dv2[1657], 0, 156U * sizeof(real_T));
  dv2[1813] = -1.0;
  memset(&dv2[1814], 0, 33U * sizeof(real_T));
  dv2[1847] = 1.0;
  memset(&dv2[1848], 0, 33U * sizeof(real_T));
  dv2[1881] = -in11[2];
  memset(&dv2[1882], 0, 33U * sizeof(real_T));
  dv2[1915] = -in11[2];
  memset(&dv2[1916], 0, 156U * sizeof(real_T));
  dv2[2072] = -1.0;
  memset(&dv2[2073], 0, 33U * sizeof(real_T));
  dv2[2106] = 1.0;
  memset(&dv2[2107], 0, 33U * sizeof(real_T));
  dv2[2140] = -in11[2];
  memset(&dv2[2141], 0, 33U * sizeof(real_T));
  dv2[2174] = -in11[2];
  memset(&dv2[2175], 0, 156U * sizeof(real_T));
  dv2[2331] = -1.0;
  memset(&dv2[2332], 0, 33U * sizeof(real_T));
  dv2[2365] = 1.0;
  memset(&dv2[2366], 0, 33U * sizeof(real_T));
  dv2[2399] = -in11[2];
  memset(&dv2[2400], 0, 33U * sizeof(real_T));
  dv2[2433] = -in11[2];
  memset(&dv2[2434], 0, 156U * sizeof(real_T));
  dv2[2590] = -1.0;
  memset(&dv2[2591], 0, 33U * sizeof(real_T));
  dv2[2624] = 1.0;
  memset(&dv2[2625], 0, 33U * sizeof(real_T));
  dv2[2658] = -in11[2];
  memset(&dv2[2659], 0, 33U * sizeof(real_T));
  dv2[2692] = -in11[2];
  memset(&dv2[2693], 0, 156U * sizeof(real_T));
  dv2[2849] = -1.0;
  memset(&dv2[2850], 0, 33U * sizeof(real_T));
  dv2[2883] = 1.0;
  memset(&dv2[2884], 0, 33U * sizeof(real_T));
  dv2[2917] = -in11[2];
  memset(&dv2[2918], 0, 33U * sizeof(real_T));
  dv2[2951] = -in11[2];
  memset(&dv2[2952], 0, 156U * sizeof(real_T));
  dv2[3108] = -1.0;
  memset(&dv2[3109], 0, 33U * sizeof(real_T));
  dv2[3142] = 1.0;
  memset(&dv2[3143], 0, 33U * sizeof(real_T));
  dv2[3176] = -in11[2];
  memset(&dv2[3177], 0, 33U * sizeof(real_T));
  dv2[3210] = -in11[2];
  memset(&dv2[3211], 0, 156U * sizeof(real_T));
  dv2[3367] = -1.0;
  memset(&dv2[3368], 0, 33U * sizeof(real_T));
  dv2[3401] = 1.0;
  memset(&dv2[3402], 0, 33U * sizeof(real_T));
  dv2[3435] = -in11[2];
  memset(&dv2[3436], 0, 33U * sizeof(real_T));
  dv2[3469] = -in11[2];
  memset(&dv2[3470], 0, 156U * sizeof(real_T));
  dv2[3626] = -1.0;
  memset(&dv2[3627], 0, 33U * sizeof(real_T));
  dv2[3660] = 1.0;
  memset(&dv2[3661], 0, 33U * sizeof(real_T));
  dv2[3694] = -in11[2];
  memset(&dv2[3695], 0, 33U * sizeof(real_T));
  dv2[3728] = -in11[2];
  memset(&dv2[3729], 0, 156U * sizeof(real_T));
  dv2[3885] = -1.0;
  memset(&dv2[3886], 0, 33U * sizeof(real_T));
  dv2[3919] = 1.0;
  memset(&dv2[3920], 0, 33U * sizeof(real_T));
  dv2[3953] = -in11[2];
  memset(&dv2[3954], 0, 33U * sizeof(real_T));
  dv2[3987] = -in11[2];
  memset(&dv2[3988], 0, 156U * sizeof(real_T));
  dv2[4144] = -1.0;
  memset(&dv2[4145], 0, 33U * sizeof(real_T));
  dv2[4178] = 1.0;
  memset(&dv2[4179], 0, 33U * sizeof(real_T));
  dv2[4212] = -in11[2];
  memset(&dv2[4213], 0, 33U * sizeof(real_T));
  dv2[4246] = -in11[2];
  memset(&dv2[4247], 0, 156U * sizeof(real_T));
  dv2[4403] = -1.0;
  memset(&dv2[4404], 0, 33U * sizeof(real_T));
  dv2[4437] = 1.0;
  memset(&dv2[4438], 0, sizeof(real_T) << 4);
  dv2[4454] = -in11[3];
  memset(&dv2[4455], 0, 33U * sizeof(real_T));
  dv2[4488] = -in11[3];
  memset(&dv2[4489], 0, 173U * sizeof(real_T));
  dv2[4662] = -1.0;
  memset(&dv2[4663], 0, 33U * sizeof(real_T));
  dv2[4696] = 1.0;
  memset(&dv2[4697], 0, sizeof(real_T) << 4);
  dv2[4713] = -in11[3];
  memset(&dv2[4714], 0, 33U * sizeof(real_T));
  dv2[4747] = -in11[3];
  memset(&dv2[4748], 0, 173U * sizeof(real_T));
  dv2[4921] = -1.0;
  memset(&dv2[4922], 0, 33U * sizeof(real_T));
  dv2[4955] = 1.0;
  memset(&dv2[4956], 0, sizeof(real_T) << 4);
  dv2[4972] = -in11[3];
  memset(&dv2[4973], 0, 33U * sizeof(real_T));
  dv2[5006] = -in11[3];
  memset(&dv2[5007], 0, 173U * sizeof(real_T));
  dv2[5180] = -1.0;
  memset(&dv2[5181], 0, 33U * sizeof(real_T));
  dv2[5214] = 1.0;
  memset(&dv2[5215], 0, sizeof(real_T) << 4);
  dv2[5231] = -in11[3];
  memset(&dv2[5232], 0, 33U * sizeof(real_T));
  dv2[5265] = -in11[3];
  memset(&dv2[5266], 0, 173U * sizeof(real_T));
  dv2[5439] = -1.0;
  memset(&dv2[5440], 0, 33U * sizeof(real_T));
  dv2[5473] = 1.0;
  memset(&dv2[5474], 0, sizeof(real_T) << 4);
  dv2[5490] = -in11[3];
  memset(&dv2[5491], 0, 33U * sizeof(real_T));
  dv2[5524] = -in11[3];
  memset(&dv2[5525], 0, 173U * sizeof(real_T));
  dv2[5698] = -1.0;
  memset(&dv2[5699], 0, 33U * sizeof(real_T));
  dv2[5732] = 1.0;
  memset(&dv2[5733], 0, sizeof(real_T) << 4);
  dv2[5749] = -in11[3];
  memset(&dv2[5750], 0, 33U * sizeof(real_T));
  dv2[5783] = -in11[3];
  memset(&dv2[5784], 0, 173U * sizeof(real_T));
  dv2[5957] = -1.0;
  memset(&dv2[5958], 0, 33U * sizeof(real_T));
  dv2[5991] = 1.0;
  memset(&dv2[5992], 0, sizeof(real_T) << 4);
  dv2[6008] = -in11[3];
  memset(&dv2[6009], 0, 33U * sizeof(real_T));
  dv2[6042] = -in11[3];
  memset(&dv2[6043], 0, 173U * sizeof(real_T));
  dv2[6216] = -1.0;
  memset(&dv2[6217], 0, 33U * sizeof(real_T));
  dv2[6250] = 1.0;
  memset(&dv2[6251], 0, sizeof(real_T) << 4);
  dv2[6267] = -in11[3];
  memset(&dv2[6268], 0, 33U * sizeof(real_T));
  dv2[6301] = -in11[3];
  memset(&dv2[6302], 0, 173U * sizeof(real_T));
  dv2[6475] = -1.0;
  memset(&dv2[6476], 0, 33U * sizeof(real_T));
  dv2[6509] = 1.0;
  memset(&dv2[6510], 0, sizeof(real_T) << 4);
  dv2[6526] = -in11[3];
  memset(&dv2[6527], 0, 33U * sizeof(real_T));
  dv2[6560] = -in11[3];
  memset(&dv2[6561], 0, 173U * sizeof(real_T));
  dv2[6734] = -1.0;
  memset(&dv2[6735], 0, 33U * sizeof(real_T));
  dv2[6768] = 1.0;
  memset(&dv2[6769], 0, sizeof(real_T) << 4);
  dv2[6785] = -in11[3];
  memset(&dv2[6786], 0, 33U * sizeof(real_T));
  dv2[6819] = -in11[3];
  memset(&dv2[6820], 0, 173U * sizeof(real_T));
  dv2[6993] = -1.0;
  memset(&dv2[6994], 0, 33U * sizeof(real_T));
  dv2[7027] = 1.0;
  memset(&dv2[7028], 0, sizeof(real_T) << 4);
  dv2[7044] = -in11[3];
  memset(&dv2[7045], 0, 33U * sizeof(real_T));
  dv2[7078] = -in11[3];
  memset(&dv2[7079], 0, 173U * sizeof(real_T));
  dv2[7252] = -1.0;
  memset(&dv2[7253], 0, 33U * sizeof(real_T));
  dv2[7286] = 1.0;
  memset(&dv2[7287], 0, sizeof(real_T) << 4);
  dv2[7303] = -in11[3];
  memset(&dv2[7304], 0, 33U * sizeof(real_T));
  dv2[7337] = -in11[3];
  memset(&dv2[7338], 0, 173U * sizeof(real_T));
  dv2[7511] = -1.0;
  memset(&dv2[7512], 0, 33U * sizeof(real_T));
  dv2[7545] = 1.0;
  memset(&dv2[7546], 0, sizeof(real_T) << 4);
  dv2[7562] = -in11[3];
  memset(&dv2[7563], 0, 33U * sizeof(real_T));
  dv2[7596] = -in11[3];
  memset(&dv2[7597], 0, 173U * sizeof(real_T));
  dv2[7770] = -1.0;
  memset(&dv2[7771], 0, 33U * sizeof(real_T));
  dv2[7804] = 1.0;
  memset(&dv2[7805], 0, sizeof(real_T) << 4);
  dv2[7821] = -in11[3];
  memset(&dv2[7822], 0, 33U * sizeof(real_T));
  dv2[7855] = -in11[3];
  memset(&dv2[7856], 0, 173U * sizeof(real_T));
  dv2[8029] = -1.0;
  memset(&dv2[8030], 0, 33U * sizeof(real_T));
  dv2[8063] = 1.0;
  memset(&dv2[8064], 0, sizeof(real_T) << 4);
  dv2[8080] = -in11[3];
  memset(&dv2[8081], 0, 33U * sizeof(real_T));
  dv2[8114] = -in11[3];
  memset(&dv2[8115], 0, 173U * sizeof(real_T));
  dv2[8288] = -1.0;
  memset(&dv2[8289], 0, 33U * sizeof(real_T));
  dv2[8322] = 1.0;
  memset(&dv2[8323], 0, sizeof(real_T) << 4);
  dv2[8339] = -in11[3];
  memset(&dv2[8340], 0, 33U * sizeof(real_T));
  dv2[8373] = -in11[3];
  memset(&dv2[8374], 0, 173U * sizeof(real_T));
  dv2[8547] = -1.0;
  memset(&dv2[8548], 0, 33U * sizeof(real_T));
  dv2[8581] = 1.0;
  memset(&dv2[8582], 0, sizeof(real_T) << 4);
  dv2[8598] = -in11[3];
  memset(&dv2[8599], 0, 33U * sizeof(real_T));
  dv2[8632] = -in11[3];
  memset(&dv2[8633], 0, 139U * sizeof(real_T));
  dv2[8772] = 1.0;
  memset(&dv2[8773], 0, 33U * sizeof(real_T));
  dv2[8806] = -1.0;
  memset(&dv2[8807], 0, 84U * sizeof(real_T));
  dv2[8891] = 1.0;
  dv2[8892] = 0.0;
  dv2[8893] = -1.0;
  memset(&dv2[8894], 0, sizeof(real_T) << 3);
  dv2[8902] = 1.0;
  memset(&dv2[8903], 0, 33U * sizeof(real_T));
  dv2[8936] = -1.0;
  memset(&dv2[8937], 0, 84U * sizeof(real_T));
  dv2[9021] = 1.0;
  dv2[9022] = 0.0;
  dv2[9023] = -1.0;
  memset(&dv2[9024], 0, sizeof(real_T) << 3);
  dv2[9032] = 1.0;
  memset(&dv2[9033], 0, 33U * sizeof(real_T));
  dv2[9066] = -1.0;
  memset(&dv2[9067], 0, 95U * sizeof(real_T));
  dv2[9162] = 1.0;
  memset(&dv2[9163], 0, 33U * sizeof(real_T));
  dv2[9196] = -1.0;
  memset(&dv2[9197], 0, 95U * sizeof(real_T));
  dv2[9292] = 1.0;
  memset(&dv2[9293], 0, 33U * sizeof(real_T));
  dv2[9326] = -1.0;
  memset(&dv2[9327], 0, 95U * sizeof(real_T));
  dv2[9422] = 1.0;
  memset(&dv2[9423], 0, 33U * sizeof(real_T));
  dv2[9456] = -1.0;
  memset(&dv2[9457], 0, 95U * sizeof(real_T));
  dv2[9552] = 1.0;
  memset(&dv2[9553], 0, 33U * sizeof(real_T));
  dv2[9586] = -1.0;
  memset(&dv2[9587], 0, 95U * sizeof(real_T));
  dv2[9682] = 1.0;
  memset(&dv2[9683], 0, 33U * sizeof(real_T));
  dv2[9716] = -1.0;
  memset(&dv2[9717], 0, 95U * sizeof(real_T));
  dv2[9812] = 1.0;
  memset(&dv2[9813], 0, 33U * sizeof(real_T));
  dv2[9846] = -1.0;
  memset(&dv2[9847], 0, 95U * sizeof(real_T));
  dv2[9942] = 1.0;
  memset(&dv2[9943], 0, 33U * sizeof(real_T));
  dv2[9976] = -1.0;
  memset(&dv2[9977], 0, 95U * sizeof(real_T));
  dv2[10072] = 1.0;
  memset(&dv2[10073], 0, 33U * sizeof(real_T));
  dv2[10106] = -1.0;
  memset(&dv2[10107], 0, 95U * sizeof(real_T));
  dv2[10202] = 1.0;
  memset(&dv2[10203], 0, 33U * sizeof(real_T));
  dv2[10236] = -1.0;
  memset(&dv2[10237], 0, 95U * sizeof(real_T));
  dv2[10332] = 1.0;
  memset(&dv2[10333], 0, 33U * sizeof(real_T));
  dv2[10366] = -1.0;
  memset(&dv2[10367], 0, 95U * sizeof(real_T));
  dv2[10462] = 1.0;
  memset(&dv2[10463], 0, 33U * sizeof(real_T));
  dv2[10496] = -1.0;
  memset(&dv2[10497], 0, 95U * sizeof(real_T));
  dv2[10592] = 1.0;
  memset(&dv2[10593], 0, 33U * sizeof(real_T));
  dv2[10626] = -1.0;
  memset(&dv2[10627], 0, 95U * sizeof(real_T));
  dv2[10722] = 1.0;
  memset(&dv2[10723], 0, 33U * sizeof(real_T));
  dv2[10756] = -1.0;
  memset(&dv2[10757], 0, 95U * sizeof(real_T));
  dv2[10852] = 1.0;
  memset(&dv2[10853], 0, 33U * sizeof(real_T));
  dv2[10886] = -1.0;
  memset(&dv2[10887], 0, 95U * sizeof(real_T));
  dv2[10982] = 1.0;
  memset(&dv2[10983], 0, 33U * sizeof(real_T));
  dv2[11016] = -1.0;
  memset(&dv2[11017], 0, 71U * sizeof(real_T));
  dv2[11088] = 1.0;
  dv2[11089] = 0.0;
  dv2[11090] = -1.0;
  memset(&dv2[11091], 0, 21U * sizeof(real_T));
  dv2[11112] = 1.0;
  memset(&dv2[11113], 0, 33U * sizeof(real_T));
  dv2[11146] = -1.0;
  memset(&dv2[11147], 0, 71U * sizeof(real_T));
  dv2[11218] = 1.0;
  dv2[11219] = 0.0;
  dv2[11220] = -1.0;
  memset(&dv2[11221], 0, 21U * sizeof(real_T));
  dv2[11242] = 1.0;
  memset(&dv2[11243], 0, 33U * sizeof(real_T));
  dv2[11276] = -1.0;
  memset(&dv2[11277], 0, 95U * sizeof(real_T));
  dv2[11372] = 1.0;
  memset(&dv2[11373], 0, 33U * sizeof(real_T));
  dv2[11406] = -1.0;
  memset(&dv2[11407], 0, 95U * sizeof(real_T));
  dv2[11502] = 1.0;
  memset(&dv2[11503], 0, 33U * sizeof(real_T));
  dv2[11536] = -1.0;
  memset(&dv2[11537], 0, 95U * sizeof(real_T));
  dv2[11632] = 1.0;
  memset(&dv2[11633], 0, 33U * sizeof(real_T));
  dv2[11666] = -1.0;
  memset(&dv2[11667], 0, 95U * sizeof(real_T));
  dv2[11762] = 1.0;
  memset(&dv2[11763], 0, 33U * sizeof(real_T));
  dv2[11796] = -1.0;
  memset(&dv2[11797], 0, 95U * sizeof(real_T));
  dv2[11892] = 1.0;
  memset(&dv2[11893], 0, 33U * sizeof(real_T));
  dv2[11926] = -1.0;
  memset(&dv2[11927], 0, 95U * sizeof(real_T));
  dv2[12022] = 1.0;
  memset(&dv2[12023], 0, 33U * sizeof(real_T));
  dv2[12056] = -1.0;
  memset(&dv2[12057], 0, 95U * sizeof(real_T));
  dv2[12152] = 1.0;
  memset(&dv2[12153], 0, 33U * sizeof(real_T));
  dv2[12186] = -1.0;
  memset(&dv2[12187], 0, 95U * sizeof(real_T));
  dv2[12282] = 1.0;
  memset(&dv2[12283], 0, 33U * sizeof(real_T));
  dv2[12316] = -1.0;
  memset(&dv2[12317], 0, 95U * sizeof(real_T));
  dv2[12412] = 1.0;
  memset(&dv2[12413], 0, 33U * sizeof(real_T));
  dv2[12446] = -1.0;
  memset(&dv2[12447], 0, 95U * sizeof(real_T));
  dv2[12542] = 1.0;
  memset(&dv2[12543], 0, 33U * sizeof(real_T));
  dv2[12576] = -1.0;
  memset(&dv2[12577], 0, 95U * sizeof(real_T));
  dv2[12672] = 1.0;
  memset(&dv2[12673], 0, 33U * sizeof(real_T));
  dv2[12706] = -1.0;
  memset(&dv2[12707], 0, 95U * sizeof(real_T));
  dv2[12802] = 1.0;
  memset(&dv2[12803], 0, 33U * sizeof(real_T));
  dv2[12836] = -1.0;
  memset(&dv2[12837], 0, 95U * sizeof(real_T));
  dv2[12932] = 1.0;
  memset(&dv2[12933], 0, 33U * sizeof(real_T));
  dv2[12966] = -1.0;
  memset(&dv2[12967], 0, 95U * sizeof(real_T));
  dv2[13062] = 1.0;
  memset(&dv2[13063], 0, 33U * sizeof(real_T));
  dv2[13096] = -1.0;
  memset(&dv2[13097], 0, 704U * sizeof(real_T));
  dv2[13801] = -1.0;
  memset(&dv2[13802], 0, 129U * sizeof(real_T));
  dv2[13931] = 1.0;
  memset(&dv2[13932], 0, 343U * sizeof(real_T));
  dv2[14275] = -1.0;
  memset(&dv2[14276], 0, sizeof(real_T) << 4);
  dv2[14292] = -1.0;
  memset(&dv2[14293], 0, 112U * sizeof(real_T));
  dv2[14405] = -1.0;
  memset(&dv2[14406], 0, sizeof(real_T) << 4);
  dv2[14422] = -1.0;
  memset(&dv2[14423], 0, 112U * sizeof(real_T));
  dv2[14535] = -1.0;
  memset(&dv2[14536], 0, sizeof(real_T) << 4);
  dv2[14552] = -1.0;
  memset(&dv2[14553], 0, 112U * sizeof(real_T));
  dv2[14665] = -1.0;
  memset(&dv2[14666], 0, sizeof(real_T) << 4);
  dv2[14682] = -1.0;
  memset(&dv2[14683], 0, 112U * sizeof(real_T));
  dv2[14795] = -1.0;
  memset(&dv2[14796], 0, sizeof(real_T) << 4);
  dv2[14812] = -1.0;
  memset(&dv2[14813], 0, 112U * sizeof(real_T));
  dv2[14925] = -1.0;
  memset(&dv2[14926], 0, sizeof(real_T) << 4);
  dv2[14942] = -1.0;
  memset(&dv2[14943], 0, 112U * sizeof(real_T));
  dv2[15055] = -1.0;
  memset(&dv2[15056], 0, sizeof(real_T) << 4);
  dv2[15072] = -1.0;
  memset(&dv2[15073], 0, 112U * sizeof(real_T));
  dv2[15185] = -1.0;
  memset(&dv2[15186], 0, sizeof(real_T) << 4);
  dv2[15202] = -1.0;
  memset(&dv2[15203], 0, 112U * sizeof(real_T));
  dv2[15315] = -1.0;
  memset(&dv2[15316], 0, sizeof(real_T) << 4);
  dv2[15332] = -1.0;
  memset(&dv2[15333], 0, 112U * sizeof(real_T));
  dv2[15445] = -1.0;
  memset(&dv2[15446], 0, sizeof(real_T) << 4);
  dv2[15462] = -1.0;
  memset(&dv2[15463], 0, 112U * sizeof(real_T));
  dv2[15575] = -1.0;
  memset(&dv2[15576], 0, sizeof(real_T) << 4);
  dv2[15592] = -1.0;
  memset(&dv2[15593], 0, 112U * sizeof(real_T));
  dv2[15705] = -1.0;
  memset(&dv2[15706], 0, sizeof(real_T) << 4);
  dv2[15722] = -1.0;
  memset(&dv2[15723], 0, 112U * sizeof(real_T));
  dv2[15835] = -1.0;
  memset(&dv2[15836], 0, sizeof(real_T) << 4);
  dv2[15852] = -1.0;
  memset(&dv2[15853], 0, 112U * sizeof(real_T));
  dv2[15965] = -1.0;
  memset(&dv2[15966], 0, sizeof(real_T) << 4);
  dv2[15982] = -1.0;
  memset(&dv2[15983], 0, 112U * sizeof(real_T));
  dv2[16095] = -1.0;
  memset(&dv2[16096], 0, sizeof(real_T) << 4);
  dv2[16112] = -1.0;
  memset(&dv2[16113], 0, 112U * sizeof(real_T));
  dv2[16225] = -1.0;
  memset(&dv2[16226], 0, sizeof(real_T) << 4);
  dv2[16242] = -1.0;
  memset(&dv2[16243], 0, 112U * sizeof(real_T));
  dv2[16355] = -1.0;
  memset(&dv2[16356], 0, sizeof(real_T) << 4);
  dv2[16372] = -1.0;
  memset(&dv2[16373], 0, 2322U * sizeof(real_T));
  dv2[18695] = -1.0;
  dv2[18696] = 0.0;
  dv2[18697] = -1.0;
  memset(&dv2[18698], 0, 127U * sizeof(real_T));
  dv2[18825] = -1.0;
  dv2[18826] = 0.0;
  dv2[18827] = -1.0;
  memset(&dv2[18828], 0, 387U * sizeof(real_T));
  dv2[19215] = -1.0;
  dv2[19216] = 0.0;
  dv2[19217] = -1.0;
  memset(&dv2[19218], 0, 127U * sizeof(real_T));
  dv2[19345] = -1.0;
  dv2[19346] = 0.0;
  dv2[19347] = -1.0;
  memset(&dv2[19348], 0, 1292U * sizeof(real_T));
  for (i2 = 0; i2 < 160; i2++) {
    memcpy(&Aiq[i2 * 129], &dv2[i2 * 129], 129U * sizeof(real_T));
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
  biq[121] = t9;
  biq[122] = t9;
  biq[123] = t10;
  biq[124] = t10;
  biq[125] = t11;
  biq[126] = t11;
  biq[127] = -in9[1];
  biq[128] = -in9[1];
}

/* End of code generation (IqFast_RightStart2V12.cpp) */
