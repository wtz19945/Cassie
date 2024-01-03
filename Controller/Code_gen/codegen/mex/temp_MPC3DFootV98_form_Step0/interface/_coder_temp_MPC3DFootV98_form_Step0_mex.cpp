/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_temp_MPC3DFootV98_form_Step0_mex.cpp
 *
 * Code generation for function '_coder_temp_MPC3DFootV98_form_Step0_mex'
 *
 */

/* Include files */
#include "temp_MPC3DFootV98_form_Step0.h"
#include "_coder_temp_MPC3DFootV98_form_Step0_mex.h"
#include "temp_MPC3DFootV98_form_Step0_terminate.h"
#include "_coder_temp_MPC3DFootV98_form_Step0_api.h"
#include "temp_MPC3DFootV98_form_Step0_initialize.h"
#include "temp_MPC3DFootV98_form_Step0_data.h"

/* Function Declarations */
static void c_temp_MPC3DFootV98_form_Step0_(c_temp_MPC3DFootV98_form_Step0S *SD,
  int32_T nlhs, mxArray *plhs[6], int32_T nrhs, const mxArray *prhs[10]);

/* Function Definitions */
static void c_temp_MPC3DFootV98_form_Step0_(c_temp_MPC3DFootV98_form_Step0S *SD,
  int32_T nlhs, mxArray *plhs[6], int32_T nrhs, const mxArray *prhs[10])
{
  int32_T n;
  const mxArray *inputs[10];
  const mxArray *outputs[6];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        28, "temp_MPC3DFootV98_form_Step0");
  }

  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 28,
                        "temp_MPC3DFootV98_form_Step0");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  temp_MPC3DFootV98_form_Step0_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  temp_MPC3DFootV98_form_Step0_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  c_temp_MPC3DFootV98_form_Step0S *d_temp_MPC3DFootV98_form_Step0S = NULL;
  d_temp_MPC3DFootV98_form_Step0S = (c_temp_MPC3DFootV98_form_Step0S *)
    emlrtMxCalloc(1, 1U * sizeof(c_temp_MPC3DFootV98_form_Step0S));
  mexAtExit(temp_MPC3DFootV98_form_Step0_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  temp_MPC3DFootV98_form_Step0_initialize();

  /* Dispatch the entry-point. */
  c_temp_MPC3DFootV98_form_Step0_(d_temp_MPC3DFootV98_form_Step0S, nlhs, plhs,
    nrhs, prhs);
  emlrtMxFree(d_temp_MPC3DFootV98_form_Step0S);
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_temp_MPC3DFootV98_form_Step0_mex.cpp) */
