#include "MinHeapImpl.h"
#include <iostream>
using namespace std;
int main() {
    MinHeapImpl<int> minHeap(10);
    minHeap.Insert(10);
    minHeap.Insert(20);
    minHeap.Insert(15);
    minHeap.Insert(12);
    minHeap.Insert(40);
    minHeap.Insert(25);
    minHeap.Insert(18);

    cout << "Min Heap: ";
    minHeap.display();

    return 0;
}