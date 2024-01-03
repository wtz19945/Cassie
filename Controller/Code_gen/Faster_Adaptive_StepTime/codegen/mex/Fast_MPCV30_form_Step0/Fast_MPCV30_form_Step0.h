/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV30_form_Step0.h
 *
 * Code generation for function 'Fast_MPCV30_form_Step0'
 *
 */

#ifndef FAST_MPCV30_FORM_STEP0_H
#define FAST_MPCV30_FORM_STEP0_H

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
#include "Fast_MPCV30_form_Step0_types.h"

/* Function Declarations */
extern void Fast_MPCV30_form_Step0(Fast_MPCV30_form_Step0StackData *SD, const
  emlrtStack *sp, const real_T states[6], real_T Nodes, const real_T r[3], const
  real_T qo[4], const real_T states_ref[10], const real_T MPC_index[2], const
  real_T weights[10], const real_T foot_info[8], const real_T Obs_Info[4],
  real_T Aeq[13600], real_T beq[80], real_T Aiq[24990], real_T biq[147], real_T
  H[28900], real_T f[170]);

#endif

/* End of code generation (Fast_MPCV30_form_Step0.h) */
