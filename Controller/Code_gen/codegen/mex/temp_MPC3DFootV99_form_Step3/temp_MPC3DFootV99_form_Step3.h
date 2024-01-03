/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV99_form_Step3.h
 *
 * Code generation for function 'temp_MPC3DFootV99_form_Step3'
 *
 */

#ifndef TEMP_MPC3DFOOTV99_FORM_STEP3_H
#define TEMP_MPC3DFOOTV99_FORM_STEP3_H

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
#include "temp_MPC3DFootV99_form_Step3_types.h"

/* Function Declarations */
extern void temp_MPC3DFootV99_form_Step3(c_temp_MPC3DFootV99_form_Step3S *SD,
  const emlrtStack *sp, const real_T states[8], real_T Nodes, const real_T r[4],
  const real_T qo[3], const real_T states_ref[63], const real_T MPC_index[2],
  const real_T weights[17], const real_T foot_info[8], const real_T
  foot_obs_info[23], const real_T foot_future_info[24], real_T Aeq[30008],
  real_T beq[124], real_T Aiq[31702], real_T biq[131], real_T H[58564], real_T
  f[242]);

#endif

/* End of code generation (temp_MPC3DFootV99_form_Step3.h) */
