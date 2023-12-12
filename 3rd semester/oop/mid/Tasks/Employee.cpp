#include "Employee.h"
#include <iostream>
using namespace std;
int main()
{
cout << endl <<"-----Question 2-----" << endl;
Employee e1;
char name[7] = {'M','r',' ','O','O','P','\0'};
int age = 88;
float salary = 22500.2;
Employee e2(name, age, salary);
cout << "Name of e2 = " << e2.getName() << endl;
name[0] = 'X';
name[4] = 'W';
name[5] = 'L';
Employee e3 = e2;
e3.increaseSalaryBy(10000.5);
char name2[11] = {'M','r',' ','A',' ','G','r','a','d','e','\0'};
e3.setName(name2);
e3.setAge(20);
cout << "Name of e3 = " << e3.getName() << endl;
name2[0] = 'X';
name2[3] = 'F';
Employee e4;
e4 = e3;
cout << endl << "E1" << endl;
e1.display();
cout << endl << "E2" << endl;
e2.display();
cout << endl << "E3" << endl;
e3.display();
cout << endl << "E4" << endl;
e4.display();
cout <<"--------------------" << endl << endl;

return 0;
}