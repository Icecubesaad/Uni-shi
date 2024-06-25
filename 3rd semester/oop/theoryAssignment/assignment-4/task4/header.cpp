#include "header.h"
#include <iostream>
using namespace std;
Circle::Circle(float radius) {
	this->radius = radius;
}

void Circle::calculateArea()
{
	float area;
	area = 3.14 * (radius * radius);
	cout << area<<endl;
}

void Circle::displayInfo()
{
	cout << "Circle : Radius " << this->radius<<endl;
}

Rectangle::Rectangle(float length, float width)
{
	this->length = length;
	this->width = width;
}

void Rectangle::calculateArea()
{
	float area;
	area = length * width;
	cout << "Area : " << area<<endl;
}

void Rectangle::displayInfo()
{
	cout << "Reactangle , Length : " << length << " width : " << width<<endl;
}

Triangle::Triangle(float base, float height)
{
	this->base = base;
	this->height = height;
}

void Triangle::calculateArea()
{
	float area;
	area = 0.5 * (base * height);
	cout << "Area : " << area << endl;
}

void Triangle::displayInfo()
{
	cout << "Triangle , Base : " << base << " height : " << height << endl;
}

