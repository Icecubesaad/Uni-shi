#include <iostream>
using namespace std;
int main(){
    float x = 3.65;
    void* ptr = &x;
    cout<<"Value of &x : "<<&x<<endl;
    cout<<"Value of ptr : "<<ptr;
}