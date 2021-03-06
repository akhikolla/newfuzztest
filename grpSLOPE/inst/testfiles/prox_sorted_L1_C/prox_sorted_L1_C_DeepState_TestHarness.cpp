// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// prox_sorted_L1_C_DeepState_TestHarness_generation.cpp and prox_sorted_L1_C_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector prox_sorted_L1_C(NumericVector y, NumericVector lambda);

TEST(grpSLOPE_deepstate_test,prox_sorted_L1_C_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/grpSLOPE/inst/testfiles/prox_sorted_L1_C/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector lambda  = RcppDeepState_NumericVector();
  qs::c_qsave(lambda,"/home/akhila/fuzzer_packages/fuzzedpackages/grpSLOPE/inst/testfiles/prox_sorted_L1_C/inputs/lambda.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lambda values: "<< lambda << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    prox_sorted_L1_C(y,lambda);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
