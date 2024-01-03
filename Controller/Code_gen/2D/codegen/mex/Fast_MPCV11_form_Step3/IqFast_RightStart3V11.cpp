/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart3V11.cpp
 *
 * Code generation for function 'IqFast_RightStart3V11'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV11_form_Step3.h"
#include "IqFast_RightStart3V11.h"

/* Variable Definitions */
static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart3V11",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart3V11.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart3V11(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [19840], real_T biq[124])
{
  int32_T i2;
  real_T dv2[19840];
  real_T t7;
  real_T t3;

  /* IQFAST_RIGHTSTART3V11 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART3V11(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     24-Jul-2023 20:43:43 */
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
  memset(&dv2[103], 0, 146U * sizeof(real_T));
  dv2[249] = -1.0;
  memset(&dv2[250], 0, 33U * sizeof(real_T));
  dv2[283] = 1.0;
  memset(&dv2[284], 0, 33U * sizeof(real_T));
  dv2[317] = -in11[2];
  memset(&dv2[318], 0, 33U * sizeof(real_T));
  dv2[351] = -in11[2];
  memset(&dv2[352], 0, 146U * sizeof(real_T));
  dv2[498] = -1.0;
  memset(&dv2[499], 0, 33U * sizeof(real_T));
  dv2[532] = 1.0;
  memset(&dv2[533], 0, 33U * sizeof(real_T));
  dv2[566] = -in11[2];
  memset(&dv2[567], 0, 33U * sizeof(real_T));
  dv2[600] = -in11[2];
  memset(&dv2[601], 0, 146U * sizeof(real_T));
  dv2[747] = -1.0;
  memset(&dv2[748], 0, 33U * sizeof(real_T));
  dv2[781] = 1.0;
  memset(&dv2[782], 0, 33U * sizeof(real_T));
  dv2[815] = -in11[2];
  memset(&dv2[816], 0, 33U * sizeof(real_T));
  dv2[849] = -in11[2];
  memset(&dv2[850], 0, 146U * sizeof(real_T));
  dv2[996] = -1.0;
  memset(&dv2[997], 0, 33U * sizeof(real_T));
  dv2[1030] = 1.0;
  memset(&dv2[1031], 0, 33U * sizeof(real_T));
  dv2[1064] = -in11[2];
  memset(&dv2[1065], 0, 33U * sizeof(real_T));
  dv2[1098] = -in11[2];
  memset(&dv2[1099], 0, 146U * sizeof(real_T));
  dv2[1245] = -1.0;
  memset(&dv2[1246], 0, 33U * sizeof(real_T));
  dv2[1279] = 1.0;
  memset(&dv2[1280], 0, 33U * sizeof(real_T));
  dv2[1313] = -in11[2];
  memset(&dv2[1314], 0, 33U * sizeof(real_T));
  dv2[1347] = -in11[2];
  memset(&dv2[1348], 0, 146U * sizeof(real_T));
  dv2[1494] = -1.0;
  memset(&dv2[1495], 0, 33U * sizeof(real_T));
  dv2[1528] = 1.0;
  memset(&dv2[1529], 0, 33U * sizeof(real_T));
  dv2[1562] = -in11[2];
  memset(&dv2[1563], 0, 33U * sizeof(real_T));
  dv2[1596] = -in11[2];
  memset(&dv2[1597], 0, 146U * sizeof(real_T));
  dv2[1743] = -1.0;
  memset(&dv2[1744], 0, 33U * sizeof(real_T));
  dv2[1777] = 1.0;
  memset(&dv2[1778], 0, 33U * sizeof(real_T));
  dv2[1811] = -in11[2];
  memset(&dv2[1812], 0, 33U * sizeof(real_T));
  dv2[1845] = -in11[2];
  memset(&dv2[1846], 0, 146U * sizeof(real_T));
  dv2[1992] = -1.0;
  memset(&dv2[1993], 0, 33U * sizeof(real_T));
  dv2[2026] = 1.0;
  memset(&dv2[2027], 0, 33U * sizeof(real_T));
  dv2[2060] = -in11[2];
  memset(&dv2[2061], 0, 33U * sizeof(real_T));
  dv2[2094] = -in11[2];
  memset(&dv2[2095], 0, 146U * sizeof(real_T));
  dv2[2241] = -1.0;
  memset(&dv2[2242], 0, 33U * sizeof(real_T));
  dv2[2275] = 1.0;
  memset(&dv2[2276], 0, 33U * sizeof(real_T));
  dv2[2309] = -in11[2];
  memset(&dv2[2310], 0, 33U * sizeof(real_T));
  dv2[2343] = -in11[2];
  memset(&dv2[2344], 0, 146U * sizeof(real_T));
  dv2[2490] = -1.0;
  memset(&dv2[2491], 0, 33U * sizeof(real_T));
  dv2[2524] = 1.0;
  memset(&dv2[2525], 0, 33U * sizeof(real_T));
  dv2[2558] = -in11[2];
  memset(&dv2[2559], 0, 33U * sizeof(real_T));
  dv2[2592] = -in11[2];
  memset(&dv2[2593], 0, 146U * sizeof(real_T));
  dv2[2739] = -1.0;
  memset(&dv2[2740], 0, 33U * sizeof(real_T));
  dv2[2773] = 1.0;
  memset(&dv2[2774], 0, 33U * sizeof(real_T));
  dv2[2807] = -in11[2];
  memset(&dv2[2808], 0, 33U * sizeof(real_T));
  dv2[2841] = -in11[2];
  memset(&dv2[2842], 0, 146U * sizeof(real_T));
  dv2[2988] = -1.0;
  memset(&dv2[2989], 0, 33U * sizeof(real_T));
  dv2[3022] = 1.0;
  memset(&dv2[3023], 0, 33U * sizeof(real_T));
  dv2[3056] = -in11[2];
  memset(&dv2[3057], 0, 33U * sizeof(real_T));
  dv2[3090] = -in11[2];
  memset(&dv2[3091], 0, 146U * sizeof(real_T));
  dv2[3237] = -1.0;
  memset(&dv2[3238], 0, 33U * sizeof(real_T));
  dv2[3271] = 1.0;
  memset(&dv2[3272], 0, 33U * sizeof(real_T));
  dv2[3305] = -in11[2];
  memset(&dv2[3306], 0, 33U * sizeof(real_T));
  dv2[3339] = -in11[2];
  memset(&dv2[3340], 0, 146U * sizeof(real_T));
  dv2[3486] = -1.0;
  memset(&dv2[3487], 0, 33U * sizeof(real_T));
  dv2[3520] = 1.0;
  memset(&dv2[3521], 0, 33U * sizeof(real_T));
  dv2[3554] = -in11[2];
  memset(&dv2[3555], 0, 33U * sizeof(real_T));
  dv2[3588] = -in11[2];
  memset(&dv2[3589], 0, 146U * sizeof(real_T));
  dv2[3735] = -1.0;
  memset(&dv2[3736], 0, 33U * sizeof(real_T));
  dv2[3769] = 1.0;
  memset(&dv2[3770], 0, 33U * sizeof(real_T));
  dv2[3803] = -in11[2];
  memset(&dv2[3804], 0, 33U * sizeof(real_T));
  dv2[3837] = -in11[2];
  memset(&dv2[3838], 0, 146U * sizeof(real_T));
  dv2[3984] = -1.0;
  memset(&dv2[3985], 0, 33U * sizeof(real_T));
  dv2[4018] = 1.0;
  memset(&dv2[4019], 0, 33U * sizeof(real_T));
  dv2[4052] = -in11[2];
  memset(&dv2[4053], 0, 33U * sizeof(real_T));
  dv2[4086] = -in11[2];
  memset(&dv2[4087], 0, 146U * sizeof(real_T));
  dv2[4233] = -1.0;
  memset(&dv2[4234], 0, 33U * sizeof(real_T));
  dv2[4267] = 1.0;
  memset(&dv2[4268], 0, sizeof(real_T) << 4);
  dv2[4284] = -in11[3];
  memset(&dv2[4285], 0, 33U * sizeof(real_T));
  dv2[4318] = -in11[3];
  memset(&dv2[4319], 0, 163U * sizeof(real_T));
  dv2[4482] = -1.0;
  memset(&dv2[4483], 0, 33U * sizeof(real_T));
  dv2[4516] = 1.0;
  memset(&dv2[4517], 0, sizeof(real_T) << 4);
  dv2[4533] = -in11[3];
  memset(&dv2[4534], 0, 33U * sizeof(real_T));
  dv2[4567] = -in11[3];
  memset(&dv2[4568], 0, 163U * sizeof(real_T));
  dv2[4731] = -1.0;
  memset(&dv2[4732], 0, 33U * sizeof(real_T));
  dv2[4765] = 1.0;
  memset(&dv2[4766], 0, sizeof(real_T) << 4);
  dv2[4782] = -in11[3];
  memset(&dv2[4783], 0, 33U * sizeof(real_T));
  dv2[4816] = -in11[3];
  memset(&dv2[4817], 0, 163U * sizeof(real_T));
  dv2[4980] = -1.0;
  memset(&dv2[4981], 0, 33U * sizeof(real_T));
  dv2[5014] = 1.0;
  memset(&dv2[5015], 0, sizeof(real_T) << 4);
  dv2[5031] = -in11[3];
  memset(&dv2[5032], 0, 33U * sizeof(real_T));
  dv2[5065] = -in11[3];
  memset(&dv2[5066], 0, 163U * sizeof(real_T));
  dv2[5229] = -1.0;
  memset(&dv2[5230], 0, 33U * sizeof(real_T));
  dv2[5263] = 1.0;
  memset(&dv2[5264], 0, sizeof(real_T) << 4);
  dv2[5280] = -in11[3];
  memset(&dv2[5281], 0, 33U * sizeof(real_T));
  dv2[5314] = -in11[3];
  memset(&dv2[5315], 0, 163U * sizeof(real_T));
  dv2[5478] = -1.0;
  memset(&dv2[5479], 0, 33U * sizeof(real_T));
  dv2[5512] = 1.0;
  memset(&dv2[5513], 0, sizeof(real_T) << 4);
  dv2[5529] = -in11[3];
  memset(&dv2[5530], 0, 33U * sizeof(real_T));
  dv2[5563] = -in11[3];
  memset(&dv2[5564], 0, 163U * sizeof(real_T));
  dv2[5727] = -1.0;
  memset(&dv2[5728], 0, 33U * sizeof(real_T));
  dv2[5761] = 1.0;
  memset(&dv2[5762], 0, sizeof(real_T) << 4);
  dv2[5778] = -in11[3];
  memset(&dv2[5779], 0, 33U * sizeof(real_T));
  dv2[5812] = -in11[3];
  memset(&dv2[5813], 0, 163U * sizeof(real_T));
  dv2[5976] = -1.0;
  memset(&dv2[5977], 0, 33U * sizeof(real_T));
  dv2[6010] = 1.0;
  memset(&dv2[6011], 0, sizeof(real_T) << 4);
  dv2[6027] = -in11[3];
  memset(&dv2[6028], 0, 33U * sizeof(real_T));
  dv2[6061] = -in11[3];
  memset(&dv2[6062], 0, 163U * sizeof(real_T));
  dv2[6225] = -1.0;
  memset(&dv2[6226], 0, 33U * sizeof(real_T));
  dv2[6259] = 1.0;
  memset(&dv2[6260], 0, sizeof(real_T) << 4);
  dv2[6276] = -in11[3];
  memset(&dv2[6277], 0, 33U * sizeof(real_T));
  dv2[6310] = -in11[3];
  memset(&dv2[6311], 0, 163U * sizeof(real_T));
  dv2[6474] = -1.0;
  memset(&dv2[6475], 0, 33U * sizeof(real_T));
  dv2[6508] = 1.0;
  memset(&dv2[6509], 0, sizeof(real_T) << 4);
  dv2[6525] = -in11[3];
  memset(&dv2[6526], 0, 33U * sizeof(real_T));
  dv2[6559] = -in11[3];
  memset(&dv2[6560], 0, 163U * sizeof(real_T));
  dv2[6723] = -1.0;
  memset(&dv2[6724], 0, 33U * sizeof(real_T));
  dv2[6757] = 1.0;
  memset(&dv2[6758], 0, sizeof(real_T) << 4);
  dv2[6774] = -in11[3];
  memset(&dv2[6775], 0, 33U * sizeof(real_T));
  dv2[6808] = -in11[3];
  memset(&dv2[6809], 0, 163U * sizeof(real_T));
  dv2[6972] = -1.0;
  memset(&dv2[6973], 0, 33U * sizeof(real_T));
  dv2[7006] = 1.0;
  memset(&dv2[7007], 0, sizeof(real_T) << 4);
  dv2[7023] = -in11[3];
  memset(&dv2[7024], 0, 33U * sizeof(real_T));
  dv2[7057] = -in11[3];
  memset(&dv2[7058], 0, 163U * sizeof(real_T));
  dv2[7221] = -1.0;
  memset(&dv2[7222], 0, 33U * sizeof(real_T));
  dv2[7255] = 1.0;
  memset(&dv2[7256], 0, sizeof(real_T) << 4);
  dv2[7272] = -in11[3];
  memset(&dv2[7273], 0, 33U * sizeof(real_T));
  dv2[7306] = -in11[3];
  memset(&dv2[7307], 0, 163U * sizeof(real_T));
  dv2[7470] = -1.0;
  memset(&dv2[7471], 0, 33U * sizeof(real_T));
  dv2[7504] = 1.0;
  memset(&dv2[7505], 0, sizeof(real_T) << 4);
  dv2[7521] = -in11[3];
  memset(&dv2[7522], 0, 33U * sizeof(real_T));
  dv2[7555] = -in11[3];
  memset(&dv2[7556], 0, 163U * sizeof(real_T));
  dv2[7719] = -1.0;
  memset(&dv2[7720], 0, 33U * sizeof(real_T));
  dv2[7753] = 1.0;
  memset(&dv2[7754], 0, sizeof(real_T) << 4);
  dv2[7770] = -in11[3];
  memset(&dv2[7771], 0, 33U * sizeof(real_T));
  dv2[7804] = -in11[3];
  memset(&dv2[7805], 0, 163U * sizeof(real_T));
  dv2[7968] = -1.0;
  memset(&dv2[7969], 0, 33U * sizeof(real_T));
  dv2[8002] = 1.0;
  memset(&dv2[8003], 0, sizeof(real_T) << 4);
  dv2[8019] = -in11[3];
  memset(&dv2[8020], 0, 33U * sizeof(real_T));
  dv2[8053] = -in11[3];
  memset(&dv2[8054], 0, 163U * sizeof(real_T));
  dv2[8217] = -1.0;
  memset(&dv2[8218], 0, 33U * sizeof(real_T));
  dv2[8251] = 1.0;
  memset(&dv2[8252], 0, sizeof(real_T) << 4);
  dv2[8268] = -in11[3];
  memset(&dv2[8269], 0, 33U * sizeof(real_T));
  dv2[8302] = -in11[3];
  memset(&dv2[8303], 0, 129U * sizeof(real_T));
  dv2[8432] = 1.0;
  memset(&dv2[8433], 0, 33U * sizeof(real_T));
  dv2[8466] = -1.0;
  memset(&dv2[8467], 0, 84U * sizeof(real_T));
  dv2[8551] = 1.0;
  dv2[8552] = -1.0;
  dv2[8553] = 0.0;
  dv2[8554] = 0.0;
  dv2[8555] = 0.0;
  dv2[8556] = 0.0;
  dv2[8557] = 1.0;
  memset(&dv2[8558], 0, 33U * sizeof(real_T));
  dv2[8591] = -1.0;
  memset(&dv2[8592], 0, 90U * sizeof(real_T));
  dv2[8682] = 1.0;
  memset(&dv2[8683], 0, 33U * sizeof(real_T));
  dv2[8716] = -1.0;
  memset(&dv2[8717], 0, 90U * sizeof(real_T));
  dv2[8807] = 1.0;
  memset(&dv2[8808], 0, 33U * sizeof(real_T));
  dv2[8841] = -1.0;
  memset(&dv2[8842], 0, 90U * sizeof(real_T));
  dv2[8932] = 1.0;
  memset(&dv2[8933], 0, 33U * sizeof(real_T));
  dv2[8966] = -1.0;
  memset(&dv2[8967], 0, 90U * sizeof(real_T));
  dv2[9057] = 1.0;
  memset(&dv2[9058], 0, 33U * sizeof(real_T));
  dv2[9091] = -1.0;
  memset(&dv2[9092], 0, 90U * sizeof(real_T));
  dv2[9182] = 1.0;
  memset(&dv2[9183], 0, 33U * sizeof(real_T));
  dv2[9216] = -1.0;
  memset(&dv2[9217], 0, 90U * sizeof(real_T));
  dv2[9307] = 1.0;
  memset(&dv2[9308], 0, 33U * sizeof(real_T));
  dv2[9341] = -1.0;
  memset(&dv2[9342], 0, 90U * sizeof(real_T));
  dv2[9432] = 1.0;
  memset(&dv2[9433], 0, 33U * sizeof(real_T));
  dv2[9466] = -1.0;
  memset(&dv2[9467], 0, 90U * sizeof(real_T));
  dv2[9557] = 1.0;
  memset(&dv2[9558], 0, 33U * sizeof(real_T));
  dv2[9591] = -1.0;
  memset(&dv2[9592], 0, 90U * sizeof(real_T));
  dv2[9682] = 1.0;
  memset(&dv2[9683], 0, 33U * sizeof(real_T));
  dv2[9716] = -1.0;
  memset(&dv2[9717], 0, 90U * sizeof(real_T));
  dv2[9807] = 1.0;
  memset(&dv2[9808], 0, 33U * sizeof(real_T));
  dv2[9841] = -1.0;
  memset(&dv2[9842], 0, 90U * sizeof(real_T));
  dv2[9932] = 1.0;
  memset(&dv2[9933], 0, 33U * sizeof(real_T));
  dv2[9966] = -1.0;
  memset(&dv2[9967], 0, 90U * sizeof(real_T));
  dv2[10057] = 1.0;
  memset(&dv2[10058], 0, 33U * sizeof(real_T));
  dv2[10091] = -1.0;
  memset(&dv2[10092], 0, 90U * sizeof(real_T));
  dv2[10182] = 1.0;
  memset(&dv2[10183], 0, 33U * sizeof(real_T));
  dv2[10216] = -1.0;
  memset(&dv2[10217], 0, 90U * sizeof(real_T));
  dv2[10307] = 1.0;
  memset(&dv2[10308], 0, 33U * sizeof(real_T));
  dv2[10341] = -1.0;
  memset(&dv2[10342], 0, 90U * sizeof(real_T));
  dv2[10432] = 1.0;
  memset(&dv2[10433], 0, 33U * sizeof(real_T));
  dv2[10466] = -1.0;
  memset(&dv2[10467], 0, 90U * sizeof(real_T));
  dv2[10557] = 1.0;
  memset(&dv2[10558], 0, 33U * sizeof(real_T));
  dv2[10591] = -1.0;
  memset(&dv2[10592], 0, 69U * sizeof(real_T));
  dv2[10661] = 1.0;
  dv2[10662] = -1.0;
  memset(&dv2[10663], 0, 19U * sizeof(real_T));
  dv2[10682] = 1.0;
  memset(&dv2[10683], 0, 33U * sizeof(real_T));
  dv2[10716] = -1.0;
  memset(&dv2[10717], 0, 90U * sizeof(real_T));
  dv2[10807] = 1.0;
  memset(&dv2[10808], 0, 33U * sizeof(real_T));
  dv2[10841] = -1.0;
  memset(&dv2[10842], 0, 90U * sizeof(real_T));
  dv2[10932] = 1.0;
  memset(&dv2[10933], 0, 33U * sizeof(real_T));
  dv2[10966] = -1.0;
  memset(&dv2[10967], 0, 90U * sizeof(real_T));
  dv2[11057] = 1.0;
  memset(&dv2[11058], 0, 33U * sizeof(real_T));
  dv2[11091] = -1.0;
  memset(&dv2[11092], 0, 90U * sizeof(real_T));
  dv2[11182] = 1.0;
  memset(&dv2[11183], 0, 33U * sizeof(real_T));
  dv2[11216] = -1.0;
  memset(&dv2[11217], 0, 90U * sizeof(real_T));
  dv2[11307] = 1.0;
  memset(&dv2[11308], 0, 33U * sizeof(real_T));
  dv2[11341] = -1.0;
  memset(&dv2[11342], 0, 90U * sizeof(real_T));
  dv2[11432] = 1.0;
  memset(&dv2[11433], 0, 33U * sizeof(real_T));
  dv2[11466] = -1.0;
  memset(&dv2[11467], 0, 90U * sizeof(real_T));
  dv2[11557] = 1.0;
  memset(&dv2[11558], 0, 33U * sizeof(real_T));
  dv2[11591] = -1.0;
  memset(&dv2[11592], 0, 90U * sizeof(real_T));
  dv2[11682] = 1.0;
  memset(&dv2[11683], 0, 33U * sizeof(real_T));
  dv2[11716] = -1.0;
  memset(&dv2[11717], 0, 90U * sizeof(real_T));
  dv2[11807] = 1.0;
  memset(&dv2[11808], 0, 33U * sizeof(real_T));
  dv2[11841] = -1.0;
  memset(&dv2[11842], 0, 90U * sizeof(real_T));
  dv2[11932] = 1.0;
  memset(&dv2[11933], 0, 33U * sizeof(real_T));
  dv2[11966] = -1.0;
  memset(&dv2[11967], 0, 90U * sizeof(real_T));
  dv2[12057] = 1.0;
  memset(&dv2[12058], 0, 33U * sizeof(real_T));
  dv2[12091] = -1.0;
  memset(&dv2[12092], 0, 90U * sizeof(real_T));
  dv2[12182] = 1.0;
  memset(&dv2[12183], 0, 33U * sizeof(real_T));
  dv2[12216] = -1.0;
  memset(&dv2[12217], 0, 90U * sizeof(real_T));
  dv2[12307] = 1.0;
  memset(&dv2[12308], 0, 33U * sizeof(real_T));
  dv2[12341] = -1.0;
  memset(&dv2[12342], 0, 90U * sizeof(real_T));
  dv2[12432] = 1.0;
  memset(&dv2[12433], 0, 33U * sizeof(real_T));
  dv2[12466] = -1.0;
  memset(&dv2[12467], 0, 90U * sizeof(real_T));
  dv2[12557] = 1.0;
  memset(&dv2[12558], 0, 33U * sizeof(real_T));
  dv2[12591] = -1.0;
  memset(&dv2[12592], 0, 675U * sizeof(real_T));
  dv2[13267] = -1.0;
  memset(&dv2[13268], 0, 457U * sizeof(real_T));
  dv2[13725] = -1.0;
  memset(&dv2[13726], 0, sizeof(real_T) << 4);
  dv2[13742] = -1.0;
  memset(&dv2[13743], 0, 107U * sizeof(real_T));
  dv2[13850] = -1.0;
  memset(&dv2[13851], 0, sizeof(real_T) << 4);
  dv2[13867] = -1.0;
  memset(&dv2[13868], 0, 107U * sizeof(real_T));
  dv2[13975] = -1.0;
  memset(&dv2[13976], 0, sizeof(real_T) << 4);
  dv2[13992] = -1.0;
  memset(&dv2[13993], 0, 107U * sizeof(real_T));
  dv2[14100] = -1.0;
  memset(&dv2[14101], 0, sizeof(real_T) << 4);
  dv2[14117] = -1.0;
  memset(&dv2[14118], 0, 107U * sizeof(real_T));
  dv2[14225] = -1.0;
  memset(&dv2[14226], 0, sizeof(real_T) << 4);
  dv2[14242] = -1.0;
  memset(&dv2[14243], 0, 107U * sizeof(real_T));
  dv2[14350] = -1.0;
  memset(&dv2[14351], 0, sizeof(real_T) << 4);
  dv2[14367] = -1.0;
  memset(&dv2[14368], 0, 107U * sizeof(real_T));
  dv2[14475] = -1.0;
  memset(&dv2[14476], 0, sizeof(real_T) << 4);
  dv2[14492] = -1.0;
  memset(&dv2[14493], 0, 107U * sizeof(real_T));
  dv2[14600] = -1.0;
  memset(&dv2[14601], 0, sizeof(real_T) << 4);
  dv2[14617] = -1.0;
  memset(&dv2[14618], 0, 107U * sizeof(real_T));
  dv2[14725] = -1.0;
  memset(&dv2[14726], 0, sizeof(real_T) << 4);
  dv2[14742] = -1.0;
  memset(&dv2[14743], 0, 107U * sizeof(real_T));
  dv2[14850] = -1.0;
  memset(&dv2[14851], 0, sizeof(real_T) << 4);
  dv2[14867] = -1.0;
  memset(&dv2[14868], 0, 107U * sizeof(real_T));
  dv2[14975] = -1.0;
  memset(&dv2[14976], 0, sizeof(real_T) << 4);
  dv2[14992] = -1.0;
  memset(&dv2[14993], 0, 107U * sizeof(real_T));
  dv2[15100] = -1.0;
  memset(&dv2[15101], 0, sizeof(real_T) << 4);
  dv2[15117] = -1.0;
  memset(&dv2[15118], 0, 107U * sizeof(real_T));
  dv2[15225] = -1.0;
  memset(&dv2[15226], 0, sizeof(real_T) << 4);
  dv2[15242] = -1.0;
  memset(&dv2[15243], 0, 107U * sizeof(real_T));
  dv2[15350] = -1.0;
  memset(&dv2[15351], 0, sizeof(real_T) << 4);
  dv2[15367] = -1.0;
  memset(&dv2[15368], 0, 107U * sizeof(real_T));
  dv2[15475] = -1.0;
  memset(&dv2[15476], 0, sizeof(real_T) << 4);
  dv2[15492] = -1.0;
  memset(&dv2[15493], 0, 107U * sizeof(real_T));
  dv2[15600] = -1.0;
  memset(&dv2[15601], 0, sizeof(real_T) << 4);
  dv2[15617] = -1.0;
  memset(&dv2[15618], 0, 107U * sizeof(real_T));
  dv2[15725] = -1.0;
  memset(&dv2[15726], 0, sizeof(real_T) << 4);
  dv2[15742] = -1.0;
  memset(&dv2[15743], 0, 2232U * sizeof(real_T));
  dv2[17975] = -1.0;
  dv2[17976] = -1.0;
  memset(&dv2[17977], 0, 496U * sizeof(real_T));
  dv2[18473] = -1.0;
  dv2[18474] = -1.0;
  memset(&dv2[18475], 0, 1365U * sizeof(real_T));
  for (i2 = 0; i2 < 160; i2++) {
    memcpy(&Aiq[i2 * 124], &dv2[i2 * 124], 124U * sizeof(real_T));
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
}

/* End of code generation (IqFast_RightStart3V11.cpp) */
