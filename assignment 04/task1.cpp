#include <iostream>
#include <fstream>
using namespace std;
void rowWiseSum(float** matrix, int rows, int* cols) {
      cout << "Sum row wise: ";
    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < cols[i]; j++) {
            sum += matrix[i][j];
        }
          cout << sum << ", ";
    }
      cout <<   endl;
}

void colWiseSum(float** matrix, int rows, int* cols) {
      cout << "Sum col wise: ";
    int maxCols = 0;
    for (int i = 0; i < rows; i++) {
        if (cols[i] > maxCols) {
            maxCols = cols[i];
        }
    }
    for (int j = 0; j < maxCols; j++) {
        float sum = 0;
        for (int i = 0; i < rows; i++) {
            if (j < cols[i]) {
                sum += matrix[i][j];
            }
        }
          cout << sum << ", ";
    }
      cout <<   endl;
}

bool isSquareMatrix(int rows, int* cols) {
    for (int i = 0; i < rows; i++) {
        if (cols[i] != rows) {
            return false;
        }
    }
    return true;
}

void diagWiseSum(float** matrix, int rows, int* cols) {
    if (!isSquareMatrix(rows, cols)) {
          cout << "Sum diagonal wise: Not Possible" <<   endl;
        return;
    }
      cout << "Sum diagonal wise: ";
    float sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }
      cout << sum <<   endl;
}

void deleteMatrix(float** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
      ifstream file("data.txt");
    if (!file) {
          cerr << "Failed to open the file." <<   endl;
        return 1;
    }

    int rows;
    file >> rows;

    int* cols = new int[rows];
    float** matrix = new float*[rows];

    for (int i = 0; i < rows; i++) {
        file >> cols[i];
        matrix[i] = new float[cols[i]];
        for (int j = 0; j < cols[i]; j++) {
            file >> matrix[i][j];
        }
    }

    file.close();

    rowWiseSum(matrix, rows, cols);
    colWiseSum(matrix, rows, cols);
    diagWiseSum(matrix, rows, cols);

    deleteMatrix(matrix, rows);
    delete[] cols;

    return 0;
}
