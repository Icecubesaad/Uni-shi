#include "binaryTree.h"
#include "node.h"
#include <iostream>
using namespace std;

template <class T>
class myBinaryTree : public BST<T> {
protected:
    Node<T>* insert(Node<T>*, T);
    T findMin(Node<T>*);
    T findMax(Node<T>*);
    Node<T>* deleteNode(Node<T>*,T);
public:
    myBinaryTree();
    void insert_node(T);
    void find_min();
    void find_max();
    void delete_node(T);
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
void myBinaryTree<T>::find_min() {
    cout<<"Minimum value : "<<findMin(this->root)<<endl;
}
template <class T>
void myBinaryTree<T>::find_max() {
    cout<<"Maximum value : "<<findMax(this->root)<<endl;
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
template <class T>
T myBinaryTree<T>::findMin(Node<T>* root) {
    Node<T>* current = this->root;
    if (current == nullptr) {
        return T(0);
    }

    while (current->left != nullptr) {
        current = current->left;
    }
    return current->data;
}template <class T>
T myBinaryTree<T>::findMax(Node<T>* root) {
    Node<T>* current = this->root;
    if (current == nullptr) {
        return T(0);
    }

    while (current->right != nullptr) {
        current = current->right;
    }
    return current->data;
}