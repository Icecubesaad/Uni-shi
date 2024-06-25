#pragma once
#include <iostream>
using namespace std;
template <class T>
class Stack {
	T* arr;
	int size;
public:
	int top;
	Stack();
	Stack(int);
	void push(T);
	bool isEmpty();
	bool isFull();
	T pop();
	T peak();
	int getSize();
	void display();
};
template <class T>
Stack<T>::Stack() {
	this->size = 6;
	arr = new T[size];
	top = -1;

}
template <class T>
Stack<T>::Stack(int size) {
	this->size = size;
	this->arr = new T[this->size];
	this->top = -1;
}
template <class T>
bool Stack<T>::isFull() {
	return (this->top >= this->size);
}
template <class T>
bool Stack<T>::isEmpty() {
	return (this->top < 0);
}
template <class T>
void Stack<T>::push(T value) {
	if (!isFull()) {
		this->top++;
		this->arr[this->top] = value;
	}
	else {
		cout << "Stack is full\n";
	}
}
template <class T>
T Stack<T>::pop() {
	if (!isEmpty()) {
	T value = this->arr[this->top];
	this->top--;
	return value;
	}
	else {
		cout << "Stack is empty \n";
	}
}
template <class T>
T Stack<T>::peak() {
	return (this->arr[this->top]);
}
template <class T>
int Stack<T>::getSize() {
	return this->size;
}
template <class T>
void Stack<T>::display() {
	for ( int i = this->top; i >= 0; i--)
	{
		cout << this->arr[i] << " ";
	}
}