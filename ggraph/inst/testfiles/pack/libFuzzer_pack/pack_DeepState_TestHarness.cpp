// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// pack_DeepState_TestHarness_generation.cpp and pack_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix pack(NumericVector areas);

TEST(ggraph_deepstate_test,pack_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector areas  = RcppDeepState_NumericVector();
  std::string areas_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/pack/libFuzzer_pack/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_areas.qs";
  qs::c_qsave(areas,areas_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "areas values: "<< areas << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    pack(areas);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
