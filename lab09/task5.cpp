#include <iostream>
using namespace std;
float * temp( float * fptr){
    float *celcius = new float;
    *celcius = ((*fptr - 32)*5)/9;
    return celcius;
}
int main(){
    float *ftpr = new float;
    cout<<"Enter temperatur in farehiet : ";
    cin>>*ftpr;
    cout<<"Temperature in celcius is : " << *temp(ftpr);
}
