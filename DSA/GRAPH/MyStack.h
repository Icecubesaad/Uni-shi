#pragma once

#include "stack.h"
#include <iostream>
using namespace std;
template <class T>
class MyStack : public Stack<T>
{
private:
    int *array;
    int topIndex;
    int capacity;
    int size;

public:
    MyStack(int capacity)
    {
        this->capacity = capacity;
        this->array = new T[capacity];
        this->topIndex = -1;
        this->size = 0;
    }

    ~MyStack()
    {
        delete[] array;
    }
    void push(T element) override;

    T top() override;

    void pop() override;

    bool empty() override;

    bool full() override;
};
template <class T>
void MyStack<T>::push(T element)
{
    if (full())
    {
        cout << "Stack is full. Cannot push element." << endl;
        return;
    }

    array[++topIndex] = element;
    size++;
}
template <class T>
T MyStack<T>::top()
{
    if (empty())
    {
        cout << "Stack is empty. Cannot retrieve top element." << endl;
        return T(0);
    }

    return array[topIndex];
}
template <class T>
void MyStack<T>::pop()
{
    if (empty())
    {
        cout << "Stack is empty. Cannot pop element." << endl;
        return;
    }

    topIndex--;
    size--;
}
template <class T>
bool MyStack<T>::empty()
{
    return size == 0;
}
template <class T>
bool MyStack<T>::full()
{
    return size == capacity;
}