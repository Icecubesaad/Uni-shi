#include <iostream>
using namespace std;
int main(){
    int i=0;
    int j=9;
    int some_var;
    int *ptr = &some_var ;
    *ptr = i+j;
    cout<<*ptr;
}