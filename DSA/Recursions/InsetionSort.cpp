#include <iostream>
using namespace std;


void insertionSort(int* arr,int n)
{
	int j;
	
	if (n <= 1)
		return;
		
	insertionSort(arr,n - 1);
	
	int key = arr[n - 1];
	j = n - 2;
	
	while (j >= 0 && arr[j] > key)
	{
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = key;
}

int main()
{
	int index;
	int arr[5]={53,23,54,12,43};
    int size=5;
	insertionSort(arr,size);
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}