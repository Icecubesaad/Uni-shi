#include<iostream>
#include<fstream>
using namespace std;
void copyArray(int* newarray, int* oldarray, int s);
int* Regrow1D(int* oldarray, int s, int value);
void diplay_array(int*, int);

int main()
	{
		char filename[20] = "mydata.txt";
		int* data = NULL;
		int size = 0;
		int num = 0;
		ifstream fin;
		fin.open(filename);
		fin >> num;
		data = new int[1];   //one memory cell of 4 bytes resereve 
		data[0] = num;
		cout << "------------------ : " << data[0] << endl;
		size++;  // first memory cell is gain so increase the size of new created arrray
		while (fin >> num)
		{
			data = Regrow1D(data,size,num);
			size++;
		}

		//cout << "before calling display_array() inside size variable is: " << size << endl;
		diplay_array(data, size);
	    system("pause");
		return 0;

}//end of main


void copyArray(int* newarray,int* oldarray,int s)
{
	for (int i = 0; i < s;i++)
	{
		newarray[i] = oldarray[i];
	}//end of for
}

int* Regrow1D(int* oldarray,int s,int value)
{
	int* newarray = NULL;
	newarray = new int[s + 1];
	copyArray(newarray, oldarray, s);
	newarray[s] = value;
    delete[] oldarray;
	return newarray;

}

void diplay_array(int* aptr, int s)
{
	for (int i = 0; i < s;i++)
	{
		
		cout << aptr[i] << endl;
	}

}




