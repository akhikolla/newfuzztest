#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector ransamf(int repnum, int n, NumericVector B1inq, NumericVector xi1d, NumericVector xi2d, NumericVector cids1, NumericVector cids2);

TEST(ClinicalTrialSummary_deepstate_test,ransamf_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  IntegerVector repnum(1);
  repnum[0]  = RcppDeepState_int();
  qs::c_qsave(repnum,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/ClinicalTrialSummary/inst/testfiles/ransamf/inputs/repnum.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "repnum values: "<< repnum << std::endl;
  IntegerVector n(1);
  n[0]  = RcppDeepState_int();
  qs::c_qsave(n,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/ClinicalTrialSummary/inst/testfiles/ransamf/inputs/n.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "n values: "<< n << std::endl;
  NumericVector B1inq  = RcppDeepState_NumericVector();
  qs::c_qsave(B1inq,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/ClinicalTrialSummary/inst/testfiles/ransamf/inputs/B1inq.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "B1inq values: "<< B1inq << std::endl;
  NumericVector xi1d  = RcppDeepState_NumericVector();
  qs::c_qsave(xi1d,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/ClinicalTrialSummary/inst/testfiles/ransamf/inputs/xi1d.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xi1d values: "<< xi1d << std::endl;
  NumericVector xi2d  = RcppDeepState_NumericVector();
  qs::c_qsave(xi2d,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/ClinicalTrialSummary/inst/testfiles/ransamf/inputs/xi2d.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "xi2d values: "<< xi2d << std::endl;
  NumericVector cids1  = RcppDeepState_NumericVector();
  qs::c_qsave(cids1,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/ClinicalTrialSummary/inst/testfiles/ransamf/inputs/cids1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cids1 values: "<< cids1 << std::endl;
  NumericVector cids2  = RcppDeepState_NumericVector();
  qs::c_qsave(cids2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/ClinicalTrialSummary/inst/testfiles/ransamf/inputs/cids2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cids2 values: "<< cids2 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    ransamf(repnum[0],n[0],B1inq,xi1d,xi2d,cids1,cids2);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
