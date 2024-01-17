#include <iostream>
#include "Task3.h"
using namespace std;
int main(){
	Employee e1;
	Clerk c1({ "saad" }, { "bring files" });
	Engineer eg1({ "saad" }, { "fixing bugs" });
	Manager m1({ "saad" }, { "finance" });
	e1.display();
	c1.display();
	eg1.display();
	m1.display();
	system("pause");
	return 0;
}