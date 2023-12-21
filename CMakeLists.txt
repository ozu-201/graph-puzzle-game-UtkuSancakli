cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_UtkuSancakli)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(graph_puzzle_game_UtkuSancakli
        DisjointSet.cpp
        DisjointSet.h
        Edge.cpp
        Edge.h
        Element.cpp
        Element.h
        Graph.cpp
        Graph.h
        Heap.cpp
        Heap.h
        HeapNode.cpp
        HeapNode.h
        LinkedList.cpp
        LinkedList.h
        MinHeap.cpp
        MinHeap.h
        Queue.cpp
        Queue.h
        Set.cpp
        Set.h AbstractGraph.cpp Path.cpp Main.cpp Node.cpp)
