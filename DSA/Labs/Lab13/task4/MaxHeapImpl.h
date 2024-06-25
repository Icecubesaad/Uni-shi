#include "MaxHeap.h"
#include <iostream>
using namespace std;
class MaxHeapImpl : public MaxHeapAbstract {
private:
    int* heapArray;
    int capacity;
    int heapSize;

    void heapifyDown(int index);

public:
    MaxHeapImpl(int capacity);
    ~MaxHeapImpl();

    void Insert(int key) override;
    void display() override;
    int removeMax() override;
};


MaxHeapImpl::MaxHeapImpl(int capacity) {
    this->capacity = capacity;
    this->heapSize = 0;
    this->heapArray = new int[capacity];
}

MaxHeapImpl::~MaxHeapImpl() {
    delete[] heapArray;
}

void MaxHeapImpl::heapifyDown(int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int largest = index;

    if (left < heapSize && heapArray[left] > heapArray[largest]) {
        largest = left;
    }

    if (right < heapSize && heapArray[right] > heapArray[largest]) {
        largest = right;
    }

    if (largest != index) {
        swap(heapArray[index], heapArray[largest]);
        heapifyDown(largest);
    }
}

void MaxHeapImpl::Insert(int key) {
    if (heapSize == capacity) {
        cout << "Heap is full. Cannot insert " << key << endl;
        return;
    }

    heapArray[heapSize] = key;
    heapSize++;
    int index = heapSize - 1;

    while (index > 0 && heapArray[index] > heapArray[(index - 1) / 2]) {
        swap(heapArray[index], heapArray[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

void MaxHeapImpl::display() {
    for (int i = 0; i < heapSize; i++) {
        cout << heapArray[i] << " ";
    }
    cout << endl;
}

int MaxHeapImpl::removeMax() {
    if (heapSize == 0) {
        cout << "Heap is empty. Cannot remove max element." << endl;
        return -1;
    }

    int maxElement = heapArray[0];
    heapArray[0] = heapArray[heapSize - 1];
    heapSize--;
    heapifyDown(0);
    return maxElement;
}