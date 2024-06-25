template <class T>
class Node {
public:
    T data;
    Node* next;
    Node();
    Node(T);
};
template <class T>
Node<T>::Node() {
    data = 0;
    next = nullptr;
}
template <class T>
Node<T>::Node(T value) {
    this->data = value;
    this->next = nullptr;
}