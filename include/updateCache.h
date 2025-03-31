/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * updateCache.h
 *
 * Code generation for function 'updateCache'
 *
 */

#ifndef UPDATECACHE_H
#define UPDATECACHE_H

/* Include files */
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
/* End of code generation (updateCache.h) */
