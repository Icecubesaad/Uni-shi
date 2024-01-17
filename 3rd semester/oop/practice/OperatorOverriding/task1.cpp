#include <iostream>
using namespace std;
class OperatorOverriding{
    int x;
    public:
        OperatorOverriding(int x=0){
            this->x=x;
        }
        OperatorOverriding operator+(const OperatorOverriding& other){
            OperatorOverriding objCopy;
            objCopy=this->x-other.x;
            return objCopy;
        }
        void print(){
            cout<<this->x;
        }
        int getX(){
            return x;
        }
};
void operator<<(ostream& out,OperatorOverriding& s ){
            out<<"p3 data"<<s.getX();
        } 
int main(){
    OperatorOverriding p1(2);
    OperatorOverriding p2(3);
    OperatorOverriding p3;
    operator<<(cout,p2);
}