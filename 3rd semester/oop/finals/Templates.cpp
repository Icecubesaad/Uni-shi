// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;


template <class F,class g>
class Number2{
    F num, num2;
    g num3, num4;
    public:
        Number2(F num,F num2, g num3, g num4){
            this->num=num;
            this->num2=num2;
            this->num3=num3;
            this->num4=num4;
        }
        F sum(){
            F answer=0;
            answer+=num;
            answer+=num2;
            answer+=num3;
            answer+=num4;
            return answer;
        }
};

int main() {

    Number2<int,double> obj1(1,2,2.6,7.5);
    cout<<obj1.sum();
    return 0;
}