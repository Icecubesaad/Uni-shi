#include <iostream>
using namespace std;
int main(){
    int swap;
    int a=5;
    int b=7;
    cout<<"Before swap a = "<<a<<endl;
    cout<<"Before swap b = "<<b<<endl;
    int* a_pointer = &a;
    int* b_pointer = &b;
    swap = *b_pointer;
    *b_pointer = *a_pointer;
    *a_pointer = swap;
    cout<<"After swap a = "<<a<<endl;
    cout<<"After swap b = "<<b<<endl;

}