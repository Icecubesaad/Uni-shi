#include <iostream>
#include <fstream>
using namespace std;
void pointer_manipulator(int* pointer){
    for (int i = 0; i < 5; i++)
    {
        *(pointer+i)  = 6;
    }
}
void pass_by_reference(int& memory){
    memory = 8;
}
int* pointer_return_value(int* pointer){
    *pointer = 7;
    return pointer;
}   
void array_manipulatin_using_pointer(int* pointer){
    for (int i = 0; i < 10; i++)
    {
        *(pointer+i) = 9;
    }
}
int main(){
    // // pointer can only take a reference to a memeory space taken by some variable or some value
    // int number = 5;
    // int* pointer;
    // cout<<*pointer;     // went to the memory cell or space and simply gave us the value occupied by it.


    // int number2 = 6;
    // pointer = &number2;
    // // cout<<*pointer + *pointer2;
    // cout<<*pointer;



    // int array[3] = {1,6,3};
    // pointer = array;
    // // // cout<<pointer+1;    // incremented into the memory cell
    // // cout<<*(pointer+1);

    // pointer_manipulator(pointer);

    // int a=5;            // variable
    // // // pointer_manipulator(&a);        // we are sending the address memory of  a variable to the pointer type paramter of this function
    // // pass_by_reference(a);
    // // cout<<a;
    // int* pointer_of_a = &a;

    // int* pointer_return;
    // pointer_return = pointer_return_value(pointer_of_a);
    // cout<<*pointer_return; 
    // int array[10]={0};
    // int* pointerArray = array;
    // array_manipulatin_using_pointer(pointerArray);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<*(pointerArray+i)<<endl;
    // }
    // dynamic memory 



    // made during run time



    // with the new word






    // int *pointer = new int[5];         // a pointer of int type during run time being on memory location.
    //     int ask,i;
    // for (i = 0; i < 5; i++)
    // {
    //     cin>>ask;
    //     *(pointer+i)  = ask;
    //     cout<<"value has been added"<<endl;
    // }
    // pointer_manipulator(pointer);
    // for ( i = 0; i < 5; i++)
    // {
    //     cout<<*(pointer+i)<<endl;
    // }
    
    // delete pointer;
    // int *static_pointer;
    // cout<<static_pointer;

    // REGROWING AND SHIRINKING AN ARRAY



    // REGROW AN ARRAY SIZE. 
    // SHRINK AN ARRAY SIZE.

    // both method follow the same thing 



    // 1. make a new dynamic array and allocate it with 1 memory space
    //2. to fill the space that you make.
    // make another dynamic pointer and make it memory space/ capacity one more than the previous pointer array e.g -> 2
    //4. copy all the element of the old array to the new array and that one space that is left you are gonna enter your extra data in that space. hence regrow.
    //5. point the older array to the new array and delete the old data in the old array.
    //6. doing this process again can result into a never ending array.





    // int* oldArray = NULL;           // 1. initialize a pointer
    // oldArray = new int[1];          // gave it some capacity
    // *oldArray = 5;                  // give it a value
    // int* newArray = NULL;           // make new array
    // newArray = new int[2];          // kept it memory space +1 then the old array
    // newArray[0]=oldArray[0];        // copied the value of the old array to the new array
    // delete oldArray;                // delete the value that old array was pointing to
    // newArray[1] = 7;                // gave the new space a new value
    // oldArray = newArray;            // point it again to the old array
    // cout<<oldArray[0]<<" "<<oldArray[1]<<endl;      // we have a grown array


    //2D ARRAYS


    // int array[3][2] = {{1,2},{3,4},{5,6}};
    // int row = 5,ask;
    // int columns[row] = {2,3,2,3,2};
    // int** pointer = new int*[row];                        //5 rows of pointer       pointer->[0->columns[0],1->columns[1],2->columns[2],3->columns[3],4->columns[4]]
    // for (int i = 0; i < row; i++)
    // {
    //     pointer[i] = new int[columns[i]];           // we are pointing our first pointer of the pointer array to an array of the column[i] length.
    //     for (int j = 0; j < columns[i]; j++)
    //     {
    //         cout<<"enter the value for the "<<i<<" row and "<<j<<"th column : ";
    //         cin>>ask;
    //         pointer[i][j] = ask;
    //     }
    // }
    // for (int print = 0; print < row; print++)
    // {
    //     for (int ij = 0; ij < columns[print]; ij++)
    //     {
    //         cout<<pointer[print][ij];
    //     }
    //     cout<<endl;
    // }
    



    // ** new idea omg!!!!!!!!!!!! make this whole regrow and shrink class in oop




    // most of the libraries are made as classes and you have to make some objects of them in order to use them.


    fstream file;
    fstream writing;
    writing.open("firstFewWords.txt",ios::app);
    file.open("data.txt",ios::in);
    char data[100];
    int i=0;
    if(!file.is_open()){
        cout<<"error in opening a file";
    }
    else{
        while (!file.eof())
        {
            i=0;
            file.getline(data,100);
            while (data[i]!='\0')
            {
                while (data[i] != ' ' )
                {
                    writing<<data[i];
                    cout<<data[i];
                    i++;
                }
                writing<<" ";
                
                break;
            }
            
        }
        
    }
    file.close();



    
}