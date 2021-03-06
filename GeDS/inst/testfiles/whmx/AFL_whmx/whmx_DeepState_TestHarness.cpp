// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// whmx_DeepState_TestHarness_generation.cpp and whmx_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

int whmx(NumericVector vettore);

TEST(GeDS_deepstate_test,whmx_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector vettore  = RcppDeepState_NumericVector();
  std::string vettore_t = "/home/akhila/fuzzer_packages/fuzzedpackages/GeDS/inst/testfiles/whmx/AFL_whmx/afl_inputs/" + std::to_string(t) + "_vettore.qs";
  qs::c_qsave(vettore,vettore_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vettore values: "<< vettore << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    whmx(vettore);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
