#include <iostream>
using namespace std;
// public -> private
// protected -> private
class parent{
    int x;
    int y;
};
class base : private parent{

};
int main(){

}