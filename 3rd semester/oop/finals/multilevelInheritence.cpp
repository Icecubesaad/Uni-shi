#include <iostream>
using namespace std;
class  Base{

};
class Child:public Base{

};
class GrandChild:public Child{

};
int main(){
    Base *b;
    Child* c;
    GrandChild* gc;
    b=c;
    Base  bc;
    Child c2;
    GrandChild gc2;
    bc=gc2;
    c2=gc2;
    bc=c2;
}