#include "task5.h"
#include <iostream>
using namespace std;
Car::Car() {
	this->e1;
	this->model = NULL;
}
Car::Car(char name[100], char fuel[100],int hp) {
	this->model = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->model[iterator] = name[iterator];
		iterator++;
	}
	this->model[iterator] = '\0';
	e1.setValues(fuel, hp);
}
void Car::Display(){
	cout << "\n Car Model Name : " << this->model<<endl;
	e1.Display();
}
void Engine::setValues(char name[100], int horsepower) {
	this->fuelType = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->fuelType[iterator] = name[iterator];
		iterator++;
	}
	this->fuelType[iterator] = '\0';
	this->horsepower = horsepower;
}
Engine::Engine() {
	this->fuelType = NULL;
	this->horsepower = 0;
}
Engine::Engine(char name[100], int horsepower)
{
	this->fuelType = new char[100];
	int iterator = 0;
	while (name[iterator] != '\0')
	{
		this->fuelType[iterator] = name[iterator];
		iterator++;
	}
	this->fuelType[iterator] = '\0';
	this->horsepower =horsepower;
}
void Engine::Display() {
	cout << "\n Engine fuel type : " << this->fuelType;
	cout << "\n Engine horse power : " << this->horsepower;
	
}