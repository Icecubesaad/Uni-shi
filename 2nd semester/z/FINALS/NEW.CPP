#include <iostream>
#include <fstream>
using namespace std;
int main(){
   fstream file;
   file.open("data.txt",ios::in);

    int num;
    file>>num;
    int columns[num];
    int num2;
    int **arr = new int*[num];
    int** newArray = new int*[num+1];
    for (int i = 0; i < num; i++)
    {
        file>>columns[i];
        arr[i] = new int[columns[i]];
        for (int j = 0; j < columns[i]; j++)
        {
            file>>num2;
            arr[i][j] = num2;
        }
        
    }

    for (int r = 0; r < num; r++)
    {
        newArray[r] = new int[columns[r]];
        for (int c= 0; c < columns[r]; c++)
        {
            newArray[r][c] = arr[r][c];
        }
        
    }
    newArray[num+1] = new int;
     
    for (int rt = 0; rt < num; rt++)
    {
        
        for (int ct= 0; ct < columns[rt]; ct++)
        {
            cout<<newArray[rt][ct];
        }
        cout<<endl;
        
    }

    

}