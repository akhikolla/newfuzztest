// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cdm_rcpp_slca_calc_Xdes_DeepState_TestHarness_generation.cpp and cdm_rcpp_slca_calc_Xdes_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List cdm_rcpp_slca_calc_Xdes(Rcpp::NumericVector XDES, Rcpp::NumericVector dimXdes);

TEST(CDM_deepstate_test,cdm_rcpp_slca_calc_Xdes_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector XDES  = RcppDeepState_NumericVector();
  std::string XDES_t = "/home/akhila/fuzzer_packages/fuzzedpackages/CDM/inst/testfiles/cdm_rcpp_slca_calc_Xdes/AFL_cdm_rcpp_slca_calc_Xdes/afl_inputs/" + std::to_string(t) + "_XDES.qs";
  qs::c_qsave(XDES,XDES_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "XDES values: "<< XDES << std::endl;
  NumericVector dimXdes  = RcppDeepState_NumericVector();
  std::string dimXdes_t = "/home/akhila/fuzzer_packages/fuzzedpackages/CDM/inst/testfiles/cdm_rcpp_slca_calc_Xdes/AFL_cdm_rcpp_slca_calc_Xdes/afl_inputs/" + std::to_string(t) + "_dimXdes.qs";
  qs::c_qsave(dimXdes,dimXdes_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dimXdes values: "<< dimXdes << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cdm_rcpp_slca_calc_Xdes(XDES,dimXdes);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
