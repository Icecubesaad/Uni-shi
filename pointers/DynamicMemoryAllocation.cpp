#include <iostream>
using namespace std;
int* pointer_acceptor(int* pointer){
    *pointer = 8;
    return pointer;
}
int main(){
    int* pointer_dynamic = new int;
    *pointer_dynamic = 5;
    cout<<pointer_dynamic<<endl;
    pointer_acceptor(pointer_dynamic);
    cout<<*pointer_dynamic;
}