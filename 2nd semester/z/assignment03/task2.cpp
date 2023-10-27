#include<iostream>
#include <fstream>
using namespace std;
bool checkNumber(int num){
    if(num > 0){
        return true;        // checking if its positive
    }
    else{
        return false;
    }
}
void copying(int* newArray, int* oldArray,int size){
    for (int i = 0; i < size; i++)
    {
        newArray[i] = oldArray[i];          //copying old data in old array to new array
    }
}
int* regrow(int* oldarray,int size,int num){
    int* newArray = NULL;                 
    newArray = new int[size+1];
    newArray[size] = num;                    // new number in the next index
    copying(newArray,oldarray,size);
    delete[] oldarray;                      // deleting old array
    return newArray;                        // pointer old array to new array
}
void displayArray(int* array,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<"\t";
    }
    
}
int main(){
    fstream file;
    bool check;
    file.open("Numbers.txt",ios::in);
    if(!file.is_open()){
        cout<<"Error opening a file";
    }
    int number;
    int* original_Array = nullptr;
    int size=0;
    while (file>>number)
    {
        check = checkNumber(number);
        if(check){
            original_Array = regrow(original_Array,size,number);        // pointing old array to new array
            size++;
        } 
    }

    displayArray(original_Array,size);
    
    cout<<"\nTotal number of positive number is : "<<size;
    
}
