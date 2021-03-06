#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List habConnRcpp(NumericVector cost, NumericVector patches, int ncol, int nrow);

TEST(grainscape_deepstate_test,habConnRcpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector cost  = RcppDeepState_NumericVector();
  qs::c_qsave(cost,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/grainscape/inst/testfiles/habConnRcpp/inputs/cost.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cost values: "<< cost << std::endl;
  NumericVector patches  = RcppDeepState_NumericVector();
  qs::c_qsave(patches,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/grainscape/inst/testfiles/habConnRcpp/inputs/patches.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "patches values: "<< patches << std::endl;
  IntegerVector ncol(1);
  ncol[0]  = RcppDeepState_int();
  qs::c_qsave(ncol,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/grainscape/inst/testfiles/habConnRcpp/inputs/ncol.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ncol values: "<< ncol << std::endl;
  IntegerVector nrow(1);
  nrow[0]  = RcppDeepState_int();
  qs::c_qsave(nrow,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/grainscape/inst/testfiles/habConnRcpp/inputs/nrow.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nrow values: "<< nrow << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    habConnRcpp(cost,patches,ncol[0],nrow[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
