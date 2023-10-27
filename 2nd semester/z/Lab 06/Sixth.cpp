#include <iostream>
using namespace std;
float calulator_average(float f,float s,float t){
	float average;
	float sum;
	sum = f+s+t;
	average = sum/3;
	return average;
	
}
int main(){
	float number1;
	float number2;
	float number3;
	cout << "Enter the first number : ";
	cin >> number1;
	cout<<"Enter the second number : ";
	cin >> number2;
	cout<<"Enter the third value : ";
	cin >> number3;
	cout<<calulator_average(number1,number2,number3)<<endl;

}