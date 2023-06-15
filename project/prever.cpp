#include <iostream>
#include <fstream>
using namespace std;
int Decrementing_quantity(int quantity,char array[],int size,int Minus){
    cout<<"Decrementing Quantity from array . \n";
    cout<<quantity-1<<endl;
    fstream appending_file;
    appending_file.open("Inventory.txt",ios::app);
    if(!appending_file.is_open()){
        cout<<"Some error occured.";
    }
    else{
        cout<<"Old array : "<<array<<endl;
        array[Minus-1] = quantity-1;
        cout<<"New array : "<<array<<endl;
    }
}

int Converting_char_to_int(char price[], char quantity[])
{
    int quantity_int = 0,price_int = 0, i = 0;
    while (quantity[i] != '\0')
    {

        quantity_int = quantity_int * 10 + (quantity[i] - '0');
        i++;
    }
    while (price[i] != '\0')
    {

        price_int = price_int * 10 + (quantity[i] - '0');
        i++;
    }
   return quantity_int;
}
int size_of_array(char array[])
{
    int inc = 0;
    while (array[inc] != '\0')
    {
        inc++;
    }
    return inc;
}
char Finding_parameters(char array[])
{
    int size,Minus_from_size;
    size = size_of_array(array);
    cout << "\nSize from the function : " << size << endl;
    char price[100] = {};
    char unit;
    char quantity[100] = {};
    int i = 0, j = 0;
    while (array[i] != '\0')
    {
        while (array[i] != ' ')
        {
            i++;
        }
        while (array[i] == ' ')
        {
            i++;
        }
        while (array[i] != ' ')
        {
            price[j] = array[i];
            j++;
            i++;
        }
        price[j] = '\0';
        j = 0;
        while (array[i] == ' ')
        {
            i++;
        }
        while (array[i] != ' ')
        {
            unit = array[i];
            i++;
        }
        while (array[i] == ' ')
        {
            i++;
        }
        Minus_from_size = i;
        while (array[i] != ' ')
        {
            if (i == size)
            {
                break;
            }
            else
            {
                quantity[j] = array[i];
                j++;
                i++;
            }
        }
        quantity[j] = '\0';
        cout << "Quanitiy : " << quantity << endl;
        cout << "Price : " << price << endl;
        cout << "Unit : " << unit << endl;
        int quantity_int;
        quantity_int =  Converting_char_to_int(price, quantity);
        Decrementing_quantity(quantity_int,array,size,Minus_from_size);
    }
}
char finding_specific_data(char array[], int size)
{
    bool found = false;
    fstream file;
    int i = 0, j = 0;
    char data_from_file[100] = {};
    file.open("Inventory.txt", ios::in);
    if (!file.is_open())
    {
        cout << "Some error occured\n";
    }
    else
    {
        while (file.getline(data_from_file, 100))
        {
            i = 0;
            while (data_from_file[i] == array[i])
            {
                if (i == size - 1)
                {
                    cout << "Found the specific data : \n";
                    cout << data_from_file;
                    found = true;
                    Finding_parameters(data_from_file);
                    break;
                }
                i++;
            }
        }
        if (file.eof() && !found)
        {
            cout << "Searched Item doesnt exist.\n";
        }
    }
}

int Inventory()
{

    char array[100] = {};
    char input[100] = {};
    cout << "Enter the item you want to buy : ";
    cin.getline(input, 100);
    int size;
    size = size_of_array(input);
    finding_specific_data(input, size);
}
int main()
{
    Inventory();
}
