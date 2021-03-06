// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// combnCpp_DeepState_TestHarness_generation.cpp and combnCpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

arma::umat combnCpp(double n, double k);

TEST(GDINA_deepstate_test,combnCpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector n(1);
  n[0]  = RcppDeepState_double();
  qs::c_qsave(n,"/home/akhila/fuzzer_packages/fuzzedpackages/GDINA/inst/testfiles/combnCpp/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  NumericVector k(1);
  k[0]  = RcppDeepState_double();
  qs::c_qsave(k,"/home/akhila/fuzzer_packages/fuzzedpackages/GDINA/inst/testfiles/combnCpp/inputs/k.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "k values: "<< k << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    combnCpp(n[0],k[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
