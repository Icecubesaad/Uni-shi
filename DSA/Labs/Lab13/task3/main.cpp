#include "MinHeapImpl.h"
#include <iostream>
using namespace std;
int main() {
    MinHeapImpl minHeap(10);

    minHeap.Insert(10);
    minHeap.Insert(20);
    minHeap.Insert(15);
    minHeap.Insert(12);
    minHeap.Insert(40);
    minHeap.Insert(25);
    minHeap.Insert(18);

    cout << "Min Heap: ";
    minHeap.display();

    int minElement = minHeap.removeMin();
    cout << "Removed min element: " << minElement << endl;

    cout << "Min Heap after removal: ";
    minHeap.display();

    return 0;
}