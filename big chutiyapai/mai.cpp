#include <iostream>
using namespace std;
void swap(int &number,int &number2);
int main(){
    int number1=5;
    int number2=7;
    cout<<"BEFORE SWAP :\n number 1 =  "<<number1<<"\n number 2 = "<<number2;

    swap(number1,number2);

}
void swap(int &number,int &number2){
    int swap;
    swap  =  number2;
    number2 = number;
    number = swap;
    cout<<"\nAfter swap : \n";
    cout<<"number 1:"<<number<<endl;
    cout<<"number 2:"<<number2<<endl;

}