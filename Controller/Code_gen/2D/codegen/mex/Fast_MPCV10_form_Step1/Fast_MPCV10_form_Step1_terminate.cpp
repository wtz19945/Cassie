/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV10_form_Step1_terminate.cpp
 *
 * Code generation for function 'Fast_MPCV10_form_Step1_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV10_form_Step1.h"
#include "Fast_MPCV10_form_Step1_terminate.h"
#include "_coder_Fast_MPCV10_form_Step1_mex.h"
#include "Fast_MPCV10_form_Step1_data.h"

/* Function Definitions */
void Fast_MPCV10_form_Step1_atexit()
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

void Fast_MPCV10_form_Step1_terminate()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Fast_MPCV10_form_Step1_terminate.cpp) */
