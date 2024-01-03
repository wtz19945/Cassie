/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_LeftStart0V20.cpp
 *
 * Code generation for function 'IqFast_LeftStart0V20'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV20_form_Step0.h"
#include "IqFast_LeftStart0V20.h"

/* Variable Definitions */
static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  13,                                  /* colNo */
  "in4",                               /* aName */
  "IqFast_LeftStart0V20",              /* fName */
  "D:\\Cassie_Avoidance\\Obstacle_Avoidance_OpenLoopNoCassie\\LIPM_Fast_Avoidance\\Functions\\MatlabFunc\\IqFast_LeftStart0V20.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void IqFast_LeftStart0V20(const emlrtStack *sp, const real_T in3[4], const
  emxArray_real_T *in4, const real_T in5[17], real_T Cpx1, real_T Cpy1, const
  real_T in8[3], const real_T in9[3], const real_T in10[2], const real_T in11[4],
  real_T Aiq[20320], real_T biq[127])
{
  int32_T i1;
  real_T dv2[20320];
  real_T t14;
  real_T t3;
  real_T t7;
  real_T t15;
  real_T t16;
  real_T t17;

  /* IQFAST_LEFTSTART0V20 */
  /*     [AIQ,BIQ] = IQFAST_LEFTSTART0V20(IN1,IN2,IN3,IN4,IN5,CPX1,CPY1,IN8,IN9,IN10,IN11) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Aug-2023 21:15:42 */
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
  memset(&dv2[94], 0, 161U * sizeof(real_T));
  dv2[255] = -1.0;
  memset(&dv2[256], 0, 33U * sizeof(real_T));
  dv2[289] = 1.0;
  memset(&dv2[290], 0, 33U * sizeof(real_T));
  dv2[323] = -in11[2];
  memset(&dv2[324], 0, 24U * sizeof(real_T));
  dv2[348] = -in11[2];
  memset(&dv2[349], 0, 161U * sizeof(real_T));
  dv2[510] = -1.0;
  memset(&dv2[511], 0, 33U * sizeof(real_T));
  dv2[544] = 1.0;
  memset(&dv2[545], 0, 33U * sizeof(real_T));
  dv2[578] = -in11[2];
  memset(&dv2[579], 0, 24U * sizeof(real_T));
  dv2[603] = -in11[2];
  memset(&dv2[604], 0, 161U * sizeof(real_T));
  dv2[765] = -1.0;
  memset(&dv2[766], 0, 33U * sizeof(real_T));
  dv2[799] = 1.0;
  memset(&dv2[800], 0, 33U * sizeof(real_T));
  dv2[833] = -in11[2];
  memset(&dv2[834], 0, 24U * sizeof(real_T));
  dv2[858] = -in11[2];
  memset(&dv2[859], 0, 161U * sizeof(real_T));
  dv2[1020] = -1.0;
  memset(&dv2[1021], 0, 33U * sizeof(real_T));
  dv2[1054] = 1.0;
  memset(&dv2[1055], 0, 33U * sizeof(real_T));
  dv2[1088] = -in11[2];
  memset(&dv2[1089], 0, 24U * sizeof(real_T));
  dv2[1113] = -in11[2];
  memset(&dv2[1114], 0, 161U * sizeof(real_T));
  dv2[1275] = -1.0;
  memset(&dv2[1276], 0, 33U * sizeof(real_T));
  dv2[1309] = 1.0;
  memset(&dv2[1310], 0, 33U * sizeof(real_T));
  dv2[1343] = -in11[2];
  memset(&dv2[1344], 0, 24U * sizeof(real_T));
  dv2[1368] = -in11[2];
  memset(&dv2[1369], 0, 161U * sizeof(real_T));
  dv2[1530] = -1.0;
  memset(&dv2[1531], 0, 33U * sizeof(real_T));
  dv2[1564] = 1.0;
  memset(&dv2[1565], 0, 33U * sizeof(real_T));
  dv2[1598] = -in11[2];
  memset(&dv2[1599], 0, 24U * sizeof(real_T));
  dv2[1623] = -in11[2];
  memset(&dv2[1624], 0, 161U * sizeof(real_T));
  dv2[1785] = -1.0;
  memset(&dv2[1786], 0, 33U * sizeof(real_T));
  dv2[1819] = 1.0;
  memset(&dv2[1820], 0, 33U * sizeof(real_T));
  dv2[1853] = -in11[2];
  memset(&dv2[1854], 0, 24U * sizeof(real_T));
  dv2[1878] = -in11[2];
  memset(&dv2[1879], 0, 161U * sizeof(real_T));
  dv2[2040] = -1.0;
  memset(&dv2[2041], 0, 33U * sizeof(real_T));
  dv2[2074] = 1.0;
  memset(&dv2[2075], 0, 58U * sizeof(real_T));
  dv2[2133] = -in3[2];
  memset(&dv2[2134], 0, 161U * sizeof(real_T));
  dv2[2295] = -1.0;
  memset(&dv2[2296], 0, 33U * sizeof(real_T));
  dv2[2329] = 1.0;
  memset(&dv2[2330], 0, 58U * sizeof(real_T));
  dv2[2388] = -in3[2];
  memset(&dv2[2389], 0, 161U * sizeof(real_T));
  dv2[2550] = -1.0;
  memset(&dv2[2551], 0, 33U * sizeof(real_T));
  dv2[2584] = 1.0;
  memset(&dv2[2585], 0, 58U * sizeof(real_T));
  dv2[2643] = -in3[2];
  memset(&dv2[2644], 0, 161U * sizeof(real_T));
  dv2[2805] = -1.0;
  memset(&dv2[2806], 0, 33U * sizeof(real_T));
  dv2[2839] = 1.0;
  memset(&dv2[2840], 0, 58U * sizeof(real_T));
  dv2[2898] = -in3[2];
  memset(&dv2[2899], 0, 161U * sizeof(real_T));
  dv2[3060] = -1.0;
  memset(&dv2[3061], 0, 33U * sizeof(real_T));
  dv2[3094] = 1.0;
  memset(&dv2[3095], 0, 58U * sizeof(real_T));
  dv2[3153] = -in3[2];
  memset(&dv2[3154], 0, 161U * sizeof(real_T));
  dv2[3315] = -1.0;
  memset(&dv2[3316], 0, 33U * sizeof(real_T));
  dv2[3349] = 1.0;
  memset(&dv2[3350], 0, 58U * sizeof(real_T));
  dv2[3408] = -in3[2];
  memset(&dv2[3409], 0, 161U * sizeof(real_T));
  dv2[3570] = -1.0;
  memset(&dv2[3571], 0, 33U * sizeof(real_T));
  dv2[3604] = 1.0;
  memset(&dv2[3605], 0, 58U * sizeof(real_T));
  dv2[3663] = -in3[2];
  memset(&dv2[3664], 0, 161U * sizeof(real_T));
  dv2[3825] = -1.0;
  memset(&dv2[3826], 0, 33U * sizeof(real_T));
  dv2[3859] = 1.0;
  memset(&dv2[3860], 0, 58U * sizeof(real_T));
  dv2[3918] = -in3[2];
  memset(&dv2[3919], 0, 161U * sizeof(real_T));
  dv2[4080] = -1.0;
  memset(&dv2[4081], 0, 33U * sizeof(real_T));
  dv2[4114] = 1.0;
  memset(&dv2[4115], 0, 58U * sizeof(real_T));
  dv2[4173] = -in3[2];
  memset(&dv2[4174], 0, 161U * sizeof(real_T));
  dv2[4335] = -1.0;
  memset(&dv2[4336], 0, 33U * sizeof(real_T));
  dv2[4369] = 1.0;
  memset(&dv2[4370], 0, sizeof(real_T) << 4);
  dv2[4386] = -in11[3];
  memset(&dv2[4387], 0, 24U * sizeof(real_T));
  dv2[4411] = -in11[3];
  memset(&dv2[4412], 0, 178U * sizeof(real_T));
  dv2[4590] = -1.0;
  memset(&dv2[4591], 0, 33U * sizeof(real_T));
  dv2[4624] = 1.0;
  memset(&dv2[4625], 0, sizeof(real_T) << 4);
  dv2[4641] = -in11[3];
  memset(&dv2[4642], 0, 24U * sizeof(real_T));
  dv2[4666] = -in11[3];
  memset(&dv2[4667], 0, 178U * sizeof(real_T));
  dv2[4845] = -1.0;
  memset(&dv2[4846], 0, 33U * sizeof(real_T));
  dv2[4879] = 1.0;
  memset(&dv2[4880], 0, sizeof(real_T) << 4);
  dv2[4896] = -in11[3];
  memset(&dv2[4897], 0, 24U * sizeof(real_T));
  dv2[4921] = -in11[3];
  memset(&dv2[4922], 0, 178U * sizeof(real_T));
  dv2[5100] = -1.0;
  memset(&dv2[5101], 0, 33U * sizeof(real_T));
  dv2[5134] = 1.0;
  memset(&dv2[5135], 0, sizeof(real_T) << 4);
  dv2[5151] = -in11[3];
  memset(&dv2[5152], 0, 24U * sizeof(real_T));
  dv2[5176] = -in11[3];
  memset(&dv2[5177], 0, 178U * sizeof(real_T));
  dv2[5355] = -1.0;
  memset(&dv2[5356], 0, 33U * sizeof(real_T));
  dv2[5389] = 1.0;
  memset(&dv2[5390], 0, sizeof(real_T) << 4);
  dv2[5406] = -in11[3];
  memset(&dv2[5407], 0, 24U * sizeof(real_T));
  dv2[5431] = -in11[3];
  memset(&dv2[5432], 0, 178U * sizeof(real_T));
  dv2[5610] = -1.0;
  memset(&dv2[5611], 0, 33U * sizeof(real_T));
  dv2[5644] = 1.0;
  memset(&dv2[5645], 0, sizeof(real_T) << 4);
  dv2[5661] = -in11[3];
  memset(&dv2[5662], 0, 24U * sizeof(real_T));
  dv2[5686] = -in11[3];
  memset(&dv2[5687], 0, 178U * sizeof(real_T));
  dv2[5865] = -1.0;
  memset(&dv2[5866], 0, 33U * sizeof(real_T));
  dv2[5899] = 1.0;
  memset(&dv2[5900], 0, sizeof(real_T) << 4);
  dv2[5916] = -in11[3];
  memset(&dv2[5917], 0, 24U * sizeof(real_T));
  dv2[5941] = -in11[3];
  memset(&dv2[5942], 0, 178U * sizeof(real_T));
  dv2[6120] = -1.0;
  memset(&dv2[6121], 0, 33U * sizeof(real_T));
  dv2[6154] = 1.0;
  memset(&dv2[6155], 0, sizeof(real_T) << 4);
  dv2[6171] = -in11[3];
  memset(&dv2[6172], 0, 24U * sizeof(real_T));
  dv2[6196] = -in11[3];
  memset(&dv2[6197], 0, 178U * sizeof(real_T));
  dv2[6375] = -1.0;
  memset(&dv2[6376], 0, 33U * sizeof(real_T));
  dv2[6409] = 1.0;
  memset(&dv2[6410], 0, 41U * sizeof(real_T));
  dv2[6451] = -in3[3];
  memset(&dv2[6452], 0, 178U * sizeof(real_T));
  dv2[6630] = -1.0;
  memset(&dv2[6631], 0, 33U * sizeof(real_T));
  dv2[6664] = 1.0;
  memset(&dv2[6665], 0, 41U * sizeof(real_T));
  dv2[6706] = -in3[3];
  memset(&dv2[6707], 0, 178U * sizeof(real_T));
  dv2[6885] = -1.0;
  memset(&dv2[6886], 0, 33U * sizeof(real_T));
  dv2[6919] = 1.0;
  memset(&dv2[6920], 0, 41U * sizeof(real_T));
  dv2[6961] = -in3[3];
  memset(&dv2[6962], 0, 178U * sizeof(real_T));
  dv2[7140] = -1.0;
  memset(&dv2[7141], 0, 33U * sizeof(real_T));
  dv2[7174] = 1.0;
  memset(&dv2[7175], 0, 41U * sizeof(real_T));
  dv2[7216] = -in3[3];
  memset(&dv2[7217], 0, 178U * sizeof(real_T));
  dv2[7395] = -1.0;
  memset(&dv2[7396], 0, 33U * sizeof(real_T));
  dv2[7429] = 1.0;
  memset(&dv2[7430], 0, 41U * sizeof(real_T));
  dv2[7471] = -in3[3];
  memset(&dv2[7472], 0, 178U * sizeof(real_T));
  dv2[7650] = -1.0;
  memset(&dv2[7651], 0, 33U * sizeof(real_T));
  dv2[7684] = 1.0;
  memset(&dv2[7685], 0, 41U * sizeof(real_T));
  dv2[7726] = -in3[3];
  memset(&dv2[7727], 0, 178U * sizeof(real_T));
  dv2[7905] = -1.0;
  memset(&dv2[7906], 0, 33U * sizeof(real_T));
  dv2[7939] = 1.0;
  memset(&dv2[7940], 0, 41U * sizeof(real_T));
  dv2[7981] = -in3[3];
  memset(&dv2[7982], 0, 178U * sizeof(real_T));
  dv2[8160] = -1.0;
  memset(&dv2[8161], 0, 33U * sizeof(real_T));
  dv2[8194] = 1.0;
  memset(&dv2[8195], 0, 41U * sizeof(real_T));
  dv2[8236] = -in3[3];
  memset(&dv2[8237], 0, 178U * sizeof(real_T));
  dv2[8415] = -1.0;
  memset(&dv2[8416], 0, 33U * sizeof(real_T));
  dv2[8449] = 1.0;
  memset(&dv2[8450], 0, 41U * sizeof(real_T));
  dv2[8491] = -in3[3];
  memset(&dv2[8492], 0, 144U * sizeof(real_T));
  dv2[8636] = 1.0;
  memset(&dv2[8637], 0, 33U * sizeof(real_T));
  dv2[8670] = -1.0;
  memset(&dv2[8671], 0, 75U * sizeof(real_T));
  dv2[8746] = 1.0;
  dv2[8747] = 0.0;
  dv2[8748] = 0.0;
  dv2[8749] = 0.0;
  dv2[8750] = -1.0;
  memset(&dv2[8751], 0, 13U * sizeof(real_T));
  dv2[8764] = 1.0;
  memset(&dv2[8765], 0, 33U * sizeof(real_T));
  dv2[8798] = -1.0;
  memset(&dv2[8799], 0, 75U * sizeof(real_T));
  dv2[8874] = 1.0;
  dv2[8875] = 0.0;
  dv2[8876] = 0.0;
  dv2[8877] = 0.0;
  dv2[8878] = -1.0;
  memset(&dv2[8879], 0, 13U * sizeof(real_T));
  dv2[8892] = 1.0;
  memset(&dv2[8893], 0, 33U * sizeof(real_T));
  dv2[8926] = -1.0;
  memset(&dv2[8927], 0, 75U * sizeof(real_T));
  dv2[9002] = 1.0;
  dv2[9003] = 0.0;
  dv2[9004] = 0.0;
  dv2[9005] = 0.0;
  dv2[9006] = -1.0;
  memset(&dv2[9007], 0, 13U * sizeof(real_T));
  dv2[9020] = 1.0;
  memset(&dv2[9021], 0, 33U * sizeof(real_T));
  dv2[9054] = -1.0;
  memset(&dv2[9055], 0, 75U * sizeof(real_T));
  dv2[9130] = 1.0;
  dv2[9131] = 0.0;
  dv2[9132] = 0.0;
  dv2[9133] = 0.0;
  dv2[9134] = -1.0;
  memset(&dv2[9135], 0, 13U * sizeof(real_T));
  dv2[9148] = 1.0;
  memset(&dv2[9149], 0, 33U * sizeof(real_T));
  dv2[9182] = -1.0;
  memset(&dv2[9183], 0, 93U * sizeof(real_T));
  dv2[9276] = 1.0;
  memset(&dv2[9277], 0, 33U * sizeof(real_T));
  dv2[9310] = -1.0;
  memset(&dv2[9311], 0, 93U * sizeof(real_T));
  dv2[9404] = 1.0;
  memset(&dv2[9405], 0, 33U * sizeof(real_T));
  dv2[9438] = -1.0;
  memset(&dv2[9439], 0, 93U * sizeof(real_T));
  dv2[9532] = 1.0;
  memset(&dv2[9533], 0, 33U * sizeof(real_T));
  dv2[9566] = -1.0;
  memset(&dv2[9567], 0, 93U * sizeof(real_T));
  dv2[9660] = 1.0;
  memset(&dv2[9661], 0, 33U * sizeof(real_T));
  dv2[9694] = -1.0;
  memset(&dv2[9695], 0, 93U * sizeof(real_T));
  dv2[9788] = 1.0;
  memset(&dv2[9789], 0, 33U * sizeof(real_T));
  dv2[9822] = -1.0;
  memset(&dv2[9823], 0, 93U * sizeof(real_T));
  dv2[9916] = 1.0;
  memset(&dv2[9917], 0, 33U * sizeof(real_T));
  dv2[9950] = -1.0;
  memset(&dv2[9951], 0, 93U * sizeof(real_T));
  dv2[10044] = 1.0;
  memset(&dv2[10045], 0, 33U * sizeof(real_T));
  dv2[10078] = -1.0;
  memset(&dv2[10079], 0, 93U * sizeof(real_T));
  dv2[10172] = 1.0;
  memset(&dv2[10173], 0, 33U * sizeof(real_T));
  dv2[10206] = -1.0;
  memset(&dv2[10207], 0, 93U * sizeof(real_T));
  dv2[10300] = 1.0;
  memset(&dv2[10301], 0, 33U * sizeof(real_T));
  dv2[10334] = -1.0;
  memset(&dv2[10335], 0, 93U * sizeof(real_T));
  dv2[10428] = 1.0;
  memset(&dv2[10429], 0, 33U * sizeof(real_T));
  dv2[10462] = -1.0;
  memset(&dv2[10463], 0, 93U * sizeof(real_T));
  dv2[10556] = 1.0;
  memset(&dv2[10557], 0, 33U * sizeof(real_T));
  dv2[10590] = -1.0;
  memset(&dv2[10591], 0, 93U * sizeof(real_T));
  dv2[10684] = 1.0;
  memset(&dv2[10685], 0, 33U * sizeof(real_T));
  dv2[10718] = -1.0;
  memset(&dv2[10719], 0, 93U * sizeof(real_T));
  dv2[10812] = 1.0;
  memset(&dv2[10813], 0, 33U * sizeof(real_T));
  dv2[10846] = -1.0;
  memset(&dv2[10847], 0, 66U * sizeof(real_T));
  dv2[10913] = 1.0;
  dv2[10914] = 0.0;
  dv2[10915] = 0.0;
  dv2[10916] = 0.0;
  dv2[10917] = -1.0;
  memset(&dv2[10918], 0, 22U * sizeof(real_T));
  dv2[10940] = 1.0;
  memset(&dv2[10941], 0, 33U * sizeof(real_T));
  dv2[10974] = -1.0;
  memset(&dv2[10975], 0, 66U * sizeof(real_T));
  dv2[11041] = 1.0;
  dv2[11042] = 0.0;
  dv2[11043] = 0.0;
  dv2[11044] = 0.0;
  dv2[11045] = -1.0;
  memset(&dv2[11046], 0, 22U * sizeof(real_T));
  dv2[11068] = 1.0;
  memset(&dv2[11069], 0, 33U * sizeof(real_T));
  dv2[11102] = -1.0;
  memset(&dv2[11103], 0, 66U * sizeof(real_T));
  dv2[11169] = 1.0;
  dv2[11170] = 0.0;
  dv2[11171] = 0.0;
  dv2[11172] = 0.0;
  dv2[11173] = -1.0;
  memset(&dv2[11174], 0, 22U * sizeof(real_T));
  dv2[11196] = 1.0;
  memset(&dv2[11197], 0, 33U * sizeof(real_T));
  dv2[11230] = -1.0;
  memset(&dv2[11231], 0, 66U * sizeof(real_T));
  dv2[11297] = 1.0;
  dv2[11298] = 0.0;
  dv2[11299] = 0.0;
  dv2[11300] = 0.0;
  dv2[11301] = -1.0;
  memset(&dv2[11302], 0, 22U * sizeof(real_T));
  dv2[11324] = 1.0;
  memset(&dv2[11325], 0, 33U * sizeof(real_T));
  dv2[11358] = -1.0;
  memset(&dv2[11359], 0, 93U * sizeof(real_T));
  dv2[11452] = 1.0;
  memset(&dv2[11453], 0, 33U * sizeof(real_T));
  dv2[11486] = -1.0;
  memset(&dv2[11487], 0, 93U * sizeof(real_T));
  dv2[11580] = 1.0;
  memset(&dv2[11581], 0, 33U * sizeof(real_T));
  dv2[11614] = -1.0;
  memset(&dv2[11615], 0, 93U * sizeof(real_T));
  dv2[11708] = 1.0;
  memset(&dv2[11709], 0, 33U * sizeof(real_T));
  dv2[11742] = -1.0;
  memset(&dv2[11743], 0, 93U * sizeof(real_T));
  dv2[11836] = 1.0;
  memset(&dv2[11837], 0, 33U * sizeof(real_T));
  dv2[11870] = -1.0;
  memset(&dv2[11871], 0, 93U * sizeof(real_T));
  dv2[11964] = 1.0;
  memset(&dv2[11965], 0, 33U * sizeof(real_T));
  dv2[11998] = -1.0;
  memset(&dv2[11999], 0, 93U * sizeof(real_T));
  dv2[12092] = 1.0;
  memset(&dv2[12093], 0, 33U * sizeof(real_T));
  dv2[12126] = -1.0;
  memset(&dv2[12127], 0, 93U * sizeof(real_T));
  dv2[12220] = 1.0;
  memset(&dv2[12221], 0, 33U * sizeof(real_T));
  dv2[12254] = -1.0;
  memset(&dv2[12255], 0, 93U * sizeof(real_T));
  dv2[12348] = 1.0;
  memset(&dv2[12349], 0, 33U * sizeof(real_T));
  dv2[12382] = -1.0;
  memset(&dv2[12383], 0, 93U * sizeof(real_T));
  dv2[12476] = 1.0;
  memset(&dv2[12477], 0, 33U * sizeof(real_T));
  dv2[12510] = -1.0;
  memset(&dv2[12511], 0, 93U * sizeof(real_T));
  dv2[12604] = 1.0;
  memset(&dv2[12605], 0, 33U * sizeof(real_T));
  dv2[12638] = -1.0;
  memset(&dv2[12639], 0, 93U * sizeof(real_T));
  dv2[12732] = 1.0;
  memset(&dv2[12733], 0, 33U * sizeof(real_T));
  dv2[12766] = -1.0;
  memset(&dv2[12767], 0, 93U * sizeof(real_T));
  dv2[12860] = 1.0;
  memset(&dv2[12861], 0, 33U * sizeof(real_T));
  dv2[12894] = -1.0;
  memset(&dv2[12895], 0, 693U * sizeof(real_T));
  dv2[13588] = 1.0;
  memset(&dv2[13589], 0, 457U * sizeof(real_T));
  dv2[14046] = -1.0;
  memset(&dv2[14047], 0, sizeof(real_T) << 4);
  dv2[14063] = -1.0;
  memset(&dv2[14064], 0, 110U * sizeof(real_T));
  dv2[14174] = -1.0;
  memset(&dv2[14175], 0, sizeof(real_T) << 4);
  dv2[14191] = -1.0;
  memset(&dv2[14192], 0, 110U * sizeof(real_T));
  dv2[14302] = -1.0;
  memset(&dv2[14303], 0, sizeof(real_T) << 4);
  dv2[14319] = -1.0;
  memset(&dv2[14320], 0, 110U * sizeof(real_T));
  dv2[14430] = -1.0;
  memset(&dv2[14431], 0, sizeof(real_T) << 4);
  dv2[14447] = -1.0;
  memset(&dv2[14448], 0, 110U * sizeof(real_T));
  dv2[14558] = -1.0;
  memset(&dv2[14559], 0, sizeof(real_T) << 4);
  dv2[14575] = -1.0;
  memset(&dv2[14576], 0, 110U * sizeof(real_T));
  dv2[14686] = -1.0;
  memset(&dv2[14687], 0, sizeof(real_T) << 4);
  dv2[14703] = -1.0;
  memset(&dv2[14704], 0, 110U * sizeof(real_T));
  dv2[14814] = -1.0;
  memset(&dv2[14815], 0, sizeof(real_T) << 4);
  dv2[14831] = -1.0;
  memset(&dv2[14832], 0, 110U * sizeof(real_T));
  dv2[14942] = -1.0;
  memset(&dv2[14943], 0, sizeof(real_T) << 4);
  dv2[14959] = -1.0;
  memset(&dv2[14960], 0, 110U * sizeof(real_T));
  dv2[15070] = -1.0;
  memset(&dv2[15071], 0, sizeof(real_T) << 4);
  dv2[15087] = -1.0;
  memset(&dv2[15088], 0, 110U * sizeof(real_T));
  dv2[15198] = -1.0;
  memset(&dv2[15199], 0, sizeof(real_T) << 4);
  dv2[15215] = -1.0;
  memset(&dv2[15216], 0, 110U * sizeof(real_T));
  dv2[15326] = -1.0;
  memset(&dv2[15327], 0, sizeof(real_T) << 4);
  dv2[15343] = -1.0;
  memset(&dv2[15344], 0, 110U * sizeof(real_T));
  dv2[15454] = -1.0;
  memset(&dv2[15455], 0, sizeof(real_T) << 4);
  dv2[15471] = -1.0;
  memset(&dv2[15472], 0, 110U * sizeof(real_T));
  dv2[15582] = -1.0;
  memset(&dv2[15583], 0, sizeof(real_T) << 4);
  dv2[15599] = -1.0;
  memset(&dv2[15600], 0, 110U * sizeof(real_T));
  dv2[15710] = -1.0;
  memset(&dv2[15711], 0, sizeof(real_T) << 4);
  dv2[15727] = -1.0;
  memset(&dv2[15728], 0, 110U * sizeof(real_T));
  dv2[15838] = -1.0;
  memset(&dv2[15839], 0, sizeof(real_T) << 4);
  dv2[15855] = -1.0;
  memset(&dv2[15856], 0, 110U * sizeof(real_T));
  dv2[15966] = -1.0;
  memset(&dv2[15967], 0, sizeof(real_T) << 4);
  dv2[15983] = -1.0;
  memset(&dv2[15984], 0, 110U * sizeof(real_T));
  dv2[16094] = -1.0;
  memset(&dv2[16095], 0, sizeof(real_T) << 4);
  dv2[16111] = -1.0;
  memset(&dv2[16112], 0, 143U * sizeof(real_T));
  dv2[16255] = -1.0;
  memset(&dv2[16256], 0, 2142U * sizeof(real_T));
  dv2[18398] = -1.0;
  dv2[18399] = 0.0;
  dv2[18400] = 0.0;
  dv2[18401] = 0.0;
  dv2[18402] = -1.0;
  memset(&dv2[18403], 0, 123U * sizeof(real_T));
  dv2[18526] = -1.0;
  dv2[18527] = 0.0;
  dv2[18528] = 0.0;
  dv2[18529] = 0.0;
  dv2[18530] = -1.0;
  memset(&dv2[18531], 0, 123U * sizeof(real_T));
  dv2[18654] = -1.0;
  dv2[18655] = 0.0;
  dv2[18656] = 0.0;
  dv2[18657] = 0.0;
  dv2[18658] = -1.0;
  memset(&dv2[18659], 0, 123U * sizeof(real_T));
  dv2[18782] = -1.0;
  dv2[18783] = 0.0;
  dv2[18784] = 0.0;
  dv2[18785] = 0.0;
  dv2[18786] = -1.0;
  memset(&dv2[18787], 0, 127U * sizeof(real_T));
  dv2[18914] = -1.0;
  dv2[18915] = 0.0;
  dv2[18916] = 0.0;
  dv2[18917] = 0.0;
  dv2[18918] = -1.0;
  memset(&dv2[18919], 0, 123U * sizeof(real_T));
  dv2[19042] = -1.0;
  dv2[19043] = 0.0;
  dv2[19044] = 0.0;
  dv2[19045] = 0.0;
  dv2[19046] = -1.0;
  memset(&dv2[19047], 0, 123U * sizeof(real_T));
  dv2[19170] = -1.0;
  dv2[19171] = 0.0;
  dv2[19172] = 0.0;
  dv2[19173] = 0.0;
  dv2[19174] = -1.0;
  memset(&dv2[19175], 0, 123U * sizeof(real_T));
  dv2[19298] = -1.0;
  dv2[19299] = 0.0;
  dv2[19300] = 0.0;
  dv2[19301] = 0.0;
  dv2[19302] = -1.0;
  memset(&dv2[19303], 0, 1017U * sizeof(real_T));
  for (i1 = 0; i1 < 160; i1++) {
    memcpy(&Aiq[i1 * 127], &dv2[i1 * 127], 127U * sizeof(real_T));
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
  biq[113] = t14;
  biq[114] = t15;
  biq[115] = t15;
  biq[116] = t15;
  biq[117] = t15;
  biq[118] = t16;
  biq[119] = t16;
  biq[120] = t16;
  biq[121] = t16;
  biq[122] = t17;
  biq[123] = t17;
  biq[124] = t17;
  biq[125] = t17;
  biq[126] = -in9[1];
}

/* End of code generation (IqFast_LeftStart0V20.cpp) */
