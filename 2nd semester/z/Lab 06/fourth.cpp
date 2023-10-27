#include <iostream>
using namespace std;
void days(int number){

	switch (number) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	}
}
int main(){
	int number; 
	cout << "Enter a number : ";
	cin >> number;
	days(number);
	return 0;
}