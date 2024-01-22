#include "task.h"
#include <iostream>
using namespace std;
Account::Account(double AccountNumber, char name[100], int balance, char* type){
	this->accountHolderName = name;
	this->accoutNumber = AccountNumber;
	this->balance = balance;
	this->behaviour = type;
}
void Account::deposit(int amount){
	this->balance += amount;
    cout<<"\nDeposited $"<<amount<<endl<<endl;
}
void Account::withdraw(int amount){
	this->balance -= amount;
    cout<<"\nWithdrawn $"<<amount<<endl<<endl;
    
}
void Account::displayAccountInfo(){
	cout << "Account Number : " << this->accoutNumber << endl;
	cout << "Account Holder Name : " << this->accountHolderName<<endl;
	cout << "Balance : " << this->balance<<"$\n";
	cout << "Account Type : " << this->behaviour<<endl;
}
Saving::Saving(double AccountNumber, char name[100], int balance, double InterestRate) :Account(AccountNumber, name, balance, "saving"){
	this->interestRate = interestRate;
}
Current::Current(double AccountNumber, char name[100], int balance, int OverdraftLimit):Account(AccountNumber,name,balance,"Current"){
    this->OverdraftLimit=OverdraftLimit;
}
void Saving::displayAccountInfo(){
    Account::displayAccountInfo();
    cout<<"Interest Rate : "<<this->interestRate<<"%\n";
}
void Current::displayAccountInfo(){
    Account::displayAccountInfo();
    cout<<"Overdraft Limit : "<<this->OverdraftLimit<<endl;
}
int main(){
    char name[100]="Babar Nazir";
    char name2[100]="Imran Ali";
	// Create instances of both accounts
	Saving savings(123, name, 1000, 0.05);
	Current current(321, name2, 500, 200);
	// Perform operations on Saving
	savings.displayAccountInfo();
	savings.deposit(500);
	savings.displayAccountInfo();
	savings.withdraw(200);
	savings.displayAccountInfo();
	// Perform operations on Current
	current.displayAccountInfo();
	current.deposit(300);
	current.displayAccountInfo();
	current.withdraw(800);
	current.displayAccountInfo();
	return 0;
}