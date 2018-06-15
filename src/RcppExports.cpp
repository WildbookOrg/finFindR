// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// findPath
std::vector<int> findPath(const Rcpp::NumericMatrix edge, const int startx, const int starty, const int endx, const int endy, const int minX, const int maxX, const int minY, const int maxY, const int proximity);
RcppExport SEXP _finFindR_findPath(SEXP edgeSEXP, SEXP startxSEXP, SEXP startySEXP, SEXP endxSEXP, SEXP endySEXP, SEXP minXSEXP, SEXP maxXSEXP, SEXP minYSEXP, SEXP maxYSEXP, SEXP proximitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< const int >::type startx(startxSEXP);
    Rcpp::traits::input_parameter< const int >::type starty(startySEXP);
    Rcpp::traits::input_parameter< const int >::type endx(endxSEXP);
    Rcpp::traits::input_parameter< const int >::type endy(endySEXP);
    Rcpp::traits::input_parameter< const int >::type minX(minXSEXP);
    Rcpp::traits::input_parameter< const int >::type maxX(maxXSEXP);
    Rcpp::traits::input_parameter< const int >::type minY(minYSEXP);
    Rcpp::traits::input_parameter< const int >::type maxY(maxYSEXP);
    Rcpp::traits::input_parameter< const int >::type proximity(proximitySEXP);
    rcpp_result_gen = Rcpp::wrap(findPath(edge, startx, starty, endx, endy, minX, maxX, minY, maxY, proximity));
    return rcpp_result_gen;
END_RCPP
}
// extractAnnulus
Rcpp::NumericVector extractAnnulus(const Rcpp::NumericVector imageFromR, const Rcpp::IntegerVector xCoordinates, const Rcpp::IntegerVector yCoordinates);
RcppExport SEXP _finFindR_extractAnnulus(SEXP imageFromRSEXP, SEXP xCoordinatesSEXP, SEXP yCoordinatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type imageFromR(imageFromRSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type xCoordinates(xCoordinatesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type yCoordinates(yCoordinatesSEXP);
    rcpp_result_gen = Rcpp::wrap(extractAnnulus(imageFromR, xCoordinates, yCoordinates));
    return rcpp_result_gen;
END_RCPP
}
// fillGlare
Rcpp::NumericVector fillGlare(const Rcpp::NumericVector imageFromR, const Rcpp::DataFrame highlightCoordinates, const int aveThresh);
RcppExport SEXP _finFindR_fillGlare(SEXP imageFromRSEXP, SEXP highlightCoordinatesSEXP, SEXP aveThreshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type imageFromR(imageFromRSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type highlightCoordinates(highlightCoordinatesSEXP);
    Rcpp::traits::input_parameter< const int >::type aveThresh(aveThreshSEXP);
    rcpp_result_gen = Rcpp::wrap(fillGlare(imageFromR, highlightCoordinates, aveThresh));
    return rcpp_result_gen;
END_RCPP
}
// extractEdgeMap
Rcpp::NumericVector extractEdgeMap(const Rcpp::NumericVector gradientFromR, const Rcpp::NumericVector anglesFromR);
RcppExport SEXP _finFindR_extractEdgeMap(SEXP gradientFromRSEXP, SEXP anglesFromRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type gradientFromR(gradientFromRSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type anglesFromR(anglesFromRSEXP);
    rcpp_result_gen = Rcpp::wrap(extractEdgeMap(gradientFromR, anglesFromR));
    return rcpp_result_gen;
END_RCPP
}
// extractAngles
Rcpp::NumericVector extractAngles(const Rcpp::NumericVector angFromR, const Rcpp::IntegerVector backpath, const int startx, const int starty);
RcppExport SEXP _finFindR_extractAngles(SEXP angFromRSEXP, SEXP backpathSEXP, SEXP startxSEXP, SEXP startySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type angFromR(angFromRSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type backpath(backpathSEXP);
    Rcpp::traits::input_parameter< const int >::type startx(startxSEXP);
    Rcpp::traits::input_parameter< const int >::type starty(startySEXP);
    rcpp_result_gen = Rcpp::wrap(extractAngles(angFromR, backpath, startx, starty));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_finFindR_findPath", (DL_FUNC) &_finFindR_findPath, 10},
    {"_finFindR_extractAnnulus", (DL_FUNC) &_finFindR_extractAnnulus, 3},
    {"_finFindR_fillGlare", (DL_FUNC) &_finFindR_fillGlare, 3},
    {"_finFindR_extractEdgeMap", (DL_FUNC) &_finFindR_extractEdgeMap, 2},
    {"_finFindR_extractAngles", (DL_FUNC) &_finFindR_extractAngles, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_finFindR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
