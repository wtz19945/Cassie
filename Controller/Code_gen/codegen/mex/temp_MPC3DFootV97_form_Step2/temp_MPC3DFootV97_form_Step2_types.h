/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV97_form_Step2_types.h
 *
 * Code generation for function 'temp_MPC3DFootV97_form_Step2'
 *
 */

#ifndef TEMP_MPC3DFOOTV97_FORM_STEP2_TYPES_H
#define TEMP_MPC3DFOOTV97_FORM_STEP2_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  union
  {
    struct {
      real_T dv3[29606];
    } f0;

    struct {
      real_T dv4[29606];
    } f1;
  } u1;

  struct {
    real_T t2[51076];
    real_T dv2[25312];
  } f2;
} c_temp_MPC3DFootV97_form_Step2S;

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

/* End of code generation (temp_MPC3DFootV97_form_Step2_types.h) */
