#include <iostream>
using namespace std;
void print(int** array,int column[],int row){
    for ( int i = 0; i < row; i++)
    {
       for ( int k = 0; k < column[i]; k++)
       {
            cout<<array[i][k];
       }
       cout<<endl;
    }
}
int main()
{
    int row = 3;
    int i;
    int column[row];
    int **icecube = new int *[row];
    for (i = 0; i < row; i++)
    {
        cout << "How many columns in " << i + 1 << " row : ";
        cin >> column[i];
        icecube[i] = new int[column[i]];
    }
    int value;
    for (i = 0; i < row; i++)
    {
        for (int c = 0; c < column[i]; c++)
        {
            cout << "Enter the " << c + 1 << " element of the " << i + 1
                 << " row ";
            cin >> value;
            icecube[i][c] = value;
        }
    }
    print(icecube,column,row);
    for ( i = 0; i < row; i++)
    {
        delete[] icecube[i];
       
    }
    delete icecube;
    
    
}