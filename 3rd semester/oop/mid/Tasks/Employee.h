#pragma once
#include <iostream>
using namespace std;
class Employee{
    char* name;
    int age;
    float salary;
    public:
        Employee(){};
        Employee(char name[],int age, float salary){
            this->name=new char[100];
            this->age=age;
            this->salary=salary;
            int iterator=0;
            while (name[iterator]!='\0')
            {
                this->name[iterator]=name[iterator];
                iterator++;
            }
            this->name[iterator]='\0';
        }
        char* getName(){
            return name;
        }
        void increaseSalaryBy(float a){
            this->salary+=a;
        }
        void setName(char name[]){
            int iterator=0;
            while (name[iterator]!='\0')
            {
                this->name[iterator]=name[iterator];
                iterator++;
            }
            this->name[iterator]='\0';
        }
        void setAge(int age){
            this->age=age;
        }
        void display() {
    if (this->name == nullptr) {
        cout << "Name = nullptr" << endl;
    } else {
        cout << "Name = " << this->name << endl;
    }
    cout << "Age = " << this->age << endl;
    cout << "Salary = " << this->salary << endl;
}

        ~Employee(){
            delete[] name;
        }

};