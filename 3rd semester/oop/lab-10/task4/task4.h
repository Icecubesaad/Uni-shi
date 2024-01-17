#pragma once
class Departement {
private:
	char* name;
public:
	Departement();
	Departement(char name[100]);
	void Display();
	void setValues(char name[100]);
};
class Student {
private:
	int id;
	char* name;
	Departement* departement;
public:
	Student();
	Student(char name[100], int id, char Departement[100]);
	void Display();
};