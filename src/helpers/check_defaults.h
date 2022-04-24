
#include <unordered_set>
//using namespace sics;
std::string check_type_graph(std::string type_of_graph) {
    std::unordered_set<std::string>::const_iterator got = graph_types_args.find(type_of_graph);
    if(got == graph_types_args.end()){
        return "adjacency_list";
    }else{
        return type_of_graph;
    }
}


std::string check_tag_format(std::string type_of_tag) {
  //  std::cout << type_of_tag << "\n";
    std::unordered_set<std::string>::const_iterator got = tag_types_args.find(type_of_tag);
    if(got == tag_types_args.end()){
        return "undirected_tag";
    }else{
        return type_of_tag;
    }
}


std::string check_algorithm(std::string algorithm_name) {
    std::unordered_set<std::string>::const_iterator got = valid_alg_args.find(algorithm_name);
    if(got == valid_alg_args.end()){
        return "backjumping_bitset_degreeprune_ind";
    }else{
        return algorithm_name;
    }
}


auto check_vertex_order(std::string v_order, auto pattern) {
    if(v_order == "DEG"){
        return vertex_order_DEG(pattern);
    }else if(v_order == "RDEG"){
        return vertex_order_RDEG(pattern);
    }
    return vertex_order_GreatestConstraintFirst(pattern);
}

































































