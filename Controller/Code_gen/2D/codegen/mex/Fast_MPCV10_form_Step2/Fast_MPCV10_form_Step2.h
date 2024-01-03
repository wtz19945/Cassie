/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV10_form_Step2.h
 *
 * Code generation for function 'Fast_MPCV10_form_Step2'
 *
 */

#ifndef FAST_MPCV10_FORM_STEP2_H
#define FAST_MPCV10_FORM_STEP2_H

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
#include "Fast_MPCV10_form_Step2_types.h"

/* Function Declarations */
extern void Fast_MPCV10_form_Step2(Fast_MPCV10_form_Step2StackData *SD, const
  emlrtStack *sp, const real_T states[6], real_T Nodes, const real_T r[2], const
  real_T qo[2], const real_T states_ref[10], const real_T MPC_index[2], const
  real_T weights[10], const real_T foot_info[8], const real_T Obs_Info[4],
  real_T Aeq[12160], real_T beq[76], real_T Aiq[20480], real_T biq[128], real_T
  H[25600], real_T f[160]);

#endif

/* End of code generation (Fast_MPCV10_form_Step2.h) */