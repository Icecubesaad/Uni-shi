#pragma once

#include "Queue.h"
#include <iostream>
using namespace std;
template <class T>
class MyQueue : public Queue<T>
{
private:
    T *array;
    int frontIndex;
    int rearIndex;
    int capacity;
    int size;

public:
    MyQueue(int capacity)
    {
        this->capacity = capacity;
        this->array = new T[capacity];
        this->frontIndex = 0;
        this->rearIndex = 0;
        this->size = 0;
    }

    ~MyQueue()
    {
        delete[] array;
    }
    void push(T element) override;

    T front() override;

    void pop() override;

    bool empty() override;

    bool full() override;
};
template <class T>
void MyQueue<T>::push(T element)
{
    if (full())
    {
        cout << "Queue is full. Cannot push element." << endl;
        return;
    }

    array[rearIndex] = element;
    rearIndex = (rearIndex + 1) % capacity;
    size++;
}
template <class T>

T MyQueue<T>::front()
{
    if (empty())
    {
        cout << "Queue is empty. Cannot retrieve front element." << endl;
        return T(0);
    }

    return array[frontIndex];
}
template <class T>

void MyQueue<T>::pop()
{
    if (empty())
    {
        cout << "Queue is empty. Cannot pop element." << endl;
        return;
    }

    frontIndex = (frontIndex + 1) % capacity;
    size--;
}
template <class T>

bool MyQueue<T>::empty()
{
    return size == 0;
}
template <class T>

bool MyQueue<T>::full()
{
    return size == capacity;
}