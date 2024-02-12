#include"header.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(char brand[100]) {
    this->brand = brand;
}
void Vehicle::displayInfo() {
    cout << "Brand : " << this->brand << endl;
}

Car::Car(char brand[100], int numDoors) : Vehicle(brand) {
    this->numDoors = numDoors;
}
void Car::displayInfo() {
    Vehicle::displayInfo();
    cout << "Number of doors : " << this->numDoors<<endl;
}
SportsCar::SportsCar(char brand[100], int numDoors, bool convertible) : Car(brand,numDoors) {
    this->convertible = convertible;
}
void SportsCar::displayInfo() {
    Car::displayInfo();
    cout<<"type : car\n";
    if (convertible) {
        cout << "Convertible : true\n";
    }
    else {
        cout << "Convertible : false\n";
    }
}