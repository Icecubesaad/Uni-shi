#include <iostream>
using namespace std;
int sizea;
int Rotate(int arr[], int num)
{
    int temp_arr[5] = {};
    int sizeb = sizeof(temp_arr) / sizeof(temp_arr[0]);
    for (int i = 0; i < num; i++)
    {
        temp_arr[i] = arr[i];               // Initializing it with initial integers in arr
    }
    for (int j = num; j < sizea; j++)
    {
        arr[j - num] = arr[j];              // Moving all the elements in to the left side
    }
    for (int k = sizea-num,j=0; k < sizea; k++,j++)
    {
        arr[k] = temp_arr[j];               // Initalizing end elements with temp_arr[] elements
    }
    for (int i = 0; i < sizea; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int temp_arr[5] = {};
    sizea = sizeof(arr) / sizeof(arr[0]);
    int number;
    cout << "Enter the Number : ";
    cin >> number;
    Rotate(arr, number);
}