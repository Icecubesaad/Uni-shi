#include "MinHeap.h"
#include <iostream>
using namespace std;
template <typename T>
class MinHeapImpl : public MinHeapAbstract<T> {
private:
    T* heapArray;
    int capacity;
    int heapSize;

    void heapifyUp(int index) {
        if (index && heapArray[index] < heapArray[(index - 1) / 2]) {
            swap(heapArray[index], heapArray[(index - 1) / 2]);
            heapifyUp((index - 1) / 2);
        }
    }

public:
    MinHeapImpl(int capacity) {
        this->capacity = capacity;
        this->heapSize = 0;
        this->heapArray = new T[capacity];
    }

    ~MinHeapImpl() {
        delete[] heapArray;
    }

    void Insert(const T& key) override {
        if (heapSize == capacity) {
            cout << "Heap is full. Cannot insert " << key << endl;
            return;
        }

        heapArray[heapSize] = key;
        heapSize++;
        heapifyUp(heapSize - 1);
    }

    void display() override {
        for (int i = 0; i < heapSize; i++) {
            cout << heapArray[i] << " ";
        }
        cout << endl;
    }
};