#include <iostream>
#include "calculator.h"
using namespace std;
int main(){
	cout << "welcome to the calculator \n please select option below to get started\n";
	int option;
	float a, b;
	cout << " 1- ADD \n 2- SUBTRACT \n 3- MULTIPLY \n 4- DIVIDE \n 5- CUBE \n 6- SQUARE \n 7- SQUARE ROOT\n";
	cin >> option;
	float result;
	switch (option)
	{
	case 1:
		cout << "ADDING\n";
		cout << "Enter the value for a :";
		cin >> a;
		cout << "Enter the value for b :";
		cin >> b;
		result = add(a, b);
		break;
	case 2:

		cout << "SUBTRACT\n";
		cout << "Enter the value for a :";
		cin >> a;
		cout << "Enter the value for b :";
		cin >> b;
		result = sub(a, b);
		break;
	case 3:
		cout << "MULTIPLY \n";
		cout << "Enter the value for a :";
		cin >> a;
		cout << "Enter the value for b :";
		cin >> b;
		result = multiply(a, b);
		break;
	case 4:
		cout << "DIVISION \n";
		cout << "Enter the value for a :";
		cin >> a;
		cout << "Enter the value for b :";
		cin >> b;
		result = divide(a, b);
		break;
	case 5:
		cout << "CUBE \n";
		cout << "Enter the value :";
		cin >> a;
		result = cube(a);
		break;
	case 6:
		cout << "SQUARE \n";
		cout << "Enter the value :";
		cin >> a;
		result = square(a);
		break;
	case 7:
		cout << "SQUARE ROOT \n";
		cout << "Enter the value :";
		cin >> a;
		result = square_root(a);
		break;
	default:
		cout << "Invalid choice";
		break;
	}
	cout << "RESULT : " << result<<endl;
	return 0;
}