#include <iostream>
using namespace std;
int main(){
    float x = 3.65;
    float* ptr = &x;
    cout<<"&x : "<<&x<<endl;
    cout<<"Value of ptr : "<<ptr;
}