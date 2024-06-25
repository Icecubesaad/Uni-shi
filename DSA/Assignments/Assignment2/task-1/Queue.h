#pragma once
#include <iostream>
#include "Stack.h"
using namespace std;
template <class T>
class Queue {
	int FRONT, REAR;
	int size;
	T* arr;
public:
	Queue();
	Queue(int);
	void enqueue(T);
	T dequeue();
	T peak();
	bool isFull();
	bool isEmpty();
	void addElements(Stack<T>[],int);
	void display();
};
template <class T>
Queue<T>::Queue() {
	FRONT, REAR = -1;
	this->size = 6;
	arr = new T[size];
}
template <class T>
Queue<T>::Queue(int size) {
	FRONT, REAR = -1;
	this->size = size;
	arr = new T[size];
}
template <class T>
bool Queue<T>::isFull() {
	return (FRONT == 0 && REAR == this->size - 1);
}
template <class T>
bool Queue<T>::isEmpty() {
	return (FRONT < 0);
}
template <class T>
void Queue<T>::enqueue(T value) {
	if (!isFull()) {
		if (FRONT < 0) {
			FRONT = 0;
		}
		else {
			arr[++REAR] = value;
		}
	}
}
template <class T>
T Queue<T>::dequeue() {
	if (!isEmpty()) {
		T value;
	if (FRONT == REAR) {
		value = arr[FRONT];
		FRONT, REAR = -1;
	}
	else {
		value = arr[FRONT];
		FRONT++;
	}
	}
	else {
		cout << "Queue is empty\n";
	}
}
template <class T>
void Queue<T>::addElements(Stack<T> stack[],int size) {
	T dummyArray[15];
	int i, iterator = 0, index = 0;
	for ( i = 0; i < size; i++) {
		while (!stack[i].isEmpty()) {
			dummyArray[index] = stack[iterator].pop();
			index++;
		}
		iterator++;
	}
	//sorting the dummyArray
	for ( i = 0; i < 5 - 1; ++i) {
		for (int j = 0; j < 5 - i - 1; ++j) {
			if (dummyArray[j] > dummyArray[j + 1]) {
				T temp = dummyArray[j];
				dummyArray[j] = dummyArray[j + 1];
				dummyArray[j + 1] = temp;
			}
		}
	}
	// enqueue in queue
	for (int i = 0; i < 15; i++)
	{
		this->enqueue(dummyArray[i]);
	}

}
template <class T>
void Queue<T>::display() {
	for (int i = FRONT; i <= REAR; i++)
	{
		cout << arr[i] << " ";
	}
}