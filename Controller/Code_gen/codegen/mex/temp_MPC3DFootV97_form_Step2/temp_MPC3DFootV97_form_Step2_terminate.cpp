/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV97_form_Step2_terminate.cpp
 *
 * Code generation for function 'temp_MPC3DFootV97_form_Step2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV97_form_Step2.h"
#include "temp_MPC3DFootV97_form_Step2_terminate.h"
#include "_coder_temp_MPC3DFootV97_form_Step2_mex.h"
#include "temp_MPC3DFootV97_form_Step2_data.h"

/* Function Definitions */
void temp_MPC3DFootV97_form_Step2_atexit()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void temp_MPC3DFootV97_form_Step2_terminate()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (temp_MPC3DFootV97_form_Step2_terminate.cpp) */
