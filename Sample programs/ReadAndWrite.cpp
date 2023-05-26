#include <iostream>
#include <fstream>
using namespace std;
fstream file;
void write(char arr1[],char arr2[]){
    cout<<arr1<<endl;
    cout<<arr2<<endl;
    file.open("Output.txt",ios::out);
    char final_arr[100]={};
    int i =0;
    for (i = 0; arr1[i] != '\0'; i++)
    {
        final_arr[i] = arr1[i];
    }
    for (int ka = 0; arr2[ka] != '\0'; ka++)
    {
        final_arr[i] = arr2[ka];
        i++;
    }
    cout<<final_arr;
    if(file.is_open()){
        file<<final_arr;
    }
    else{
        cout<<"cannot open this file to read it ";
    }
    
    
}
void read(){
    char arr[100]={};
    char arr2[100]={};
    int i;
    file.open("Input1.txt",ios::in);
    if(file.is_open()){
        file>>arr;
    }
    else{
        cout<<"cannot open this file \n";
    }
    file.close();
    i=0;
    file.open("Input2.txt", ios::in);
    if(file.is_open()){
        file.getline(arr2,100);
    }
    else{
        cout<<"Cannot open this file \n";
    }
    file.close();
    write(arr,arr2);
}

int main(){
    read();
}