#pragma once
template <class T>
class Node {
public:
	Node* left;
	Node* right;
	T data;
	Node() {
		this->data = 0;
		this->left = nullptr;
		this->right = nullptr;
	}
	Node(T val) {
		this->data = val;
		this->left = nullptr;
		this->right = nullptr;
	}
};