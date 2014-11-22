// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// N_trans
arma::vec N_trans(const int& fromN, const double& omega, const double& gamma, const int& R, const int& N_max);
RcppExport SEXP kfdnm_N_trans(SEXP fromNSEXP, SEXP omegaSEXP, SEXP gammaSEXP, SEXP RSEXP, SEXP N_maxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int& >::type fromN(fromNSEXP );
        Rcpp::traits::input_parameter< const double& >::type omega(omegaSEXP );
        Rcpp::traits::input_parameter< const double& >::type gamma(gammaSEXP );
        Rcpp::traits::input_parameter< const int& >::type R(RSEXP );
        Rcpp::traits::input_parameter< const int& >::type N_max(N_maxSEXP );
        arma::vec __result = N_trans(fromN, omega, gamma, R, N_max);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// N_trans_mat
arma::mat N_trans_mat(const double& omega, const double& gamma, const int& R, const int& N_max);
RcppExport SEXP kfdnm_N_trans_mat(SEXP omegaSEXP, SEXP gammaSEXP, SEXP RSEXP, SEXP N_maxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double& >::type omega(omegaSEXP );
        Rcpp::traits::input_parameter< const double& >::type gamma(gammaSEXP );
        Rcpp::traits::input_parameter< const int& >::type R(RSEXP );
        Rcpp::traits::input_parameter< const int& >::type N_max(N_maxSEXP );
        arma::mat __result = N_trans_mat(omega, gamma, R, N_max);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ikfdnm_hmm
Rcpp::List ikfdnm_hmm(const Rcpp::IntegerVector& n, const Rcpp::IntegerVector& Y, const Rcpp::IntegerVector& M, const Rcpp::IntegerVector& R, const Rcpp::IntegerVector& new_group, const Rcpp::NumericVector& omega_dnm, const Rcpp::NumericVector& omega_kf, const Rcpp::NumericVector& gamma, const Rcpp::NumericVector& p, const int& N_max, const bool& back_sample);
RcppExport SEXP kfdnm_ikfdnm_hmm(SEXP nSEXP, SEXP YSEXP, SEXP MSEXP, SEXP RSEXP, SEXP new_groupSEXP, SEXP omega_dnmSEXP, SEXP omega_kfSEXP, SEXP gammaSEXP, SEXP pSEXP, SEXP N_maxSEXP, SEXP back_sampleSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type n(nSEXP );
        Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type M(MSEXP );
        Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type R(RSEXP );
        Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type new_group(new_groupSEXP );
        Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type omega_dnm(omega_dnmSEXP );
        Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type omega_kf(omega_kfSEXP );
        Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type gamma(gammaSEXP );
        Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type p(pSEXP );
        Rcpp::traits::input_parameter< const int& >::type N_max(N_maxSEXP );
        Rcpp::traits::input_parameter< const bool& >::type back_sample(back_sampleSEXP );
        Rcpp::List __result = ikfdnm_hmm(n, Y, M, R, new_group, omega_dnm, omega_kf, gamma, p, N_max, back_sample);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
