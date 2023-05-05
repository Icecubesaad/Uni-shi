#include <iostream>
using namespace std;
int main(){
	int icecube = 6;
	int* ptr = &icecube;
	cout << "memory of the variable : " << ptr <<endl;
	cout << "Value of the memory adress : " << *ptr;
}