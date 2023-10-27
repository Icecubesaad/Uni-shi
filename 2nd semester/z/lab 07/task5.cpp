#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value for x : ";
    cin>>x;
    int *ptr = &x;
    if(*ptr > 0){
        cout<<"Number is positive";
    }
    else{
        cout<<"Number is negative";
    }
}