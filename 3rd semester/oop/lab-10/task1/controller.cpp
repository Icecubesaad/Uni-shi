#include "Task1.h"
#include <iostream>
using namespace std;
Employee::Employee() {
	name = nullptr;
	id = 0;
	salary = 0;
}
Employee::Employee(int id, char name[100], double salary) {
	this->name = new char[100];
	int iterator = 0;
	while (name[iterator]!='\0')
	{
		this->name[iterator] = name[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
	this->id = id;
	this->salary = salary;
}
void Employee::Display() {
	cout << "\n name : " << this->name;
	cout << "\n id no : " << this->id;
	cout << "\n salary : " << this->salary<<"$\n";
}
void Employee::setValues(int id, char name[100], double salary) {
	this->name = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->name[iterator] = name[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
	this->id = id;
	this->salary = salary;
}
Departement::Departement() {
	this->name = nullptr;
	this->manager;
}
Departement::Departement(char name[100], int id, char name2[100], double salary) {
	this->manager.setValues(id, name2, salary);
	this->name = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->name[iterator] = name[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
}
void Departement::Display() {
	cout << "\n Departemenet name : " << name << endl;
	this->manager.Display();
}