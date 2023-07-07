#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("mydata.txt", ios::in);
    int size = 0;
    int num;
    int *originalArray = NULL;
    int *ptr = NULL;
    while (file >> num)
    {
        ptr = new int[size + 1];
        ptr[size] = num;
        for (int i = 0; i < size; i++)
        {
            ptr[i] = originalArray[i];
        }
        delete[] originalArray;
        originalArray = ptr;
        ptr = NULL;
        size++;
    }
    char option;
    bool run = false;
    bool run_it_back = true;
    while (run_it_back)
    {
        cout << "\nDo you want to add a new element (Y/N) ?"<<endl;
        cin >> option;
        if (option == 'Y')
        {
            cin >> num;
            run = true;
            run_it_back = true;
        }
        else
        {
            cout << "OK" << endl;
            run = false;
            run_it_back = false;
        }
        while (run)
        {
            ptr = new int[size + 1];
            ptr[size] = num;
            for (int i = 0; i < size; i++)
            {
                ptr[i] = originalArray[i];
            }
            delete[] originalArray;
            originalArray = ptr;
            ptr = NULL;
            size++;
            run = false;
        }
    }

    for (int print = 0; print < size; print++)
    {
        cout << originalArray[print]<<"\t";
    }
    delete[] originalArray;
    delete[] ptr;
}