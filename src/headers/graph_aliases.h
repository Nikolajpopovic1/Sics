#include "adjacency_list.h"
#include "adjacency_listmat.h"
#include "adjacency_degreesortedlistmat.h"

  using listmat_bidirectional = sics::adjacency_listmat<uint16_t, sics::bidirectional_tag, std::string>;
  using listmat_directed = sics::adjacency_listmat<uint16_t, sics::directed_tag, std::string>;
  using listmat_undirected = sics::adjacency_listmat<uint16_t, sics::undirected_tag, std::string>;

  using list_bidirectional = sics::adjacency_list<uint16_t, sics::bidirectional_tag, std::string>;
  using list_directed = sics::adjacency_list<uint16_t, sics::directed_tag, std::string>;
  using list_undirected = sics::adjacency_list<uint16_t, sics::undirected_tag, std::string>;

  using degreesortedlistmat_bidirectional = sics::adjacency_degreesortedlistmat<uint16_t, sics::bidirectional_tag, std::string>;
  using degreesortedlistmat_directed = sics::adjacency_degreesortedlistmat<uint16_t, sics::directed_tag, std::string>;
  using degreesortedlistmat_undirected = sics::adjacency_degreesortedlistmat<uint16_t, sics::undirected_tag, std::string>;









