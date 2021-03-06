// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// xls_sheets
CharacterVector xls_sheets(std::string path);
RcppExport SEXP readxl_xls_sheets(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_sheets(path));
    return rcpp_result_gen;
END_RCPP
}
// xls_date_formats
std::set<int> xls_date_formats(std::string path);
RcppExport SEXP readxl_xls_date_formats(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_date_formats(path));
    return rcpp_result_gen;
END_RCPP
}
// xls_col_names
CharacterVector xls_col_names(std::string path, std::vector<std::string> na, int sheet_i, int skip, int n_max);
RcppExport SEXP readxl_xls_col_names(SEXP pathSEXP, SEXP naSEXP, SEXP sheet_iSEXP, SEXP skipSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type sheet_i(sheet_iSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_col_names(path, na, sheet_i, skip, n_max));
    return rcpp_result_gen;
END_RCPP
}
// xls_col_types
CharacterVector xls_col_types(std::string path, std::vector<std::string> na, int sheet_i, int skip, int n_max, int guess_max, bool has_col_names);
RcppExport SEXP readxl_xls_col_types(SEXP pathSEXP, SEXP naSEXP, SEXP sheet_iSEXP, SEXP skipSEXP, SEXP n_maxSEXP, SEXP guess_maxSEXP, SEXP has_col_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type sheet_i(sheet_iSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< int >::type guess_max(guess_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type has_col_names(has_col_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(xls_col_types(path, na, sheet_i, skip, n_max, guess_max, has_col_names));
    return rcpp_result_gen;
END_RCPP
}
// read_xls_
List read_xls_(std::string path, int sheet_i, RObject col_names, RObject col_types, std::vector<std::string> na, int skip, int n_max, int guess_max);
RcppExport SEXP readxl_read_xls_(SEXP pathSEXP, SEXP sheet_iSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP naSEXP, SEXP skipSEXP, SEXP n_maxSEXP, SEXP guess_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet_i(sheet_iSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< int >::type guess_max(guess_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(read_xls_(path, sheet_i, col_names, col_types, na, skip, n_max, guess_max));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_sheets
CharacterVector xlsx_sheets(std::string path);
RcppExport SEXP readxl_xlsx_sheets(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_sheets(path));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_strings
std::vector<std::string> xlsx_strings(std::string path);
RcppExport SEXP readxl_xlsx_strings(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_strings(path));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_date_formats
std::set<int> xlsx_date_formats(std::string path);
RcppExport SEXP readxl_xlsx_date_formats(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_date_formats(path));
    return rcpp_result_gen;
END_RCPP
}
// parse_ref
IntegerVector parse_ref(std::string ref);
RcppExport SEXP readxl_parse_ref(SEXP refSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type ref(refSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_ref(ref));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_col_types
CharacterVector xlsx_col_types(std::string path, int sheet_i, CharacterVector na, int skip, int n_max, int guess_max, bool has_col_names);
RcppExport SEXP readxl_xlsx_col_types(SEXP pathSEXP, SEXP sheet_iSEXP, SEXP naSEXP, SEXP skipSEXP, SEXP n_maxSEXP, SEXP guess_maxSEXP, SEXP has_col_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet_i(sheet_iSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< int >::type guess_max(guess_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type has_col_names(has_col_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_col_types(path, sheet_i, na, skip, n_max, guess_max, has_col_names));
    return rcpp_result_gen;
END_RCPP
}
// xlsx_col_names
CharacterVector xlsx_col_names(std::string path, CharacterVector na, int sheet_i, int skip, int n_max);
RcppExport SEXP readxl_xlsx_col_names(SEXP pathSEXP, SEXP naSEXP, SEXP sheet_iSEXP, SEXP skipSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type sheet_i(sheet_iSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(xlsx_col_names(path, na, sheet_i, skip, n_max));
    return rcpp_result_gen;
END_RCPP
}
// read_xlsx_
List read_xlsx_(std::string path, int sheet_i, RObject col_names, RObject col_types, std::vector<std::string> na, int skip, int n_max, int guess_max);
RcppExport SEXP readxl_read_xlsx_(SEXP pathSEXP, SEXP sheet_iSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP naSEXP, SEXP skipSEXP, SEXP n_maxSEXP, SEXP guess_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type sheet_i(sheet_iSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< int >::type guess_max(guess_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(read_xlsx_(path, sheet_i, col_names, col_types, na, skip, n_max, guess_max));
    return rcpp_result_gen;
END_RCPP
}
// zip_xml
void zip_xml(const std::string& zip_path, const std::string& file_path);
RcppExport SEXP readxl_zip_xml(SEXP zip_pathSEXP, SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type zip_path(zip_pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type file_path(file_pathSEXP);
    zip_xml(zip_path, file_path);
    return R_NilValue;
END_RCPP
}
