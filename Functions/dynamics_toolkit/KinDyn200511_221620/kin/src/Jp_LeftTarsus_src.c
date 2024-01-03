/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftTarsus_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t447;
  double t191;
  double t326;
  double t341;
  double t550;
  double t560;
  double t629;
  double t659;
  double t728;
  double t966;
  double t989;
  double t992;
  double t386;
  double t551;
  double t552;
  double t1409;
  double t1421;
  double t1423;
  double t1436;
  double t1204;
  double t1273;
  double t1317;
  double t1511;
  double t1903;
  double t1946;
  double t1979;
  double t2098;
  double t1827;
  double t1882;
  double t1892;
  double t2222;
  double t2228;
  double t2239;
  double t2360;
  double t2386;
  double t2394;
  double t2703;
  double t2900;
  double t2914;
  double t2958;
  double t3466;
  double t3474;
  double t3525;
  double t3645;
  double t3670;
  double t3674;
  double t3800;
  double t3878;
  double t4004;
  double t4051;
  double t4305;
  double t4345;
  double t4489;
  double t4598;
  double t4682;
  double t4685;
  double t4824;
  double t4927;
  double t4939;
  double t5057;
  double t5261;
  double t5266;
  double t5317;
  double t722;
  double t770;
  double t788;
  double t1041;
  double t1076;
  double t1117;
  double t5935;
  double t5941;
  double t6018;
  double t5809;
  double t5835;
  double t5885;
  double t1433;
  double t1449;
  double t1495;
  double t1524;
  double t1576;
  double t1674;
  double t6085;
  double t6241;
  double t6317;
  double t2087;
  double t2130;
  double t2151;
  double t2254;
  double t2311;
  double t2314;
  double t2457;
  double t2777;
  double t2884;
  double t6643;
  double t6725;
  double t6774;
  double t6802;
  double t6807;
  double t6935;
  double t3261;
  double t3323;
  double t3429;
  double t3751;
  double t3871;
  double t3875;
  double t7023;
  double t7083;
  double t7096;
  double t7173;
  double t7208;
  double t7269;
  double t4208;
  double t4233;
  double t4271;
  double t4788;
  double t4907;
  double t4909;
  double t7422;
  double t7438;
  double t7444;
  double t7465;
  double t7471;
  double t7487;
  double t5181;
  double t5255;
  double t5256;
  double t7514;
  double t7552;
  double t7579;
  double t7596;
  double t7602;
  double t7616;
  double t7766;
  double t7791;
  double t7792;
  double t7843;
  double t7846;
  double t7849;
  double t7862;
  double t7874;
  double t7887;
  double t7893;
  double t7905;
  double t7907;
  double t7914;
  double t7921;
  double t7927;
  double t7940;
  double t7948;
  double t7951;
  double t7958;
  double t7960;
  double t7975;
  double t7979;
  double t7985;
  double t7989;
  double t8004;
  double t8006;
  double t8009;
  double t8056;
  double t8059;
  double t8060;
  double t8082;
  double t8084;
  double t8087;
  double t8094;
  double t8096;
  double t8112;
  double t8120;
  double t8123;
  double t8127;
  double t8132;
  double t8134;
  double t8136;
  double t8141;
  double t8142;
  double t8152;
  double t8157;
  double t8167;
  double t8168;
  double t8173;
  double t8175;
  double t8186;
  double t8189;
  double t8192;
  double t8194;
  double t8240;
  double t8245;
  double t8250;
  double t8269;
  double t8273;
  double t8283;
  double t8294;
  double t8303;
  double t8307;
  double t8310;
  double t8312;
  double t8318;
  double t8321;
  double t8326;
  double t8327;
  double t8331;
  double t8337;
  double t8340;
  double t8347;
  double t8351;
  double t8357;
  double t8363;
  double t8364;
  double t8365;
  double t8376;
  double t8384;
  double t8393;
  double t8423;
  double t8424;
  double t8428;
  double t8439;
  double t8440;
  double t8453;
  double t8462;
  double t8463;
  double t8477;
  double t8483;
  double t8484;
  double t8486;
  double t8487;
  double t8488;
  double t8498;
  double t8501;
  double t8503;
  double t8514;
  double t8515;
  double t8518;
  double t8527;
  double t8529;
  double t8532;
  double t8540;
  double t8542;
  double t8543;
  double t8604;
  double t8608;
  double t8609;
  double t8611;
  double t8614;
  double t8619;
  double t8632;
  double t8635;
  double t8641;
  double t8642;
  double t8649;
  double t8651;
  double t8653;
  double t8658;
  double t8671;
  double t8680;
  double t8681;
  double t8685;
  double t8689;
  double t8694;
  double t8704;
  double t8707;
  double t8714;
  double t8719;
  double t8723;
  double t8727;
  double t8769;
  double t8770;
  double t8787;
  double t8800;
  double t8809;
  double t8810;
  double t8817;
  double t8822;
  double t8824;
  double t8830;
  double t8837;
  double t8838;
  double t8846;
  double t8847;
  double t8850;
  double t8852;
  double t8853;
  double t8854;
  double t8857;
  double t8858;
  double t8860;
  double t8863;
  double t8869;
  double t8870;
  double t8914;
  double t8915;
  double t8917;
  double t8918;
  double t8924;
  double t8926;
  double t8927;
  double t8930;
  double t8934;
  double t8940;
  double t8948;
  double t8951;
  double t8955;
  double t8956;
  double t8959;
  double t8960;
  double t8964;
  double t8972;
  double t8974;
  double t8978;
  double t8893;
  double t8895;
  double t8901;
  double t8902;
  double t8906;
  double t9017;
  double t9024;
  double t9025;
  double t9028;
  double t9029;
  double t9037;
  double t9039;
  double t9041;
  double t9042;
  double t9044;
  double t9049;
  double t9051;
  double t9054;
  double t9056;
  double t9057;
  double t9058;
  double t9060;
  double t9063;
  double t9065;
  double t9069;
  double t9071;
  double t9077;
  double t9079;
  double t9084;
  double t9085;
  double t8789;
  double t8790;
  double t8797;
  double t8813;
  double t8828;
  double t8845;
  double t8851;
  double t8856;
  double t8861;
  double t8871;
  double t8872;
  double t8874;
  double t8875;
  double t8879;
  double t8880;
  double t8884;
  double t8888;
  double t8889;
  double t6398;
  double t6435;
  double t6484;
  double t9144;
  double t9145;
  double t9148;
  double t9151;
  double t9152;
  double t9153;
  double t9158;
  double t9159;
  double t9161;
  double t9164;
  double t9165;
  double t9166;
  double t9113;
  double t9115;
  double t9118;
  double t9121;
  double t9122;
  double t9184;
  double t9185;
  double t9186;
  double t9192;
  double t9193;
  double t9196;
  double t9214;
  double t9216;
  double t9217;
  double t9219;
  double t9220;
  double t9221;
  double t9223;
  double t9224;
  double t9225;
  double t9228;
  double t9229;
  double t9230;
  double t9253;
  double t9256;
  double t9258;
  double t9263;
  double t9267;
  double t9268;
  double t9279;
  double t9282;
  double t9283;
  double t9291;
  double t9293;
  double t9296;
  double t9298;
  double t9302;
  double t9304;
  double t9308;
  double t9311;
  double t9315;
  double t9359;
  double t9370;
  double t9371;
  double t9376;
  double t9378;
  double t9382;
  double t9384;
  double t9386;
  double t9391;
  double t9393;
  double t9395;
  double t9399;
  double t9400;
  double t9401;
  double t9340;
  double t9344;
  double t9349;
  double t9352;
  double t9356;
  double t9418;
  double t9424;
  double t9425;
  double t9433;
  double t9435;
  double t9437;
  double t9439;
  double t9441;
  double t9445;
  double t9448;
  double t9449;
  double t9450;
  double t9454;
  double t9456;
  double t9457;
  double t9462;
  double t9465;
  double t9468;
  double t9471;
  double t9472;
  double t9475;
  double t9486;
  double t9488;
  double t9489;
  double t9495;
  double t9498;
  double t9500;
  double t9502;
  double t9504;
  double t9507;
  double t9509;
  double t9510;
  double t9512;
  double t9514;
  double t9515;
  double t9516;
  double t9518;
  double t9519;
  double t9520;
  double t9522;
  double t9523;
  double t9525;
  double t9557;
  double t9558;
  double t9561;
  double t9562;
  double t9564;
  double t9568;
  double t9570;
  double t9539;
  double t9540;
  double t9542;
  double t9548;
  double t9551;
  double t9587;
  double t9588;
  double t9589;
  double t9592;
  double t9593;
  double t9595;
  double t9596;
  double t9598;
  double t9599;
  double t9600;
  double t9603;
  double t9605;
  double t9606;
  double t9620;
  double t9621;
  double t9622;
  double t9627;
  double t9628;
  double t9632;
  double t9637;
  double t9640;
  double t9641;
  double t9643;
  double t9645;
  double t9646;
  double t9648;
  double t9671;
  double t9672;
  double t7645;
  double t9662;
  double t9663;
  double t9665;
  double t9666;
  double t9667;
  double t9694;
  double t9695;
  double t9697;
  double t9700;
  double t9701;
  double t9704;
  double t9705;
  double t9717;
  double t9718;
  double t9720;
  double t9723;
  double t9724;
  double t9726;
  double t9727;
  double t7641;
  double t7656;
  double t9683;
  double t9739;
  double t9740;
  double t9741;
  double t9744;
  double t9745;
  double t9753;
  double t9754;
  double t9755;
  double t9708;
  double t9712;
  double t9766;
  double t9767;
  double t9769;
  double t9730;
  double t9735;
  t447 = Cos(var1[3]);
  t191 = Cos(var1[5]);
  t326 = Sin(var1[3]);
  t341 = Sin(var1[4]);
  t550 = Sin(var1[5]);
  t560 = Cos(var1[6]);
  t629 = -1.*t560;
  t659 = 1. + t629;
  t728 = Sin(var1[6]);
  t966 = -1.*t447*t191;
  t989 = -1.*t326*t341*t550;
  t992 = t966 + t989;
  t386 = -1.*t191*t326*t341;
  t551 = t447*t550;
  t552 = t386 + t551;
  t1409 = Cos(var1[7]);
  t1421 = -1.*t1409;
  t1423 = 1. + t1421;
  t1436 = Sin(var1[7]);
  t1204 = t560*t992;
  t1273 = t552*t728;
  t1317 = t1204 + t1273;
  t1511 = Cos(var1[4]);
  t1903 = Cos(var1[8]);
  t1946 = -1.*t1903;
  t1979 = 1. + t1946;
  t2098 = Sin(var1[8]);
  t1827 = -1.*t1511*t1409*t326;
  t1882 = t1317*t1436;
  t1892 = t1827 + t1882;
  t2222 = t560*t552;
  t2228 = -1.*t992*t728;
  t2239 = t2222 + t2228;
  t2360 = Cos(var1[9]);
  t2386 = -1.*t2360;
  t2394 = 1. + t2386;
  t2703 = Sin(var1[9]);
  t2900 = t1903*t1892;
  t2914 = t2239*t2098;
  t2958 = t2900 + t2914;
  t3466 = t1903*t2239;
  t3474 = -1.*t1892*t2098;
  t3525 = t3466 + t3474;
  t3645 = Cos(var1[10]);
  t3670 = -1.*t3645;
  t3674 = 1. + t3670;
  t3800 = Sin(var1[10]);
  t3878 = -1.*t2703*t2958;
  t4004 = t2360*t3525;
  t4051 = t3878 + t4004;
  t4305 = t2360*t2958;
  t4345 = t2703*t3525;
  t4489 = t4305 + t4345;
  t4598 = Cos(var1[11]);
  t4682 = -1.*t4598;
  t4685 = 1. + t4682;
  t4824 = Sin(var1[11]);
  t4927 = t3800*t4051;
  t4939 = t3645*t4489;
  t5057 = t4927 + t4939;
  t5261 = t3645*t4051;
  t5266 = -1.*t3800*t4489;
  t5317 = t5261 + t5266;
  t722 = 0.07996*t659;
  t770 = -0.135*t728;
  t788 = 0. + t722 + t770;
  t1041 = 0.135*t659;
  t1076 = 0.07996*t728;
  t1117 = 0. + t1041 + t1076;
  t5935 = -1.*t191*t326;
  t5941 = t447*t341*t550;
  t6018 = t5935 + t5941;
  t5809 = t447*t191*t341;
  t5835 = t326*t550;
  t5885 = t5809 + t5835;
  t1433 = 0.135*t1423;
  t1449 = 0.08055*t1436;
  t1495 = 0. + t1433 + t1449;
  t1524 = -0.08055*t1423;
  t1576 = 0.135*t1436;
  t1674 = 0. + t1524 + t1576;
  t6085 = t560*t6018;
  t6241 = t5885*t728;
  t6317 = t6085 + t6241;
  t2087 = -0.08055*t1979;
  t2130 = -0.01004*t2098;
  t2151 = 0. + t2087 + t2130;
  t2254 = -0.01004*t1979;
  t2311 = 0.08055*t2098;
  t2314 = 0. + t2254 + t2311;
  t2457 = -0.08055*t2394;
  t2777 = -0.13004*t2703;
  t2884 = 0. + t2457 + t2777;
  t6643 = t447*t1511*t1409;
  t6725 = t6317*t1436;
  t6774 = t6643 + t6725;
  t6802 = t560*t5885;
  t6807 = -1.*t6018*t728;
  t6935 = t6802 + t6807;
  t3261 = -0.13004*t2394;
  t3323 = 0.08055*t2703;
  t3429 = 0. + t3261 + t3323;
  t3751 = -0.19074*t3674;
  t3871 = 0.03315*t3800;
  t3875 = 0. + t3751 + t3871;
  t7023 = t1903*t6774;
  t7083 = t6935*t2098;
  t7096 = t7023 + t7083;
  t7173 = t1903*t6935;
  t7208 = -1.*t6774*t2098;
  t7269 = t7173 + t7208;
  t4208 = -0.03315*t3674;
  t4233 = -0.19074*t3800;
  t4271 = 0. + t4208 + t4233;
  t4788 = -0.01315*t4685;
  t4907 = -0.62554*t4824;
  t4909 = 0. + t4788 + t4907;
  t7422 = -1.*t2703*t7096;
  t7438 = t2360*t7269;
  t7444 = t7422 + t7438;
  t7465 = t2360*t7096;
  t7471 = t2703*t7269;
  t7487 = t7465 + t7471;
  t5181 = -0.62554*t4685;
  t5255 = 0.01315*t4824;
  t5256 = 0. + t5181 + t5255;
  t7514 = t3800*t7444;
  t7552 = t3645*t7487;
  t7579 = t7514 + t7552;
  t7596 = t3645*t7444;
  t7602 = -1.*t3800*t7487;
  t7616 = t7596 + t7602;
  t7766 = t447*t1511*t560*t550;
  t7791 = t447*t1511*t191*t728;
  t7792 = t7766 + t7791;
  t7843 = -1.*t447*t1409*t341;
  t7846 = t7792*t1436;
  t7849 = t7843 + t7846;
  t7862 = t447*t1511*t191*t560;
  t7874 = -1.*t447*t1511*t550*t728;
  t7887 = t7862 + t7874;
  t7893 = t1903*t7849;
  t7905 = t7887*t2098;
  t7907 = t7893 + t7905;
  t7914 = t1903*t7887;
  t7921 = -1.*t7849*t2098;
  t7927 = t7914 + t7921;
  t7940 = -1.*t2703*t7907;
  t7948 = t2360*t7927;
  t7951 = t7940 + t7948;
  t7958 = t2360*t7907;
  t7960 = t2703*t7927;
  t7975 = t7958 + t7960;
  t7979 = t3800*t7951;
  t7985 = t3645*t7975;
  t7989 = t7979 + t7985;
  t8004 = t3645*t7951;
  t8006 = -1.*t3800*t7975;
  t8009 = t8004 + t8006;
  t8056 = t1511*t560*t326*t550;
  t8059 = t1511*t191*t326*t728;
  t8060 = t8056 + t8059;
  t8082 = -1.*t1409*t326*t341;
  t8084 = t8060*t1436;
  t8087 = t8082 + t8084;
  t8094 = t1511*t191*t560*t326;
  t8096 = -1.*t1511*t326*t550*t728;
  t8112 = t8094 + t8096;
  t8120 = t1903*t8087;
  t8123 = t8112*t2098;
  t8127 = t8120 + t8123;
  t8132 = t1903*t8112;
  t8134 = -1.*t8087*t2098;
  t8136 = t8132 + t8134;
  t8141 = -1.*t2703*t8127;
  t8142 = t2360*t8136;
  t8152 = t8141 + t8142;
  t8157 = t2360*t8127;
  t8167 = t2703*t8136;
  t8168 = t8157 + t8167;
  t8173 = t3800*t8152;
  t8175 = t3645*t8168;
  t8186 = t8173 + t8175;
  t8189 = t3645*t8152;
  t8192 = -1.*t3800*t8168;
  t8194 = t8189 + t8192;
  t8240 = -1.*t560*t341*t550;
  t8245 = -1.*t191*t341*t728;
  t8250 = t8240 + t8245;
  t8269 = -1.*t1511*t1409;
  t8273 = t8250*t1436;
  t8283 = t8269 + t8273;
  t8294 = -1.*t191*t560*t341;
  t8303 = t341*t550*t728;
  t8307 = t8294 + t8303;
  t8310 = t1903*t8283;
  t8312 = t8307*t2098;
  t8318 = t8310 + t8312;
  t8321 = t1903*t8307;
  t8326 = -1.*t8283*t2098;
  t8327 = t8321 + t8326;
  t8331 = -1.*t2703*t8318;
  t8337 = t2360*t8327;
  t8340 = t8331 + t8337;
  t8347 = t2360*t8318;
  t8351 = t2703*t8327;
  t8357 = t8347 + t8351;
  t8363 = t3800*t8340;
  t8364 = t3645*t8357;
  t8365 = t8363 + t8364;
  t8376 = t3645*t8340;
  t8384 = -1.*t3800*t8357;
  t8393 = t8376 + t8384;
  t8423 = t191*t326;
  t8424 = -1.*t447*t341*t550;
  t8428 = t8423 + t8424;
  t8439 = t8428*t728;
  t8440 = t6802 + t8439;
  t8453 = t560*t8428;
  t8462 = -1.*t5885*t728;
  t8463 = t8453 + t8462;
  t8477 = t1903*t8440*t1436;
  t8483 = t8463*t2098;
  t8484 = t8477 + t8483;
  t8486 = t1903*t8463;
  t8487 = -1.*t8440*t1436*t2098;
  t8488 = t8486 + t8487;
  t8498 = -1.*t2703*t8484;
  t8501 = t2360*t8488;
  t8503 = t8498 + t8501;
  t8514 = t2360*t8484;
  t8515 = t2703*t8488;
  t8518 = t8514 + t8515;
  t8527 = t3800*t8503;
  t8529 = t3645*t8518;
  t8532 = t8527 + t8529;
  t8540 = t3645*t8503;
  t8542 = -1.*t3800*t8518;
  t8543 = t8540 + t8542;
  t8604 = t191*t326*t341;
  t8608 = -1.*t447*t550;
  t8609 = t8604 + t8608;
  t8611 = t560*t8609;
  t8614 = t992*t728;
  t8619 = t8611 + t8614;
  t8632 = -1.*t8609*t728;
  t8635 = t1204 + t8632;
  t8641 = t1903*t8619*t1436;
  t8642 = t8635*t2098;
  t8649 = t8641 + t8642;
  t8651 = t1903*t8635;
  t8653 = -1.*t8619*t1436*t2098;
  t8658 = t8651 + t8653;
  t8671 = -1.*t2703*t8649;
  t8680 = t2360*t8658;
  t8681 = t8671 + t8680;
  t8685 = t2360*t8649;
  t8689 = t2703*t8658;
  t8694 = t8685 + t8689;
  t8704 = t3800*t8681;
  t8707 = t3645*t8694;
  t8714 = t8704 + t8707;
  t8719 = t3645*t8681;
  t8723 = -1.*t3800*t8694;
  t8727 = t8719 + t8723;
  t8769 = t1511*t191*t560;
  t8770 = -1.*t1511*t550*t728;
  t8787 = t8769 + t8770;
  t8800 = -1.*t1511*t560*t550;
  t8809 = -1.*t1511*t191*t728;
  t8810 = t8800 + t8809;
  t8817 = t1903*t8787*t1436;
  t8822 = t8810*t2098;
  t8824 = t8817 + t8822;
  t8830 = t1903*t8810;
  t8837 = -1.*t8787*t1436*t2098;
  t8838 = t8830 + t8837;
  t8846 = -1.*t2703*t8824;
  t8847 = t2360*t8838;
  t8850 = t8846 + t8847;
  t8852 = t2360*t8824;
  t8853 = t2703*t8838;
  t8854 = t8852 + t8853;
  t8857 = t3800*t8850;
  t8858 = t3645*t8854;
  t8860 = t8857 + t8858;
  t8863 = t3645*t8850;
  t8869 = -1.*t3800*t8854;
  t8870 = t8863 + t8869;
  t8914 = -1.*t560*t6018;
  t8915 = t8914 + t8462;
  t8917 = t1903*t6935*t1436;
  t8918 = t8915*t2098;
  t8924 = t8917 + t8918;
  t8926 = t1903*t8915;
  t8927 = -1.*t6935*t1436*t2098;
  t8930 = t8926 + t8927;
  t8934 = -1.*t2703*t8924;
  t8940 = t2360*t8930;
  t8948 = t8934 + t8940;
  t8951 = t2360*t8924;
  t8955 = t2703*t8930;
  t8956 = t8951 + t8955;
  t8959 = t3800*t8948;
  t8960 = t3645*t8956;
  t8964 = t8959 + t8960;
  t8972 = t3645*t8948;
  t8974 = -1.*t3800*t8956;
  t8978 = t8972 + t8974;
  t8893 = -0.135*t560;
  t8895 = t8893 + t1076;
  t8901 = 0.07996*t560;
  t8902 = 0.135*t728;
  t8906 = t8901 + t8902;
  t9017 = t447*t191;
  t9024 = t326*t341*t550;
  t9025 = t9017 + t9024;
  t9028 = -1.*t9025*t728;
  t9029 = t8611 + t9028;
  t9037 = -1.*t560*t9025;
  t9039 = t9037 + t8632;
  t9041 = t1903*t9029*t1436;
  t9042 = t9039*t2098;
  t9044 = t9041 + t9042;
  t9049 = t1903*t9039;
  t9051 = -1.*t9029*t1436*t2098;
  t9054 = t9049 + t9051;
  t9056 = -1.*t2703*t9044;
  t9057 = t2360*t9054;
  t9058 = t9056 + t9057;
  t9060 = t2360*t9044;
  t9063 = t2703*t9054;
  t9065 = t9060 + t9063;
  t9069 = t3800*t9058;
  t9071 = t3645*t9065;
  t9077 = t9069 + t9071;
  t9079 = t3645*t9058;
  t9084 = -1.*t3800*t9065;
  t9085 = t9079 + t9084;
  t8789 = 0.1318*t1409*t8787;
  t8790 = t8787*t1495;
  t8797 = t8787*t1436*t2151;
  t8813 = t8810*t2314;
  t8828 = t2884*t8824;
  t8845 = t3429*t8838;
  t8851 = t3875*t8850;
  t8856 = t4271*t8854;
  t8861 = t4909*t8860;
  t8871 = t5256*t8870;
  t8872 = -1.*t4824*t8860;
  t8874 = t4598*t8870;
  t8875 = t8872 + t8874;
  t8879 = -0.73604*t8875;
  t8880 = t4598*t8860;
  t8884 = t4824*t8870;
  t8888 = t8880 + t8884;
  t8889 = -0.04375*t8888;
  t6398 = t1409*t6317;
  t6435 = -1.*t447*t1511*t1436;
  t6484 = t6398 + t6435;
  t9144 = -1.*t1903*t2703*t6484;
  t9145 = -1.*t2360*t6484*t2098;
  t9148 = t9144 + t9145;
  t9151 = t2360*t1903*t6484;
  t9152 = -1.*t2703*t6484*t2098;
  t9153 = t9151 + t9152;
  t9158 = t3800*t9148;
  t9159 = t3645*t9153;
  t9161 = t9158 + t9159;
  t9164 = t3645*t9148;
  t9165 = -1.*t3800*t9153;
  t9166 = t9164 + t9165;
  t9113 = 0.135*t1409;
  t9115 = -0.08055*t1436;
  t9118 = t9113 + t9115;
  t9121 = 0.08055*t1409;
  t9122 = t9121 + t1576;
  t9184 = t560*t9025;
  t9185 = t8609*t728;
  t9186 = t9184 + t9185;
  t9192 = t1409*t9186;
  t9193 = -1.*t1511*t326*t1436;
  t9196 = t9192 + t9193;
  t9214 = -1.*t1903*t2703*t9196;
  t9216 = -1.*t2360*t9196*t2098;
  t9217 = t9214 + t9216;
  t9219 = t2360*t1903*t9196;
  t9220 = -1.*t2703*t9196*t2098;
  t9221 = t9219 + t9220;
  t9223 = t3800*t9217;
  t9224 = t3645*t9221;
  t9225 = t9223 + t9224;
  t9228 = t3645*t9217;
  t9229 = -1.*t3800*t9221;
  t9230 = t9228 + t9229;
  t9253 = t1511*t560*t550;
  t9256 = t1511*t191*t728;
  t9258 = t9253 + t9256;
  t9263 = t1409*t9258;
  t9267 = t341*t1436;
  t9268 = t9263 + t9267;
  t9279 = -1.*t1903*t2703*t9268;
  t9282 = -1.*t2360*t9268*t2098;
  t9283 = t9279 + t9282;
  t9291 = t2360*t1903*t9268;
  t9293 = -1.*t2703*t9268*t2098;
  t9296 = t9291 + t9293;
  t9298 = t3800*t9283;
  t9302 = t3645*t9296;
  t9304 = t9298 + t9302;
  t9308 = t3645*t9283;
  t9311 = -1.*t3800*t9296;
  t9315 = t9308 + t9311;
  t9359 = -1.*t1903*t6774;
  t9370 = -1.*t6935*t2098;
  t9371 = t9359 + t9370;
  t9376 = t2703*t9371;
  t9378 = t9376 + t7438;
  t9382 = t2360*t9371;
  t9384 = -1.*t2703*t7269;
  t9386 = t9382 + t9384;
  t9391 = -1.*t3800*t9378;
  t9393 = t3645*t9386;
  t9395 = t9391 + t9393;
  t9399 = t3645*t9378;
  t9400 = t3800*t9386;
  t9401 = t9399 + t9400;
  t9340 = -0.01004*t1903;
  t9344 = -0.08055*t2098;
  t9349 = t9340 + t9344;
  t9352 = 0.08055*t1903;
  t9356 = t9352 + t2130;
  t9418 = t1511*t1409*t326;
  t9424 = t9186*t1436;
  t9425 = t9418 + t9424;
  t9433 = -1.*t1903*t9425;
  t9435 = -1.*t9029*t2098;
  t9437 = t9433 + t9435;
  t9439 = t1903*t9029;
  t9441 = -1.*t9425*t2098;
  t9445 = t9439 + t9441;
  t9448 = t2703*t9437;
  t9449 = t2360*t9445;
  t9450 = t9448 + t9449;
  t9454 = t2360*t9437;
  t9456 = -1.*t2703*t9445;
  t9457 = t9454 + t9456;
  t9462 = -1.*t3800*t9450;
  t9465 = t3645*t9457;
  t9468 = t9462 + t9465;
  t9471 = t3645*t9450;
  t9472 = t3800*t9457;
  t9475 = t9471 + t9472;
  t9486 = -1.*t1409*t341;
  t9488 = t9258*t1436;
  t9489 = t9486 + t9488;
  t9495 = -1.*t1903*t9489;
  t9498 = -1.*t8787*t2098;
  t9500 = t9495 + t9498;
  t9502 = t1903*t8787;
  t9504 = -1.*t9489*t2098;
  t9507 = t9502 + t9504;
  t9509 = t2703*t9500;
  t9510 = t2360*t9507;
  t9512 = t9509 + t9510;
  t9514 = t2360*t9500;
  t9515 = -1.*t2703*t9507;
  t9516 = t9514 + t9515;
  t9518 = -1.*t3800*t9512;
  t9519 = t3645*t9516;
  t9520 = t9518 + t9519;
  t9522 = t3645*t9512;
  t9523 = t3800*t9516;
  t9525 = t9522 + t9523;
  t9557 = -1.*t2360*t7096;
  t9558 = t9557 + t9384;
  t9561 = -1.*t3800*t7444;
  t9562 = t3645*t9558;
  t9564 = t9561 + t9562;
  t9568 = t3800*t9558;
  t9570 = t7596 + t9568;
  t9539 = -0.13004*t2360;
  t9540 = -0.08055*t2703;
  t9542 = t9539 + t9540;
  t9548 = 0.08055*t2360;
  t9551 = t9548 + t2777;
  t9587 = t1903*t9425;
  t9588 = t9029*t2098;
  t9589 = t9587 + t9588;
  t9592 = -1.*t2703*t9589;
  t9593 = t9592 + t9449;
  t9595 = -1.*t2360*t9589;
  t9596 = t9595 + t9456;
  t9598 = -1.*t3800*t9593;
  t9599 = t3645*t9596;
  t9600 = t9598 + t9599;
  t9603 = t3645*t9593;
  t9605 = t3800*t9596;
  t9606 = t9603 + t9605;
  t9620 = t1903*t9489;
  t9621 = t8787*t2098;
  t9622 = t9620 + t9621;
  t9627 = -1.*t2703*t9622;
  t9628 = t9627 + t9510;
  t9632 = -1.*t2360*t9622;
  t9637 = t9632 + t9515;
  t9640 = -1.*t3800*t9628;
  t9641 = t3645*t9637;
  t9643 = t9640 + t9641;
  t9645 = t3645*t9628;
  t9646 = t3800*t9637;
  t9648 = t9645 + t9646;
  t9671 = -1.*t3645*t7487;
  t9672 = t9561 + t9671;
  t7645 = t4598*t7616;
  t9662 = 0.03315*t3645;
  t9663 = t9662 + t4233;
  t9665 = -0.19074*t3645;
  t9666 = -0.03315*t3800;
  t9667 = t9665 + t9666;
  t9694 = t2360*t9589;
  t9695 = t2703*t9445;
  t9697 = t9694 + t9695;
  t9700 = -1.*t3645*t9697;
  t9701 = t9598 + t9700;
  t9704 = -1.*t3800*t9697;
  t9705 = t9603 + t9704;
  t9717 = t2360*t9622;
  t9718 = t2703*t9507;
  t9720 = t9717 + t9718;
  t9723 = -1.*t3645*t9720;
  t9724 = t9640 + t9723;
  t9726 = -1.*t3800*t9720;
  t9727 = t9645 + t9726;
  t7641 = -1.*t4824*t7579;
  t7656 = t7641 + t7645;
  t9683 = -1.*t4824*t7616;
  t9739 = -0.62554*t4598;
  t9740 = -0.01315*t4824;
  t9741 = t9739 + t9740;
  t9744 = 0.01315*t4598;
  t9745 = t9744 + t4907;
  t9753 = t3800*t9593;
  t9754 = t3645*t9697;
  t9755 = t9753 + t9754;
  t9708 = t4598*t9705;
  t9712 = -1.*t4824*t9705;
  t9766 = t3800*t9628;
  t9767 = t3645*t9720;
  t9769 = t9766 + t9767;
  t9730 = t4598*t9727;
  t9735 = -1.*t4824*t9727;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1317*t1495 + t1892*t2151 + t2239*t2314 + t2884*t2958 - 1.*t1511*t1674*t326 + 0.1318*(t1317*t1409 + t1436*t1511*t326) + t3429*t3525 + t3875*t4051 + t4271*t4489 + t4909*t5057 + t5256*t5317 - 0.73604*(-1.*t4824*t5057 + t4598*t5317) - 0.04375*(t4598*t5057 + t4824*t5317) + t552*t788 + t1117*t992;
  p_output1[10]=t1511*t1674*t447 + t1117*t6018 + t1495*t6317 + 0.1318*t6484 + t2151*t6774 + t2314*t6935 + t2884*t7096 + t3429*t7269 + t3875*t7444 + t4271*t7487 + t4909*t7579 + t5256*t7616 - 0.04375*(t4598*t7579 + t4824*t7616) - 0.73604*t7656 + t5885*t788;
  p_output1[11]=0;
  p_output1[12]=-1.*t1674*t341*t447 + t1117*t1511*t447*t550 + t1495*t7792 + 0.1318*(t1436*t341*t447 + t1409*t7792) + t2151*t7849 + t1511*t191*t447*t788 + t2314*t7887 + t2884*t7907 + t3429*t7927 + t3875*t7951 + t4271*t7975 + t4909*t7989 + t5256*t8009 - 0.73604*(-1.*t4824*t7989 + t4598*t8009) - 0.04375*(t4598*t7989 + t4824*t8009);
  p_output1[13]=-1.*t1674*t326*t341 + t1117*t1511*t326*t550 + t1511*t191*t326*t788 + t1495*t8060 + 0.1318*(t1436*t326*t341 + t1409*t8060) + t2151*t8087 + t2314*t8112 + t2884*t8127 + t3429*t8136 + t3875*t8152 + t4271*t8168 + t4909*t8186 + t5256*t8194 - 0.73604*(-1.*t4824*t8186 + t4598*t8194) - 0.04375*(t4598*t8186 + t4824*t8194);
  p_output1[14]=-1.*t1511*t1674 - 1.*t1117*t341*t550 - 1.*t191*t341*t788 + t1495*t8250 + 0.1318*(t1436*t1511 + t1409*t8250) + t2151*t8283 + t2314*t8307 + t2884*t8318 + t3429*t8327 + t3875*t8340 + t4271*t8357 + t4909*t8365 + t5256*t8393 - 0.73604*(-1.*t4824*t8365 + t4598*t8393) - 0.04375*(t4598*t8365 + t4824*t8393);
  p_output1[15]=t1117*t5885 + t788*t8428 + 0.1318*t1409*t8440 + t1495*t8440 + t1436*t2151*t8440 + t2314*t8463 + t2884*t8484 + t3429*t8488 + t3875*t8503 + t4271*t8518 + t4909*t8532 + t5256*t8543 - 0.73604*(-1.*t4824*t8532 + t4598*t8543) - 0.04375*(t4598*t8532 + t4824*t8543);
  p_output1[16]=t1117*t8609 + 0.1318*t1409*t8619 + t1495*t8619 + t1436*t2151*t8619 + t2314*t8635 + t2884*t8649 + t3429*t8658 + t3875*t8681 + t4271*t8694 + t4909*t8714 + t5256*t8727 - 0.73604*(-1.*t4824*t8714 + t4598*t8727) - 0.04375*(t4598*t8714 + t4824*t8727) + t788*t992;
  p_output1[17]=t1117*t1511*t191 - 1.*t1511*t550*t788 + t8789 + t8790 + t8797 + t8813 + t8828 + t8845 + t8851 + t8856 + t8861 + t8871 + t8879 + t8889;
  p_output1[18]=0.1318*t1409*t6935 + t1495*t6935 + t1436*t2151*t6935 + t5885*t8895 + t6018*t8906 + t2314*t8915 + t2884*t8924 + t3429*t8930 + t3875*t8948 + t4271*t8956 + t4909*t8964 + t5256*t8978 - 0.73604*(-1.*t4824*t8964 + t4598*t8978) - 0.04375*(t4598*t8964 + t4824*t8978);
  p_output1[19]=t8609*t8895 + t8906*t9025 + 0.1318*t1409*t9029 + t1495*t9029 + t1436*t2151*t9029 + t2314*t9039 + t2884*t9044 + t3429*t9054 + t3875*t9058 + t4271*t9065 + t4909*t9077 + t5256*t9085 - 0.73604*(-1.*t4824*t9077 + t4598*t9085) - 0.04375*(t4598*t9077 + t4824*t9085);
  p_output1[20]=t8789 + t8790 + t8797 + t8813 + t8828 + t8845 + t8851 + t8856 + t8861 + t8871 + t8879 + t8889 + t1511*t191*t8895 + t1511*t550*t8906;
  p_output1[21]=0.1318*(-1.*t1409*t1511*t447 - 1.*t1436*t6317) + t2151*t6484 + t1903*t2884*t6484 - 1.*t2098*t3429*t6484 + t1511*t447*t9118 + t6317*t9122 + t3875*t9148 + t4271*t9153 + t4909*t9161 + t5256*t9166 - 0.73604*(-1.*t4824*t9161 + t4598*t9166) - 0.04375*(t4598*t9161 + t4824*t9166);
  p_output1[22]=t1511*t326*t9118 + t9122*t9186 + 0.1318*(t1827 - 1.*t1436*t9186) + t2151*t9196 + t1903*t2884*t9196 - 1.*t2098*t3429*t9196 + t3875*t9217 + t4271*t9221 + t4909*t9225 + t5256*t9230 - 0.73604*(-1.*t4824*t9225 + t4598*t9230) - 0.04375*(t4598*t9225 + t4824*t9230);
  p_output1[23]=-1.*t341*t9118 + t9122*t9258 + 0.1318*(t1409*t341 - 1.*t1436*t9258) + t2151*t9268 + t1903*t2884*t9268 - 1.*t2098*t3429*t9268 + t3875*t9283 + t4271*t9296 + t4909*t9304 + t5256*t9315 - 0.73604*(-1.*t4824*t9304 + t4598*t9315) - 0.04375*(t4598*t9304 + t4824*t9315);
  p_output1[24]=t2884*t7269 + t6774*t9349 + t6935*t9356 + t3429*t9371 + t4271*t9378 + t3875*t9386 + t5256*t9395 + t4909*t9401 - 0.04375*(t4824*t9395 + t4598*t9401) - 0.73604*(t4598*t9395 - 1.*t4824*t9401);
  p_output1[25]=t9029*t9356 + t9349*t9425 + t3429*t9437 + t2884*t9445 + t4271*t9450 + t3875*t9457 + t5256*t9468 + t4909*t9475 - 0.04375*(t4824*t9468 + t4598*t9475) - 0.73604*(t4598*t9468 - 1.*t4824*t9475);
  p_output1[26]=t8787*t9356 + t9349*t9489 + t3429*t9500 + t2884*t9507 + t4271*t9512 + t3875*t9516 + t5256*t9520 + t4909*t9525 - 0.04375*(t4824*t9520 + t4598*t9525) - 0.73604*(t4598*t9520 - 1.*t4824*t9525);
  p_output1[27]=t4271*t7444 + t7096*t9542 + t7269*t9551 + t3875*t9558 + t5256*t9564 + t4909*t9570 - 0.04375*(t4824*t9564 + t4598*t9570) - 0.73604*(t4598*t9564 - 1.*t4824*t9570);
  p_output1[28]=t9445*t9551 + t9542*t9589 + t4271*t9593 + t3875*t9596 + t5256*t9600 + t4909*t9606 - 0.04375*(t4824*t9600 + t4598*t9606) - 0.73604*(t4598*t9600 - 1.*t4824*t9606);
  p_output1[29]=t9507*t9551 + t9542*t9622 + t4271*t9628 + t3875*t9637 + t5256*t9643 + t4909*t9648 - 0.04375*(t4824*t9643 + t4598*t9648) - 0.73604*(t4598*t9643 - 1.*t4824*t9648);
  p_output1[30]=t4909*t7616 + t7444*t9663 + t7487*t9667 + t5256*t9672 - 0.04375*(t7645 + t4824*t9672) - 0.73604*(t4598*t9672 + t9683);
  p_output1[31]=t9593*t9663 + t9667*t9697 + t5256*t9701 + t4909*t9705 - 0.04375*(t4824*t9701 + t9708) - 0.73604*(t4598*t9701 + t9712);
  p_output1[32]=t9628*t9663 + t9667*t9720 + t5256*t9724 + t4909*t9727 - 0.04375*(t4824*t9724 + t9730) - 0.73604*(t4598*t9724 + t9735);
  p_output1[33]=-0.04375*t7656 - 0.73604*(-1.*t4598*t7579 + t9683) + t7579*t9741 + t7616*t9745;
  p_output1[34]=t9705*t9745 + t9741*t9755 - 0.73604*(t9712 - 1.*t4598*t9755) - 0.04375*(t9708 - 1.*t4824*t9755);
  p_output1[35]=t9727*t9745 + t9741*t9769 - 0.73604*(t9735 - 1.*t4598*t9769) - 0.04375*(t9730 - 1.*t4824*t9769);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_LeftTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}