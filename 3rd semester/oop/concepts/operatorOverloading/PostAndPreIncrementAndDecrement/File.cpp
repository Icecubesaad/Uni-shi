#include <iostream>
using namespace std;
class UniraryOperators{
    public:
    int x;
    UniraryOperators(int a):x(a){

    }
        UniraryOperators operator++(){      // no parameters will be used to to pre increment
            this->x=this->x+5;
            return *this;
        }
        UniraryOperators operator++(int){
            // parameter to differentiate from the pre increment function
            UniraryOperators temp(this->x);
            this->x=this->x+5;
            return temp;
        }
        UniraryOperators operator--(){      // no parameters will be used to to pre increment
            this->x=this->x-5;
            return *this;
        }
        UniraryOperators operator--(int){
            // parameter to differentiate from the pre increment function
            UniraryOperators temp(this->x);
            this->x=this->x-5;
            return temp;
        }
};
int main(){
    UniraryOperators u1(7);
    UniraryOperators u2(9);
    UniraryOperators u3(0);
    u3=++u1;
    cout<<u1.x<<endl;
    cout<<u3.x<<endl;
    u3=u1++;
    cout<<u3.x<<endl;
    cout<<u1.x<<endl;
}