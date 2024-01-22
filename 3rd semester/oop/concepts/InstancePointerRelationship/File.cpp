#include <iostream>
using namespace std;
class pointer
{
private:
    int x;

public:
    pointer(int num) : x(num)
    {
        cout << "hello id no : " << this->x << endl;
    }
    ~pointer()
    {
        cout << "bubye id no : " << this->x << endl;
        
    }
    void printing()
    {
        cout << "X : " << this->x << endl;
    }
    void setX(int num)
    {
        this->x = num;
    }
};
class PointerReciever
{
public:
    pointer *y;
    PointerReciever(pointer *p) : y(p) { p->printing(); };
    void usingPointer()
    {
        y->printing();
    }
};
int main()
{
    // int *x;
    // x= new int(8);
    // pointer* A; // treating like a normal pointer   (also dont take any parameter)
    // A = new pointer(7); //creating an object which is pointed by the pointer of type (pointer) and named A
    // // pointer B(2);
    // PointerReciever u(A);
    // // can only be pointed to the object of the same class
    // // can access the property of the class
    // u.usingPointer();
    // // {
    // // A->printing();  // object will not be destroyed (main reason why we use it in aggregation)
    // // // B.printing();
    // // }
    // u.y->printing();
        pointer *A;
    {
        pointer B(8);
        A=&B;
    }
    A->printing();
}