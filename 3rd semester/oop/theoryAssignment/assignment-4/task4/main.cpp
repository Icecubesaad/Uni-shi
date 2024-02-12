#include "header.h"
int main() {
	Circle c1(3.14);
	Rectangle r1(3.14, 7.13);
	Triangle t1(4.3, 6.77);
	Shape* s;
	s = &c1;
	s->displayInfo();
	s->calculateArea();
	s = &r1;
	s->displayInfo();
	s->calculateArea();
	s = &t1;
	s->displayInfo();
	s->calculateArea();
}