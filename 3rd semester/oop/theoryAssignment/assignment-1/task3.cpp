#include <iostream>
#include <cmath>
using namespace std;
class Rectangle{
    float x1;
    float x2;
    float x3;
    float x4;
    float y1;
    float y2;
    float y3;
    float y4;
    float length;
    float width;
    float area;
    float permiter;
    public:
        Rectangle(float xp1,float xp2,float xp3,float xp4,float yp1,float yp2,float yp3,float yp4){
            if(xp1>20.0 && xp2>20.0 &&xp3>20.0 &&xp4>20.0 && yp1>20.0 && yp2>20.0 &&yp3>20.0 &&yp4>20.0 )
            {
            x1=xp1;
            x2=xp2;
            x3=xp3;
            x4=xp4;
            y1=yp1;
            y2=yp2;
            y3=yp3;
            y4=yp4;

            }
            else{
                cout<<"all cordinates must be more than 20.0\n";
            }
        }
        float calculate_length();
        float calculate_width();
        float calculate_perimeter();
        float calculate_area();
        float getArea();
        float getLength();
        float getWidth();
        float getPermeter();
        bool isSquare();
};
float Rectangle::calculate_length(){
    float x= x2-x1;
    float y=y2-y1;
    float result;
    result= sqrt((x*x)+(y*y));
    length=result;
    return result;
}
float Rectangle::calculate_width(){
    float x= x3-x1;
    float y=y3-y1;
    float result;
    result= sqrt((x*x)+(y*y));
    width=result;
    return result;
    
}
float Rectangle::calculate_perimeter(){
    float result;
    result=2*(length+width);
    permiter=result;
    return result;
}
float Rectangle::calculate_area(){
    float result;
    result=length*width;
    ;
    area=result;
    return result;
}
float Rectangle::getArea(){
    return area;
}
float Rectangle::getLength(){
    return length;
}
float Rectangle::getPermeter(){
    return permiter;
}
float Rectangle::getWidth(){
    return width;
}
bool Rectangle::isSquare(){
    if(length==width){
        return true;
    }
    else{
        return false;
    }
}
int main(){
        Rectangle rec(54,65,23,54,23,65,78,23);
        float width;
        float length;
        float permiter;
        float area;
        bool isSquare;
        width=rec.calculate_width();
        length=rec.calculate_length();
        area=rec.calculate_area();
        permiter=rec.calculate_perimeter();
        isSquare=rec.isSquare();
        if(isSquare){
            cout<<"It is a square\n";
        }
        else{
            cout<<"Its not a square\n";
        }
        cout<<"Permiter : "<<permiter<<endl;
        cout<<"Area : "<<area<<endl;
        cout<<"Width : "<<width<<endl;
        cout<<"Length : "<<length<<endl;
}