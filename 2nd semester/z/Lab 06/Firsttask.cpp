#include <iostream>
#include <fstream>
using namespace std;
fstream file;
void write(int average){
	file.open("Status.txt", ios::out);
	if (file.is_open()){
		if (average < 4){
		file << "Below average";
	}
	else if (average >= 4 && average <= 6){
		file << "On average";
	}
	else if (average>6){
		file << "Above Average";
	}
	}
	else{
		cout<<"Error opening Status.txt"<<endl;
	}
	
}
int read(){
	int average;
	file.open("average.txt", ios::in);
	if(file.is_open()){
		file >> average;
	file.close();
	return average;
	}
	else{
		cout<<"Error opening average.txt"<<endl;
	}
	
		
}
int main(){
	int average = read();
	write(average);
	return 0;
}