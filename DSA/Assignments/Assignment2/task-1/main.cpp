#include "Stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;
int main() {
	Stack<int> n[3];
    Queue<int> q1(15);
    n[0].push(5);
    n[0].push(4);
    n[0].push(3);
    n[0].push(2);
    n[0].push(1);

    n[1].push(10);
    n[1].push(9);
    n[1].push(8);
    n[1].push(7);
    n[1].push(6);

    n[2].push(15);
    n[2].push(14);
    n[2].push(13);
    n[2].push(12);
    n[2].push(11);
    q1.addElements(n,3);
    q1.display();
}