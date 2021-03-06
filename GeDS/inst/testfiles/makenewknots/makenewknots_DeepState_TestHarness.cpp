// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// makenewknots_DeepState_TestHarness_generation.cpp and makenewknots_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector makenewknots(NumericVector knots, int degree);

TEST(GeDS_deepstate_test,makenewknots_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector knots  = RcppDeepState_NumericVector();
  qs::c_qsave(knots,"/home/akhila/fuzzer_packages/fuzzedpackages/GeDS/inst/testfiles/makenewknots/inputs/knots.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "knots values: "<< knots << std::endl;
  IntegerVector degree(1);
  degree[0]  = RcppDeepState_int();
  qs::c_qsave(degree,"/home/akhila/fuzzer_packages/fuzzedpackages/GeDS/inst/testfiles/makenewknots/inputs/degree.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "degree values: "<< degree << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    makenewknots(knots,degree[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
