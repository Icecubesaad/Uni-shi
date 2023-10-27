#include <iostream>
using namespace std;
void square_root()
{
    float number;
    cout << "Enter the number : ";
    cin >> number;
    float answer;
    bool run = true;
    float point = 0.0;
    int check = 0;
    int iteration = 0;
    for (int i = 0; i <= number; i++)
    {
        iteration += 1;
        if (i * i == number)
        {
            answer = i;
            break;
        }
        else
        {
            check += 1;
            if (check == iteration)
            {
                i = 0;
                for (float i = 0.0; i <= number; i += 0.0001)
                {
                    iteration++;
                    if (i * i >= number)
                    {
                        answer = i;
                        break;
                    }
                }
            }
            else
            {
                continue;
            }
        }
    }
    cout << answer;
}
void power()
{
    float number;
    cout << "Enter the number : ";
    cin >> number;
    int power;
    float product = 1;
    cout << "Enter the power : ";
    cin >> power;
    for (int i = 0; i < power; i++)
    {
        product = product * number;
    }
    cout << product;
}
void Floor()
{
    float number;
    cout << "Enter the number : ";
    cin >> number;
    int answer;
    answer = number;
    if (answer <= number)
    {
        cout << answer;
    }
    else
    {
        if (answer < 0)
        {
            cout << answer - 1;
        }
    }
}
void Ceil()
{
    float number;
    cout << "Enter the number : ";
    cin >> number;
    int to_check = number;
    float check = to_check + 0.5;
    if (number > check)
    {
        cout << to_check + 1;
    }
    else
    {
        cout << to_check;
    }
}

void Permutation(int array[],int size)
{
   

    // Sorting the array
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    // Find the next permutation
    int small_num = -1;
    int bigger_than_small_number = -1;
    for (int i = size - 2; i >= 0; i--)
    {
        if (array[i] < array[i + 1])
        {
            small_num = i;
            break;
        }
    }
    if (small_num == -1)
    {
        // There is no next permutation, return to the original state
        for (int i = 0; i < size / 2; i++)
        {
            int swap = array[i];
            array[i] = array[size - i - 1];
            array[size - i - 1] = swap;
        }
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int j = size - 1; j > small_num; j--)
    {
        if (array[j] > array[small_num])
        {
            bigger_than_small_number = j;
            break;
        }
    }
    // Swap the small_num with the next bigger number
    int swap = array[small_num];
    array[small_num] = array[bigger_than_small_number];
    array[bigger_than_small_number] = swap;

    // Reverse the elements from small_num+1 to the end of the array
    for (int i = small_num + 1; i <= (size + small_num) / 2; i++)
    {
        int swap = array[i];
        array[i] = array[size - i + small_num];
        array[size - i + small_num] = swap;
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void Combination()
{
    int k, ask, size;
    cout << "Enter the number of combination you want : ";
    cin >> k;
    cout << "Enter the size of the array : ";
    cin >> size;
    int array[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " value : ";
        cin >> ask;
        array[i] = ask;
    }
    for (int i = 0; i < size - k + 1; i++)
    {
        for (int j = i + 1; j < size - k + 2; j++)
        {
            cout << "{ " << array[i] << ", " << array[j] << " }" << endl;
        }
    }
}
int main()
{
    char option;
    cout << "Enter option\n'P' for Power\n'S' for square root\n'F' for floor\n'C' for Ciel\n'R' for permutation\n'M' for combinations : ";
    cin>>option;
    if (option == 'P' || option == 'p')
    {
        power();
    }
    else if (option == 'S' || option == 's')
    {
        square_root();
    }
    else if (option == 'F' || option == 'f' )
    {
        Floor();
    }
    else if (option == 'C' || option == 'c')
    {
        Ceil();
    }
    else if (option == 'R' || option == 'r')
    {
         int size, ask;
    cout << "Enter the size of the array : ";
    cin >> size;
    int array[3] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " value : ";
        cin >> ask;
        array[i] = ask;
    }
        for (int i = 0; i < 6; i++)
        {
            Permutation(array,size);
        }
    }
    else if (option == 'M' || option == 'm')
    {

        Combination();
    }
}