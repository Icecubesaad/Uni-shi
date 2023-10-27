#include <iostream>
using namespace std;
void operation( int array[] , int size, int option){
	if (option == 1){
		int swap;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (array[i]<array[j]){
					swap = array[j];
					array[j] = array[i];
					array[i] = swap;
				}
			}
		}
		for (int i = 0; i < size; i++)
		{
			cout << array[i]<<" ";
		}
	}
	if (option == 2){
		int swap;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (array[i]>array[j]){
					swap = array[j];
					array[j] = array[i];
					array[i] = swap;
				}
			}
		}
		for (int i = 0; i < size; i++)
		{
			cout << array[i]<<" ";
		}
	}
}
int main(){
	int arr[10] = { 10, 6, 4, 3, 5, 7, 8, 9, 1, 2 };
	int option;
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Press 1 for ascending\nPress 2 for descending : ";
	cin >> option;
	operation(arr,size,option);
}