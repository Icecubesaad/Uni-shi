#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of labs in university : ";
    cin>>n;
    int *labs = new int[n];
    cout<<"Enter the total number of students in each lab : \n";
    int ask,add=0;
    for (int i = 0; i < n; i++)
    {
        cin>>ask;
        labs[i] = ask;
        add+=ask;
    }
    cout<<"Average number of students in lab is "<<add/n;
    delete[] labs;
}