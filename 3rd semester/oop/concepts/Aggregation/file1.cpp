#include <iostream>
using namespace std;
// association
// aggregation (if one get destroyed the other one will not have any effect, they can exist independently)
// composition (if one get destroyed the other will too)
class A
{
public:
    A()
    {
        cout << "class A contructor. \n";
    }
    ~A()
    {
        cout << "  class A destructoor.\n";
    }
    void printA()
    {
        cout << " I am class A \n";
    }
};
class B
{
public:
    B()
    {
        cout << "class B contructor.\n";
    }
    ~B()
    {
        cout << "Class B destructor.\n";
    }
    void printBA(A obj)
    {
        cout << "Class B <uses> Class A: ";
        obj.printA();
    }
    void printB()
    {
        cout << " I am Class B \n";
    }
};
int main()
{
    A a;
    {
        B b;
        b.printBA(a);
        b.printB();
    }
    a.printA();
    return 0;
}