// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// eloWinPct_DeepState_TestHarness_generation.cpp and eloWinPct_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List eloWinPct(NumericVector winsA, NumericMatrix teamA, NumericMatrix teamB, NumericVector weightsA, NumericVector weightsB, NumericVector weights, int nTeams);

TEST(elo_deepstate_test,eloWinPct_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector winsA  = RcppDeepState_NumericVector();
  std::string winsA_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_winsA.qs";
  qs::c_qsave(winsA,winsA_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "winsA values: "<< winsA << std::endl;
  NumericMatrix teamA  = RcppDeepState_NumericMatrix();
  std::string teamA_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_teamA.qs";
  qs::c_qsave(teamA,teamA_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "teamA values: "<< teamA << std::endl;
  NumericMatrix teamB  = RcppDeepState_NumericMatrix();
  std::string teamB_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_teamB.qs";
  qs::c_qsave(teamB,teamB_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "teamB values: "<< teamB << std::endl;
  NumericVector weightsA  = RcppDeepState_NumericVector();
  std::string weightsA_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_weightsA.qs";
  std::string weights_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_weights.qs";
  qs::c_qsave(weightsA,weightsA_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weightsA values: "<< weightsA << std::endl;
  NumericVector weightsB  = RcppDeepState_NumericVector();
  std::string weightsB_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_weightsB.qs";
  std::string weights_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_weights.qs";
  qs::c_qsave(weightsB,weightsB_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weightsB values: "<< weightsB << std::endl;
  NumericVector weights  = RcppDeepState_NumericVector();
  std::string weights_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_weights.qs";
  qs::c_qsave(weights,weights_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weights values: "<< weights << std::endl;
  IntegerVector nTeams(1);
  nTeams[0]  = RcppDeepState_int();
  std::string nTeams_t = "/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/AFL_eloWinPct/afl_inputs/" + std::to_string(t) + "_nTeams.qs";
  qs::c_qsave(nTeams,nTeams_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nTeams values: "<< nTeams << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    eloWinPct(winsA,teamA,teamB,weightsA,weightsB,weights,nTeams[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
