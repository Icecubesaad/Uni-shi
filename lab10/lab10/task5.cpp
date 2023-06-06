#include <iostream>
using namespace std;
int finding_sum(int *arr1,int *arr2,int *resultantArray){
    for (int i = 0; i < 5; i++)
    {
        resultantArray[i] = arr1[i]+arr2[i];
    }
    return resultantArray[0];
}
int main(){
    int *resultantArray = new int[5];
    int *array1=new int[5];
    int *array2=new int[5];
    finding_sum(array1,array2,resultantArray);
    for (int i = 0; i < 5; i++)
    {
        cout<<resultantArray[i]<<"\t";
    }
    
}