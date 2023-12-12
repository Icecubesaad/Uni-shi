#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Default constructor with default values
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        reduce(); // Call the function to reduce the fraction
    }

    // Function to find the greatest common factor (GCF)
    int findGCF(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Function to reduce the fraction
    void reduce() {
        int gcf = findGCF(numerator, denominator);
        numerator /= gcf;
        denominator /= gcf;
    }

    // Function to display the fraction
    void display() {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    // Create a fraction with default values (0/1)
    Fraction defaultFraction;
    std::cout << "Default Fraction: ";
    defaultFraction.display(); // Output: 0/1

    // Create a fraction with specific values (e.g., 4/8)
    Fraction customFraction(4, 8);
    std::cout << "Custom Fraction: ";
    customFraction.display(); // Output: 1/2

    return 0;
}
