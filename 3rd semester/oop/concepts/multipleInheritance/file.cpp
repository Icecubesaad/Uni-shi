#include <iostream>
using namespace std;
class Father{
    public:
        void message(){
            cout<<"Father Class Function."<<endl;
        }
};
class Mother:virtual public Father{

};
class Child:virtual public Father{

};
class GrandChild:public Child, public Mother{
};
int main(){
GrandChild  GC;
GC.message();
GC.Child::message();
GC.Mother::message();
}
