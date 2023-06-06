#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void end(){
    cout<<"Thank you for coming\n";
}
void reciept(int amount){
    char option;
    cout<<"Do you want to have reciept [Y/N] : ";
    cin>>option;
    if(option == 'Y'){
        cout<<"2 PKR has been deducted for the reciept\nyou have recieved "<<amount-2;
    }
    else{
        cout<<"You have recieved : "<<amount;
    }
    end();
}
void withdraw(int& amount)
{
    int option;
    cout << "How much money do you want to withdraw?\n1-3000/pkr\n2-5000/pkr\n3-10000/pkr\n4-20000/pkr\n5-Enter your custom amount\n";
    cin >> option;
    int amount_to_be_deducted=0;
    if (option == 1)
    {

        amount_to_be_deducted = 3000;
        amount -= amount_to_be_deducted;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR" <<"\n and you have recieved 3000"<< endl;
    }
    else if (option == 2)
    {

        amount_to_be_deducted = 5000;
        amount -= amount_to_be_deducted;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR"<<"\n and you have recieved 5000" << endl;
    }
    else if (option == 3)
    {
        amount_to_be_deducted = 10000;
        amount -= amount_to_be_deducted;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR"<<"\nand you have recieved 10000" << endl;
    }
    else if (option == 4)
    {
        amount_to_be_deducted = 20000;
        amount -= amount_to_be_deducted;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR"<<"\nand you have recieved 20000"<< " PKR" << endl;
    }
    else if (option == 5)
    {
        int amount_user;
        cout << "Enter the amount you want to withdraw: ";
        cin >> amount_user;
       amount_to_be_deducted = amount_user;
        amount -= amount_to_be_deducted;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR"<<"\nand you have recieved "<<amount_user<< " PKR" << endl;
    }
    else
    {
        cout << "Invalid Option." << endl;
    }

    reciept(amount_to_be_deducted);
}
void deposit(int& amount)
{
    int option;
    cout << "How much money do you want to deposit?\n1-3000/pkr\n2-5000/pkr\n3-10000/pkr\n4-20000/pkr\n5-Enter your custom amount\n";
    cin >> option;

    if (option == 1)
    {
        amount += 3000;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR" <<"\n3000 PKR has been added from you account"<< endl;
    }
    else if (option == 2)
    {
        amount += 5000;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR" <<"\n5000 PKR has been added from you account"<< endl;
    }
    else if (option == 3)
    {
        amount += 10000;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR" <<"\n10000 PKR has been added from you account"<< endl;
    }
    else if (option == 4)
    {
        amount += 20000;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR" <<"\n20000 PKR has been added from you account"<< endl;
    }
    else if (option == 5)
    {
        int amount_user;
        cout << "Enter the amount you want to deposit: ";
        cin >> amount_user;
        amount -= amount_user;
        cout << "Transaction has been successfully done.\nYour current balance is: " << amount << " PKR\n" <<amount_user<<" PKR has been added from you account"<< endl;
    }
    else
    {
        cout << "Invalid Option." << endl;
    }

    end();
}
int option(int &amount)
{
    int lang;
    cout << "Choose language\n1-Urdu\n2-English\n";
    cin >> lang;
    int ask;
    if (lang == 1)
    {
        cout << "kisi aik option ka inthekab kare\n1-paisa wapis lena hai\n2-paisa wapid karwana hai" << endl;
        cin >> ask;
        if (ask == 1)
        {
            withdraw(amount);
        }
        if (ask == 2)
        {
            deposit(amount);
        }
    }
    if (lang == 2)
    {
        cout << "Choose option\n1-Widraw\n2-Deposit" << endl;
        cin >> ask;
        if (ask == 1)
        {
            withdraw(amount);
        }
        if (ask == 2)
        {
            deposit(amount);
        }
    }

    return 0;
}
int finding_account(const char arr[], int &amount)
{
    int i = 0, j = 0;
    while (arr[i] != '\0')
    {
        while (arr[i] != ' ')
        {
            i++;
        }
        while (arr[i] == ' ')
        {
            i++;
        }
        while (j < 6 && arr[i] >= '0' && arr[i] <= '9')
        {
            amount = amount * 10 + (arr[i] - '0');
            i++;
            j++;
        }
    }
    return 0;
}
int asking_input(){
    
}
int main()
{
    int Not_found=0;
    int amount = 0;
    fstream File;
    File.open("AtmData.txt", ios::in);
    if (!File.is_open())
    {
        cout << "Cannot open the file." << endl;
        return 1; // Exit the program with an error code
    }

    char pin_no[100] = {};
    int count = 0;
    cout << "Enter your PIN number: ";
    cin.getline(pin_no, 100);
    while (pin_no[count] != '\0')
    {
        count++;
    }

    if (count != 3)
    {
        cout << "Enter a valid PIN number." << endl;
    }
    else
    {
        int amount = 0;
        char arr[100] = {};

        while (File.getline(arr, 100))
        {
            if (strncmp(arr, pin_no, 3) == 0)
            {
                finding_account(arr, amount);
                cout << "Your account balance is : " << amount << endl;
                option(amount);
                break;
            }
            else{
                Not_found++;
            }
        }
        if(Not_found >= 3){
            cout<<"Account not found. Please enter a valid Pin number.\n";
        }
    }

    File.close();
    return 0;
}
