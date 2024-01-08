#include "Task4.h"
#include <iostream>
using namespace std;
int main() {
	char name[100] = { "saad" };
	int id = 1074;
	char departement[100] = { " Bachelor's of computer science " };
	Student s1(name, id, departement);
	s1.Display();
}