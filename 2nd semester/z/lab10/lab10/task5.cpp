#include <iostream>
using namespace std;
int *Resultant_Array(int *array1, int *array2, int *resultant)
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        *(resultant + i) = *(array1 + i) + *(array2 + i);
    }
    return resultant;
}
int main()
{
    int *pointer_array_1 = new int[5];
    int *pointer_array_2 = new int[5];
    int *pointer_resultant = new int[5];
    int i, ask;
    cout << "Enter array 1 \n";
    for (i = 0; i < 5; i++)
    {
        cin >> ask;
        *(pointer_array_1 + i) = ask;
    }
    cout << "Enter array 2 \n";
    for (i = 0; i < 5; i++)
    {
        cin >> ask;
        *(pointer_array_2 + i) = ask;
    }
    Resultant_Array(pointer_array_1, pointer_array_2, pointer_resultant);
    for (i = 0; i < 5; i++)
    {
        cout << *(pointer_resultant + i) << "\t";
    }
    delete[] pointer_array_1;
    delete[] pointer_array_2;
    delete[] pointer_resultant;
}