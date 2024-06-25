#include "myBinaryTree.h"
#include <iostream>
using namespace std;
int main() {
	myBinaryTree<int> b1;
	//120,50,95,176,69,57,43,83,121,17,16,12,9, 12
	b1.insert_node(120);
	b1.insert_node(50);
	b1.insert_node(95);
	b1.insert_node(176);
	b1.insert_node(69);
	b1.insert_node(57);
	b1.insert_node(43);
	b1.insert_node(83);
	b1.insert_node(121);
	b1.insert_node(17);
	b1.insert_node(16);
	b1.insert_node(12);
	b1.insert_node(9);
	b1.insert_node(12);
	b1.delete_node(51);
	b1.delete_node(121);
	b1.delete_node(16);
	b1.delete_node(85);
	return 0;
}