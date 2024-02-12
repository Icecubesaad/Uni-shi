#include "header.h"
int main() {
	char name[] = "Ferrari";
	SportsCar s1(name, 2, true);
	Vehicle* v;
	v = &s1;
	v->displayInfo();
}