/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: predict_emissions.h
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 02-Apr-2025 20:52:33
 */

#ifndef PREDICT_EMISSIONS_H
#define PREDICT_EMISSIONS_H

/* Include Files */
#include "predict_emissions_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void predict_emissions(const table *inputData, cell_wrap_4 noxLabel[1],
                              double noxScores[4], cell_wrap_4 coLabel[1],
                              double coScores[4]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for predict_emissions.h
 *
 * [EOF]
 */
