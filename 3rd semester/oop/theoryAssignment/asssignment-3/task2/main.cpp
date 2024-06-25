#include "Task.h"
#include <iostream>
using namespace std;
Circle::Circle(int posX, int posY, int radius, char* color) :Shape(posX, posY, color)
{
	this->radius = radius;
}

Shape::Shape(int posX, int posY, char* color)
{
	this->posX = posX;
	this->posY = posY;
	this->color = color;
}

void Shape::drawing(char* shape)
{
	cout << "Drawing a " << shape << " ...." << endl;
}

void Shape::displayShapeInfo()
{
	cout << "Position : (" << posX << "," << posY << ")\n";
	cout << "Color : " << this->color << endl;
}

Rectangle::Rectangle(int posX, int posY, int width, int height, char* color) :Shape(posX, posY, color)
{
	this->width = width;
	this->height = height;
}
void Rectangle::displayShapeInfo() {
	Shape::displayShapeInfo();
	cout << "Width : " << this->width << ", " << "height : " << this->height << endl;
}
void Rectangle::draw() {
	char shape[100] = "rectangle";
	this->drawing(shape);
}
void Circle::draw() {
	char shape[100] = "circle";
	this->drawing(shape);

}
void Circle::displayShapeInfo() {
	Shape::displayShapeInfo();
	cout << "Radius : " << this->radius << endl;
}
int main() {
	char color1[100] = "Blue";
		char color2[100] = "Red";
	Circle circle(10, 20, 5, color1);
	Rectangle rectangle(30, 40, 8, 12, color2);
	circle.displayShapeInfo();
	circle.draw();
	cout << endl;
	rectangle.displayShapeInfo();
	rectangle.draw();
	cout << endl;
	return 0;

}