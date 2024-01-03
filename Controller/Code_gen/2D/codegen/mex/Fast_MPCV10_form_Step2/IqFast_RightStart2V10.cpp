/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart2V10.cpp
 *
 * Code generation for function 'IqFast_RightStart2V10'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV10_form_Step2.h"
#include "IqFast_RightStart2V10.h"

/* Variable Definitions */
static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  14,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "in5",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_RightStart2V10",             /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_RightStart2V10.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_RightStart2V10(const emlrtStack *sp, const emxArray_real_T *in4,
  const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [20480], real_T biq[128])
{
  int32_T i2;
  real_T dv2[20480];
  real_T t7;
  real_T t3;
  real_T t9;
  real_T t10;
  real_T t11;

  /* IQFAST_RIGHTSTART2V10 */
  /*     [AIQ,BIQ] = IQFAST_RIGHTSTART2V10(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     24-Jul-2023 19:03:48 */
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
  memset(&dv2[103], 0, 154U * sizeof(real_T));
  dv2[257] = -1.0;
  memset(&dv2[258], 0, 33U * sizeof(real_T));
  dv2[291] = 1.0;
  memset(&dv2[292], 0, 33U * sizeof(real_T));
  dv2[325] = -in11[2];
  memset(&dv2[326], 0, 33U * sizeof(real_T));
  dv2[359] = -in11[2];
  memset(&dv2[360], 0, 154U * sizeof(real_T));
  dv2[514] = -1.0;
  memset(&dv2[515], 0, 33U * sizeof(real_T));
  dv2[548] = 1.0;
  memset(&dv2[549], 0, 33U * sizeof(real_T));
  dv2[582] = -in11[2];
  memset(&dv2[583], 0, 33U * sizeof(real_T));
  dv2[616] = -in11[2];
  memset(&dv2[617], 0, 154U * sizeof(real_T));
  dv2[771] = -1.0;
  memset(&dv2[772], 0, 33U * sizeof(real_T));
  dv2[805] = 1.0;
  memset(&dv2[806], 0, 33U * sizeof(real_T));
  dv2[839] = -in11[2];
  memset(&dv2[840], 0, 33U * sizeof(real_T));
  dv2[873] = -in11[2];
  memset(&dv2[874], 0, 154U * sizeof(real_T));
  dv2[1028] = -1.0;
  memset(&dv2[1029], 0, 33U * sizeof(real_T));
  dv2[1062] = 1.0;
  memset(&dv2[1063], 0, 33U * sizeof(real_T));
  dv2[1096] = -in11[2];
  memset(&dv2[1097], 0, 33U * sizeof(real_T));
  dv2[1130] = -in11[2];
  memset(&dv2[1131], 0, 154U * sizeof(real_T));
  dv2[1285] = -1.0;
  memset(&dv2[1286], 0, 33U * sizeof(real_T));
  dv2[1319] = 1.0;
  memset(&dv2[1320], 0, 33U * sizeof(real_T));
  dv2[1353] = -in11[2];
  memset(&dv2[1354], 0, 33U * sizeof(real_T));
  dv2[1387] = -in11[2];
  memset(&dv2[1388], 0, 154U * sizeof(real_T));
  dv2[1542] = -1.0;
  memset(&dv2[1543], 0, 33U * sizeof(real_T));
  dv2[1576] = 1.0;
  memset(&dv2[1577], 0, 33U * sizeof(real_T));
  dv2[1610] = -in11[2];
  memset(&dv2[1611], 0, 33U * sizeof(real_T));
  dv2[1644] = -in11[2];
  memset(&dv2[1645], 0, 154U * sizeof(real_T));
  dv2[1799] = -1.0;
  memset(&dv2[1800], 0, 33U * sizeof(real_T));
  dv2[1833] = 1.0;
  memset(&dv2[1834], 0, 33U * sizeof(real_T));
  dv2[1867] = -in11[2];
  memset(&dv2[1868], 0, 33U * sizeof(real_T));
  dv2[1901] = -in11[2];
  memset(&dv2[1902], 0, 154U * sizeof(real_T));
  dv2[2056] = -1.0;
  memset(&dv2[2057], 0, 33U * sizeof(real_T));
  dv2[2090] = 1.0;
  memset(&dv2[2091], 0, 33U * sizeof(real_T));
  dv2[2124] = -in11[2];
  memset(&dv2[2125], 0, 33U * sizeof(real_T));
  dv2[2158] = -in11[2];
  memset(&dv2[2159], 0, 154U * sizeof(real_T));
  dv2[2313] = -1.0;
  memset(&dv2[2314], 0, 33U * sizeof(real_T));
  dv2[2347] = 1.0;
  memset(&dv2[2348], 0, 33U * sizeof(real_T));
  dv2[2381] = -in11[2];
  memset(&dv2[2382], 0, 33U * sizeof(real_T));
  dv2[2415] = -in11[2];
  memset(&dv2[2416], 0, 154U * sizeof(real_T));
  dv2[2570] = -1.0;
  memset(&dv2[2571], 0, 33U * sizeof(real_T));
  dv2[2604] = 1.0;
  memset(&dv2[2605], 0, 33U * sizeof(real_T));
  dv2[2638] = -in11[2];
  memset(&dv2[2639], 0, 33U * sizeof(real_T));
  dv2[2672] = -in11[2];
  memset(&dv2[2673], 0, 154U * sizeof(real_T));
  dv2[2827] = -1.0;
  memset(&dv2[2828], 0, 33U * sizeof(real_T));
  dv2[2861] = 1.0;
  memset(&dv2[2862], 0, 33U * sizeof(real_T));
  dv2[2895] = -in11[2];
  memset(&dv2[2896], 0, 33U * sizeof(real_T));
  dv2[2929] = -in11[2];
  memset(&dv2[2930], 0, 154U * sizeof(real_T));
  dv2[3084] = -1.0;
  memset(&dv2[3085], 0, 33U * sizeof(real_T));
  dv2[3118] = 1.0;
  memset(&dv2[3119], 0, 33U * sizeof(real_T));
  dv2[3152] = -in11[2];
  memset(&dv2[3153], 0, 33U * sizeof(real_T));
  dv2[3186] = -in11[2];
  memset(&dv2[3187], 0, 154U * sizeof(real_T));
  dv2[3341] = -1.0;
  memset(&dv2[3342], 0, 33U * sizeof(real_T));
  dv2[3375] = 1.0;
  memset(&dv2[3376], 0, 33U * sizeof(real_T));
  dv2[3409] = -in11[2];
  memset(&dv2[3410], 0, 33U * sizeof(real_T));
  dv2[3443] = -in11[2];
  memset(&dv2[3444], 0, 154U * sizeof(real_T));
  dv2[3598] = -1.0;
  memset(&dv2[3599], 0, 33U * sizeof(real_T));
  dv2[3632] = 1.0;
  memset(&dv2[3633], 0, 33U * sizeof(real_T));
  dv2[3666] = -in11[2];
  memset(&dv2[3667], 0, 33U * sizeof(real_T));
  dv2[3700] = -in11[2];
  memset(&dv2[3701], 0, 154U * sizeof(real_T));
  dv2[3855] = -1.0;
  memset(&dv2[3856], 0, 33U * sizeof(real_T));
  dv2[3889] = 1.0;
  memset(&dv2[3890], 0, 33U * sizeof(real_T));
  dv2[3923] = -in11[2];
  memset(&dv2[3924], 0, 33U * sizeof(real_T));
  dv2[3957] = -in11[2];
  memset(&dv2[3958], 0, 154U * sizeof(real_T));
  dv2[4112] = -1.0;
  memset(&dv2[4113], 0, 33U * sizeof(real_T));
  dv2[4146] = 1.0;
  memset(&dv2[4147], 0, 33U * sizeof(real_T));
  dv2[4180] = -in11[2];
  memset(&dv2[4181], 0, 33U * sizeof(real_T));
  dv2[4214] = -in11[2];
  memset(&dv2[4215], 0, 154U * sizeof(real_T));
  dv2[4369] = -1.0;
  memset(&dv2[4370], 0, 33U * sizeof(real_T));
  dv2[4403] = 1.0;
  memset(&dv2[4404], 0, sizeof(real_T) << 4);
  dv2[4420] = -in11[3];
  memset(&dv2[4421], 0, 33U * sizeof(real_T));
  dv2[4454] = -in11[3];
  memset(&dv2[4455], 0, 171U * sizeof(real_T));
  dv2[4626] = -1.0;
  memset(&dv2[4627], 0, 33U * sizeof(real_T));
  dv2[4660] = 1.0;
  memset(&dv2[4661], 0, sizeof(real_T) << 4);
  dv2[4677] = -in11[3];
  memset(&dv2[4678], 0, 33U * sizeof(real_T));
  dv2[4711] = -in11[3];
  memset(&dv2[4712], 0, 171U * sizeof(real_T));
  dv2[4883] = -1.0;
  memset(&dv2[4884], 0, 33U * sizeof(real_T));
  dv2[4917] = 1.0;
  memset(&dv2[4918], 0, sizeof(real_T) << 4);
  dv2[4934] = -in11[3];
  memset(&dv2[4935], 0, 33U * sizeof(real_T));
  dv2[4968] = -in11[3];
  memset(&dv2[4969], 0, 171U * sizeof(real_T));
  dv2[5140] = -1.0;
  memset(&dv2[5141], 0, 33U * sizeof(real_T));
  dv2[5174] = 1.0;
  memset(&dv2[5175], 0, sizeof(real_T) << 4);
  dv2[5191] = -in11[3];
  memset(&dv2[5192], 0, 33U * sizeof(real_T));
  dv2[5225] = -in11[3];
  memset(&dv2[5226], 0, 171U * sizeof(real_T));
  dv2[5397] = -1.0;
  memset(&dv2[5398], 0, 33U * sizeof(real_T));
  dv2[5431] = 1.0;
  memset(&dv2[5432], 0, sizeof(real_T) << 4);
  dv2[5448] = -in11[3];
  memset(&dv2[5449], 0, 33U * sizeof(real_T));
  dv2[5482] = -in11[3];
  memset(&dv2[5483], 0, 171U * sizeof(real_T));
  dv2[5654] = -1.0;
  memset(&dv2[5655], 0, 33U * sizeof(real_T));
  dv2[5688] = 1.0;
  memset(&dv2[5689], 0, sizeof(real_T) << 4);
  dv2[5705] = -in11[3];
  memset(&dv2[5706], 0, 33U * sizeof(real_T));
  dv2[5739] = -in11[3];
  memset(&dv2[5740], 0, 171U * sizeof(real_T));
  dv2[5911] = -1.0;
  memset(&dv2[5912], 0, 33U * sizeof(real_T));
  dv2[5945] = 1.0;
  memset(&dv2[5946], 0, sizeof(real_T) << 4);
  dv2[5962] = -in11[3];
  memset(&dv2[5963], 0, 33U * sizeof(real_T));
  dv2[5996] = -in11[3];
  memset(&dv2[5997], 0, 171U * sizeof(real_T));
  dv2[6168] = -1.0;
  memset(&dv2[6169], 0, 33U * sizeof(real_T));
  dv2[6202] = 1.0;
  memset(&dv2[6203], 0, sizeof(real_T) << 4);
  dv2[6219] = -in11[3];
  memset(&dv2[6220], 0, 33U * sizeof(real_T));
  dv2[6253] = -in11[3];
  memset(&dv2[6254], 0, 171U * sizeof(real_T));
  dv2[6425] = -1.0;
  memset(&dv2[6426], 0, 33U * sizeof(real_T));
  dv2[6459] = 1.0;
  memset(&dv2[6460], 0, sizeof(real_T) << 4);
  dv2[6476] = -in11[3];
  memset(&dv2[6477], 0, 33U * sizeof(real_T));
  dv2[6510] = -in11[3];
  memset(&dv2[6511], 0, 171U * sizeof(real_T));
  dv2[6682] = -1.0;
  memset(&dv2[6683], 0, 33U * sizeof(real_T));
  dv2[6716] = 1.0;
  memset(&dv2[6717], 0, sizeof(real_T) << 4);
  dv2[6733] = -in11[3];
  memset(&dv2[6734], 0, 33U * sizeof(real_T));
  dv2[6767] = -in11[3];
  memset(&dv2[6768], 0, 171U * sizeof(real_T));
  dv2[6939] = -1.0;
  memset(&dv2[6940], 0, 33U * sizeof(real_T));
  dv2[6973] = 1.0;
  memset(&dv2[6974], 0, sizeof(real_T) << 4);
  dv2[6990] = -in11[3];
  memset(&dv2[6991], 0, 33U * sizeof(real_T));
  dv2[7024] = -in11[3];
  memset(&dv2[7025], 0, 171U * sizeof(real_T));
  dv2[7196] = -1.0;
  memset(&dv2[7197], 0, 33U * sizeof(real_T));
  dv2[7230] = 1.0;
  memset(&dv2[7231], 0, sizeof(real_T) << 4);
  dv2[7247] = -in11[3];
  memset(&dv2[7248], 0, 33U * sizeof(real_T));
  dv2[7281] = -in11[3];
  memset(&dv2[7282], 0, 171U * sizeof(real_T));
  dv2[7453] = -1.0;
  memset(&dv2[7454], 0, 33U * sizeof(real_T));
  dv2[7487] = 1.0;
  memset(&dv2[7488], 0, sizeof(real_T) << 4);
  dv2[7504] = -in11[3];
  memset(&dv2[7505], 0, 33U * sizeof(real_T));
  dv2[7538] = -in11[3];
  memset(&dv2[7539], 0, 171U * sizeof(real_T));
  dv2[7710] = -1.0;
  memset(&dv2[7711], 0, 33U * sizeof(real_T));
  dv2[7744] = 1.0;
  memset(&dv2[7745], 0, sizeof(real_T) << 4);
  dv2[7761] = -in11[3];
  memset(&dv2[7762], 0, 33U * sizeof(real_T));
  dv2[7795] = -in11[3];
  memset(&dv2[7796], 0, 171U * sizeof(real_T));
  dv2[7967] = -1.0;
  memset(&dv2[7968], 0, 33U * sizeof(real_T));
  dv2[8001] = 1.0;
  memset(&dv2[8002], 0, sizeof(real_T) << 4);
  dv2[8018] = -in11[3];
  memset(&dv2[8019], 0, 33U * sizeof(real_T));
  dv2[8052] = -in11[3];
  memset(&dv2[8053], 0, 171U * sizeof(real_T));
  dv2[8224] = -1.0;
  memset(&dv2[8225], 0, 33U * sizeof(real_T));
  dv2[8258] = 1.0;
  memset(&dv2[8259], 0, sizeof(real_T) << 4);
  dv2[8275] = -in11[3];
  memset(&dv2[8276], 0, 33U * sizeof(real_T));
  dv2[8309] = -in11[3];
  memset(&dv2[8310], 0, 171U * sizeof(real_T));
  dv2[8481] = -1.0;
  memset(&dv2[8482], 0, 33U * sizeof(real_T));
  dv2[8515] = 1.0;
  memset(&dv2[8516], 0, sizeof(real_T) << 4);
  dv2[8532] = -in11[3];
  memset(&dv2[8533], 0, 33U * sizeof(real_T));
  dv2[8566] = -in11[3];
  memset(&dv2[8567], 0, 137U * sizeof(real_T));
  dv2[8704] = 1.0;
  memset(&dv2[8705], 0, 33U * sizeof(real_T));
  dv2[8738] = -1.0;
  memset(&dv2[8739], 0, 84U * sizeof(real_T));
  dv2[8823] = 1.0;
  dv2[8824] = 0.0;
  dv2[8825] = -1.0;
  dv2[8826] = 0.0;
  dv2[8827] = 0.0;
  dv2[8828] = 0.0;
  dv2[8829] = 0.0;
  dv2[8830] = 0.0;
  dv2[8831] = 0.0;
  dv2[8832] = 0.0;
  dv2[8833] = 1.0;
  memset(&dv2[8834], 0, 33U * sizeof(real_T));
  dv2[8867] = -1.0;
  memset(&dv2[8868], 0, 84U * sizeof(real_T));
  dv2[8952] = 1.0;
  dv2[8953] = 0.0;
  dv2[8954] = -1.0;
  dv2[8955] = 0.0;
  dv2[8956] = 0.0;
  dv2[8957] = 0.0;
  dv2[8958] = 0.0;
  dv2[8959] = 0.0;
  dv2[8960] = 0.0;
  dv2[8961] = 0.0;
  dv2[8962] = 1.0;
  memset(&dv2[8963], 0, 33U * sizeof(real_T));
  dv2[8996] = -1.0;
  memset(&dv2[8997], 0, 94U * sizeof(real_T));
  dv2[9091] = 1.0;
  memset(&dv2[9092], 0, 33U * sizeof(real_T));
  dv2[9125] = -1.0;
  memset(&dv2[9126], 0, 94U * sizeof(real_T));
  dv2[9220] = 1.0;
  memset(&dv2[9221], 0, 33U * sizeof(real_T));
  dv2[9254] = -1.0;
  memset(&dv2[9255], 0, 94U * sizeof(real_T));
  dv2[9349] = 1.0;
  memset(&dv2[9350], 0, 33U * sizeof(real_T));
  dv2[9383] = -1.0;
  memset(&dv2[9384], 0, 94U * sizeof(real_T));
  dv2[9478] = 1.0;
  memset(&dv2[9479], 0, 33U * sizeof(real_T));
  dv2[9512] = -1.0;
  memset(&dv2[9513], 0, 94U * sizeof(real_T));
  dv2[9607] = 1.0;
  memset(&dv2[9608], 0, 33U * sizeof(real_T));
  dv2[9641] = -1.0;
  memset(&dv2[9642], 0, 94U * sizeof(real_T));
  dv2[9736] = 1.0;
  memset(&dv2[9737], 0, 33U * sizeof(real_T));
  dv2[9770] = -1.0;
  memset(&dv2[9771], 0, 94U * sizeof(real_T));
  dv2[9865] = 1.0;
  memset(&dv2[9866], 0, 33U * sizeof(real_T));
  dv2[9899] = -1.0;
  memset(&dv2[9900], 0, 94U * sizeof(real_T));
  dv2[9994] = 1.0;
  memset(&dv2[9995], 0, 33U * sizeof(real_T));
  dv2[10028] = -1.0;
  memset(&dv2[10029], 0, 94U * sizeof(real_T));
  dv2[10123] = 1.0;
  memset(&dv2[10124], 0, 33U * sizeof(real_T));
  dv2[10157] = -1.0;
  memset(&dv2[10158], 0, 94U * sizeof(real_T));
  dv2[10252] = 1.0;
  memset(&dv2[10253], 0, 33U * sizeof(real_T));
  dv2[10286] = -1.0;
  memset(&dv2[10287], 0, 94U * sizeof(real_T));
  dv2[10381] = 1.0;
  memset(&dv2[10382], 0, 33U * sizeof(real_T));
  dv2[10415] = -1.0;
  memset(&dv2[10416], 0, 94U * sizeof(real_T));
  dv2[10510] = 1.0;
  memset(&dv2[10511], 0, 33U * sizeof(real_T));
  dv2[10544] = -1.0;
  memset(&dv2[10545], 0, 94U * sizeof(real_T));
  dv2[10639] = 1.0;
  memset(&dv2[10640], 0, 33U * sizeof(real_T));
  dv2[10673] = -1.0;
  memset(&dv2[10674], 0, 94U * sizeof(real_T));
  dv2[10768] = 1.0;
  memset(&dv2[10769], 0, 33U * sizeof(real_T));
  dv2[10802] = -1.0;
  memset(&dv2[10803], 0, 94U * sizeof(real_T));
  dv2[10897] = 1.0;
  memset(&dv2[10898], 0, 33U * sizeof(real_T));
  dv2[10931] = -1.0;
  memset(&dv2[10932], 0, 71U * sizeof(real_T));
  dv2[11003] = 1.0;
  dv2[11004] = 0.0;
  dv2[11005] = -1.0;
  memset(&dv2[11006], 0, 20U * sizeof(real_T));
  dv2[11026] = 1.0;
  memset(&dv2[11027], 0, 33U * sizeof(real_T));
  dv2[11060] = -1.0;
  memset(&dv2[11061], 0, 71U * sizeof(real_T));
  dv2[11132] = 1.0;
  dv2[11133] = 0.0;
  dv2[11134] = -1.0;
  memset(&dv2[11135], 0, 20U * sizeof(real_T));
  dv2[11155] = 1.0;
  memset(&dv2[11156], 0, 33U * sizeof(real_T));
  dv2[11189] = -1.0;
  memset(&dv2[11190], 0, 94U * sizeof(real_T));
  dv2[11284] = 1.0;
  memset(&dv2[11285], 0, 33U * sizeof(real_T));
  dv2[11318] = -1.0;
  memset(&dv2[11319], 0, 94U * sizeof(real_T));
  dv2[11413] = 1.0;
  memset(&dv2[11414], 0, 33U * sizeof(real_T));
  dv2[11447] = -1.0;
  memset(&dv2[11448], 0, 94U * sizeof(real_T));
  dv2[11542] = 1.0;
  memset(&dv2[11543], 0, 33U * sizeof(real_T));
  dv2[11576] = -1.0;
  memset(&dv2[11577], 0, 94U * sizeof(real_T));
  dv2[11671] = 1.0;
  memset(&dv2[11672], 0, 33U * sizeof(real_T));
  dv2[11705] = -1.0;
  memset(&dv2[11706], 0, 94U * sizeof(real_T));
  dv2[11800] = 1.0;
  memset(&dv2[11801], 0, 33U * sizeof(real_T));
  dv2[11834] = -1.0;
  memset(&dv2[11835], 0, 94U * sizeof(real_T));
  dv2[11929] = 1.0;
  memset(&dv2[11930], 0, 33U * sizeof(real_T));
  dv2[11963] = -1.0;
  memset(&dv2[11964], 0, 94U * sizeof(real_T));
  dv2[12058] = 1.0;
  memset(&dv2[12059], 0, 33U * sizeof(real_T));
  dv2[12092] = -1.0;
  memset(&dv2[12093], 0, 94U * sizeof(real_T));
  dv2[12187] = 1.0;
  memset(&dv2[12188], 0, 33U * sizeof(real_T));
  dv2[12221] = -1.0;
  memset(&dv2[12222], 0, 94U * sizeof(real_T));
  dv2[12316] = 1.0;
  memset(&dv2[12317], 0, 33U * sizeof(real_T));
  dv2[12350] = -1.0;
  memset(&dv2[12351], 0, 94U * sizeof(real_T));
  dv2[12445] = 1.0;
  memset(&dv2[12446], 0, 33U * sizeof(real_T));
  dv2[12479] = -1.0;
  memset(&dv2[12480], 0, 94U * sizeof(real_T));
  dv2[12574] = 1.0;
  memset(&dv2[12575], 0, 33U * sizeof(real_T));
  dv2[12608] = -1.0;
  memset(&dv2[12609], 0, 94U * sizeof(real_T));
  dv2[12703] = 1.0;
  memset(&dv2[12704], 0, 33U * sizeof(real_T));
  dv2[12737] = -1.0;
  memset(&dv2[12738], 0, 94U * sizeof(real_T));
  dv2[12832] = 1.0;
  memset(&dv2[12833], 0, 33U * sizeof(real_T));
  dv2[12866] = -1.0;
  memset(&dv2[12867], 0, 94U * sizeof(real_T));
  dv2[12961] = 1.0;
  memset(&dv2[12962], 0, 33U * sizeof(real_T));
  dv2[12995] = -1.0;
  memset(&dv2[12996], 0, 699U * sizeof(real_T));
  dv2[13695] = -1.0;
  memset(&dv2[13696], 0, 469U * sizeof(real_T));
  dv2[14165] = -1.0;
  memset(&dv2[14166], 0, sizeof(real_T) << 4);
  dv2[14182] = -1.0;
  memset(&dv2[14183], 0, 111U * sizeof(real_T));
  dv2[14294] = -1.0;
  memset(&dv2[14295], 0, sizeof(real_T) << 4);
  dv2[14311] = -1.0;
  memset(&dv2[14312], 0, 111U * sizeof(real_T));
  dv2[14423] = -1.0;
  memset(&dv2[14424], 0, sizeof(real_T) << 4);
  dv2[14440] = -1.0;
  memset(&dv2[14441], 0, 111U * sizeof(real_T));
  dv2[14552] = -1.0;
  memset(&dv2[14553], 0, sizeof(real_T) << 4);
  dv2[14569] = -1.0;
  memset(&dv2[14570], 0, 111U * sizeof(real_T));
  dv2[14681] = -1.0;
  memset(&dv2[14682], 0, sizeof(real_T) << 4);
  dv2[14698] = -1.0;
  memset(&dv2[14699], 0, 111U * sizeof(real_T));
  dv2[14810] = -1.0;
  memset(&dv2[14811], 0, sizeof(real_T) << 4);
  dv2[14827] = -1.0;
  memset(&dv2[14828], 0, 111U * sizeof(real_T));
  dv2[14939] = -1.0;
  memset(&dv2[14940], 0, sizeof(real_T) << 4);
  dv2[14956] = -1.0;
  memset(&dv2[14957], 0, 111U * sizeof(real_T));
  dv2[15068] = -1.0;
  memset(&dv2[15069], 0, sizeof(real_T) << 4);
  dv2[15085] = -1.0;
  memset(&dv2[15086], 0, 111U * sizeof(real_T));
  dv2[15197] = -1.0;
  memset(&dv2[15198], 0, sizeof(real_T) << 4);
  dv2[15214] = -1.0;
  memset(&dv2[15215], 0, 111U * sizeof(real_T));
  dv2[15326] = -1.0;
  memset(&dv2[15327], 0, sizeof(real_T) << 4);
  dv2[15343] = -1.0;
  memset(&dv2[15344], 0, 111U * sizeof(real_T));
  dv2[15455] = -1.0;
  memset(&dv2[15456], 0, sizeof(real_T) << 4);
  dv2[15472] = -1.0;
  memset(&dv2[15473], 0, 111U * sizeof(real_T));
  dv2[15584] = -1.0;
  memset(&dv2[15585], 0, sizeof(real_T) << 4);
  dv2[15601] = -1.0;
  memset(&dv2[15602], 0, 111U * sizeof(real_T));
  dv2[15713] = -1.0;
  memset(&dv2[15714], 0, sizeof(real_T) << 4);
  dv2[15730] = -1.0;
  memset(&dv2[15731], 0, 111U * sizeof(real_T));
  dv2[15842] = -1.0;
  memset(&dv2[15843], 0, sizeof(real_T) << 4);
  dv2[15859] = -1.0;
  memset(&dv2[15860], 0, 111U * sizeof(real_T));
  dv2[15971] = -1.0;
  memset(&dv2[15972], 0, sizeof(real_T) << 4);
  dv2[15988] = -1.0;
  memset(&dv2[15989], 0, 111U * sizeof(real_T));
  dv2[16100] = -1.0;
  memset(&dv2[16101], 0, sizeof(real_T) << 4);
  dv2[16117] = -1.0;
  memset(&dv2[16118], 0, 111U * sizeof(real_T));
  dv2[16229] = -1.0;
  memset(&dv2[16230], 0, sizeof(real_T) << 4);
  dv2[16246] = -1.0;
  memset(&dv2[16247], 0, 136U * sizeof(real_T));
  dv2[16383] = 1.0;
  memset(&dv2[16384], 0, 2167U * sizeof(real_T));
  dv2[18551] = -1.0;
  dv2[18552] = 0.0;
  dv2[18553] = -1.0;
  memset(&dv2[18554], 0, 126U * sizeof(real_T));
  dv2[18680] = -1.0;
  dv2[18681] = 0.0;
  dv2[18682] = -1.0;
  memset(&dv2[18683], 0, 384U * sizeof(real_T));
  dv2[19067] = -1.0;
  dv2[19068] = 0.0;
  dv2[19069] = -1.0;
  memset(&dv2[19070], 0, 126U * sizeof(real_T));
  dv2[19196] = -1.0;
  dv2[19197] = 0.0;
  dv2[19198] = -1.0;
  memset(&dv2[19199], 0, 1281U * sizeof(real_T));
  for (i2 = 0; i2 < 160; i2++) {
    memcpy(&Aiq[i2 << 7], &dv2[i2 << 7], sizeof(real_T) << 7);
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
}

/* End of code generation (IqFast_RightStart2V10.cpp) */
