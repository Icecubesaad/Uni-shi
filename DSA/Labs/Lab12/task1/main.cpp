#include "myavltree.h"
#include <iostream>
using namespace std;

int main() {
    myavltree<int> tree;
    Node<int>* root = nullptr;
    root = tree.insertNode(root, 10);
    root = tree.insertNode(root, 20);
    root = tree.insertNode(root, 30);
    tree.inOrder(root);
    return 0;
}
