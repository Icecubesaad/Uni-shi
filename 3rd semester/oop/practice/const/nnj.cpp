#include <iostream>
using namespace std;
class Computer{
    mutable int age;
    public:
        Computer():age(5){};
    int getAge()const{
        return age;
    }
    void setAge(int  n)const{
        age=n;
    }
};
int main(){
    const Computer obj1;
    obj1.setAge(8);
    cout<<obj1.getAge();
}