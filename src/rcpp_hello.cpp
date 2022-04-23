#include <Rcpp.h>
#include <vector>
#include <string>
using namespace Rcpp;

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
  CharacterVector x = CharacterVector::create("foo", "bar");
  NumericVector y   = NumericVector::create(0.0, 1.0);
  List z            = List::create(x, y);
  std::vector<std::vector<int>> isomorphisms;
  return isomorphisms;
}
