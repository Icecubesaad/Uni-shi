#include <iostream>

using namespace std;

class Vehicle {
public:
    int vehicleID;
    char* make;
    char* model;
    int year;
 Vehicle(int id,  char brand[],  char mdl[], int yr) : vehicleID(id), year(yr){
    this->make=brand;
    this->model=mdl;
 }
    virtual void displayInfo() const {
        cout << "Vehicle ID: " << vehicleID << ", Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }

    virtual double calculateFuelEfficiency() const = 0;
};

class Car : public Vehicle {
public:
    int numberOfDoors;
    Car(int id,  char brand[],  char mdl[], int yr, int numOfDoors):Vehicle(id,brand,mdl,yr){
        this->numberOfDoors=numOfDoors;
    }
    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Type: Car, Number of Doors: " << numberOfDoors << endl;
    }

    double calculateFuelEfficiency() const override {
        return 30.0; 
    }
};

class Truck : public Vehicle {
public:
    double cargoCapacity;
Truck(int id,  char brand[],  char mdl[], int yr, double cargoCapacity):Vehicle(id,brand,mdl,yr){
    this->cargoCapacity=cargoCapacity;
}
    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Type: Truck, Cargo Capacity: " << cargoCapacity << " tons" << endl;
    }

    double calculateFuelEfficiency() const override {
        return 15.0; 
    }
};

class Motorcycle : public Vehicle {
public:
    char* suspensionType;
Motorcycle(int id,  char brand[],  char mdl[], int yr,char suspensionType[]):Vehicle(id,brand,mdl,yr){
this->suspensionType=suspensionType;
}
    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Type: Motorcycle, Suspension Type: " << suspensionType << endl;
    }

    double calculateFuelEfficiency() const override {
        return 50.0; 
    }
};

int main() {
    const int numVehicles = 3;
    Vehicle* vehicles[numVehicles];
    char name[]="Toyota",name2[]="Ford",name3[]="Honda"
    ;
    char model[]="Passo",model2[]="F-150",model3[]="CD70";
    char mode[]="Sport";
    Car car1{1, name, model, 2012, 4};
    Truck truck1{2, name2, model2, 2022, 2.5};
    Motorcycle motorcycle1{3, name3, model3, 2020, mode};

    vehicles[0] = &car1;
    vehicles[1] = &truck1;
    vehicles[2] = &motorcycle1;

    for (int i = 0; i < numVehicles; ++i) {
        vehicles[i]->displayInfo();
        cout << "Fuel Efficiency: " << vehicles[i]->calculateFuelEfficiency() << endl;
        cout << "-----------------" << endl;
    }

    return 0;
}
