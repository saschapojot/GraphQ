//
// Created by Xi Liu on 2019/7/4.
//

#ifndef GRAPHQ_GRAPHQ_HPP
#define GRAPHQ_GRAPHQ_HPP

#include "edgeContainer.hpp"
#include "vertexContainer.hpp"
#include <vector>
#include <fstream>
namespace graphQ {
    class graph {

    public:
        graph();

        int graph(const std::string &csvFileName);

        int graph(const std::string &vertexFile, const std::string &edgeFile);

        int ~graph();

    public:
        //iterate through all vertices
        vertex *iterVertex();

        //iterate through all edges
        edge *iterEdge();

        //iterate out edge, by vertexID
        edge *iterOutEdge(const vid_t &vertexID);

        //iterate out edge, by vertex
        edge *iterOutEdge(const vertex &vertexData);

        //iterate in edge, by vertexID
        edge *iterInEdge(const vid_t &vertexID);

        //iterate in edge, by vertex
        edge *iterInEdge(const vertex &vertexData);

        //iterate out vertex, by vertexID
        vertex *iterOutVertex(const vid_t &vertexID);

        //iterate out vertex, by vertex
        vertex *iterateOutVertex(const vertex &vertex);

        //iterate in vertex, by vertexID
        vertex *iterateInVertex(const vid_t &vertexID);

        //iterate in vertex, by vertex
        vertex *interateInVertex(const vertex &vertex);


    private:
        //parse csv and build graph
        int buildGraph(const string &csvFileName);


    public:
        edgeContainer edges;
        vertexContainer vertices;
        std::vector<std::string> vertexProperties;
        std::vector<std::string> edgeProperties;
        std::string graphName;

    private:
        std::string edgeFileName;
        std::string vertexFileName;
        std::fstream &edgeHandler;
        std::fstream &vertexHandler;
        bool directed;


    };
}
#endif //GRAPHQ_GRAPHQ_HPP
