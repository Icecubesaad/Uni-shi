#include <iostream>

using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target)
            return i; // Return the index if target found
    }
    return -1; // Return -1 if target not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int index = linearSearch(arr, size, target);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
