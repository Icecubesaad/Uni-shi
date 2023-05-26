#include <iostream>
using namespace std;
int main()
{
    // Dynamically allocate an integer
    int *dynamicInt = new int;
    *dynamicInt = 42;
    cout << "Value stored in dynamicInt: " << *dynamicInt << endl;
    // Dynamically allocate an array of integers
    int size = 5;
    int *dynamicArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = i + 1;
        cout << "Value at index " << i << ": " << dynamicArray[i] << endl;
    }
    // Free the dynamically allocated memory
    delete dynamicInt;
    delete[] dynamicArray;
    return 0;
}
