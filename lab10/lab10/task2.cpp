#include <iostream>
using namespace std;
int inputArray(int *ptr){
    int ask;
    cout<<"Enter the 5 element of the array : ";
    for (int i = 0; i < 5; i++)
    {
        cin>>ask;
        ptr[i] = ask;
    }
    return ptr[0];
}
int main(){
    int array[5]={};
    inputArray(array);
    for (int j = 0; j < 5; j++)
    {
        cout<<array[j]<<"\t";
    }
    
}