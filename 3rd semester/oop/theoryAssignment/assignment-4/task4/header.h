#pragma once
class Shape {
public:
	virtual void calculateArea()=0;
	virtual void displayInfo()=0;
};
class Circle :public Shape {
	float radius;
public:
	Circle(float radius);
	void calculateArea() override;
	void displayInfo() override;
};
class Rectangle :public Shape {
	float length, width;
public:
	Rectangle(float length, float width);
	void calculateArea() override;
	void displayInfo() override;
};
class Triangle :public Shape {
	float base, height;
public:
	Triangle(float base, float height);
	void calculateArea() override;
	void displayInfo() override;
};