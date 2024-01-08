#include <iostream>
#include "Task1.h"
using namespace std;
int main(){
	char car[100] = { "porche 911" };
	char motorcycle[100] = { "CD 70" };
	char truck[100] = { "Ravi" };
	Vehicle v1;
	v1.display();
	Car c1(car, 1999,4);
	c1.display();
	Motorcycle m1(motorcycle, 1998, 2);
	m1.display();
	Truck t1(truck, 1995, 3);
	t1.display();
	system("pause");
	return 0;
}