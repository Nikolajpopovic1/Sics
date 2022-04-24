#ifndef SICS_CREATE_GRAPH_H_
#define SICS_CREATE_GRAPH_H_

#include <istream>

namespace sics {

template <typename G>
G create_graph(int vertices,std::vector<int> seznam,std::vector<std::vector<std::string>> attr_list) {
    G g(vertices);
    int g_half = seznam.size()/2;
    for(int i=1; i<=g_half;i+=1){ 
      g.add_edge(seznam[i-1]-1,seznam[i+g_half-1]-1);
     }
        int omejitev = attr_list.size();

        if(seznam.size() < attr_list.size())omejitev = seznam.size();

        for(int i=0; i < omejitev;i++){
            std::vector<std::string> sez = attr_list[i];
            for(int j = 0; j < attr_list.size() ;j++){
                g.set_vertex_label(j,sez[j]);
            }
        }
    return g;
}

}  // namespace sics

#endif  // SICS_READ_GAL_H_-