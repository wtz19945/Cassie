/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV97_form_Step1.h
 *
 * Code generation for function 'temp_MPC3DFootV97_form_Step1'
 *
 */

#ifndef TEMP_MPC3DFOOTV97_FORM_STEP1_H
#define TEMP_MPC3DFOOTV97_FORM_STEP1_H

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
#include "temp_MPC3DFootV97_form_Step1_types.h"

/* Function Declarations */
extern void temp_MPC3DFootV97_form_Step1(c_temp_MPC3DFootV97_form_Step1S *SD,
  const emlrtStack *sp, const real_T states[8], real_T Nodes, const real_T r[4],
  const real_T qo[3], const real_T states_ref[58], const real_T MPC_index[2],
  const real_T weights[16], const real_T foot_info[8], const real_T
  foot_obs_info[23], real_T Aeq[25312], real_T beq[112], real_T Aiq[30962],
  real_T biq[137], real_T H[51076], real_T f[226]);

#endif

/* End of code generation (temp_MPC3DFootV97_form_Step1.h) */
