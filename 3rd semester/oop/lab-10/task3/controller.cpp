#include "Task3.h"
#include <iostream>
using namespace std;
Processor::Processor() {
	this->brand = nullptr;
	this->speed = 0.00;
}
Processor::Processor(char brand[100], double speed) {
	this->brand = new char[100];
	int iterator = 0;
	while (brand[iterator] != '\0')
	{
		this->brand[iterator] = brand[iterator];
		iterator++;
	}
	this->brand[iterator] = '\0';
	this->speed = speed;
	
}
void Processor::Display() {
	cout << "\n processor brand : " << this->brand;
	cout << "\n processor Speed : " << this->speed<<" Mhz ";
}
void Processor::setValues(char brand[100], double speed) {
	this->brand = new char[100];
	int iterator = 0;
	while (brand[iterator] != '\0')
	{
		this->brand[iterator] = brand[iterator];
		iterator++;
	}
	this->brand[iterator] = '\0';
	this->speed = speed;
}
Computer::Computer() {
	this->model = nullptr;
	this->processor;
}
Computer::Computer(char model[100], char brand[100], double speed){
	this->model = new char[100];
	int iterator = 0;
	while (model[iterator] != '\0')
	{
		this->model[iterator] = model[iterator];
		iterator++;
	}
	this->model[iterator] = '\0';
	this->processor.setValues(brand, speed);
}
void Computer::Display() {
	cout << "\n model : " << this->model;
	this->processor.Display();
}
