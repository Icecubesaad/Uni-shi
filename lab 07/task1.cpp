#include <iostream>
using namespace std;
int main(){
	int x = 6;
	int* ptr = &x;
	cout<<"Value of x is "<<x<<endl;
	cout << "value of ptr : " << ptr <<endl;
	cout << "Value of the *ptr : " << *ptr;
}