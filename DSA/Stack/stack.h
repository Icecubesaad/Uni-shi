#pragma once
template <class Typename>
class Stack {
protected:
	Typename* stackArray;
	int stackTop;
	int maxSize;
public:
	virtual void push(Typename n) = 0;
	virtual Typename pop() = 0;
};
