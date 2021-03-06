// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// nzcount
int nzcount(arma::vec x);
RcppExport SEXP _secure_nzcount(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(nzcount(x));
    return rcpp_result_gen;
END_RCPP
}
// wpow
arma::vec wpow(arma::vec x, double gamma0);
RcppExport SEXP _secure_wpow(SEXP xSEXP, SEXP gamma0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type gamma0(gamma0SEXP);
    rcpp_result_gen = Rcpp::wrap(wpow(x, gamma0));
    return rcpp_result_gen;
END_RCPP
}
// softThres
double softThres(double x, double lambda);
RcppExport SEXP _secure_softThres(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(softThres(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// bregpcdenet_Rcpp
arma::vec bregpcdenet_Rcpp(arma::vec XY, arma::mat XX, arma::mat A, arma::vec B, arma::vec Lambda1, arma::vec Lambda2, double Mu, double Nu, arma::vec Beta0, List control);
RcppExport SEXP _secure_bregpcdenet_Rcpp(SEXP XYSEXP, SEXP XXSEXP, SEXP ASEXP, SEXP BSEXP, SEXP Lambda1SEXP, SEXP Lambda2SEXP, SEXP MuSEXP, SEXP NuSEXP, SEXP Beta0SEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type XY(XYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda1(Lambda1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda2(Lambda2SEXP);
    Rcpp::traits::input_parameter< double >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< double >::type Nu(NuSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Beta0(Beta0SEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(bregpcdenet_Rcpp(XY, XX, A, B, Lambda1, Lambda2, Mu, Nu, Beta0, control));
    return rcpp_result_gen;
END_RCPP
}
// bregpcdenetdiag_Rcpp
arma::vec bregpcdenetdiag_Rcpp(arma::vec XY, arma::vec XX, arma::mat A, arma::vec B, arma::vec Lambda1, arma::vec Lambda2, double Mu, double Nu, arma::vec Beta0, List control);
RcppExport SEXP _secure_bregpcdenetdiag_Rcpp(SEXP XYSEXP, SEXP XXSEXP, SEXP ASEXP, SEXP BSEXP, SEXP Lambda1SEXP, SEXP Lambda2SEXP, SEXP MuSEXP, SEXP NuSEXP, SEXP Beta0SEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type XY(XYSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda1(Lambda1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Lambda2(Lambda2SEXP);
    Rcpp::traits::input_parameter< double >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< double >::type Nu(NuSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Beta0(Beta0SEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(bregpcdenetdiag_Rcpp(XY, XX, A, B, Lambda1, Lambda2, Mu, Nu, Beta0, control));
    return rcpp_result_gen;
END_RCPP
}
// secure_SURR_Rcpp
Rcpp::List secure_SURR_Rcpp(arma::mat X, arma::mat Y, arma::mat Au, arma::mat Av, arma::vec bu, arma::vec bv, arma::vec uk, arma::vec vk, double dk, int nlambda, Rcpp::List control);
RcppExport SEXP _secure_secure_SURR_Rcpp(SEXP XSEXP, SEXP YSEXP, SEXP AuSEXP, SEXP AvSEXP, SEXP buSEXP, SEXP bvSEXP, SEXP ukSEXP, SEXP vkSEXP, SEXP dkSEXP, SEXP nlambdaSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Au(AuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Av(AvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bu(buSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bv(bvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type uk(ukSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vk(vkSEXP);
    Rcpp::traits::input_parameter< double >::type dk(dkSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(secure_SURR_Rcpp(X, Y, Au, Av, bu, bv, uk, vk, dk, nlambda, control));
    return rcpp_result_gen;
END_RCPP
}
// secure_SURR_Rcpp_ortho
Rcpp::List secure_SURR_Rcpp_ortho(arma::mat X, arma::mat Y, arma::mat Au, arma::mat Av, arma::vec bu, arma::vec bv, arma::vec uk, arma::vec vk, double dk, int nlambda, Rcpp::List control);
RcppExport SEXP _secure_secure_SURR_Rcpp_ortho(SEXP XSEXP, SEXP YSEXP, SEXP AuSEXP, SEXP AvSEXP, SEXP buSEXP, SEXP bvSEXP, SEXP ukSEXP, SEXP vkSEXP, SEXP dkSEXP, SEXP nlambdaSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Au(AuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Av(AvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bu(buSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bv(bvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type uk(ukSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vk(vkSEXP);
    Rcpp::traits::input_parameter< double >::type dk(dkSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(secure_SURR_Rcpp_ortho(X, Y, Au, Av, bu, bv, uk, vk, dk, nlambda, control));
    return rcpp_result_gen;
END_RCPP
}
// secure_SURR_miss_Rcpp
Rcpp::List secure_SURR_miss_Rcpp(arma::mat X, arma::mat Y, arma::mat naInd, arma::mat Au, arma::mat Av, arma::vec bu, arma::vec bv, arma::vec uk, arma::vec vk, double dk, int nlambda, Rcpp::List control);
RcppExport SEXP _secure_secure_SURR_miss_Rcpp(SEXP XSEXP, SEXP YSEXP, SEXP naIndSEXP, SEXP AuSEXP, SEXP AvSEXP, SEXP buSEXP, SEXP bvSEXP, SEXP ukSEXP, SEXP vkSEXP, SEXP dkSEXP, SEXP nlambdaSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type naInd(naIndSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Au(AuSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Av(AvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bu(buSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bv(bvSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type uk(ukSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vk(vkSEXP);
    Rcpp::traits::input_parameter< double >::type dk(dkSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(secure_SURR_miss_Rcpp(X, Y, naInd, Au, Av, bu, bv, uk, vk, dk, nlambda, control));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_secure_nzcount", (DL_FUNC) &_secure_nzcount, 1},
    {"_secure_wpow", (DL_FUNC) &_secure_wpow, 2},
    {"_secure_softThres", (DL_FUNC) &_secure_softThres, 2},
    {"_secure_bregpcdenet_Rcpp", (DL_FUNC) &_secure_bregpcdenet_Rcpp, 10},
    {"_secure_bregpcdenetdiag_Rcpp", (DL_FUNC) &_secure_bregpcdenetdiag_Rcpp, 10},
    {"_secure_secure_SURR_Rcpp", (DL_FUNC) &_secure_secure_SURR_Rcpp, 11},
    {"_secure_secure_SURR_Rcpp_ortho", (DL_FUNC) &_secure_secure_SURR_Rcpp_ortho, 11},
    {"_secure_secure_SURR_miss_Rcpp", (DL_FUNC) &_secure_secure_SURR_miss_Rcpp, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_secure(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
