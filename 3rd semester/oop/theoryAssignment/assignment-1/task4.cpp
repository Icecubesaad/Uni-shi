#include <iostream>
using namespace std;

class Employee {
private:
    int employee_code;
    char name[100];
    char gender;
    int year;

public:
    Employee() {
    }

    int getEmployeeCode()  {
        return employee_code;
    }

    char* getName()  {
        return name;
    }

    char getGender()  {
        return gender;
    }

    int getYear()  {
        return year;
    }

    void setEmployeeCode(int emp_c) {
        employee_code = emp_c;
    }

    void setName(char n[100]) {
        int iterator = 0;
        while (n[iterator] != '\0' && iterator < 99) {
            name[iterator] = n[iterator];
            iterator++;
        }
        name[iterator] = '\0';
    }

    void setGender(char g) {
        gender = g;
    }

    void setYear(int y) {
        year = y;
    }

    void printRequireMember(int currentYear) {
        if (currentYear - year > 2 && (gender=='m'||gender=='M')) {
            cout << "Employee Code: " << employee_code << endl;
            cout << "Name: " << name << endl;
            cout << "Gender: " << gender << endl;
            cout << "Year of Joining: " << year << endl;
            cout << "Experience: " << currentYear - year << " years" << endl;
            cout << "------------------------" << endl;
        }
    }
};

int main() {
    Employee emp1, emp2, emp3, emp4, emp5;
    emp1.setEmployeeCode(1001);
    emp1.setName({"Saad"});
    emp1.setGender('M');
    emp1.setYear(2015);

    emp2.setEmployeeCode(1002);
    emp2.setName({"Ahmer"});
    emp2.setGender('M');
    emp2.setYear(2022);

    emp3.setEmployeeCode(1003);
    emp3.setName({"Wahab"});
    emp3.setGender('M');
    emp3.setYear(2022);

    emp4.setEmployeeCode(1004);
    emp4.setName({"Zaid"});
    emp4.setGender('M');
    emp4.setYear(2010);

    emp5.setEmployeeCode(1005);
    emp5.setName({"Shifa"});
    emp5.setGender('F');
    emp5.setYear(2018);

    int year;
    cout << "Enter the current year: ";
    cin >> year;

    cout << "Employees with more than 2 years of experience:" << endl;
    emp1.printRequireMember(year);
    emp2.printRequireMember(year);
    emp3.printRequireMember(year);
    emp4.printRequireMember(year);
    emp5.printRequireMember(year);

    return 0;
}
