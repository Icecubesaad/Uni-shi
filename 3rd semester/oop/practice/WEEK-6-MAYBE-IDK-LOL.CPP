#include <iostream>
using namespace std;
class StaticPractice{
    static int x;
    public:
        StaticPractice(){
            x=2;
        }
        int getX(){
            return x;
        }
        void setX(int p){
            x=p;
        }
};
int StaticPractice::x;
int main(){
        StaticPractice p1;
        StaticPractice p2;
        cout<<p1.getX()<<endl;
        cout<<p2.getX()<<endl;
        p1.setX(65);
        cout<<p1.getX()<<endl;
        cout<<p2.getX()<<endl;
}