#include <iostream>
using namespace std;
void calculateSalesAndProfit(double prices[], int quantities[], int numProducts, double& totalSales, double& totalProfit) {
    totalSales = 0.0;
    totalProfit = 0.0;

    for (int i = 0; i < numProducts; i++) {
        double sales = prices[i] * quantities[i];
        double profit = sales * 0.5; // Assuming a profit margin of 50%
        totalSales += sales;
        totalProfit += profit;
    }
}

void displayReceipt(double totalSales, double totalProfit, double totalAmount) {
    cout << "----- Receipt -----" << endl;
    cout << "Total Sales: $" << totalSales << endl;
    cout << "Total Profit: $" << totalProfit << endl;
    cout << "Total Amount: $" << totalAmount << endl; 
    cout<< "-------------------" << std::endl;
}

bool processCreditCardPayment(double totalAmount) {
    cout << "Credit Card Payment: $" << totalAmount << std::endl;

    int pin;
    cout << "Enter your PIN number: ";
    cin >> pin;

    // Process credit card payment using the entered PIN
    // Add your credit card payment processing logic here

    // Assume the payment is successful for demonstration purposes
    return true;
}

int main() {
    const int MaxProducts = 100;
    int numProducts = 3; // Assuming 3 products for demonstration purposes
    double prices[MaxProducts] = { 10.99, 5.49, 8.99 }; // Sample prices
    int quantities[MaxProducts] = { 15, 20, 10 }; // Sample quantities

    // Calculate total sales and profit
    double totalSales, totalProfit;
    calculateSalesAndProfit(prices, quantities, numProducts, totalSales, totalProfit);

    // Display results
    cout << "Total Sales: $" << totalSales << endl;
    cout << "Total Profit: $" << totalProfit << endl;

    // Calculate total amount
    double totalAmount = totalSales + totalProfit;

    // Display receipt
    displayReceipt(totalSales, totalProfit, totalAmount);

    // Payment options
    cout << "Payment Options:" <<endl;
    cout << "1. Credit Card" <<endl;
    cout << "2. Pay by Hand" << endl;

    int paymentOption;
    cout << "Select a payment option (1-2): ";
    cin >> paymentOption;

    switch (paymentOption) {
        case 1:
            // Process credit card payment
            if (processCreditCardPayment(totalAmount)) {
                cout << "Credit card payment successful." <<endl;
                // Additional processing after successful payment
            } else {
                cout << "Credit card payment failed." <<endl;
                // Additional processing after failed payment
            }
            break;
        case 2:
            // Pay by hand
            cout << "Pay by Hand: $" << totalAmount << endl;
            // Add manual payment processing code here
            break;
        default:
            cout << "Invalid payment option selected." << endl;
            break;
    }

    return 0;
}