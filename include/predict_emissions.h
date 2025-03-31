/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predict_emissions.h
 *
 * Code generation for function 'predict_emissions'
 *
 */

#ifndef PREDICT_EMISSIONS_H
#define PREDICT_EMISSIONS_H

/* Include files */
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
/* End of code generation (predict_emissions.h) */
