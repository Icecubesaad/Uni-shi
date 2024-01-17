#pragma once
#include <iostream>
using namespace std;
class Bank{
    char* name;
    int bankCode;
    float interest_rate;
    public:

        Bank(){};
        Bank(char name[],int bankCode, int interest_rate)
        {
            this->name=new char[100];
            int iterator=0;
            while (name[iterator]!='\0')
            {
                this->name[iterator]=name[iterator];
                iterator++;
            }
            this->name[iterator]='\0';
            this->bankCode=bankCode;
            this->interest_rate=interest_rate;

        }
        char* getName(){
            return name;
        }
        void increaseInterestRateBy(float a){
            this->interest_rate+=a;
        }
        void setName(char new_name[]){
            int iterator=0;
            while (new_name[iterator]!='\0')
            {
                this->name[iterator]=new_name[iterator];
                iterator++;
            }
        }
        void setBankCode(int bc){
            this->bankCode=bc;
        }
        void display(){
            cout<<"Name = "<<this->name<<endl;
            cout<<"Bank Code = "<<this->bankCode<<endl;
            cout<<"Interest Rate = "<<this->interest_rate<<endl;
        }

    
};