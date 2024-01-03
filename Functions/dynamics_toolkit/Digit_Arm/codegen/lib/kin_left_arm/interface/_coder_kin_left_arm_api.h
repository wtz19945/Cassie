/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_kin_left_arm_api.h
 *
 * Code generation for function '_coder_kin_left_arm_api'
 *
 */

#ifndef _CODER_KIN_LEFT_ARM_API_H
#define _CODER_KIN_LEFT_ARM_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_kin_left_arm_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void kin_left_arm(real_T q[10], real_T p_left_hand[3], real_T
  Jp_left_hand[30]);
extern void kin_left_arm_api(const mxArray * const prhs[1], const mxArray *plhs
  [2]);
extern void kin_left_arm_atexit(void);
extern void kin_left_arm_initialize(void);
extern void kin_left_arm_terminate(void);
extern void kin_left_arm_xil_terminate(void);

#endif

/* End of code generation (_coder_kin_left_arm_api.h) */
