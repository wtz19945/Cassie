/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV12_form_Step3_types.h
 *
 * Code generation for function 'Fast_MPCV12_form_Step3'
 *
 */

#ifndef FAST_MPCV12_FORM_STEP3_TYPES_H
#define FAST_MPCV12_FORM_STEP3_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  struct {
    real_T t2[25600];
  } f0;
} Fast_MPCV12_form_Step3StackData;

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/
#endif

/* End of code generation (Fast_MPCV12_form_Step3_types.h) */
