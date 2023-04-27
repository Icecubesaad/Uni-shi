#include <iostream>
using namespace std;
void ForOdd(char arr[], int size)
{
    cout << "Lenght is " << size << endl;
    int k = 0;
    char Ordered_arr[size + 1] = {};
    for (int b = 'a'; b <= 'z'; b++) // loop of alphabet
    {
        for (int i = 0; i <= size; i++)
        {
            if (arr[i] == ' ') // removing spaces
            {
                continue;
            }
            if (arr[i] == b)
            {
                Ordered_arr[k] = arr[i]; // if the word match it will copy to other array else alphabet will increase
                k++;
            }
        }
    }
    cout << Ordered_arr;
}
void ForEven(char arr[], int size)
{
    cout << "Lenght is " << size << endl;
    char reversed_arr[size + 1] = {};
    int j = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        reversed_arr[j] = arr[i];
        j++;
    }
    cout << j << endl;
    cout << reversed_arr;
}
int main()
{
    char arr[100] = {};
    int check = 0;
    cout << "Enter your sentence : ";
    cin.getline(arr, 100);
    for (int i = 0; arr[i] != '\0'; i++)
    {

        check += 1;
    }
    if (check % 2 == 0)
    {
        ForEven(arr, check);
    }
    if (check % 2 != 0)
    {
        ForOdd(arr, check);
    }
}