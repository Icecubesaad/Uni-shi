#include "Bank.h"
#include <iostream>
using namespace std;
int main()
{
cout << endl <<"-----Question 2-----" << endl;
Bank b1;
char name[7] = {'B','a','n','k',' ','A','\0'};
int bankCode = 1234;
float interestRate = 11.5;
Bank b2(name, bankCode, interestRate);
cout << "Name of b2 = " << b2.getName() << endl;
name[0] = 'S';
name[5] = 'F';
Bank b3 = b2;
b3.increaseInterestRateBy(9.3);
char name2[10] = {'O','O','P',' ','B','a','n','k','.','\0'};
b3.setName(name2);
b3.setBankCode(5678);
cout << "Name of b3 = " << b3.getName() << endl;
name2[1] = 'W';
name2[2] = 'L';
Bank b4;
b4 = b3;
cout << endl << "B1" << endl;
b1.display();
cout << endl << "B2" << endl;
b2.display();
cout << endl << "B3" << endl;
b3.display();
cout << endl << "B4" << endl;
b4.display();
cout <<"--------------------" << endl << endl;
return 0;
}