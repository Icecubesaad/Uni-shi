#include <iostream>
#include "function3.h"
#include <fstream>
using namespace std;
int main(){
	char filename[100];
	cout << "Enter the file name : ";
	cin.getline(filename, 100);
	cout << "Select option from below : \n 1- Add Text \n 2- Delete Text \n 3- Read Text \n 4- Write Text \n";
	int opt;
	cin >> opt;
	switch (opt)
	{
	case 1:
		cout << "adding text \n";
		add(filename);
		break;
	case 2:
		cout << "deleting text";
		deleteText(filename);
		break;
	case 3:
		cout << "Reading text \n";
		read(filename);
	case 4:
	    cout<<"Writing text \n";
	    write(filename);
	default:
		break;
	}
}