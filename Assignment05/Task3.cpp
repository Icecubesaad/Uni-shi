#include <iostream>
using namespace std;
int natural_num(int number){
	int sum=0;
	for (int i = 1; i <= number; i++){
		sum = sum + i;
	}
	return sum;
}
int main(){
	int number;
	cout << "Enter the number : ";
	cin >> number;
	cout<<natural_num(number)<<endl;
	return 0;
}