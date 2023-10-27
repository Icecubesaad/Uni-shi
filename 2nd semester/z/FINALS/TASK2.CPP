#include <iostream>
using namespace std;
int main(){
    char** name = new char*[5];
    name[0] = new char[100];
    cin.getline(name[0],100);
    int i=0,j=0;
    while (name[0][i] != '\0')
    {
        if(name[0][i] = 'i'){
            while (name[0][j] != '\0')
            {
                name[0][j] = name[0][j+1];
                j++;
            }
            i++;
        }
    }
    cout<<name[0];
}