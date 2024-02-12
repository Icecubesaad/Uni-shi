#include <iostream>
using namespace std;
class Person
{
    int age;
    char *name;
    char gender;

public:
    Person(int age, char name[], char gender)
    {
        this->age = age;
        this->name = name;
        this->gender = gender;
    }
    virtual void displayDetails()
    {
        cout << "Name : " << this->name;
        cout << "\nage : " << this->age;
        cout << "\ngender : " << this->gender << endl;
    }
    void getRole()
    {
    }
};
class Course
{
};
class Student : public Person
{
    int studentID, total_courses;
    char **coursesEnrolled;
    Course course;

public:
    Student(int age, char name[], char gender, int studentID, Course course) : Person(age, name, gender)
    {
        this->studentID = studentID;
    }
    void displayDetails() override
    {
        cout << "Student ID : " << this->studentID << endl;
        cout << "Courses Enrolled : ";
        for (int i = 0; i < total_courses; i++)
        {
            // logic
        };
        Person::displayDetails();
    }
};
class Faculty:public Person{
    int employeeID;
    char** courses_taught;
    Course* course;
    public:
        Faculty(int age, char name[], char gender, int employeeID, Course* course):Person(age,name,gender){
            this->employeeID=employeeID;
            this->course=course;
        }
};
int main()
{
}