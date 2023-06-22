#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream reading;
    char reading_from[100];
    reading.open("controller.txt",ios::in);
    while (!reading.eof())
    {
        reading.getline(reading_from,100);
        cout<<reading_from;
    }
    
}