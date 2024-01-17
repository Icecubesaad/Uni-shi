#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    int opt;
    float a, b;

    cout << "Welcome to calculator\n";
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Select one from the following:\n";
    cout << "1- Add\n";
    cout << "2- Subtract\n";
    cout << "3- Multiplication\n";
    cout << "4- Divide\n";
    cin >> opt;

    float result;

    if (opt == 1) {
        cout<<"Adding two numbers"<<endl;
        result = add(a, b);
    }
    else if (opt == 2) {
        cout<<"Subtracting two numbers"<<endl;
        result = subtract(a, b);
    }
    else if (opt == 3) {
        cout<<"Multiplying two numbers"<<endl;
        result = multiply(a, b);
    }
    else if (opt == 4) {
        cout<<"Dividing two numbers"<<endl;
        result = division(a, b);
    }
    else {
        cout << "Invalid choice";
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0; 
}
