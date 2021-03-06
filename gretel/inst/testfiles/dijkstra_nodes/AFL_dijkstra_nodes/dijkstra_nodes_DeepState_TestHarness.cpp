// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// dijkstra_nodes_DeepState_TestHarness_generation.cpp and dijkstra_nodes_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector dijkstra_nodes(NumericMatrix dist, int src, NumericVector node_costs);

TEST(gretel_deepstate_test,dijkstra_nodes_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix dist  = RcppDeepState_NumericMatrix();
  std::string dist_t = "/home/akhila/fuzzer_packages/fuzzedpackages/gretel/inst/testfiles/dijkstra_nodes/AFL_dijkstra_nodes/afl_inputs/" + std::to_string(t) + "_dist.qs";
  qs::c_qsave(dist,dist_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dist values: "<< dist << std::endl;
  IntegerVector src(1);
  src[0]  = RcppDeepState_int();
  std::string src_t = "/home/akhila/fuzzer_packages/fuzzedpackages/gretel/inst/testfiles/dijkstra_nodes/AFL_dijkstra_nodes/afl_inputs/" + std::to_string(t) + "_src.qs";
  qs::c_qsave(src,src_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "src values: "<< src << std::endl;
  NumericVector node_costs  = RcppDeepState_NumericVector();
  std::string node_costs_t = "/home/akhila/fuzzer_packages/fuzzedpackages/gretel/inst/testfiles/dijkstra_nodes/AFL_dijkstra_nodes/afl_inputs/" + std::to_string(t) + "_node_costs.qs";
  qs::c_qsave(node_costs,node_costs_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "node_costs values: "<< node_costs << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    dijkstra_nodes(dist,src[0],node_costs);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
