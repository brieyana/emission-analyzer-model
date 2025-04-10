/* Include files */
#include "main.h"
#include "predict_emissions.h"
#include "predict_emissions_terminate.h"
#include "predict_emissions_types.h"
#include "rt_nonfinite.h"
#include <stdio.h>
#include <string.h>

/* Function Declarations */
static boolean_T argInit_boolean_T(void);

static double argInit_real_T(void);

static void
c_argInit_1x3_matlab_internal_c(c_matlab_internal_coder_tabular result[3]);

static d_matlab_internal_coder_tabular c_argInit_matlab_internal_coder(void);

static e_matlab_internal_coder_tabular d_argInit_matlab_internal_coder(void);

static c_matlab_internal_coder_tabular e_argInit_matlab_internal_coder(void);

/* Function Definitions */
static boolean_T argInit_boolean_T(void)
{
  return false;
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void
c_argInit_1x3_matlab_internal_c(c_matlab_internal_coder_tabular result[3])
{
  int idx1;
  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 3; idx1++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[idx1] = e_argInit_matlab_internal_coder();
  }
}

static d_matlab_internal_coder_tabular c_argInit_matlab_internal_coder(void)
{
  d_matlab_internal_coder_tabular result;
  /* Set the value of each structure field.
Change this value to the value that the application requires. */
  result.length = argInit_real_T();
  return result;
}

static e_matlab_internal_coder_tabular d_argInit_matlab_internal_coder(void)
{
  e_matlab_internal_coder_tabular result;
  boolean_T result_tmp;
  /* Set the value of each structure field.
Change this value to the value that the application requires. */
  result_tmp = argInit_boolean_T();
  result.hasUnits = result_tmp;
  result.hasContinuity = result_tmp;
  result.hasCustomProps = result_tmp;
  result.length = argInit_real_T();
  c_argInit_1x3_matlab_internal_c(result.continuity);
  result.hasDescrs = result_tmp;
  return result;
}

static c_matlab_internal_coder_tabular e_argInit_matlab_internal_coder(void)
{
  return unset;
}

int main(int argc, char **argv)
{
  if (argc != 4) {
    printf("ERROR: Incorrect number of arguments provided! Expected 3, got %d.",
           argc);
    return 1;
  }

  table inputRow;

  inputRow.metaDim = c_argInit_matlab_internal_coder();
  inputRow.varDim = d_argInit_matlab_internal_coder();
  // Parse the three arguments into the table
  for (int i = 0; i < 3; i++)
    inputRow.data[i] = strtod(argv[i + 1], NULL);

  cell_wrap_4 coLabel;
  cell_wrap_4 noxLabel;
  double coScores[4], noxScores[4];
  char coClass[10], noxClass[10];

  // Do the prediction
  predict_emissions(&inputRow, &noxLabel, noxScores, &coLabel, coScores);

  // Copy from label to class string with proper size
  int coLabelSize = coLabel.f1.size[1];
  int noxLabelSize = noxLabel.f1.size[1];
  memcpy(coClass, coLabel.f1.data, coLabelSize);
  memcpy(noxClass, noxLabel.f1.data, noxLabelSize);
  // Add null terminator to class strings
  coClass[coLabelSize] = 0;
  noxClass[noxLabelSize] = 0;

  printf(
      "{\"CO\": {\"Class\": \"%s\", \"Confidence\": {\"Low\": %lf, \"Moderate\": %lf, \"High\": %lf, \"Very High\": %lf}}, \
\"NOX\": {\"Class\": \"%s\", \"Confidence\": {\"Low\": %lf, \"Moderate\": %lf, \"High\": %lf, \"Very High\": %lf}}}",
      coClass, coScores[1], coScores[2], coScores[0], coScores[3], noxClass,
      noxScores[1], noxScores[2], noxScores[0], noxScores[3]);

  /* Terminate the application.
You do not need to do this more than one time. */
  predict_emissions_terminate();
  return 0;
}
