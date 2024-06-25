#pragma once
class Shape {
	char* color;
	int posX;
	int posY;
public:
	Shape(int posX,int posY, char* color);
	void drawing(char* shape);
	void displayShapeInfo();
};
class Circle:public Shape {
	int radius;
public:
	Circle(int posX, int posY,int radius, char* color);
	void draw();
	void displayShapeInfo();
};
class Rectangle:public Shape {
	int width;
	int height;
public:
	Rectangle(int posX, int posY, int width, int height, char* color);
	void displayShapeInfo();
	void draw();
};;