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
float calculator(float fvalue,float svalue, char option){
	if (option == '*'){
		return multiplication(fvalue, svalue);
	}
	else if (option == '+'){
		return addition(fvalue, svalue);
	}
	else if (option == '-'){
		return subtraction(fvalue, svalue);
	}
	else if (option == '/'){
		return division(fvalue, svalue);
	}
}
int main(){
	float first_value;
	float second_value;
	char option;
	cout << "enter the first value : "<<endl;
	cin >> first_value;
	cout << "Enter the second value : "<<endl;
	cin >> second_value;
	cout << "Enter the operation : "<<endl;
	cin >> option;
	float answer = calculator(first_value, second_value, option);
	cout << answer;
	return 0;
}