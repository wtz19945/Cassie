/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV30_form_Step0_types.h
 *
 * Code generation for function 'Fast_MPCV30_form_Step0'
 *
 */

#ifndef FAST_MPCV30_FORM_STEP0_TYPES_H
#define FAST_MPCV30_FORM_STEP0_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  union
  {
    struct {
      real_T dv1[24990];
    } f0;

    struct {
      real_T dv2[24990];
    } f1;
  } u1;

  struct {
    real_T t2[28900];
  } f2;
} Fast_MPCV30_form_Step0StackData;

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

/* End of code generation (Fast_MPCV30_form_Step0_types.h) */
