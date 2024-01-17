#include  <iostream>
using namespace std;
//operator overloading
class overloader{
    public:
    int x;
    int y;
    overloader(int a, int b):x(a),y(b){};
};
ostream& operator<<(ostream& out, overloader& ov1){ // returning the reference of the cout
    out<<ov1.x<<ov1.y;
    return out;
}  
// taking inputs

istream& operator>>(istream& in,overloader& ov2){
    in>>ov2.x;
    in>>ov2.y;
    return in;
}
int main(){
    overloader ov1(1,2);
    overloader ov2(1,2);
    cout << ov1<<ov2;
    cin>>ov2;
    cout<<ov1<<ov2;
}