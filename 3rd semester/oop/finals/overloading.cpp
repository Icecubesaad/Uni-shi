#include <iostream>
using namespace std;
class overloader
{
public:
    int x;
    int y;
    overloader()
    {
        x = 5;
        y = 5;
    }
    overloader operator+(overloader &obj)
    {
        this->x = this->x + obj.x;
        this->y = this->y + obj.y;
    }
    overloader operator-(overloader &obj)
    {
        this->x = this->x - obj.x;
        this->y = this->y - obj.y;
    }
    overloader operator*(overloader &obj)
    {
        this->x = this->x * obj.x;
        this->y = this->y * obj.y;
    }
};
void operator<<(ostream &os, overloader &obj)
{
    os <<" x = "<< obj.x << " y = " << obj.y << endl;
}
int main()
{
    overloader v1;
    overloader v2;
    overloader v3;
    v1 + v2;
    cout << v1;
}