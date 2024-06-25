#include <iostream>
using namespace std;
template <class T>
class queue {
	int FRONT, REAR;
	T* arr;
	int size;
public:
	queue();
	queue(int);
	bool isFull();
	bool isEmpty();
	void enqueue(int);
	T dequeue();
	void display();
	T Top();
};
template<class T>
queue<T>::queue() {
	this->size = 6;
	this->FRONT, this->REAR = -1;
	this->arr = new int[this->size];
}
template <class T>
queue<T>::queue(int size) {
	this->size = size;
	this->FRONT, this->REAR = -1;
	this->arr = new int[size];
}
template <class T>
bool queue<T>::isFull() {
	return (FRONT ==0 && REAR == size-1);
}
template <class T>
bool queue<T>::isEmpty() {
	return (FRONT < 0);
}
template<class T>
void queue<T>::enqueue(int value) {
	if (!isFull()) {
		if (FRONT == -1) {
			FRONT = 0;
		}
		arr[++REAR] = value;
	}
	else {
		cout << "Queue is full\n";
	}
}
template <class T>
T queue<T>::dequeue() {
	if (!isEmpty()) {
		int num;
		num = arr[FRONT];
		FRONT++;
		return num;
	}
	else {
		cout << "Queue is empty\n";
	}
}
template <class T>
void queue<T>::display() {
	for (int i = FRONT; i <= REAR; i++)
	{
		cout << this->arr[i] << " ";
	}
	cout << endl;
}
template <class T>
T queue<T>::Top() {
	if (!isEmpty()) {
		int num;
		num = this->arr[REAR];
		return num;
	}
	else {
		cout << "Stack is empty\n";
	}
}
