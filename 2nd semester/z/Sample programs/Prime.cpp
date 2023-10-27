#include <iostream>
using namespace std;
int Check(int num)
{
    bool run = true;
    bool check = true;
    int i = 2;
    while (i<=num)
    {
            if (num % i == 0)
            {
                check = false;
                break;
            }
        i++;
    }
    return check;
}
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    bool check = Check(number);
    if(check){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
}