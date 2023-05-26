#include <iostream>
using namespace std;
void add(float* num1, float* num2, float* ans){
    *ans = *num1 + *num2;
}
void subtract(float* num1, float* num2, float* ans){
    if(*num1 > *num2){
        *ans = *num1 - *num2;
    }
    else{
        *ans = *num2 - *num1;
    }
}
void multiply(float* num1, float* num2, float* ans){
    *ans = *num1 * *num2;
}
void divide(float* num1, float* num2, float* ans){
    if(*num1 > *num2){
        *ans = *num1 / *num2;
    }
    else{
        *ans = *num2 / *num1;
    }
}
int main(){
    float answer=0;
    float num1;
    float num2;
    char op;
    cout<<"Enter the operation you want to perform : ";
    cout<<op;
    cin>>op;
    cout<<"Enter the number 1 : ";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;   
    if(op == '*'){
        multiply(&num1,&num2,&answer);
    }
    if(op == '/'){
        divide(&num1,&num2,&answer);
    }
    if(op == '+'){
        add(&num1,&num2,&answer);
    }if(op == '-'){
        subtract(&num1,&num2,&answer);
    }
    cout<<answer;
}