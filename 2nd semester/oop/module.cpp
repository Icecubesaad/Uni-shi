#include <iostream>
#include "RegrowToolkit.h"
using namespace std;
int main(){
    RegrowToolkit file;
    int* oldarray;
    file.DoItYourSelf(oldarray,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<*(oldarray+i)<<endl;
    }
    
}