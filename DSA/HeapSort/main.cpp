#include <iostream>
using namespace std;
void heapify(int A[], int n , int i) {
	int parent = i;
	int leftChild = i * 2 + 1;
	int rightChild = i * 2 + 2;
	if ((leftChild < n) && (A[leftChild] > A[parent])) {
		parent = leftChild;
	}
	if ((rightChild < n) && (A[rightChild] > A[parent])) {
		parent = rightChild;
	}
	if (parent != i) {
		int temp = A[i];
		A[i] = A[parent];
		A[parent] = temp;
		heapify(A, n, parent);
	}
}
void heapSort(int A[], int n) {
	for (int i = n/2-1; i >= 0; i--)
	{
		heapify(A, n, i);
	}
	for (int j = n-1; j >=0; j--)
	{
		int temp = A[0];
		A[0] = A[1];
		A[1] = temp;
		heapify(A, j, 0);
	}
}
int main() {
	int arr[5] = { 1,5,3,2,4 };
	heapSort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
}