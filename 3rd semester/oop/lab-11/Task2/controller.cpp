#include "Task2.h"
#include <iostream>
using namespace std;
Shape::Shape(){
	char undefined[10] = { "undefined" };
	this->color = new char[100];
	int iterator = 0;
	while (undefined[iterator]!='\0')
	{
		this->color[iterator] = undefined[iterator];
		iterator++;
	}
	this->color[iterator] = '\0';
}
Shape::Shape(char color[100]){
	this->color = color;
}
void Shape::display(){
	cout << "\nShape Color : " << this->color<<endl;
}
void Shape::setValues(char name[100]){
	this->color = name;
}
Circle::Circle(){
	this->radius = 0.00;
}
Circle::Circle(char color[100], double radius){
	this->setValues(color);
	this->radius = radius;
}
void Circle::display(){
	cout << "\n\nCircle Details";
	Shape::display();
	cout << "Radius : " << this->radius<<endl;
}
Rectangle::Rectangle(){
	length = 0.00;
	width = 0.00;
}
Rectangle::Rectangle(char color[100],double l, double w){
	this->setValues(color);
	length = l;
	width = w;
}
void Rectangle::display(){
	cout << "\n\nRectangle Details";
	Shape::display();
	cout << "Width : " << width;
	cout << "\nLength : " << length;
}