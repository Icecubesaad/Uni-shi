#include <iostream>
#include <fstream>
#include "function3.h"
using namespace std;
void read(char filename[]){
	fstream file;
	file.open(filename, ios::in);
	if (!file.is_open()){
		cout << "Cannot open this file \n";
	}
	else{
	char string[100];
	while (file.getline(string, 100)){
		cout << string;
	}
	}
	file.close();
}
void deleteText(char filename[]){
	fstream file;
	file.open(filename, ios::out);
	file.close();
}
void write(char filename[]){
    fstream file;
    file.open(filename,ios::out);
    char string[100];
	cout << "Enter your text : ";
	cin.getline(string,100);
	file << string;
	file.close();
}
void add(char filename[]){
	fstream file;
	file.open(filename, ios::app);
	char string[100];
	cout << "Enter your text : ";
	int ask;
	cin>>ask;
	file << ask;
	file.close();
}