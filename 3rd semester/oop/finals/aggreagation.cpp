#include <iostream>
using namespace std;
// aggregation
class Date{
    int day,month,year;
    public:
    Date(int d,int m, int y){
        day=d;
        month=m;
        year=y;
    }
    void showDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
class Student{
    Date* date;
    char* name;
    public:
    Student(char name[],Date* date){
        this->name=name;
        this->date=date;
    }
    void showStudent(){
        cout<<"name : "<<name<<endl;
        cout<<"Admitted at : ";
        date->showDate();
    }
};
int main(){
    char name[]="saad";
    Date date(11,2,2024);
    Student student(name,&date);
    student.showStudent();
return 0;
}