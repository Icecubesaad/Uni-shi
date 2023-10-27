#include <iostream>
using namespace std;
void GetValues(double &a,double &b){
    cout<<"Enter the value of a = "<<endl;
    cin>>a;
    
    cout<<"Enter the value of b = "<<endl;
    cin>>b;
}
void GetOperation(char& op){
    cout<<"Enter the operation(+,-,*,/) : ";
    cin>>op;
}
void ADD(double *ptr1,double *ptr2){
    cout<<"Sum of values : "<<*ptr1 + *ptr2;
}
void SUB(double *ptr1,double *ptr2){
    cout<<"Subtraction of values : "<<*ptr1 - *ptr2;
}
void MUL(double *ptr1,double *ptr2){
    
    cout<<"Multiplication of values : "<<*ptr1 * *ptr2;
}
void DIV(double *ptr1,double *ptr2){
    cout<<"Division of values : "<<(*ptr1) / (*ptr2);
}