#include <iostream>
using namespace std;
int main()
{
    char arr[100] = {};
    char arr2[100] = {};
    char arr3[100] = {};
    int i, k = 0;
    cout << "Enter the input for the first array : ";
    cin.getline(arr, 100);
    cout << "Enter the input  for the second array : ";
    cin.getline(arr2, 100);
    for (int compare = 'a'; compare <= 'z'; compare++)
    {
        for (i = 0; arr[i] != '\0'; i++)
        {
            if(arr[i] == compare){
                arr3[k] = arr[i];
                k++;
            }
        }
    }
    for (int compare = 'a'; compare <= 'z'; compare++)
    {
        for (int i = 0; arr2[i] != '\0'; i++)
        {
            if(arr2[i] == compare){
                arr3[k] = arr2[i];
                k++;
            }
        }
    }
    cout<<arr3;
    
}