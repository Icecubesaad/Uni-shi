#include "BST.h"
#include <iostream>
using namespace std;
int main() {
	BST bst;
	bst.insert_node(40);
	bst.insert_node(20);
	bst.insert_node(30);
	bst.insert_node(65);
	bst.insert_node(43);
	cout << "heigh of tree : " << bst.heightRec(bst.root) << endl;
}