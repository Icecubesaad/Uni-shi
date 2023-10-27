//  OOP 
// COMPLETELY SIMIILAR TO THE PYTHON OOP
#include <iostream>
using namespace std;

class abstract_icecube{
    
    public:
        virtual void generate_salaries() = 0;       // this is a function that has to be in a class that is connected with it.
    // now in many times classes can get bigger and can get complex. to solve this compleity you can simply make an interface for a class where you can define the main functions of a class.


    // its called abstraction

};

class icecube:abstract_icecube{
    private:
        string name;            // can be accessed within the class and can be manipulated.
        int age;                //  this is called encapsulation
    public:

        string get_name(){
            return name;            // returning the name. a user can now access or get this property by using this function and hence this function is called "Getter"
        }
        void set_name(string name_params){
            name = name_params;         // setting the "name" property to the user sent argument. Hence we are setting it, this funcion is called "Setter"
        }

        int get_age(){
            return age;            // returning the name. a user can now access or get this property by using this function and hence this function is called "Getter"
        }
        void set_age(int age_params){
            age = age_params;         // setting the "name" property to the user sent argument. Hence we are setting it, this funcion is called "Setter"
        }

        icecube(string name_of_the_employee,int num1){
            name = name_of_the_employee
            ;
            age = num1;
        };  
        int add(int num1,int num2){
            int sum;
            sum = num1+num2;
            return sum;
        }
        void getting_all_the_information(){
            cout<<"name = "<<name<<endl;
            cout<<" age = "<<age<<endl;
        }
        void generate_salaries(){
            cout<<"salaries have been generated.";
        }
};
int main(){

    // right now we dont have any specific constructor. the one that initiate without taking any arguments is the default one. you make contructor using the same name as of class and all the contructor does is taking arguments and assign them to the class variables or the class initial method or function.



    icecube icecubeobj = icecube("saad",18);     // making an object of the class to access the properties of the class
    icecube icecube2obj = icecube("urooba",17);

    // int age = icecubeobj.get_age();
    // cout<<age<<endl;
    // // icecubeobj.name;                // nobody shoulld have this access to the class variables directly. to make this problem solvable we make these variables private and then make methods/functions for it to get this variable or change this variable

    // icecubeobj.getting_all_the_information();
    // icecube2obj.getting_all_the_information();

    icecubeobj.generate_salaries();

}