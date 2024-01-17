#include <iostream>
using namespace std;
class BirthDate{
    int month;
    int date;
    int year;
    public: 
        BirthDate(){}
        void setBirthDate(int y,int m,int d){
            this->date=d;
            this->month=m;
            this->year=y;
        }
        void printBirthDate(){
            cout<<this->date<<"-"<<this->month<<"-"<<year<<endl;
        }
};
class Student{
    char* name;
    int rollNo;
    public:
    BirthDate b1;
        Student(char name[100],int rollNo,int y,int m, int d){
            b1.setBirthDate(y,m,d);
            this->name=new char[100];
            int iterator=0;
            while (name[iterator]!='\0')
            {
                this->name[iterator]=name[iterator];
                iterator++;
            }
            this->name[iterator]='\0';
            this->rollNo=rollNo;
        }
        void DisplayStudentDate(){
            cout<<"student name : "<<name;
            cout<<"\nroll no : "<<rollNo;
            cout<<"\nbirth date : ";
            b1.printBirthDate();
        }
};
int main(){
    char name[100];
    int rollNO,year,month,date;
    cout<<"Enter the name of the student: ";
    cin.getline(name,100);
    cout<<"\nEnter the roll Number of the student: ";
    cin>>rollNO;
    cout<<"Enter the birth date (year,month,date): ";
    cin>>year>>month>>date;
    Student s1(name,rollNO,year,month,date);
    s1.DisplayStudentDate();
}