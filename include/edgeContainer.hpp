//
// Created by Xi Liu on 2019/7/4.
//

#ifndef GRAPHQ_EDGECONTAINER_HPP
#define GRAPHQ_EDGECONTAINER_HPP

#include "data.hpp"
#include <iostream>
#include <string>
namespace graphQ {
    class edgeContainer {


/*
 * The following section contains functions for inserting, deleting, updating and querying of edges
 *
 * */
    public:

        //insert edge by edge data

        ssize_t insertEdge(const edge &edgeData);

        //insert edge by vertex
        ssize_t insertEdge(const vertex &inVertex, const vertex &outVertex);

        //insert edge by vid
        ssize_t insertEdge(const vid_t &inVertexID, const vid_t &outVertexID);

        //update edge by edge reference
        ssize_t updateEdge(edge &edgeData);

        //update edge by eid
        int updateEdge(const eid_t &edgeID);

        //update edge by vid
        int updateEdge(const vid_t &inVertexID, const vid_t &outVertexId);

        //update edge by vertex
        int updateEdge(const vertex &inVertex, const vertex &outVertex);

        //returns an edge pointer by eid
        edge *queryEdge(const eid_t &edgeID);

        //returns an edge pointer by vid
        edge *queryEdge(const vid_t &inVertexID, const vid_t &outVertexID);

        //returns an edge pointer by vertex
        edge *queryEdge(const vertex &inVertex, const vertex &outVertex);

        //delete an edge by eid
        int deleteEdge(const eid &edgeID);

        //delete an edge by vid
        int deleteEdge(const vid_t &inVertexID, const vid_t &outVertexID);

        //delete an edge by vertex
        int deleteEdge(const vertex &inVertex, const vertex &outVertex);
        /*inserting, deleting,updating and querying of edges end here
         *
         * */

    private: ssize_t writeEdgeToFile(const edge &edgeData);//write to RBT file


    public:
        ssize_t totalEdges;
    private:
        std::string edgeFile;




    };

}
#endif //GRAPHQ_EDGECONTAINER_HPP
