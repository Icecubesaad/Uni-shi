#include "Task3.h"
#include <iostream>
using namespace std;
Employee::Employee(){
	char undefined[10] = { "undefined" };
	this->name = new char[100];
	int iterator = 0;
	while (undefined[iterator] != '\0')
	{
		this->name[iterator] = undefined[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
}
Employee::Employee(char name[100]){
	this->name = name;
}
void Employee::display(){
	cout << "\nEmployee Name : " << this->name<<endl;
}
void Employee::setValues(char name[100])
{
	this->name = name;
}
Manager::Manager(){
	char undefined[10] = { "undefined" };
	this->departement = new char[100];
	int iterator = 0;
	while (undefined[iterator] != '\0')
	{
		this->departement[iterator] = undefined[iterator];
		iterator++;
	}
	this->departement[iterator] = '\0';
}
Manager::Manager(char name[100], char departement[100]){
	this->setValues(name);
	this->departement = departement;
}
void Manager::display(){
	cout << "\n\nManager Details : ";
	Employee::display();
	cout << "Manager of Departement : " << this->departement<<endl;
}
Engineer::Engineer(){
	char undefined[20] = { "no project" };
	this->project = new char[100];
	int iterator = 0;
	while (undefined[iterator] != '\0')
	{
		this->project[iterator] = undefined[iterator];
		iterator++;
	}
	this->project[iterator] = '\0';
}
Engineer::Engineer(char name[100], char project[100]){
	this->setValues(name);
	this->project = project;
}
void Engineer::display(){
	cout << "\n\nEngineer Details : ";
	Employee::display();
	cout << "Current Project : " << this->project<<endl;
}
Clerk::Clerk(){
	char undefined[10] = { "no task" };
	this->task = new char[100];
	int iterator = 0;
	while (undefined[iterator] != '\0')
	{
		this->task[iterator] = undefined[iterator];
		iterator++;
	}
	this->task[iterator] = '\0';
}
Clerk::Clerk(char name[100], char task[100]){
	this->setValues(name);
	this->task = task;
}
void Clerk::display(){
	cout << "\n\nClerk Details : ";
	Employee::display();
	cout << "Current task : " << this->task;
}

