#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int sum = 0;
    float average;
    for (int i = 0; i < 5; i++)
    {
        int* ptr_arr = &arr[i]; // getting every single element's memory and storing it in pointer variable
        sum = sum + *ptr_arr;//retrieving value from the memory location and summing it
    }
    average = sum/5;//getting averege
    cout<<"Average of the array is : "<<average;
    
}