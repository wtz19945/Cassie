/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t234;
  double t266;
  double t330;
  double t442;
  double t186;
  double t447;
  double t574;
  double t438;
  double t459;
  double t524;
  double t151;
  double t590;
  double t599;
  double t605;
  double t615;
  double t650;
  double t663;
  double t684;
  double t685;
  double t704;
  double t817;
  double t535;
  double t761;
  double t797;
  double t113;
  double t867;
  double t871;
  double t895;
  double t1123;
  double t806;
  double t958;
  double t970;
  double t88;
  double t1152;
  double t1195;
  double t1197;
  double t1674;
  double t1007;
  double t1227;
  double t1322;
  double t16;
  double t1684;
  double t1691;
  double t1746;
  double t1793;
  double t1624;
  double t1762;
  double t1776;
  double t4;
  double t1801;
  double t1810;
  double t1820;
  double t2010;
  double t1989;
  double t2029;
  double t2082;
  double t2192;
  double t2233;
  double t2253;
  double t2157;
  double t2270;
  double t2290;
  double t2340;
  double t2390;
  double t2394;
  double t2313;
  double t2427;
  double t2431;
  double t2444;
  double t2448;
  double t2451;
  double t2433;
  double t2496;
  double t2500;
  double t2524;
  double t2551;
  double t2559;
  double t2506;
  double t2575;
  double t2595;
  double t2648;
  double t2654;
  double t2689;
  double t2644;
  double t2696;
  double t2702;
  double t2736;
  double t2745;
  double t2750;
  double t2898;
  double t2903;
  double t2912;
  double t2913;
  double t2929;
  double t2946;
  double t2993;
  double t2997;
  double t3019;
  double t3041;
  double t3046;
  double t3051;
  double t3078;
  double t3093;
  double t3096;
  double t3076;
  double t3132;
  double t3142;
  double t3148;
  double t3153;
  double t3158;
  double t3147;
  double t3183;
  double t3191;
  double t3205;
  double t3206;
  double t3207;
  double t3349;
  double t3388;
  double t3400;
  double t3407;
  double t3396;
  double t3408;
  double t3409;
  double t3420;
  double t3438;
  double t3455;
  double t3415;
  double t3473;
  double t3477;
  double t3486;
  double t3490;
  double t3491;
  double t3484;
  double t3494;
  double t3496;
  double t3503;
  double t3506;
  double t3526;
  double t3500;
  double t3538;
  double t3564;
  double t3599;
  double t3605;
  double t3609;
  double t3671;
  double t3691;
  double t3695;
  double t3668;
  double t3706;
  double t3717;
  double t3726;
  double t3744;
  double t3757;
  double t3722;
  double t3770;
  double t3773;
  double t3777;
  double t3784;
  double t3795;
  double t3775;
  double t3796;
  double t3805;
  double t3833;
  double t3836;
  double t3845;
  double t3825;
  double t3859;
  double t3879;
  double t3885;
  double t3894;
  double t3898;
  double t3996;
  double t3997;
  double t4001;
  double t4013;
  double t4027;
  double t4044;
  double t4047;
  double t4040;
  double t4048;
  double t4057;
  double t4064;
  double t4072;
  double t4093;
  double t4060;
  double t4137;
  double t4142;
  double t4154;
  double t4156;
  double t4159;
  double t4266;
  double t4275;
  double t4287;
  double t4302;
  double t4304;
  double t4328;
  double t4332;
  double t4326;
  double t4333;
  double t4378;
  double t4407;
  double t4408;
  double t4419;
  double t4488;
  double t4516;
  double t4532;
  double t4542;
  double t4599;
  double t4604;
  double t4608;
  double t4601;
  double t4637;
  double t4693;
  double t4696;
  double t4698;
  double t4763;
  double t4764;
  double t4780;
  double t4801;
  double t4821;
  double t4858;
  double t4784;
  double t4874;
  double t4879;
  double t4916;
  double t4922;
  double t4929;
  double t4933;
  double t4935;
  double t4941;
  double t4893;
  double t4950;
  double t4957;
  double t4984;
  double t5007;
  double t5017;
  double t4958;
  double t5024;
  double t5032;
  double t5041;
  double t5044;
  double t5061;
  double t5035;
  double t5077;
  double t5081;
  double t5095;
  double t5137;
  double t5139;
  double t5083;
  double t5147;
  double t5150;
  double t5158;
  double t5183;
  double t5201;
  double t5312;
  double t5315;
  double t5323;
  double t5351;
  double t5371;
  double t5374;
  double t5394;
  double t5398;
  double t5401;
  double t5350;
  double t5404;
  double t5406;
  double t5426;
  double t5428;
  double t5441;
  double t5412;
  double t5444;
  double t5449;
  double t5489;
  double t5498;
  double t5515;
  double t5454;
  double t5522;
  double t5525;
  double t5551;
  double t5556;
  double t5558;
  double t5537;
  double t5564;
  double t5570;
  double t5591;
  double t5596;
  double t5600;
  double t5720;
  double t5721;
  double t5725;
  double t5732;
  double t5733;
  double t5752;
  double t5762;
  double t5767;
  double t5734;
  double t5776;
  double t5778;
  double t5783;
  double t5807;
  double t5812;
  double t5779;
  double t5824;
  double t5826;
  double t5846;
  double t5851;
  double t5852;
  double t5834;
  double t5853;
  double t5854;
  double t5858;
  double t5862;
  double t5875;
  double t5855;
  double t5913;
  double t5916;
  double t5930;
  double t5931;
  double t5934;
  double t5975;
  double t5976;
  double t5979;
  double t5984;
  double t5992;
  double t6002;
  double t6006;
  double t6008;
  double t6013;
  double t6015;
  double t6035;
  double t6037;
  double t6043;
  double t6049;
  double t6051;
  double t6038;
  double t6055;
  double t6056;
  double t6065;
  double t6068;
  double t6075;
  double t6063;
  double t6077;
  double t6096;
  double t6101;
  double t6121;
  double t6133;
  double t6197;
  double t6207;
  double t6211;
  double t6213;
  double t6208;
  double t6219;
  double t6222;
  double t6232;
  double t6235;
  double t6238;
  double t6225;
  double t6239;
  double t6250;
  double t6261;
  double t6264;
  double t6269;
  double t6260;
  double t6280;
  double t6296;
  double t6302;
  double t6304;
  double t6312;
  double t6297;
  double t6318;
  double t6323;
  double t6353;
  double t6359;
  double t6378;
  double t4730;
  double t4731;
  double t6523;
  double t6538;
  double t6543;
  double t6522;
  double t6551;
  double t6554;
  double t6559;
  double t6563;
  double t6565;
  double t6557;
  double t6568;
  double t6578;
  double t6603;
  double t6604;
  double t6607;
  double t6598;
  double t6615;
  double t6619;
  double t6630;
  double t6645;
  double t6658;
  double t6626;
  double t6660;
  double t6667;
  double t6674;
  double t6677;
  double t6687;
  double t6735;
  double t6739;
  double t6743;
  double t6754;
  double t6771;
  double t6780;
  double t6781;
  double t6779;
  double t6785;
  double t6797;
  double t6804;
  double t6806;
  double t6810;
  double t6802;
  double t6814;
  double t6817;
  double t6827;
  double t6831;
  double t6856;
  double t6888;
  double t6890;
  double t6906;
  double t6909;
  double t6916;
  double t6933;
  double t6934;
  double t6930;
  double t6940;
  double t6941;
  double t6950;
  double t6957;
  double t6979;
  double t7030;
  double t7033;
  double t7038;
  double t7041;
  double t7059;
  double t7073;
  double t7075;
  double t7064;
  double t7097;
  double t7120;
  double t7131;
  double t7132;
  double t7159;
  double t7160;
  double t7161;
  double t7170;
  double t7172;
  double t7176;
  double t7177;
  double t7192;
  double t7196;
  double t7200;
  double t7205;
  double t7211;
  double t7199;
  double t7226;
  double t7233;
  double t7240;
  double t7246;
  double t7254;
  double t7235;
  double t7258;
  double t7261;
  double t7274;
  double t7276;
  double t7277;
  double t7327;
  double t7330;
  double t7332;
  double t7336;
  double t7343;
  double t7345;
  double t7334;
  double t7349;
  double t7351;
  double t7373;
  double t7376;
  double t7378;
  double t7369;
  double t7381;
  double t7394;
  double t7412;
  double t7428;
  double t7432;
  double t7396;
  double t7433;
  double t7438;
  double t7442;
  double t7446;
  double t7447;
  double t7440;
  double t7448;
  double t7450;
  double t7459;
  double t7463;
  double t7469;
  double t7455;
  double t7470;
  double t7471;
  double t7479;
  double t7494;
  double t7499;
  double t7515;
  double t7518;
  double t7520;
  double t7542;
  double t7543;
  double t7544;
  double t7541;
  double t7555;
  double t7563;
  double t7591;
  double t7595;
  double t7596;
  double t7568;
  double t7597;
  double t7600;
  double t7609;
  double t7611;
  double t7615;
  double t7602;
  double t7630;
  double t7631;
  double t7651;
  double t7653;
  double t7656;
  double t7638;
  double t7657;
  double t7660;
  double t7681;
  double t7686;
  double t7688;
  double t7738;
  double t7742;
  double t7748;
  double t7753;
  double t7757;
  double t7759;
  double t7760;
  double t7758;
  double t7762;
  double t7765;
  double t7777;
  double t7778;
  double t7783;
  double t7772;
  double t7790;
  double t7793;
  double t7802;
  double t7803;
  double t7804;
  double t7833;
  double t7838;
  double t7839;
  double t7840;
  double t7845;
  double t7848;
  double t7849;
  double t7847;
  double t7851;
  double t7854;
  double t7857;
  double t7858;
  double t7859;
  double t7884;
  double t7899;
  double t7906;
  double t7907;
  double t7911;
  double t7915;
  double t7916;
  double t7914;
  double t7923;
  double t7940;
  double t7942;
  double t7943;
  double t7968;
  double t7969;
  double t7970;
  double t7978;
  double t7982;
  double t7983;
  double t7984;
  double t7985;
  double t7988;
  double t7977;
  double t7990;
  double t7991;
  double t7997;
  double t7998;
  double t7999;
  double t7993;
  double t8003;
  double t8004;
  double t8007;
  double t8008;
  double t8011;
  double t8005;
  double t8012;
  double t8013;
  double t8021;
  double t8022;
  double t8024;
  double t8017;
  double t8025;
  double t8028;
  double t8033;
  double t8034;
  double t8035;
  double t1781;
  double t1828;
  double t1829;
  double t1867;
  double t1879;
  double t1927;
  double t2709;
  double t2753;
  double t2755;
  double t2800;
  double t2815;
  double t2827;
  double t3201;
  double t3246;
  double t3256;
  double t3270;
  double t3298;
  double t3300;
  double t3595;
  double t3610;
  double t3613;
  double t3635;
  double t3652;
  double t3662;
  double t3881;
  double t3908;
  double t3918;
  double t3942;
  double t3952;
  double t3957;
  double t4153;
  double t4160;
  double t4163;
  double t4185;
  double t4213;
  double t4234;
  double t4392;
  double t4423;
  double t4441;
  double t4447;
  double t4456;
  double t4457;
  double t4614;
  double t4621;
  double t4640;
  double t4652;
  double t4712;
  double t4718;
  double t5155;
  double t5204;
  double t5224;
  double t5234;
  double t5247;
  double t5260;
  double t5578;
  double t5601;
  double t5602;
  double t5628;
  double t5656;
  double t5701;
  double t5917;
  double t5938;
  double t5939;
  double t5947;
  double t5958;
  double t5959;
  double t6100;
  double t6134;
  double t6137;
  double t6151;
  double t6152;
  double t6154;
  double t6335;
  double t6380;
  double t6381;
  double t6411;
  double t6417;
  double t6425;
  double t6470;
  double t6477;
  double t6478;
  double t4734;
  double t6669;
  double t6699;
  double t6702;
  double t6709;
  double t6710;
  double t6712;
  double t6823;
  double t6859;
  double t6861;
  double t6870;
  double t6876;
  double t6880;
  double t6942;
  double t6985;
  double t6988;
  double t7017;
  double t7021;
  double t7023;
  double t7081;
  double t7083;
  double t7105;
  double t7108;
  double t7137;
  double t7138;
  double t7144;
  double t7151;
  double t7263;
  double t7283;
  double t7290;
  double t7302;
  double t7316;
  double t7317;
  double t8349;
  double t8350;
  double t8351;
  double t7663;
  double t7690;
  double t7700;
  double t7712;
  double t7720;
  double t7722;
  double t7797;
  double t7805;
  double t7807;
  double t7810;
  double t7821;
  double t7825;
  double t7856;
  double t7860;
  double t7864;
  double t7867;
  double t7869;
  double t7876;
  double t7919;
  double t7920;
  double t7924;
  double t7927;
  double t7945;
  double t7946;
  double t7955;
  double t7958;
  double t8030;
  double t8038;
  double t8039;
  double t8043;
  double t8044;
  double t8045;
  t234 = Cos(var1[3]);
  t266 = Cos(var1[4]);
  t330 = Cos(var1[5]);
  t442 = Sin(var1[13]);
  t186 = Cos(var1[13]);
  t447 = Sin(var1[5]);
  t574 = Cos(var1[15]);
  t438 = t186*t234*t266*t330;
  t459 = -1.*t234*t266*t442*t447;
  t524 = t438 + t459;
  t151 = Sin(var1[15]);
  t590 = Cos(var1[14]);
  t599 = Sin(var1[4]);
  t605 = -1.*t590*t234*t599;
  t615 = Sin(var1[14]);
  t650 = t234*t266*t330*t442;
  t663 = t186*t234*t266*t447;
  t684 = t650 + t663;
  t685 = t615*t684;
  t704 = t605 + t685;
  t817 = Cos(var1[16]);
  t535 = t151*t524;
  t761 = t574*t704;
  t797 = t535 + t761;
  t113 = Sin(var1[16]);
  t867 = t574*t524;
  t871 = -1.*t151*t704;
  t895 = t867 + t871;
  t1123 = Cos(var1[17]);
  t806 = -1.*t113*t797;
  t958 = t817*t895;
  t970 = t806 + t958;
  t88 = Sin(var1[17]);
  t1152 = t817*t797;
  t1195 = t113*t895;
  t1197 = t1152 + t1195;
  t1674 = Cos(var1[18]);
  t1007 = t88*t970;
  t1227 = t1123*t1197;
  t1322 = t1007 + t1227;
  t16 = Sin(var1[18]);
  t1684 = t1123*t970;
  t1691 = -1.*t88*t1197;
  t1746 = t1684 + t1691;
  t1793 = Cos(var1[19]);
  t1624 = -1.*t16*t1322;
  t1762 = t1674*t1746;
  t1776 = t1624 + t1762;
  t4 = Sin(var1[19]);
  t1801 = t1674*t1322;
  t1810 = t16*t1746;
  t1820 = t1801 + t1810;
  t2010 = Sin(var1[3]);
  t1989 = t234*t330*t599;
  t2029 = t2010*t447;
  t2082 = t1989 + t2029;
  t2192 = t330*t2010;
  t2233 = -1.*t234*t599*t447;
  t2253 = t2192 + t2233;
  t2157 = -1.*t442*t2082;
  t2270 = t186*t2253;
  t2290 = t2157 + t2270;
  t2340 = t186*t2082;
  t2390 = t442*t2253;
  t2394 = t2340 + t2390;
  t2313 = t151*t2290;
  t2427 = t574*t615*t2394;
  t2431 = t2313 + t2427;
  t2444 = t574*t2290;
  t2448 = -1.*t615*t151*t2394;
  t2451 = t2444 + t2448;
  t2433 = -1.*t113*t2431;
  t2496 = t817*t2451;
  t2500 = t2433 + t2496;
  t2524 = t817*t2431;
  t2551 = t113*t2451;
  t2559 = t2524 + t2551;
  t2506 = t88*t2500;
  t2575 = t1123*t2559;
  t2595 = t2506 + t2575;
  t2648 = t1123*t2500;
  t2654 = -1.*t88*t2559;
  t2689 = t2648 + t2654;
  t2644 = -1.*t16*t2595;
  t2696 = t1674*t2689;
  t2702 = t2644 + t2696;
  t2736 = t1674*t2595;
  t2745 = t16*t2689;
  t2750 = t2736 + t2745;
  t2898 = -1.*t234*t266*t615;
  t2903 = t442*t2082;
  t2912 = -1.*t330*t2010;
  t2913 = t234*t599*t447;
  t2929 = t2912 + t2913;
  t2946 = t186*t2929;
  t2993 = t2903 + t2946;
  t2997 = t590*t2993;
  t3019 = t2898 + t2997;
  t3041 = -1.*t817*t151*t3019;
  t3046 = -1.*t574*t113*t3019;
  t3051 = t3041 + t3046;
  t3078 = t574*t817*t3019;
  t3093 = -1.*t151*t113*t3019;
  t3096 = t3078 + t3093;
  t3076 = t88*t3051;
  t3132 = t1123*t3096;
  t3142 = t3076 + t3132;
  t3148 = t1123*t3051;
  t3153 = -1.*t88*t3096;
  t3158 = t3148 + t3153;
  t3147 = -1.*t16*t3142;
  t3183 = t1674*t3158;
  t3191 = t3147 + t3183;
  t3205 = t1674*t3142;
  t3206 = t16*t3158;
  t3207 = t3205 + t3206;
  t3349 = -1.*t186*t2929;
  t3388 = t2157 + t3349;
  t3400 = -1.*t442*t2929;
  t3407 = t2340 + t3400;
  t3396 = t151*t3388;
  t3408 = t574*t615*t3407;
  t3409 = t3396 + t3408;
  t3420 = t574*t3388;
  t3438 = -1.*t615*t151*t3407;
  t3455 = t3420 + t3438;
  t3415 = -1.*t113*t3409;
  t3473 = t817*t3455;
  t3477 = t3415 + t3473;
  t3486 = t817*t3409;
  t3490 = t113*t3455;
  t3491 = t3486 + t3490;
  t3484 = t88*t3477;
  t3494 = t1123*t3491;
  t3496 = t3484 + t3494;
  t3503 = t1123*t3477;
  t3506 = -1.*t88*t3491;
  t3526 = t3503 + t3506;
  t3500 = -1.*t16*t3496;
  t3538 = t1674*t3526;
  t3564 = t3500 + t3538;
  t3599 = t1674*t3496;
  t3605 = t16*t3526;
  t3609 = t3599 + t3605;
  t3671 = t590*t234*t266;
  t3691 = t615*t2993;
  t3695 = t3671 + t3691;
  t3668 = -1.*t151*t3407;
  t3706 = -1.*t574*t3695;
  t3717 = t3668 + t3706;
  t3726 = t574*t3407;
  t3744 = -1.*t151*t3695;
  t3757 = t3726 + t3744;
  t3722 = t113*t3717;
  t3770 = t817*t3757;
  t3773 = t3722 + t3770;
  t3777 = t817*t3717;
  t3784 = -1.*t113*t3757;
  t3795 = t3777 + t3784;
  t3775 = -1.*t88*t3773;
  t3796 = t1123*t3795;
  t3805 = t3775 + t3796;
  t3833 = t1123*t3773;
  t3836 = t88*t3795;
  t3845 = t3833 + t3836;
  t3825 = t16*t3805;
  t3859 = t1674*t3845;
  t3879 = t3825 + t3859;
  t3885 = t1674*t3805;
  t3894 = -1.*t16*t3845;
  t3898 = t3885 + t3894;
  t3996 = t151*t3407;
  t3997 = t574*t3695;
  t4001 = t3996 + t3997;
  t4013 = -1.*t113*t4001;
  t4027 = t4013 + t3770;
  t4044 = -1.*t817*t4001;
  t4047 = t4044 + t3784;
  t4040 = -1.*t88*t4027;
  t4048 = t1123*t4047;
  t4057 = t4040 + t4048;
  t4064 = t1123*t4027;
  t4072 = t88*t4047;
  t4093 = t4064 + t4072;
  t4060 = t16*t4057;
  t4137 = t1674*t4093;
  t4142 = t4060 + t4137;
  t4154 = t1674*t4057;
  t4156 = -1.*t16*t4093;
  t4159 = t4154 + t4156;
  t4266 = t817*t4001;
  t4275 = t113*t3757;
  t4287 = t4266 + t4275;
  t4302 = -1.*t1123*t4287;
  t4304 = t4040 + t4302;
  t4328 = -1.*t88*t4287;
  t4332 = t4064 + t4328;
  t4326 = t16*t4304;
  t4333 = t1674*t4332;
  t4378 = t4326 + t4333;
  t4407 = t1674*t4304;
  t4408 = -1.*t16*t4332;
  t4419 = t4407 + t4408;
  t4488 = t88*t4027;
  t4516 = t1123*t4287;
  t4532 = t4488 + t4516;
  t4542 = -1.*t16*t4532;
  t4599 = t4542 + t4333;
  t4604 = -1.*t1674*t4532;
  t4608 = t4604 + t4408;
  t4601 = -1.*t4*t4599;
  t4637 = t1793*t4599;
  t4693 = t1674*t4532;
  t4696 = t16*t4332;
  t4698 = t4693 + t4696;
  t4763 = -1.*t330*t2010*t599;
  t4764 = t234*t447;
  t4780 = t4763 + t4764;
  t4801 = -1.*t234*t330;
  t4821 = -1.*t2010*t599*t447;
  t4858 = t4801 + t4821;
  t4784 = t186*t4780;
  t4874 = -1.*t442*t4858;
  t4879 = t4784 + t4874;
  t4916 = -1.*t590*t266*t2010;
  t4922 = t442*t4780;
  t4929 = t186*t4858;
  t4933 = t4922 + t4929;
  t4935 = t615*t4933;
  t4941 = t4916 + t4935;
  t4893 = t151*t4879;
  t4950 = t574*t4941;
  t4957 = t4893 + t4950;
  t4984 = t574*t4879;
  t5007 = -1.*t151*t4941;
  t5017 = t4984 + t5007;
  t4958 = -1.*t113*t4957;
  t5024 = t817*t5017;
  t5032 = t4958 + t5024;
  t5041 = t817*t4957;
  t5044 = t113*t5017;
  t5061 = t5041 + t5044;
  t5035 = t88*t5032;
  t5077 = t1123*t5061;
  t5081 = t5035 + t5077;
  t5095 = t1123*t5032;
  t5137 = -1.*t88*t5061;
  t5139 = t5095 + t5137;
  t5083 = -1.*t16*t5081;
  t5147 = t1674*t5139;
  t5150 = t5083 + t5147;
  t5158 = t1674*t5081;
  t5183 = t16*t5139;
  t5201 = t5158 + t5183;
  t5312 = t186*t266*t330*t2010;
  t5315 = -1.*t266*t442*t2010*t447;
  t5323 = t5312 + t5315;
  t5351 = -1.*t590*t2010*t599;
  t5371 = t266*t330*t442*t2010;
  t5374 = t186*t266*t2010*t447;
  t5394 = t5371 + t5374;
  t5398 = t615*t5394;
  t5401 = t5351 + t5398;
  t5350 = t151*t5323;
  t5404 = t574*t5401;
  t5406 = t5350 + t5404;
  t5426 = t574*t5323;
  t5428 = -1.*t151*t5401;
  t5441 = t5426 + t5428;
  t5412 = -1.*t113*t5406;
  t5444 = t817*t5441;
  t5449 = t5412 + t5444;
  t5489 = t817*t5406;
  t5498 = t113*t5441;
  t5515 = t5489 + t5498;
  t5454 = t88*t5449;
  t5522 = t1123*t5515;
  t5525 = t5454 + t5522;
  t5551 = t1123*t5449;
  t5556 = -1.*t88*t5515;
  t5558 = t5551 + t5556;
  t5537 = -1.*t16*t5525;
  t5564 = t1674*t5558;
  t5570 = t5537 + t5564;
  t5591 = t1674*t5525;
  t5596 = t16*t5558;
  t5600 = t5591 + t5596;
  t5720 = t330*t2010*t599;
  t5721 = -1.*t234*t447;
  t5725 = t5720 + t5721;
  t5732 = -1.*t442*t5725;
  t5733 = t5732 + t4929;
  t5752 = t186*t5725;
  t5762 = t442*t4858;
  t5767 = t5752 + t5762;
  t5734 = t151*t5733;
  t5776 = t574*t615*t5767;
  t5778 = t5734 + t5776;
  t5783 = t574*t5733;
  t5807 = -1.*t615*t151*t5767;
  t5812 = t5783 + t5807;
  t5779 = -1.*t113*t5778;
  t5824 = t817*t5812;
  t5826 = t5779 + t5824;
  t5846 = t817*t5778;
  t5851 = t113*t5812;
  t5852 = t5846 + t5851;
  t5834 = t88*t5826;
  t5853 = t1123*t5852;
  t5854 = t5834 + t5853;
  t5858 = t1123*t5826;
  t5862 = -1.*t88*t5852;
  t5875 = t5858 + t5862;
  t5855 = -1.*t16*t5854;
  t5913 = t1674*t5875;
  t5916 = t5855 + t5913;
  t5930 = t1674*t5854;
  t5931 = t16*t5875;
  t5934 = t5930 + t5931;
  t5975 = -1.*t266*t615*t2010;
  t5976 = t442*t5725;
  t5979 = t234*t330;
  t5984 = t2010*t599*t447;
  t5992 = t5979 + t5984;
  t6002 = t186*t5992;
  t6006 = t5976 + t6002;
  t6008 = t590*t6006;
  t6013 = t5975 + t6008;
  t6015 = -1.*t817*t151*t6013;
  t6035 = -1.*t574*t113*t6013;
  t6037 = t6015 + t6035;
  t6043 = t574*t817*t6013;
  t6049 = -1.*t151*t113*t6013;
  t6051 = t6043 + t6049;
  t6038 = t88*t6037;
  t6055 = t1123*t6051;
  t6056 = t6038 + t6055;
  t6065 = t1123*t6037;
  t6068 = -1.*t88*t6051;
  t6075 = t6065 + t6068;
  t6063 = -1.*t16*t6056;
  t6077 = t1674*t6075;
  t6096 = t6063 + t6077;
  t6101 = t1674*t6056;
  t6121 = t16*t6075;
  t6133 = t6101 + t6121;
  t6197 = -1.*t186*t5992;
  t6207 = t5732 + t6197;
  t6211 = -1.*t442*t5992;
  t6213 = t5752 + t6211;
  t6208 = t151*t6207;
  t6219 = t574*t615*t6213;
  t6222 = t6208 + t6219;
  t6232 = t574*t6207;
  t6235 = -1.*t615*t151*t6213;
  t6238 = t6232 + t6235;
  t6225 = -1.*t113*t6222;
  t6239 = t817*t6238;
  t6250 = t6225 + t6239;
  t6261 = t817*t6222;
  t6264 = t113*t6238;
  t6269 = t6261 + t6264;
  t6260 = t88*t6250;
  t6280 = t1123*t6269;
  t6296 = t6260 + t6280;
  t6302 = t1123*t6250;
  t6304 = -1.*t88*t6269;
  t6312 = t6302 + t6304;
  t6297 = -1.*t16*t6296;
  t6318 = t1674*t6312;
  t6323 = t6297 + t6318;
  t6353 = t1674*t6296;
  t6359 = t16*t6312;
  t6378 = t6353 + t6359;
  t4730 = -1.*t4*t4698;
  t4731 = t4637 + t4730;
  t6523 = t590*t266*t2010;
  t6538 = t615*t6006;
  t6543 = t6523 + t6538;
  t6522 = -1.*t151*t6213;
  t6551 = -1.*t574*t6543;
  t6554 = t6522 + t6551;
  t6559 = t574*t6213;
  t6563 = -1.*t151*t6543;
  t6565 = t6559 + t6563;
  t6557 = t113*t6554;
  t6568 = t817*t6565;
  t6578 = t6557 + t6568;
  t6603 = t817*t6554;
  t6604 = -1.*t113*t6565;
  t6607 = t6603 + t6604;
  t6598 = -1.*t88*t6578;
  t6615 = t1123*t6607;
  t6619 = t6598 + t6615;
  t6630 = t1123*t6578;
  t6645 = t88*t6607;
  t6658 = t6630 + t6645;
  t6626 = t16*t6619;
  t6660 = t1674*t6658;
  t6667 = t6626 + t6660;
  t6674 = t1674*t6619;
  t6677 = -1.*t16*t6658;
  t6687 = t6674 + t6677;
  t6735 = t151*t6213;
  t6739 = t574*t6543;
  t6743 = t6735 + t6739;
  t6754 = -1.*t113*t6743;
  t6771 = t6754 + t6568;
  t6780 = -1.*t817*t6743;
  t6781 = t6780 + t6604;
  t6779 = -1.*t88*t6771;
  t6785 = t1123*t6781;
  t6797 = t6779 + t6785;
  t6804 = t1123*t6771;
  t6806 = t88*t6781;
  t6810 = t6804 + t6806;
  t6802 = t16*t6797;
  t6814 = t1674*t6810;
  t6817 = t6802 + t6814;
  t6827 = t1674*t6797;
  t6831 = -1.*t16*t6810;
  t6856 = t6827 + t6831;
  t6888 = t817*t6743;
  t6890 = t113*t6565;
  t6906 = t6888 + t6890;
  t6909 = -1.*t1123*t6906;
  t6916 = t6779 + t6909;
  t6933 = -1.*t88*t6906;
  t6934 = t6804 + t6933;
  t6930 = t16*t6916;
  t6940 = t1674*t6934;
  t6941 = t6930 + t6940;
  t6950 = t1674*t6916;
  t6957 = -1.*t16*t6934;
  t6979 = t6950 + t6957;
  t7030 = t88*t6771;
  t7033 = t1123*t6906;
  t7038 = t7030 + t7033;
  t7041 = -1.*t16*t7038;
  t7059 = t7041 + t6940;
  t7073 = -1.*t1674*t7038;
  t7075 = t7073 + t6957;
  t7064 = -1.*t4*t7059;
  t7097 = t1793*t7059;
  t7120 = t1674*t7038;
  t7131 = t16*t6934;
  t7132 = t7120 + t7131;
  t7159 = t615*t599;
  t7160 = t266*t330*t442;
  t7161 = t186*t266*t447;
  t7170 = t7160 + t7161;
  t7172 = t590*t7170;
  t7176 = t7159 + t7172;
  t7177 = -1.*t817*t151*t7176;
  t7192 = -1.*t574*t113*t7176;
  t7196 = t7177 + t7192;
  t7200 = t574*t817*t7176;
  t7205 = -1.*t151*t113*t7176;
  t7211 = t7200 + t7205;
  t7199 = t88*t7196;
  t7226 = t1123*t7211;
  t7233 = t7199 + t7226;
  t7240 = t1123*t7196;
  t7246 = -1.*t88*t7211;
  t7254 = t7240 + t7246;
  t7235 = -1.*t16*t7233;
  t7258 = t1674*t7254;
  t7261 = t7235 + t7258;
  t7274 = t1674*t7233;
  t7276 = t16*t7254;
  t7277 = t7274 + t7276;
  t7327 = -1.*t266*t330*t442;
  t7330 = -1.*t186*t266*t447;
  t7332 = t7327 + t7330;
  t7336 = t186*t266*t330;
  t7343 = -1.*t266*t442*t447;
  t7345 = t7336 + t7343;
  t7334 = t151*t7332;
  t7349 = t574*t615*t7345;
  t7351 = t7334 + t7349;
  t7373 = t574*t7332;
  t7376 = -1.*t615*t151*t7345;
  t7378 = t7373 + t7376;
  t7369 = -1.*t113*t7351;
  t7381 = t817*t7378;
  t7394 = t7369 + t7381;
  t7412 = t817*t7351;
  t7428 = t113*t7378;
  t7432 = t7412 + t7428;
  t7396 = t88*t7394;
  t7433 = t1123*t7432;
  t7438 = t7396 + t7433;
  t7442 = t1123*t7394;
  t7446 = -1.*t88*t7432;
  t7447 = t7442 + t7446;
  t7440 = -1.*t16*t7438;
  t7448 = t1674*t7447;
  t7450 = t7440 + t7448;
  t7459 = t1674*t7438;
  t7463 = t16*t7447;
  t7469 = t7459 + t7463;
  t7455 = t4*t7450;
  t7470 = t1793*t7469;
  t7471 = t7455 + t7470;
  t7479 = 0.642788*t7471;
  t7494 = t1793*t7450;
  t7499 = -1.*t4*t7469;
  t7515 = t7494 + t7499;
  t7518 = 0.766044*t7515;
  t7520 = t7479 + t7518;
  t7542 = -1.*t590*t599;
  t7543 = t615*t7170;
  t7544 = t7542 + t7543;
  t7541 = -1.*t151*t7345;
  t7555 = -1.*t574*t7544;
  t7563 = t7541 + t7555;
  t7591 = t574*t7345;
  t7595 = -1.*t151*t7544;
  t7596 = t7591 + t7595;
  t7568 = t113*t7563;
  t7597 = t817*t7596;
  t7600 = t7568 + t7597;
  t7609 = t817*t7563;
  t7611 = -1.*t113*t7596;
  t7615 = t7609 + t7611;
  t7602 = -1.*t88*t7600;
  t7630 = t1123*t7615;
  t7631 = t7602 + t7630;
  t7651 = t1123*t7600;
  t7653 = t88*t7615;
  t7656 = t7651 + t7653;
  t7638 = t16*t7631;
  t7657 = t1674*t7656;
  t7660 = t7638 + t7657;
  t7681 = t1674*t7631;
  t7686 = -1.*t16*t7656;
  t7688 = t7681 + t7686;
  t7738 = t151*t7345;
  t7742 = t574*t7544;
  t7748 = t7738 + t7742;
  t7753 = -1.*t113*t7748;
  t7757 = t7753 + t7597;
  t7759 = -1.*t817*t7748;
  t7760 = t7759 + t7611;
  t7758 = -1.*t88*t7757;
  t7762 = t1123*t7760;
  t7765 = t7758 + t7762;
  t7777 = t1123*t7757;
  t7778 = t88*t7760;
  t7783 = t7777 + t7778;
  t7772 = t16*t7765;
  t7790 = t1674*t7783;
  t7793 = t7772 + t7790;
  t7802 = t1674*t7765;
  t7803 = -1.*t16*t7783;
  t7804 = t7802 + t7803;
  t7833 = t817*t7748;
  t7838 = t113*t7596;
  t7839 = t7833 + t7838;
  t7840 = -1.*t1123*t7839;
  t7845 = t7758 + t7840;
  t7848 = -1.*t88*t7839;
  t7849 = t7777 + t7848;
  t7847 = t16*t7845;
  t7851 = t1674*t7849;
  t7854 = t7847 + t7851;
  t7857 = t1674*t7845;
  t7858 = -1.*t16*t7849;
  t7859 = t7857 + t7858;
  t7884 = t88*t7757;
  t7899 = t1123*t7839;
  t7906 = t7884 + t7899;
  t7907 = -1.*t16*t7906;
  t7911 = t7907 + t7851;
  t7915 = -1.*t1674*t7906;
  t7916 = t7915 + t7858;
  t7914 = -1.*t4*t7911;
  t7923 = t1793*t7911;
  t7940 = t1674*t7906;
  t7942 = t16*t7849;
  t7943 = t7940 + t7942;
  t7968 = -1.*t186*t330*t599;
  t7969 = t442*t599*t447;
  t7970 = t7968 + t7969;
  t7978 = -1.*t590*t266;
  t7982 = -1.*t330*t442*t599;
  t7983 = -1.*t186*t599*t447;
  t7984 = t7982 + t7983;
  t7985 = t615*t7984;
  t7988 = t7978 + t7985;
  t7977 = t151*t7970;
  t7990 = t574*t7988;
  t7991 = t7977 + t7990;
  t7997 = t574*t7970;
  t7998 = -1.*t151*t7988;
  t7999 = t7997 + t7998;
  t7993 = -1.*t113*t7991;
  t8003 = t817*t7999;
  t8004 = t7993 + t8003;
  t8007 = t817*t7991;
  t8008 = t113*t7999;
  t8011 = t8007 + t8008;
  t8005 = t88*t8004;
  t8012 = t1123*t8011;
  t8013 = t8005 + t8012;
  t8021 = t1123*t8004;
  t8022 = -1.*t88*t8011;
  t8024 = t8021 + t8022;
  t8017 = -1.*t16*t8013;
  t8025 = t1674*t8024;
  t8028 = t8017 + t8025;
  t8033 = t1674*t8013;
  t8034 = t16*t8024;
  t8035 = t8033 + t8034;
  t1781 = t4*t1776;
  t1828 = t1793*t1820;
  t1829 = t1781 + t1828;
  t1867 = t1793*t1776;
  t1879 = -1.*t4*t1820;
  t1927 = t1867 + t1879;
  t2709 = t4*t2702;
  t2753 = t1793*t2750;
  t2755 = t2709 + t2753;
  t2800 = t1793*t2702;
  t2815 = -1.*t4*t2750;
  t2827 = t2800 + t2815;
  t3201 = t4*t3191;
  t3246 = t1793*t3207;
  t3256 = t3201 + t3246;
  t3270 = t1793*t3191;
  t3298 = -1.*t4*t3207;
  t3300 = t3270 + t3298;
  t3595 = t4*t3564;
  t3610 = t1793*t3609;
  t3613 = t3595 + t3610;
  t3635 = t1793*t3564;
  t3652 = -1.*t4*t3609;
  t3662 = t3635 + t3652;
  t3881 = -1.*t4*t3879;
  t3908 = t1793*t3898;
  t3918 = t3881 + t3908;
  t3942 = t1793*t3879;
  t3952 = t4*t3898;
  t3957 = t3942 + t3952;
  t4153 = -1.*t4*t4142;
  t4160 = t1793*t4159;
  t4163 = t4153 + t4160;
  t4185 = t1793*t4142;
  t4213 = t4*t4159;
  t4234 = t4185 + t4213;
  t4392 = -1.*t4*t4378;
  t4423 = t1793*t4419;
  t4441 = t4392 + t4423;
  t4447 = t1793*t4378;
  t4456 = t4*t4419;
  t4457 = t4447 + t4456;
  t4614 = t1793*t4608;
  t4621 = t4601 + t4614;
  t4640 = t4*t4608;
  t4652 = t4637 + t4640;
  t4712 = -1.*t1793*t4698;
  t4718 = t4601 + t4712;
  t5155 = t4*t5150;
  t5204 = t1793*t5201;
  t5224 = t5155 + t5204;
  t5234 = t1793*t5150;
  t5247 = -1.*t4*t5201;
  t5260 = t5234 + t5247;
  t5578 = t4*t5570;
  t5601 = t1793*t5600;
  t5602 = t5578 + t5601;
  t5628 = t1793*t5570;
  t5656 = -1.*t4*t5600;
  t5701 = t5628 + t5656;
  t5917 = t4*t5916;
  t5938 = t1793*t5934;
  t5939 = t5917 + t5938;
  t5947 = t1793*t5916;
  t5958 = -1.*t4*t5934;
  t5959 = t5947 + t5958;
  t6100 = t4*t6096;
  t6134 = t1793*t6133;
  t6137 = t6100 + t6134;
  t6151 = t1793*t6096;
  t6152 = -1.*t4*t6133;
  t6154 = t6151 + t6152;
  t6335 = t4*t6323;
  t6380 = t1793*t6378;
  t6381 = t6335 + t6380;
  t6411 = t1793*t6323;
  t6417 = -1.*t4*t6378;
  t6425 = t6411 + t6417;
  t6470 = t4*t4599;
  t6477 = t1793*t4698;
  t6478 = t6470 + t6477;
  t4734 = 0.642788*t4731;
  t6669 = -1.*t4*t6667;
  t6699 = t1793*t6687;
  t6702 = t6669 + t6699;
  t6709 = t1793*t6667;
  t6710 = t4*t6687;
  t6712 = t6709 + t6710;
  t6823 = -1.*t4*t6817;
  t6859 = t1793*t6856;
  t6861 = t6823 + t6859;
  t6870 = t1793*t6817;
  t6876 = t4*t6856;
  t6880 = t6870 + t6876;
  t6942 = -1.*t4*t6941;
  t6985 = t1793*t6979;
  t6988 = t6942 + t6985;
  t7017 = t1793*t6941;
  t7021 = t4*t6979;
  t7023 = t7017 + t7021;
  t7081 = t1793*t7075;
  t7083 = t7064 + t7081;
  t7105 = t4*t7075;
  t7108 = t7097 + t7105;
  t7137 = -1.*t1793*t7132;
  t7138 = t7064 + t7137;
  t7144 = -1.*t4*t7132;
  t7151 = t7097 + t7144;
  t7263 = t4*t7261;
  t7283 = t1793*t7277;
  t7290 = t7263 + t7283;
  t7302 = t1793*t7261;
  t7316 = -1.*t4*t7277;
  t7317 = t7302 + t7316;
  t8349 = -0.766044*t7471;
  t8350 = 0.642788*t7515;
  t8351 = t8349 + t8350;
  t7663 = -1.*t4*t7660;
  t7690 = t1793*t7688;
  t7700 = t7663 + t7690;
  t7712 = t1793*t7660;
  t7720 = t4*t7688;
  t7722 = t7712 + t7720;
  t7797 = -1.*t4*t7793;
  t7805 = t1793*t7804;
  t7807 = t7797 + t7805;
  t7810 = t1793*t7793;
  t7821 = t4*t7804;
  t7825 = t7810 + t7821;
  t7856 = -1.*t4*t7854;
  t7860 = t1793*t7859;
  t7864 = t7856 + t7860;
  t7867 = t1793*t7854;
  t7869 = t4*t7859;
  t7876 = t7867 + t7869;
  t7919 = t1793*t7916;
  t7920 = t7914 + t7919;
  t7924 = t4*t7916;
  t7927 = t7923 + t7924;
  t7945 = -1.*t1793*t7943;
  t7946 = t7914 + t7945;
  t7955 = -1.*t4*t7943;
  t7958 = t7923 + t7955;
  t8030 = t4*t8028;
  t8038 = t1793*t8035;
  t8039 = t8030 + t8038;
  t8043 = t1793*t8028;
  t8044 = -1.*t4*t8035;
  t8045 = t8043 + t8044;
  p_output1[0]=(0.642788*t5224 + 0.766044*t5260)*var2[3] + (0.642788*t1829 + 0.766044*t1927)*var2[4] + (0.642788*t2755 + 0.766044*t2827)*var2[5] + (0.642788*t3613 + 0.766044*t3662)*var2[13] + (0.642788*t3256 + 0.766044*t3300)*var2[14] + (0.766044*t3918 + 0.642788*t3957)*var2[15] + (0.766044*t4163 + 0.642788*t4234)*var2[16] + (0.766044*t4441 + 0.642788*t4457)*var2[17] + (0.766044*t4621 + 0.642788*t4652)*var2[18] + (0.766044*t4718 + t4734)*var2[19];
  p_output1[1]=(0.766044*t4731 + 0.642788*t6478)*var2[3] + (0.642788*t5602 + 0.766044*t5701)*var2[4] + (0.642788*t5939 + 0.766044*t5959)*var2[5] + (0.642788*t6381 + 0.766044*t6425)*var2[13] + (0.642788*t6137 + 0.766044*t6154)*var2[14] + (0.766044*t6702 + 0.642788*t6712)*var2[15] + (0.766044*t6861 + 0.642788*t6880)*var2[16] + (0.766044*t6988 + 0.642788*t7023)*var2[17] + (0.766044*t7083 + 0.642788*t7108)*var2[18] + (0.766044*t7138 + 0.642788*t7151)*var2[19];
  p_output1[2]=(0.642788*t8039 + 0.766044*t8045)*var2[4] + t7520*var2[5] + t7520*var2[13] + (0.642788*t7290 + 0.766044*t7317)*var2[14] + (0.766044*t7700 + 0.642788*t7722)*var2[15] + (0.766044*t7807 + 0.642788*t7825)*var2[16] + (0.766044*t7864 + 0.642788*t7876)*var2[17] + (0.766044*t7920 + 0.642788*t7927)*var2[18] + (0.766044*t7946 + 0.642788*t7958)*var2[19];
  p_output1[3]=(t4933*t590 + t2010*t266*t615)*var2[3] + (t234*t599*t615 + t590*t684)*var2[4] + t2394*t590*var2[5] + t3407*t590*var2[13] + (-1.*t234*t266*t590 - 1.*t2993*t615)*var2[14];
  p_output1[4]=t3019*var2[3] + (t5394*t590 + t2010*t599*t615)*var2[4] + t5767*t590*var2[5] + t590*t6213*var2[13] + (t4916 - 1.*t6006*t615)*var2[14];
  p_output1[5]=(t266*t615 + t590*t7984)*var2[4] + t590*t7345*var2[5] + t590*t7345*var2[13] + (t590*t599 - 1.*t615*t7170)*var2[14];
  p_output1[6]=(-0.766044*t5224 + 0.642788*t5260)*var2[3] + (-0.766044*t1829 + 0.642788*t1927)*var2[4] + (-0.766044*t2755 + 0.642788*t2827)*var2[5] + (-0.766044*t3613 + 0.642788*t3662)*var2[13] + (-0.766044*t3256 + 0.642788*t3300)*var2[14] + (0.642788*t3918 - 0.766044*t3957)*var2[15] + (0.642788*t4163 - 0.766044*t4234)*var2[16] + (0.642788*t4441 - 0.766044*t4457)*var2[17] + (0.642788*t4621 - 0.766044*t4652)*var2[18] + (0.642788*t4718 - 0.766044*t4731)*var2[19];
  p_output1[7]=(t4734 - 0.766044*t6478)*var2[3] + (-0.766044*t5602 + 0.642788*t5701)*var2[4] + (-0.766044*t5939 + 0.642788*t5959)*var2[5] + (-0.766044*t6381 + 0.642788*t6425)*var2[13] + (-0.766044*t6137 + 0.642788*t6154)*var2[14] + (0.642788*t6702 - 0.766044*t6712)*var2[15] + (0.642788*t6861 - 0.766044*t6880)*var2[16] + (0.642788*t6988 - 0.766044*t7023)*var2[17] + (0.642788*t7083 - 0.766044*t7108)*var2[18] + (0.642788*t7138 - 0.766044*t7151)*var2[19];
  p_output1[8]=(-0.766044*t8039 + 0.642788*t8045)*var2[4] + t8351*var2[5] + t8351*var2[13] + (-0.766044*t7290 + 0.642788*t7317)*var2[14] + (0.642788*t7700 - 0.766044*t7722)*var2[15] + (0.642788*t7807 - 0.766044*t7825)*var2[16] + (0.642788*t7864 - 0.766044*t7876)*var2[17] + (0.642788*t7920 - 0.766044*t7927)*var2[18] + (0.642788*t7946 - 0.766044*t7958)*var2[19];
}



void dR_RightToeBottom_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}