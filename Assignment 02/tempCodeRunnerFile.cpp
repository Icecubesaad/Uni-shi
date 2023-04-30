#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int sum = 0;
    float average;
    for (int i = 0; i < 5; i++)
    {
        int* ptr_arr = &arr[i];
        sum = sum + *ptr_arr;
    }
    average = sum/5;
    cout<<"Average of the array is : "<<average;
    
}