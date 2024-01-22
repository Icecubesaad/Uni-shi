#include <iostream>
using namespace std;
class base{
    int x;
    int y;
    public:
    base(int a,int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<" a : "<<this->x<<endl;
        cout<<" b : "<<this->y<<endl;
    }
};
class child:public base{
    int z;
    public:
    child(int a, int b, int  c):base(a,b){
        z=c;
    }
    void  print(){
        base::print();
        cout<<" c : "<<this->z<<endl;
    }
};
int main(){
    child c(9,8,78);
    c.print();
}