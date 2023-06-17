#include <iostream>
#include <fstream>
using namespace std;
int *price_int = new int;           // price of the item
int size_of_array(char array[])
{
    int inc = 0;
    while (array[inc] != '\0')
    {
        inc++;                              //FUNCTION FOR ARRAY
    }
    return inc;
}
void Copying(char category[])
{
    char Data_from_file[100];
    fstream Transfer_Data;
    Transfer_Data.open("tempInventory.txt", ios::in);
    if (!Transfer_Data.is_open())
    {
        cout << "Some Error occured\n";
    }
    else
    {
        fstream Writing_data;
        Writing_data.open(category, ios::out);
        while (Transfer_Data.getline(Data_from_file, 100))          // COPY FROM tempInventory to the used category file
        {
            Writing_data << Data_from_file << endl;
        }
        Writing_data.close();
    }
    Transfer_Data.close();
}
void sorting_file(char array[], int minus, int size,char category[])
{
    int temp = minus;
    fstream reading;
    reading.open(category, ios::in);
    if (!reading.is_open())
    {
        cout << "Error opening the file\n";
    }
    else
    {
        fstream writing;
        writing.open("tempInventory.txt", ios::out);
        if (!writing.is_open())
        {                                 
            cout << "Some error occurred\n";
        }
        else
        {
            char Data_from_file[100];
            bool found = false;
            while (reading.getline(Data_from_file, 100))
            {
                minus = temp;
                found = false;
                while (array[minus] == Data_from_file[minus])
                {
                    if (minus == size - 1)                      //writing in temp inventory those items that wasnt selected by user and those items with they new quantity.
                    {
                        found = true;
                        break;
                    }
                    minus++;
                }
                if (!found)
                {
                    writing << Data_from_file << endl;
                }
            }
            writing.close();
            reading.close();
        }
    }
    Copying(category);                      // to update our original category files with items with new quantity
}
int Decrementing_quantity(int quantity, char name[], char unit, int size, int Minus, char array[], char category[],int qty,int kg)
{
    fstream appending_file;
    appending_file.open(category, ios::app);
    if (!appending_file.is_open())
    {
        cout << "Some error occured.";
    }
    else
    {
        if(unit == 'k'){

        appending_file << "\n"<< name << " " << *(price_int) << " " << unit << " " << quantity - kg;
        }
        if(unit == 'q'){
            appending_file << "\n"<< name << " " << *(price_int) << " " << unit << " " << quantity - qty;
        }
    }
    appending_file.close();
    sorting_file(array, Minus, size,category);
}
int Converting_char_to_int(char price[], char quantity[])
{
    int quantity_int = 0;
    *(price_int) = 0;
    int i = 0;
    while (quantity[i] != '\0')
    {

        quantity_int = quantity_int * 10 + (quantity[i] - '0');         //formula for converting it
        i++;
    }
    i = 0;
    while (price[i] != '\0')
    {

        *(price_int) = *(price_int)*10 + (price[i] - '0');
        i++;
    }
    return quantity_int;
}
char Finding_parameters(char array[], char category[])
{
    int size, Minus_from_size;                          
    size = size_of_array(array);                    // size of array from file
    char price[100] = {};
    char unit;
    char name[100] = {};
    char quantity[100] = {};
    int i = 0, j = 0;

    while (array[i] != '\0')
    {
        while (array[i] != ' ')                     // when there are no spaces (name of the item)
        {
            name[j] = array[i];
            i++;
            j++;
        }
        j = 0;
        while (array[i] == ' ')                     // ignoring spaces
        {
            i++;
        }
        while (array[i] != ' ')                     // for prices
        {
            price[j] = array[i];
            j++;
            i++;
        }
        price[j] = '\0';
        j = 0;
        while (array[i] == ' ')                     // spaces
        {
            i++;
        }
        while (array[i] != ' ')                     //unit
        {
            unit = array[i];
            i++;
        }
        while (array[i] == ' ')                     //spaces
        {
            i++;
        }
        Minus_from_size = i;
        while (array[i] != ' ')                     //quantity
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
    int kg=0,qty=0;
    int quantity_int;
    quantity_int = Converting_char_to_int(price, quantity);         // converting quantity from char to int to decrement it
    cout << "quantity : " << quantity << endl;
    cout << "Price : " << price << endl;
    if(unit == 'k'){
        cout<<"How many kg do you want : ";
        cin>>kg;
    }
    if(unit == 'q'){
        cout<<"How many "<<name<< " want : ";
        cin>>qty;
    }
    Decrementing_quantity(quantity_int, name, unit, size, Minus_from_size, array, category,qty,kg);// appending and decreasing quantity
}
bool finding_specific_data(char array[], char name[], int size)
{
    int i = 0;
    bool found = false;
    while (array[i] == name[i])                     //array is original array from file and name is the input from the user
    {
        if (i == size - 1)
        {
            found = true;                           // if it matches and i become equal to the input size-1 it will return true
        }
        i++;
    }
    return found;
}
int Asking_input()
{
    cout<<"Choose one category from following.\nfood\ncosmetics\nconfectionary\nelectronics\nvegetables\n";
    int show = 0;                               //incremental variable to show data_from_file_category
    char category[100];     
    cout << "What category you want to buy with : ";
    cin >> category;                            //for category (food,electronics)
    int in = 0;
    fstream reading_items;                      
    char filename[100] = {".txt"};              //for extension
    int size = size_of_array(category);         //size function which will give category array size which will then use for merge
    while (filename[in] != '\0')
    {
        category[size] = filename[in];          //merging .txt with category array to make it a valid filename
        size++;
        in++;
    }
    category[size] = '\0';                  
    char data_from_file_category[100];      
    reading_items.open(category, ios::in);
    if (!reading_items.is_open())
    {
        cout << "Some error occured\n";
    }
    else
    {
        while (reading_items.getline(data_from_file_category, 100))
        {
            show = 0;
            while (data_from_file_category[show] != ' ')        // condition to only read names
            {
                cout << data_from_file_category[show];
                show++;
            }
            cout << endl;
        }
    }
    reading_items.close();
    char array[100] = {};
    char input[100] = {};
    bool found;
    cout << "Enter the item you want to buy : ";
    cin.ignore();
    cin.getline(input, 100);                                    // asking for input within the file
    int size2;
    size2 = size_of_array(input);                               // input size        
    fstream file;
    int i = 0, j = 0;
    char data_from_file[100] = {};
    file.open(category, ios::in);
    if (!file.is_open())
    {
        cout << "Some error occured\n";
    }
    else
    {
        while (file.getline(data_from_file, 100))
        {
            found = finding_specific_data(data_from_file, input, size2);    //finding that specific item in file
            if (found)
            {
                Finding_parameters(data_from_file, category);               // if found it will find its price,quanity,unit
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
    Asking_input();                 // Calling first fuctions for inputs
}