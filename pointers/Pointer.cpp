#include <iostream>
using namespace  std;
int*  pointer_acceptor(int* pointer){
    *pointer = 32;
    return pointer;
}
int main(){
    int pointer_array[5] = {1,2,3,4,5};
    int* pointer = pointer_array;
    int* pointer_return=pointer_acceptor(pointer);
    cout<<*(pointer_return+1);
}