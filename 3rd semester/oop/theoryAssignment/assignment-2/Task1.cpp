#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    char *accountHOlderName;
    int balance;
    static int totalAccounts;

public:
    BankAccount(char name[])
    {
        this->accountNumber = totalAccounts;
        this->accountHOlderName = new char[100];
        int iterator = 0;
        while (name[iterator] != '\0')
        {
            accountHOlderName[iterator] = name[iterator];
            iterator++;
        }
        accountHOlderName[iterator] = '\0';
        this->balance = 0;
        this->totalAccounts++;
    }
    void Withdraw(int amount)
    {
        if (amount >= this->balance)
        {
            this->balance -= amount;
        }
        else{
            cout<<"not enough balance\n";
        }
    }
    void Deposit(int amount)
    {
        this->balance += amount;
    }
    static int ShowAccountsNumber();
    void displayInformation(){
        cout<<"\nAccount Holder Name : "<<accountHOlderName<<endl;
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Account Balance : "<<this->balance<<endl;
    }
};
int BankAccount::ShowAccountsNumber(){
    return totalAccounts;
}
int BankAccount::totalAccounts = 0;
int main()
{
    BankAccount acc1("saad");
    acc1.Deposit(5000);
    acc1.displayInformation();
    BankAccount acc2("huhu");
    BankAccount acc3("hadi");
    cout<<"\nTotal Number Of Account :  "<<BankAccount::ShowAccountsNumber();
}