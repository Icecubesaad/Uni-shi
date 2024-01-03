#include <iostream>
using namespace std;
class masterClass{
    int d=5;
    public:
        void PrintSomethingFromMasterClass()
        {
            cout<<"function called from master class\n";
        }
        void printd(){
            cout<<"value of d is : "<<d;
        }
        void setd(int num){
            d=num;
        }
};
class subClass{
    // intializing the object of the master class in here
    public:
        masterClass m1;
        void callingTheMasterClass(){
            m1.PrintSomethingFromMasterClass();
        }
        void callingMasterClassFromObj(masterClass& m2){
            m2.PrintSomethingFromMasterClass();
        }
        void changeMasterClass(int num){
            m1.setd(num);
        }
};
int main(){
    subClass s1;
    s1.m1.PrintSomethingFromMasterClass();  
    s1.m1.printd();
    s1.m1.setd(10);
    s1.m1.printd();  
}