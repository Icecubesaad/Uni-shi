#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file;
    file.open("array1.txt",ios::in);
    char arr[100] = {};
    char arr2[100] = {};
    char arr3[200] = {};
    int i, k = 0;
    file.getline(arr, 100);
    file.close();
    file.open("array2.txt",ios::in);
    file.getline(arr2, 100);
    file.close();
    for (i = 0; arr[i] != '\0'; i++) {
        arr3[i] = arr[i];
    }
    k = i;
    for (i = 0; arr2[i] != '\0'; i++) {
        arr3[k++] = arr2[i];
    }
    int l = 0;
    for (char compare = 'a'; compare <= 'z'; compare++) {
        for (i = 0; arr3[i] != '\0'; i++) {
            if (compare == arr3[i]) {
                char swap = arr3[i];
                arr3[i] = arr3[l];
                arr3[l] = swap;
                l++;
            }
        }
    }
    file.open("array3.txt",ios::out);

    file << arr3;
    return 0;
}
