/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rt_nonfinite.h
 *
 * Code generation for function 'predict_emissions'
 *
 */

#ifndef RT_NONFINITE_H
#define RT_NONFINITE_H

/* Include files */
#include "rtwtypes.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

#define rtNaN (real_T) NAN;
#define rtInf (real_T) INFINITY;
#define rtMinusInf -(real_T)INFINITY;
#define rtNaNF (real32_T) NAN;
#define rtInfF (real32_T) INFINITY;
#define rtMinusInfF -(real32_T)INFINITY;

extern boolean_T rtIsInf(real_T value);
extern boolean_T rtIsInfF(real32_T value);
extern boolean_T rtIsNaN(real_T value);
extern boolean_T rtIsNaNF(real32_T value);

#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (rt_nonfinite.h) */
