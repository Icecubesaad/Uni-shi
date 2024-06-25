#include "circularQueue.h"
#include <iostream>
using namespace std;
int main() {
	circularQueue<int> c1;
	c1.enqueue(1);
	c1.enqueue(2);
	c1.enqueue(3);
	c1.enqueue(4);
	c1.dequeue();
	c1.dequeue();
	c1.dequeue();
	c1.Top();
	c1.display();
}