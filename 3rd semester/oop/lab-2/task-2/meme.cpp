#include <iostream>
#include <fstream>
using namespace std;
// float sum( float* a,int size );
// float average(float* a,int size);
// void sortingNumbers(float* a,int size);
// int coutingNumbers(float* a, int size);
class function2
{
public:
    function2(){}
    float sum(float *a, int size)
    {
        float result = 0;
        for (int i = 0; i < size; i++)
        {
            result += a[i];
        }
        return result;
    }
    float average(float *a, int size)
    {
        float result = 0;
        for (int i = 0; i < size; i++)
        {
            result += a[i];
        }
        result = result / size;
        return result;
    }
    void sortingNumbers(float *a, int size)
    {
        int i;
        float temp;
        for (i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        fstream file;
        file.open("result.txt", ios::out);
        i = 0;
        while (i < size)
        {
            cout << a[i] << endl;
            file << a[i] << endl;
            i++;
        }
    }
    int coutingNumbers(float *a, int size)
    {
        int result = 0;
        for (int i = 0; i < size; i++)
        {
            result++;
        }
        return result;
    }
};
int main()
{
    fstream file;
    function2 operations;
    file.open("data.txt", ios::in);
    float ask;
    int a = 0;
    float array[100];
    while (!file.eof())
    {
        file >> ask;
        array[a] = ask;
        a++;
    }
    int opt;
    cout << "Select the option from the below : \n";
    cout << "1- Add \n 2- Average \n 3- Sorting Numbers \n 4- Count Numbers\n";
    cin >> opt;
    switch (opt)
    {
    case 1:
        cout << "Sum\n";

        cout << "SUM = " << operations.sum(array, a - 1);
        break;
    case 2:
        cout << "Average\n";
        cout << "AVERAGE = " << operations.average(array, a - 1);
        break;
    case 3:
        cout << "Sorting Number\n";
        operations.sortingNumbers(array, a - 1);
        break;
    case 4:
        cout << "Counting Number\n";
        cout << "NUMBERS = " << operations.coutingNumbers(array, a - 1);
        break;
    default:
        break;
    }
    return 0;
}