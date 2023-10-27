#include <iostream>

using namespace std;


// inhertiance is used to use the other classes methods and variables into another class. you can access the vatriables of the other base class from the object. we can also use it in the sub classes. to prevent our object to access the variables of the base class we use another modifier called "protected". this will only allow you to use those variables into the child class and dont let the object use them.


// every base class methods is set to private by default and u have to make it public to use the methods of the base class



// contructor. children class use the same contructor as of the base classes



// subclass should recieve every parameter that is defined in its base classes. And should have more paramter that will define the more features in the subclass.


class first_class{
protected:
    string name;
    int first_strenth = 40;
public:
    first_class(string namef){
    name = namef;
    }
};

class   second_class{
protected:
    int second_strenth = 40;
};

class third_class{
protected:
    int third_strenth = 40;
public:
    void showingClass(){
        cout<<"nlsd";
    }
};

class fourth_class{
protected:
    int fourth_strenth = 40;
public:
    fourth_class(string name_param, int age){
        cout<<name_param<<age;
    }
};

class fifth_class{
protected:
    int fifth_strenth = 40;
public:
    void only_show_if_public(){
        cout<<"it has been set to public.";
    }
};

class middleSchool:first_class,second_class,public third_class,fourth_class,public fifth_class{
    // methods are not usable in the inherted class. it is set to private in the inherited classes. method is private. WE HAVE TO SET IT TO PUBLIC TO ACCESS THE METHODS OF THAT SPECIFIC CLASS.
public:
    void getAllClassesStrength(){
        cout<<first_strenth<<endl;
        cout<<second_strenth<<endl;
        cout<<third_strenth<<endl;
        cout<<fourth_strenth<<endl;
        cout<<fifth_strenth<<endl;
    }
    middleSchool(string name_param,int age):first_class(name_param),fourth_class(name_param,age){            // passing the argument to the base class contructor, if u dont it will throw an error as other classes are  getting invoked aswell and if theydontgettheparametertheydeservetheywillthrowanerror
        name = name_param;
    }
};


int main(){
    middleSchool object = middleSchool("saad",18);
    object.showingClass();
    object.only_show_if_public();
}