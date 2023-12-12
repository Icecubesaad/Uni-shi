#include <iostream>
using namespace std;
int main()
{
    int Sum = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < i; j++)
            for (int k = 0; k < i; k++)
                Sum++  ;           
    cout<< Sum;
}