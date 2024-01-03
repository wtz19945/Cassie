/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * IqFast_RightStart2V11.h
 *
 * Code generation for function 'IqFast_RightStart2V11'
 *
 */

#ifndef IQFAST_RIGHTSTART2V11_H
#define IQFAST_RIGHTSTART2V11_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Fast_MPCV11_form_Step2_types.h"

/* Function Declarations */
extern void IqFast_RightStart2V11(const emlrtStack *sp, const emxArray_real_T
  *in4, const emxArray_real_T *in5, real_T Cpx1, real_T Cpy1, const real_T in8[3],
  const real_T in9[3], const real_T in10[2], const real_T in11[4], real_T Aiq
  [20480], real_T biq[128]);

#endif

/* End of code generation (IqFast_RightStart2V11.h) */
