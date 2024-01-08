#include "Task2.h"
#include <iostream>
using namespace std;
int main(){
	char red[4] = { "red" };
	char yellow[7] = { "yellow" };
	Shape s1;
	s1.display();
	Rectangle r1(red, 4.3, 6.7);
	r1.display();
	Circle c1(yellow, 8.9);
	c1.display();
	system("pause");
	return 0;
}