// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// eloWinPct_DeepState_TestHarness_generation.cpp and eloWinPct_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List eloWinPct(NumericVector winsA, NumericMatrix teamA, NumericMatrix teamB, NumericVector weightsA, NumericVector weightsB, NumericVector weights, int nTeams);

TEST(elo_deepstate_test,eloWinPct_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector winsA  = RcppDeepState_NumericVector();
  qs::c_qsave(winsA,"/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/inputs/winsA.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "winsA values: "<< winsA << std::endl;
  NumericMatrix teamA  = RcppDeepState_NumericMatrix();
  qs::c_qsave(teamA,"/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/inputs/teamA.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "teamA values: "<< teamA << std::endl;
  NumericMatrix teamB  = RcppDeepState_NumericMatrix();
  qs::c_qsave(teamB,"/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/inputs/teamB.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "teamB values: "<< teamB << std::endl;
  NumericVector weightsA  = RcppDeepState_NumericVector();
  qs::c_qsave(weightsA,"/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/inputs/weightsA.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weightsA values: "<< weightsA << std::endl;
  NumericVector weightsB  = RcppDeepState_NumericVector();
  qs::c_qsave(weightsB,"/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/inputs/weightsB.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weightsB values: "<< weightsB << std::endl;
  NumericVector weights  = RcppDeepState_NumericVector();
  qs::c_qsave(weights,"/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/inputs/weights.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "weights values: "<< weights << std::endl;
  IntegerVector nTeams(1);
  nTeams[0]  = RcppDeepState_int();
  qs::c_qsave(nTeams,"/home/akhila/fuzzer_packages/fuzzedpackages/elo/inst/testfiles/eloWinPct/inputs/nTeams.qs",
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
