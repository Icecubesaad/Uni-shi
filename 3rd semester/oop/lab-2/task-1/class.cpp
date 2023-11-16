#include <iostream>
using namespace std;
// float add(float a, float b);
// float sub(float a, float b);
// float divide(float a, float b);
// float multiply(float a, float b);
// float cube(float a);
// float square(float a);
// float square_root(float a);
class calculator
{
public:
    calculator()
    {
       cout << "welcome to the calculator \n please select option below to get started\n";
    }
    float add(float a, float b)
    {
        return a + b;
    }
    float sub(float a, float b)
    {
        return a - b;
    }
    float divide(float a, float b)
    {
        return a / b;
    }
    float multiply(float a, float b)
    {
        return a * b;
    }
    float square(float a)
    {
        return a * a;
    }
    float cube(float a)
    {
        return a * a * a;
    }
    float square_root(float a)
    {
        return 5;
    }
};
int main()
{
    calculator operation;
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
		result = operation.add(a,b);
		break;
	case 2:

		cout << "SUBTRACT\n";
		cout << "Enter the value for a :";
		cin >> a;
		cout << "Enter the value for b :";
		cin >> b;
		result = operation.sub(a,b);
		break;
	case 3:
		cout << "MULTIPLY \n";
		cout << "Enter the value for a :";
		cin >> a;
		cout << "Enter the value for b :";
		cin >> b;
		result = operation.multiply(a, b);
		break;
	case 4:
		cout << "DIVISION \n";
		cout << "Enter the value for a :";
		cin >> a;
		cout << "Enter the value for b :";
		cin >> b;
		result = operation.divide(a, b);
		break;
	case 5:
		cout << "CUBE \n";
		cout << "Enter the value :";
		cin >> a;
		result = operation.cube(a);
		break;
	case 6:
		cout << "SQUARE \n";
		cout << "Enter the value :";
		cin >> a;
		result = operation.square(a);
		break;
	case 7:
		cout << "SQUARE ROOT \n";
		cout << "Enter the value :";
		cin >> a;
		result = operation.square_root(a);
		break;
	default:
		cout << "Invalid choice";
		break;
	}
	cout << "RESULT : " << result<<endl;
	return 0;
}