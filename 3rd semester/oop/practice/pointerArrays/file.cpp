#include <iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"displaying Base"<<endl;
    }
};
class Child:public Base{
    public:
    void display(){
        cout<<"displaying child"<<endl;
    }
};
class Child2:public Base{
    public:
void display(){
        cout<<"displaying child2"<<endl;
    }
};
class controller{
    public:
    Base* bases[100];  
    void AddBase(Base* obj1, Base* obj2){
        bases[0]=obj1;
        bases[1]=obj2;
    }
    void show(){
        bases[0]->display();
        cout<<endl;
        bases[1]->display();
    }
};
int main(){
    Base b1;
    Child c1;
    Child c2;
    controller ce2;
    ce2.AddBase(&c1,&c2);
    ce2.show();
}