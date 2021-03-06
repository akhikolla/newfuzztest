// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// addRowWiseC_DeepState_TestHarness_generation.cpp and addRowWiseC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix addRowWiseC(NumericMatrix WeightVectors, NumericVector DataPoint);

TEST(GeneralizedUmatrix_deepstate_test,addRowWiseC_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix WeightVectors  = RcppDeepState_NumericMatrix();
  qs::c_qsave(WeightVectors,"/home/akhila/fuzzer_packages/fuzzedpackages/GeneralizedUmatrix/inst/testfiles/addRowWiseC/inputs/WeightVectors.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "WeightVectors values: "<< WeightVectors << std::endl;
  NumericVector DataPoint  = RcppDeepState_NumericVector();
  qs::c_qsave(DataPoint,"/home/akhila/fuzzer_packages/fuzzedpackages/GeneralizedUmatrix/inst/testfiles/addRowWiseC/inputs/DataPoint.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "DataPoint values: "<< DataPoint << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    addRowWiseC(WeightVectors,DataPoint);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
