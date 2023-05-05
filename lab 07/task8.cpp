#include <iostream>
using namespace std;
int main(){
    int x=3;
    int y=9;
    int z=23;
    int *ptr=&x;
    if(y>*ptr && y>z){
        ptr = &y;
    }
    else if(z>*ptr && z>y){
        ptr = &z;
    }
    cout<<*ptr;
}