#include <iostream>
using namespace std;
class InstantObject{
    int x;
    int y=7;
    int CurrentObject=0;
    public:
        explicit InstantObject(int num1){
            cout<<"initializing\n";
            CurrentObject=num1;
            x=num1;
        }
        ~InstantObject(){
            cout<<"destroying object no "<<CurrentObject<<endl;
        }
        void setValueX(int num1){
            x=num1;
        }
        void ShowValue();
};
InstantObject FunctionToManipulateObjects(InstantObject v){
    v.setValueX(10);
    v.ShowValue();
    return v;
}
int main(){
    InstantObject Object1(3);
    // InstantObject Object2(Object1);         // memory block {3,5}
    // Object2=Object1;
    // InstantObject Object3(1);
    Object1=FunctionToManipulateObjects(Object1);
    Object1.ShowValue();
    // Object2.ShowValue();
    // Object3.ShowValue();
}
void InstantObject::ShowValue(){
    cout<<x<<" "<<y<<endl;
}