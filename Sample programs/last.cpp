#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream icecube;
    icecube.open("input1.txt", ios::out);
    char first[100] = {};
    char second[100] = {};
    icecube.getline(first, 100);
    icecube.close();
    icecube.open("input2.txt", ios::out);
    icecube.getline(second, 100);
    bool run = true;
    int k = 0;
    for (int i = 0; first[i] != '\0'; i++)
    {
        if (first[i - 1] == ' ' || i == 0)
        {

            while (first[i] == second[k])
            {
                k++;
                i++;
            }
        }
        else
        {
            continue;
        }
    }
}