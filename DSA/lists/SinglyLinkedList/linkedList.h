#include "node.h"
#include <iostream>
using namespace std;
class LinkedList {
	Node* head;
	Node* tail;
public:
	LinkedList();
	void insert_at_head(int);
	void insert_at_particular_position(int, int);
	void insert_at_tail(int);
	void delete_from_head();
	void delete_from_tail();
	void delete_from_particular_position(int);
	void display();
};
LinkedList::LinkedList() {
	head, tail = nullptr;
}
void LinkedList::insert_at_head(int value) {
	Node* newNode = new Node(value);
	newNode->next = head;	// if first (set to nullptr) if not (set to the location of the 2nd node)
	head = newNode;			// head pointing to this new node making it the first node
}
void LinkedList::insert_at_particular_position(int pos, int value) {
	// length calculate
	int length=0;
	Node* temp = new Node();
	temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
		length++;
	}
	if (pos > length) {
		cout << "This position doesnt exist in a list.\n";
		return;
	}
	else {
		Node* previous = new Node();
		Node* current = new Node();
		Node* newNode = new Node(value);
		current = head;
		for (int i = 1; i < pos; i++)
		{
			previous = current;
			current = current->next;
		}
		newNode->next = current;
		previous->next = newNode;
	}
}
void LinkedList::insert_at_tail(int value) {
	Node* newNode = new Node(value);
	if (head == nullptr) {
		head = newNode;
		return;
	}
	Node* temp = new Node();
	temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = newNode;
	tail = newNode;
}
void LinkedList::display() {
	Node* temp = new Node;
	temp = head;
	while (temp != nullptr)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
}
void LinkedList::delete_from_head() {
	Node* temp = new Node(); // node to delete
	temp = head;
	head = head->next;
	delete temp;
}
void LinkedList::delete_from_tail() {
	Node* temp = new Node(); // node to delete
	Node* pre = new Node(); // new tail of list
	temp = head;
	while (temp->next != nullptr) {
		pre = temp;
		temp = temp->next;
	}
	pre->next = nullptr;
	delete temp;
}
void LinkedList::delete_from_particular_position(int pos) {
	// length calculate
	int length = 0;
	Node* temp = new Node();
	temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
		length++;
	}
	if (pos > length) {
		cout << "This position doesnt exist in a list.\n";
		return;
	}
	else {
		temp = head;
		Node* pre = new Node();
		Node* cur = new Node();
		for (int i = 1; i < pos; i++)
		{
			pre = temp;
			temp = temp->next;
			cur = temp->next;
		}
		pre->next = cur;
		delete temp;
	}
}