#include <Rcpp.h>
#include <vector>
#include <string>
using namespace Rcpp;
#include <Rcpp.h>

#include <iostream>
#include <cstdint>
#include <string>
#include <fstream>
#include <vector>
#include "sics_implementation/importoslav.h"



// This is a simple function using Rcpp that creates an R list
// containing a character vector and a numeric vector.
//
// Learn more about how to use Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//
// and browse examples of code using Rcpp at:
//
//   http://gallery.rcpp.org/
//

//' does something
//' @param pattern does something
//' @param match does something
//' @param algorithm does something
//' @param direction does something
//' @param vertex_atributes_g1 does something
//' @param vertex_atributes_g2 does something
//' @param type_graph does something
//' @param constraint does something
//' @param pattern_vertex does something
//' @param match_vertex does something
//' @param degreesorted does something
// [[Rcpp::export]]
std::vector<std::vector<int>> subgraph_isomorphism_interface(
    std::vector<int> pattern,
    std::vector<int> match,
    std::string algorithm,
    std::string direction,
    std::vector<std::vector<std::string>> vertex_atributes_g1,
    std::vector<std::vector<std::string>> vertex_atributes_g2,
    std::string type_graph,
    std::string constraint,
    int pattern_vertex,
    int match_vertex,
    bool degreesorted
) {
  std::vector<std::vector<int>> isomorphisms;

  return isomorphisms;
}
