/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: CompactClassificationEnsemble.h
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 02-Apr-2025 20:52:33
 */

#ifndef COMPACTCLASSIFICATIONENSEMBLE_H
#define COMPACTCLASSIFICATIONENSEMBLE_H

/* Include Files */
#include "predict_emissions_internal_types.h"
#include "predict_emissions_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
c_classreg_learning_coderutils_ c_CompactClassificationEnsemble(
    boolean_T obj_IsCached[30], double obj_LearnerWeights[30],
    int obj_ClassNamesLength[4], double obj_Prior[4],
    boolean_T obj_ClassLogicalIndices[4], double obj_Cost[16]);

c_classreg_learning_coderutils_ d_CompactClassificationEnsemble(
    boolean_T obj_IsCached[30], double obj_LearnerWeights[30],
    int obj_ClassNamesLength[4], double obj_Prior[4],
    boolean_T obj_ClassLogicalIndices[4], double obj_Cost[16]);

void e_CompactClassificationEnsemble(const boolean_T obj_IsCached[30],
                                     const int obj_ClassNamesLength[4],
                                     const double obj_Prior[4],
                                     const double Xin_data[3],
                                     cell_wrap_4 *labels, double score[4]);

void f_CompactClassificationEnsemble(const boolean_T obj_IsCached[30],
                                     const int obj_ClassNamesLength[4],
                                     const double obj_Prior[4],
                                     const double Xin_data[3],
                                     cell_wrap_4 *labels, double score[4]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactClassificationEnsemble.h
 *
 * [EOF]
 */
