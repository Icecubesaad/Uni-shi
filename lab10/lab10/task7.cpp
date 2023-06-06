#include <iostream>
using namespace std;
int* factorial(int *number){
    int multiple=1;
    for (int i = 0; i < *number; i++)
    {
        multiple = multiple * (*number-i);
    }
    *number = multiple;
    return number;
}
int main()
{
    int run_again = true;
    int *number = new int;
    int ask;
    while (run_again)
    {
        cout << "Enter a number : ";
        cin >> ask;
        *number = ask;
        if (*number % 2 == 0)
        {
            if (*number == 2 || *number ==1)
            {
                cout << "Number you entered is prime\n";
                factorial(number);
                cout<<"Factorial of "<<ask<< " is : " <<*number<<endl;
            }
            else
            {
                cout << "Number you entered is not prime\n";

            }
        }
        else
        {
            cout << "Number you entered is prime\n";
            factorial(number);
            cout<<"Factorial of "<<ask<< " is : " <<*number<<endl;
        }
    }
    delete number;
}