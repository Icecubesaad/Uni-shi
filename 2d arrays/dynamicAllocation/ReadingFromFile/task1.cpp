#include <iostream>
#include <fstream>
using namespace std;
void print(int** array,int column[],int row){
    for ( int i = 0; i < row; i++)
    {
       for ( int k = 0; k < column[i]; k++)
       {
            cout<<array[i][k]<<"\t";
       }
       cout<<endl;
    }
}
int main()
{
    fstream file;
    file.open("data.txt", ios::in);
    int row;
    float num;
    file >> row;
    cout<<"Number of rows : "<<row<<endl;
    int **array = new int *[row];
    int column;
    int columnsA[row];
    for (int i = 0; i < row; i++)
    {
        file >> column;
        columnsA[i] = column;
        cout<<"Column no : "<<columnsA[i]<<endl;
        array[i] = new int[column];
        for (int c = 0; c < column; c++)
        {
            file >> num;
            cout<<"Value  : "<<num;
            array[i][c] = num;
        }
        cout<<endl;
    }
    print(array,columnsA,row);
    
}