/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: predict_emissions.c
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 02-Apr-2025 20:52:33
 */

/* Include Files */
#include "predict_emissions.h"
#include "CompactEnsemble.h"
#include "predict_emissions_internal_types.h"
#include "predict_emissions_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const table *inputData
 *                cell_wrap_4 noxLabel[1]
 *                double noxScores[4]
 *                cell_wrap_4 coLabel[1]
 *                double coScores[4]
 * Return Type  : void
 */
void predict_emissions(const table *inputData, cell_wrap_4 noxLabel[1],
                       double noxScores[4], cell_wrap_4 coLabel[1],
                       double coScores[4])
{
  double expl_temp[30];
  double b_expl_temp[16];
  double coMdl_Prior[4];
  double noxMdl_Prior[4];
  int coMdl_ClassNamesLength[4];
  int noxMdl_ClassNamesLength[4];
  boolean_T coMdl_IsCached[30];
  boolean_T noxMdl_IsCached[30];
  boolean_T coMdl_ClassLogicalIndices[4];
  c_CompactClassificationEnsemble(coMdl_IsCached, expl_temp,
                                  coMdl_ClassNamesLength, coMdl_Prior,
                                  coMdl_ClassLogicalIndices, b_expl_temp);
  d_CompactClassificationEnsemble(noxMdl_IsCached, expl_temp,
                                  noxMdl_ClassNamesLength, noxMdl_Prior,
                                  coMdl_ClassLogicalIndices, b_expl_temp);
  e_CompactClassificationEnsemble(coMdl_IsCached, coMdl_ClassNamesLength,
                                  coMdl_Prior, inputData->data, &coLabel[0],
                                  coScores);
  f_CompactClassificationEnsemble(noxMdl_IsCached, noxMdl_ClassNamesLength,
                                  noxMdl_Prior, inputData->data, &noxLabel[0],
                                  noxScores);
}

/*
 * File trailer for predict_emissions.c
 *
 * [EOF]
 */
