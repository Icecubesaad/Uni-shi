#pragma once
class Processor {
private:
	char* brand;
	double speed;
	
public:
	Processor();
	Processor(char brand[100], double speed);
	void Display();
	void setValues(char brand[100], double speed);
};
class Computer{
private:
	char* model;
	Processor processor;
	
public:
	Computer();
Computer(char model[100], char brand[100], double speed);
	void Display();
};