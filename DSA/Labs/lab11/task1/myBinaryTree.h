#include "binaryTree.h"
#include "node.h"
#include <iostream>
using namespace std;

template <class T>
class myBinaryTree : public BST<T> {
protected:
    Node<T>* insert(Node<T>*, T);
    void preorderTraversal(Node<T>*);
    void postorderTraversal(Node<T>*);
    void inorderTraversal(Node<T>*);
public:
    myBinaryTree();
    void insert_node(T);
    void print_preOrder();
    void print_inOrder();
    void print_postOrder();
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
void myBinaryTree<T>::preorderTraversal(Node<T>* node) {
    if (node == nullptr)
        return;

    cout << node->data << "->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

template <class T>
void myBinaryTree<T>::postorderTraversal(Node<T>* node) {
    if (node == nullptr)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << "->";
}

template <class T>
void myBinaryTree<T>::inorderTraversal(Node<T>* node) {
    if (node == nullptr)
        return;

    inorderTraversal(node->left);
    cout << node->data << "->";
    inorderTraversal(node->right);
}

template <class T>
void myBinaryTree<T>::insert_node(T val) {
    this->root = insert(this->root, val);
}

template <class T>
void myBinaryTree<T>::print_preOrder() {
    preorderTraversal(this->root);
    cout << endl;
}

template <class T>
void myBinaryTree<T>::print_inOrder() {
    inorderTraversal(this->root);
    cout << endl;
}

template <class T>
void myBinaryTree<T>::print_postOrder() {
    postorderTraversal(this->root);
    cout << endl;
}
