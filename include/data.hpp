//
// Created by Xi Liu on 2019/7/4.
//

#ifndef GRAPHQ_DATA_HPP
#define GRAPHQ_DATA_HPP

#include <set>

namespace graphQ {


    using vid_t=uint32_t;
    using eid_t=uint64_t;


    class vertex {



    public:
        vid_t vertexID;
        std::set <vid_t> outVertex;
        std::set <vid_t> inVertex;



    };


    class edge {


    public:
        eid_t edgeID;
        vid_t inVertex;
        vid_t outVertex;



    };






}
#endif //GRAPHQ_DATA_HPP
