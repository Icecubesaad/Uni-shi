#include <iostream>
#include "function4.h"
using namespace std;
int main(){
    cout<<"welcome to quiz game\n";
    cout<<"choose from following\n 1- score \n 2- play";
    int opt;
    cin>>opt;
    switch (opt)
    {
    case 1:
        cout<<"checking \n";
        check();
        break;
    case 2:
        cout<<"playing \n";
        read();
        break;
    default:
        break;
    }
}