#pragma once
template <typename T>
class Node {
public:
    T key;
    Node* left;
    Node* right;
    int height;

    Node(T k) : key(k), left(nullptr), right(nullptr), height(1) {}
};

