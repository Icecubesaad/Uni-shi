#include <iostream>
using namespace std;
void CToF(){
    float number;
    cout<<"Enter the temperature in celcius : ";
    cin>>number;
    float C = (number * 9/5) + 32;
    cout<<C;
}
void FToC(){
    float number;
    cout<<"Enter the temperature in Farenheit : ";
    cin>>number;
    float C = (number - 32) * 5/9;
    cout<<C;
}
int main(){
    int option;
    cout<<"Press 1 for Fahrenheit to Celsius\nPress 2 for Celsius to Farehiet : ";
    cin>>option;
    if(option == 1){
        FToC();
    }
    else if(option == 2){
        CToF();
    }
    else{
        cout<<"Invalid option";
    }
}