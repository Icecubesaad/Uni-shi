#include <iostream>
using namespace std;
class Copying{
    int*x;
    public:
        Copying(int a=1){
            x= &a;
        }
        void SetX(int a){
            *x=a;
        }
        void print()
        {
            cout<<*x;
        }
};
int main(){
    Copying cp1(5);
    Copying cp2=cp1;        // copying all the members in cp2; x is an pointer which is pointing to a and have the address of it; which means cp2.x will have the the same address that cp1.x have; hence the same value and on value change, cp1.x will change aswell
    cp2.SetX(10);
    cp1.print();
}