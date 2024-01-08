#include<iostream>
#include "calculator.h"
using namespace std;


int main()
{
    double a,b;
    char op;
    GetValues(a,b);
    double *ptr1 = &a;
    double *ptr2 = &b;
    GetOperation(op);
    
    if(op=='+'){
        cout<<"\n\t*You choose the Addition operation*\n"<<endl;
        ADD(&a,&b);
    }
    else if (op=='-')
    {
        cout<<"\n\t*You choose the Subtraction operation*\n"<<endl;
        SUB(&a,&b);
    }
    else if (op=='*')
    {
        cout<<"\n\t*You choose the Multiplication operation*\n"<<endl;
        MUL(&a,&b);
    }
    else if (op=='/')
    {
        cout<<"\n\t*You choose the Division operation*\n"<<endl;
        DIV(&a,&b);
    }
    

    return 0;
}