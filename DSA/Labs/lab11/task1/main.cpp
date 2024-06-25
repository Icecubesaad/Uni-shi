#include "myBinaryTree.h"
#include <iostream>
using namespace std;
int main() {
	myBinaryTree<int> b1;
	b1.insert_node(40);
	b1.insert_node(50);
	b1.insert_node(70);
	b1.insert_node(10);
	cout << "PreOrder Traversal: ";
	b1.print_preOrder();

	cout << "InOrder Traversal: ";
	b1.print_inOrder();

	cout << "PostOrder Traversal: ";
	b1.print_postOrder();
	return 0;
}