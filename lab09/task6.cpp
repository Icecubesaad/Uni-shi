#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter total number of students : ";
    cin>>n;
    float *students = new float[n];
    cout<<"Enter the GPA of students.\n";
    float ask;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the GPA of the student "<<i+1<<" : ";
        cin>>ask;
        students[i]=ask;
    }
    cout<<"Displaying GPA of students.\n";
    for (int j = 0; j < n; j++)
    {
        cout<<"Gpa of student "<<j+1<<" is "<<students[j]<<endl;
    }
    delete[] students;
    
    
}