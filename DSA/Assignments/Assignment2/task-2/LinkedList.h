#include <iostream>
#include "Node.h"
using namespace std;
template <class T>
class LinkedList {
	Node<T>* head;
public:
	LinkedList();
	void  insertAtHead(T);
	void insertAtTail(T);
	T deleteFromHead();
	T deleteFromTail();
	static LinkedList reverseList(LinkedList&);
	static bool palindrome(LinkedList&);
	void display();
};
template <class T>
LinkedList<T>::LinkedList() {
	this->head = nullptr;
}
template <class T>
void LinkedList<T>::insertAtHead(T value) {
	Node<T>* newNode = new Node<T>(value);
	if (this->head == nullptr) {
		this->head = newNode;
	}
	else {
		newNode->next = head;	
		this->head = newNode;
	}
}
template <class T>
void LinkedList<T>::insertAtTail(T value) {
	Node<T>* newNode = new Node<T>(value);
	if (this->head == nullptr) {
		this->head = newNode;
		return;
	}
	Node<T>* temp = new Node<T>();
	temp = this->head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = newNode;
}
template <class T>
T LinkedList<T>::deleteFromHead() {
	if (this->head == nullptr) {
		return 0;
	}
	T value;
	Node<T>* temp = new Node<T>(); // node to delete
	temp = this->head;
	this->head = this->head->next;
	value = temp->data;
	delete temp;
}
template <class T>
T LinkedList<T>::deleteFromTail() {
	T value;
	Node<T>* temp = new Node<T>(); // node to delete
	Node<T>* pre = new Node<T>(); // new tail of list
	temp = head;
	while (temp->next != nullptr) {
		pre = temp;
		temp = temp->next;
	}
	pre->next = nullptr;
	value = temp->data;
	delete temp;
	return value;
}
template <class T>
LinkedList<T> LinkedList<T>::reverseList(LinkedList& l1) {
	LinkedList Reversed;
	Node<T>* temp = l1.head;
	while (temp != nullptr) {
		Reversed.insertAtHead(temp->data); 
		temp = temp->next;
	}
	return Reversed;
}
template <class T>
 bool LinkedList<T>::palindrome(LinkedList& l1) {
	LinkedList reversed;
	reversed = LinkedList::reverseList(l1);
	Node<T>* temp = l1.head;
	Node<T>* temp2 = reversed.head;
	while (temp != nullptr) {
		if (temp->data != temp2->data) {
			return false;
		}
		temp = temp->next;
		temp2 = temp2->next;
	}
	return true;
}
template <class T>
void LinkedList<T>::display() {
	Node<T>* temp = new Node<T>;
	temp = this->head;
	while (temp != nullptr)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}
