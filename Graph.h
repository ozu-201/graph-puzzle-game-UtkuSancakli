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
        Path* dijkstra(int source);
        int** floydWarshall();
        void prim();
        void breadthFirstSearch(bool* visited, int startNode, std::vector<std::string>) override;
        bool check(std::string a, std::string b);

    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;

        Edge* edgeList(int& edgeCount) override;
    };

}



#endif //GRAPH_PUZZLE_GAME_UTKUSANCAKLI_GRAPH_H
