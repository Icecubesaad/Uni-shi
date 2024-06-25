#include "LinkedList.h"
#include <iostream>
using namespace std;
int main() {
	LinkedList<int> l1;
	l1.insertAtTail(1);
	l1.insertAtTail(2);
	l1.insertAtTail(7);
	l1.insertAtTail(2);
	l1.insertAtTail(8);
	l1.insertAtTail(9);
	l1.insertAtTail(1);
	LinkedList<int>::removeLessThanPrev(l1);
	l1.display();
}