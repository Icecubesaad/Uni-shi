#include <iostream>
using namespace std;
int main(){
    int *ptr;
    int arr[6]={10,20,30,40,50,60};
    ptr = &arr[0];
    for (int i = 0; i < 6; i++)
    {
        cout<<"Value at index "<<i<<" is : "<<*(ptr+i)<<endl;
    }
    
}