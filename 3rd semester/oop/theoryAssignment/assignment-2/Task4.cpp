#include <iostream>
using namespace std;
class Product{
    char* name;
    double price;
    int quantity;
    public:
        Product(){name=nullptr,price=0.00,quantity=0;};
        Product(char name[],double price, int quantity){
            this->name=new char[100];
            int iterator=0;
            while (name[iterator]!='\0')
            {
                this->name[iterator]=name[iterator];
                iterator++;
            }
            this->name[iterator]='\0';
            this->price=price;
            this->quantity=quantity;
        }
        Product operator+(int number){
            Product temp=*this;
            temp.quantity+=number;
            return temp;
        }
        Product operator-(int number){
            Product temp=*this;
            temp.quantity-=number;
            return temp;
        }
        bool operator<(Product& obj){
            if(this->price<obj.price){
                return true;
            }
            else{
                return false;
            }
        }
        void display(){
            cout<<" Name: "<<this->name<<endl;
            cout<<"Quantity: "<<this->quantity<<endl;
            cout<<"Price: "<<this->price<<endl;
        }
};
int  main(){
    Product products[10];
    int numProducts=0;
    products[numProducts++]=Product("laptop",800.00,5);
    products[numProducts++]=Product("SmartPhone",500.00,3);
    products[numProducts++]=Product("Tablet",300.00,7);
    cout<<"Perfoming Operations: \n";
    Product* product1=&products[0];
    *product1=*product1+2;
    cout<<"Decreassed Quantity of Product 1 by 2: \n";
    product1->display();
    Product* product3=&products[2];
    *product3=*product3-6;
    cout<<"Decreassed Quantity of Product 3 by 6: \n";
    product3->display();
    cout<<"\n Displaying All Product in Inventory:\n";
    for (int i = 0; i < numProducts; i++)
    {
        cout<<"Product "<<i+1<<": ";
        products[i].display();
    }
    
}