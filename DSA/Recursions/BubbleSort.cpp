#include <iostream>
using namespace std;
int bubbleSort(int* arr, int size){
    int temp;
    if(size<1){
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
         if (arr[i] > arr[i + 1]) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return bubbleSort(arr, size-1);
}
int main(){
    int arr[5]={86,22,34,421,534};
    bubbleSort(arr,5);
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}