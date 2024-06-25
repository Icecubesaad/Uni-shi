#include "node.h"
template <class T>
class BST {
protected:
    Node<T>* root;
public:
    virtual void insert_node(T) = 0;
    virtual void print_preOrder() = 0;
    virtual void print_postOrder() = 0;
    virtual void print_inOrder() = 0;
};
