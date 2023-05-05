#include <iostream>
using namespace std;
int main(){
    int x=5;
    int y=3;
    int arr[2] = {x,y};
    int differnece =0;
    for(int i=0;i<2;i++){
        int* ptr  = &arr[i];
        differnece = *ptr - differnece;
    }
    cout<<differnece;
}