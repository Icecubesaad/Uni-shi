#include "task5.h"
#include <iostream>
using namespace std;
int main() {
	char fuelType[100] = { "petrol" };
	int horsepower = 800;
	char model[100] = { " Porche 911 " };
	Car c1(model, fuelType, horsepower);
	c1.Display();
}