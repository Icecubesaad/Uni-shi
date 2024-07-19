#pragma once

#include <unordered_map>

using namespace std;

template <typename T>
class Graph {
public:
    virtual void addVertex(T vertex) = 0;
    virtual void addEdge(T src, T dest) = 0;
    virtual void DFS(T start) = 0;
    virtual void BFS(T start) = 0;

    virtual ~Graph() {}
};