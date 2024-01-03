/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Fast_MPCV40_form_Step7_types.h
 *
 * Code generation for function 'Fast_MPCV40_form_Step7'
 *
 */

#ifndef FAST_MPCV40_FORM_STEP7_TYPES_H
#define FAST_MPCV40_FORM_STEP7_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  union
  {
    struct {
      real_T dv1[38280];
    } f0;

    struct {
      real_T dv2[38280];
    } f1;
  } u1;

  struct {
    real_T t2[48400];
  } f2;
} Fast_MPCV40_form_Step7StackData;

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

/* End of code generation (Fast_MPCV40_form_Step7_types.h) */
