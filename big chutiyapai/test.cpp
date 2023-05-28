#include <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int *c = &a[0]+5;                               
    *c = 6;
    cout<<*c;
    int *b = &a[0]+5;
    cout<<*b;
}