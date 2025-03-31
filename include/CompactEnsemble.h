/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactEnsemble.h
 *
 * Code generation for function 'CompactEnsemble'
 *
 */

#ifndef COMPACTENSEMBLE_H
#define COMPACTENSEMBLE_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void CompactEnsemble_ensemblePredict(const boolean_T obj_IsCached[30],
                                     const double X[3], double score[4]);

void b_CompactEnsemble_ensemblePredi(const boolean_T obj_IsCached[30],
                                     const double X[3], double score[4]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (CompactEnsemble.h) */
