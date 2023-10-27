#include <iostream>
using namespace std;
int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
    int *ptr = &arr[i];
        for (int j = i+1; j < 10; j++)
        {
            if(*(ptr)>*(ptr+j)){
                int swap = *ptr;
                arr[j] = arr[i];
                arr[i] = swap; 
            }
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    
    }