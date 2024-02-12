#include <iostream>
using namespace std;
class dynamicObjectWorking{
    int n;
    public:
        dynamicObjectWorking(int num):n(num){};
        virtual ~dynamicObjectWorking(){
            cout<<"Object is getting destroyed\n";
        };
        void checkingFunc(){
            cout<<"Dynamic object is working\n";
        }
};
class ChildDynamicClass:public dynamicObjectWorking{
    int n;
    public:
        ChildDynamicClass(int num,int num2):dynamicObjectWorking(num),n(num2){};
        ~ChildDynamicClass()
        {
            cout<<"Child is getting destroyed\n";
        };
};
int main(){
    dynamicObjectWorking*  dptr;
    dptr=new dynamicObjectWorking(5);   // allocating a dynamic object
    dptr->checkingFunc();       
    // dptr->~dynamicObjectWorking();      // calling the destructor manually, when made the object dynamically
    delete dptr;
    dptr=nullptr;
    dptr->checkingFunc();
    cout<<dptr; // getting the location of object
    dptr=new  ChildDynamicClass(5,6);   // allocating a child object using parent's pointer
    dptr= new dynamicObjectWorking(6);
}