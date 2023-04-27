#include <iostream>
using namespace std;
int modify(int(&array)[6],int& sizeArray,int&target){
    for (int i = 0; i < 6; i++)
    {
        if(array[i]==target){
            array[i] = array[i+1];                                  //removing the targetted number
            if(array[i]==target || array[i] == array[i+1]){
                array[i+1]=array[i+2];                              // checking if thier any repetition after removel
            }
            sizeArray--;                                            //Reducing size of array
        }
    }
}
int main(){
    int num[] = {1,2,3,4,5,3};
    int size = sizeof(num)/sizeof(num[0]);
    int target_value;
    cout<<"Enter The Target Value : ";
    cin>>target_value;
    modify(num,size,target_value);
    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<"\t";
    }
    
}