#include<iostream>
using namespace std;
class simple{
    int x;
    public:
    simple(){
        this->x=5;
    }
    int getX(){
        return x;

    }
    void setX(int a){
        this->x=a;
    }
};
int main(){
    simple si;
    si.setX(7);
    cout<<si.getX();
}