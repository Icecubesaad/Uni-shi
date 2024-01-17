#include "Task3.h"
#include <iostream>
using namespace std;
int main() {
	char model[100] = { "hp pavillion 7860" }
	;
	double speed = 2.00;
	char brand[100] = { "Intel" };
	Computer c1(model, brand, speed);
	c1.Display();
}