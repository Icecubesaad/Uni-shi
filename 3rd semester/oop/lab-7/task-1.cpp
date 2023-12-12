#include <iostream>
using namespace std;
class Vector{
    int i;
    int j;
    int k;
    public:
        Vector(int i=0,int j=0, int k=0){
            this->i=i;
            this->j=j;
            this->k=k;
        }
        void print(){
            cout<<"<"<<this->i<<"i "<<","<<this->j<<"j "<<","<<this->k<<"k>\n";
        }
        Vector operator+(const Vector& second_vector){
            int i=this->i+second_vector.i;
            int j=this->j+second_vector.j;
            int k=this->k+second_vector.k;
            Vector third_vector(i,j,k);
            return third_vector;
        }
};
int main(){
    Vector first_vector(1,2,3);
    Vector second_vector(3,4,5);
    Vector third_vector;
    third_vector=first_vector+second_vector;
    third_vector.print();
}