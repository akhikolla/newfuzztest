// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// circlePackLayout_DeepState_TestHarness_generation.cpp and circlePackLayout_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix circlePackLayout(IntegerVector parent, NumericVector weight);

TEST(ggraph_deepstate_test,circlePackLayout_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector parent  = RcppDeepState_IntegerVector();
  std::string parent_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/circlePackLayout/AFL_circlePackLayout/afl_inputs/" + std::to_string(t) + "_parent.qs";
  qs::c_qsave(parent,parent_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parent values: "<< parent << std::endl;
  NumericVector weight  = RcppDeepState_NumericVector();
  std::string weight_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/circlePackLayout/AFL_circlePackLayout/afl_inputs/" + std::to_string(t) + "_weight.qs";
  qs::c_qsave(weight,weight_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weight values: "<< weight << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    circlePackLayout(parent,weight);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
