#include <iostream>
using namespace std;
int main()
{
    int array[3] = {1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    // Sort the array in ascending order using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    // Find the next permutation
    int small_num = -1;
    int bigger_than_small_number = -1;
    for (int i = size - 2; i >= 0; i--) {
        if (array[i] < array[i + 1]) {
            small_num = i;
            break;
        }
    }
    if (small_num == -1) {
        // There is no next permutation, return to the original state
        for (int i = 0; i < size / 2; i++) {
            int swap = array[i];
            array[i] = array[size - i - 1];
            array[size - i - 1] = swap;
        }
    }
    for (int j = size - 1; j > small_num; j--) {
        if (array[j] > array[small_num]) {
            bigger_than_small_number = j;
            break;
        }
    }
    // Swap the small_num with the next bigger number
    int swap = array[small_num];
    array[small_num] = array[bigger_than_small_number];
    array[bigger_than_small_number] = swap;

    // Reverse the elements from small_num+1 to the end of the array
    for (int i = small_num + 1; i <= (size + small_num) / 2; i++) {
        int swap = array[i];
        array[i] = array[size - i + small_num];
        array[size - i + small_num] = swap;
    }
}
