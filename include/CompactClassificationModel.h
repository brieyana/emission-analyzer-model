/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationModel.h
 *
 * Code generation for function 'CompactClassificationModel'
 *
 */

#ifndef COMPACTCLASSIFICATIONMODEL_H
#define COMPACTCLASSIFICATIONMODEL_H

/* Include files */
#include "predict_emissions_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void c_CompactClassificationModel_ma(const int obj_ClassNamesLength[4],
                                     const double obj_Prior[4],
                                     const double scores[4],
                                     cell_wrap_4 *labels);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (CompactClassificationModel.h) */
