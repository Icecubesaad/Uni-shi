#include <iostream>
using namespace std;
class Calender
{
    int year;
    int month;
    int day;

public:
    Calender()
    {

        year = 2023;
        month = 11;
        day = 18;
    }
    void setYear(int y)
    {
    }
    void setMonth(int m)
    {
    }
    void setDay(int d)
    {
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    int getYear()
    {
        return year;
    }
    void printDate()
    {
        cout << day << " / " << month << " / " << year << endl;
    }
    int advanceDays(int d)
    {
        if (day + d > 30)
        {
            month += 1;
        }
        else
        {
            day += d;
        }
        cout << "After Modifying" << endl;
        printDate();
    }
    void isLeapYear(int y)
    {
        if (y % 400 == 0)
        {
            cout << y << " is a leap year.";
        }
        else if (y % 100 == 0)
        {
            cout << y << " is not a leap year.";
        }
        else if (y % 4 == 0)
        {
            cout << y << " is a leap year.";
        }
        else
        {
            cout << y << " is not a leap year.";
        }
    }
};
int main()
{
    Calender b;
    int answer;
    answer=b.getDay();
    cout<<"Date : "<<answer<<endl;
    b.getMonth();
    
    cout<<"Month  : "<<answer<<endl;
    b.getYear();
    
    cout<<"Year  : "<<answer<<endl;
    b.setDay(18);
    b.setMonth(11);
    b.setYear(2023);
    b.printDate();
    b.advanceDays(2);
    b.isLeapYear(2023);
    return 0;
}