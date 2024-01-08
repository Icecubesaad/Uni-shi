#include "Task1.h"
#include <iostream>
using namespace std;
Vehicle::Vehicle(){
	char defaultValue[10] = { "undefined" };
	this->model = new char[100];
	int iterator = 0;
	while (defaultValue[iterator]!='\0')
	{
		this->model[iterator] = defaultValue[iterator];
		iterator++;
	}
	this->model[iterator] = '\0';
	this->year = 0;
}
Vehicle::Vehicle(char name[100],int year){
	this->model = name;
	this->year=year;
}
void Vehicle::display(){
	cout << "\nModel name : " << this->model;
	cout << "\nYear manufactured : " << this->year<<endl;
}
void Vehicle::setValues(char name[100], int year){
	this->model = name;
	this->year = year;
}
Car::Car(){
	this->numDoors = 4;
}
Car::Car(char name[100], int year, int numDoors){
	this->numDoors = numDoors;
	this->setValues(name, year);
}
void Car::display(){
	cout << "\nCar Details\n";
	Vehicle::display();
	cout << "Number of doors : " << this->numDoors<<endl;
}
Motorcycle::Motorcycle(){
	this->numWheels = 2;
}
Motorcycle::Motorcycle(char name[100], int year, int numWheels){
	this->setValues(name, year);
	this->numWheels = numWheels;
}
void Motorcycle::display(){
	cout << "\nMotorcycle Details\n";
	Vehicle::display();
	cout << "Number of wheels : " << this->numWheels<<endl;
}
Truck::Truck(){
	this->CargoCapacity = 0.00;
}
Truck::Truck(char name[100], int year, float CargoCapacity){
	this->setValues(name, year);
	this->CargoCapacity = CargoCapacity;
}
void Truck::display(){
	cout << "\nTruck Details\n";
	Vehicle::display();
	cout << "Cargo Capacity : " << this->CargoCapacity<<endl;
}