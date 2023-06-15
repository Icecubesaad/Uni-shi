#include <iostream>
#include <fstream>
using namespace std;
int* price_int = new int;
void sorting_file(char array[], int minus, int size) {
    cout << "REACHED SORTING FILE\n";
    int temp = minus;
    ifstream reading("Inventory.txt");
    if (!reading.is_open()) {
        cout << "Error opening the file\n";
    }
    else {
        ofstream writing("Inventory2.txt");
        if (!writing.is_open()) {
            cout << "Some error occurred\n";
        }
        else {
            char Data_from_file[100];
            bool found = false;
            while (reading.getline(Data_from_file, 100)) {
                minus = temp;
                found = false;
                cout << "Total records: " << Data_from_file << endl;
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
}



int Decrementing_quantity(int quantity,char name[],char unit,int size,int Minus,char array[]){

    cout<<"REACHED DECREMENTING QUANTITY\n";
    fstream appending_file;
    appending_file.open("Inventory.txt",ios::app);
    if(!appending_file.is_open()){
        cout<<"Some error occured.";
    }
    else{
        appending_file<<"\n"<<name<<"\t"<<*(price_int)<<"\t"<<unit<<"\t"<<quantity-1;
    }
    appending_file.close();
    sorting_file(array,Minus,size);
}

int Converting_char_to_int(char price[], char quantity[])
{
    cout<<"REACHED CONVERSION\n";
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
    cout<<"REACHED Finding_parameters\n";
    int size,Minus_from_size;
    size = size_of_array(array);
    char price[100] = {};
    char unit;
    char name[100]={};
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
        j=0;
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
        int quantity_int;
        quantity_int =  Converting_char_to_int(price, quantity);
        Decrementing_quantity(quantity_int,name,unit,size,Minus_from_size,array);
    }
}
char finding_specific_data(char array[], int size)
{
    cout<<"REACHED finding_specific_data \n";
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
    file.close();
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
    delete price_int;
}