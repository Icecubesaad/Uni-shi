#pragma once
class Shape{
	char* color;
protected:
	void setValues(char color[100]);
public:
	Shape();
	Shape(char color[100]);
	void display();
	
};
class Circle :public Shape{
	double radius;
public:
	Circle();
	Circle(char name[100], double radius);
	void display();
};
class Rectangle :private Shape{
	double  length;
	double width;
public:
	Rectangle();
	Rectangle(char color[100],double length, double width);
	void display();
};