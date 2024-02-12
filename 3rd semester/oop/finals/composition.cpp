#include <iostream>
using namespace std;
// aggregation
class Date{
    int day,month,year;
    public:
    void showDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void setDate(int d,int m, int y){
        day=d;
        month=m;
        year=y;
    }
};
class Student{
    Date date;
    char* name;
    public:
    Student(char name[]){
        this->name=name;
    }
    void showStudent(){
        cout<<"name : "<<name<<endl;
        cout<<"Admitted at : ";
        date.showDate();
    }
    void setDate(int d,int m, int y){
        date.setDate(d,m,y);
    }
};
int main(){
    char name[]="saad";
    Date date();
    Student student(name);
    student.setDate(11,2,2024);
    student.showStudent();
return 0;
}