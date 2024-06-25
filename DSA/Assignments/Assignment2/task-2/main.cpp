#include "LinkedList.h"
#include <iostream>
using namespace std;
int main() {
	LinkedList<int> l1;
	l1.insertAtTail(1);
	l1.insertAtTail(2);
	l1.insertAtTail(1);
	if (LinkedList<int>::palindrome(l1)) {
		cout << "Given Linked list is a palindrome\n";
	}
	else {
		cout << "Not a palindrome\n";
	}
}