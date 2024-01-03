/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Obj_LeftStart13DFootV98.cpp
 *
 * Code generation for function 'Obj_LeftStart13DFootV98'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step1.h"
#include "Obj_LeftStart13DFootV98.h"

/* Function Definitions */
void Obj_LeftStart13DFootV98(c_temp_MPC3DFootV98_form_Step1S *SD, real_T Cpx1,
  real_T Cpy1, const real_T in3[5], const real_T in4[5], const real_T in5[2],
  const real_T in6[2], const real_T in7[2], const real_T in8[2], real_T cRx1,
  real_T cRy1, real_T cRz1, real_T cWx1, real_T cWy1, real_T m1, const real_T
  in16[26], real_T H[56644], real_T f[238])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  int32_T i1;

  /* OBJ_LEFTSTART13DFOOTV98 */
  /*     [H,F] = OBJ_LEFTSTART13DFOOTV98(CPX1,CPY1,IN3,IN4,IN5,IN6,IN7,IN8,CRX1,CRY1,CRZ1,CWX1,CWY1,M1,IN15,IN16) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     06-Jul-2023 15:41:05 */
  t2 = in6[0] * 2.0;
  t3 = in6[1] * 2.0;
  t4 = in7[0] * 2.0;
  t5 = in7[1] * 2.0;
  t6 = in8[0] * 2.0;
  t7 = in8[1] * 2.0;
  t8 = cRx1 * 2.0;
  t9 = cRy1 * 2.0;
  t10 = cRz1 * 2.0;
  t11 = cRx1 * 20.0;
  t12 = cRx1 * 12.0;
  t13 = cRx1 * 4.0;
  t14 = cRy1 * 20.0;
  t15 = cRy1 * 12.0;
  t16 = cRy1 * 4.0;
  t17 = m1 * 2.0;
  t18 = in16[1] * 2.0;
  t19 = in16[2] * 2.0;
  t20 = in16[3] * 2.0;
  t21 = in16[0] * 2.0;
  t22 = cWx1 * 2.0;
  t23 = cWy1 * 2.0;
  SD->u1.f0.t2[0] = t2;
  memset(&SD->u1.f0.t2[1], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[478] = t2;
  memset(&SD->u1.f0.t2[479], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[956] = t2;
  memset(&SD->u1.f0.t2[957], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[1434] = t2;
  memset(&SD->u1.f0.t2[1435], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[1673] = t3;
  memset(&SD->u1.f0.t2[1674], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[1912] = t2;
  memset(&SD->u1.f0.t2[1913], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[2390] = t2;
  memset(&SD->u1.f0.t2[2391], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[2868] = t2;
  memset(&SD->u1.f0.t2[2869], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[3346] = t2;
  memset(&SD->u1.f0.t2[3347], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[3585] = t3;
  memset(&SD->u1.f0.t2[3586], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[3824] = t2;
  memset(&SD->u1.f0.t2[3825], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[4302] = t2;
  memset(&SD->u1.f0.t2[4303], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[4780] = t2;
  memset(&SD->u1.f0.t2[4781], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[5258] = t2;
  memset(&SD->u1.f0.t2[5259], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[5497] = t3;
  memset(&SD->u1.f0.t2[5498], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[5736] = t2;
  memset(&SD->u1.f0.t2[5737], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[6214] = t2;
  memset(&SD->u1.f0.t2[6215], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[6692] = t2;
  memset(&SD->u1.f0.t2[6693], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[7170] = t2;
  memset(&SD->u1.f0.t2[7171], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[7409] = t3;
  memset(&SD->u1.f0.t2[7410], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[7648] = t2;
  memset(&SD->u1.f0.t2[7649], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[8126] = t4;
  memset(&SD->u1.f0.t2[8127], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[8604] = t4;
  memset(&SD->u1.f0.t2[8605], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[9082] = t4;
  memset(&SD->u1.f0.t2[9083], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[9560] = t4;
  memset(&SD->u1.f0.t2[9561], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[9799] = t5;
  memset(&SD->u1.f0.t2[9800], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[10038] = t4;
  memset(&SD->u1.f0.t2[10039], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[10516] = t4;
  memset(&SD->u1.f0.t2[10517], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[10994] = t4;
  memset(&SD->u1.f0.t2[10995], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[11472] = t4;
  memset(&SD->u1.f0.t2[11473], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[11711] = t5;
  memset(&SD->u1.f0.t2[11712], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[11950] = t4;
  memset(&SD->u1.f0.t2[11951], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[12428] = t4;
  memset(&SD->u1.f0.t2[12429], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[12906] = t4;
  memset(&SD->u1.f0.t2[12907], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[13384] = t4;
  memset(&SD->u1.f0.t2[13385], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[13623] = t5;
  memset(&SD->u1.f0.t2[13624], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[13862] = t4;
  memset(&SD->u1.f0.t2[13863], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[14340] = t4;
  memset(&SD->u1.f0.t2[14341], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[14818] = t4;
  memset(&SD->u1.f0.t2[14819], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[15296] = t4;
  memset(&SD->u1.f0.t2[15297], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[15535] = t5;
  memset(&SD->u1.f0.t2[15536], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[15774] = t4;
  memset(&SD->u1.f0.t2[15775], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[16252] = t6;
  memset(&SD->u1.f0.t2[16253], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[16491] = t7;
  memset(&SD->u1.f0.t2[16492], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[16730] = t6;
  memset(&SD->u1.f0.t2[16731], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[16969] = t7;
  memset(&SD->u1.f0.t2[16970], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[17208] = t6;
  memset(&SD->u1.f0.t2[17209], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[17447] = t7;
  memset(&SD->u1.f0.t2[17448], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[17686] = t6;
  memset(&SD->u1.f0.t2[17687], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[17925] = t7;
  memset(&SD->u1.f0.t2[17926], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[18164] = t6;
  memset(&SD->u1.f0.t2[18165], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[18403] = t7;
  memset(&SD->u1.f0.t2[18404], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[18642] = t6;
  memset(&SD->u1.f0.t2[18643], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[18881] = t7;
  memset(&SD->u1.f0.t2[18882], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[19120] = t6;
  memset(&SD->u1.f0.t2[19121], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[19359] = t7;
  memset(&SD->u1.f0.t2[19360], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[19598] = t6;
  memset(&SD->u1.f0.t2[19599], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[19837] = t7;
  memset(&SD->u1.f0.t2[19838], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[20076] = t6;
  memset(&SD->u1.f0.t2[20077], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[20315] = t7;
  memset(&SD->u1.f0.t2[20316], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[20554] = t6;
  memset(&SD->u1.f0.t2[20555], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[20793] = t7;
  memset(&SD->u1.f0.t2[20794], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[21032] = t6;
  memset(&SD->u1.f0.t2[21033], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[21271] = t7;
  memset(&SD->u1.f0.t2[21272], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[21510] = t6;
  memset(&SD->u1.f0.t2[21511], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[21749] = t7;
  memset(&SD->u1.f0.t2[21750], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[21988] = t6;
  memset(&SD->u1.f0.t2[21989], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[22227] = t7;
  memset(&SD->u1.f0.t2[22228], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[22466] = t6;
  memset(&SD->u1.f0.t2[22467], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[22705] = t7;
  memset(&SD->u1.f0.t2[22706], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[22944] = t6;
  memset(&SD->u1.f0.t2[22945], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[23183] = t7;
  memset(&SD->u1.f0.t2[23184], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[23422] = t6;
  memset(&SD->u1.f0.t2[23423], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[23661] = t7;
  memset(&SD->u1.f0.t2[23662], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[23900] = t6;
  memset(&SD->u1.f0.t2[23901], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[24139] = t7;
  memset(&SD->u1.f0.t2[24140], 0, 955U * sizeof(real_T));
  SD->u1.f0.t2[25095] = t8;
  memset(&SD->u1.f0.t2[25096], 0, 47U * sizeof(real_T));
  SD->u1.f0.t2[25143] = -t8;
  memset(&SD->u1.f0.t2[25144], 0, 190U * sizeof(real_T));
  SD->u1.f0.t2[25334] = t8;
  memset(&SD->u1.f0.t2[25335], 0, 46U * sizeof(real_T));
  SD->u1.f0.t2[25381] = -t8;
  memset(&SD->u1.f0.t2[25382], 0, 191U * sizeof(real_T));
  SD->u1.f0.t2[25573] = t8;
  memset(&SD->u1.f0.t2[25574], 0, 45U * sizeof(real_T));
  SD->u1.f0.t2[25619] = -t8;
  memset(&SD->u1.f0.t2[25620], 0, 192U * sizeof(real_T));
  SD->u1.f0.t2[25812] = t8;
  memset(&SD->u1.f0.t2[25813], 0, 44U * sizeof(real_T));
  SD->u1.f0.t2[25857] = -t8;
  memset(&SD->u1.f0.t2[25858], 0, 193U * sizeof(real_T));
  SD->u1.f0.t2[26051] = t8;
  memset(&SD->u1.f0.t2[26052], 0, 43U * sizeof(real_T));
  SD->u1.f0.t2[26095] = -t8;
  SD->u1.f0.t2[26096] = -t8;
  memset(&SD->u1.f0.t2[26097], 0, 193U * sizeof(real_T));
  SD->u1.f0.t2[26290] = t8;
  memset(&SD->u1.f0.t2[26291], 0, 42U * sizeof(real_T));
  SD->u1.f0.t2[26333] = -t8;
  SD->u1.f0.t2[26334] = -t8;
  memset(&SD->u1.f0.t2[26335], 0, 194U * sizeof(real_T));
  SD->u1.f0.t2[26529] = t8;
  memset(&SD->u1.f0.t2[26530], 0, 41U * sizeof(real_T));
  SD->u1.f0.t2[26571] = -t8;
  SD->u1.f0.t2[26572] = -t8;
  memset(&SD->u1.f0.t2[26573], 0, 195U * sizeof(real_T));
  SD->u1.f0.t2[26768] = t8;
  memset(&SD->u1.f0.t2[26769], 0, 40U * sizeof(real_T));
  SD->u1.f0.t2[26809] = -t8;
  SD->u1.f0.t2[26810] = -t8;
  memset(&SD->u1.f0.t2[26811], 0, 196U * sizeof(real_T));
  SD->u1.f0.t2[27007] = t8;
  memset(&SD->u1.f0.t2[27008], 0, 39U * sizeof(real_T));
  SD->u1.f0.t2[27047] = -t8;
  SD->u1.f0.t2[27048] = -t8;
  SD->u1.f0.t2[27049] = -t8;
  memset(&SD->u1.f0.t2[27050], 0, 196U * sizeof(real_T));
  SD->u1.f0.t2[27246] = t8;
  memset(&SD->u1.f0.t2[27247], 0, 38U * sizeof(real_T));
  SD->u1.f0.t2[27285] = -t8;
  SD->u1.f0.t2[27286] = -t8;
  SD->u1.f0.t2[27287] = -t8;
  memset(&SD->u1.f0.t2[27288], 0, 197U * sizeof(real_T));
  SD->u1.f0.t2[27485] = t8;
  memset(&SD->u1.f0.t2[27486], 0, 37U * sizeof(real_T));
  SD->u1.f0.t2[27523] = -t8;
  SD->u1.f0.t2[27524] = -t8;
  SD->u1.f0.t2[27525] = -t8;
  memset(&SD->u1.f0.t2[27526], 0, 198U * sizeof(real_T));
  SD->u1.f0.t2[27724] = t8;
  memset(&SD->u1.f0.t2[27725], 0, 36U * sizeof(real_T));
  SD->u1.f0.t2[27761] = -t8;
  SD->u1.f0.t2[27762] = -t8;
  SD->u1.f0.t2[27763] = -t8;
  memset(&SD->u1.f0.t2[27764], 0, 199U * sizeof(real_T));
  SD->u1.f0.t2[27963] = t8;
  memset(&SD->u1.f0.t2[27964], 0, 35U * sizeof(real_T));
  SD->u1.f0.t2[27999] = -t8;
  SD->u1.f0.t2[28000] = -t8;
  SD->u1.f0.t2[28001] = -t8;
  SD->u1.f0.t2[28002] = -t8;
  memset(&SD->u1.f0.t2[28003], 0, 199U * sizeof(real_T));
  SD->u1.f0.t2[28202] = t8;
  memset(&SD->u1.f0.t2[28203], 0, 34U * sizeof(real_T));
  SD->u1.f0.t2[28237] = -t8;
  SD->u1.f0.t2[28238] = -t8;
  SD->u1.f0.t2[28239] = -t8;
  SD->u1.f0.t2[28240] = -t8;
  memset(&SD->u1.f0.t2[28241], 0, 917U * sizeof(real_T));
  SD->u1.f0.t2[29158] = t9;
  memset(&SD->u1.f0.t2[29159], 0, 34U * sizeof(real_T));
  SD->u1.f0.t2[29193] = -t9;
  memset(&SD->u1.f0.t2[29194], 0, 203U * sizeof(real_T));
  SD->u1.f0.t2[29397] = t9;
  memset(&SD->u1.f0.t2[29398], 0, 33U * sizeof(real_T));
  SD->u1.f0.t2[29431] = -t9;
  memset(&SD->u1.f0.t2[29432], 0, 204U * sizeof(real_T));
  SD->u1.f0.t2[29636] = t9;
  memset(&SD->u1.f0.t2[29637], 0, sizeof(real_T) << 5);
  SD->u1.f0.t2[29669] = -t9;
  memset(&SD->u1.f0.t2[29670], 0, 205U * sizeof(real_T));
  SD->u1.f0.t2[29875] = t9;
  memset(&SD->u1.f0.t2[29876], 0, 31U * sizeof(real_T));
  SD->u1.f0.t2[29907] = -t9;
  memset(&SD->u1.f0.t2[29908], 0, 206U * sizeof(real_T));
  SD->u1.f0.t2[30114] = t9;
  memset(&SD->u1.f0.t2[30115], 0, 30U * sizeof(real_T));
  SD->u1.f0.t2[30145] = -t9;
  SD->u1.f0.t2[30146] = -t9;
  memset(&SD->u1.f0.t2[30147], 0, 206U * sizeof(real_T));
  SD->u1.f0.t2[30353] = t9;
  memset(&SD->u1.f0.t2[30354], 0, 29U * sizeof(real_T));
  SD->u1.f0.t2[30383] = -t9;
  SD->u1.f0.t2[30384] = -t9;
  memset(&SD->u1.f0.t2[30385], 0, 207U * sizeof(real_T));
  SD->u1.f0.t2[30592] = t9;
  memset(&SD->u1.f0.t2[30593], 0, 28U * sizeof(real_T));
  SD->u1.f0.t2[30621] = -t9;
  SD->u1.f0.t2[30622] = -t9;
  memset(&SD->u1.f0.t2[30623], 0, 208U * sizeof(real_T));
  SD->u1.f0.t2[30831] = t9;
  memset(&SD->u1.f0.t2[30832], 0, 27U * sizeof(real_T));
  SD->u1.f0.t2[30859] = -t9;
  SD->u1.f0.t2[30860] = -t9;
  memset(&SD->u1.f0.t2[30861], 0, 209U * sizeof(real_T));
  SD->u1.f0.t2[31070] = t9;
  memset(&SD->u1.f0.t2[31071], 0, 26U * sizeof(real_T));
  SD->u1.f0.t2[31097] = -t9;
  SD->u1.f0.t2[31098] = -t9;
  SD->u1.f0.t2[31099] = -t9;
  memset(&SD->u1.f0.t2[31100], 0, 209U * sizeof(real_T));
  SD->u1.f0.t2[31309] = t9;
  memset(&SD->u1.f0.t2[31310], 0, 25U * sizeof(real_T));
  SD->u1.f0.t2[31335] = -t9;
  SD->u1.f0.t2[31336] = -t9;
  SD->u1.f0.t2[31337] = -t9;
  memset(&SD->u1.f0.t2[31338], 0, 210U * sizeof(real_T));
  SD->u1.f0.t2[31548] = t9;
  memset(&SD->u1.f0.t2[31549], 0, 24U * sizeof(real_T));
  SD->u1.f0.t2[31573] = -t9;
  SD->u1.f0.t2[31574] = -t9;
  SD->u1.f0.t2[31575] = -t9;
  memset(&SD->u1.f0.t2[31576], 0, 211U * sizeof(real_T));
  SD->u1.f0.t2[31787] = t9;
  memset(&SD->u1.f0.t2[31788], 0, 23U * sizeof(real_T));
  SD->u1.f0.t2[31811] = -t9;
  SD->u1.f0.t2[31812] = -t9;
  SD->u1.f0.t2[31813] = -t9;
  memset(&SD->u1.f0.t2[31814], 0, 212U * sizeof(real_T));
  SD->u1.f0.t2[32026] = t9;
  memset(&SD->u1.f0.t2[32027], 0, 22U * sizeof(real_T));
  SD->u1.f0.t2[32049] = -t9;
  SD->u1.f0.t2[32050] = -t9;
  SD->u1.f0.t2[32051] = -t9;
  SD->u1.f0.t2[32052] = -t9;
  memset(&SD->u1.f0.t2[32053], 0, 212U * sizeof(real_T));
  SD->u1.f0.t2[32265] = t9;
  memset(&SD->u1.f0.t2[32266], 0, 21U * sizeof(real_T));
  SD->u1.f0.t2[32287] = -t9;
  SD->u1.f0.t2[32288] = -t9;
  SD->u1.f0.t2[32289] = -t9;
  SD->u1.f0.t2[32290] = -t9;
  memset(&SD->u1.f0.t2[32291], 0, 213U * sizeof(real_T));
  SD->u1.f0.t2[32504] = t10;
  memset(&SD->u1.f0.t2[32505], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[32743] = t10;
  memset(&SD->u1.f0.t2[32744], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[32982] = t10;
  memset(&SD->u1.f0.t2[32983], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[33221] = t10;
  memset(&SD->u1.f0.t2[33222], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[33460] = t10;
  memset(&SD->u1.f0.t2[33461], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[33699] = t10;
  memset(&SD->u1.f0.t2[33700], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[33938] = t10;
  memset(&SD->u1.f0.t2[33939], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[34177] = t10;
  memset(&SD->u1.f0.t2[34178], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[34416] = t10;
  memset(&SD->u1.f0.t2[34417], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[34655] = t10;
  memset(&SD->u1.f0.t2[34656], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[34894] = t10;
  memset(&SD->u1.f0.t2[34895], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[35133] = t10;
  memset(&SD->u1.f0.t2[35134], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[35372] = t10;
  memset(&SD->u1.f0.t2[35373], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[35611] = t10;
  memset(&SD->u1.f0.t2[35612], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[35850] = t10;
  memset(&SD->u1.f0.t2[35851], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[36089] = t10;
  memset(&SD->u1.f0.t2[36090], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[36328] = t10;
  memset(&SD->u1.f0.t2[36329], 0, 190U * sizeof(real_T));
  SD->u1.f0.t2[36519] = -t8;
  SD->u1.f0.t2[36520] = -t8;
  SD->u1.f0.t2[36521] = -t8;
  SD->u1.f0.t2[36522] = -t8;
  SD->u1.f0.t2[36523] = -t8;
  SD->u1.f0.t2[36524] = -t8;
  SD->u1.f0.t2[36525] = -t8;
  SD->u1.f0.t2[36526] = -t8;
  SD->u1.f0.t2[36527] = -t8;
  SD->u1.f0.t2[36528] = -t8;
  SD->u1.f0.t2[36529] = -t8;
  SD->u1.f0.t2[36530] = -t8;
  SD->u1.f0.t2[36531] = -t8;
  SD->u1.f0.t2[36532] = -t8;
  memset(&SD->u1.f0.t2[36533], 0, 34U * sizeof(real_T));
  SD->u1.f0.t2[36567] = cRx1 * 28.0;
  SD->u1.f0.t2[36568] = t11;
  SD->u1.f0.t2[36569] = t12;
  SD->u1.f0.t2[36570] = t13;
  memset(&SD->u1.f0.t2[36571], 0, 190U * sizeof(real_T));
  SD->u1.f0.t2[36761] = -t8;
  SD->u1.f0.t2[36762] = -t8;
  SD->u1.f0.t2[36763] = -t8;
  SD->u1.f0.t2[36764] = -t8;
  SD->u1.f0.t2[36765] = -t8;
  SD->u1.f0.t2[36766] = -t8;
  SD->u1.f0.t2[36767] = -t8;
  SD->u1.f0.t2[36768] = -t8;
  SD->u1.f0.t2[36769] = -t8;
  SD->u1.f0.t2[36770] = -t8;
  memset(&SD->u1.f0.t2[36771], 0, 34U * sizeof(real_T));
  SD->u1.f0.t2[36805] = t11;
  SD->u1.f0.t2[36806] = t11;
  SD->u1.f0.t2[36807] = t12;
  SD->u1.f0.t2[36808] = t13;
  memset(&SD->u1.f0.t2[36809], 0, 194U * sizeof(real_T));
  SD->u1.f0.t2[37003] = -t8;
  SD->u1.f0.t2[37004] = -t8;
  SD->u1.f0.t2[37005] = -t8;
  SD->u1.f0.t2[37006] = -t8;
  SD->u1.f0.t2[37007] = -t8;
  SD->u1.f0.t2[37008] = -t8;
  memset(&SD->u1.f0.t2[37009], 0, 34U * sizeof(real_T));
  SD->u1.f0.t2[37043] = t12;
  SD->u1.f0.t2[37044] = t12;
  SD->u1.f0.t2[37045] = t12;
  SD->u1.f0.t2[37046] = t13;
  memset(&SD->u1.f0.t2[37047], 0, 198U * sizeof(real_T));
  SD->u1.f0.t2[37245] = -t8;
  SD->u1.f0.t2[37246] = -t8;
  memset(&SD->u1.f0.t2[37247], 0, 34U * sizeof(real_T));
  SD->u1.f0.t2[37281] = t13;
  SD->u1.f0.t2[37282] = t13;
  SD->u1.f0.t2[37283] = t13;
  SD->u1.f0.t2[37284] = t13;
  memset(&SD->u1.f0.t2[37285], 0, 203U * sizeof(real_T));
  SD->u1.f0.t2[37488] = -t9;
  SD->u1.f0.t2[37489] = -t9;
  SD->u1.f0.t2[37490] = -t9;
  SD->u1.f0.t2[37491] = -t9;
  SD->u1.f0.t2[37492] = -t9;
  SD->u1.f0.t2[37493] = -t9;
  SD->u1.f0.t2[37494] = -t9;
  SD->u1.f0.t2[37495] = -t9;
  SD->u1.f0.t2[37496] = -t9;
  SD->u1.f0.t2[37497] = -t9;
  SD->u1.f0.t2[37498] = -t9;
  SD->u1.f0.t2[37499] = -t9;
  SD->u1.f0.t2[37500] = -t9;
  SD->u1.f0.t2[37501] = -t9;
  memset(&SD->u1.f0.t2[37502], 0, 21U * sizeof(real_T));
  SD->u1.f0.t2[37523] = cRy1 * 28.0;
  SD->u1.f0.t2[37524] = t14;
  SD->u1.f0.t2[37525] = t15;
  SD->u1.f0.t2[37526] = t16;
  memset(&SD->u1.f0.t2[37527], 0, 203U * sizeof(real_T));
  SD->u1.f0.t2[37730] = -t9;
  SD->u1.f0.t2[37731] = -t9;
  SD->u1.f0.t2[37732] = -t9;
  SD->u1.f0.t2[37733] = -t9;
  SD->u1.f0.t2[37734] = -t9;
  SD->u1.f0.t2[37735] = -t9;
  SD->u1.f0.t2[37736] = -t9;
  SD->u1.f0.t2[37737] = -t9;
  SD->u1.f0.t2[37738] = -t9;
  SD->u1.f0.t2[37739] = -t9;
  memset(&SD->u1.f0.t2[37740], 0, 21U * sizeof(real_T));
  SD->u1.f0.t2[37761] = t14;
  SD->u1.f0.t2[37762] = t14;
  SD->u1.f0.t2[37763] = t15;
  SD->u1.f0.t2[37764] = t16;
  memset(&SD->u1.f0.t2[37765], 0, 207U * sizeof(real_T));
  SD->u1.f0.t2[37972] = -t9;
  SD->u1.f0.t2[37973] = -t9;
  SD->u1.f0.t2[37974] = -t9;
  SD->u1.f0.t2[37975] = -t9;
  SD->u1.f0.t2[37976] = -t9;
  SD->u1.f0.t2[37977] = -t9;
  memset(&SD->u1.f0.t2[37978], 0, 21U * sizeof(real_T));
  SD->u1.f0.t2[37999] = t15;
  SD->u1.f0.t2[38000] = t15;
  SD->u1.f0.t2[38001] = t15;
  SD->u1.f0.t2[38002] = t16;
  memset(&SD->u1.f0.t2[38003], 0, 211U * sizeof(real_T));
  SD->u1.f0.t2[38214] = -t9;
  SD->u1.f0.t2[38215] = -t9;
  memset(&SD->u1.f0.t2[38216], 0, 21U * sizeof(real_T));
  SD->u1.f0.t2[38237] = t16;
  SD->u1.f0.t2[38238] = t16;
  SD->u1.f0.t2[38239] = t16;
  SD->u1.f0.t2[38240] = t16;
  memset(&SD->u1.f0.t2[38241], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[38479] = t17;
  memset(&SD->u1.f0.t2[38480], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[38718] = t17;
  memset(&SD->u1.f0.t2[38719], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[38957] = t17;
  memset(&SD->u1.f0.t2[38958], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[39196] = t17;
  memset(&SD->u1.f0.t2[39197], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[39435] = t17;
  memset(&SD->u1.f0.t2[39436], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[39674] = t17;
  memset(&SD->u1.f0.t2[39675], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[39913] = t17;
  memset(&SD->u1.f0.t2[39914], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[40152] = t17;
  memset(&SD->u1.f0.t2[40153], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[40391] = t17;
  memset(&SD->u1.f0.t2[40392], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[40630] = t17;
  memset(&SD->u1.f0.t2[40631], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[40869] = t17;
  memset(&SD->u1.f0.t2[40870], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[41108] = t17;
  memset(&SD->u1.f0.t2[41109], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[41347] = t17;
  memset(&SD->u1.f0.t2[41348], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[41586] = t17;
  memset(&SD->u1.f0.t2[41587], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[41825] = t17;
  memset(&SD->u1.f0.t2[41826], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[42064] = t17;
  memset(&SD->u1.f0.t2[42065], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[42303] = t17;
  memset(&SD->u1.f0.t2[42304], 0, 4301U * sizeof(real_T));
  SD->u1.f0.t2[46605] = t8;
  memset(&SD->u1.f0.t2[46606], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[46844] = t8;
  memset(&SD->u1.f0.t2[46845], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[47083] = t8;
  memset(&SD->u1.f0.t2[47084], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[47322] = t8;
  memset(&SD->u1.f0.t2[47323], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[47561] = t9;
  memset(&SD->u1.f0.t2[47562], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[47800] = t9;
  memset(&SD->u1.f0.t2[47801], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[48039] = t9;
  memset(&SD->u1.f0.t2[48040], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[48278] = t9;
  memset(&SD->u1.f0.t2[48279], 0, 716U * sizeof(real_T));
  SD->u1.f0.t2[48995] = t18;
  memset(&SD->u1.f0.t2[48996], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[49234] = t18;
  memset(&SD->u1.f0.t2[49235], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[49473] = t18;
  memset(&SD->u1.f0.t2[49474], 0, 716U * sizeof(real_T));
  SD->u1.f0.t2[50190] = t19;
  memset(&SD->u1.f0.t2[50191], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[50429] = t19;
  memset(&SD->u1.f0.t2[50430], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[50668] = t19;
  memset(&SD->u1.f0.t2[50669], 0, 716U * sizeof(real_T));
  SD->u1.f0.t2[51385] = t20;
  memset(&SD->u1.f0.t2[51386], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[51624] = t20;
  memset(&SD->u1.f0.t2[51625], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[51863] = t20;
  memset(&SD->u1.f0.t2[51864], 0, 477U * sizeof(real_T));
  SD->u1.f0.t2[52341] = t21;
  memset(&SD->u1.f0.t2[52342], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[52580] = t21;
  memset(&SD->u1.f0.t2[52581], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[52819] = t21;
  memset(&SD->u1.f0.t2[52820], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[53058] = t22;
  memset(&SD->u1.f0.t2[53059], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[53297] = t22;
  memset(&SD->u1.f0.t2[53298], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[53536] = t22;
  memset(&SD->u1.f0.t2[53537], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[53775] = t22;
  memset(&SD->u1.f0.t2[53776], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[54014] = t23;
  memset(&SD->u1.f0.t2[54015], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[54253] = t23;
  memset(&SD->u1.f0.t2[54254], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[54492] = t23;
  memset(&SD->u1.f0.t2[54493], 0, 238U * sizeof(real_T));
  SD->u1.f0.t2[54731] = t23;
  memset(&SD->u1.f0.t2[54732], 0, 1912U * sizeof(real_T));
  for (i1 = 0; i1 < 238; i1++) {
    memcpy(&H[i1 * 238], &SD->u1.f0.t2[i1 * 238], 238U * sizeof(real_T));
  }

  f[0] = in6[0] * in3[0] * -2.0;
  f[1] = 0.0;
  f[2] = in6[0] * in3[0] * -2.0;
  f[3] = 0.0;
  f[4] = in6[0] * in3[0] * -2.0;
  f[5] = 0.0;
  f[6] = in6[0] * in3[0] * -2.0;
  f[7] = in6[1] * in3[1] * -2.0;
  f[8] = in6[0] * in3[0] * -2.0;
  f[9] = 0.0;
  f[10] = in6[0] * in3[0] * -2.0;
  f[11] = 0.0;
  f[12] = in6[0] * in3[0] * -2.0;
  f[13] = 0.0;
  f[14] = in6[0] * in3[0] * -2.0;
  f[15] = in6[1] * in3[2] * -2.0;
  f[16] = in6[0] * in3[0] * -2.0;
  f[17] = 0.0;
  f[18] = in6[0] * in3[0] * -2.0;
  f[19] = 0.0;
  f[20] = in6[0] * in3[0] * -2.0;
  f[21] = 0.0;
  f[22] = in6[0] * in3[0] * -2.0;
  f[23] = in6[1] * in3[3] * -2.0;
  f[24] = in6[0] * in3[0] * -2.0;
  f[25] = 0.0;
  f[26] = in6[0] * in3[0] * -2.0;
  f[27] = 0.0;
  f[28] = in6[0] * in3[0] * -2.0;
  f[29] = 0.0;
  f[30] = in6[0] * in3[0] * -2.0;
  f[31] = in6[1] * in3[4] * -2.0;
  f[32] = in6[0] * in3[0] * -2.0;
  f[33] = 0.0;
  f[34] = in7[0] * in4[0] * -2.0;
  f[35] = 0.0;
  f[36] = in7[0] * in4[0] * -2.0;
  f[37] = 0.0;
  f[38] = in7[0] * in4[0] * -2.0;
  f[39] = 0.0;
  f[40] = in7[0] * in4[0] * -2.0;
  f[41] = in7[1] * in4[1] * -2.0;
  f[42] = in7[0] * in4[0] * -2.0;
  f[43] = 0.0;
  f[44] = in7[0] * in4[0] * -2.0;
  f[45] = 0.0;
  f[46] = in7[0] * in4[0] * -2.0;
  f[47] = 0.0;
  f[48] = in7[0] * in4[0] * -2.0;
  f[49] = in7[1] * in4[2] * -2.0;
  f[50] = in7[0] * in4[0] * -2.0;
  f[51] = 0.0;
  f[52] = in7[0] * in4[0] * -2.0;
  f[53] = 0.0;
  f[54] = in7[0] * in4[0] * -2.0;
  f[55] = 0.0;
  f[56] = in7[0] * in4[0] * -2.0;
  f[57] = in7[1] * in4[3] * -2.0;
  f[58] = in7[0] * in4[0] * -2.0;
  f[59] = 0.0;
  f[60] = in7[0] * in4[0] * -2.0;
  f[61] = 0.0;
  f[62] = in7[0] * in4[0] * -2.0;
  f[63] = 0.0;
  f[64] = in7[0] * in4[0] * -2.0;
  f[65] = in7[1] * in4[4] * -2.0;
  f[66] = in7[0] * in4[0] * -2.0;
  f[67] = 0.0;
  f[68] = in5[0] * in8[0] * -2.0;
  f[69] = in5[1] * in8[1] * -2.0;
  f[70] = in5[0] * in8[0] * -2.0;
  f[71] = in5[1] * in8[1] * -2.0;
  f[72] = in5[0] * in8[0] * -2.0;
  f[73] = in5[1] * in8[1] * -2.0;
  f[74] = in5[0] * in8[0] * -2.0;
  f[75] = in5[1] * in8[1] * -2.0;
  f[76] = in5[0] * in8[0] * -2.0;
  f[77] = in5[1] * in8[1] * -2.0;
  f[78] = in5[0] * in8[0] * -2.0;
  f[79] = in5[1] * in8[1] * -2.0;
  f[80] = in5[0] * in8[0] * -2.0;
  f[81] = in5[1] * in8[1] * -2.0;
  f[82] = in5[0] * in8[0] * -2.0;
  f[83] = in5[1] * in8[1] * -2.0;
  f[84] = in5[0] * in8[0] * -2.0;
  f[85] = in5[1] * in8[1] * -2.0;
  f[86] = in5[0] * in8[0] * -2.0;
  f[87] = in5[1] * in8[1] * -2.0;
  f[88] = in5[0] * in8[0] * -2.0;
  f[89] = in5[1] * in8[1] * -2.0;
  f[90] = in5[0] * in8[0] * -2.0;
  f[91] = in5[1] * in8[1] * -2.0;
  f[92] = in5[0] * in8[0] * -2.0;
  f[93] = in5[1] * in8[1] * -2.0;
  f[94] = in5[0] * in8[0] * -2.0;
  f[95] = in5[1] * in8[1] * -2.0;
  f[96] = in5[0] * in8[0] * -2.0;
  f[97] = in5[1] * in8[1] * -2.0;
  f[98] = in5[0] * in8[0] * -2.0;
  f[99] = in5[1] * in8[1] * -2.0;
  f[100] = in5[0] * in8[0] * -2.0;
  f[101] = in5[1] * in8[1] * -2.0;
  f[102] = 0.0;
  f[103] = 0.0;
  f[104] = 0.0;
  f[105] = Cpx1 * cRx1 * -2.0;
  f[106] = Cpx1 * cRx1 * -2.0;
  f[107] = Cpx1 * cRx1 * -2.0;
  f[108] = Cpx1 * cRx1 * -2.0;
  f[109] = Cpx1 * cRx1 * -2.0;
  f[110] = Cpx1 * cRx1 * -2.0;
  f[111] = Cpx1 * cRx1 * -2.0;
  f[112] = Cpx1 * cRx1 * -2.0;
  f[113] = Cpx1 * cRx1 * -2.0;
  f[114] = Cpx1 * cRx1 * -2.0;
  f[115] = Cpx1 * cRx1 * -2.0;
  f[116] = Cpx1 * cRx1 * -2.0;
  f[117] = Cpx1 * cRx1 * -2.0;
  f[118] = Cpx1 * cRx1 * -2.0;
  f[119] = 0.0;
  f[120] = 0.0;
  f[121] = 0.0;
  f[122] = Cpy1 * cRy1 * -2.0;
  f[123] = Cpy1 * cRy1 * -2.0;
  f[124] = Cpy1 * cRy1 * -2.0;
  f[125] = Cpy1 * cRy1 * -2.0;
  f[126] = Cpy1 * cRy1 * -2.0;
  f[127] = Cpy1 * cRy1 * -2.0;
  f[128] = Cpy1 * cRy1 * -2.0;
  f[129] = Cpy1 * cRy1 * -2.0;
  f[130] = Cpy1 * cRy1 * -2.0;
  f[131] = Cpy1 * cRy1 * -2.0;
  f[132] = Cpy1 * cRy1 * -2.0;
  f[133] = Cpy1 * cRy1 * -2.0;
  f[134] = Cpy1 * cRy1 * -2.0;
  f[135] = Cpy1 * cRy1 * -2.0;
  memset(&f[136], 0, 17U * sizeof(real_T));
  f[153] = Cpx1 * cRx1 * 28.0;
  f[154] = Cpx1 * cRx1 * 20.0;
  f[155] = Cpx1 * cRx1 * 12.0;
  f[156] = Cpx1 * cRx1 * 4.0;
  f[157] = Cpy1 * cRy1 * 28.0;
  f[158] = Cpy1 * cRy1 * 20.0;
  f[159] = Cpy1 * cRy1 * 12.0;
  f[160] = Cpy1 * cRy1 * 4.0;
  memset(&f[161], 0, 44U * sizeof(real_T));
  f[205] = in16[1] * in16[6] * -2.0;
  f[206] = in16[1] * in16[7] * -2.0;
  f[207] = in16[1] * in16[8] * -2.0;
  f[208] = 0.0;
  f[209] = 0.0;
  f[210] = in16[2] * in16[11] * -2.0;
  f[211] = in16[2] * in16[12] * -2.0;
  f[212] = in16[2] * in16[13] * -2.0;
  f[213] = 0.0;
  f[214] = 0.0;
  f[215] = in16[3] * in16[16] * -2.0;
  f[216] = in16[3] * in16[17] * -2.0;
  f[217] = in16[3] * in16[18] * -2.0;
  memset(&f[218], 0, 20U * sizeof(real_T));
}

/* End of code generation (Obj_LeftStart13DFootV98.cpp) */
