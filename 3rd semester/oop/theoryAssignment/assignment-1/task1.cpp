#include <iostream>
using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;
    int reducedNumnator;
    int reducedDenominator;
    int numerator2;
    int denominator2;
    int reducedNumnator2;
    int reducedDenominator2;

public:
    Rational(int n = 1, int d = 1)
    {
        numerator = n;
        denominator = d;
        reducedDenominator = d;
        reducedNumnator = n;
        turn_reduced_form(numerator, denominator);
    }
   int addRationalNumber() {
        int numerator2, denominator2;

        cout << "Enter numerator for the second rational number: ";
        cin >> numerator2;

        cout << "Enter denominator for the second rational number: ";
        cin >> denominator2;

        turn_reduced_form_two(numerator2, denominator2);

        if (reducedDenominator2 == denominator) {
            numerator += numerator2;
        } else {
            numerator = numerator * denominator2 + numerator2 * denominator;
            denominator *= denominator2;
        }

        turn_reduced_form_two(numerator, denominator);
    }
void subtractRationalNumber() {
        int numerator2, denominator2;

        cout << "Enter numerator for the second rational number: ";
        cin >> numerator2;

        cout << "Enter denominator for the second rational number: ";
        cin >> denominator2;

        turn_reduced_form(numerator2, denominator2);

        if (reducedDenominator2 == denominator) {
            numerator -= numerator2;
        } else {
            numerator = numerator * denominator2 - numerator2 * denominator;
            denominator *= denominator2;
        }

        turn_reduced_form(numerator, denominator);
    }
    void multiplyRationalNumber() {
        int numerator2, denominator2;

        cout << "Enter numerator for the second rational number: ";
        cin >> numerator2;

        cout << "Enter denominator for the second rational number: ";
        cin >> denominator2;

        turn_reduced_form(numerator2, denominator2);

        numerator *= numerator2;
        denominator *= denominator2;

        turn_reduced_form(numerator, denominator);
    }
    void divideRationalNumber() {
        int numerator2, denominator2;

        cout << "Enter numerator for the second rational number: ";
        cin >> numerator2;

        cout << "Enter denominator for the second rational number: ";
        cin >> denominator2;

        if (numerator2 == 0) {
            cout << "Cannot divide by zero. Please enter a non-zero numerator for the second rational number." << endl;
            return;
        }

        turn_reduced_form(numerator2, denominator2);

        numerator *= denominator2;
        denominator *= numerator2;

        turn_reduced_form(numerator, denominator);
    }
     void printFraction() const {
        cout << numerator << "/" << denominator << endl;
    }

    void printFloatingPoint() const {
        double result = static_cast<double>(numerator) / denominator;
        cout << result << endl;
    }
    void turn_reduced_form_two(int n, int d) {
        int temp_n = n;
        int temp_d = d;

        while (temp_d != 0) {
            int temp = temp_d;
            temp_d = temp_n % temp_d;
            temp_n = temp;
        }

        reducedNumnator2 = n / temp_n;
        reducedDenominator2 = d / temp_n;

        cout << reducedNumnator2 << "/" << reducedDenominator2 << endl;
    }
    int turn_reduced_form(int n, int d)
    {
        while (d != 0)
        {
            int temp = d;
            d = n % d;
            n = temp;
        }
        reducedNumnator /= n;
        reducedDenominator /= n;

        cout << reducedNumnator << "/" << reducedDenominator << endl;
    }
};

int main()
{
    Rational rate(4, 8);
    rate.addRationalNumber();
    return 0;
}
