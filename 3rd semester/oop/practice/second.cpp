#include <iostream>
using namespace std;
class overRiding{
    string namel;
    int agel;
    char genderl;
    public:
        overRiding(string name="saad", int age=0, char gender='m'){
            namel=name;
            agel=age;
            genderl=gender;
        }
        void showDetails(){
            cout<<namel<<" "<<agel<<" "<<genderl<<endl;
        }
};
int main(){
    overRiding over("abdullah",18);
    over.showDetails();
}