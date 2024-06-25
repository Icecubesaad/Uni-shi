#include <iostream>
using namespace std;
template <class T>
class circularQueue {
	int FRONT, REAR, maxSize;
	T* arr;
public:
	circularQueue();
	circularQueue(int);
	bool isFull();
	bool isEmpty();
	void enqueue(int);
	T dequeue();
	void display();
	T Top();
};
template <class T>
circularQueue<T>::circularQueue() {
	FRONT = -1;
	REAR = -1;
	this->maxSize = 6;
	this->arr = new T[6];
}
template <class T>
circularQueue<T>::circularQueue(int size) {
	int FRONT, REAR = -1;
	this->maxSize = size;
	this->arr = new T[size];
}
template <class T>
bool circularQueue<T>::isEmpty() {
	return (FRONT < 0);
}
template <class T>
bool circularQueue<T>::isFull() {
	return (FRONT == ((REAR + 1) % maxSize));
}
template <class T>
void circularQueue<T>::enqueue(int value) {
	if (!isFull()) {
		if (FRONT < 0) {
			FRONT = 0;
		}
		REAR = (REAR + 1) % maxSize;
		this->arr[REAR] = value;
		cout << value << " is enqueued in the queue at index = "<<REAR<<endl;
	}
	else {
		cout << "Queue is full\n";
	}
}
template <class T>
T circularQueue<T>::dequeue() {
	if (!isEmpty()) {
		int num;
		num = this->arr[FRONT];
		if (FRONT == REAR) {
			FRONT, REAR = -1;
		return num;
		}
		else {
			FRONT = (FRONT + 1) % maxSize;
		return num;
		}
	}
}
template <class T>
T circularQueue<T>::Top() {
	if (!isEmpty()) {
		int num;
		num = this->arr[REAR];
		cout << "Top element in the queue is : " << num << endl;
		return num;
	}
	else {
		cout << "Queue is empty\n";
	}
}
template <class T>
void circularQueue<T>::display() {
	int i = FRONT;
	for (i; i < REAR; i=(i+1)%maxSize)
	{
		cout << arr[i]<<" ";
	}
	cout << arr[i];
}