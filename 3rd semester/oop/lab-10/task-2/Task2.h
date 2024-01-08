#pragma once
class Author {
private:
	char* name;
	char* email;
	int birthYear;
public:
	Author();
	Author(char name[100], char email[100], int year);
	void Display();
	void setValues(char name[100], char email[100], int year);
};
class Book {
private:
	char* title;
	double price;
	Author author;
public:
	Book();
	Book(char title[100], double price, char name[100], char email[100], int year);
	void Display();
};