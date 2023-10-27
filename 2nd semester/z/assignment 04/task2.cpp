#include <iostream>
using namespace std;
int generateRandomNumber() {
    static int seed = 1;
    seed = (seed * 32719 + 3) % 32749;          //generate Random number 
    return seed % 100;
}

void multiply(int** array1, int** array2, int rows1, int cols1, int rows2, int cols2, int**& result) {
    if (cols1 != rows2) {
        result = nullptr; 
        return;
    }

    result = new int*[rows1];
    for (int i = 0; i < rows1; i++) {
        result[i] = new int[cols2];
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
}

void printArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
             cout << array[i][j] << " ";
        }
         cout <<  endl;
    }
}

void deleteArray(int** array, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
}

int main() {
    int rows1, cols1, rows2, cols2;

     cout << "Enter the size of the first array (rows cols): ";
     cin >> rows1 >> cols1;

     cout << "Enter the size of the second array (rows cols): ";
     cin >> rows2 >> cols2;

    int** array1 = new int*[rows1];
    for (int i = 0; i < rows1; i++) {
        array1[i] = new int[cols1];
        for (int j = 0; j < cols1; j++) {
            array1[i][j] = generateRandomNumber();
        }
    }

    int** array2 = new int*[rows2];
    for (int i = 0; i < rows2; i++) {
        array2[i] = new int[cols2];
        for (int j = 0; j < cols2; j++) {
            array2[i][j] = generateRandomNumber();
        }
    }

    int** result = nullptr;

    multiply(array1, array2, rows1, cols1, rows2, cols2, result);

    if (result != nullptr) {
         cout << "Multiplication Result:" <<  endl;
        printArray(result, rows1, cols2);
        deleteArray(result, rows1);
    }
    else {
         cout << "Multiplication not possible." <<  endl;
    }

    deleteArray(array1, rows1);
    deleteArray(array2, rows2);

    return 0;
}
