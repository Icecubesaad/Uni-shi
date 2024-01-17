#include "Triangle.h"
#include <iostream>
using namespace std;
int main()
{
cout << endl <<"-----Question 1-----" << endl;
Triangle t1;
t1.display();
cout << "Area = " << t1.area() << endl << endl;
Triangle t2(6,10.2);
t2.display();
cout << "Area = " << t2.area() << endl;
cout <<"--------------------" << endl << endl;
return 0;
}