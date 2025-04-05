/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: updateCache.h
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 02-Apr-2025 20:52:33
 */

#ifndef UPDATECACHE_H
#define UPDATECACHE_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void updateCache(const double learnerscore[4], double cachedScore[4],
                 double *cachedWeights, boolean_T *cached,
                 const char combinerName[15], double score[4]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for updateCache.h
 *
 * [EOF]
 */
