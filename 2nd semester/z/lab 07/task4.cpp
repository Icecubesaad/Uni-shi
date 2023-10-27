#include <iostream>
using namespace std;
int main(){
    float x;
    float y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    float differnece =1;
    differnece = x/y;
    float *ptr  = &differnece;
    cout<<"After division : "<<*ptr;
}