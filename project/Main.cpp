#include <iostream>
#include <fstream>
using namespace std;
int *price_int = new int; // price of the item
int record_counter(char category[]){
    fstream file;
    int records=0;
    char data_from_file[100];
    file.open(category,ios::in);
    if(!file.is_open()){
        cout<<"Error occured in opening file\n";
    }
    else{

    while (file.getline(data_from_file, 100)) {
        if (!(data_from_file[0] >= '1' && data_from_file[0]<='9')) {                         // finding records in a file
            break;
        }
        else {
            records++;
        }
    }
    return records;
    }
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
        while (Transfer_Data.getline(Data_from_file, 100)) // COPY FROM tempInventory to the used category file
        {
            Writing_data << Data_from_file << endl;
        }
        Writing_data.close();
    }
    Transfer_Data.close();
    
}
void sort(char category[]) {
    fstream reading_records;
    char data_from_file[100];
    reading_records.open(category, std::ios::in);
    int records = 0;
    records = record_counter(category);
    reading_records.close();

    fstream reading;
    reading.open(category, ios::in);
    if (!reading.is_open()) {
        cout << "Error occurred while opening the file for sorting.\n";
    }
    else {
        int i = 1;
        bool end = true;
        fstream clear_file;
        clear_file.open("tempInventory.txt", ios::out);                 // clearing tempInventory.txt
        clear_file.close();
        fstream writing;
        writing.open("tempInventory.txt", ios::app);                    // appending the sorted data
        for (int it = 1; it <= records+1; it++) {
            reading.clear();
            reading.seekg(0, ios::beg);
            bool found = false;
            while (reading.getline(data_from_file, 100)) {
                if (data_from_file[0] - '0' == it) {
                    found = true;
                    int j = 0;
                    while (data_from_file[j] != '\0') {         //algorithm to find the data from low to high
                        writing << data_from_file[j];
                        j++;
                    }
                    writing << '\n';
                }
            }
        }
        writing.close();
        reading.close();
    }
   Copying(category);
}
int size_of_array(char array[])
{
    int inc = 0;
    while (array[inc] != '\0')
    {
        inc++; // FUNCTION FOR ARRAY
    }
    return inc;
}

