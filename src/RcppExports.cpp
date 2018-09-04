// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// hugeglasso
List hugeglasso(Eigen::MatrixXd& S, NumericVector lambda, bool scr, bool verbose, bool cov_output);
RcppExport SEXP _huge_hugeglasso(SEXP SSEXP, SEXP lambdaSEXP, SEXP scrSEXP, SEXP verboseSEXP, SEXP cov_outputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type S(SSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type scr(scrSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type cov_output(cov_outputSEXP);
    rcpp_result_gen = Rcpp::wrap(hugeglasso(S, lambda, scr, verbose, cov_output));
    return rcpp_result_gen;
END_RCPP
}
// RIC
double RIC(NumericMatrix& X, int d, int n, NumericVector& r, int t);
RcppExport SEXP _huge_RIC(SEXP XSEXP, SEXP dSEXP, SEXP nSEXP, SEXP rSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(RIC(X, d, n, r, t));
    return rcpp_result_gen;
END_RCPP
}
// SFGen
List SFGen(int d0, int d);
RcppExport SEXP _huge_SFGen(SEXP d0SEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type d0(d0SEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(SFGen(d0, d));
    return rcpp_result_gen;
END_RCPP
}
// SPMBgraph
List SPMBgraph(NumericMatrix& S, NumericVector& lambda, int nlambda, int d, NumericVector& x, IntegerVector& col_cnz, IntegerVector& row_idx);
RcppExport SEXP _huge_SPMBgraph(SEXP SSEXP, SEXP lambdaSEXP, SEXP nlambdaSEXP, SEXP dSEXP, SEXP xSEXP, SEXP col_cnzSEXP, SEXP row_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type S(SSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type col_cnz(col_cnzSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type row_idx(row_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(SPMBgraph(S, lambda, nlambda, d, x, col_cnz, row_idx));
    return rcpp_result_gen;
END_RCPP
}
// SPMBgraphlasso
List SPMBgraphlasso(Eigen::MatrixXd& data, NumericVector& lambda, int nlambda, int d, NumericVector& x, IntegerVector& col_cnz, IntegerVector& row_idx);
RcppExport SEXP _huge_SPMBgraphlasso(SEXP dataSEXP, SEXP lambdaSEXP, SEXP nlambdaSEXP, SEXP dSEXP, SEXP xSEXP, SEXP col_cnzSEXP, SEXP row_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type col_cnz(col_cnzSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type row_idx(row_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(SPMBgraphlasso(data, lambda, nlambda, d, x, col_cnz, row_idx));
    return rcpp_result_gen;
END_RCPP
}
// SPMBgraphsqrt
List SPMBgraphsqrt(Eigen::MatrixXd& data, NumericVector& lambda, int nlambda, int d, NumericVector& x, IntegerVector& col_cnz, IntegerVector& row_idx);
RcppExport SEXP _huge_SPMBgraphsqrt(SEXP dataSEXP, SEXP lambdaSEXP, SEXP nlambdaSEXP, SEXP dSEXP, SEXP xSEXP, SEXP col_cnzSEXP, SEXP row_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type col_cnz(col_cnzSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type row_idx(row_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(SPMBgraphsqrt(data, lambda, nlambda, d, x, col_cnz, row_idx));
    return rcpp_result_gen;
END_RCPP
}
// SPMBscr
List SPMBscr(NumericMatrix& S, IntegerMatrix& idx_scr, NumericVector& lambda, int nlambda, int d, int nscr, NumericVector& x, IntegerVector& col_cnz, IntegerVector& row_idx);
RcppExport SEXP _huge_SPMBscr(SEXP SSEXP, SEXP idx_scrSEXP, SEXP lambdaSEXP, SEXP nlambdaSEXP, SEXP dSEXP, SEXP nscrSEXP, SEXP xSEXP, SEXP col_cnzSEXP, SEXP row_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type S(SSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix& >::type idx_scr(idx_scrSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type nscr(nscrSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type col_cnz(col_cnzSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type row_idx(row_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(SPMBscr(S, idx_scr, lambda, nlambda, d, nscr, x, col_cnz, row_idx));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_huge_hugeglasso", (DL_FUNC) &_huge_hugeglasso, 5},
    {"_huge_RIC", (DL_FUNC) &_huge_RIC, 5},
    {"_huge_SFGen", (DL_FUNC) &_huge_SFGen, 2},
    {"_huge_SPMBgraph", (DL_FUNC) &_huge_SPMBgraph, 7},
    {"_huge_SPMBgraphlasso", (DL_FUNC) &_huge_SPMBgraphlasso, 7},
    {"_huge_SPMBgraphsqrt", (DL_FUNC) &_huge_SPMBgraphsqrt, 7},
    {"_huge_SPMBscr", (DL_FUNC) &_huge_SPMBscr, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_huge(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
