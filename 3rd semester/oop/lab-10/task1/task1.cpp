#include "Task1.h"
#include <iostream>
using namespace std;
int main() {
	char name[100] = { "Management" };
	int id;
	char name2[100];
	cout << " Enter the name of the employee name : ";
	cin.getline(name2, 100);
	cout << " Enter the salary of the employee id : ";
	cin >> id;
	Departement d1(name, id, name2, 1000);
	d1.Display();
}