#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value for x : ";
    cin>>x;
    int *ptr = &x;
   for(int i=1; i<= 10; i++){
    cout<<*ptr<<" X "<<i<<" = "<<*ptr*i<<endl;
   }
}