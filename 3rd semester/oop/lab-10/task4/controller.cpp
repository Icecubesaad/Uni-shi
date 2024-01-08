#include "Task4.h"
#include <iostream>
using namespace std;
Departement::Departement() {
	this->name = NULL;
}
Departement::Departement(char name[100]) {
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
	cout << "\n Departement Name : " << this->name<<endl;
}
void Departement::setValues(char name[100]) {
	this->name = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->name[iterator] = name[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
}
Student::Student() {
	this->departement;
	this->id = 0;
	this->name = nullptr;
}
Student::Student(char name[100], int id, char departementj[100])
{
	this->name = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->name[iterator] = name[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
	this->id = id;
	departement = new Departement(departementj);
}
void Student::Display() {
	cout << "\n Student name : " << this->name;
	cout << "\n Student Id : " << this->id;
	this->departement->Display();
}