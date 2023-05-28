#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void displaying(const char category[], int number)
{
    char ticketPrice[100] = {};
    char salesPrice[100] = {};
    int size = strlen(category);

    std::ifstream icecube;
    char line[100] = {};

    icecube.open("data.txt", std::ios::in);
    if (!icecube.is_open()) {
        std::cout << "Unable to open file." << std::endl;
        return;
    }

    while (icecube.getline(line, 100))
    {
        int j = 0;
        for (int i = 0; line[i] != '\0'; i++)
        {
            j = 0;
            while (line[i] == category[j])
            {
                i++;
                j++;
                if (j == size)
                {
                    int k = 0;
                    while (line[i] == ' ')
                        i++;

                    while (line[i] != ' ')
                    {
                        ticketPrice[k] = line[i];
                        i++;
                        k++;
                    }
                    ticketPrice[k] = '\0';

                    while (line[i] == ' ')
                        i++;

                    k = 0;
                    while (line[i] != ' ' && line[i] != '\0')
                    {
                        salesPrice[k] = line[i];
                        i++;
                        k++;
                    }
                    salesPrice[k] = '\0';
                }
            }
        }
    }
    icecube.close();

    std::cout << "Ticket Price: " << ticketPrice << std::endl;
    std::cout << "Sales Price: " << salesPrice << std::endl;
    //converting it into numbers
    long price=0;
    for (int i = 0; ticketPrice[i] != '\0'; i++)
    {
        price = price*10 + (ticketPrice[i]-'0');
    }
    cout<<"INTEFERS : "<<price;
    cout<<endl;
    long sales=0;
    for (int i = 0; salesPrice[i] != '\0'; i++)
    {
        sales = sales*10 + (salesPrice[i]-'0');
    }
    cout<<"INTEFERS : "<<sales<<endl;
    cout<<"Total sales : "<<sales*price;
}

int main()
{
    char category[] = "premium";
    displaying(category, 100);

    return 0;
}
