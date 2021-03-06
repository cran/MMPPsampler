// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Poiss
float Poiss(float m, int x);
RcppExport SEXP _MMPPsampler_Poiss(SEXP mSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Poiss(m, x));
    return rcpp_result_gen;
END_RCPP
}
// discsamp
int discsamp(arma::vec p);
RcppExport SEXP _MMPPsampler_discsamp(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(discsamp(p));
    return rcpp_result_gen;
END_RCPP
}
// Fast_Matrix_exponential
arma::mat Fast_Matrix_exponential(arma::mat Q, arma::vec Lambda, float Inter, int M2, int pp, bool msg);
RcppExport SEXP _MMPPsampler_Fast_Matrix_exponential(SEXP QSEXP, SEXP LambdaSEXP, SEXP InterSEXP, SEXP M2SEXP, SEXP ppSEXP, SEXP msgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< float >::type Inter(InterSEXP);
    Rcpp::traits::input_parameter< int >::type M2(M2SEXP);
    Rcpp::traits::input_parameter< int >::type pp(ppSEXP);
    Rcpp::traits::input_parameter< bool >::type msg(msgSEXP);
    rcpp_result_gen = Rcpp::wrap(Fast_Matrix_exponential(Q, Lambda, Inter, M2, pp, msg));
    return rcpp_result_gen;
END_RCPP
}
// Forward_Accumulation_cpp
List Forward_Accumulation_cpp(arma::ivec y_0Tprime, float Inter, arma::mat Q, arma::vec Lambda, arma::vec Rho, int pp, bool messages);
RcppExport SEXP _MMPPsampler_Forward_Accumulation_cpp(SEXP y_0TprimeSEXP, SEXP InterSEXP, SEXP QSEXP, SEXP LambdaSEXP, SEXP RhoSEXP, SEXP ppSEXP, SEXP messagesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec >::type y_0Tprime(y_0TprimeSEXP);
    Rcpp::traits::input_parameter< float >::type Inter(InterSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Rho(RhoSEXP);
    Rcpp::traits::input_parameter< int >::type pp(ppSEXP);
    Rcpp::traits::input_parameter< bool >::type messages(messagesSEXP);
    rcpp_result_gen = Rcpp::wrap(Forward_Accumulation_cpp(y_0Tprime, Inter, Q, Lambda, Rho, pp, messages));
    return rcpp_result_gen;
END_RCPP
}
// Interval_sampling_accumulation_cpp
List Interval_sampling_accumulation_cpp(arma::ivec x_0T, arma::ivec y_0Tprime, float Inter, arma::mat Q, arma::vec Lambda, int pp, bool messages);
RcppExport SEXP _MMPPsampler_Interval_sampling_accumulation_cpp(SEXP x_0TSEXP, SEXP y_0TprimeSEXP, SEXP InterSEXP, SEXP QSEXP, SEXP LambdaSEXP, SEXP ppSEXP, SEXP messagesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec >::type x_0T(x_0TSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type y_0Tprime(y_0TprimeSEXP);
    Rcpp::traits::input_parameter< float >::type Inter(InterSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< int >::type pp(ppSEXP);
    Rcpp::traits::input_parameter< bool >::type messages(messagesSEXP);
    rcpp_result_gen = Rcpp::wrap(Interval_sampling_accumulation_cpp(x_0T, y_0Tprime, Inter, Q, Lambda, pp, messages));
    return rcpp_result_gen;
END_RCPP
}
// Z_Sampling_cpp
List Z_Sampling_cpp(arma::ivec y_0Tprime, arma::ivec path_x, arma::vec path_t, float Inter, float Lambda_Z, arma::vec Lambda, bool messages);
RcppExport SEXP _MMPPsampler_Z_Sampling_cpp(SEXP y_0TprimeSEXP, SEXP path_xSEXP, SEXP path_tSEXP, SEXP InterSEXP, SEXP Lambda_ZSEXP, SEXP LambdaSEXP, SEXP messagesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec >::type y_0Tprime(y_0TprimeSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type path_x(path_xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type path_t(path_tSEXP);
    Rcpp::traits::input_parameter< float >::type Inter(InterSEXP);
    Rcpp::traits::input_parameter< float >::type Lambda_Z(Lambda_ZSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type messages(messagesSEXP);
    rcpp_result_gen = Rcpp::wrap(Z_Sampling_cpp(y_0Tprime, path_x, path_t, Inter, Lambda_Z, Lambda, messages));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MMPPsampler_Poiss", (DL_FUNC) &_MMPPsampler_Poiss, 2},
    {"_MMPPsampler_discsamp", (DL_FUNC) &_MMPPsampler_discsamp, 1},
    {"_MMPPsampler_Fast_Matrix_exponential", (DL_FUNC) &_MMPPsampler_Fast_Matrix_exponential, 6},
    {"_MMPPsampler_Forward_Accumulation_cpp", (DL_FUNC) &_MMPPsampler_Forward_Accumulation_cpp, 7},
    {"_MMPPsampler_Interval_sampling_accumulation_cpp", (DL_FUNC) &_MMPPsampler_Interval_sampling_accumulation_cpp, 7},
    {"_MMPPsampler_Z_Sampling_cpp", (DL_FUNC) &_MMPPsampler_Z_Sampling_cpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_MMPPsampler(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
