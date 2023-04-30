#include <iostream>
using namespace std;
float addition(float fvalue, float svalue){
	return fvalue + svalue;
}
float subtraction(float fvalue, float svalue){
	return fvalue - svalue;
}
float multiplication(float fvalue, float svalue){
	return fvalue * svalue;
}
float division(float fvalue, float svalue){
	return fvalue / svalue;
}
int main(){
	float first_value;
	float second_value;
	cout << "enter the first value : " << endl;
	cin >> first_value;
	cout << "Enter the second value : " << endl;
	cin >> second_value;
	char option;
	cout << "Press '+' for addition \n";
	cout << "Press '-' for subtraction \n";
	cout << "Press '*' for multiplication \n";
	cout << "Press '/' for division \n";
	cout << "Enter the option : ";
	cin >> option;
	if (option == '*'){
		cout<<multiplication(first_value, second_value);
	}
	else if (option == '+'){
		cout<<addition(first_value, second_value);
	}
	else if (option == '-'){
		cout<<subtraction(first_value, second_value);
	}
	else if (option == '/'){
		cout<<division(first_value, second_value);
	}
	return 0;
}