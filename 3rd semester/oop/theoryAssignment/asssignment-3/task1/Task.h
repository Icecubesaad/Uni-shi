#pragma once
class Account{
	double accoutNumber;
	int balance;
	char* accountHolderName;
	char* behaviour; // saving account or current account
public:
	Account();
	Account(double AccountNumber, char name[100], int balance,char* behaviour);
	void deposit(int amount);
	void withdraw(int amount);
	void displayAccountInfo();
};
class Saving :public Account{
	int interestRate;
public:
	Saving(double AccountNumber, char name[100], int balance, double interestRate);
    void displayAccountInfo();
};
class Current :public Account{
	int OverdraftLimit;
public:
	Current(double AccountNumber, char name[100], int balance, int OverdraftLimit);
    void displayAccountInfo();
};