#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Total number of students : ";
    cin>>size;
    int* marks = new int[size];
    int* Roll_numbers = new int[size];
    int i=0,ask;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the roll number of the "<<i+1<<" student : ";
        cin>>ask;
        *(Roll_numbers+i) = ask;
        cout<<"Enter the marks of the "<<i+1<<" student : ";
        cin>>ask;
        *(marks+i) = ask;
    }
    cout<<"ROll NO\t\t"<<"MARKS"<<endl;
    for ( i = 0; i < size; i++)
    {
        cout<<*(Roll_numbers+i)<<"\t\t"<<*(marks+1)<<endl;
    }
    delete[] marks;
    delete[] Roll_numbers;
    
}