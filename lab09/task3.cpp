#include <iostream>
using namespace std;
float area(float* radius);
int main()
{
    float radius;
    cout<<"Enter the radius of the circle";
    cin>>radius;
    cout<<"Area of the circle is " << area(&radius);
}
float area(float *radius){
    float areaC = 3.14*(*radius * *radius);
    return areaC;
}