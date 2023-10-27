#include <iostream>
using namespace std;
float swap(float &num1,float &num2){
    int swap = num1;
    num1 = num2;
    num2 = swap;
}
int main(){
    float num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Before swapping\n";
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
    swap(num1,num2);
    cout<<"After swapping\n";
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
}