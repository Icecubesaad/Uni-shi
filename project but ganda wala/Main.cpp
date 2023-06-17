#include <iostream>
#include <fstream>
using namespace std;
int *price_int = new int;
int size_of_array(char array[])
{
    int inc = 0;
    while (array[inc] != '\0')
    {
        inc++;
    }
    return inc;
}
void Copying()
{
    char Data_from_file[100];
    fstream Transfer_Data;
    Transfer_Data.open("Inventory2.txt", ios::in);
    if (!Transfer_Data.is_open())
    {
        cout << "Some Error occured\n";
    }
    else
    {
        fstream Writing_data;
        Writing_data.open("Inventory.txt", ios::out);
        while (Transfer_Data.getline(Data_from_file, 100))
        {
            Writing_data << Data_from_file << endl;
        }
        Writing_data.close();
    }
    Transfer_Data.close();
}
void sorting_file(char array[], int minus, int size) {
    int temp = minus;
    fstream reading;
    reading.open("Inventory.txt",ios::in);
    if (!reading.is_open()) {
        cout << "Error opening the file\n";
    }
    else {
        fstream writing;
        writing.open("Inventory2.txt",ios::out);
        if (!writing.is_open()) {
            cout << "Some error occurred\n";
        }
        else {
            char Data_from_file[100];
            bool found = false;
            while (reading.getline(Data_from_file, 100)) {
                minus = temp;
                found = false;
                while (array[minus] == Data_from_file[minus]) {
                    if (minus == size - 1) {
                        found = true;
                        break;
                    }
                    minus++;
                }
                if (!found) {
                    writing << Data_from_file << endl;
                }
            }
            writing.close();
            reading.close();
        }
    }
    Copying();
}
int Decrementing_quantity(int quantity,char name[],char unit,int size,int Minus,char array[]){
    fstream appending_file;
    appending_file.open("Inventory.txt",ios::app);
    if(!appending_file.is_open()){
        cout<<"Some error occured.";
    }
    else{
        appending_file<<"\n"<<name<<" "<<*(price_int)<<" "<<unit<<" "<<quantity-1;
    }
    appending_file.close();
    sorting_file(array,Minus,size);
}
int Converting_char_to_int(char price[], char quantity[])
{
    int quantity_int = 0;
    *(price_int) = 0;
    int i = 0;
    while (quantity[i] != '\0')
    {

        quantity_int = quantity_int * 10 + (quantity[i] - '0');
        i++;
    }
    i=0;
    while (price[i] != '\0')
    {

        *(price_int) = *(price_int) * 10 + (price[i] - '0');
        i++;
    }
   return quantity_int;
}
char Finding_parameters(char array[])
{
    cout << "\nREACHED Finding_parameters\n";
    int size, Minus_from_size;
    size = size_of_array(array);
    char price[100] = {};
    char unit;
    char name[100] = {};
    char quantity[100] = {};
    int i = 0, j = 0;
    
    
    while (array[i] != '\0')
    {
        while (array[i] != ' ')
        {
            name[j] = array[i];
            i++;
            j++;
        }
        j = 0;
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
    }
    int quantity_int;
    quantity_int =  Converting_char_to_int(price, quantity);
    cout << "quantity : " << quantity << endl;
    cout << "Price : " << price << endl;
    cout << "Unit : " << unit << endl;
     Decrementing_quantity(quantity_int,name,unit,size,Minus_from_size,array);
}
bool finding_specific_data(char array[], char name[], int size)
{
    int i = 0;
    bool found = false;
    while (array[i] == name[i])
    {
        if (i == size - 1)
        {
            found = true;
        }
        i++;
    }
    return found;
}
int Asking_input()
{
    char array[100] = {};
    char input[100] = {};
    bool found;
    cout << "Enter the item you want to buy : ";
    cin.getline(input, 100);
    int size;
    size = size_of_array(input);
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
            found = finding_specific_data(data_from_file, input, size);
            if (found)
            {
                Finding_parameters(data_from_file);
                break;
            }
            else
            {
                continue;
            }
        }
    }
    file.close();
}
int main()
{
    Asking_input();
}