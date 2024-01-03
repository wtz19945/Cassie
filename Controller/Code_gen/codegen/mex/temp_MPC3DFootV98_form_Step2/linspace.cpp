/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * linspace.cpp
 *
 * Code generation for function 'linspace'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV98_form_Step2.h"
#include "linspace.h"

/* Function Definitions */
void linspace(real_T d1, real_T d2, real_T y[5])
{
  real_T delta1;
  int32_T k;
  real_T delta2;
  y[4] = d2;
  y[0] = d1;
  if (((d1 < 0.0) != (d2 < 0.0)) && ((muDoubleScalarAbs(d1) >
        8.9884656743115785E+307) || (muDoubleScalarAbs(d2) >
        8.9884656743115785E+307))) {
    delta1 = d1 / 4.0;
    delta2 = d2 / 4.0;
    for (k = 0; k < 3; k++) {
      y[k + 1] = (d1 + delta2 * (1.0 + (real_T)k)) - delta1 * (1.0 + (real_T)k);
    }
  } else {
    delta1 = (d2 - d1) / 4.0;
    for (k = 0; k < 3; k++) {
      y[k + 1] = d1 + (1.0 + (real_T)k) * delta1;
    }
  }
}

/* End of code generation (linspace.cpp) */
