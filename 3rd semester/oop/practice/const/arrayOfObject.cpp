#include <iostream>
using namespace std;
class EFG{
    public:
    int e;
    int f;
    int g;
        EFG():e(-30),f(++e),g(f++){};
};
int  main(){
    EFG j;
    cout<<j.e<<j.f<<j.g;
}