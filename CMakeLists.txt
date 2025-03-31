cmake_minimum_required(VERSION 3.28.0)

project(predict_emissions)

add_executable(predict_emissions
CompactClassificationModel.c
CompactClassificationTree.c
CompactEnsemble.c
main.c
minOrMax.c
predictOneWithCache.c
predict_emissions.c
predict_emissions_data.c
predict_emissions_initialize.c
predict_emissions_terminate.c
rtGetInf.c
rtGetNaN.c
rt_nonfinite.c
updateCache.c
)

target_include_directories(predict_emissions PUBLIC include)

