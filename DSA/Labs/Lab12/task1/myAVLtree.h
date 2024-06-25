

#include "avltree.h"
#include <iostream>
#include "Node.h"
#include <cstdlib>

template <typename T>
class myavltree : public avlTree<T> {
public:
    Node<T>* insertNode(Node<T>* node, T key) override;
    Node<T>* deleteNode(Node<T>* root, T key) override;
    void inOrder(Node<T>* root) override;
    void preOrder(Node<T>* root) override;
    void postOrder(Node<T>* root) override;

protected:
    int height(Node<T>* N) override;
    int max(int a, int b) override;
    Node<T>* rightRotate(Node<T>* y) override;
    Node<T>* leftRotate(Node<T>* x) override;
    int getBalanceFactor(Node<T>* N) override;
    Node<T>* nodeWithMimumValue(Node<T>* node) override;
};

// Implementation of helper functions
template <typename T>
int myavltree<T>::height(Node<T>* N) {
    if (N == nullptr)
        return 0;
    return N->height;
}

template <typename T>
int myavltree<T>::max(int a, int b) {
    return (a > b) ? a : b;
}

template <typename T>
Node<T>* myavltree<T>::rightRotate(Node<T>* y) {
    Node<T>* x = y->left;
    Node<T>* T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

template <typename T>
Node<T>* myavltree<T>::leftRotate(Node<T>* x) {
    Node<T>* y = x->right;
    Node<T>* T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

template <typename T>
int myavltree<T>::getBalanceFactor(Node<T>* N) {
    if (N == nullptr)
        return 0;
    return height(N->left) - height(N->right);
}

template <typename T>
Node<T>* myavltree<T>::nodeWithMimumValue(Node<T>* node) {
    Node<T>* current = node;
    while (current->left != nullptr)
        current = current->left;
    return current;
}

// Implementation of insertNode
template <typename T>
Node<T>* myavltree<T>::insertNode(Node<T>* node, T key) {
    if (node == nullptr)
        return new Node<T>(key);

    if (key < node->key)
        node->left = insertNode(node->left, key);
    else if (key > node->key)
        node->right = insertNode(node->right, key);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));
    int balanceFactor = getBalanceFactor(node);

    if (balanceFactor > 1) {
        if (key < node->left->key)
            return rightRotate(node);
        else if (key > node->left->key) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }

    if (balanceFactor < -1) {
        if (key > node->right->key)
            return leftRotate(node);
        else if (key < node->right->key) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }

    return node;
}

// Implementation of deleteNode
template <typename T>
Node<T>* myavltree<T>::deleteNode(Node<T>* root, T key) {
    if (root == nullptr)
        return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if ((root->left == nullptr) || (root->right == nullptr)) {
            Node<T>* temp = root->left ? root->left : root->right;
            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            }
            else
                *root = *temp;
            free(temp);
        }
        else {
            Node<T>* temp = nodeWithMimumValue(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }

    if (root == nullptr)
        return root;

    root->height = 1 + max(height(root->left), height(root->right));
    int balanceFactor = getBalanceFactor(root);

    if (balanceFactor > 1) {
        if (getBalanceFactor(root->left) >= 0)
            return rightRotate(root);
        else {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
    }

    if (balanceFactor < -1) {
        if (getBalanceFactor(root->right) <= 0)
            return leftRotate(root);
        else {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    }

    return root;
}

// Implementation of inOrder
template <typename T>
void myavltree<T>::inOrder(Node<T>* root) {
    if (root != nullptr) {
        inOrder(root->left);
        std::cout << root->key << " ";
        inOrder(root->right);
    }
}

// Implementation of preOrder
template <typename T>
void myavltree<T>::preOrder(Node<T>* root) {
    if (root != nullptr) {
        std::cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Implementation of postOrder
template <typename T>
void myavltree<T>::postOrder(Node<T>* root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        std::cout << root->key << " ";
    }
}