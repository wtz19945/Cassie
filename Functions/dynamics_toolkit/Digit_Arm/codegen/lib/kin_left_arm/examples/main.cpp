/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.cpp
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include files */
#include "rt_nonfinite.h"
#include "kin_left_arm.h"
#include "main.h"
#include "kin_left_arm_terminate.h"
#include "kin_left_arm_initialize.h"

/* Function Declarations */
static void argInit_10x1_real_T(double result[10]);
static double argInit_real_T();
static void main_kin_left_arm();

/* Function Definitions */
static void argInit_10x1_real_T(double result[10])
{
  int idx0;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 10; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

static double argInit_real_T()
{
  return 0.0;
}

static void main_kin_left_arm()
{
  double dv1[10];
  double p_left_hand[3];
  double Jp_left_hand[30];

  /* Initialize function 'kin_left_arm' input arguments. */
  /* Initialize function input argument 'q'. */
  /* Call the entry-point 'kin_left_arm'. */
  argInit_10x1_real_T(dv1);
  kin_left_arm(dv1, p_left_hand, Jp_left_hand);
}

int main(int, const char * const [])
{
  /* Initialize the application.
     You do not need to do this more than one time. */
  kin_left_arm_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_kin_left_arm();

  /* Terminate the application.
     You do not need to do this more than one time. */
  kin_left_arm_terminate();
  return 0;
}

/* End of code generation (main.cpp) */
