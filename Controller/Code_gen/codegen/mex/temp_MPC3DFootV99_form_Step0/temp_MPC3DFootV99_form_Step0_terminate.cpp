/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV99_form_Step0_terminate.cpp
 *
 * Code generation for function 'temp_MPC3DFootV99_form_Step0_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV99_form_Step0.h"
#include "temp_MPC3DFootV99_form_Step0_terminate.h"
#include "_coder_temp_MPC3DFootV99_form_Step0_mex.h"
#include "temp_MPC3DFootV99_form_Step0_data.h"

/* Function Definitions */
void temp_MPC3DFootV99_form_Step0_atexit()
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

void temp_MPC3DFootV99_form_Step0_terminate()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (temp_MPC3DFootV99_form_Step0_terminate.cpp) */