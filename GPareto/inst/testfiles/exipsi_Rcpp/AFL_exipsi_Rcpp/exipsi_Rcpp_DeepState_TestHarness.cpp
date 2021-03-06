// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// exipsi_Rcpp_DeepState_TestHarness_generation.cpp and exipsi_Rcpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double exipsi_Rcpp(double a, double b, double m, double s);

TEST(GPareto_deepstate_test,exipsi_Rcpp_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector a(1);
  a[0]  = RcppDeepState_double();
  std::string a_t = "/home/akhila/fuzzer_packages/fuzzedpackages/GPareto/inst/testfiles/exipsi_Rcpp/AFL_exipsi_Rcpp/afl_inputs/" + std::to_string(t) + "_a.qs";
  qs::c_qsave(a,a_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "a values: "<< a << std::endl;
  NumericVector b(1);
  b[0]  = RcppDeepState_double();
  std::string b_t = "/home/akhila/fuzzer_packages/fuzzedpackages/GPareto/inst/testfiles/exipsi_Rcpp/AFL_exipsi_Rcpp/afl_inputs/" + std::to_string(t) + "_b.qs";
  qs::c_qsave(b,b_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "b values: "<< b << std::endl;
  NumericVector m(1);
  m[0]  = RcppDeepState_double();
  std::string m_t = "/home/akhila/fuzzer_packages/fuzzedpackages/GPareto/inst/testfiles/exipsi_Rcpp/AFL_exipsi_Rcpp/afl_inputs/" + std::to_string(t) + "_m.qs";
  qs::c_qsave(m,m_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  NumericVector s(1);
  s[0]  = RcppDeepState_double();
  std::string s_t = "/home/akhila/fuzzer_packages/fuzzedpackages/GPareto/inst/testfiles/exipsi_Rcpp/AFL_exipsi_Rcpp/afl_inputs/" + std::to_string(t) + "_s.qs";
  qs::c_qsave(s,s_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "s values: "<< s << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    exipsi_Rcpp(a[0],b[0],m[0],s[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
