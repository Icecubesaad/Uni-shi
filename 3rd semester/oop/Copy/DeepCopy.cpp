#include <iostream>
using namespace std;
class DeepCopy{
int* x;
public:
    DeepCopy(int  a=1){
        x=new int(a);
    }
    void setX(int a){
        x=new int(a);
    }
    void print(){
        cout<<*x<<endl;
    }
};
int main(){
    DeepCopy d1(6);
    DeepCopy d2=d1;
    d2.setX(10);
    d2.print();
    d1.print();
}