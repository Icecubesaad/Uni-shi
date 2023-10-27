#include <iostream>
#include <fstream>
using namespace std;

void show(int** array, int row, int columnArray[]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < columnArray[i]; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void remove(int** array, int row, int columnArray[]) {
    int column;
    int rowH;
    cout << "Enter the row: ";
    cin >> rowH;
    cout << "Enter the column: ";
    cin >> column;
    
    for (int i = 0; i < row; i++) {
        for (int j = column; j < columnArray[i] - 1; j++) {
            array[i][j] = array[i][j + 1];
        }
        columnArray[i] -= 1;
    }
    
    show(array, row, columnArray);
}

int main() {
    fstream file;
    file.open("data.txt", ios::in);
    if (!file.is_open()) {
        cout << "CANNOT OPEN FILE\n";
    }
    
    int rows;
    file >> rows;
    int columns[rows];
    int num;
    int** pointer = new int*[rows];
    
    for (int i = 0; i < rows; i++) {
        file >> columns[i];
        pointer[i] = new int[columns[i]];
        
        for (int d = 0; d < columns[i]; d++) {
            file >> num;
            pointer[i][d] = num;
        }
    }
    
    remove(pointer, rows, columns);
    
    // Clean up memory
    for (int i = 0; i < rows; i++) {
        delete[] pointer[i];
    }
    delete[] pointer;
}
