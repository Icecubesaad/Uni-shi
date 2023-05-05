#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream icecube;
    int spaces = 0;
    int Alphabet = 0;
    int Integers = 0;
    icecube.open("CountingParameters.txt",ios::in);
    char arr[100]={};
    icecube.getline(arr,100);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == ' k'){
            spaces++;
        }
        else if(arr[i] >= 'a' && arr[i]<='z' || arr[i]>='A' && arr[i] <= 'Z'){
            Alphabet++;
        }
        else if( arr[i] >= '0' && arr[i]<='9'){
            Integers++;
        }
    }
    cout<<"Alphabets : "<<Alphabet<<endl;
    cout<<"Integers : "<<Integers<<endl;
    cout<<"Spaces : "<<spaces<<endl;
    
}