#include <iostream>
#include <fstream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void copyArray(int *newArray, int *oldArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        newArray[i] = oldArray[i];
    }
}

int *regrowArray(int *oldArray, int size, int value)
{
    int *newArray = new int[size + 1];
    copyArray(newArray, oldArray, size);            // to get all the previous element oldArray is pointing to
    newArray[size] = value;
    delete[] oldArray;
    return newArray;
}

void displayArray(const int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    const char *filename = "primeNumbers.txt";
    int *data = nullptr;
    int size = 0;
    int num;

    fstream file;
    file.open(filename,ios::in);
    if (!file)
    {
        cout << "Error opening file"<< endl;
        return 1;
    }

    while (file >> num)
    {
        bool isNumPrime = isPrime(num);
        if (isNumPrime)
        {
            data = regrowArray(data, size, num);
            size++;
        }
    }

    displayArray(data, size);

    delete[] data;

    return 0;
}
