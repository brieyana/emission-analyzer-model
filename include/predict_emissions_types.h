/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predict_emissions_types.h
 *
 * Code generation for function 'predict_emissions'
 *
 */

#ifndef PREDICT_EMISSIONS_TYPES_H
#define PREDICT_EMISSIONS_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef enum_c_matlab_internal_coder_tabular
#define enum_c_matlab_internal_coder_tabular
enum c_matlab_internal_coder_tabular
{
  unset = 0, /* Default value */
  continuous,
  step,
  event
};
#endif /* enum_c_matlab_internal_coder_tabular */
#ifndef typedef_c_matlab_internal_coder_tabular
#define typedef_c_matlab_internal_coder_tabular
typedef enum c_matlab_internal_coder_tabular c_matlab_internal_coder_tabular;
#endif /* typedef_c_matlab_internal_coder_tabular */

#ifndef typedef_d_matlab_internal_coder_tabular
#define typedef_d_matlab_internal_coder_tabular
typedef struct {
  double length;
} d_matlab_internal_coder_tabular;
#endif /* typedef_d_matlab_internal_coder_tabular */

#ifndef struct_emxArray_char_T_1x9
#define struct_emxArray_char_T_1x9
struct emxArray_char_T_1x9 {
  char data[9];
  int size[2];
};
#endif /* struct_emxArray_char_T_1x9 */
#ifndef typedef_emxArray_char_T_1x9
#define typedef_emxArray_char_T_1x9
typedef struct emxArray_char_T_1x9 emxArray_char_T_1x9;
#endif /* typedef_emxArray_char_T_1x9 */

#ifndef typedef_cell_wrap_4
#define typedef_cell_wrap_4
typedef struct {
  emxArray_char_T_1x9 f1;
} cell_wrap_4;
#endif /* typedef_cell_wrap_4 */

#ifndef typedef_e_matlab_internal_coder_tabular
#define typedef_e_matlab_internal_coder_tabular
typedef struct {
  double length;
  c_matlab_internal_coder_tabular continuity[3];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
  boolean_T hasCustomProps;
} e_matlab_internal_coder_tabular;
#endif /* typedef_e_matlab_internal_coder_tabular */

#ifndef typedef_table
#define typedef_table
typedef struct {
  d_matlab_internal_coder_tabular metaDim;
  e_matlab_internal_coder_tabular varDim;
  double data[3];
} table;
#endif /* typedef_table */

#endif
/* End of code generation (predict_emissions_types.h) */
