#include <iostream>
#include <fstream>
#include "function2.h"
using namespace std;
float sum(float* a, int size){
float result=0;
	for (int i = 0; i < size; i++){
		result += a[i];
	}
	return result;
}
float average(float* a, int size){
	float result=0;
	for (int i = 0; i < size; i++){
		result += a[i];
	}
	result = result / size;
	return result;
}
void sortingNumbers(float* a, int size){
	int i;
	float temp;
	for ( i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	fstream file;
	file.open("result.txt", ios::out)
		;
	i = 0;
	while (i < size){
		cout << a[i] << endl;
		file << a[i] << endl;
		i++;
	}
}
int coutingNumbers(float* a, int size){
	int result=0;
	for (int i = 0; i < size; i++){
		result++;
	}
	return result;
}
