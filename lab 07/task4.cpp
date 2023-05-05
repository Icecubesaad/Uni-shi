#include <iostream>
using namespace std;
int main(){
    int x=25;
    int y=5;
    int arr[2] = {x,y};
    int differnece =1;
    for(int i=1;i>=0;i--){
        int* ptr  = &arr[i];
        differnece = *ptr / differnece;
    }
    cout<<differnece;
}