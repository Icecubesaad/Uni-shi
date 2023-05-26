#include <iostream>
using namespace std;
void secondMax(int *arr){
    int largest,second;
    for (int i = 0; i < 10; i++)
    {
        if(arr[0]<arr[1]){ 
      largest = arr[1];
      second = arr[0];
   }
   else{ 
      largest = arr[0];
      second = arr[1];
   }
   for (int i = 2; i< 10 ; i ++) {
      
      if (arr[i] > largest) {
         second = largest;
         largest = arr[i];
      }
       
      else if (arr[i] > second && arr[i] != largest) {
         second = arr[i];
      }
   }
    }
    cout<<"second larget array element is : "<<second;
    
}
int main(){
    int *ptr = new int[10];
    cout<<"Enter the values : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>ptr[i];
    }
    secondMax(ptr);
}