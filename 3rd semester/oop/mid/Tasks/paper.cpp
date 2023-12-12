#include "Circle.h"
int main()
{
cout << endl <<"-----Question 1-----" << endl;
Circle c1;
c1.display();
cout << "Area = " << c1.area() << endl << endl;
Circle c2(10.2);
c2.display();
cout << "Area = " << c2.area() << endl;
cout <<"--------------------" << endl << endl;
return 0;
}