#pragma once
class Engine {
private:
	int horsepower;
	char* fuelType;
public:
	Engine();
	Engine(char fuel[100], int horsepower);
	void Display();
	void setValues(char fuel[100], int horsepower);
};
class Car {
private:
	char* model;
	Engine e1;
public:
	Car();
	Car(char name[100], char fuel[100], int horsepower);
	void Display();
};