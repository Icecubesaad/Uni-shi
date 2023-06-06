#include <iostream>
#include <fstream>
using namespace std;
int copying(int *numbers,char *array,int size,char alphabets[])
{
    int i=0,a=0,n=0;
    while (array[i]!='\0')
    {
        if(array[i]>='a' && array[i]<='z'){
            *(alphabets + a) = array[i];
            a++;
        }
        if(array[i]>='0' && array[i]<='9'){
            *(numbers + n) = array[i]-'0';
            n++;
        }
        i++;
    }
    return n;
}
void middleware(char array[])
{
    int i=0,size=0;
    while (array[i]!='\0')
    {
        size++;
        i++;
    }
    
    int *numbers = new int[size];
    char *alphabets = new char[size];
    int sizel = copying(numbers,array,size,alphabets);
    cout<<"Numbers : \n";
    for (i = 0; i < sizel; i++)
    {
        cout<<*(numbers+i)<<"\t";
    }
    cout<<endl;
    i=0;
    cout<<"Alphabets : \n";
    while (alphabets[i] != '\0')
    {
        cout<<*(alphabets+i)<<"\t";
        i++;
    }
    
}
int main()
{
    char array_from_file[100] = {};
    fstream file;
    file.open("data.txt", ios::in);
    file.getline(array_from_file, 100);
    middleware(array_from_file);
}