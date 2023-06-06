#include <iostream>
using namespace std;
int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    int *ptr  = arr;
    int swap= ptr[2];
    arr[2] = arr[4];
    arr[4] = swap;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<"\t";
    }
}