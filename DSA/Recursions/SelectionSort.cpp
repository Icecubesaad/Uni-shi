#include <iostream>
using namespace std;
int SelectionSort(int* arr,int size, int index){
    // find the minimum element
    if(index>size-1){
        return 0;
    }
    int min_index = arr[index];
    for(int i=index+1;i<size;i++){
        if(arr[i]<min_index){
            min_index = i;
        }
    }
    int temp = arr[index];
    arr[index] = arr[min_index];
    arr[min_index] = temp;
    return SelectionSort(arr,size,index+1);
}
int main(){
    int arr[5]={86,22,34,421,534};
    SelectionSort(arr,5,0);
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}