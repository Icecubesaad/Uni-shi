#include <iostream>
using namespace std;
int pointer_acceptor(int *pointer){
    for (int i = 0; i < 5; i++)
    {
        *(pointer+i) = (*(pointer+i))*(*(pointer+i));
    }
    
}
int main(){
    int *pointer_Dynamic= new int[5];
    int ask;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the element : ";
        cin>>ask;
        *(pointer_Dynamic+i) =ask; 
    }
    pointer_acceptor(pointer_Dynamic);
    for (int j = 0; j < 5; j++)
    {
        cout<<*(pointer_Dynamic+j);
    }
    
}