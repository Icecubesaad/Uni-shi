#include "Task2.h"
#include <iostream>
using namespace std;
Author::Author() {
	this->email = nullptr;
	this->name = nullptr;
	this->birthYear = 0;
}
Author::Author(char name[100], char email[100], int year) {
	this->name = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->name[iterator] = name[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
	this->email = new char[100];
	iterator = 0;
	while (email[iterator] != '\0')
	{
		this->email[iterator] = email[iterator];
		iterator++;
	}
	this->email[iterator] = '\0';
	this->birthYear = year;
}
void Author::Display() {
	cout << "\n Author Name : " << this->name;
	cout << "\n Author Email : " << this->email;
	cout << "\n Birth year : " << this->birthYear;
}
void Author::setValues(char name[100], char email[100], int year) {
	this->name = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->name[iterator] = name[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
	this->email = new char[100];
	iterator = 0;
	while (email[iterator] != '\0')
	{
		this->email[iterator] = email[iterator];
		iterator++;
	}
	this->email[iterator] = '\0';
	this->birthYear = year;
}
Book::Book() {
	this->author;
	this->price = 0.00;
	this->title = nullptr;
}
Book::Book(char title[100], double price, char name[100], char email[100], int year) {
	this->title = new char[100];
	int iterator = 0;
	while (title[iterator] != '\0')
	{
		this->title[iterator] = title[iterator];
		iterator++;
	}
	this->title[iterator] = '\0';
	this->price = price;
	author.setValues(name, email, year);
}
void Book::Display() {
	cout << "\n Title : " << this->title;
	cout << "\n price : " << this->price<<"$\n";
	author.Display();
}
