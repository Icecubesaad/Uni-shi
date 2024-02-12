#include <iostream>
using  namespace std;
class Base{
    public:
    Base(){
        cout<<"calling the base class \n";
    }
    void display(){
        cout<<"Base display\n";
    }
};
class Child:virtual public Base{
    public:
    Child(){
        cout<<"calling child constructor\n";
    }
};
class GrandGrandChild:virtual public Base{
    public:
        GrandGrandChild(){
            cout<<"Grand Grand Child contructor\n";
        }
};
class GrandChild:virtual public Base, public GrandGrandChild{
    public:
        GrandChild(){
            cout<<"Grand child constructor\n";
        }
};
int main(){
    GrandChild g1;
    g1.display();
}