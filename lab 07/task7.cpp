#include <iostream>
using namespace std;
int main(){
    int x=5;
    int y=3;
    int some_var;
    int* ptr =&some_var;
    int differnece;
    differnece = x-y;
    *ptr = differnece;
    cout<<"After subtracting : "<<*ptr;
}