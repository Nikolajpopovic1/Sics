
#include <vector>
#include <string>
#include <Rcpp.h>
using namespace Rcpp;
#include <iostream>
#include <cstdint>
#include <fstream>
#include <vector>
#include "helpers/alg_set_options.h"
#include "headers/import_sics.h"
#include "helpers/create_graph.h"
#include "helpers/check_defaults.h"
#include "helpers/all_algorithms.h"


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

  if(pattern.size() > match.size())return isomorphisms;

  std::string type_of_graph = check_type_graph(std::string(type_graph));
  std::string tag_format = check_tag_format(std::string(direction));
  std::string algorithm_type = check_algorithm(std::string(algorithm));

  if(tag_format == "undirected_tag" && type_of_graph == "adjacency_listmat"){

    listmat_undirected g = sics::create_graph<listmat_undirected>(pattern_vertex,pattern,vertex_atributes_g1);
    listmat_undirected h = sics::create_graph<listmat_undirected>(match_vertex,match,vertex_atributes_g2);

    if(degreesorted==true){

      auto g1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::undirected_tag, std::string>(g);
      auto h1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::undirected_tag, std::string>(h);

      return call_algorithm(g1, h1,algorithm_type,constraint,isomorphisms);
    }

    return call_algorithm(g, h,algorithm_type,constraint,isomorphisms);

  }else if(tag_format == "bidirectional_tag" && type_of_graph == "adjacency_listmat"){

    listmat_bidirectional g = sics::create_graph<listmat_bidirectional>(pattern_vertex,pattern,vertex_atributes_g1);
    listmat_bidirectional h = sics::create_graph<listmat_bidirectional>(match_vertex,match,vertex_atributes_g2);

    if(degreesorted==true){

      auto g1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::bidirectional_tag, std::string>(g);
      auto h1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::bidirectional_tag, std::string>(h);

      return call_algorithm(g1, h1,algorithm_type,constraint,isomorphisms);

    }

    return call_algorithm(g, h,algorithm_type,constraint,isomorphisms);

  }else if(tag_format == "directed_tag" && type_of_graph == "adjacency_listmat"){

    return isomorphisms;

  }else if(tag_format == "bidirectional_tag" && type_of_graph == "adjacency_list"){

    list_bidirectional g = sics::create_graph<list_bidirectional>(pattern_vertex,pattern,vertex_atributes_g1);
    list_bidirectional h = sics::create_graph<list_bidirectional>(match_vertex,match,vertex_atributes_g2);

    if(degreesorted==true){

      auto g1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::bidirectional_tag, std::string>(g);
      auto h1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::bidirectional_tag, std::string>(h);

      return call_algorithm(g1, h1,algorithm_type,constraint,isomorphisms);

    }

    return call_algorithm(g, h,algorithm_type,constraint,isomorphisms);

  }else if(tag_format == "undirected_tag" && type_of_graph == "adjacency_list"){

    list_undirected g = sics::create_graph<list_undirected>(pattern_vertex,pattern,vertex_atributes_g1);
    list_undirected h = sics::create_graph<list_undirected>(match_vertex,match,vertex_atributes_g2);

    if(degreesorted == true){

      auto g1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::undirected_tag, std::string>(g);
      auto h1 = sics::adjacency_degreesortedlistmat<uint16_t, sics::undirected_tag, std::string>(h);

      return call_algorithm(g1, h1,algorithm_type,constraint,isomorphisms);

    }

    return call_algorithm(g, h,algorithm_type,constraint,isomorphisms);

  }else if(tag_format == "directed_tag" && type_of_graph == "adjacency_list"){

    return isomorphisms;

  }

  return isomorphisms;
}

