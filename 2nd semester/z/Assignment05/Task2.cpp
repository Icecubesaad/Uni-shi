#include <iostream>
#include <string>
using namespace std;
void Table(int number){
	for (int i = 1; i <6; i++){
		cout << number << " X " << i << " = " << number*i<<endl;
	}
}
int main(){

	int number;
	cout << "Enter a number for a table : ";
	cin >> number;
	Table(number);
	return 0;
}