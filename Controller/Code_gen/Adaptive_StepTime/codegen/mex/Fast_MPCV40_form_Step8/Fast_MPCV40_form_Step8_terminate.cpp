/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV40_form_Step8_terminate.cpp
 *
 * Code generation for function 'Fast_MPCV40_form_Step8_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV40_form_Step8.h"
#include "Fast_MPCV40_form_Step8_terminate.h"
#include "_coder_Fast_MPCV40_form_Step8_mex.h"
#include "Fast_MPCV40_form_Step8_data.h"

/* Function Definitions */
void Fast_MPCV40_form_Step8_atexit()
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

void Fast_MPCV40_form_Step8_terminate()
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Fast_MPCV40_form_Step8_terminate.cpp) */
