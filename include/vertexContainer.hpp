//
// Created by Xi Liu on 2019/7/4.
//

#ifndef GRAPHQ_VERTEXCONTAINER_HPP
#define GRAPHQ_VERTEXCONTAINER_HPP

#include "data.hpp"
#include <iostream>
#include <string>
namespace graphQ {
    class vertexContainer {

/*
 * The following section contains functions for inserting, deleting, updating and querying of vertices
 *
 * */
    public:
        //insert vertex by vertex data, direction 1: existingVertex ---> vertexData; direction -1: vertexData ---> existingVertex
        ssize_t insertVertex(const vertex &existingVertex, const vertex &vertexData, const int &direction);

        //insert vertex by vid
        ssize_t insertVertex(const vid_t &existingVertexID, const vertex &vertexID, const int &direction);

        //update vertex by reference
        int updateVertex(vertex &vertexData);

        //update vertex by bid
        int updateVertex(const vid_t &vertexID);

        //returns a vertex pointer by id
        vertex *queryVertex(const vid_t &vertexID);
        /*inserting, deleting,updating and querying of vertices end here
         *
         * */

    private:
        ssize_t writeVertexToFile(const vertex &vertexData);

    public:
        ssize_t totalVertices;
    private:
        std::string vertexFile;



    };

}


#endif //GRAPHQ_VERTEXCONTAINER_HPP
