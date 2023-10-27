#include <iostream>
using namespace std;
int main(){
    int x=3;
    int y=9;
    int z=23;
     cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    cout<<"Enter the value of z : ";
    cin>>z;
    int *ptr=&x;
    if(y>*ptr && y>z){
        ptr = &y;
    }
    else if(z>*ptr && z>y){
        ptr = &z;
    }
    cout<<"Maximum number is : "<<*ptr;
}