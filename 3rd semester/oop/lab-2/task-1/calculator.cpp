#include <iostream>
#include "calculator.h" 
using namespace std;
float add(float a, float b){
	cout << "function called";
	return a + b;
}
float sub (float a, float b){
	return a - b;
}
float divide(float a, float b){
	return a / b;
}
float multiply(float a, float b){
	return a * b;
}
float square(float a){
	return a * a;
}
float cube(float a){
	return a * a * a;
}
float square_root(float a){
	return 5;
}