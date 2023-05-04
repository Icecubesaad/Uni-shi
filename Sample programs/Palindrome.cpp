#include <iostream>
#include <fstream>
using namespace std;
fstream icecube;
void palindrome(int arr[]){
    icecube.open("Palindrome.txt",ios::out);
    if(icecube.is_open()){

    for (int i = 0; i < 5; i++)
    {
        int divident = arr[i]/10;
        int reminder = arr[i]%10;
        int reversed_num = reminder*10 + divident;
        cout<<reversed_num<<endl;
        if(reversed_num == arr[i]){
            icecube<<arr[i]<<" ";
        }
    }
    
    }
    else{
        cout<<"Error opening this file ";
    }
}
int main(){
    int arr[5];
    int ask;
    icecube.open("array.txt",ios::in);
    for (int i = 0; i < 5; i++)
    {
        icecube>>ask;
        arr[i] = ask;
    }    
    icecube.close();
    palindrome(arr);
    
}