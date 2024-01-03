/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart3V12.cpp
 *
 * Code generation for function 'IqFast_RightStart3V12'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step3.h"
#include "IqFast_RightStart3V12.h"

/* Variable Definitions */
static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V12",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V12.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart3V12(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [20000], real_T biq[125])
{
  int32_T i2;
  real_T dv2[20000];
  real_T t7;
  real_T t3;

  /* IQFAST_RIGHTSTART3V12 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART3V12(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     25-Jul-2023 13:32:37 */
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
  memset(&dv2[103], 0, 148U * sizeof(real_T));
  dv2[251] = -1.0;
  memset(&dv2[252], 0, 33U * sizeof(real_T));
  dv2[285] = 1.0;
  memset(&dv2[286], 0, 33U * sizeof(real_T));
  dv2[319] = -in11[2];
  memset(&dv2[320], 0, 33U * sizeof(real_T));
  dv2[353] = -in11[2];
  memset(&dv2[354], 0, 148U * sizeof(real_T));
  dv2[502] = -1.0;
  memset(&dv2[503], 0, 33U * sizeof(real_T));
  dv2[536] = 1.0;
  memset(&dv2[537], 0, 33U * sizeof(real_T));
  dv2[570] = -in11[2];
  memset(&dv2[571], 0, 33U * sizeof(real_T));
  dv2[604] = -in11[2];
  memset(&dv2[605], 0, 148U * sizeof(real_T));
  dv2[753] = -1.0;
  memset(&dv2[754], 0, 33U * sizeof(real_T));
  dv2[787] = 1.0;
  memset(&dv2[788], 0, 33U * sizeof(real_T));
  dv2[821] = -in11[2];
  memset(&dv2[822], 0, 33U * sizeof(real_T));
  dv2[855] = -in11[2];
  memset(&dv2[856], 0, 148U * sizeof(real_T));
  dv2[1004] = -1.0;
  memset(&dv2[1005], 0, 33U * sizeof(real_T));
  dv2[1038] = 1.0;
  memset(&dv2[1039], 0, 33U * sizeof(real_T));
  dv2[1072] = -in11[2];
  memset(&dv2[1073], 0, 33U * sizeof(real_T));
  dv2[1106] = -in11[2];
  memset(&dv2[1107], 0, 148U * sizeof(real_T));
  dv2[1255] = -1.0;
  memset(&dv2[1256], 0, 33U * sizeof(real_T));
  dv2[1289] = 1.0;
  memset(&dv2[1290], 0, 33U * sizeof(real_T));
  dv2[1323] = -in11[2];
  memset(&dv2[1324], 0, 33U * sizeof(real_T));
  dv2[1357] = -in11[2];
  memset(&dv2[1358], 0, 148U * sizeof(real_T));
  dv2[1506] = -1.0;
  memset(&dv2[1507], 0, 33U * sizeof(real_T));
  dv2[1540] = 1.0;
  memset(&dv2[1541], 0, 33U * sizeof(real_T));
  dv2[1574] = -in11[2];
  memset(&dv2[1575], 0, 33U * sizeof(real_T));
  dv2[1608] = -in11[2];
  memset(&dv2[1609], 0, 148U * sizeof(real_T));
  dv2[1757] = -1.0;
  memset(&dv2[1758], 0, 33U * sizeof(real_T));
  dv2[1791] = 1.0;
  memset(&dv2[1792], 0, 33U * sizeof(real_T));
  dv2[1825] = -in11[2];
  memset(&dv2[1826], 0, 33U * sizeof(real_T));
  dv2[1859] = -in11[2];
  memset(&dv2[1860], 0, 148U * sizeof(real_T));
  dv2[2008] = -1.0;
  memset(&dv2[2009], 0, 33U * sizeof(real_T));
  dv2[2042] = 1.0;
  memset(&dv2[2043], 0, 33U * sizeof(real_T));
  dv2[2076] = -in11[2];
  memset(&dv2[2077], 0, 33U * sizeof(real_T));
  dv2[2110] = -in11[2];
  memset(&dv2[2111], 0, 148U * sizeof(real_T));
  dv2[2259] = -1.0;
  memset(&dv2[2260], 0, 33U * sizeof(real_T));
  dv2[2293] = 1.0;
  memset(&dv2[2294], 0, 33U * sizeof(real_T));
  dv2[2327] = -in11[2];
  memset(&dv2[2328], 0, 33U * sizeof(real_T));
  dv2[2361] = -in11[2];
  memset(&dv2[2362], 0, 148U * sizeof(real_T));
  dv2[2510] = -1.0;
  memset(&dv2[2511], 0, 33U * sizeof(real_T));
  dv2[2544] = 1.0;
  memset(&dv2[2545], 0, 33U * sizeof(real_T));
  dv2[2578] = -in11[2];
  memset(&dv2[2579], 0, 33U * sizeof(real_T));
  dv2[2612] = -in11[2];
  memset(&dv2[2613], 0, 148U * sizeof(real_T));
  dv2[2761] = -1.0;
  memset(&dv2[2762], 0, 33U * sizeof(real_T));
  dv2[2795] = 1.0;
  memset(&dv2[2796], 0, 33U * sizeof(real_T));
  dv2[2829] = -in11[2];
  memset(&dv2[2830], 0, 33U * sizeof(real_T));
  dv2[2863] = -in11[2];
  memset(&dv2[2864], 0, 148U * sizeof(real_T));
  dv2[3012] = -1.0;
  memset(&dv2[3013], 0, 33U * sizeof(real_T));
  dv2[3046] = 1.0;
  memset(&dv2[3047], 0, 33U * sizeof(real_T));
  dv2[3080] = -in11[2];
  memset(&dv2[3081], 0, 33U * sizeof(real_T));
  dv2[3114] = -in11[2];
  memset(&dv2[3115], 0, 148U * sizeof(real_T));
  dv2[3263] = -1.0;
  memset(&dv2[3264], 0, 33U * sizeof(real_T));
  dv2[3297] = 1.0;
  memset(&dv2[3298], 0, 33U * sizeof(real_T));
  dv2[3331] = -in11[2];
  memset(&dv2[3332], 0, 33U * sizeof(real_T));
  dv2[3365] = -in11[2];
  memset(&dv2[3366], 0, 148U * sizeof(real_T));
  dv2[3514] = -1.0;
  memset(&dv2[3515], 0, 33U * sizeof(real_T));
  dv2[3548] = 1.0;
  memset(&dv2[3549], 0, 33U * sizeof(real_T));
  dv2[3582] = -in11[2];
  memset(&dv2[3583], 0, 33U * sizeof(real_T));
  dv2[3616] = -in11[2];
  memset(&dv2[3617], 0, 148U * sizeof(real_T));
  dv2[3765] = -1.0;
  memset(&dv2[3766], 0, 33U * sizeof(real_T));
  dv2[3799] = 1.0;
  memset(&dv2[3800], 0, 33U * sizeof(real_T));
  dv2[3833] = -in11[2];
  memset(&dv2[3834], 0, 33U * sizeof(real_T));
  dv2[3867] = -in11[2];
  memset(&dv2[3868], 0, 148U * sizeof(real_T));
  dv2[4016] = -1.0;
  memset(&dv2[4017], 0, 33U * sizeof(real_T));
  dv2[4050] = 1.0;
  memset(&dv2[4051], 0, 33U * sizeof(real_T));
  dv2[4084] = -in11[2];
  memset(&dv2[4085], 0, 33U * sizeof(real_T));
  dv2[4118] = -in11[2];
  memset(&dv2[4119], 0, 148U * sizeof(real_T));
  dv2[4267] = -1.0;
  memset(&dv2[4268], 0, 33U * sizeof(real_T));
  dv2[4301] = 1.0;
  memset(&dv2[4302], 0, sizeof(real_T) << 4);
  dv2[4318] = -in11[3];
  memset(&dv2[4319], 0, 33U * sizeof(real_T));
  dv2[4352] = -in11[3];
  memset(&dv2[4353], 0, 165U * sizeof(real_T));
  dv2[4518] = -1.0;
  memset(&dv2[4519], 0, 33U * sizeof(real_T));
  dv2[4552] = 1.0;
  memset(&dv2[4553], 0, sizeof(real_T) << 4);
  dv2[4569] = -in11[3];
  memset(&dv2[4570], 0, 33U * sizeof(real_T));
  dv2[4603] = -in11[3];
  memset(&dv2[4604], 0, 165U * sizeof(real_T));
  dv2[4769] = -1.0;
  memset(&dv2[4770], 0, 33U * sizeof(real_T));
  dv2[4803] = 1.0;
  memset(&dv2[4804], 0, sizeof(real_T) << 4);
  dv2[4820] = -in11[3];
  memset(&dv2[4821], 0, 33U * sizeof(real_T));
  dv2[4854] = -in11[3];
  memset(&dv2[4855], 0, 165U * sizeof(real_T));
  dv2[5020] = -1.0;
  memset(&dv2[5021], 0, 33U * sizeof(real_T));
  dv2[5054] = 1.0;
  memset(&dv2[5055], 0, sizeof(real_T) << 4);
  dv2[5071] = -in11[3];
  memset(&dv2[5072], 0, 33U * sizeof(real_T));
  dv2[5105] = -in11[3];
  memset(&dv2[5106], 0, 165U * sizeof(real_T));
  dv2[5271] = -1.0;
  memset(&dv2[5272], 0, 33U * sizeof(real_T));
  dv2[5305] = 1.0;
  memset(&dv2[5306], 0, sizeof(real_T) << 4);
  dv2[5322] = -in11[3];
  memset(&dv2[5323], 0, 33U * sizeof(real_T));
  dv2[5356] = -in11[3];
  memset(&dv2[5357], 0, 165U * sizeof(real_T));
  dv2[5522] = -1.0;
  memset(&dv2[5523], 0, 33U * sizeof(real_T));
  dv2[5556] = 1.0;
  memset(&dv2[5557], 0, sizeof(real_T) << 4);
  dv2[5573] = -in11[3];
  memset(&dv2[5574], 0, 33U * sizeof(real_T));
  dv2[5607] = -in11[3];
  memset(&dv2[5608], 0, 165U * sizeof(real_T));
  dv2[5773] = -1.0;
  memset(&dv2[5774], 0, 33U * sizeof(real_T));
  dv2[5807] = 1.0;
  memset(&dv2[5808], 0, sizeof(real_T) << 4);
  dv2[5824] = -in11[3];
  memset(&dv2[5825], 0, 33U * sizeof(real_T));
  dv2[5858] = -in11[3];
  memset(&dv2[5859], 0, 165U * sizeof(real_T));
  dv2[6024] = -1.0;
  memset(&dv2[6025], 0, 33U * sizeof(real_T));
  dv2[6058] = 1.0;
  memset(&dv2[6059], 0, sizeof(real_T) << 4);
  dv2[6075] = -in11[3];
  memset(&dv2[6076], 0, 33U * sizeof(real_T));
  dv2[6109] = -in11[3];
  memset(&dv2[6110], 0, 165U * sizeof(real_T));
  dv2[6275] = -1.0;
  memset(&dv2[6276], 0, 33U * sizeof(real_T));
  dv2[6309] = 1.0;
  memset(&dv2[6310], 0, sizeof(real_T) << 4);
  dv2[6326] = -in11[3];
  memset(&dv2[6327], 0, 33U * sizeof(real_T));
  dv2[6360] = -in11[3];
  memset(&dv2[6361], 0, 165U * sizeof(real_T));
  dv2[6526] = -1.0;
  memset(&dv2[6527], 0, 33U * sizeof(real_T));
  dv2[6560] = 1.0;
  memset(&dv2[6561], 0, sizeof(real_T) << 4);
  dv2[6577] = -in11[3];
  memset(&dv2[6578], 0, 33U * sizeof(real_T));
  dv2[6611] = -in11[3];
  memset(&dv2[6612], 0, 165U * sizeof(real_T));
  dv2[6777] = -1.0;
  memset(&dv2[6778], 0, 33U * sizeof(real_T));
  dv2[6811] = 1.0;
  memset(&dv2[6812], 0, sizeof(real_T) << 4);
  dv2[6828] = -in11[3];
  memset(&dv2[6829], 0, 33U * sizeof(real_T));
  dv2[6862] = -in11[3];
  memset(&dv2[6863], 0, 165U * sizeof(real_T));
  dv2[7028] = -1.0;
  memset(&dv2[7029], 0, 33U * sizeof(real_T));
  dv2[7062] = 1.0;
  memset(&dv2[7063], 0, sizeof(real_T) << 4);
  dv2[7079] = -in11[3];
  memset(&dv2[7080], 0, 33U * sizeof(real_T));
  dv2[7113] = -in11[3];
  memset(&dv2[7114], 0, 165U * sizeof(real_T));
  dv2[7279] = -1.0;
  memset(&dv2[7280], 0, 33U * sizeof(real_T));
  dv2[7313] = 1.0;
  memset(&dv2[7314], 0, sizeof(real_T) << 4);
  dv2[7330] = -in11[3];
  memset(&dv2[7331], 0, 33U * sizeof(real_T));
  dv2[7364] = -in11[3];
  memset(&dv2[7365], 0, 165U * sizeof(real_T));
  dv2[7530] = -1.0;
  memset(&dv2[7531], 0, 33U * sizeof(real_T));
  dv2[7564] = 1.0;
  memset(&dv2[7565], 0, sizeof(real_T) << 4);
  dv2[7581] = -in11[3];
  memset(&dv2[7582], 0, 33U * sizeof(real_T));
  dv2[7615] = -in11[3];
  memset(&dv2[7616], 0, 165U * sizeof(real_T));
  dv2[7781] = -1.0;
  memset(&dv2[7782], 0, 33U * sizeof(real_T));
  dv2[7815] = 1.0;
  memset(&dv2[7816], 0, sizeof(real_T) << 4);
  dv2[7832] = -in11[3];
  memset(&dv2[7833], 0, 33U * sizeof(real_T));
  dv2[7866] = -in11[3];
  memset(&dv2[7867], 0, 165U * sizeof(real_T));
  dv2[8032] = -1.0;
  memset(&dv2[8033], 0, 33U * sizeof(real_T));
  dv2[8066] = 1.0;
  memset(&dv2[8067], 0, sizeof(real_T) << 4);
  dv2[8083] = -in11[3];
  memset(&dv2[8084], 0, 33U * sizeof(real_T));
  dv2[8117] = -in11[3];
  memset(&dv2[8118], 0, 165U * sizeof(real_T));
  dv2[8283] = -1.0;
  memset(&dv2[8284], 0, 33U * sizeof(real_T));
  dv2[8317] = 1.0;
  memset(&dv2[8318], 0, sizeof(real_T) << 4);
  dv2[8334] = -in11[3];
  memset(&dv2[8335], 0, 33U * sizeof(real_T));
  dv2[8368] = -in11[3];
  memset(&dv2[8369], 0, 131U * sizeof(real_T));
  dv2[8500] = 1.0;
  memset(&dv2[8501], 0, 33U * sizeof(real_T));
  dv2[8534] = -1.0;
  memset(&dv2[8535], 0, 84U * sizeof(real_T));
  dv2[8619] = 1.0;
  dv2[8620] = -1.0;
  dv2[8621] = 0.0;
  dv2[8622] = 0.0;
  dv2[8623] = 0.0;
  dv2[8624] = 0.0;
  dv2[8625] = 0.0;
  dv2[8626] = 1.0;
  memset(&dv2[8627], 0, 33U * sizeof(real_T));
  dv2[8660] = -1.0;
  memset(&dv2[8661], 0, 91U * sizeof(real_T));
  dv2[8752] = 1.0;
  memset(&dv2[8753], 0, 33U * sizeof(real_T));
  dv2[8786] = -1.0;
  memset(&dv2[8787], 0, 91U * sizeof(real_T));
  dv2[8878] = 1.0;
  memset(&dv2[8879], 0, 33U * sizeof(real_T));
  dv2[8912] = -1.0;
  memset(&dv2[8913], 0, 91U * sizeof(real_T));
  dv2[9004] = 1.0;
  memset(&dv2[9005], 0, 33U * sizeof(real_T));
  dv2[9038] = -1.0;
  memset(&dv2[9039], 0, 91U * sizeof(real_T));
  dv2[9130] = 1.0;
  memset(&dv2[9131], 0, 33U * sizeof(real_T));
  dv2[9164] = -1.0;
  memset(&dv2[9165], 0, 91U * sizeof(real_T));
  dv2[9256] = 1.0;
  memset(&dv2[9257], 0, 33U * sizeof(real_T));
  dv2[9290] = -1.0;
  memset(&dv2[9291], 0, 91U * sizeof(real_T));
  dv2[9382] = 1.0;
  memset(&dv2[9383], 0, 33U * sizeof(real_T));
  dv2[9416] = -1.0;
  memset(&dv2[9417], 0, 91U * sizeof(real_T));
  dv2[9508] = 1.0;
  memset(&dv2[9509], 0, 33U * sizeof(real_T));
  dv2[9542] = -1.0;
  memset(&dv2[9543], 0, 91U * sizeof(real_T));
  dv2[9634] = 1.0;
  memset(&dv2[9635], 0, 33U * sizeof(real_T));
  dv2[9668] = -1.0;
  memset(&dv2[9669], 0, 91U * sizeof(real_T));
  dv2[9760] = 1.0;
  memset(&dv2[9761], 0, 33U * sizeof(real_T));
  dv2[9794] = -1.0;
  memset(&dv2[9795], 0, 91U * sizeof(real_T));
  dv2[9886] = 1.0;
  memset(&dv2[9887], 0, 33U * sizeof(real_T));
  dv2[9920] = -1.0;
  memset(&dv2[9921], 0, 91U * sizeof(real_T));
  dv2[10012] = 1.0;
  memset(&dv2[10013], 0, 33U * sizeof(real_T));
  dv2[10046] = -1.0;
  memset(&dv2[10047], 0, 91U * sizeof(real_T));
  dv2[10138] = 1.0;
  memset(&dv2[10139], 0, 33U * sizeof(real_T));
  dv2[10172] = -1.0;
  memset(&dv2[10173], 0, 91U * sizeof(real_T));
  dv2[10264] = 1.0;
  memset(&dv2[10265], 0, 33U * sizeof(real_T));
  dv2[10298] = -1.0;
  memset(&dv2[10299], 0, 91U * sizeof(real_T));
  dv2[10390] = 1.0;
  memset(&dv2[10391], 0, 33U * sizeof(real_T));
  dv2[10424] = -1.0;
  memset(&dv2[10425], 0, 91U * sizeof(real_T));
  dv2[10516] = 1.0;
  memset(&dv2[10517], 0, 33U * sizeof(real_T));
  dv2[10550] = -1.0;
  memset(&dv2[10551], 0, 91U * sizeof(real_T));
  dv2[10642] = 1.0;
  memset(&dv2[10643], 0, 33U * sizeof(real_T));
  dv2[10676] = -1.0;
  memset(&dv2[10677], 0, 69U * sizeof(real_T));
  dv2[10746] = 1.0;
  dv2[10747] = -1.0;
  memset(&dv2[10748], 0, 20U * sizeof(real_T));
  dv2[10768] = 1.0;
  memset(&dv2[10769], 0, 33U * sizeof(real_T));
  dv2[10802] = -1.0;
  memset(&dv2[10803], 0, 91U * sizeof(real_T));
  dv2[10894] = 1.0;
  memset(&dv2[10895], 0, 33U * sizeof(real_T));
  dv2[10928] = -1.0;
  memset(&dv2[10929], 0, 91U * sizeof(real_T));
  dv2[11020] = 1.0;
  memset(&dv2[11021], 0, 33U * sizeof(real_T));
  dv2[11054] = -1.0;
  memset(&dv2[11055], 0, 91U * sizeof(real_T));
  dv2[11146] = 1.0;
  memset(&dv2[11147], 0, 33U * sizeof(real_T));
  dv2[11180] = -1.0;
  memset(&dv2[11181], 0, 91U * sizeof(real_T));
  dv2[11272] = 1.0;
  memset(&dv2[11273], 0, 33U * sizeof(real_T));
  dv2[11306] = -1.0;
  memset(&dv2[11307], 0, 91U * sizeof(real_T));
  dv2[11398] = 1.0;
  memset(&dv2[11399], 0, 33U * sizeof(real_T));
  dv2[11432] = -1.0;
  memset(&dv2[11433], 0, 91U * sizeof(real_T));
  dv2[11524] = 1.0;
  memset(&dv2[11525], 0, 33U * sizeof(real_T));
  dv2[11558] = -1.0;
  memset(&dv2[11559], 0, 91U * sizeof(real_T));
  dv2[11650] = 1.0;
  memset(&dv2[11651], 0, 33U * sizeof(real_T));
  dv2[11684] = -1.0;
  memset(&dv2[11685], 0, 91U * sizeof(real_T));
  dv2[11776] = 1.0;
  memset(&dv2[11777], 0, 33U * sizeof(real_T));
  dv2[11810] = -1.0;
  memset(&dv2[11811], 0, 91U * sizeof(real_T));
  dv2[11902] = 1.0;
  memset(&dv2[11903], 0, 33U * sizeof(real_T));
  dv2[11936] = -1.0;
  memset(&dv2[11937], 0, 91U * sizeof(real_T));
  dv2[12028] = 1.0;
  memset(&dv2[12029], 0, 33U * sizeof(real_T));
  dv2[12062] = -1.0;
  memset(&dv2[12063], 0, 91U * sizeof(real_T));
  dv2[12154] = 1.0;
  memset(&dv2[12155], 0, 33U * sizeof(real_T));
  dv2[12188] = -1.0;
  memset(&dv2[12189], 0, 91U * sizeof(real_T));
  dv2[12280] = 1.0;
  memset(&dv2[12281], 0, 33U * sizeof(real_T));
  dv2[12314] = -1.0;
  memset(&dv2[12315], 0, 91U * sizeof(real_T));
  dv2[12406] = 1.0;
  memset(&dv2[12407], 0, 33U * sizeof(real_T));
  dv2[12440] = -1.0;
  memset(&dv2[12441], 0, 91U * sizeof(real_T));
  dv2[12532] = 1.0;
  memset(&dv2[12533], 0, 33U * sizeof(real_T));
  dv2[12566] = -1.0;
  memset(&dv2[12567], 0, 91U * sizeof(real_T));
  dv2[12658] = 1.0;
  memset(&dv2[12659], 0, 33U * sizeof(real_T));
  dv2[12692] = -1.0;
  memset(&dv2[12693], 0, 680U * sizeof(real_T));
  dv2[13373] = -1.0;
  memset(&dv2[13374], 0, 125U * sizeof(real_T));
  dv2[13499] = 1.0;
  memset(&dv2[13500], 0, 335U * sizeof(real_T));
  dv2[13835] = -1.0;
  memset(&dv2[13836], 0, sizeof(real_T) << 4);
  dv2[13852] = -1.0;
  memset(&dv2[13853], 0, 108U * sizeof(real_T));
  dv2[13961] = -1.0;
  memset(&dv2[13962], 0, sizeof(real_T) << 4);
  dv2[13978] = -1.0;
  memset(&dv2[13979], 0, 108U * sizeof(real_T));
  dv2[14087] = -1.0;
  memset(&dv2[14088], 0, sizeof(real_T) << 4);
  dv2[14104] = -1.0;
  memset(&dv2[14105], 0, 108U * sizeof(real_T));
  dv2[14213] = -1.0;
  memset(&dv2[14214], 0, sizeof(real_T) << 4);
  dv2[14230] = -1.0;
  memset(&dv2[14231], 0, 108U * sizeof(real_T));
  dv2[14339] = -1.0;
  memset(&dv2[14340], 0, sizeof(real_T) << 4);
  dv2[14356] = -1.0;
  memset(&dv2[14357], 0, 108U * sizeof(real_T));
  dv2[14465] = -1.0;
  memset(&dv2[14466], 0, sizeof(real_T) << 4);
  dv2[14482] = -1.0;
  memset(&dv2[14483], 0, 108U * sizeof(real_T));
  dv2[14591] = -1.0;
  memset(&dv2[14592], 0, sizeof(real_T) << 4);
  dv2[14608] = -1.0;
  memset(&dv2[14609], 0, 108U * sizeof(real_T));
  dv2[14717] = -1.0;
  memset(&dv2[14718], 0, sizeof(real_T) << 4);
  dv2[14734] = -1.0;
  memset(&dv2[14735], 0, 108U * sizeof(real_T));
  dv2[14843] = -1.0;
  memset(&dv2[14844], 0, sizeof(real_T) << 4);
  dv2[14860] = -1.0;
  memset(&dv2[14861], 0, 108U * sizeof(real_T));
  dv2[14969] = -1.0;
  memset(&dv2[14970], 0, sizeof(real_T) << 4);
  dv2[14986] = -1.0;
  memset(&dv2[14987], 0, 108U * sizeof(real_T));
  dv2[15095] = -1.0;
  memset(&dv2[15096], 0, sizeof(real_T) << 4);
  dv2[15112] = -1.0;
  memset(&dv2[15113], 0, 108U * sizeof(real_T));
  dv2[15221] = -1.0;
  memset(&dv2[15222], 0, sizeof(real_T) << 4);
  dv2[15238] = -1.0;
  memset(&dv2[15239], 0, 108U * sizeof(real_T));
  dv2[15347] = -1.0;
  memset(&dv2[15348], 0, sizeof(real_T) << 4);
  dv2[15364] = -1.0;
  memset(&dv2[15365], 0, 108U * sizeof(real_T));
  dv2[15473] = -1.0;
  memset(&dv2[15474], 0, sizeof(real_T) << 4);
  dv2[15490] = -1.0;
  memset(&dv2[15491], 0, 108U * sizeof(real_T));
  dv2[15599] = -1.0;
  memset(&dv2[15600], 0, sizeof(real_T) << 4);
  dv2[15616] = -1.0;
  memset(&dv2[15617], 0, 108U * sizeof(real_T));
  dv2[15725] = -1.0;
  memset(&dv2[15726], 0, sizeof(real_T) << 4);
  dv2[15742] = -1.0;
  memset(&dv2[15743], 0, 108U * sizeof(real_T));
  dv2[15851] = -1.0;
  memset(&dv2[15852], 0, sizeof(real_T) << 4);
  dv2[15868] = -1.0;
  memset(&dv2[15869], 0, 2250U * sizeof(real_T));
  dv2[18119] = -1.0;
  dv2[18120] = -1.0;
  memset(&dv2[18121], 0, 500U * sizeof(real_T));
  dv2[18621] = -1.0;
  dv2[18622] = -1.0;
  memset(&dv2[18623], 0, 1377U * sizeof(real_T));
  for (i2 = 0; i2 < 160; i2++) {
    memcpy(&Aiq[i2 * 125], &dv2[i2 * 125], 125U * sizeof(real_T));
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
  biq[119] = Cpx1 + in8[0];
  biq[120] = -Cpx1 + in8[0];
  biq[121] = Cpy1 + in9[0];
  biq[122] = -Cpy1 + in9[0];
  biq[123] = -in9[1];
  biq[124] = -in9[1];
}

/* End of code generation (IqFast_RightStart3V12.cpp) */
