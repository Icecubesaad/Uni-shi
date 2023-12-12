#include <iostream>
using namespace std;
class Matrix{
    int** matrix;
    int row;
    int column;
    public:
        Matrix(int row, int column){
            this->row=row;
            this->column=column;
            this->matrix=new int*[row];
            for (int i = 0; i < row; i++)
            {
                this->matrix[i]=new int[column];
                for (int j = 0; j < column; j++)
                {
                    cout<<"enter the value for matrix : ";
                    cin>>matrix[i][j];
                }
            }
            
        }
        void printMatrix() {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }
        Matrix operator +(){
            
        }
};
int main(){
    int rows,columns;
    cout<<"Enter the amount the rows of the matrix : ";
    cin>>rows;
    cout<<"Enter the amount the columns of the matric : ";
    cin>>columns;
    Matrix m1(rows,columns);
    m1.printMatrix();
}