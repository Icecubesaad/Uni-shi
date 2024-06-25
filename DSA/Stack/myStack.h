#include "stack.h"
#include <iostream>
using namespace std;
template <class Typename>
class myStack :public Stack<Typename> {
public:
	myStack();	// non-parametarized constructor
	myStack(myStack& stack);	// copy constructor
	~myStack();	// destructor
	bool isEmpty();
	bool isFull();
	int size();		// return the current size of the stack
	Typename Top();
	void push(Typename num);
	Typename pop();
	void displayStack();
};
template<class Typename>
myStack<Typename>::myStack() {
	this->maxSize = 6;
	this->stackTop = -1;
	this->stackArray = new int[Stack<Typename>::maxSize];
}
template<class Typename>
myStack<Typename>::myStack( myStack& stack) {
	this->maxSize = stack.maxSize;
	this->stackTop = stack.stackTop;
	this->stackArray = new Typename[stack.maxSize];
	for (int i = 0; i <= Stack<Typename>::stackTop; ++i) {
		Stack<Typename>::stackArray[i] = stack.stackArray[i];
	}
}

template<class Typename>
Typename myStack<Typename>::pop() {
	if (!isEmpty()) {
		cout << this->stackArray[this->stackTop] << " is popped from index " << this->stackTop << endl;
		return this->stackArray[this->stackTop--];
	}
	else {
		cout << "Stack is Empty" << endl;
		return Typename();
	}
}

template<class Typename>
void myStack<Typename>::push(Typename num) {
	if (!isFull()) {
		this->stackArray[++this->stackTop] = num;
		cout << this->stackArray[this->stackTop] << " is pushed to index " << this->stackTop << endl;
	}
	else { cout << "Stack is Full" << endl; }
}

template<class Typename>
myStack<Typename>::~myStack() {
	delete[] this->stackArray;
}

template<class Typename>
bool myStack<Typename>::isEmpty() {
	return this->stackTop < 0;
}

template<class Typename>
bool myStack<Typename>::isFull() {
	return this->stackTop >= this->maxSize - 1;
}

template<class Typename>
int myStack<Typename>::size() {
	return this->maxSize;
}

template<class Typename>
Typename myStack<Typename>::Top() {
	if (!isEmpty()) {
		cout << this->stackArray[this->stackTop] << " is the top most value in stack at index " << this->stackTop << endl;
		return this->stackArray[this->stackTop];
	}
	else {
		cout << "Stack is Empty" << endl;
		return Typename();
	}
}

template<class Typename>
void myStack<Typename>::displayStack() {
	for (int i = 0; i <= this->stackTop; i++) {
		cout << this->stackArray[i] << " ";
	}
}