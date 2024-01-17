#pragma once
#include <iostream>
using namespace std;
class Triangle{
    float base;
    float height;
    public:
        Triangle(){};
        Triangle(float base, float height ){
            this->base=base;
            this->height=height;
        };
        void display(){
            cout<<"Base = "<<this->base<<" Height = "<<this->height<<endl;
        }
        float area(){
            return (0.5*(base*height));
        }
};