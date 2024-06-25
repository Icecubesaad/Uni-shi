#include "MinHeap.h"

using namespace std;
class MinHeapImpl : public MinHeapAbstract {
private:
    int* heapArray;
    int capacity;
    int heapSize;

    void heapifyDown(int index);

public:
    MinHeapImpl(int capacity);
    ~MinHeapImpl();

    void Insert(int key) override;
    void display() override;
    int removeMin() override;
};

MinHeapImpl::MinHeapImpl(int capacity) {
    this->capacity = capacity;
    this->heapSize = 0;
    this->heapArray = new int[capacity];
}

MinHeapImpl::~MinHeapImpl() {
    delete[] heapArray;
}

void MinHeapImpl::heapifyDown(int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int smallest = index;

    if (left < heapSize && heapArray[left] < heapArray[smallest]) {
        smallest = left;
    }

    if (right < heapSize && heapArray[right] < heapArray[smallest]) {
        smallest = right;
    }

    if (smallest != index) {
        swap(heapArray[index], heapArray[smallest]);
        heapifyDown(smallest);
    }
}

void MinHeapImpl::Insert(int key) {
    if (heapSize == capacity) {
        cout << "Heap is full. Cannot insert " << key << endl;
        return;
    }

    heapArray[heapSize] = key;
    heapSize++;
    int index = heapSize - 1;

    while (index > 0 && heapArray[index] < heapArray[(index - 1) / 2]) {
        swap(heapArray[index], heapArray[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

void MinHeapImpl::display() {
    for (int i = 0; i < heapSize; i++) {
        cout << heapArray[i] << " ";
    }
    cout << endl;
}

int MinHeapImpl::removeMin() {
    if (heapSize == 0) {
        cout << "Heap is empty. Cannot remove min element." << endl;
        return -1;
    }

    int minElement = heapArray[0];
    heapArray[0] = heapArray[heapSize - 1];
    heapSize--;
    heapifyDown(0);
    return minElement;
}
