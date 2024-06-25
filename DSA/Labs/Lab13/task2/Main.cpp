#include "MaxHeapImpl.h"
#include <iostream>
using namespace std;
int main() {
    MaxHeapImpl maxHeap(10);

    maxHeap.Insert(10);
    maxHeap.Insert(20);
    maxHeap.Insert(15);
    maxHeap.Insert(12);
    maxHeap.Insert(40);
    maxHeap.Insert(25);
    maxHeap.Insert(18);

    cout << "Max Heap: ";
    maxHeap.display();

    return 0;
}