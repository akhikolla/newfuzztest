// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// makeRatSplines_DeepState_TestHarness_generation.cpp and makeRatSplines_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix makeRatSplines(NumericMatrix matrice, NumericVector h);

TEST(GeDS_deepstate_test,makeRatSplines_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix matrice  = RcppDeepState_NumericMatrix();
  qs::c_qsave(matrice,"/home/akhila/fuzzer_packages/fuzzedpackages/GeDS/inst/testfiles/makeRatSplines/inputs/matrice.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "matrice values: "<< matrice << std::endl;
  NumericVector h  = RcppDeepState_NumericVector();
  qs::c_qsave(h,"/home/akhila/fuzzer_packages/fuzzedpackages/GeDS/inst/testfiles/makeRatSplines/inputs/h.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "h values: "<< h << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    makeRatSplines(matrice,h);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
