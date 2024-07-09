#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* left;
	Node* right;
public:
	Node() {
		data = 0;
		left = right = nullptr;
	}
	Node(int value) {
		data = value;
		left = right = nullptr;
	}
};
class BST {
protected:
	Node* insert(Node* node, int value) {
		if (node == nullptr) {
			return new Node(value);
		}
		if (value < node->data) {
			node->left = insert(node->left, value);
		}
		else if (value > node->data) {
			node->right = insert(node->right, value);
		}
		return node;
	}
public:
	Node* root;
	BST() {
		root = nullptr;
	}
	void insert_node(int val) {
		this->root = insert(this->root, val);
	}
	int heightRec(Node* node) {
		if (node == nullptr) {
			return 0;
		}

		int leftHeight = heightRec(node->left);
		int rightHeight = heightRec(node->right);

		return 1 + max(leftHeight, rightHeight);
	}
	
};
