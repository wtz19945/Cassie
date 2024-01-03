/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:57 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t404;
  double t70;
  double t108;
  double t254;
  double t450;
  double t741;
  double t768;
  double t825;
  double t1023;
  double t1217;
  double t1223;
  double t1245;
  double t345;
  double t730;
  double t736;
  double t1709;
  double t1715;
  double t1764;
  double t1781;
  double t1347;
  double t1410;
  double t1651;
  double t1970;
  double t2276;
  double t2286;
  double t2295;
  double t2354;
  double t2154;
  double t2201;
  double t2211;
  double t2395;
  double t2428;
  double t2484;
  double t2650;
  double t2651;
  double t2654;
  double t2718;
  double t2757;
  double t2778;
  double t2849;
  double t2973;
  double t3017;
  double t3027;
  double t3043;
  double t3076;
  double t3112;
  double t3195;
  double t3381;
  double t3386;
  double t3399;
  double t3501;
  double t3507;
  double t3511;
  double t3560;
  double t3614;
  double t3619;
  double t3651;
  double t3712;
  double t3715;
  double t3716;
  double t3806;
  double t3853;
  double t3881;
  double t3904;
  double t3908;
  double t3918;
  double t3970;
  double t4030;
  double t4037;
  double t4040;
  double t4090;
  double t4147;
  double t4155;
  double t961;
  double t1039;
  double t1082;
  double t1250;
  double t1304;
  double t1331;
  double t4353;
  double t4370;
  double t4382;
  double t4290;
  double t4302;
  double t4339;
  double t1775;
  double t1789;
  double t1930;
  double t1971;
  double t1989;
  double t1994;
  double t4452;
  double t4535;
  double t4545;
  double t2335;
  double t2357;
  double t2358;
  double t2530;
  double t2572;
  double t2608;
  double t2665;
  double t2721;
  double t2726;
  double t4703;
  double t4708;
  double t4713;
  double t4720;
  double t4742;
  double t4744;
  double t2936;
  double t2950;
  double t2951;
  double t3157;
  double t3242;
  double t3331;
  double t4766;
  double t4782;
  double t4785;
  double t4829;
  double t4847;
  double t4866;
  double t3411;
  double t3424;
  double t3445;
  double t3641;
  double t3682;
  double t3704;
  double t4889;
  double t4897;
  double t4906;
  double t4908;
  double t4911;
  double t4920;
  double t3761;
  double t3771;
  double t3804;
  double t3923;
  double t3986;
  double t4019;
  double t4932;
  double t4937;
  double t4941;
  double t4968;
  double t4988;
  double t4995;
  double t4043;
  double t4065;
  double t4079;
  double t5003;
  double t5005;
  double t5012;
  double t5029;
  double t5032;
  double t5036;
  double t5206;
  double t5248;
  double t5325;
  double t5371;
  double t5373;
  double t5374;
  double t5409;
  double t5421;
  double t5425;
  double t5430;
  double t5454;
  double t5459;
  double t5493;
  double t5512;
  double t5518;
  double t5531;
  double t5532;
  double t5534;
  double t5541;
  double t5554;
  double t5559;
  double t5585;
  double t5588;
  double t5599;
  double t5609;
  double t5617;
  double t5635;
  double t5638;
  double t5645;
  double t5650;
  double t5666;
  double t5668;
  double t5671;
  double t5788;
  double t5789;
  double t5790;
  double t5893;
  double t5904;
  double t5918;
  double t5946;
  double t5979;
  double t5985;
  double t6015;
  double t6021;
  double t6024;
  double t6067;
  double t6072;
  double t6079;
  double t6097;
  double t6102;
  double t6105;
  double t6126;
  double t6134;
  double t6140;
  double t6235;
  double t6258;
  double t6259;
  double t6282;
  double t6299;
  double t6303;
  double t6327;
  double t6354;
  double t6355;
  double t6357;
  double t6362;
  double t6364;
  double t6553;
  double t6562;
  double t6581;
  double t6695;
  double t6700;
  double t6718;
  double t6748;
  double t6779;
  double t6790;
  double t6818;
  double t6833;
  double t6839;
  double t6881;
  double t6889;
  double t6893;
  double t6914;
  double t6915;
  double t6940;
  double t6999;
  double t7004;
  double t7010;
  double t7015;
  double t7018;
  double t7020;
  double t7027;
  double t7032;
  double t7039;
  double t7056;
  double t7059;
  double t7062;
  double t7074;
  double t7077;
  double t7082;
  double t7146;
  double t7151;
  double t7152;
  double t7171;
  double t7172;
  double t7186;
  double t7187;
  double t7210;
  double t7219;
  double t7226;
  double t7229;
  double t7236;
  double t7239;
  double t7240;
  double t7262;
  double t7264;
  double t7270;
  double t7278;
  double t7279;
  double t7284;
  double t7291;
  double t7294;
  double t7298;
  double t7309;
  double t7310;
  double t7313;
  double t7336;
  double t7341;
  double t7349;
  double t7359;
  double t7375;
  double t7377;
  double t7427;
  double t7437;
  double t7441;
  double t7470;
  double t7472;
  double t7493;
  double t7506;
  double t7507;
  double t7514;
  double t7515;
  double t7524;
  double t7546;
  double t7555;
  double t7580;
  double t7586;
  double t7590;
  double t7594;
  double t7604;
  double t7605;
  double t7617;
  double t7625;
  double t7628;
  double t7630;
  double t7633;
  double t7640;
  double t7650;
  double t7655;
  double t7677;
  double t7683;
  double t7687;
  double t7694;
  double t7697;
  double t7780;
  double t7781;
  double t7791;
  double t7832;
  double t7834;
  double t7835;
  double t7838;
  double t7847;
  double t7853;
  double t7861;
  double t7869;
  double t7875;
  double t7884;
  double t7886;
  double t7904;
  double t7919;
  double t7920;
  double t7921;
  double t7924;
  double t7926;
  double t7941;
  double t7952;
  double t7957;
  double t7970;
  double t7981;
  double t8005;
  double t8006;
  double t8027;
  double t8029;
  double t8031;
  double t8115;
  double t8122;
  double t8124;
  double t8125;
  double t8126;
  double t8128;
  double t8133;
  double t8138;
  double t8145;
  double t8146;
  double t8147;
  double t8150;
  double t8151;
  double t8155;
  double t8157;
  double t8163;
  double t8165;
  double t8177;
  double t8182;
  double t8183;
  double t8185;
  double t8186;
  double t8188;
  double t8191;
  double t8192;
  double t8193;
  double t8077;
  double t8079;
  double t8084;
  double t8086;
  double t8087;
  double t8218;
  double t8221;
  double t8229;
  double t8231;
  double t8233;
  double t8240;
  double t8250;
  double t8259;
  double t8263;
  double t8264;
  double t8268;
  double t8269;
  double t8277;
  double t8283;
  double t8284;
  double t8287;
  double t8291;
  double t8294;
  double t8300;
  double t8307;
  double t8308;
  double t8316;
  double t8329;
  double t8331;
  double t8333;
  double t8336;
  double t8337;
  double t8340;
  double t8347;
  double t8348;
  double t8349;
  double t7792;
  double t7797;
  double t7823;
  double t7836;
  double t7859;
  double t7883;
  double t7911;
  double t7922;
  double t7944;
  double t7976;
  double t8015;
  double t8033;
  double t8034;
  double t8035;
  double t8038;
  double t8041;
  double t8045;
  double t8048;
  double t8068;
  double t8069;
  double t4607;
  double t4661;
  double t4678;
  double t8390;
  double t8391;
  double t8394;
  double t8398;
  double t8401;
  double t8403;
  double t8405;
  double t8406;
  double t8407;
  double t8409;
  double t8410;
  double t8412;
  double t8414;
  double t8415;
  double t8416;
  double t8418;
  double t8425;
  double t8426;
  double t8371;
  double t8372;
  double t8374;
  double t8379;
  double t8380;
  double t8460;
  double t8462;
  double t8463;
  double t8465;
  double t8471;
  double t8474;
  double t8487;
  double t8488;
  double t8489;
  double t8492;
  double t8495;
  double t8498;
  double t8504;
  double t8505;
  double t8506;
  double t8509;
  double t8510;
  double t8511;
  double t8514;
  double t8515;
  double t8516;
  double t8518;
  double t8519;
  double t8520;
  double t8533;
  double t8534;
  double t8535;
  double t8537;
  double t8538;
  double t8540;
  double t8548;
  double t8549;
  double t8550;
  double t8552;
  double t8553;
  double t8554;
  double t8556;
  double t8557;
  double t8558;
  double t8560;
  double t8561;
  double t8562;
  double t8564;
  double t8565;
  double t8566;
  double t8568;
  double t8569;
  double t8570;
  double t8590;
  double t8591;
  double t8592;
  double t8595;
  double t8596;
  double t8598;
  double t8599;
  double t8600;
  double t8602;
  double t8603;
  double t8604;
  double t8607;
  double t8608;
  double t8609;
  double t8611;
  double t8612;
  double t8613;
  double t8615;
  double t8617;
  double t8618;
  double t8581;
  double t8582;
  double t8583;
  double t8585;
  double t8587;
  double t8631;
  double t8632;
  double t8633;
  double t8636;
  double t8637;
  double t8638;
  double t8641;
  double t8642;
  double t8643;
  double t8646;
  double t8647;
  double t8648;
  double t8652;
  double t8653;
  double t8654;
  double t8656;
  double t8657;
  double t8658;
  double t8660;
  double t8661;
  double t8662;
  double t8664;
  double t8665;
  double t8666;
  double t8670;
  double t8671;
  double t8672;
  double t8687;
  double t8689;
  double t8690;
  double t8696;
  double t8698;
  double t8699;
  double t8701;
  double t8702;
  double t8704;
  double t8710;
  double t8712;
  double t8713;
  double t8715;
  double t8716;
  double t8717;
  double t8719;
  double t8721;
  double t8723;
  double t8725;
  double t8726;
  double t8727;
  double t8729;
  double t8730;
  double t8731;
  double t8733;
  double t8734;
  double t8735;
  double t8754;
  double t8755;
  double t8757;
  double t8758;
  double t8759;
  double t8761;
  double t8762;
  double t8764;
  double t8765;
  double t8766;
  double t8768;
  double t8769;
  double t8770;
  double t8746;
  double t8747;
  double t8748;
  double t8750;
  double t8751;
  double t8781;
  double t8782;
  double t8783;
  double t8786;
  double t8787;
  double t8790;
  double t8791;
  double t8793;
  double t8794;
  double t8795;
  double t8797;
  double t8798;
  double t8799;
  double t8801;
  double t8802;
  double t8803;
  double t8805;
  double t8806;
  double t8807;
  double t8819;
  double t8820;
  double t8821;
  double t8824;
  double t8825;
  double t8827;
  double t8828;
  double t8830;
  double t8831;
  double t8832;
  double t8835;
  double t8836;
  double t8837;
  double t8839;
  double t8841;
  double t8842;
  double t8844;
  double t8845;
  double t8846;
  double t8865;
  double t8867;
  double t8870;
  double t8871;
  double t8873;
  double t8874;
  double t8876;
  double t8858;
  double t8859;
  double t8861;
  double t8862;
  double t8863;
  double t8890;
  double t8891;
  double t8892;
  double t8894;
  double t8895;
  double t8897;
  double t8898;
  double t8900;
  double t8901;
  double t8902;
  double t8904;
  double t8905;
  double t8906;
  double t8918;
  double t8919;
  double t8920;
  double t8922;
  double t8923;
  double t8925;
  double t8927;
  double t8929;
  double t8930;
  double t8931;
  double t8933;
  double t8934;
  double t8935;
  double t8954;
  double t8955;
  double t5082;
  double t8946;
  double t8947;
  double t8948;
  double t8950;
  double t8951;
  double t8965;
  double t8966;
  double t8967;
  double t8970;
  double t8972;
  double t8975;
  double t8976;
  double t8987;
  double t8988;
  double t8989;
  double t8992;
  double t8993;
  double t8995;
  double t8996;
  double t8957;
  double t5101;
  double t5116;
  double t9008;
  double t9009;
  double t9011;
  double t9012;
  double t9013;
  double t8978;
  double t9022;
  double t9023;
  double t9025;
  double t8982;
  double t8998;
  double t9035;
  double t9036;
  double t9037;
  double t9002;
  t404 = Cos(var1[3]);
  t70 = Cos(var1[5]);
  t108 = Sin(var1[3]);
  t254 = Sin(var1[4]);
  t450 = Sin(var1[5]);
  t741 = Cos(var1[6]);
  t768 = -1.*t741;
  t825 = 1. + t768;
  t1023 = Sin(var1[6]);
  t1217 = -1.*t404*t70;
  t1223 = -1.*t108*t254*t450;
  t1245 = t1217 + t1223;
  t345 = -1.*t70*t108*t254;
  t730 = t404*t450;
  t736 = t345 + t730;
  t1709 = Cos(var1[7]);
  t1715 = -1.*t1709;
  t1764 = 1. + t1715;
  t1781 = Sin(var1[7]);
  t1347 = t741*t1245;
  t1410 = t736*t1023;
  t1651 = t1347 + t1410;
  t1970 = Cos(var1[4]);
  t2276 = Cos(var1[8]);
  t2286 = -1.*t2276;
  t2295 = 1. + t2286;
  t2354 = Sin(var1[8]);
  t2154 = -1.*t1970*t1709*t108;
  t2201 = t1651*t1781;
  t2211 = t2154 + t2201;
  t2395 = t741*t736;
  t2428 = -1.*t1245*t1023;
  t2484 = t2395 + t2428;
  t2650 = Cos(var1[9]);
  t2651 = -1.*t2650;
  t2654 = 1. + t2651;
  t2718 = Sin(var1[9]);
  t2757 = t2276*t2211;
  t2778 = t2484*t2354;
  t2849 = t2757 + t2778;
  t2973 = t2276*t2484;
  t3017 = -1.*t2211*t2354;
  t3027 = t2973 + t3017;
  t3043 = Cos(var1[10]);
  t3076 = -1.*t3043;
  t3112 = 1. + t3076;
  t3195 = Sin(var1[10]);
  t3381 = -1.*t2718*t2849;
  t3386 = t2650*t3027;
  t3399 = t3381 + t3386;
  t3501 = t2650*t2849;
  t3507 = t2718*t3027;
  t3511 = t3501 + t3507;
  t3560 = Cos(var1[11]);
  t3614 = -1.*t3560;
  t3619 = 1. + t3614;
  t3651 = Sin(var1[11]);
  t3712 = t3195*t3399;
  t3715 = t3043*t3511;
  t3716 = t3712 + t3715;
  t3806 = t3043*t3399;
  t3853 = -1.*t3195*t3511;
  t3881 = t3806 + t3853;
  t3904 = Cos(var1[12]);
  t3908 = -1.*t3904;
  t3918 = 1. + t3908;
  t3970 = Sin(var1[12]);
  t4030 = -1.*t3651*t3716;
  t4037 = t3560*t3881;
  t4040 = t4030 + t4037;
  t4090 = t3560*t3716;
  t4147 = t3651*t3881;
  t4155 = t4090 + t4147;
  t961 = 0.07996*t825;
  t1039 = -0.135*t1023;
  t1082 = 0. + t961 + t1039;
  t1250 = 0.135*t825;
  t1304 = 0.07996*t1023;
  t1331 = 0. + t1250 + t1304;
  t4353 = -1.*t70*t108;
  t4370 = t404*t254*t450;
  t4382 = t4353 + t4370;
  t4290 = t404*t70*t254;
  t4302 = t108*t450;
  t4339 = t4290 + t4302;
  t1775 = 0.135*t1764;
  t1789 = 0.08055*t1781;
  t1930 = 0. + t1775 + t1789;
  t1971 = -0.08055*t1764;
  t1989 = 0.135*t1781;
  t1994 = 0. + t1971 + t1989;
  t4452 = t741*t4382;
  t4535 = t4339*t1023;
  t4545 = t4452 + t4535;
  t2335 = -0.08055*t2295;
  t2357 = -0.01004*t2354;
  t2358 = 0. + t2335 + t2357;
  t2530 = -0.01004*t2295;
  t2572 = 0.08055*t2354;
  t2608 = 0. + t2530 + t2572;
  t2665 = -0.08055*t2654;
  t2721 = -0.13004*t2718;
  t2726 = 0. + t2665 + t2721;
  t4703 = t404*t1970*t1709;
  t4708 = t4545*t1781;
  t4713 = t4703 + t4708;
  t4720 = t741*t4339;
  t4742 = -1.*t4382*t1023;
  t4744 = t4720 + t4742;
  t2936 = -0.13004*t2654;
  t2950 = 0.08055*t2718;
  t2951 = 0. + t2936 + t2950;
  t3157 = -0.19074*t3112;
  t3242 = 0.03315*t3195;
  t3331 = 0. + t3157 + t3242;
  t4766 = t2276*t4713;
  t4782 = t4744*t2354;
  t4785 = t4766 + t4782;
  t4829 = t2276*t4744;
  t4847 = -1.*t4713*t2354;
  t4866 = t4829 + t4847;
  t3411 = -0.03315*t3112;
  t3424 = -0.19074*t3195;
  t3445 = 0. + t3411 + t3424;
  t3641 = -0.01315*t3619;
  t3682 = -0.62554*t3651;
  t3704 = 0. + t3641 + t3682;
  t4889 = -1.*t2718*t4785;
  t4897 = t2650*t4866;
  t4906 = t4889 + t4897;
  t4908 = t2650*t4785;
  t4911 = t2718*t4866;
  t4920 = t4908 + t4911;
  t3761 = -0.62554*t3619;
  t3771 = 0.01315*t3651;
  t3804 = 0. + t3761 + t3771;
  t3923 = -1.03354*t3918;
  t3986 = 0.05315*t3970;
  t4019 = 0. + t3923 + t3986;
  t4932 = t3195*t4906;
  t4937 = t3043*t4920;
  t4941 = t4932 + t4937;
  t4968 = t3043*t4906;
  t4988 = -1.*t3195*t4920;
  t4995 = t4968 + t4988;
  t4043 = -0.05315*t3918;
  t4065 = -1.03354*t3970;
  t4079 = 0. + t4043 + t4065;
  t5003 = -1.*t3651*t4941;
  t5005 = t3560*t4995;
  t5012 = t5003 + t5005;
  t5029 = t3560*t4941;
  t5032 = t3651*t4995;
  t5036 = t5029 + t5032;
  t5206 = t404*t1970*t741*t450;
  t5248 = t404*t1970*t70*t1023;
  t5325 = t5206 + t5248;
  t5371 = -1.*t404*t1709*t254;
  t5373 = t5325*t1781;
  t5374 = t5371 + t5373;
  t5409 = t404*t1970*t70*t741;
  t5421 = -1.*t404*t1970*t450*t1023;
  t5425 = t5409 + t5421;
  t5430 = t2276*t5374;
  t5454 = t5425*t2354;
  t5459 = t5430 + t5454;
  t5493 = t2276*t5425;
  t5512 = -1.*t5374*t2354;
  t5518 = t5493 + t5512;
  t5531 = -1.*t2718*t5459;
  t5532 = t2650*t5518;
  t5534 = t5531 + t5532;
  t5541 = t2650*t5459;
  t5554 = t2718*t5518;
  t5559 = t5541 + t5554;
  t5585 = t3195*t5534;
  t5588 = t3043*t5559;
  t5599 = t5585 + t5588;
  t5609 = t3043*t5534;
  t5617 = -1.*t3195*t5559;
  t5635 = t5609 + t5617;
  t5638 = -1.*t3651*t5599;
  t5645 = t3560*t5635;
  t5650 = t5638 + t5645;
  t5666 = t3560*t5599;
  t5668 = t3651*t5635;
  t5671 = t5666 + t5668;
  t5788 = t1970*t741*t108*t450;
  t5789 = t1970*t70*t108*t1023;
  t5790 = t5788 + t5789;
  t5893 = -1.*t1709*t108*t254;
  t5904 = t5790*t1781;
  t5918 = t5893 + t5904;
  t5946 = t1970*t70*t741*t108;
  t5979 = -1.*t1970*t108*t450*t1023;
  t5985 = t5946 + t5979;
  t6015 = t2276*t5918;
  t6021 = t5985*t2354;
  t6024 = t6015 + t6021;
  t6067 = t2276*t5985;
  t6072 = -1.*t5918*t2354;
  t6079 = t6067 + t6072;
  t6097 = -1.*t2718*t6024;
  t6102 = t2650*t6079;
  t6105 = t6097 + t6102;
  t6126 = t2650*t6024;
  t6134 = t2718*t6079;
  t6140 = t6126 + t6134;
  t6235 = t3195*t6105;
  t6258 = t3043*t6140;
  t6259 = t6235 + t6258;
  t6282 = t3043*t6105;
  t6299 = -1.*t3195*t6140;
  t6303 = t6282 + t6299;
  t6327 = -1.*t3651*t6259;
  t6354 = t3560*t6303;
  t6355 = t6327 + t6354;
  t6357 = t3560*t6259;
  t6362 = t3651*t6303;
  t6364 = t6357 + t6362;
  t6553 = -1.*t741*t254*t450;
  t6562 = -1.*t70*t254*t1023;
  t6581 = t6553 + t6562;
  t6695 = -1.*t1970*t1709;
  t6700 = t6581*t1781;
  t6718 = t6695 + t6700;
  t6748 = -1.*t70*t741*t254;
  t6779 = t254*t450*t1023;
  t6790 = t6748 + t6779;
  t6818 = t2276*t6718;
  t6833 = t6790*t2354;
  t6839 = t6818 + t6833;
  t6881 = t2276*t6790;
  t6889 = -1.*t6718*t2354;
  t6893 = t6881 + t6889;
  t6914 = -1.*t2718*t6839;
  t6915 = t2650*t6893;
  t6940 = t6914 + t6915;
  t6999 = t2650*t6839;
  t7004 = t2718*t6893;
  t7010 = t6999 + t7004;
  t7015 = t3195*t6940;
  t7018 = t3043*t7010;
  t7020 = t7015 + t7018;
  t7027 = t3043*t6940;
  t7032 = -1.*t3195*t7010;
  t7039 = t7027 + t7032;
  t7056 = -1.*t3651*t7020;
  t7059 = t3560*t7039;
  t7062 = t7056 + t7059;
  t7074 = t3560*t7020;
  t7077 = t3651*t7039;
  t7082 = t7074 + t7077;
  t7146 = t70*t108;
  t7151 = -1.*t404*t254*t450;
  t7152 = t7146 + t7151;
  t7171 = t7152*t1023;
  t7172 = t4720 + t7171;
  t7186 = t741*t7152;
  t7187 = -1.*t4339*t1023;
  t7210 = t7186 + t7187;
  t7219 = t2276*t7172*t1781;
  t7226 = t7210*t2354;
  t7229 = t7219 + t7226;
  t7236 = t2276*t7210;
  t7239 = -1.*t7172*t1781*t2354;
  t7240 = t7236 + t7239;
  t7262 = -1.*t2718*t7229;
  t7264 = t2650*t7240;
  t7270 = t7262 + t7264;
  t7278 = t2650*t7229;
  t7279 = t2718*t7240;
  t7284 = t7278 + t7279;
  t7291 = t3195*t7270;
  t7294 = t3043*t7284;
  t7298 = t7291 + t7294;
  t7309 = t3043*t7270;
  t7310 = -1.*t3195*t7284;
  t7313 = t7309 + t7310;
  t7336 = -1.*t3651*t7298;
  t7341 = t3560*t7313;
  t7349 = t7336 + t7341;
  t7359 = t3560*t7298;
  t7375 = t3651*t7313;
  t7377 = t7359 + t7375;
  t7427 = t70*t108*t254;
  t7437 = -1.*t404*t450;
  t7441 = t7427 + t7437;
  t7470 = t741*t7441;
  t7472 = t1245*t1023;
  t7493 = t7470 + t7472;
  t7506 = -1.*t7441*t1023;
  t7507 = t1347 + t7506;
  t7514 = t2276*t7493*t1781;
  t7515 = t7507*t2354;
  t7524 = t7514 + t7515;
  t7546 = t2276*t7507;
  t7555 = -1.*t7493*t1781*t2354;
  t7580 = t7546 + t7555;
  t7586 = -1.*t2718*t7524;
  t7590 = t2650*t7580;
  t7594 = t7586 + t7590;
  t7604 = t2650*t7524;
  t7605 = t2718*t7580;
  t7617 = t7604 + t7605;
  t7625 = t3195*t7594;
  t7628 = t3043*t7617;
  t7630 = t7625 + t7628;
  t7633 = t3043*t7594;
  t7640 = -1.*t3195*t7617;
  t7650 = t7633 + t7640;
  t7655 = -1.*t3651*t7630;
  t7677 = t3560*t7650;
  t7683 = t7655 + t7677;
  t7687 = t3560*t7630;
  t7694 = t3651*t7650;
  t7697 = t7687 + t7694;
  t7780 = t1970*t70*t741;
  t7781 = -1.*t1970*t450*t1023;
  t7791 = t7780 + t7781;
  t7832 = -1.*t1970*t741*t450;
  t7834 = -1.*t1970*t70*t1023;
  t7835 = t7832 + t7834;
  t7838 = t2276*t7791*t1781;
  t7847 = t7835*t2354;
  t7853 = t7838 + t7847;
  t7861 = t2276*t7835;
  t7869 = -1.*t7791*t1781*t2354;
  t7875 = t7861 + t7869;
  t7884 = -1.*t2718*t7853;
  t7886 = t2650*t7875;
  t7904 = t7884 + t7886;
  t7919 = t2650*t7853;
  t7920 = t2718*t7875;
  t7921 = t7919 + t7920;
  t7924 = t3195*t7904;
  t7926 = t3043*t7921;
  t7941 = t7924 + t7926;
  t7952 = t3043*t7904;
  t7957 = -1.*t3195*t7921;
  t7970 = t7952 + t7957;
  t7981 = -1.*t3651*t7941;
  t8005 = t3560*t7970;
  t8006 = t7981 + t8005;
  t8027 = t3560*t7941;
  t8029 = t3651*t7970;
  t8031 = t8027 + t8029;
  t8115 = -1.*t741*t4382;
  t8122 = t8115 + t7187;
  t8124 = t2276*t4744*t1781;
  t8125 = t8122*t2354;
  t8126 = t8124 + t8125;
  t8128 = t2276*t8122;
  t8133 = -1.*t4744*t1781*t2354;
  t8138 = t8128 + t8133;
  t8145 = -1.*t2718*t8126;
  t8146 = t2650*t8138;
  t8147 = t8145 + t8146;
  t8150 = t2650*t8126;
  t8151 = t2718*t8138;
  t8155 = t8150 + t8151;
  t8157 = t3195*t8147;
  t8163 = t3043*t8155;
  t8165 = t8157 + t8163;
  t8177 = t3043*t8147;
  t8182 = -1.*t3195*t8155;
  t8183 = t8177 + t8182;
  t8185 = -1.*t3651*t8165;
  t8186 = t3560*t8183;
  t8188 = t8185 + t8186;
  t8191 = t3560*t8165;
  t8192 = t3651*t8183;
  t8193 = t8191 + t8192;
  t8077 = -0.135*t741;
  t8079 = t8077 + t1304;
  t8084 = 0.07996*t741;
  t8086 = 0.135*t1023;
  t8087 = t8084 + t8086;
  t8218 = t404*t70;
  t8221 = t108*t254*t450;
  t8229 = t8218 + t8221;
  t8231 = -1.*t8229*t1023;
  t8233 = t7470 + t8231;
  t8240 = -1.*t741*t8229;
  t8250 = t8240 + t7506;
  t8259 = t2276*t8233*t1781;
  t8263 = t8250*t2354;
  t8264 = t8259 + t8263;
  t8268 = t2276*t8250;
  t8269 = -1.*t8233*t1781*t2354;
  t8277 = t8268 + t8269;
  t8283 = -1.*t2718*t8264;
  t8284 = t2650*t8277;
  t8287 = t8283 + t8284;
  t8291 = t2650*t8264;
  t8294 = t2718*t8277;
  t8300 = t8291 + t8294;
  t8307 = t3195*t8287;
  t8308 = t3043*t8300;
  t8316 = t8307 + t8308;
  t8329 = t3043*t8287;
  t8331 = -1.*t3195*t8300;
  t8333 = t8329 + t8331;
  t8336 = -1.*t3651*t8316;
  t8337 = t3560*t8333;
  t8340 = t8336 + t8337;
  t8347 = t3560*t8316;
  t8348 = t3651*t8333;
  t8349 = t8347 + t8348;
  t7792 = 0.1305*t1709*t7791;
  t7797 = t7791*t1930;
  t7823 = t7791*t1781*t2358;
  t7836 = t7835*t2608;
  t7859 = t2726*t7853;
  t7883 = t2951*t7875;
  t7911 = t3331*t7904;
  t7922 = t3445*t7921;
  t7944 = t3704*t7941;
  t7976 = t3804*t7970;
  t8015 = t4019*t8006;
  t8033 = t4079*t8031;
  t8034 = t3970*t8006;
  t8035 = t3904*t8031;
  t8038 = t8034 + t8035;
  t8041 = -0.063247*t8038;
  t8045 = t3904*t8006;
  t8048 = -1.*t3970*t8031;
  t8068 = t8045 + t8048;
  t8069 = -1.109926*t8068;
  t4607 = t1709*t4545;
  t4661 = -1.*t404*t1970*t1781;
  t4678 = t4607 + t4661;
  t8390 = -1.*t2276*t2718*t4678;
  t8391 = -1.*t2650*t4678*t2354;
  t8394 = t8390 + t8391;
  t8398 = t2650*t2276*t4678;
  t8401 = -1.*t2718*t4678*t2354;
  t8403 = t8398 + t8401;
  t8405 = t3195*t8394;
  t8406 = t3043*t8403;
  t8407 = t8405 + t8406;
  t8409 = t3043*t8394;
  t8410 = -1.*t3195*t8403;
  t8412 = t8409 + t8410;
  t8414 = -1.*t3651*t8407;
  t8415 = t3560*t8412;
  t8416 = t8414 + t8415;
  t8418 = t3560*t8407;
  t8425 = t3651*t8412;
  t8426 = t8418 + t8425;
  t8371 = 0.135*t1709;
  t8372 = -0.08055*t1781;
  t8374 = t8371 + t8372;
  t8379 = 0.08055*t1709;
  t8380 = t8379 + t1989;
  t8460 = t741*t8229;
  t8462 = t7441*t1023;
  t8463 = t8460 + t8462;
  t8465 = t1709*t8463;
  t8471 = -1.*t1970*t108*t1781;
  t8474 = t8465 + t8471;
  t8487 = -1.*t2276*t2718*t8474;
  t8488 = -1.*t2650*t8474*t2354;
  t8489 = t8487 + t8488;
  t8492 = t2650*t2276*t8474;
  t8495 = -1.*t2718*t8474*t2354;
  t8498 = t8492 + t8495;
  t8504 = t3195*t8489;
  t8505 = t3043*t8498;
  t8506 = t8504 + t8505;
  t8509 = t3043*t8489;
  t8510 = -1.*t3195*t8498;
  t8511 = t8509 + t8510;
  t8514 = -1.*t3651*t8506;
  t8515 = t3560*t8511;
  t8516 = t8514 + t8515;
  t8518 = t3560*t8506;
  t8519 = t3651*t8511;
  t8520 = t8518 + t8519;
  t8533 = t1970*t741*t450;
  t8534 = t1970*t70*t1023;
  t8535 = t8533 + t8534;
  t8537 = t1709*t8535;
  t8538 = t254*t1781;
  t8540 = t8537 + t8538;
  t8548 = -1.*t2276*t2718*t8540;
  t8549 = -1.*t2650*t8540*t2354;
  t8550 = t8548 + t8549;
  t8552 = t2650*t2276*t8540;
  t8553 = -1.*t2718*t8540*t2354;
  t8554 = t8552 + t8553;
  t8556 = t3195*t8550;
  t8557 = t3043*t8554;
  t8558 = t8556 + t8557;
  t8560 = t3043*t8550;
  t8561 = -1.*t3195*t8554;
  t8562 = t8560 + t8561;
  t8564 = -1.*t3651*t8558;
  t8565 = t3560*t8562;
  t8566 = t8564 + t8565;
  t8568 = t3560*t8558;
  t8569 = t3651*t8562;
  t8570 = t8568 + t8569;
  t8590 = -1.*t2276*t4713;
  t8591 = -1.*t4744*t2354;
  t8592 = t8590 + t8591;
  t8595 = t2718*t8592;
  t8596 = t8595 + t4897;
  t8598 = t2650*t8592;
  t8599 = -1.*t2718*t4866;
  t8600 = t8598 + t8599;
  t8602 = -1.*t3195*t8596;
  t8603 = t3043*t8600;
  t8604 = t8602 + t8603;
  t8607 = t3043*t8596;
  t8608 = t3195*t8600;
  t8609 = t8607 + t8608;
  t8611 = t3651*t8604;
  t8612 = t3560*t8609;
  t8613 = t8611 + t8612;
  t8615 = t3560*t8604;
  t8617 = -1.*t3651*t8609;
  t8618 = t8615 + t8617;
  t8581 = -0.01004*t2276;
  t8582 = -0.08055*t2354;
  t8583 = t8581 + t8582;
  t8585 = 0.08055*t2276;
  t8587 = t8585 + t2357;
  t8631 = t1970*t1709*t108;
  t8632 = t8463*t1781;
  t8633 = t8631 + t8632;
  t8636 = -1.*t2276*t8633;
  t8637 = -1.*t8233*t2354;
  t8638 = t8636 + t8637;
  t8641 = t2276*t8233;
  t8642 = -1.*t8633*t2354;
  t8643 = t8641 + t8642;
  t8646 = t2718*t8638;
  t8647 = t2650*t8643;
  t8648 = t8646 + t8647;
  t8652 = t2650*t8638;
  t8653 = -1.*t2718*t8643;
  t8654 = t8652 + t8653;
  t8656 = -1.*t3195*t8648;
  t8657 = t3043*t8654;
  t8658 = t8656 + t8657;
  t8660 = t3043*t8648;
  t8661 = t3195*t8654;
  t8662 = t8660 + t8661;
  t8664 = t3651*t8658;
  t8665 = t3560*t8662;
  t8666 = t8664 + t8665;
  t8670 = t3560*t8658;
  t8671 = -1.*t3651*t8662;
  t8672 = t8670 + t8671;
  t8687 = -1.*t1709*t254;
  t8689 = t8535*t1781;
  t8690 = t8687 + t8689;
  t8696 = -1.*t2276*t8690;
  t8698 = -1.*t7791*t2354;
  t8699 = t8696 + t8698;
  t8701 = t2276*t7791;
  t8702 = -1.*t8690*t2354;
  t8704 = t8701 + t8702;
  t8710 = t2718*t8699;
  t8712 = t2650*t8704;
  t8713 = t8710 + t8712;
  t8715 = t2650*t8699;
  t8716 = -1.*t2718*t8704;
  t8717 = t8715 + t8716;
  t8719 = -1.*t3195*t8713;
  t8721 = t3043*t8717;
  t8723 = t8719 + t8721;
  t8725 = t3043*t8713;
  t8726 = t3195*t8717;
  t8727 = t8725 + t8726;
  t8729 = t3651*t8723;
  t8730 = t3560*t8727;
  t8731 = t8729 + t8730;
  t8733 = t3560*t8723;
  t8734 = -1.*t3651*t8727;
  t8735 = t8733 + t8734;
  t8754 = -1.*t2650*t4785;
  t8755 = t8754 + t8599;
  t8757 = -1.*t3195*t4906;
  t8758 = t3043*t8755;
  t8759 = t8757 + t8758;
  t8761 = t3195*t8755;
  t8762 = t4968 + t8761;
  t8764 = t3651*t8759;
  t8765 = t3560*t8762;
  t8766 = t8764 + t8765;
  t8768 = t3560*t8759;
  t8769 = -1.*t3651*t8762;
  t8770 = t8768 + t8769;
  t8746 = -0.13004*t2650;
  t8747 = -0.08055*t2718;
  t8748 = t8746 + t8747;
  t8750 = 0.08055*t2650;
  t8751 = t8750 + t2721;
  t8781 = t2276*t8633;
  t8782 = t8233*t2354;
  t8783 = t8781 + t8782;
  t8786 = -1.*t2718*t8783;
  t8787 = t8786 + t8647;
  t8790 = -1.*t2650*t8783;
  t8791 = t8790 + t8653;
  t8793 = -1.*t3195*t8787;
  t8794 = t3043*t8791;
  t8795 = t8793 + t8794;
  t8797 = t3043*t8787;
  t8798 = t3195*t8791;
  t8799 = t8797 + t8798;
  t8801 = t3651*t8795;
  t8802 = t3560*t8799;
  t8803 = t8801 + t8802;
  t8805 = t3560*t8795;
  t8806 = -1.*t3651*t8799;
  t8807 = t8805 + t8806;
  t8819 = t2276*t8690;
  t8820 = t7791*t2354;
  t8821 = t8819 + t8820;
  t8824 = -1.*t2718*t8821;
  t8825 = t8824 + t8712;
  t8827 = -1.*t2650*t8821;
  t8828 = t8827 + t8716;
  t8830 = -1.*t3195*t8825;
  t8831 = t3043*t8828;
  t8832 = t8830 + t8831;
  t8835 = t3043*t8825;
  t8836 = t3195*t8828;
  t8837 = t8835 + t8836;
  t8839 = t3651*t8832;
  t8841 = t3560*t8837;
  t8842 = t8839 + t8841;
  t8844 = t3560*t8832;
  t8845 = -1.*t3651*t8837;
  t8846 = t8844 + t8845;
  t8865 = -1.*t3043*t4920;
  t8867 = t8757 + t8865;
  t8870 = t3651*t8867;
  t8871 = t8870 + t5005;
  t8873 = t3560*t8867;
  t8874 = -1.*t3651*t4995;
  t8876 = t8873 + t8874;
  t8858 = 0.03315*t3043;
  t8859 = t8858 + t3424;
  t8861 = -0.19074*t3043;
  t8862 = -0.03315*t3195;
  t8863 = t8861 + t8862;
  t8890 = t2650*t8783;
  t8891 = t2718*t8643;
  t8892 = t8890 + t8891;
  t8894 = -1.*t3043*t8892;
  t8895 = t8793 + t8894;
  t8897 = -1.*t3195*t8892;
  t8898 = t8797 + t8897;
  t8900 = t3651*t8895;
  t8901 = t3560*t8898;
  t8902 = t8900 + t8901;
  t8904 = t3560*t8895;
  t8905 = -1.*t3651*t8898;
  t8906 = t8904 + t8905;
  t8918 = t2650*t8821;
  t8919 = t2718*t8704;
  t8920 = t8918 + t8919;
  t8922 = -1.*t3043*t8920;
  t8923 = t8830 + t8922;
  t8925 = -1.*t3195*t8920;
  t8927 = t8835 + t8925;
  t8929 = t3651*t8923;
  t8930 = t3560*t8927;
  t8931 = t8929 + t8930;
  t8933 = t3560*t8923;
  t8934 = -1.*t3651*t8927;
  t8935 = t8933 + t8934;
  t8954 = -1.*t3560*t4941;
  t8955 = t8954 + t8874;
  t5082 = t3904*t5012;
  t8946 = -0.62554*t3560;
  t8947 = -0.01315*t3651;
  t8948 = t8946 + t8947;
  t8950 = 0.01315*t3560;
  t8951 = t8950 + t3682;
  t8965 = t3195*t8787;
  t8966 = t3043*t8892;
  t8967 = t8965 + t8966;
  t8970 = -1.*t3651*t8967;
  t8972 = t8970 + t8901;
  t8975 = -1.*t3560*t8967;
  t8976 = t8975 + t8905;
  t8987 = t3195*t8825;
  t8988 = t3043*t8920;
  t8989 = t8987 + t8988;
  t8992 = -1.*t3651*t8989;
  t8993 = t8992 + t8930;
  t8995 = -1.*t3560*t8989;
  t8996 = t8995 + t8934;
  t8957 = -1.*t3970*t5012;
  t5101 = -1.*t3970*t5036;
  t5116 = t5082 + t5101;
  t9008 = 0.05315*t3904;
  t9009 = t9008 + t4065;
  t9011 = -1.03354*t3904;
  t9012 = -0.05315*t3970;
  t9013 = t9011 + t9012;
  t8978 = -1.*t3970*t8972;
  t9022 = t3560*t8967;
  t9023 = t3651*t8898;
  t9025 = t9022 + t9023;
  t8982 = t3904*t8972;
  t8998 = -1.*t3970*t8993;
  t9035 = t3560*t8989;
  t9036 = t3651*t8927;
  t9037 = t9035 + t9036;
  t9002 = t3904*t8993;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1245*t1331 + t1651*t1930 + 0.1305*(t1651*t1709 + t108*t1781*t1970) - 1.*t108*t1970*t1994 + t2211*t2358 + t2484*t2608 + t2726*t2849 + t2951*t3027 + t3331*t3399 + t3445*t3511 + t3704*t3716 + t3804*t3881 + t4019*t4040 + t4079*t4155 - 0.063247*(t3970*t4040 + t3904*t4155) - 1.109926*(t3904*t4040 - 1.*t3970*t4155) + t1082*t736;
  p_output1[10]=t1970*t1994*t404 + t1082*t4339 + t1331*t4382 + t1930*t4545 + 0.1305*t4678 + t2358*t4713 + t2608*t4744 + t2726*t4785 + t2951*t4866 + t3331*t4906 + t3445*t4920 + t3704*t4941 + t3804*t4995 + t4019*t5012 + t4079*t5036 - 0.063247*(t3970*t5012 + t3904*t5036) - 1.109926*t5116;
  p_output1[11]=0;
  p_output1[12]=-1.*t1994*t254*t404 + t1331*t1970*t404*t450 + t1930*t5325 + 0.1305*(t1781*t254*t404 + t1709*t5325) + t2358*t5374 + t2608*t5425 + t2726*t5459 + t2951*t5518 + t3331*t5534 + t3445*t5559 + t3704*t5599 + t3804*t5635 + t4019*t5650 + t4079*t5671 - 0.063247*(t3970*t5650 + t3904*t5671) - 1.109926*(t3904*t5650 - 1.*t3970*t5671) + t1082*t1970*t404*t70;
  p_output1[13]=-1.*t108*t1994*t254 + t108*t1331*t1970*t450 + t1930*t5790 + 0.1305*(t108*t1781*t254 + t1709*t5790) + t2358*t5918 + t2608*t5985 + t2726*t6024 + t2951*t6079 + t3331*t6105 + t3445*t6140 + t3704*t6259 + t3804*t6303 + t4019*t6355 + t4079*t6364 - 0.063247*(t3970*t6355 + t3904*t6364) - 1.109926*(t3904*t6355 - 1.*t3970*t6364) + t108*t1082*t1970*t70;
  p_output1[14]=-1.*t1970*t1994 - 1.*t1331*t254*t450 + t1930*t6581 + 0.1305*(t1781*t1970 + t1709*t6581) + t2358*t6718 + t2608*t6790 + t2726*t6839 + t2951*t6893 + t3331*t6940 - 1.*t1082*t254*t70 + t3445*t7010 + t3704*t7020 + t3804*t7039 + t4019*t7062 + t4079*t7082 - 0.063247*(t3970*t7062 + t3904*t7082) - 1.109926*(t3904*t7062 - 1.*t3970*t7082);
  p_output1[15]=t1331*t4339 + t1082*t7152 + 0.1305*t1709*t7172 + t1930*t7172 + t1781*t2358*t7172 + t2608*t7210 + t2726*t7229 + t2951*t7240 + t3331*t7270 + t3445*t7284 + t3704*t7298 + t3804*t7313 + t4019*t7349 + t4079*t7377 - 0.063247*(t3970*t7349 + t3904*t7377) - 1.109926*(t3904*t7349 - 1.*t3970*t7377);
  p_output1[16]=t1082*t1245 + t1331*t7441 + 0.1305*t1709*t7493 + t1930*t7493 + t1781*t2358*t7493 + t2608*t7507 + t2726*t7524 + t2951*t7580 + t3331*t7594 + t3445*t7617 + t3704*t7630 + t3804*t7650 + t4019*t7683 + t4079*t7697 - 0.063247*(t3970*t7683 + t3904*t7697) - 1.109926*(t3904*t7683 - 1.*t3970*t7697);
  p_output1[17]=-1.*t1082*t1970*t450 + t1331*t1970*t70 + t7792 + t7797 + t7823 + t7836 + t7859 + t7883 + t7911 + t7922 + t7944 + t7976 + t8015 + t8033 + t8041 + t8069;
  p_output1[18]=0.1305*t1709*t4744 + t1930*t4744 + t1781*t2358*t4744 + t4339*t8079 + t4382*t8087 + t2608*t8122 + t2726*t8126 + t2951*t8138 + t3331*t8147 + t3445*t8155 + t3704*t8165 + t3804*t8183 + t4019*t8188 + t4079*t8193 - 0.063247*(t3970*t8188 + t3904*t8193) - 1.109926*(t3904*t8188 - 1.*t3970*t8193);
  p_output1[19]=t7441*t8079 + t8087*t8229 + 0.1305*t1709*t8233 + t1930*t8233 + t1781*t2358*t8233 + t2608*t8250 + t2726*t8264 + t2951*t8277 + t3331*t8287 + t3445*t8300 + t3704*t8316 + t3804*t8333 + t4019*t8340 + t4079*t8349 - 0.063247*(t3970*t8340 + t3904*t8349) - 1.109926*(t3904*t8340 - 1.*t3970*t8349);
  p_output1[20]=t7792 + t7797 + t7823 + t7836 + t7859 + t7883 + t7911 + t7922 + t7944 + t7976 + t8015 + t8033 + t8041 + t8069 + t1970*t70*t8079 + t1970*t450*t8087;
  p_output1[21]=0.1305*(-1.*t1709*t1970*t404 - 1.*t1781*t4545) + t2358*t4678 + t2276*t2726*t4678 - 1.*t2354*t2951*t4678 + t1970*t404*t8374 + t4545*t8380 + t3331*t8394 + t3445*t8403 + t3704*t8407 + t3804*t8412 + t4019*t8416 + t4079*t8426 - 0.063247*(t3970*t8416 + t3904*t8426) - 1.109926*(t3904*t8416 - 1.*t3970*t8426);
  p_output1[22]=t108*t1970*t8374 + t8380*t8463 + 0.1305*(t2154 - 1.*t1781*t8463) + t2358*t8474 + t2276*t2726*t8474 - 1.*t2354*t2951*t8474 + t3331*t8489 + t3445*t8498 + t3704*t8506 + t3804*t8511 + t4019*t8516 + t4079*t8520 - 0.063247*(t3970*t8516 + t3904*t8520) - 1.109926*(t3904*t8516 - 1.*t3970*t8520);
  p_output1[23]=-1.*t254*t8374 + t8380*t8535 + 0.1305*(t1709*t254 - 1.*t1781*t8535) + t2358*t8540 + t2276*t2726*t8540 - 1.*t2354*t2951*t8540 + t3331*t8550 + t3445*t8554 + t3704*t8558 + t3804*t8562 + t4019*t8566 + t4079*t8570 - 0.063247*(t3970*t8566 + t3904*t8570) - 1.109926*(t3904*t8566 - 1.*t3970*t8570);
  p_output1[24]=t2726*t4866 + t4713*t8583 + t4744*t8587 + t2951*t8592 + t3445*t8596 + t3331*t8600 + t3804*t8604 + t3704*t8609 + t4079*t8613 + t4019*t8618 - 1.109926*(-1.*t3970*t8613 + t3904*t8618) - 0.063247*(t3904*t8613 + t3970*t8618);
  p_output1[25]=t8233*t8587 + t8583*t8633 + t2951*t8638 + t2726*t8643 + t3445*t8648 + t3331*t8654 + t3804*t8658 + t3704*t8662 + t4079*t8666 + t4019*t8672 - 1.109926*(-1.*t3970*t8666 + t3904*t8672) - 0.063247*(t3904*t8666 + t3970*t8672);
  p_output1[26]=t7791*t8587 + t8583*t8690 + t2951*t8699 + t2726*t8704 + t3445*t8713 + t3331*t8717 + t3804*t8723 + t3704*t8727 + t4079*t8731 + t4019*t8735 - 1.109926*(-1.*t3970*t8731 + t3904*t8735) - 0.063247*(t3904*t8731 + t3970*t8735);
  p_output1[27]=t3445*t4906 + t4785*t8748 + t4866*t8751 + t3331*t8755 + t3804*t8759 + t3704*t8762 + t4079*t8766 + t4019*t8770 - 1.109926*(-1.*t3970*t8766 + t3904*t8770) - 0.063247*(t3904*t8766 + t3970*t8770);
  p_output1[28]=t8643*t8751 + t8748*t8783 + t3445*t8787 + t3331*t8791 + t3804*t8795 + t3704*t8799 + t4079*t8803 + t4019*t8807 - 1.109926*(-1.*t3970*t8803 + t3904*t8807) - 0.063247*(t3904*t8803 + t3970*t8807);
  p_output1[29]=t8704*t8751 + t8748*t8821 + t3445*t8825 + t3331*t8828 + t3804*t8832 + t3704*t8837 + t4079*t8842 + t4019*t8846 - 1.109926*(-1.*t3970*t8842 + t3904*t8846) - 0.063247*(t3904*t8842 + t3970*t8846);
  p_output1[30]=t3704*t4995 + t4906*t8859 + t4920*t8863 + t3804*t8867 + t4079*t8871 + t4019*t8876 - 1.109926*(-1.*t3970*t8871 + t3904*t8876) - 0.063247*(t3904*t8871 + t3970*t8876);
  p_output1[31]=t8787*t8859 + t8863*t8892 + t3804*t8895 + t3704*t8898 + t4079*t8902 + t4019*t8906 - 1.109926*(-1.*t3970*t8902 + t3904*t8906) - 0.063247*(t3904*t8902 + t3970*t8906);
  p_output1[32]=t8825*t8859 + t8863*t8920 + t3804*t8923 + t3704*t8927 + t4079*t8931 + t4019*t8935 - 1.109926*(-1.*t3970*t8931 + t3904*t8935) - 0.063247*(t3904*t8931 + t3970*t8935);
  p_output1[33]=t4079*t5012 + t4941*t8948 + t4995*t8951 + t4019*t8955 - 0.063247*(t5082 + t3970*t8955) - 1.109926*(t3904*t8955 + t8957);
  p_output1[34]=t8898*t8951 + t8948*t8967 + t4079*t8972 + t4019*t8976 - 1.109926*(t3904*t8976 + t8978) - 0.063247*(t3970*t8976 + t8982);
  p_output1[35]=t8927*t8951 + t8948*t8989 + t4079*t8993 + t4019*t8996 - 1.109926*(t3904*t8996 + t8998) - 0.063247*(t3970*t8996 + t9002);
  p_output1[36]=-0.063247*t5116 - 1.109926*(-1.*t3904*t5036 + t8957) + t5012*t9009 + t5036*t9013;
  p_output1[37]=t8972*t9009 + t9013*t9025 - 1.109926*(t8978 - 1.*t3904*t9025) - 0.063247*(t8982 - 1.*t3970*t9025);
  p_output1[38]=t8993*t9009 + t9013*t9037 - 1.109926*(t8998 - 1.*t3904*t9037) - 0.063247*(t9002 - 1.*t3970*t9037);
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



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftToeBottomBack_mex.hh"

namespace SymExpression
{

void Jp_LeftToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
