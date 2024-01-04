//
// Created by us029467 on 12/21/2023.
//

#ifndef GRAPH_PUZZLE_GAME_UTKUSANCAKLI_GRAPH_H
#define GRAPH_PUZZLE_GAME_UTKUSANCAKLI_GRAPH_H

#include <string>
#include "AbstractGraph.h"
#include "Edge.h"

namespace array{
    class Graph : public AbstractGraph{
    private:
        int** edges;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source, int to, std::vector <std::string> v);
        int** floydWarshall();
        void prim();
        void breadthFirstSearch(bool* visited, int startNode) override;
        bool check(std::string a, std::string b);
    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;

        Edge* edgeList(int& edgeCount) override;

        std::string changeToName(int previous, std::vector <std::string> v);
    };

}



#endif //GRAPH_PUZZLE_GAME_UTKUSANCAKLI_GRAPH_H
