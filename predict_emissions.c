/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predict_emissions.c
 *
 * Code generation for function 'predict_emissions'
 *
 */

/* Include files */
#include "predict_emissions.h"
#include "CompactClassificationModel.h"
#include "CompactEnsemble.h"
#include "predict_emissions_data.h"
#include "predict_emissions_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void predict_emissions(const table *inputData, cell_wrap_4 noxLabel[1],
                       double noxScores[4], cell_wrap_4 coLabel[1],
                       double coScores[4])
{
  double coMdl_Prior[4];
  double Xout0[3];
  double b_Xout0[3];
  int i;
  boolean_T coMdl_IsCached[30];
  boolean_T noxMdl_IsCached[30];
  coMdl_Prior[0] = 0.035952063914780293;
  coMdl_Prior[1] = 0.72703062583222366;
  coMdl_Prior[2] = 0.21970705725699069;
  coMdl_Prior[3] = 0.017310252996005325;
  for (i = 0; i < 30; i++) {
    coMdl_IsCached[i] = false;
    noxMdl_IsCached[i] = false;
  }
  double noxMdl_Prior[4];
  noxMdl_Prior[0] = 0.31557922769640478;
  noxMdl_Prior[1] = 0.017310252996005325;
  noxMdl_Prior[2] = 0.64980026631158461;
  noxMdl_Prior[3] = 0.017310252996005325;
  Xout0[0] = inputData->data[0];
  Xout0[1] = inputData->data[1];
  Xout0[2] = inputData->data[2];
  CompactEnsemble_ensemblePredict(coMdl_IsCached, Xout0, coScores);
  c_CompactClassificationModel_ma(iv, coMdl_Prior, coScores, &coLabel[0]);
  b_Xout0[0] = inputData->data[0];
  b_Xout0[1] = inputData->data[1];
  b_Xout0[2] = inputData->data[2];
  b_CompactEnsemble_ensemblePredi(noxMdl_IsCached, b_Xout0, noxScores);
  c_CompactClassificationModel_ma(iv, noxMdl_Prior, noxScores, &noxLabel[0]);
}

/* End of code generation (predict_emissions.c) */
