/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart2V20.cpp
 *
 * Code generation for function 'IqFast_LeftStart2V20'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV20_form_Step2.h"
#include "IqFast_LeftStart2V20.h"

/* Variable Definitions */
static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart2V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart2V20.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart2V20(const emlrtStack *sp, const real_T in3[4], const
  emxArray_real_T *in4, const real_T in5[17], real_T Cpx1, real_T Cpy1, const
  real_T in8[3], const real_T in9[3], const real_T in10[2], const real_T in11[4],
  real_T Aiq[19040], real_T biq[119])
{
  int32_T i1;
  real_T dv2[19040];
  real_T t14;
  real_T t3;
  real_T t7;
  real_T t15;
  real_T t16;
  real_T t17;

  /* IQFAST_LEFTSTART2V20 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART2V20(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Aug-2023 21:20:46 */
  i1 = in4->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, (emlrtBCInfo *)&p_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(2 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i1, (emlrtBCInfo *)&o_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(3 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i1, (emlrtBCInfo *)&n_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(4 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i1, (emlrtBCInfo *)&m_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(5 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i1, (emlrtBCInfo *)&l_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(6 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i1, (emlrtBCInfo *)&k_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(7 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(7, 1, i1, (emlrtBCInfo *)&j_emlrtBCI, sp);
  }

  i1 = in4->size[1];
  if (!(8 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(8, 1, i1, (emlrtBCInfo *)&i_emlrtBCI, sp);
  }

  dv2[0] = -1.0;
  memset(&dv2[1], 0, 33U * sizeof(real_T));
  dv2[34] = 1.0;
  memset(&dv2[35], 0, 33U * sizeof(real_T));
  dv2[68] = -in11[2];
  memset(&dv2[69], 0, 24U * sizeof(real_T));
  dv2[93] = -in11[2];
  memset(&dv2[94], 0, 145U * sizeof(real_T));
  dv2[239] = -1.0;
  memset(&dv2[240], 0, 33U * sizeof(real_T));
  dv2[273] = 1.0;
  memset(&dv2[274], 0, 33U * sizeof(real_T));
  dv2[307] = -in11[2];
  memset(&dv2[308], 0, 24U * sizeof(real_T));
  dv2[332] = -in11[2];
  memset(&dv2[333], 0, 145U * sizeof(real_T));
  dv2[478] = -1.0;
  memset(&dv2[479], 0, 33U * sizeof(real_T));
  dv2[512] = 1.0;
  memset(&dv2[513], 0, 33U * sizeof(real_T));
  dv2[546] = -in11[2];
  memset(&dv2[547], 0, 24U * sizeof(real_T));
  dv2[571] = -in11[2];
  memset(&dv2[572], 0, 145U * sizeof(real_T));
  dv2[717] = -1.0;
  memset(&dv2[718], 0, 33U * sizeof(real_T));
  dv2[751] = 1.0;
  memset(&dv2[752], 0, 33U * sizeof(real_T));
  dv2[785] = -in11[2];
  memset(&dv2[786], 0, 24U * sizeof(real_T));
  dv2[810] = -in11[2];
  memset(&dv2[811], 0, 145U * sizeof(real_T));
  dv2[956] = -1.0;
  memset(&dv2[957], 0, 33U * sizeof(real_T));
  dv2[990] = 1.0;
  memset(&dv2[991], 0, 33U * sizeof(real_T));
  dv2[1024] = -in11[2];
  memset(&dv2[1025], 0, 24U * sizeof(real_T));
  dv2[1049] = -in11[2];
  memset(&dv2[1050], 0, 145U * sizeof(real_T));
  dv2[1195] = -1.0;
  memset(&dv2[1196], 0, 33U * sizeof(real_T));
  dv2[1229] = 1.0;
  memset(&dv2[1230], 0, 33U * sizeof(real_T));
  dv2[1263] = -in11[2];
  memset(&dv2[1264], 0, 24U * sizeof(real_T));
  dv2[1288] = -in11[2];
  memset(&dv2[1289], 0, 145U * sizeof(real_T));
  dv2[1434] = -1.0;
  memset(&dv2[1435], 0, 33U * sizeof(real_T));
  dv2[1468] = 1.0;
  memset(&dv2[1469], 0, 33U * sizeof(real_T));
  dv2[1502] = -in11[2];
  memset(&dv2[1503], 0, 24U * sizeof(real_T));
  dv2[1527] = -in11[2];
  memset(&dv2[1528], 0, 145U * sizeof(real_T));
  dv2[1673] = -1.0;
  memset(&dv2[1674], 0, 33U * sizeof(real_T));
  dv2[1707] = 1.0;
  memset(&dv2[1708], 0, 33U * sizeof(real_T));
  dv2[1741] = -in11[2];
  memset(&dv2[1742], 0, 24U * sizeof(real_T));
  dv2[1766] = -in11[2];
  memset(&dv2[1767], 0, 145U * sizeof(real_T));
  dv2[1912] = -1.0;
  memset(&dv2[1913], 0, 33U * sizeof(real_T));
  dv2[1946] = 1.0;
  memset(&dv2[1947], 0, 58U * sizeof(real_T));
  dv2[2005] = -in3[2];
  memset(&dv2[2006], 0, 145U * sizeof(real_T));
  dv2[2151] = -1.0;
  memset(&dv2[2152], 0, 33U * sizeof(real_T));
  dv2[2185] = 1.0;
  memset(&dv2[2186], 0, 58U * sizeof(real_T));
  dv2[2244] = -in3[2];
  memset(&dv2[2245], 0, 145U * sizeof(real_T));
  dv2[2390] = -1.0;
  memset(&dv2[2391], 0, 33U * sizeof(real_T));
  dv2[2424] = 1.0;
  memset(&dv2[2425], 0, 58U * sizeof(real_T));
  dv2[2483] = -in3[2];
  memset(&dv2[2484], 0, 145U * sizeof(real_T));
  dv2[2629] = -1.0;
  memset(&dv2[2630], 0, 33U * sizeof(real_T));
  dv2[2663] = 1.0;
  memset(&dv2[2664], 0, 58U * sizeof(real_T));
  dv2[2722] = -in3[2];
  memset(&dv2[2723], 0, 145U * sizeof(real_T));
  dv2[2868] = -1.0;
  memset(&dv2[2869], 0, 33U * sizeof(real_T));
  dv2[2902] = 1.0;
  memset(&dv2[2903], 0, 58U * sizeof(real_T));
  dv2[2961] = -in3[2];
  memset(&dv2[2962], 0, 145U * sizeof(real_T));
  dv2[3107] = -1.0;
  memset(&dv2[3108], 0, 33U * sizeof(real_T));
  dv2[3141] = 1.0;
  memset(&dv2[3142], 0, 58U * sizeof(real_T));
  dv2[3200] = -in3[2];
  memset(&dv2[3201], 0, 145U * sizeof(real_T));
  dv2[3346] = -1.0;
  memset(&dv2[3347], 0, 33U * sizeof(real_T));
  dv2[3380] = 1.0;
  memset(&dv2[3381], 0, 58U * sizeof(real_T));
  dv2[3439] = -in3[2];
  memset(&dv2[3440], 0, 145U * sizeof(real_T));
  dv2[3585] = -1.0;
  memset(&dv2[3586], 0, 33U * sizeof(real_T));
  dv2[3619] = 1.0;
  memset(&dv2[3620], 0, 58U * sizeof(real_T));
  dv2[3678] = -in3[2];
  memset(&dv2[3679], 0, 145U * sizeof(real_T));
  dv2[3824] = -1.0;
  memset(&dv2[3825], 0, 33U * sizeof(real_T));
  dv2[3858] = 1.0;
  memset(&dv2[3859], 0, 58U * sizeof(real_T));
  dv2[3917] = -in3[2];
  memset(&dv2[3918], 0, 145U * sizeof(real_T));
  dv2[4063] = -1.0;
  memset(&dv2[4064], 0, 33U * sizeof(real_T));
  dv2[4097] = 1.0;
  memset(&dv2[4098], 0, sizeof(real_T) << 4);
  dv2[4114] = -in11[3];
  memset(&dv2[4115], 0, 24U * sizeof(real_T));
  dv2[4139] = -in11[3];
  memset(&dv2[4140], 0, 162U * sizeof(real_T));
  dv2[4302] = -1.0;
  memset(&dv2[4303], 0, 33U * sizeof(real_T));
  dv2[4336] = 1.0;
  memset(&dv2[4337], 0, sizeof(real_T) << 4);
  dv2[4353] = -in11[3];
  memset(&dv2[4354], 0, 24U * sizeof(real_T));
  dv2[4378] = -in11[3];
  memset(&dv2[4379], 0, 162U * sizeof(real_T));
  dv2[4541] = -1.0;
  memset(&dv2[4542], 0, 33U * sizeof(real_T));
  dv2[4575] = 1.0;
  memset(&dv2[4576], 0, sizeof(real_T) << 4);
  dv2[4592] = -in11[3];
  memset(&dv2[4593], 0, 24U * sizeof(real_T));
  dv2[4617] = -in11[3];
  memset(&dv2[4618], 0, 162U * sizeof(real_T));
  dv2[4780] = -1.0;
  memset(&dv2[4781], 0, 33U * sizeof(real_T));
  dv2[4814] = 1.0;
  memset(&dv2[4815], 0, sizeof(real_T) << 4);
  dv2[4831] = -in11[3];
  memset(&dv2[4832], 0, 24U * sizeof(real_T));
  dv2[4856] = -in11[3];
  memset(&dv2[4857], 0, 162U * sizeof(real_T));
  dv2[5019] = -1.0;
  memset(&dv2[5020], 0, 33U * sizeof(real_T));
  dv2[5053] = 1.0;
  memset(&dv2[5054], 0, sizeof(real_T) << 4);
  dv2[5070] = -in11[3];
  memset(&dv2[5071], 0, 24U * sizeof(real_T));
  dv2[5095] = -in11[3];
  memset(&dv2[5096], 0, 162U * sizeof(real_T));
  dv2[5258] = -1.0;
  memset(&dv2[5259], 0, 33U * sizeof(real_T));
  dv2[5292] = 1.0;
  memset(&dv2[5293], 0, sizeof(real_T) << 4);
  dv2[5309] = -in11[3];
  memset(&dv2[5310], 0, 24U * sizeof(real_T));
  dv2[5334] = -in11[3];
  memset(&dv2[5335], 0, 162U * sizeof(real_T));
  dv2[5497] = -1.0;
  memset(&dv2[5498], 0, 33U * sizeof(real_T));
  dv2[5531] = 1.0;
  memset(&dv2[5532], 0, sizeof(real_T) << 4);
  dv2[5548] = -in11[3];
  memset(&dv2[5549], 0, 24U * sizeof(real_T));
  dv2[5573] = -in11[3];
  memset(&dv2[5574], 0, 162U * sizeof(real_T));
  dv2[5736] = -1.0;
  memset(&dv2[5737], 0, 33U * sizeof(real_T));
  dv2[5770] = 1.0;
  memset(&dv2[5771], 0, sizeof(real_T) << 4);
  dv2[5787] = -in11[3];
  memset(&dv2[5788], 0, 24U * sizeof(real_T));
  dv2[5812] = -in11[3];
  memset(&dv2[5813], 0, 162U * sizeof(real_T));
  dv2[5975] = -1.0;
  memset(&dv2[5976], 0, 33U * sizeof(real_T));
  dv2[6009] = 1.0;
  memset(&dv2[6010], 0, 41U * sizeof(real_T));
  dv2[6051] = -in3[3];
  memset(&dv2[6052], 0, 162U * sizeof(real_T));
  dv2[6214] = -1.0;
  memset(&dv2[6215], 0, 33U * sizeof(real_T));
  dv2[6248] = 1.0;
  memset(&dv2[6249], 0, 41U * sizeof(real_T));
  dv2[6290] = -in3[3];
  memset(&dv2[6291], 0, 162U * sizeof(real_T));
  dv2[6453] = -1.0;
  memset(&dv2[6454], 0, 33U * sizeof(real_T));
  dv2[6487] = 1.0;
  memset(&dv2[6488], 0, 41U * sizeof(real_T));
  dv2[6529] = -in3[3];
  memset(&dv2[6530], 0, 162U * sizeof(real_T));
  dv2[6692] = -1.0;
  memset(&dv2[6693], 0, 33U * sizeof(real_T));
  dv2[6726] = 1.0;
  memset(&dv2[6727], 0, 41U * sizeof(real_T));
  dv2[6768] = -in3[3];
  memset(&dv2[6769], 0, 162U * sizeof(real_T));
  dv2[6931] = -1.0;
  memset(&dv2[6932], 0, 33U * sizeof(real_T));
  dv2[6965] = 1.0;
  memset(&dv2[6966], 0, 41U * sizeof(real_T));
  dv2[7007] = -in3[3];
  memset(&dv2[7008], 0, 162U * sizeof(real_T));
  dv2[7170] = -1.0;
  memset(&dv2[7171], 0, 33U * sizeof(real_T));
  dv2[7204] = 1.0;
  memset(&dv2[7205], 0, 41U * sizeof(real_T));
  dv2[7246] = -in3[3];
  memset(&dv2[7247], 0, 162U * sizeof(real_T));
  dv2[7409] = -1.0;
  memset(&dv2[7410], 0, 33U * sizeof(real_T));
  dv2[7443] = 1.0;
  memset(&dv2[7444], 0, 41U * sizeof(real_T));
  dv2[7485] = -in3[3];
  memset(&dv2[7486], 0, 162U * sizeof(real_T));
  dv2[7648] = -1.0;
  memset(&dv2[7649], 0, 33U * sizeof(real_T));
  dv2[7682] = 1.0;
  memset(&dv2[7683], 0, 41U * sizeof(real_T));
  dv2[7724] = -in3[3];
  memset(&dv2[7725], 0, 162U * sizeof(real_T));
  dv2[7887] = -1.0;
  memset(&dv2[7888], 0, 33U * sizeof(real_T));
  dv2[7921] = 1.0;
  memset(&dv2[7922], 0, 41U * sizeof(real_T));
  dv2[7963] = -in3[3];
  memset(&dv2[7964], 0, sizeof(real_T) << 7);
  dv2[8092] = 1.0;
  memset(&dv2[8093], 0, 33U * sizeof(real_T));
  dv2[8126] = -1.0;
  memset(&dv2[8127], 0, 75U * sizeof(real_T));
  dv2[8202] = 1.0;
  dv2[8203] = 0.0;
  dv2[8204] = -1.0;
  dv2[8205] = 0.0;
  dv2[8206] = 0.0;
  dv2[8207] = 0.0;
  dv2[8208] = 0.0;
  dv2[8209] = 0.0;
  dv2[8210] = 0.0;
  dv2[8211] = 0.0;
  dv2[8212] = 1.0;
  memset(&dv2[8213], 0, 33U * sizeof(real_T));
  dv2[8246] = -1.0;
  memset(&dv2[8247], 0, 75U * sizeof(real_T));
  dv2[8322] = 1.0;
  dv2[8323] = 0.0;
  dv2[8324] = -1.0;
  dv2[8325] = 0.0;
  dv2[8326] = 0.0;
  dv2[8327] = 0.0;
  dv2[8328] = 0.0;
  dv2[8329] = 0.0;
  dv2[8330] = 0.0;
  dv2[8331] = 0.0;
  dv2[8332] = 1.0;
  memset(&dv2[8333], 0, 33U * sizeof(real_T));
  dv2[8366] = -1.0;
  memset(&dv2[8367], 0, 85U * sizeof(real_T));
  dv2[8452] = 1.0;
  memset(&dv2[8453], 0, 33U * sizeof(real_T));
  dv2[8486] = -1.0;
  memset(&dv2[8487], 0, 85U * sizeof(real_T));
  dv2[8572] = 1.0;
  memset(&dv2[8573], 0, 33U * sizeof(real_T));
  dv2[8606] = -1.0;
  memset(&dv2[8607], 0, 85U * sizeof(real_T));
  dv2[8692] = 1.0;
  memset(&dv2[8693], 0, 33U * sizeof(real_T));
  dv2[8726] = -1.0;
  memset(&dv2[8727], 0, 85U * sizeof(real_T));
  dv2[8812] = 1.0;
  memset(&dv2[8813], 0, 33U * sizeof(real_T));
  dv2[8846] = -1.0;
  memset(&dv2[8847], 0, 85U * sizeof(real_T));
  dv2[8932] = 1.0;
  memset(&dv2[8933], 0, 33U * sizeof(real_T));
  dv2[8966] = -1.0;
  memset(&dv2[8967], 0, 85U * sizeof(real_T));
  dv2[9052] = 1.0;
  memset(&dv2[9053], 0, 33U * sizeof(real_T));
  dv2[9086] = -1.0;
  memset(&dv2[9087], 0, 85U * sizeof(real_T));
  dv2[9172] = 1.0;
  memset(&dv2[9173], 0, 33U * sizeof(real_T));
  dv2[9206] = -1.0;
  memset(&dv2[9207], 0, 85U * sizeof(real_T));
  dv2[9292] = 1.0;
  memset(&dv2[9293], 0, 33U * sizeof(real_T));
  dv2[9326] = -1.0;
  memset(&dv2[9327], 0, 85U * sizeof(real_T));
  dv2[9412] = 1.0;
  memset(&dv2[9413], 0, 33U * sizeof(real_T));
  dv2[9446] = -1.0;
  memset(&dv2[9447], 0, 85U * sizeof(real_T));
  dv2[9532] = 1.0;
  memset(&dv2[9533], 0, 33U * sizeof(real_T));
  dv2[9566] = -1.0;
  memset(&dv2[9567], 0, 85U * sizeof(real_T));
  dv2[9652] = 1.0;
  memset(&dv2[9653], 0, 33U * sizeof(real_T));
  dv2[9686] = -1.0;
  memset(&dv2[9687], 0, 85U * sizeof(real_T));
  dv2[9772] = 1.0;
  memset(&dv2[9773], 0, 33U * sizeof(real_T));
  dv2[9806] = -1.0;
  memset(&dv2[9807], 0, 85U * sizeof(real_T));
  dv2[9892] = 1.0;
  memset(&dv2[9893], 0, 33U * sizeof(real_T));
  dv2[9926] = -1.0;
  memset(&dv2[9927], 0, 85U * sizeof(real_T));
  dv2[10012] = 1.0;
  memset(&dv2[10013], 0, 33U * sizeof(real_T));
  dv2[10046] = -1.0;
  memset(&dv2[10047], 0, 85U * sizeof(real_T));
  dv2[10132] = 1.0;
  memset(&dv2[10133], 0, 33U * sizeof(real_T));
  dv2[10166] = -1.0;
  memset(&dv2[10167], 0, 62U * sizeof(real_T));
  dv2[10229] = 1.0;
  dv2[10230] = 0.0;
  dv2[10231] = -1.0;
  memset(&dv2[10232], 0, 20U * sizeof(real_T));
  dv2[10252] = 1.0;
  memset(&dv2[10253], 0, 33U * sizeof(real_T));
  dv2[10286] = -1.0;
  memset(&dv2[10287], 0, 62U * sizeof(real_T));
  dv2[10349] = 1.0;
  dv2[10350] = 0.0;
  dv2[10351] = -1.0;
  memset(&dv2[10352], 0, 20U * sizeof(real_T));
  dv2[10372] = 1.0;
  memset(&dv2[10373], 0, 33U * sizeof(real_T));
  dv2[10406] = -1.0;
  memset(&dv2[10407], 0, 85U * sizeof(real_T));
  dv2[10492] = 1.0;
  memset(&dv2[10493], 0, 33U * sizeof(real_T));
  dv2[10526] = -1.0;
  memset(&dv2[10527], 0, 85U * sizeof(real_T));
  dv2[10612] = 1.0;
  memset(&dv2[10613], 0, 33U * sizeof(real_T));
  dv2[10646] = -1.0;
  memset(&dv2[10647], 0, 85U * sizeof(real_T));
  dv2[10732] = 1.0;
  memset(&dv2[10733], 0, 33U * sizeof(real_T));
  dv2[10766] = -1.0;
  memset(&dv2[10767], 0, 85U * sizeof(real_T));
  dv2[10852] = 1.0;
  memset(&dv2[10853], 0, 33U * sizeof(real_T));
  dv2[10886] = -1.0;
  memset(&dv2[10887], 0, 85U * sizeof(real_T));
  dv2[10972] = 1.0;
  memset(&dv2[10973], 0, 33U * sizeof(real_T));
  dv2[11006] = -1.0;
  memset(&dv2[11007], 0, 85U * sizeof(real_T));
  dv2[11092] = 1.0;
  memset(&dv2[11093], 0, 33U * sizeof(real_T));
  dv2[11126] = -1.0;
  memset(&dv2[11127], 0, 85U * sizeof(real_T));
  dv2[11212] = 1.0;
  memset(&dv2[11213], 0, 33U * sizeof(real_T));
  dv2[11246] = -1.0;
  memset(&dv2[11247], 0, 85U * sizeof(real_T));
  dv2[11332] = 1.0;
  memset(&dv2[11333], 0, 33U * sizeof(real_T));
  dv2[11366] = -1.0;
  memset(&dv2[11367], 0, 85U * sizeof(real_T));
  dv2[11452] = 1.0;
  memset(&dv2[11453], 0, 33U * sizeof(real_T));
  dv2[11486] = -1.0;
  memset(&dv2[11487], 0, 85U * sizeof(real_T));
  dv2[11572] = 1.0;
  memset(&dv2[11573], 0, 33U * sizeof(real_T));
  dv2[11606] = -1.0;
  memset(&dv2[11607], 0, 85U * sizeof(real_T));
  dv2[11692] = 1.0;
  memset(&dv2[11693], 0, 33U * sizeof(real_T));
  dv2[11726] = -1.0;
  memset(&dv2[11727], 0, 85U * sizeof(real_T));
  dv2[11812] = 1.0;
  memset(&dv2[11813], 0, 33U * sizeof(real_T));
  dv2[11846] = -1.0;
  memset(&dv2[11847], 0, 85U * sizeof(real_T));
  dv2[11932] = 1.0;
  memset(&dv2[11933], 0, 33U * sizeof(real_T));
  dv2[11966] = -1.0;
  memset(&dv2[11967], 0, 85U * sizeof(real_T));
  dv2[12052] = 1.0;
  memset(&dv2[12053], 0, 33U * sizeof(real_T));
  dv2[12086] = -1.0;
  memset(&dv2[12087], 0, 645U * sizeof(real_T));
  dv2[12732] = 1.0;
  memset(&dv2[12733], 0, 433U * sizeof(real_T));
  dv2[13166] = -1.0;
  memset(&dv2[13167], 0, sizeof(real_T) << 4);
  dv2[13183] = -1.0;
  memset(&dv2[13184], 0, 102U * sizeof(real_T));
  dv2[13286] = -1.0;
  memset(&dv2[13287], 0, sizeof(real_T) << 4);
  dv2[13303] = -1.0;
  memset(&dv2[13304], 0, 102U * sizeof(real_T));
  dv2[13406] = -1.0;
  memset(&dv2[13407], 0, sizeof(real_T) << 4);
  dv2[13423] = -1.0;
  memset(&dv2[13424], 0, 102U * sizeof(real_T));
  dv2[13526] = -1.0;
  memset(&dv2[13527], 0, sizeof(real_T) << 4);
  dv2[13543] = -1.0;
  memset(&dv2[13544], 0, 102U * sizeof(real_T));
  dv2[13646] = -1.0;
  memset(&dv2[13647], 0, sizeof(real_T) << 4);
  dv2[13663] = -1.0;
  memset(&dv2[13664], 0, 102U * sizeof(real_T));
  dv2[13766] = -1.0;
  memset(&dv2[13767], 0, sizeof(real_T) << 4);
  dv2[13783] = -1.0;
  memset(&dv2[13784], 0, 102U * sizeof(real_T));
  dv2[13886] = -1.0;
  memset(&dv2[13887], 0, sizeof(real_T) << 4);
  dv2[13903] = -1.0;
  memset(&dv2[13904], 0, 102U * sizeof(real_T));
  dv2[14006] = -1.0;
  memset(&dv2[14007], 0, sizeof(real_T) << 4);
  dv2[14023] = -1.0;
  memset(&dv2[14024], 0, 102U * sizeof(real_T));
  dv2[14126] = -1.0;
  memset(&dv2[14127], 0, sizeof(real_T) << 4);
  dv2[14143] = -1.0;
  memset(&dv2[14144], 0, 102U * sizeof(real_T));
  dv2[14246] = -1.0;
  memset(&dv2[14247], 0, sizeof(real_T) << 4);
  dv2[14263] = -1.0;
  memset(&dv2[14264], 0, 102U * sizeof(real_T));
  dv2[14366] = -1.0;
  memset(&dv2[14367], 0, sizeof(real_T) << 4);
  dv2[14383] = -1.0;
  memset(&dv2[14384], 0, 102U * sizeof(real_T));
  dv2[14486] = -1.0;
  memset(&dv2[14487], 0, sizeof(real_T) << 4);
  dv2[14503] = -1.0;
  memset(&dv2[14504], 0, 102U * sizeof(real_T));
  dv2[14606] = -1.0;
  memset(&dv2[14607], 0, sizeof(real_T) << 4);
  dv2[14623] = -1.0;
  memset(&dv2[14624], 0, 102U * sizeof(real_T));
  dv2[14726] = -1.0;
  memset(&dv2[14727], 0, sizeof(real_T) << 4);
  dv2[14743] = -1.0;
  memset(&dv2[14744], 0, 102U * sizeof(real_T));
  dv2[14846] = -1.0;
  memset(&dv2[14847], 0, sizeof(real_T) << 4);
  dv2[14863] = -1.0;
  memset(&dv2[14864], 0, 102U * sizeof(real_T));
  dv2[14966] = -1.0;
  memset(&dv2[14967], 0, sizeof(real_T) << 4);
  dv2[14983] = -1.0;
  memset(&dv2[14984], 0, 102U * sizeof(real_T));
  dv2[15086] = -1.0;
  memset(&dv2[15087], 0, sizeof(real_T) << 4);
  dv2[15103] = -1.0;
  memset(&dv2[15104], 0, 127U * sizeof(real_T));
  dv2[15231] = -1.0;
  memset(&dv2[15232], 0, 2014U * sizeof(real_T));
  dv2[17246] = -1.0;
  dv2[17247] = 0.0;
  dv2[17248] = -1.0;
  memset(&dv2[17249], 0, 117U * sizeof(real_T));
  dv2[17366] = -1.0;
  dv2[17367] = 0.0;
  dv2[17368] = -1.0;
  memset(&dv2[17369], 0, 357U * sizeof(real_T));
  dv2[17726] = -1.0;
  dv2[17727] = 0.0;
  dv2[17728] = -1.0;
  memset(&dv2[17729], 0, 117U * sizeof(real_T));
  dv2[17846] = -1.0;
  dv2[17847] = 0.0;
  dv2[17848] = -1.0;
  memset(&dv2[17849], 0, 1191U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 119], &dv2[i1 * 119], 119U * sizeof(real_T));
  }

  t14 = muDoubleScalarAbs(in11[2]);
  t3 = muDoubleScalarAbs(in11[3]);
  t7 = 1.0 / muDoubleScalarSqrt(t14 * t14 + t3 * t3);
  t14 = muDoubleScalarAbs(in3[2]);
  t3 = muDoubleScalarAbs(in3[3]);
  t3 = 1.0 / muDoubleScalarSqrt(t14 * t14 + t3 * t3);
  t14 = Cpx1 + in8[0];
  t15 = -Cpx1 + in8[0];
  t16 = Cpy1 + in9[0];
  t17 = -Cpy1 + in9[0];
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
  memset(&biq[76], 0, 17U * sizeof(real_T));
  biq[93] = -in11[2] * (in11[0] + in11[2] * in5[0] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[0] * t7);
  biq[94] = -in11[2] * (in11[0] + in11[2] * in5[1] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[1] * t7);
  biq[95] = -in11[2] * (in11[0] + in11[2] * in5[2] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[2] * t7);
  biq[96] = -in11[2] * (in11[0] + in11[2] * in5[3] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[3] * t7);
  biq[97] = -in11[2] * (in11[0] + in11[2] * in5[4] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[4] * t7);
  biq[98] = -in11[2] * (in11[0] + in11[2] * in5[5] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[5] * t7);
  biq[99] = -in11[2] * (in11[0] + in11[2] * in5[6] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[6] * t7);
  biq[100] = -in11[2] * (in11[0] + in11[2] * in5[7] * t7) - in11[3] * (in11[1] +
    in11[3] * in5[7] * t7);
  biq[101] = -in3[2] * (in3[0] + in5[8] * t3 * in3[2]) - in3[3] * (in3[1] + in5
    [8] * t3 * in3[3]);
  biq[102] = -in3[2] * (in3[0] + in5[9] * t3 * in3[2]) - in3[3] * (in3[1] + in5
    [9] * t3 * in3[3]);
  biq[103] = -in3[2] * (in3[0] + in5[10] * t3 * in3[2]) - in3[3] * (in3[1] +
    in5[10] * t3 * in3[3]);
  biq[104] = -in3[2] * (in3[0] + in5[11] * t3 * in3[2]) - in3[3] * (in3[1] +
    in5[11] * t3 * in3[3]);
  biq[105] = -in3[2] * (in3[0] + in5[12] * t3 * in3[2]) - in3[3] * (in3[1] +
    in5[12] * t3 * in3[3]);
  biq[106] = -in3[2] * (in3[0] + in5[13] * t3 * in3[2]) - in3[3] * (in3[1] +
    in5[13] * t3 * in3[3]);
  biq[107] = -in3[2] * (in3[0] + in5[14] * t3 * in3[2]) - in3[3] * (in3[1] +
    in5[14] * t3 * in3[3]);
  biq[108] = -in3[2] * (in3[0] + in5[15] * t3 * in3[2]) - in3[3] * (in3[1] +
    in5[15] * t3 * in3[3]);
  biq[109] = -in3[2] * (in3[0] + in5[16] * t3 * in3[2]) - in3[3] * (in3[1] +
    in5[16] * t3 * in3[3]);
  biq[110] = t14;
  biq[111] = t14;
  biq[112] = t15;
  biq[113] = t15;
  biq[114] = t16;
  biq[115] = t16;
  biq[116] = t17;
  biq[117] = t17;
  biq[118] = -in9[1];
}

/* End of code generation (IqFast_LeftStart2V20.cpp) */
