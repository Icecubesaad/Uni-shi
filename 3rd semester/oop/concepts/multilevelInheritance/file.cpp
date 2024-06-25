#include <iostream>
using namespace std;
class parent{
    protected:
    int a;
    public:
    parent(){};
    int getA(){return this->a;}
    void setA(int a){this->a=a;};
};
class child:public parent{
    protected:
    int x;
    public:
    child(){};
    int getX(){return this->x;};
    void setX(int a){this->x=a;};
};
class ChildsChild:public child{
    int y;
    public:
    int getY(){return this->y;};
    void setY(int a){this->y=a;};
};
int main(){
    parent p1;
    p1.setA(5);
    cout<<"parent a : "<<p1.getA()<<endl;
    child c1;
    c1.setX(9);
    cout<<"child x :"<<c1.getX()<<endl;
    ChildsChild c2;
}