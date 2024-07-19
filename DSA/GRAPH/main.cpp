#pragma once

#include "MyGraph.h"
#include <iostream>

using namespace std;

int main() {
    MyGraph<int> graph;
    // adding vertexes to graph
    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    graph.addVertex(4);
    graph.addVertex(5);
    // creating edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 3);
    graph.addEdge(1, 2);
    graph.addEdge(1, 4);
    graph.addEdge(2, 5);
    graph.addEdge(3, 4);

    cout << "Depth-First Search: ";
    graph.DFS(0);
    cout << endl;

    cout << "Breadth-First Search: ";
    graph.BFS(0);
    cout << endl;

    return 0;
}