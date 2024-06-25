
#include "MaxHeap.h"
#include <iostream>
using namespace std;
class MaxHeapImpl : public MaxHeapAbstract {
private:
    int* heapArray;
    int capacity;
    int heapSize;

    void heapifyUp(int index);

public:
    MaxHeapImpl(int capacity);
    ~MaxHeapImpl();

    void Insert(int key) override;
    void display() override;
};

MaxHeapImpl::MaxHeapImpl(int capacity) {
    this->capacity = capacity;
    this->heapSize = 0;
    this->heapArray = new int[capacity];
}

MaxHeapImpl::~MaxHeapImpl() {
    delete[] heapArray;
}

void MaxHeapImpl::heapifyUp(int index) {
    if (index && heapArray[index] > heapArray[(index - 1) / 2]) {
        swap(heapArray[index], heapArray[(index - 1) / 2]);
        heapifyUp((index - 1) / 2);
    }
}

void MaxHeapImpl::Insert(int key) {
    if (heapSize == capacity) {
        cout << "Heap is full. Cannot insert " << key << endl;
        return;
    }

    heapArray[heapSize] = key;
    heapSize++;
    heapifyUp(heapSize - 1);
}

void MaxHeapImpl::display() {
    for (int i = 0; i < heapSize; i++) {
        cout << heapArray[i] << " ";
    }
    cout << std::endl;
}