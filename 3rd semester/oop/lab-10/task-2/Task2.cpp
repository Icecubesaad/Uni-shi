#include "Task2.h"
#include <iostream>
using namespace std;
int main() {
	char title[100]={"My Other Half"};
	double price = 100.00;
	char author[100] = { "Henna B." };
	char email[100] = { "HennaB@gmail.com" };
	int birthYear = 2004;
	Book b1(title, price, author, email, birthYear);
	b1.Display();
}