#include<iostream>
using namespace std;
int main()
{
	int* row0 = new int[4];
	for (int i = 0; i < 4;i++)
	{
		cin >> row0[i];
	}

	cout << "values in array: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout<<row0[i]<<"   ";
	}

	//it is very difficult to manage individual row, and not so scalable
	//so we use 2d array and use double pointers
	cout << "-------------------------double pointers----------------------" << endl;

	int** dptr = new int*[3];
	// now set the number of cell in each row
	for (int i = 0; i < 3;i++)
	{
		dptr[i] = new int[4];  //we set four elements memory on each row
	}

	//////////input values in 2d array

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 4;j++)
		{
			cout << "input values at  row : " << i << " col:  " << j<< "   ";
			cin >> dptr[i][j];
		}
	}

	cout << "showing values stored in 2d array through double pointers: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "values at  row : " << i << " col " << j;
			cout<<dptr[i][j]<<endl;
		}
	}

	// de-allocating memory
	for (int i = 0; i < 3;i++)
	{
		delete[] dptr[i];   //deleting invidual row 0,1,2
	}

	// now deleting array of pointer

	delete[] dptr;

	system("pause");
	return 0;

}//end of main

