/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV30_form_Step1_mex.cpp
 *
 * Code generation for function '_coder_Fast_MPCV30_form_Step1_mex'
 *
 */

/* Include files */
#include "Fast_MPCV30_form_Step1.h"
#include "_coder_Fast_MPCV30_form_Step1_mex.h"
#include "Fast_MPCV30_form_Step1_terminate.h"
#include "_coder_Fast_MPCV30_form_Step1_api.h"
#include "Fast_MPCV30_form_Step1_initialize.h"
#include "Fast_MPCV30_form_Step1_data.h"

/* Function Declarations */
static void c_Fast_MPCV30_form_Step1_mexFun(Fast_MPCV30_form_Step1StackData *SD,
  int32_T nlhs, mxArray *plhs[6], int32_T nrhs, const mxArray *prhs[9]);

/* Function Definitions */
static void c_Fast_MPCV30_form_Step1_mexFun(Fast_MPCV30_form_Step1StackData *SD,
  int32_T nlhs, mxArray *plhs[6], int32_T nrhs, const mxArray *prhs[9])
{
  int32_T n;
  const mxArray *inputs[9];
  const mxArray *outputs[6];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        22, "Fast_MPCV30_form_Step1");
  }

  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "Fast_MPCV30_form_Step1");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  Fast_MPCV30_form_Step1_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Fast_MPCV30_form_Step1_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  Fast_MPCV30_form_Step1StackData *c_Fast_MPCV30_form_Step1StackDa = NULL;
  c_Fast_MPCV30_form_Step1StackDa = (Fast_MPCV30_form_Step1StackData *)
    emlrtMxCalloc(1, 1U * sizeof(Fast_MPCV30_form_Step1StackData));
  mexAtExit(Fast_MPCV30_form_Step1_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Fast_MPCV30_form_Step1_initialize();

  /* Dispatch the entry-point. */
  c_Fast_MPCV30_form_Step1_mexFun(c_Fast_MPCV30_form_Step1StackDa, nlhs, plhs,
    nrhs, prhs);
  emlrtMxFree(c_Fast_MPCV30_form_Step1StackDa);
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Fast_MPCV30_form_Step1_mex.cpp) */
