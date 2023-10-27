#include <iostream>
#include <fstream>
#include "function2.h"
using namespace std;
int main(){
	fstream file;
	file.open("data.txt", ios::in);
	float ask;
	int a=0;
	float array[100];
	while (!file.eof())
	{
		file >> ask;
		array[a] = ask;
		a++;
	}
	int opt;
	cout << "Select the option from the below : \n";
	cout << "1- Add \n 2- Average \n 3- Sorting Numbers \n 4- Count Numbers\n";
	cin >> opt;
	switch (opt)
	{
	case 1:
		cout << "Sum\n";

		cout<<"SUM = "<<sum(array, a - 1);
		break;
	case 2:
		cout << "Average\n";
		cout<<"AVERAGE = "<<average(array, a - 1);
		break;
	case 3:
		cout << "Sorting Number\n";
		sortingNumbers(array, a - 1);
		break;
	case 4:
		cout << "Counting Number\n";
		cout<<"NUMBERS = "<<coutingNumbers(array, a - 1);
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}