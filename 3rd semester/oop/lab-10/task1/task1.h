#pragma once
class Employee {
private:
	int id;
	char* name;	// employee name 
	double salary;
public:
	Employee();
	Employee(int id, char name[100], double salary);
	void Display();
	void setValues(int id, char name[100], double salary);
};
class Departement {
private:
	char* name;	// departement name
	Employee manager;
public:
	Departement();
	Departement(char name[100],int id, char name2[100], double salary);
	void Display();

};
