/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV97_form_Step1_initialize.cpp
 *
 * Code generation for function 'temp_MPC3DFootV97_form_Step1_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV97_form_Step1.h"
#include "temp_MPC3DFootV97_form_Step1_initialize.h"
#include "_coder_temp_MPC3DFootV97_form_Step1_mex.h"
#include "temp_MPC3DFootV97_form_Step1_data.h"

/* Function Definitions */
void temp_MPC3DFootV97_form_Step1_initialize()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (temp_MPC3DFootV97_form_Step1_initialize.cpp) */
