#include <iostream>
using namespace std;
float max(float num1,float num2){
    if(num1>num2){
        return num1;
    }
    else if(num1<num2){
        return num2;
    }
    else{
        cout<<"Both are equal"<<endl;
    }
}   

int main(){
    float number1,number2;
    cout<<"Enter the first number : ";
    cin>>number1;
    cout<<"Enter the second number : ";
    cin>>number2;
    cout<<"Maximum number is : "<<max(number1,number2);
}