// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cut_lines_DeepState_TestHarness_generation.cpp and cut_lines_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List cut_lines(NumericVector x, NumericVector y, IntegerVector id, NumericVector start_width, NumericVector start_height, NumericVector end_width, NumericVector end_height, CharacterVector start_type, CharacterVector end_type);

TEST(ggraph_deepstate_test,cut_lines_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  std::string y_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_y.qs";
  qs::c_qsave(y,y_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  IntegerVector id  = RcppDeepState_IntegerVector();
  std::string id_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_id.qs";
  qs::c_qsave(id,id_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "id values: "<< id << std::endl;
  NumericVector start_width  = RcppDeepState_NumericVector();
  std::string start_width_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_start_width.qs";
  qs::c_qsave(start_width,start_width_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "start_width values: "<< start_width << std::endl;
  NumericVector start_height  = RcppDeepState_NumericVector();
  std::string start_height_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_start_height.qs";
  qs::c_qsave(start_height,start_height_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "start_height values: "<< start_height << std::endl;
  NumericVector end_width  = RcppDeepState_NumericVector();
  std::string end_width_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_end_width.qs";
  qs::c_qsave(end_width,end_width_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "end_width values: "<< end_width << std::endl;
  NumericVector end_height  = RcppDeepState_NumericVector();
  std::string end_height_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_end_height.qs";
  qs::c_qsave(end_height,end_height_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "end_height values: "<< end_height << std::endl;
  CharacterVector start_type  = RcppDeepState_CharacterVector();
  std::string start_type_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_start_type.qs";
  qs::c_qsave(start_type,start_type_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "start_type values: "<< start_type << std::endl;
  CharacterVector end_type  = RcppDeepState_CharacterVector();
  std::string end_type_t = "/home/akhila/fuzzer_packages/fuzzedpackages/ggraph/inst/testfiles/cut_lines/libFuzzer_cut_lines/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_end_type.qs";
  qs::c_qsave(end_type,end_type_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "end_type values: "<< end_type << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cut_lines(x,y,id,start_width,start_height,end_width,end_height,start_type,end_type);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
