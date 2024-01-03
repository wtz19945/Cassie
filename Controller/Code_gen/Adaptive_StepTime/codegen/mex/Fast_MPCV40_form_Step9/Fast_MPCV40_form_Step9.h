/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV40_form_Step9.h
 *
 * Code generation for function 'Fast_MPCV40_form_Step9'
 *
 */

#ifndef FAST_MPCV40_FORM_STEP9_H
#define FAST_MPCV40_FORM_STEP9_H

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
#include "Fast_MPCV40_form_Step9_types.h"

/* Function Declarations */
extern void Fast_MPCV40_form_Step9(Fast_MPCV40_form_Step9StackData *SD, const
  emlrtStack *sp, const real_T states[6], real_T Nodes, const real_T r[3], const
  real_T qo[4], const real_T states_ref[10], const real_T MPC_index[2], const
  real_T weights[10], const real_T foot_info[8], const real_T Obs_Info[4],
  real_T Aeq[22000], real_T beq[100], real_T Aiq[36520], real_T biq[166], real_T
  H[48400], real_T f[220]);

#endif

/* End of code generation (Fast_MPCV40_form_Step9.h) */
