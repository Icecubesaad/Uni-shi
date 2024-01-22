#include <iostream>
using namespace std;
// has power to  create an obj and destroy an obj
class inner{
    public:
    int x;
    inner(){};
    void setX(int a){
        this->x=a;
    }
    int getX(){
        return this->x;
    }
};
class outer{
    public:
    int y;
    inner* i1;
    outer(inner* obj1){
        i1 = obj1;
    };
    void setX(int a){
        i1->x=a;
    }
    
};
int main(){
    inner i1;
    outer o1(&i1);
    i1.setX(5);
    cout<<"Before changing : "<<i1.getX()<<endl;
    o1.setX(7);
    cout<<"After changing : "<<i1.getX();
}