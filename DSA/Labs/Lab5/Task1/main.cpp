#include "queue.h"
#include <iostream>
using namespace std;
int main() {
	queue<int> q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.dequeue();
	cout << q1.Top() << endl;
	q1.display();
}