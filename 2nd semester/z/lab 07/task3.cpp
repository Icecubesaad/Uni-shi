#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    int some_var;
    int *ptr = &some_var ;
    *ptr = x+y;
    cout<<"Value of the addition : "<<*ptr;
}