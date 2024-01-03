/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temp_MPC3DFootV98_form_Step3_types.h
 *
 * Code generation for function 'temp_MPC3DFootV98_form_Step3'
 *
 */

#ifndef TEMP_MPC3DFOOTV98_FORM_STEP3_TYPES_H
#define TEMP_MPC3DFOOTV98_FORM_STEP3_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  union
  {
    struct {
      real_T dv4[30464];
    } f0;

    struct {
      real_T dv3[29512];
    } f1;

    struct {
      real_T dv5[30464];
    } f2;
  } u1;

  struct {
    real_T t2[56644];
    real_T dv2[29512];
  } f3;
} c_temp_MPC3DFootV98_form_Step3S;

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

/* End of code generation (temp_MPC3DFootV98_form_Step3_types.h) */