#include <iostream>
using namespace std;
void swap(int* int1,int* int2);
int main(){
    int a=5;
    int b=7;
    cout<<"Before swap: \n a = "<<a<<" b = "<<b;
    cout<<endl;
    swap(&a,&b);
}
void swap(int *a,int *b){
        cout<<"after Swap\n";
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
        cout<<"a : "<<*a<<"\t";
        cout<<"b : "<<*b;
}