void sorting_file(char array[], int minus, int size, char category[], char number)
{
    cout<<"NUMBER : "<<number<<endl;
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
                while (array[minus] == Data_from_file[minus] && Data_from_file[0] == number)
                {
                    cout<<"FOR ARRAY  : "<<Data_from_file<<endl;
                    cout<<"array[0]"<<array[0]<<endl;
                    if (minus == size - 1) // writing in temp inventory those items that wasnt selected by user and those items with they new quantity.
                    {
                        cout<<"NOT ADDED : "<<Data_from_file<<endl;
                        found = true;
                        break;
                    }
                    minus++;
                }
                if (!found)
                {
                    cout<<"WILL GET ADDED : "<<Data_from_file<<endl;
                    writing << Data_from_file << endl;
                }
            }
            writing.close();
            reading.close();
        }
    }
    Copying(category); // to update our original category files with items with new quantity
    sort(category);
}
int Decrementing_quantity(int quantity, char name[], char unit, int size, int Minus, char array[], char category[], int qty, int kg, char number)
{
    fstream appending_file;
    appending_file.open(category, ios::app);
    if (!appending_file.is_open())
    {
        cout << "Some error occured.";
    }
    else
    {
        if (unit == 'k')
        {
            appending_file << "\n"
                           << number << " " << name << " " << *(price_int) << " " << unit << " " << quantity - kg;
        }
        if (unit == 'q')
        {
            appending_file << "\n"
                           << number << " " << name << " " << *(price_int) << " " << unit << " " << quantity - qty;
        }
    }
    appending_file.close();
    sorting_file(array, Minus, size, category, number);
}
int Converting_char_to_int(char price[], char quantity[])
{
    int quantity_int = 0;
    *(price_int) = 0;
    int i = 0;
    while (quantity[i] != '\0')
    {

        quantity_int = quantity_int * 10 + (quantity[i] - '0'); // formula for converting it
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
    size = size_of_array(array); // size of array from file
    char price[100] = {};
    char unit;
    char name[100] = {};
    char quantity[100] = {};
    int i = 0, j = 0;
    char number;

    while (array[i] != '\0')
    {
        while (array[i] != ' ')
        {
            number = array[i];
            cout << number << endl;             // finding NUMBERS (1,2,3,4)
            i++;
        }
        while (array[i] == ' ')
        {
            i++;
        }

        while (array[i] != ' ') // when there are no spaces (name of the item)
        {
            name[j] = array[i];
            i++;
            j++;
        }
        j = 0;
        while (array[i] == ' ') // ignoring spaces
        {
            i++;
        }
        while (array[i] != ' ') // for prices
        {
            price[j] = array[i];
            j++;
            i++;
        }
        price[j] = '\0';
        j = 0;
        while (array[i] == ' ') // spaces
        {
            i++;
        }
        while (array[i] != ' ') // unit
        {
            unit = array[i];
            i++;
        }
        while (array[i] == ' ') // spaces
        {
            i++;
        }
        Minus_from_size = i;
        while (array[i] != ' ') // quantity
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
    int kg = 0, qty = 0;
    int quantity_int;
    quantity_int = Converting_char_to_int(price, quantity); // converting quantity from char to int to decrement it
    if(quantity_int == 0){
        cout<<"Item you are looking for currently is not availible\n";  // if quanitity is zero
        // would add a welcome msg here
    }
    cout<<name<<" has been selected\n";
    cout<<"We have "<<quantity<<" of "<<name<<endl;
    if (unit == 'k')
    {
        cout<<"Price for 1 kg is : "<<price;
        cout << "How many kg do you want : ";
        cin >> kg;
        if(kg>quantity_int){
            cout<<"Amount you entered exceeded the current quanitity\nPlease enter an amount within the quantity.\n";   // if entered more than availible quantity
        }
    }
    if (unit == 'q')
    {
        cout<<"Price for 1 unit is : "<<price<<endl;
        cout << "How many " << name << " want : ";
        cin >> qty;
        if(qty>quantity_int){
            cout<<"Amount you entered exceeded the current quanitity\nPlease enter an amount within the quantity.\n"; // if entered more than availible quantity
        }
    }
    Decrementing_quantity(quantity_int, name, unit, size, Minus_from_size, array, category, qty, kg, number); // appending and decreasing quantity
}
bool finding_specific_data(char array[], char name)
{
    bool found = false;
    int i = 0;
    if (array[0] == name)
    {
        found = true;
    }
    return found;
}
int Asking_input()
{
    cout << "Choose one category from following.\n1- food\n2- cosmetics\n3- confectionary\n4- electronics\n5- vegetables\n";
    int show = 0;
    char ask_category; // incremental variable to show data_from_file_category
    char category[100];
    cout << "Enter the number of the category you want to buy from : ";
    cin >> ask_category; // for category (food,electronics)
    int in = 0;
    fstream controller;
    controller.open("controller.txt", ios::in);                 // will find the data according to the number entered by user
    if (!controller.is_open())
    {
        cout << "Some error occured in opening controller.txt" << endl;
    }
    else
    {
        int c = 0, d = 0;
        bool found_controller = false;
        char reading_from_controller[100];
        while (controller.getline(reading_from_controller, 100))
        {
            found_controller = false;
            if (reading_from_controller[0] == ask_category)
            {
                int size_of_controller = size_of_array(reading_from_controller);
                while (reading_from_controller[c] != ' ')                   // for the number
                {
                    c++;
                }
                while (reading_from_controller[c] == ' ')                   //spaces
                {
                    c++;
                }
                while (reading_from_controller[c] != ' ')                   
                {
                    if (c == size_of_controller)
                    {
                        found_controller = true;
                        break;
                    }
                    else
                    {
                        category[d] = reading_from_controller[c];               //adding the name of the file in to the array category array for more info see the controller.txt
                        c++;
                        d++;
                    }
                    category[d] = '\0';
                }
                if (found_controller)
                {
                    break;
                }
            }
        }
    }
    controller.close();
    fstream reading_items;
    char filename[100] = {".txt"};      // for extension
    int size = size_of_array(category); // size function which will give category array size which will then use for merge
    while (filename[in] != '\0')
    {
        category[size] = filename[in]; // merging .txt with category array to make it a valid filename
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
        // SHOW THE ITEM IN CATEGORY
        while (reading_items.getline(data_from_file_category, 100))
        {
            int size_of_items = size_of_array(data_from_file_category);
            show = 0;
            while (data_from_file_category[show] != ' ')
            {
                cout << data_from_file_category[show];              // show numbers
                show++;
            }
            while (data_from_file_category[show] == ' ')
            {
                cout << data_from_file_category[show];              // show spaces
                show++;
            }

            while (data_from_file_category[show] != ' ' && show < size_of_items) // condition to only read names
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
    char item_number;
    cout << "Enter the number of the item you want to buy : ";
    cin >> item_number; // asking for input within the file
    fstream file;
    int i = 0, j = 0;
    char data_from_file[100] = {};
    file.open(category, ios::in);
    int record_size = record_counter(category);
    if (!file.is_open())
    {
        cout << "Some error occured\n";
    }
    else
    {
        while (file.getline(data_from_file, 100))
        {
            found = finding_specific_data(data_from_file, item_number); // finding that specific item in file
            if (found)
            {
                Finding_parameters(data_from_file, category); // if found it will find its price,quanity,unit
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
    Asking_input(); // Calling first fuctions for inputs
}