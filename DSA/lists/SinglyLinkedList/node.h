class Node {
public:
    int data;
    Node* next;
    Node();
    Node(int);
};

Node::Node() {
    data = 0;
    next = nullptr;
}

Node::Node(int value) {
    this->data = value;
    this->next = nullptr;
}