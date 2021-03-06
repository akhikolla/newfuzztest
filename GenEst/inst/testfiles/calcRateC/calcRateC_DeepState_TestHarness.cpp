// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// calcRateC_DeepState_TestHarness_generation.cpp and calcRateC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix calcRateC(NumericMatrix M, NumericMatrix Aj, NumericVector days, NumericMatrix searches);

TEST(GenEst_deepstate_test,calcRateC_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix M  = RcppDeepState_NumericMatrix();
  qs::c_qsave(M,"/home/akhila/fuzzer_packages/fuzzedpackages/GenEst/inst/testfiles/calcRateC/inputs/M.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "M values: "<< M << std::endl;
  NumericMatrix Aj  = RcppDeepState_NumericMatrix();
  qs::c_qsave(Aj,"/home/akhila/fuzzer_packages/fuzzedpackages/GenEst/inst/testfiles/calcRateC/inputs/Aj.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "Aj values: "<< Aj << std::endl;
  NumericVector days  = RcppDeepState_NumericVector();
  qs::c_qsave(days,"/home/akhila/fuzzer_packages/fuzzedpackages/GenEst/inst/testfiles/calcRateC/inputs/days.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "days values: "<< days << std::endl;
  NumericMatrix searches  = RcppDeepState_NumericMatrix();
  qs::c_qsave(searches,"/home/akhila/fuzzer_packages/fuzzedpackages/GenEst/inst/testfiles/calcRateC/inputs/searches.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "searches values: "<< searches << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    calcRateC(M,Aj,days,searches);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
