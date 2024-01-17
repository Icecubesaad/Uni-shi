#include <iostream>
using namespace std;
class Product
{
    char name[100];
    float price;
    int quantity;
    int sold;
    int add;

public:
    Product()
    {
        price = 0.00;
        quantity = 0;
        sold = 0;
        add = 0;
    }
    char *getName();

    void setName(char *n);

    float getPrice();

    void setPrice(float p);
    int getQuantity();

    void setQuantity(int q);
    int sell(int v);

    int restock(int v);
    int getSoldItems();
    int getAddedItems();
};
void Product::setName( char *n)
{
    int iterator = 0;
    while (n[iterator] != '\0' && iterator < sizeof(name) - 1)
    {
        name[iterator] = n[iterator];
        iterator++;
    }
    name[iterator] = '\0';
}
char *Product::getName()
{
    return name;
}
float Product::getPrice()
{
    return price;
}

void Product::setPrice(float p)
{
    price = p;
}
int Product::getQuantity()
{
    return quantity;
}

void Product::setQuantity(int q)
{
    quantity = q;
}
int Product::sell(int v)
{
    sold = v;
    quantity -= v;
}

int Product::restock(int v)
{
    add = v;
    quantity += v;
}
int Product::getSoldItems()
{
    return sold;
}
int Product::getAddedItems()
{
    return add;
}
int main()
{
    int quantity, sold, add;
    Product product;
    product.getQuantity();            // at this time its 0
    product.restock(5);               // changed to 5
    quantity = product.getQuantity(); // changed to 5
    product.sell(3)                   // 5-3=2
        ;
    quantity = product.getQuantity(); // 2
    sold = product.getSoldItems();
    add = product.getAddedItems();
    cout << "Number of products added: : " << add << endl;
    cout << "Number of products sold:" << sold << endl;
    cout << "After restocking " << add << " and selling " << sold << endl;
    cout << "Quantity: " << quantity;
}