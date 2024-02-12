#include "header.h"
int main() {
	ElectronicDevice e1(true);
	Rechargeable r1(1000, true);
	Screen s1(8);
	Tablet t1(s1,r1,e1);
	t1.useTablet();
	t1.displayInfo();
}