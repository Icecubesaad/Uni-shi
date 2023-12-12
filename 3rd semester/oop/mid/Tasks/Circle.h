#pragma once
#include <iostream>
using namespace std;
class Circle{
    float radius;
    float pi;
    public:
        Circle():pi(3.14){};
        Circle(int a):pi(3.14){radius=a;};
        void display(){cout<<"Radius = "<<radius<<" "<<"Pi = "<<pi<<endl;};
        float area(){return (pi*(radius*radius));};
};