/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart3V20.cpp
 *
 * Code generation for function 'IqFast_LeftStart3V20'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV20_form_Step3.h"
#include "IqFast_LeftStart3V20.h"

/* Variable Definitions */
static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart3V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart3V20.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart3V20(const emlrtStack *sp, const real_T in3[4], const
  emxArray_real_T *in4, const real_T in5[17], real_T Cpx1, real_T Cpy1, const
  real_T in8[3], const real_T in9[3], const real_T in10[2], const real_T in11[4],
  real_T Aiq[18400], real_T biq[115])
{
  int32_T i1;
  real_T dv2[18400];
  real_T a;
  real_T t3;
  real_T t7;

  /* IQFAST_LEFTSTART3V20 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART3V20(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Aug-2023 21:23:26 */
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
  memset(&dv2[94], 0, 137U * sizeof(real_T));
  dv2[231] = -1.0;
  memset(&dv2[232], 0, 33U * sizeof(real_T));
  dv2[265] = 1.0;
  memset(&dv2[266], 0, 33U * sizeof(real_T));
  dv2[299] = -in11[2];
  memset(&dv2[300], 0, 24U * sizeof(real_T));
  dv2[324] = -in11[2];
  memset(&dv2[325], 0, 137U * sizeof(real_T));
  dv2[462] = -1.0;
  memset(&dv2[463], 0, 33U * sizeof(real_T));
  dv2[496] = 1.0;
  memset(&dv2[497], 0, 33U * sizeof(real_T));
  dv2[530] = -in11[2];
  memset(&dv2[531], 0, 24U * sizeof(real_T));
  dv2[555] = -in11[2];
  memset(&dv2[556], 0, 137U * sizeof(real_T));
  dv2[693] = -1.0;
  memset(&dv2[694], 0, 33U * sizeof(real_T));
  dv2[727] = 1.0;
  memset(&dv2[728], 0, 33U * sizeof(real_T));
  dv2[761] = -in11[2];
  memset(&dv2[762], 0, 24U * sizeof(real_T));
  dv2[786] = -in11[2];
  memset(&dv2[787], 0, 137U * sizeof(real_T));
  dv2[924] = -1.0;
  memset(&dv2[925], 0, 33U * sizeof(real_T));
  dv2[958] = 1.0;
  memset(&dv2[959], 0, 33U * sizeof(real_T));
  dv2[992] = -in11[2];
  memset(&dv2[993], 0, 24U * sizeof(real_T));
  dv2[1017] = -in11[2];
  memset(&dv2[1018], 0, 137U * sizeof(real_T));
  dv2[1155] = -1.0;
  memset(&dv2[1156], 0, 33U * sizeof(real_T));
  dv2[1189] = 1.0;
  memset(&dv2[1190], 0, 33U * sizeof(real_T));
  dv2[1223] = -in11[2];
  memset(&dv2[1224], 0, 24U * sizeof(real_T));
  dv2[1248] = -in11[2];
  memset(&dv2[1249], 0, 137U * sizeof(real_T));
  dv2[1386] = -1.0;
  memset(&dv2[1387], 0, 33U * sizeof(real_T));
  dv2[1420] = 1.0;
  memset(&dv2[1421], 0, 33U * sizeof(real_T));
  dv2[1454] = -in11[2];
  memset(&dv2[1455], 0, 24U * sizeof(real_T));
  dv2[1479] = -in11[2];
  memset(&dv2[1480], 0, 137U * sizeof(real_T));
  dv2[1617] = -1.0;
  memset(&dv2[1618], 0, 33U * sizeof(real_T));
  dv2[1651] = 1.0;
  memset(&dv2[1652], 0, 33U * sizeof(real_T));
  dv2[1685] = -in11[2];
  memset(&dv2[1686], 0, 24U * sizeof(real_T));
  dv2[1710] = -in11[2];
  memset(&dv2[1711], 0, 137U * sizeof(real_T));
  dv2[1848] = -1.0;
  memset(&dv2[1849], 0, 33U * sizeof(real_T));
  dv2[1882] = 1.0;
  memset(&dv2[1883], 0, 58U * sizeof(real_T));
  dv2[1941] = -in3[2];
  memset(&dv2[1942], 0, 137U * sizeof(real_T));
  dv2[2079] = -1.0;
  memset(&dv2[2080], 0, 33U * sizeof(real_T));
  dv2[2113] = 1.0;
  memset(&dv2[2114], 0, 58U * sizeof(real_T));
  dv2[2172] = -in3[2];
  memset(&dv2[2173], 0, 137U * sizeof(real_T));
  dv2[2310] = -1.0;
  memset(&dv2[2311], 0, 33U * sizeof(real_T));
  dv2[2344] = 1.0;
  memset(&dv2[2345], 0, 58U * sizeof(real_T));
  dv2[2403] = -in3[2];
  memset(&dv2[2404], 0, 137U * sizeof(real_T));
  dv2[2541] = -1.0;
  memset(&dv2[2542], 0, 33U * sizeof(real_T));
  dv2[2575] = 1.0;
  memset(&dv2[2576], 0, 58U * sizeof(real_T));
  dv2[2634] = -in3[2];
  memset(&dv2[2635], 0, 137U * sizeof(real_T));
  dv2[2772] = -1.0;
  memset(&dv2[2773], 0, 33U * sizeof(real_T));
  dv2[2806] = 1.0;
  memset(&dv2[2807], 0, 58U * sizeof(real_T));
  dv2[2865] = -in3[2];
  memset(&dv2[2866], 0, 137U * sizeof(real_T));
  dv2[3003] = -1.0;
  memset(&dv2[3004], 0, 33U * sizeof(real_T));
  dv2[3037] = 1.0;
  memset(&dv2[3038], 0, 58U * sizeof(real_T));
  dv2[3096] = -in3[2];
  memset(&dv2[3097], 0, 137U * sizeof(real_T));
  dv2[3234] = -1.0;
  memset(&dv2[3235], 0, 33U * sizeof(real_T));
  dv2[3268] = 1.0;
  memset(&dv2[3269], 0, 58U * sizeof(real_T));
  dv2[3327] = -in3[2];
  memset(&dv2[3328], 0, 137U * sizeof(real_T));
  dv2[3465] = -1.0;
  memset(&dv2[3466], 0, 33U * sizeof(real_T));
  dv2[3499] = 1.0;
  memset(&dv2[3500], 0, 58U * sizeof(real_T));
  dv2[3558] = -in3[2];
  memset(&dv2[3559], 0, 137U * sizeof(real_T));
  dv2[3696] = -1.0;
  memset(&dv2[3697], 0, 33U * sizeof(real_T));
  dv2[3730] = 1.0;
  memset(&dv2[3731], 0, 58U * sizeof(real_T));
  dv2[3789] = -in3[2];
  memset(&dv2[3790], 0, 137U * sizeof(real_T));
  dv2[3927] = -1.0;
  memset(&dv2[3928], 0, 33U * sizeof(real_T));
  dv2[3961] = 1.0;
  memset(&dv2[3962], 0, sizeof(real_T) << 4);
  dv2[3978] = -in11[3];
  memset(&dv2[3979], 0, 24U * sizeof(real_T));
  dv2[4003] = -in11[3];
  memset(&dv2[4004], 0, 154U * sizeof(real_T));
  dv2[4158] = -1.0;
  memset(&dv2[4159], 0, 33U * sizeof(real_T));
  dv2[4192] = 1.0;
  memset(&dv2[4193], 0, sizeof(real_T) << 4);
  dv2[4209] = -in11[3];
  memset(&dv2[4210], 0, 24U * sizeof(real_T));
  dv2[4234] = -in11[3];
  memset(&dv2[4235], 0, 154U * sizeof(real_T));
  dv2[4389] = -1.0;
  memset(&dv2[4390], 0, 33U * sizeof(real_T));
  dv2[4423] = 1.0;
  memset(&dv2[4424], 0, sizeof(real_T) << 4);
  dv2[4440] = -in11[3];
  memset(&dv2[4441], 0, 24U * sizeof(real_T));
  dv2[4465] = -in11[3];
  memset(&dv2[4466], 0, 154U * sizeof(real_T));
  dv2[4620] = -1.0;
  memset(&dv2[4621], 0, 33U * sizeof(real_T));
  dv2[4654] = 1.0;
  memset(&dv2[4655], 0, sizeof(real_T) << 4);
  dv2[4671] = -in11[3];
  memset(&dv2[4672], 0, 24U * sizeof(real_T));
  dv2[4696] = -in11[3];
  memset(&dv2[4697], 0, 154U * sizeof(real_T));
  dv2[4851] = -1.0;
  memset(&dv2[4852], 0, 33U * sizeof(real_T));
  dv2[4885] = 1.0;
  memset(&dv2[4886], 0, sizeof(real_T) << 4);
  dv2[4902] = -in11[3];
  memset(&dv2[4903], 0, 24U * sizeof(real_T));
  dv2[4927] = -in11[3];
  memset(&dv2[4928], 0, 154U * sizeof(real_T));
  dv2[5082] = -1.0;
  memset(&dv2[5083], 0, 33U * sizeof(real_T));
  dv2[5116] = 1.0;
  memset(&dv2[5117], 0, sizeof(real_T) << 4);
  dv2[5133] = -in11[3];
  memset(&dv2[5134], 0, 24U * sizeof(real_T));
  dv2[5158] = -in11[3];
  memset(&dv2[5159], 0, 154U * sizeof(real_T));
  dv2[5313] = -1.0;
  memset(&dv2[5314], 0, 33U * sizeof(real_T));
  dv2[5347] = 1.0;
  memset(&dv2[5348], 0, sizeof(real_T) << 4);
  dv2[5364] = -in11[3];
  memset(&dv2[5365], 0, 24U * sizeof(real_T));
  dv2[5389] = -in11[3];
  memset(&dv2[5390], 0, 154U * sizeof(real_T));
  dv2[5544] = -1.0;
  memset(&dv2[5545], 0, 33U * sizeof(real_T));
  dv2[5578] = 1.0;
  memset(&dv2[5579], 0, sizeof(real_T) << 4);
  dv2[5595] = -in11[3];
  memset(&dv2[5596], 0, 24U * sizeof(real_T));
  dv2[5620] = -in11[3];
  memset(&dv2[5621], 0, 154U * sizeof(real_T));
  dv2[5775] = -1.0;
  memset(&dv2[5776], 0, 33U * sizeof(real_T));
  dv2[5809] = 1.0;
  memset(&dv2[5810], 0, 41U * sizeof(real_T));
  dv2[5851] = -in3[3];
  memset(&dv2[5852], 0, 154U * sizeof(real_T));
  dv2[6006] = -1.0;
  memset(&dv2[6007], 0, 33U * sizeof(real_T));
  dv2[6040] = 1.0;
  memset(&dv2[6041], 0, 41U * sizeof(real_T));
  dv2[6082] = -in3[3];
  memset(&dv2[6083], 0, 154U * sizeof(real_T));
  dv2[6237] = -1.0;
  memset(&dv2[6238], 0, 33U * sizeof(real_T));
  dv2[6271] = 1.0;
  memset(&dv2[6272], 0, 41U * sizeof(real_T));
  dv2[6313] = -in3[3];
  memset(&dv2[6314], 0, 154U * sizeof(real_T));
  dv2[6468] = -1.0;
  memset(&dv2[6469], 0, 33U * sizeof(real_T));
  dv2[6502] = 1.0;
  memset(&dv2[6503], 0, 41U * sizeof(real_T));
  dv2[6544] = -in3[3];
  memset(&dv2[6545], 0, 154U * sizeof(real_T));
  dv2[6699] = -1.0;
  memset(&dv2[6700], 0, 33U * sizeof(real_T));
  dv2[6733] = 1.0;
  memset(&dv2[6734], 0, 41U * sizeof(real_T));
  dv2[6775] = -in3[3];
  memset(&dv2[6776], 0, 154U * sizeof(real_T));
  dv2[6930] = -1.0;
  memset(&dv2[6931], 0, 33U * sizeof(real_T));
  dv2[6964] = 1.0;
  memset(&dv2[6965], 0, 41U * sizeof(real_T));
  dv2[7006] = -in3[3];
  memset(&dv2[7007], 0, 154U * sizeof(real_T));
  dv2[7161] = -1.0;
  memset(&dv2[7162], 0, 33U * sizeof(real_T));
  dv2[7195] = 1.0;
  memset(&dv2[7196], 0, 41U * sizeof(real_T));
  dv2[7237] = -in3[3];
  memset(&dv2[7238], 0, 154U * sizeof(real_T));
  dv2[7392] = -1.0;
  memset(&dv2[7393], 0, 33U * sizeof(real_T));
  dv2[7426] = 1.0;
  memset(&dv2[7427], 0, 41U * sizeof(real_T));
  dv2[7468] = -in3[3];
  memset(&dv2[7469], 0, 154U * sizeof(real_T));
  dv2[7623] = -1.0;
  memset(&dv2[7624], 0, 33U * sizeof(real_T));
  dv2[7657] = 1.0;
  memset(&dv2[7658], 0, 41U * sizeof(real_T));
  dv2[7699] = -in3[3];
  memset(&dv2[7700], 0, 120U * sizeof(real_T));
  dv2[7820] = 1.0;
  memset(&dv2[7821], 0, 33U * sizeof(real_T));
  dv2[7854] = -1.0;
  memset(&dv2[7855], 0, 75U * sizeof(real_T));
  dv2[7930] = 1.0;
  dv2[7931] = -1.0;
  dv2[7932] = 0.0;
  dv2[7933] = 0.0;
  dv2[7934] = 0.0;
  dv2[7935] = 0.0;
  dv2[7936] = 1.0;
  memset(&dv2[7937], 0, 33U * sizeof(real_T));
  dv2[7970] = -1.0;
  memset(&dv2[7971], 0, 81U * sizeof(real_T));
  dv2[8052] = 1.0;
  memset(&dv2[8053], 0, 33U * sizeof(real_T));
  dv2[8086] = -1.0;
  memset(&dv2[8087], 0, 81U * sizeof(real_T));
  dv2[8168] = 1.0;
  memset(&dv2[8169], 0, 33U * sizeof(real_T));
  dv2[8202] = -1.0;
  memset(&dv2[8203], 0, 81U * sizeof(real_T));
  dv2[8284] = 1.0;
  memset(&dv2[8285], 0, 33U * sizeof(real_T));
  dv2[8318] = -1.0;
  memset(&dv2[8319], 0, 81U * sizeof(real_T));
  dv2[8400] = 1.0;
  memset(&dv2[8401], 0, 33U * sizeof(real_T));
  dv2[8434] = -1.0;
  memset(&dv2[8435], 0, 81U * sizeof(real_T));
  dv2[8516] = 1.0;
  memset(&dv2[8517], 0, 33U * sizeof(real_T));
  dv2[8550] = -1.0;
  memset(&dv2[8551], 0, 81U * sizeof(real_T));
  dv2[8632] = 1.0;
  memset(&dv2[8633], 0, 33U * sizeof(real_T));
  dv2[8666] = -1.0;
  memset(&dv2[8667], 0, 81U * sizeof(real_T));
  dv2[8748] = 1.0;
  memset(&dv2[8749], 0, 33U * sizeof(real_T));
  dv2[8782] = -1.0;
  memset(&dv2[8783], 0, 81U * sizeof(real_T));
  dv2[8864] = 1.0;
  memset(&dv2[8865], 0, 33U * sizeof(real_T));
  dv2[8898] = -1.0;
  memset(&dv2[8899], 0, 81U * sizeof(real_T));
  dv2[8980] = 1.0;
  memset(&dv2[8981], 0, 33U * sizeof(real_T));
  dv2[9014] = -1.0;
  memset(&dv2[9015], 0, 81U * sizeof(real_T));
  dv2[9096] = 1.0;
  memset(&dv2[9097], 0, 33U * sizeof(real_T));
  dv2[9130] = -1.0;
  memset(&dv2[9131], 0, 81U * sizeof(real_T));
  dv2[9212] = 1.0;
  memset(&dv2[9213], 0, 33U * sizeof(real_T));
  dv2[9246] = -1.0;
  memset(&dv2[9247], 0, 81U * sizeof(real_T));
  dv2[9328] = 1.0;
  memset(&dv2[9329], 0, 33U * sizeof(real_T));
  dv2[9362] = -1.0;
  memset(&dv2[9363], 0, 81U * sizeof(real_T));
  dv2[9444] = 1.0;
  memset(&dv2[9445], 0, 33U * sizeof(real_T));
  dv2[9478] = -1.0;
  memset(&dv2[9479], 0, 81U * sizeof(real_T));
  dv2[9560] = 1.0;
  memset(&dv2[9561], 0, 33U * sizeof(real_T));
  dv2[9594] = -1.0;
  memset(&dv2[9595], 0, 81U * sizeof(real_T));
  dv2[9676] = 1.0;
  memset(&dv2[9677], 0, 33U * sizeof(real_T));
  dv2[9710] = -1.0;
  memset(&dv2[9711], 0, 81U * sizeof(real_T));
  dv2[9792] = 1.0;
  memset(&dv2[9793], 0, 33U * sizeof(real_T));
  dv2[9826] = -1.0;
  memset(&dv2[9827], 0, 60U * sizeof(real_T));
  dv2[9887] = 1.0;
  dv2[9888] = -1.0;
  memset(&dv2[9889], 0, 19U * sizeof(real_T));
  dv2[9908] = 1.0;
  memset(&dv2[9909], 0, 33U * sizeof(real_T));
  dv2[9942] = -1.0;
  memset(&dv2[9943], 0, 81U * sizeof(real_T));
  dv2[10024] = 1.0;
  memset(&dv2[10025], 0, 33U * sizeof(real_T));
  dv2[10058] = -1.0;
  memset(&dv2[10059], 0, 81U * sizeof(real_T));
  dv2[10140] = 1.0;
  memset(&dv2[10141], 0, 33U * sizeof(real_T));
  dv2[10174] = -1.0;
  memset(&dv2[10175], 0, 81U * sizeof(real_T));
  dv2[10256] = 1.0;
  memset(&dv2[10257], 0, 33U * sizeof(real_T));
  dv2[10290] = -1.0;
  memset(&dv2[10291], 0, 81U * sizeof(real_T));
  dv2[10372] = 1.0;
  memset(&dv2[10373], 0, 33U * sizeof(real_T));
  dv2[10406] = -1.0;
  memset(&dv2[10407], 0, 81U * sizeof(real_T));
  dv2[10488] = 1.0;
  memset(&dv2[10489], 0, 33U * sizeof(real_T));
  dv2[10522] = -1.0;
  memset(&dv2[10523], 0, 81U * sizeof(real_T));
  dv2[10604] = 1.0;
  memset(&dv2[10605], 0, 33U * sizeof(real_T));
  dv2[10638] = -1.0;
  memset(&dv2[10639], 0, 81U * sizeof(real_T));
  dv2[10720] = 1.0;
  memset(&dv2[10721], 0, 33U * sizeof(real_T));
  dv2[10754] = -1.0;
  memset(&dv2[10755], 0, 81U * sizeof(real_T));
  dv2[10836] = 1.0;
  memset(&dv2[10837], 0, 33U * sizeof(real_T));
  dv2[10870] = -1.0;
  memset(&dv2[10871], 0, 81U * sizeof(real_T));
  dv2[10952] = 1.0;
  memset(&dv2[10953], 0, 33U * sizeof(real_T));
  dv2[10986] = -1.0;
  memset(&dv2[10987], 0, 81U * sizeof(real_T));
  dv2[11068] = 1.0;
  memset(&dv2[11069], 0, 33U * sizeof(real_T));
  dv2[11102] = -1.0;
  memset(&dv2[11103], 0, 81U * sizeof(real_T));
  dv2[11184] = 1.0;
  memset(&dv2[11185], 0, 33U * sizeof(real_T));
  dv2[11218] = -1.0;
  memset(&dv2[11219], 0, 81U * sizeof(real_T));
  dv2[11300] = 1.0;
  memset(&dv2[11301], 0, 33U * sizeof(real_T));
  dv2[11334] = -1.0;
  memset(&dv2[11335], 0, 81U * sizeof(real_T));
  dv2[11416] = 1.0;
  memset(&dv2[11417], 0, 33U * sizeof(real_T));
  dv2[11450] = -1.0;
  memset(&dv2[11451], 0, 81U * sizeof(real_T));
  dv2[11532] = 1.0;
  memset(&dv2[11533], 0, 33U * sizeof(real_T));
  dv2[11566] = -1.0;
  memset(&dv2[11567], 0, 81U * sizeof(real_T));
  dv2[11648] = 1.0;
  memset(&dv2[11649], 0, 33U * sizeof(real_T));
  dv2[11682] = -1.0;
  memset(&dv2[11683], 0, 621U * sizeof(real_T));
  dv2[12304] = 1.0;
  memset(&dv2[12305], 0, 421U * sizeof(real_T));
  dv2[12726] = -1.0;
  memset(&dv2[12727], 0, sizeof(real_T) << 4);
  dv2[12743] = -1.0;
  memset(&dv2[12744], 0, 98U * sizeof(real_T));
  dv2[12842] = -1.0;
  memset(&dv2[12843], 0, sizeof(real_T) << 4);
  dv2[12859] = -1.0;
  memset(&dv2[12860], 0, 98U * sizeof(real_T));
  dv2[12958] = -1.0;
  memset(&dv2[12959], 0, sizeof(real_T) << 4);
  dv2[12975] = -1.0;
  memset(&dv2[12976], 0, 98U * sizeof(real_T));
  dv2[13074] = -1.0;
  memset(&dv2[13075], 0, sizeof(real_T) << 4);
  dv2[13091] = -1.0;
  memset(&dv2[13092], 0, 98U * sizeof(real_T));
  dv2[13190] = -1.0;
  memset(&dv2[13191], 0, sizeof(real_T) << 4);
  dv2[13207] = -1.0;
  memset(&dv2[13208], 0, 98U * sizeof(real_T));
  dv2[13306] = -1.0;
  memset(&dv2[13307], 0, sizeof(real_T) << 4);
  dv2[13323] = -1.0;
  memset(&dv2[13324], 0, 98U * sizeof(real_T));
  dv2[13422] = -1.0;
  memset(&dv2[13423], 0, sizeof(real_T) << 4);
  dv2[13439] = -1.0;
  memset(&dv2[13440], 0, 98U * sizeof(real_T));
  dv2[13538] = -1.0;
  memset(&dv2[13539], 0, sizeof(real_T) << 4);
  dv2[13555] = -1.0;
  memset(&dv2[13556], 0, 98U * sizeof(real_T));
  dv2[13654] = -1.0;
  memset(&dv2[13655], 0, sizeof(real_T) << 4);
  dv2[13671] = -1.0;
  memset(&dv2[13672], 0, 98U * sizeof(real_T));
  dv2[13770] = -1.0;
  memset(&dv2[13771], 0, sizeof(real_T) << 4);
  dv2[13787] = -1.0;
  memset(&dv2[13788], 0, 98U * sizeof(real_T));
  dv2[13886] = -1.0;
  memset(&dv2[13887], 0, sizeof(real_T) << 4);
  dv2[13903] = -1.0;
  memset(&dv2[13904], 0, 98U * sizeof(real_T));
  dv2[14002] = -1.0;
  memset(&dv2[14003], 0, sizeof(real_T) << 4);
  dv2[14019] = -1.0;
  memset(&dv2[14020], 0, 98U * sizeof(real_T));
  dv2[14118] = -1.0;
  memset(&dv2[14119], 0, sizeof(real_T) << 4);
  dv2[14135] = -1.0;
  memset(&dv2[14136], 0, 98U * sizeof(real_T));
  dv2[14234] = -1.0;
  memset(&dv2[14235], 0, sizeof(real_T) << 4);
  dv2[14251] = -1.0;
  memset(&dv2[14252], 0, 98U * sizeof(real_T));
  dv2[14350] = -1.0;
  memset(&dv2[14351], 0, sizeof(real_T) << 4);
  dv2[14367] = -1.0;
  memset(&dv2[14368], 0, 98U * sizeof(real_T));
  dv2[14466] = -1.0;
  memset(&dv2[14467], 0, sizeof(real_T) << 4);
  dv2[14483] = -1.0;
  memset(&dv2[14484], 0, 98U * sizeof(real_T));
  dv2[14582] = -1.0;
  memset(&dv2[14583], 0, sizeof(real_T) << 4);
  dv2[14599] = -1.0;
  memset(&dv2[14600], 0, 119U * sizeof(real_T));
  dv2[14719] = -1.0;
  memset(&dv2[14720], 0, 1950U * sizeof(real_T));
  dv2[16670] = -1.0;
  dv2[16671] = -1.0;
  memset(&dv2[16672], 0, 460U * sizeof(real_T));
  dv2[17132] = -1.0;
  dv2[17133] = -1.0;
  memset(&dv2[17134], 0, 1266U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 115], &dv2[i1 * 115], 115U * sizeof(real_T));
  }

  a = muDoubleScalarAbs(in11[2]);
  t3 = muDoubleScalarAbs(in11[3]);
  t7 = 1.0 / muDoubleScalarSqrt(a * a + t3 * t3);
  a = muDoubleScalarAbs(in3[2]);
  t3 = muDoubleScalarAbs(in3[3]);
  t3 = 1.0 / muDoubleScalarSqrt(a * a + t3 * t3);
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
  biq[110] = Cpx1 + in8[0];
  biq[111] = -Cpx1 + in8[0];
  biq[112] = Cpy1 + in9[0];
  biq[113] = -Cpy1 + in9[0];
  biq[114] = -in9[1];
}

/* End of code generation (IqFast_LeftStart3V20.cpp) */
