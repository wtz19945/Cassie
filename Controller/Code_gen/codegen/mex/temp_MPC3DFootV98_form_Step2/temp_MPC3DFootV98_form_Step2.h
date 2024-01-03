/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV98_form_Step2.h
 *
 * Code generation for function 'temp_MPC3DFootV98_form_Step2'
 *
 */

#ifndef TEMP_MPC3DFOOTV98_FORM_STEP2_H
#define TEMP_MPC3DFOOTV98_FORM_STEP2_H

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
#include "temp_MPC3DFootV98_form_Step2_types.h"

/* Function Declarations */
extern void temp_MPC3DFootV98_form_Step2(c_temp_MPC3DFootV98_form_Step2S *SD,
  const emlrtStack *sp, const real_T states[8], real_T Nodes, const real_T r[4],
  const real_T qo[3], const real_T states_ref[63], const real_T MPC_index[2],
  const real_T weights[16], const real_T foot_info[8], const real_T
  foot_obs_info[23], const real_T foot_future_info[20], real_T Aeq[29512],
  real_T beq[124], real_T Aiq[31892], real_T biq[134], real_T H[56644], real_T
  f[238]);

#endif

/* End of code generation (temp_MPC3DFootV98_form_Step2.h) */
