#include "node.h"
template <class T>
class BST {
protected:
    Node<T>* root;
public:
    virtual void insert_node(T) = 0;
    virtual void delete_node(T) = 0;
    virtual void search(T)=0;
};
