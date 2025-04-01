/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rt_nonfinite.c
 *
 * Code generation for function 'predict_emissions'
 *
 */

/*
 * Abstract:
 *      MATLAB for code generation function to initialize non-finites,
 *      (Inf, NaN and -Inf).
 */
/* Include files */
#include "rt_nonfinite.h"
#include <math.h>

#if defined(__ICL) && __ICL == 1700
#pragma warning(disable : 264)
#endif

#if defined(__ICL) && __ICL == 1700
#pragma warning(default : 264)
#endif

/*
 * Function: rtIsInf ==================================================
 *  Abstract:
 *  Test if value is infinite
 */
boolean_T rtIsInf(real_T value)
{
  return (isinf(value) != 0U);
}

/*
 * Function: rtIsInfF =================================================
 *  Abstract:
 *  Test if single-precision value is infinite
 */
boolean_T rtIsInfF(real32_T value)
{
  return (isinf((real_T)value) != 0U);
}

/*
 * Function: rtIsNaN ==================================================
 *  Abstract:
 *  Test if value is not a number
 */
boolean_T rtIsNaN(real_T value)
{
  return (isnan(value) != 0U);
}

/*
 * Function: rtIsNaNF =================================================
 *  Abstract:
 *  Test if single-precision value is not a number
 */
boolean_T rtIsNaNF(real32_T value)
{
  return (isnan((real_T)value) != 0U);
}

/* End of code generation (rt_nonfinite.c) */
