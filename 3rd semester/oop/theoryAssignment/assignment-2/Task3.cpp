#include <iostream>
using namespace std;
class Students
{
    char *StudentName;
    int age;
    float CGPA;
    int id;

public:
    Students(int id, char name[], int age, float CGPA)
    {
        this->id = id;
        this->CGPA = CGPA;
        int iterator = 0;
        this->StudentName = new char[100];
        while (name[iterator] != '\0')
        {
            this->StudentName[iterator] = name[iterator];
            iterator++;
        }
        this->StudentName[iterator] = '\0';
        this->age = age;
    }
    void display()
    {
        cout << "Student ID: " << this->id << ", "
             << "Name: " << this->StudentName << ", "
             << "Age: " << this->age << ", "
             << "CCGPA: " << this->CGPA << endl;
        ;
    }
    int getID(){
        return this->id;
    }
    float getCGPA(){
        return this->CGPA;
    }
};
void displayById(Students obj[], int length, int id)
{
    int CurrentId;
    for (int i = 0; i < length; i++)
    {
        CurrentId=obj[i].getID();
        if (CurrentId== id)
        {
            cout<<"Student Details by Id ("<<CurrentId<<"): "<<endl;
            obj[i].display();
        }
        else
        {
            continue;
        }
    }
}
void displayByCGPA(Students obj[], int length, float cgpa)
{
    float CurrentCGPA;
    for (int i = 0; i < length; i++)
    {
        CurrentCGPA=obj[i].getCGPA();
        if (CurrentCGPA== cgpa)
        {
            cout<<"Student Details by CGPA ("<<CurrentCGPA<<"): "<<endl;
            obj[i].display();
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    char name1[40] = {'s', 'a', 'a', 'd', '\0'};
    char name2[40] = {'a', 'i', 'm', 'a', '\0'};
    char name3[40] = {'k', 'e', 'k', 'e', '\0'};
    cout << "All Students : \n";
    Students student[3] = {
        Students(101, name1, 18, 3.8),
        Students(102, name2, 19, 3.7),
        Students(103, name3, 70, 3.6)};
    for (int i = 0; i < 3; i++)
    {
        student[i].display();
    }

    displayById(student,5,101);
    displayByCGPA(student,5,3.7);
}