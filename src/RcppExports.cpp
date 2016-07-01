// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// a_sptree_open
std::string a_sptree_open(bool standalone, int id, double offx, double offy, double width, double height);
RcppExport SEXP flextable_a_sptree_open(SEXP standaloneSEXP, SEXP idSEXP, SEXP offxSEXP, SEXP offySEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< bool >::type standalone(standaloneSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< double >::type offx(offxSEXP);
    Rcpp::traits::input_parameter< double >::type offy(offySEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    __result = Rcpp::wrap(a_sptree_open(standalone, id, offx, offy, width, height));
    return __result;
END_RCPP
}
// a_graphic_frame_open
std::string a_graphic_frame_open(int id, double offx, double offy, double width, double height);
RcppExport SEXP flextable_a_graphic_frame_open(SEXP idSEXP, SEXP offxSEXP, SEXP offySEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< double >::type offx(offxSEXP);
    Rcpp::traits::input_parameter< double >::type offy(offySEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    __result = Rcpp::wrap(a_graphic_frame_open(id, offx, offy, width, height));
    return __result;
END_RCPP
}
// a_sptree_close
std::string a_sptree_close();
RcppExport SEXP flextable_a_sptree_close() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(a_sptree_close());
    return __result;
END_RCPP
}
// a_graphic_frame_close
std::string a_graphic_frame_close();
RcppExport SEXP flextable_a_graphic_frame_close() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(a_graphic_frame_close());
    return __result;
END_RCPP
}
// wml_run_pic
std::string wml_run_pic(std::string src, double width, double height);
RcppExport SEXP flextable_wml_run_pic(SEXP srcSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type src(srcSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    __result = Rcpp::wrap(wml_run_pic(src, width, height));
    return __result;
END_RCPP
}