#include <iostream>
#include <fstream>
using namespace std;
float total=0;
float LessThan3(float hours){
    total = total+2.00;
    return 2.00;
}
float MoreThan3(float hours){
    int size = hours-3;
    float j=2.00;
    for (int i = 0; i < size; i++)
    {
        j=j+0.50;
    }
    total = total+j;
    return j;
    
}
float OnIt(float hours){
    total = total + 10.00;
    return 10.00;
}
int main(){
    fstream File;
    float hours;
    float total_hours;
    File.open("Parking.txt",ios::out);
    File<<"Cars\t"<<"Hours\t"<<"Charge"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the number of hours for the "<<i+1<<" car ";
        cin>>hours;
        total_hours = total_hours+hours;
        if(hours<=3){
            File<<i+1<<"\t"<<hours<<"\t"<<LessThan3(hours)<<endl;
        }
        else if(hours<24 && hours>3){
            File<<i+1<<"\t"<<hours<<"\t"<<MoreThan3(hours)<<endl;
        }
        else if(hours >= 24){
            File<<i+1<<"\t"<<hours<<"\t"<<OnIt(hours)<<endl;
        }
    }
    File<<"TOTAL\t"<<total_hours<<"\t"<<total;
    
}