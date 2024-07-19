#pragma once

#include "Graph.h"
#include <unordered_map>
#include "MyStack.h"
#include "MyQueue.h"
#include <iostream>

using namespace std;

template <typename T>
class MyGraph : public Graph<T>
{
private:
    // Adjacency list to store graph edges
    unordered_map<T, unordered_map<T, bool>> adjList;
    // Map to keep track of visited vertices
    unordered_map<T, bool> visited;

public:
    MyGraph() {}

    // Add a vertex to the graph
    void addVertex(T vertex) override
    {
        adjList[vertex] = {};
        visited[vertex] = false;
    }

    // Add an edge between two vertices
    void addEdge(T src, T dest) override
    {
        // If source vertex is not present, add it
        if (adjList.find(src) == adjList.end())
        {
            addVertex(src);
        }
        // If destination vertex is not present, add it
        if (adjList.find(dest) == adjList.end())
        {
            addVertex(dest);
        }
        // Mark the edge as present in both directions (for undirected graph)
        adjList[src][dest] = true;
        adjList[dest][src] = true;
    }

    // Perform Depth-First Search (DFS) traversal starting from a given vertex
    void DFS(T start) override
    {
        // Reset the visited status for all vertices
        for (auto &pair : visited)
        {
            pair.second = false;
        }

        // Create a stack with size 30
        MyStack<T> s(30);
        s.push(start);

        while (!s.empty())
        {
            T vertex = s.top();
            s.pop();

            if (!visited[vertex])
            {
                cout << vertex << " ";
                visited[vertex] = true;

                // Use a temporary stack to process neighbors in reverse order
                MyStack<T> tempStack(30);
                for (const auto &neighbor : adjList[vertex])
                {
                    if (!visited[neighbor.first])
                    {
                        tempStack.push(neighbor.first);
                    }
                }
                while (!tempStack.empty())
                {
                    s.push(tempStack.top());
                    tempStack.pop();
                }
            }
        }
        cout << endl; // For better output formatting
    }

    // Perform Breadth-First Search (BFS) traversal starting from a given vertex
    void BFS(T start) override
    {
        // Reset the visited status for all vertices
        for (auto &pair : visited)
        {
            pair.second = false;
        }

        // Create a queue with size 30
        MyQueue<T> q(30);
        q.push(start);
        visited[start] = true;

        while (!q.empty())
        {
            T vertex = q.front();
            q.pop();

            cout << vertex << " ";

            for (const auto &neighbor : adjList[vertex])
            {
                if (!visited[neighbor.first])
                {
                    q.push(neighbor.first);
                    visited[neighbor.first] = true;
                }
            }
        }
        cout << endl; // For better output formatting
    }
};