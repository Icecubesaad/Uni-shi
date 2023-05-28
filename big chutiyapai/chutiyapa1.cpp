#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
fstream icecube;
void displaying(const char category[0], int number)
{
    char ticketPrice[100] = {};
    char salesPrice[100] = {};
    int size= strlen(category);
    char line[100] = {};
    int j = 0;
    int k=0;
    icecube.open("data.txt", ios::in);
    while (icecube.getline(line, 100))
    {
        for (int i = 0; line[i] != '\0'; i++)
        {
            j = 0;
            while (line[i] == category[j])
            {
                j++;
                if (j == size - 1)
                {
                    for (int i = j; line[i] != '\0'; i++)
                    {
                        while (line[i] == ' ')
                        {
                            i++;
                        }
                        while (line[i] != ' ')
                        {
                            k = 0;
                            ticketPrice[k] = line[i];
                            i++;
                            k++;
                        }
                        while (line[i] == ' ')
                        {
                            i++;
                        }
                        while (line[i] != ' ')
                        {
                            k =0;
                            salesPrice[k] = line[i];
                            i++;
                            k++;
                        }
                    }
                }
            }
        }
    }
    cout<<ticketPrice;
    cout<<salesPrice;
}
void searching_Catergory(bool &ask, char (&category)[100])
{
    char asking_continue;
    cout << "Category wth Maximm Tickets SOlid : ";
    cin.getline(category, 100);
    cout << "Do you want to continue : ";
    cout << asking_continue;
    if (asking_continue == 'y')
    {
        ask = true;
    }
    else
    {
        ask = false;
    }
}
int main()
{
    char category[100] = "premium";
    // int option;
    // bool ask = true;
    // cout << "Please Select One of the following options from the menu given below:\n1. Search the category with maximum number of tickets sold\n2. Display categories/y along with their total sales , whose total sales exceeds 100000\n3. Calculate total Number of tickets sold\n";
    // while (ask)
    // {
    //     cout << "Enter your desired option : ";
    //     cin >> option;
    //     if (option == 1)
    //     {
    //         searching_Catergory(ask, category);
    //     }
    //     if (option == 2)
    //     {
    //         displaying(category, 100);
    //     }
    // }
    displaying(category,100);
}