#pragma once

using namespace std;
template <class T>
class Queue
{
public:
    virtual void push(T element) = 0;
    virtual int front() = 0;
    virtual void pop() = 0;
    virtual bool empty() = 0;
    virtual bool full() = 0;

    virtual ~Queue() {}
};