
#include "Node.h"
#include <string>

template <typename T>
class avlTree {
public:
    virtual Node<T>* insertNode(Node<T>* node, T key) = 0;
    virtual Node<T>* deleteNode(Node<T>* root, T key) = 0;
    virtual void inOrder(Node<T>* root) = 0;
    virtual void preOrder(Node<T>* root) = 0;
    virtual void postOrder(Node<T>* root) = 0;

protected:
    virtual int height(Node<T>* N) = 0;
    virtual int max(int a, int b) = 0;
    virtual Node<T>* rightRotate(Node<T>* y) = 0;
    virtual Node<T>* leftRotate(Node<T>* x) = 0;
    virtual int getBalanceFactor(Node<T>* N) = 0;
    virtual Node<T>* nodeWithMimumValue(Node<T>* node) = 0;
};

