#include <iostream>
using namespace std;
int main(){
    int i=0;
    int j=9;
    int* ptr = *&i+*&j;
    cout<<ptr;
}