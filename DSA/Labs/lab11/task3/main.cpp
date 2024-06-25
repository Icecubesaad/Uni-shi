#include "myBinaryTree.h"
#include <iostream>
using namespace std;
int main() {
	myBinaryTree<int> b1;
	b1.insert_node(40);
	b1.insert_node(50);
	b1.insert_node(25);
	b1.insert_node(100);
	b1.insert_node(70);
	b1.insert_node(10);
	b1.search(60);
	return 0;
}