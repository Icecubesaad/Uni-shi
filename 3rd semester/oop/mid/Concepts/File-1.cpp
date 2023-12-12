#include <iostream>
using namespace std;
class SELF{
    private:
        SELF* icecubes;     // how tf you can make a pointer  of a class type
        int number;
    public:
        SELF(int a):number(a){

        }
        void setPointer(SELF& obj){
            this->icecubes=&obj;
        }
        SELF* getPointer(){
            return icecubes;
        }
        int getNumber(){
            return number;
        }
};
int main(){
    SELF*  Reciever;
    SELF o1(10);
    SELF o2(20);
    o2.setPointer(o1);
    Reciever=o2.getPointer();
    cout<<Reciever->getNumber();
}
