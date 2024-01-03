/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart1V20.cpp
 *
 * Code generation for function 'IqFast_LeftStart1V20'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV20_form_Step1.h"
#include "IqFast_LeftStart1V20.h"

/* Variable Definitions */
static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart1V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart1V20.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart1V20(const emlrtStack *sp, const real_T in3[4], const
  emxArray_real_T *in4, const real_T in5[17], real_T Cpx1, real_T Cpy1, const
  real_T in8[3], const real_T in9[3], const real_T in10[2], const real_T in11[4],
  real_T Aiq[19680], real_T biq[123])
{
  int32_T i1;
  real_T dv2[19680];
  real_T t14;
  real_T t3;
  real_T t7;
  real_T t15;
  real_T t16;
  real_T t17;

  /* IQFAST_LEFTSTART1V20 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART1V20(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Aug-2023 21:18:12 */
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
  memset(&dv2[94], 0, 153U * sizeof(real_T));
  dv2[247] = -1.0;
  memset(&dv2[248], 0, 33U * sizeof(real_T));
  dv2[281] = 1.0;
  memset(&dv2[282], 0, 33U * sizeof(real_T));
  dv2[315] = -in11[2];
  memset(&dv2[316], 0, 24U * sizeof(real_T));
  dv2[340] = -in11[2];
  memset(&dv2[341], 0, 153U * sizeof(real_T));
  dv2[494] = -1.0;
  memset(&dv2[495], 0, 33U * sizeof(real_T));
  dv2[528] = 1.0;
  memset(&dv2[529], 0, 33U * sizeof(real_T));
  dv2[562] = -in11[2];
  memset(&dv2[563], 0, 24U * sizeof(real_T));
  dv2[587] = -in11[2];
  memset(&dv2[588], 0, 153U * sizeof(real_T));
  dv2[741] = -1.0;
  memset(&dv2[742], 0, 33U * sizeof(real_T));
  dv2[775] = 1.0;
  memset(&dv2[776], 0, 33U * sizeof(real_T));
  dv2[809] = -in11[2];
  memset(&dv2[810], 0, 24U * sizeof(real_T));
  dv2[834] = -in11[2];
  memset(&dv2[835], 0, 153U * sizeof(real_T));
  dv2[988] = -1.0;
  memset(&dv2[989], 0, 33U * sizeof(real_T));
  dv2[1022] = 1.0;
  memset(&dv2[1023], 0, 33U * sizeof(real_T));
  dv2[1056] = -in11[2];
  memset(&dv2[1057], 0, 24U * sizeof(real_T));
  dv2[1081] = -in11[2];
  memset(&dv2[1082], 0, 153U * sizeof(real_T));
  dv2[1235] = -1.0;
  memset(&dv2[1236], 0, 33U * sizeof(real_T));
  dv2[1269] = 1.0;
  memset(&dv2[1270], 0, 33U * sizeof(real_T));
  dv2[1303] = -in11[2];
  memset(&dv2[1304], 0, 24U * sizeof(real_T));
  dv2[1328] = -in11[2];
  memset(&dv2[1329], 0, 153U * sizeof(real_T));
  dv2[1482] = -1.0;
  memset(&dv2[1483], 0, 33U * sizeof(real_T));
  dv2[1516] = 1.0;
  memset(&dv2[1517], 0, 33U * sizeof(real_T));
  dv2[1550] = -in11[2];
  memset(&dv2[1551], 0, 24U * sizeof(real_T));
  dv2[1575] = -in11[2];
  memset(&dv2[1576], 0, 153U * sizeof(real_T));
  dv2[1729] = -1.0;
  memset(&dv2[1730], 0, 33U * sizeof(real_T));
  dv2[1763] = 1.0;
  memset(&dv2[1764], 0, 33U * sizeof(real_T));
  dv2[1797] = -in11[2];
  memset(&dv2[1798], 0, 24U * sizeof(real_T));
  dv2[1822] = -in11[2];
  memset(&dv2[1823], 0, 153U * sizeof(real_T));
  dv2[1976] = -1.0;
  memset(&dv2[1977], 0, 33U * sizeof(real_T));
  dv2[2010] = 1.0;
  memset(&dv2[2011], 0, 58U * sizeof(real_T));
  dv2[2069] = -in3[2];
  memset(&dv2[2070], 0, 153U * sizeof(real_T));
  dv2[2223] = -1.0;
  memset(&dv2[2224], 0, 33U * sizeof(real_T));
  dv2[2257] = 1.0;
  memset(&dv2[2258], 0, 58U * sizeof(real_T));
  dv2[2316] = -in3[2];
  memset(&dv2[2317], 0, 153U * sizeof(real_T));
  dv2[2470] = -1.0;
  memset(&dv2[2471], 0, 33U * sizeof(real_T));
  dv2[2504] = 1.0;
  memset(&dv2[2505], 0, 58U * sizeof(real_T));
  dv2[2563] = -in3[2];
  memset(&dv2[2564], 0, 153U * sizeof(real_T));
  dv2[2717] = -1.0;
  memset(&dv2[2718], 0, 33U * sizeof(real_T));
  dv2[2751] = 1.0;
  memset(&dv2[2752], 0, 58U * sizeof(real_T));
  dv2[2810] = -in3[2];
  memset(&dv2[2811], 0, 153U * sizeof(real_T));
  dv2[2964] = -1.0;
  memset(&dv2[2965], 0, 33U * sizeof(real_T));
  dv2[2998] = 1.0;
  memset(&dv2[2999], 0, 58U * sizeof(real_T));
  dv2[3057] = -in3[2];
  memset(&dv2[3058], 0, 153U * sizeof(real_T));
  dv2[3211] = -1.0;
  memset(&dv2[3212], 0, 33U * sizeof(real_T));
  dv2[3245] = 1.0;
  memset(&dv2[3246], 0, 58U * sizeof(real_T));
  dv2[3304] = -in3[2];
  memset(&dv2[3305], 0, 153U * sizeof(real_T));
  dv2[3458] = -1.0;
  memset(&dv2[3459], 0, 33U * sizeof(real_T));
  dv2[3492] = 1.0;
  memset(&dv2[3493], 0, 58U * sizeof(real_T));
  dv2[3551] = -in3[2];
  memset(&dv2[3552], 0, 153U * sizeof(real_T));
  dv2[3705] = -1.0;
  memset(&dv2[3706], 0, 33U * sizeof(real_T));
  dv2[3739] = 1.0;
  memset(&dv2[3740], 0, 58U * sizeof(real_T));
  dv2[3798] = -in3[2];
  memset(&dv2[3799], 0, 153U * sizeof(real_T));
  dv2[3952] = -1.0;
  memset(&dv2[3953], 0, 33U * sizeof(real_T));
  dv2[3986] = 1.0;
  memset(&dv2[3987], 0, 58U * sizeof(real_T));
  dv2[4045] = -in3[2];
  memset(&dv2[4046], 0, 153U * sizeof(real_T));
  dv2[4199] = -1.0;
  memset(&dv2[4200], 0, 33U * sizeof(real_T));
  dv2[4233] = 1.0;
  memset(&dv2[4234], 0, sizeof(real_T) << 4);
  dv2[4250] = -in11[3];
  memset(&dv2[4251], 0, 24U * sizeof(real_T));
  dv2[4275] = -in11[3];
  memset(&dv2[4276], 0, 170U * sizeof(real_T));
  dv2[4446] = -1.0;
  memset(&dv2[4447], 0, 33U * sizeof(real_T));
  dv2[4480] = 1.0;
  memset(&dv2[4481], 0, sizeof(real_T) << 4);
  dv2[4497] = -in11[3];
  memset(&dv2[4498], 0, 24U * sizeof(real_T));
  dv2[4522] = -in11[3];
  memset(&dv2[4523], 0, 170U * sizeof(real_T));
  dv2[4693] = -1.0;
  memset(&dv2[4694], 0, 33U * sizeof(real_T));
  dv2[4727] = 1.0;
  memset(&dv2[4728], 0, sizeof(real_T) << 4);
  dv2[4744] = -in11[3];
  memset(&dv2[4745], 0, 24U * sizeof(real_T));
  dv2[4769] = -in11[3];
  memset(&dv2[4770], 0, 170U * sizeof(real_T));
  dv2[4940] = -1.0;
  memset(&dv2[4941], 0, 33U * sizeof(real_T));
  dv2[4974] = 1.0;
  memset(&dv2[4975], 0, sizeof(real_T) << 4);
  dv2[4991] = -in11[3];
  memset(&dv2[4992], 0, 24U * sizeof(real_T));
  dv2[5016] = -in11[3];
  memset(&dv2[5017], 0, 170U * sizeof(real_T));
  dv2[5187] = -1.0;
  memset(&dv2[5188], 0, 33U * sizeof(real_T));
  dv2[5221] = 1.0;
  memset(&dv2[5222], 0, sizeof(real_T) << 4);
  dv2[5238] = -in11[3];
  memset(&dv2[5239], 0, 24U * sizeof(real_T));
  dv2[5263] = -in11[3];
  memset(&dv2[5264], 0, 170U * sizeof(real_T));
  dv2[5434] = -1.0;
  memset(&dv2[5435], 0, 33U * sizeof(real_T));
  dv2[5468] = 1.0;
  memset(&dv2[5469], 0, sizeof(real_T) << 4);
  dv2[5485] = -in11[3];
  memset(&dv2[5486], 0, 24U * sizeof(real_T));
  dv2[5510] = -in11[3];
  memset(&dv2[5511], 0, 170U * sizeof(real_T));
  dv2[5681] = -1.0;
  memset(&dv2[5682], 0, 33U * sizeof(real_T));
  dv2[5715] = 1.0;
  memset(&dv2[5716], 0, sizeof(real_T) << 4);
  dv2[5732] = -in11[3];
  memset(&dv2[5733], 0, 24U * sizeof(real_T));
  dv2[5757] = -in11[3];
  memset(&dv2[5758], 0, 170U * sizeof(real_T));
  dv2[5928] = -1.0;
  memset(&dv2[5929], 0, 33U * sizeof(real_T));
  dv2[5962] = 1.0;
  memset(&dv2[5963], 0, sizeof(real_T) << 4);
  dv2[5979] = -in11[3];
  memset(&dv2[5980], 0, 24U * sizeof(real_T));
  dv2[6004] = -in11[3];
  memset(&dv2[6005], 0, 170U * sizeof(real_T));
  dv2[6175] = -1.0;
  memset(&dv2[6176], 0, 33U * sizeof(real_T));
  dv2[6209] = 1.0;
  memset(&dv2[6210], 0, 41U * sizeof(real_T));
  dv2[6251] = -in3[3];
  memset(&dv2[6252], 0, 170U * sizeof(real_T));
  dv2[6422] = -1.0;
  memset(&dv2[6423], 0, 33U * sizeof(real_T));
  dv2[6456] = 1.0;
  memset(&dv2[6457], 0, 41U * sizeof(real_T));
  dv2[6498] = -in3[3];
  memset(&dv2[6499], 0, 170U * sizeof(real_T));
  dv2[6669] = -1.0;
  memset(&dv2[6670], 0, 33U * sizeof(real_T));
  dv2[6703] = 1.0;
  memset(&dv2[6704], 0, 41U * sizeof(real_T));
  dv2[6745] = -in3[3];
  memset(&dv2[6746], 0, 170U * sizeof(real_T));
  dv2[6916] = -1.0;
  memset(&dv2[6917], 0, 33U * sizeof(real_T));
  dv2[6950] = 1.0;
  memset(&dv2[6951], 0, 41U * sizeof(real_T));
  dv2[6992] = -in3[3];
  memset(&dv2[6993], 0, 170U * sizeof(real_T));
  dv2[7163] = -1.0;
  memset(&dv2[7164], 0, 33U * sizeof(real_T));
  dv2[7197] = 1.0;
  memset(&dv2[7198], 0, 41U * sizeof(real_T));
  dv2[7239] = -in3[3];
  memset(&dv2[7240], 0, 170U * sizeof(real_T));
  dv2[7410] = -1.0;
  memset(&dv2[7411], 0, 33U * sizeof(real_T));
  dv2[7444] = 1.0;
  memset(&dv2[7445], 0, 41U * sizeof(real_T));
  dv2[7486] = -in3[3];
  memset(&dv2[7487], 0, 170U * sizeof(real_T));
  dv2[7657] = -1.0;
  memset(&dv2[7658], 0, 33U * sizeof(real_T));
  dv2[7691] = 1.0;
  memset(&dv2[7692], 0, 41U * sizeof(real_T));
  dv2[7733] = -in3[3];
  memset(&dv2[7734], 0, 170U * sizeof(real_T));
  dv2[7904] = -1.0;
  memset(&dv2[7905], 0, 33U * sizeof(real_T));
  dv2[7938] = 1.0;
  memset(&dv2[7939], 0, 41U * sizeof(real_T));
  dv2[7980] = -in3[3];
  memset(&dv2[7981], 0, 170U * sizeof(real_T));
  dv2[8151] = -1.0;
  memset(&dv2[8152], 0, 33U * sizeof(real_T));
  dv2[8185] = 1.0;
  memset(&dv2[8186], 0, 41U * sizeof(real_T));
  dv2[8227] = -in3[3];
  memset(&dv2[8228], 0, 136U * sizeof(real_T));
  dv2[8364] = 1.0;
  memset(&dv2[8365], 0, 33U * sizeof(real_T));
  dv2[8398] = -1.0;
  memset(&dv2[8399], 0, 75U * sizeof(real_T));
  dv2[8474] = 1.0;
  dv2[8475] = 0.0;
  dv2[8476] = 0.0;
  dv2[8477] = -1.0;
  memset(&dv2[8478], 0, 10U * sizeof(real_T));
  dv2[8488] = 1.0;
  memset(&dv2[8489], 0, 33U * sizeof(real_T));
  dv2[8522] = -1.0;
  memset(&dv2[8523], 0, 75U * sizeof(real_T));
  dv2[8598] = 1.0;
  dv2[8599] = 0.0;
  dv2[8600] = 0.0;
  dv2[8601] = -1.0;
  memset(&dv2[8602], 0, 10U * sizeof(real_T));
  dv2[8612] = 1.0;
  memset(&dv2[8613], 0, 33U * sizeof(real_T));
  dv2[8646] = -1.0;
  memset(&dv2[8647], 0, 75U * sizeof(real_T));
  dv2[8722] = 1.0;
  dv2[8723] = 0.0;
  dv2[8724] = 0.0;
  dv2[8725] = -1.0;
  memset(&dv2[8726], 0, 10U * sizeof(real_T));
  dv2[8736] = 1.0;
  memset(&dv2[8737], 0, 33U * sizeof(real_T));
  dv2[8770] = -1.0;
  memset(&dv2[8771], 0, 89U * sizeof(real_T));
  dv2[8860] = 1.0;
  memset(&dv2[8861], 0, 33U * sizeof(real_T));
  dv2[8894] = -1.0;
  memset(&dv2[8895], 0, 89U * sizeof(real_T));
  dv2[8984] = 1.0;
  memset(&dv2[8985], 0, 33U * sizeof(real_T));
  dv2[9018] = -1.0;
  memset(&dv2[9019], 0, 89U * sizeof(real_T));
  dv2[9108] = 1.0;
  memset(&dv2[9109], 0, 33U * sizeof(real_T));
  dv2[9142] = -1.0;
  memset(&dv2[9143], 0, 89U * sizeof(real_T));
  dv2[9232] = 1.0;
  memset(&dv2[9233], 0, 33U * sizeof(real_T));
  dv2[9266] = -1.0;
  memset(&dv2[9267], 0, 89U * sizeof(real_T));
  dv2[9356] = 1.0;
  memset(&dv2[9357], 0, 33U * sizeof(real_T));
  dv2[9390] = -1.0;
  memset(&dv2[9391], 0, 89U * sizeof(real_T));
  dv2[9480] = 1.0;
  memset(&dv2[9481], 0, 33U * sizeof(real_T));
  dv2[9514] = -1.0;
  memset(&dv2[9515], 0, 89U * sizeof(real_T));
  dv2[9604] = 1.0;
  memset(&dv2[9605], 0, 33U * sizeof(real_T));
  dv2[9638] = -1.0;
  memset(&dv2[9639], 0, 89U * sizeof(real_T));
  dv2[9728] = 1.0;
  memset(&dv2[9729], 0, 33U * sizeof(real_T));
  dv2[9762] = -1.0;
  memset(&dv2[9763], 0, 89U * sizeof(real_T));
  dv2[9852] = 1.0;
  memset(&dv2[9853], 0, 33U * sizeof(real_T));
  dv2[9886] = -1.0;
  memset(&dv2[9887], 0, 89U * sizeof(real_T));
  dv2[9976] = 1.0;
  memset(&dv2[9977], 0, 33U * sizeof(real_T));
  dv2[10010] = -1.0;
  memset(&dv2[10011], 0, 89U * sizeof(real_T));
  dv2[10100] = 1.0;
  memset(&dv2[10101], 0, 33U * sizeof(real_T));
  dv2[10134] = -1.0;
  memset(&dv2[10135], 0, 89U * sizeof(real_T));
  dv2[10224] = 1.0;
  memset(&dv2[10225], 0, 33U * sizeof(real_T));
  dv2[10258] = -1.0;
  memset(&dv2[10259], 0, 89U * sizeof(real_T));
  dv2[10348] = 1.0;
  memset(&dv2[10349], 0, 33U * sizeof(real_T));
  dv2[10382] = -1.0;
  memset(&dv2[10383], 0, 89U * sizeof(real_T));
  dv2[10472] = 1.0;
  memset(&dv2[10473], 0, 33U * sizeof(real_T));
  dv2[10506] = -1.0;
  memset(&dv2[10507], 0, sizeof(real_T) << 6);
  dv2[10571] = 1.0;
  dv2[10572] = 0.0;
  dv2[10573] = 0.0;
  dv2[10574] = -1.0;
  memset(&dv2[10575], 0, 21U * sizeof(real_T));
  dv2[10596] = 1.0;
  memset(&dv2[10597], 0, 33U * sizeof(real_T));
  dv2[10630] = -1.0;
  memset(&dv2[10631], 0, sizeof(real_T) << 6);
  dv2[10695] = 1.0;
  dv2[10696] = 0.0;
  dv2[10697] = 0.0;
  dv2[10698] = -1.0;
  memset(&dv2[10699], 0, 21U * sizeof(real_T));
  dv2[10720] = 1.0;
  memset(&dv2[10721], 0, 33U * sizeof(real_T));
  dv2[10754] = -1.0;
  memset(&dv2[10755], 0, sizeof(real_T) << 6);
  dv2[10819] = 1.0;
  dv2[10820] = 0.0;
  dv2[10821] = 0.0;
  dv2[10822] = -1.0;
  memset(&dv2[10823], 0, 21U * sizeof(real_T));
  dv2[10844] = 1.0;
  memset(&dv2[10845], 0, 33U * sizeof(real_T));
  dv2[10878] = -1.0;
  memset(&dv2[10879], 0, 89U * sizeof(real_T));
  dv2[10968] = 1.0;
  memset(&dv2[10969], 0, 33U * sizeof(real_T));
  dv2[11002] = -1.0;
  memset(&dv2[11003], 0, 89U * sizeof(real_T));
  dv2[11092] = 1.0;
  memset(&dv2[11093], 0, 33U * sizeof(real_T));
  dv2[11126] = -1.0;
  memset(&dv2[11127], 0, 89U * sizeof(real_T));
  dv2[11216] = 1.0;
  memset(&dv2[11217], 0, 33U * sizeof(real_T));
  dv2[11250] = -1.0;
  memset(&dv2[11251], 0, 89U * sizeof(real_T));
  dv2[11340] = 1.0;
  memset(&dv2[11341], 0, 33U * sizeof(real_T));
  dv2[11374] = -1.0;
  memset(&dv2[11375], 0, 89U * sizeof(real_T));
  dv2[11464] = 1.0;
  memset(&dv2[11465], 0, 33U * sizeof(real_T));
  dv2[11498] = -1.0;
  memset(&dv2[11499], 0, 89U * sizeof(real_T));
  dv2[11588] = 1.0;
  memset(&dv2[11589], 0, 33U * sizeof(real_T));
  dv2[11622] = -1.0;
  memset(&dv2[11623], 0, 89U * sizeof(real_T));
  dv2[11712] = 1.0;
  memset(&dv2[11713], 0, 33U * sizeof(real_T));
  dv2[11746] = -1.0;
  memset(&dv2[11747], 0, 89U * sizeof(real_T));
  dv2[11836] = 1.0;
  memset(&dv2[11837], 0, 33U * sizeof(real_T));
  dv2[11870] = -1.0;
  memset(&dv2[11871], 0, 89U * sizeof(real_T));
  dv2[11960] = 1.0;
  memset(&dv2[11961], 0, 33U * sizeof(real_T));
  dv2[11994] = -1.0;
  memset(&dv2[11995], 0, 89U * sizeof(real_T));
  dv2[12084] = 1.0;
  memset(&dv2[12085], 0, 33U * sizeof(real_T));
  dv2[12118] = -1.0;
  memset(&dv2[12119], 0, 89U * sizeof(real_T));
  dv2[12208] = 1.0;
  memset(&dv2[12209], 0, 33U * sizeof(real_T));
  dv2[12242] = -1.0;
  memset(&dv2[12243], 0, 89U * sizeof(real_T));
  dv2[12332] = 1.0;
  memset(&dv2[12333], 0, 33U * sizeof(real_T));
  dv2[12366] = -1.0;
  memset(&dv2[12367], 0, 89U * sizeof(real_T));
  dv2[12456] = 1.0;
  memset(&dv2[12457], 0, 33U * sizeof(real_T));
  dv2[12490] = -1.0;
  memset(&dv2[12491], 0, 669U * sizeof(real_T));
  dv2[13160] = 1.0;
  memset(&dv2[13161], 0, 445U * sizeof(real_T));
  dv2[13606] = -1.0;
  memset(&dv2[13607], 0, sizeof(real_T) << 4);
  dv2[13623] = -1.0;
  memset(&dv2[13624], 0, 106U * sizeof(real_T));
  dv2[13730] = -1.0;
  memset(&dv2[13731], 0, sizeof(real_T) << 4);
  dv2[13747] = -1.0;
  memset(&dv2[13748], 0, 106U * sizeof(real_T));
  dv2[13854] = -1.0;
  memset(&dv2[13855], 0, sizeof(real_T) << 4);
  dv2[13871] = -1.0;
  memset(&dv2[13872], 0, 106U * sizeof(real_T));
  dv2[13978] = -1.0;
  memset(&dv2[13979], 0, sizeof(real_T) << 4);
  dv2[13995] = -1.0;
  memset(&dv2[13996], 0, 106U * sizeof(real_T));
  dv2[14102] = -1.0;
  memset(&dv2[14103], 0, sizeof(real_T) << 4);
  dv2[14119] = -1.0;
  memset(&dv2[14120], 0, 106U * sizeof(real_T));
  dv2[14226] = -1.0;
  memset(&dv2[14227], 0, sizeof(real_T) << 4);
  dv2[14243] = -1.0;
  memset(&dv2[14244], 0, 106U * sizeof(real_T));
  dv2[14350] = -1.0;
  memset(&dv2[14351], 0, sizeof(real_T) << 4);
  dv2[14367] = -1.0;
  memset(&dv2[14368], 0, 106U * sizeof(real_T));
  dv2[14474] = -1.0;
  memset(&dv2[14475], 0, sizeof(real_T) << 4);
  dv2[14491] = -1.0;
  memset(&dv2[14492], 0, 106U * sizeof(real_T));
  dv2[14598] = -1.0;
  memset(&dv2[14599], 0, sizeof(real_T) << 4);
  dv2[14615] = -1.0;
  memset(&dv2[14616], 0, 106U * sizeof(real_T));
  dv2[14722] = -1.0;
  memset(&dv2[14723], 0, sizeof(real_T) << 4);
  dv2[14739] = -1.0;
  memset(&dv2[14740], 0, 106U * sizeof(real_T));
  dv2[14846] = -1.0;
  memset(&dv2[14847], 0, sizeof(real_T) << 4);
  dv2[14863] = -1.0;
  memset(&dv2[14864], 0, 106U * sizeof(real_T));
  dv2[14970] = -1.0;
  memset(&dv2[14971], 0, sizeof(real_T) << 4);
  dv2[14987] = -1.0;
  memset(&dv2[14988], 0, 106U * sizeof(real_T));
  dv2[15094] = -1.0;
  memset(&dv2[15095], 0, sizeof(real_T) << 4);
  dv2[15111] = -1.0;
  memset(&dv2[15112], 0, 106U * sizeof(real_T));
  dv2[15218] = -1.0;
  memset(&dv2[15219], 0, sizeof(real_T) << 4);
  dv2[15235] = -1.0;
  memset(&dv2[15236], 0, 106U * sizeof(real_T));
  dv2[15342] = -1.0;
  memset(&dv2[15343], 0, sizeof(real_T) << 4);
  dv2[15359] = -1.0;
  memset(&dv2[15360], 0, 106U * sizeof(real_T));
  dv2[15466] = -1.0;
  memset(&dv2[15467], 0, sizeof(real_T) << 4);
  dv2[15483] = -1.0;
  memset(&dv2[15484], 0, 106U * sizeof(real_T));
  dv2[15590] = -1.0;
  memset(&dv2[15591], 0, sizeof(real_T) << 4);
  dv2[15607] = -1.0;
  memset(&dv2[15608], 0, 135U * sizeof(real_T));
  dv2[15743] = -1.0;
  memset(&dv2[15744], 0, 2078U * sizeof(real_T));
  dv2[17822] = -1.0;
  dv2[17823] = 0.0;
  dv2[17824] = 0.0;
  dv2[17825] = -1.0;
  memset(&dv2[17826], 0, 120U * sizeof(real_T));
  dv2[17946] = -1.0;
  dv2[17947] = 0.0;
  dv2[17948] = 0.0;
  dv2[17949] = -1.0;
  memset(&dv2[17950], 0, 120U * sizeof(real_T));
  dv2[18070] = -1.0;
  dv2[18071] = 0.0;
  dv2[18072] = 0.0;
  dv2[18073] = -1.0;
  memset(&dv2[18074], 0, 246U * sizeof(real_T));
  dv2[18320] = -1.0;
  dv2[18321] = 0.0;
  dv2[18322] = 0.0;
  dv2[18323] = -1.0;
  memset(&dv2[18324], 0, 120U * sizeof(real_T));
  dv2[18444] = -1.0;
  dv2[18445] = 0.0;
  dv2[18446] = 0.0;
  dv2[18447] = -1.0;
  memset(&dv2[18448], 0, 120U * sizeof(real_T));
  dv2[18568] = -1.0;
  dv2[18569] = 0.0;
  dv2[18570] = 0.0;
  dv2[18571] = -1.0;
  memset(&dv2[18572], 0, 1108U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 123], &dv2[i1 * 123], 123U * sizeof(real_T));
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
  biq[112] = t14;
  biq[113] = t15;
  biq[114] = t15;
  biq[115] = t15;
  biq[116] = t16;
  biq[117] = t16;
  biq[118] = t16;
  biq[119] = t17;
  biq[120] = t17;
  biq[121] = t17;
  biq[122] = -in9[1];
}

/* End of code generation (IqFast_LeftStart1V20.cpp) */
