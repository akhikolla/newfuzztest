// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// splitTreemap_DeepState_TestHarness_generation.cpp and splitTreemap_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix splitTreemap(IntegerVector parent, IntegerVector order, NumericVector weight, double width, double height);

TEST(ggraph_deepstate_test,splitTreemap_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector parent  = RcppDeepState_IntegerVector();
  std::string parent_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/libFuzzer_splitTreemap/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_parent.qs";
  qs::c_qsave(parent,parent_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "parent values: "<< parent << std::endl;
  IntegerVector order  = RcppDeepState_IntegerVector();
  std::string order_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/libFuzzer_splitTreemap/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_order.qs";
  qs::c_qsave(order,order_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "order values: "<< order << std::endl;
  NumericVector weight  = RcppDeepState_NumericVector();
  std::string weight_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/libFuzzer_splitTreemap/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_weight.qs";
  qs::c_qsave(weight,weight_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weight values: "<< weight << std::endl;
  NumericVector width(1);
  width[0]  = RcppDeepState_double();
  std::string width_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/libFuzzer_splitTreemap/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_width.qs";
  qs::c_qsave(width,width_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "width values: "<< width << std::endl;
  NumericVector height(1);
  height[0]  = RcppDeepState_double();
  std::string height_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/splitTreemap/libFuzzer_splitTreemap/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_height.qs";
  qs::c_qsave(height,height_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "height values: "<< height << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    splitTreemap(parent,order,weight,width[0],height[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
