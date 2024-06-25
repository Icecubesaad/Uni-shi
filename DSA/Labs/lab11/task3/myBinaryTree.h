#include "binaryTree.h"
#include "node.h"
#include <iostream>
using namespace std;

template <class T>
class myBinaryTree : public BST<T> {
protected:
    Node<T>* insert(Node<T>*, T);
    Node<T>* deleteNode(Node<T>*,T);
    Node<T>* searchNode(Node<T>* , T);
public:
    myBinaryTree();
    void insert_node(T);
    void delete_node(T);
    void search(T);
};

template <class T>
myBinaryTree<T>::myBinaryTree() {
    this->root = nullptr;
}

template <class T>
Node<T>* myBinaryTree<T>::insert(Node<T>* node, T value) {
    if (node == nullptr) {
        return (new Node<T>(value));
    }
    else if (node->data > value) {
        node->left = insert(node->left, value);
    }
    else if (node->data < value) {
        node->right = insert(node->right, value);
    }
    return node;
}

template <class T>
void myBinaryTree<T>::insert_node(T val) {
    this->root = insert(this->root, val);
}
template <class T>
Node<T>* myBinaryTree<T>::searchNode(Node<T>* node, T key) {
    if (node == nullptr || node->data == key) {
        return node;
    }
    if (key < node->data) {
        return searchNode(node->left, key);
    }
    return searchNode(node->right, key);
}
template <class T>
void myBinaryTree<T>::search(T val) {
    if (searchNode(this->root, val) != nullptr) {
        cout << "Node is found\n";
    }
    else {
        cout << "Node is not found\n";
    }
}
template <class T>
void myBinaryTree<T>::delete_node(T key) {
    deleteNode(this->root,key);
}
template <class T>
Node<T>* myBinaryTree<T>::deleteNode(Node<T>* root,T key) {
    if (root == nullptr)
        return root;
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
        return root;
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
        return root;
    }

    if (root->left == nullptr) {
        Node<T>* temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == nullptr) {
        Node<T>* temp = root->left;
        delete root;
        return temp;
    }

    Node<T>* succParent = root;
    Node<T>* succ = root->right;
    while (succ->left != nullptr) {
        succParent = succ;
        succ = succ->left;
    }

    root->data = succ->data;

    if (succParent->left == succ)
        succParent->left = succ->right;
    else
        succParent->right = succ->right;

    delete succ;
    return root;
}