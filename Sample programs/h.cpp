#include <iostream>
using namespace std;
void positive(int arr[],int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>0){
            count++;
        }
    }
    cout<<"Number of positive number in this array is : "<<count;
}
int main()
{
    int arr[10] = {};
    int ask;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i + 1 << " value : ";
        cin >> ask;
        arr[i] = ask;
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    positive(arr,size);
}