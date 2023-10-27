#include <iostream>
using namespace std;
int copy(int*, int*, int);
int* regrow(int*,int);
int main(){
    int* array = new int[1];
    array[0] = 1;
    int size = 0;
    char ask;
    bool run=true;
    while (run)
    {
        cout<<"Do you want to regrow array ? ";
        cin>>ask;
        if(ask == 'y'){
            size++;
            array = regrow(array,size);
        }
        else{
            run = false;
        }
    }
    for (int j = 0; j <= size; j++)
    {
       cout<<array[j]<<"\t";
    }
    
    
    
}
int copy(int* newArray, int*array, int size){
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
    
}
int* regrow(int* array,int size){
    int ask;
    int* newArray = NULL;
    newArray = new int[size+1];
    copy(newArray,array,size);
    cout<<"Add a new number : ";
    cin>>ask;
    newArray[size] = ask;
    return newArray;
}