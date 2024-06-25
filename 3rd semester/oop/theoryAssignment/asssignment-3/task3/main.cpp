#include <iostream>
#include "Task.h"
using namespace std;
Vehicle::Vehicle(char fuelType[100], int ModelYear, int MaxSpeed)
{
    this->fuelType = fuelType;
    this->maxSpeed = MaxSpeed;
    this->modelYear = ModelYear;
    ;
}
void Vehicle::display()
{
    cout<<"Vehicle Information : \n";
    cout << "Fuel Type : " << this->fuelType << endl;
    cout << "Max Speed : " << this->maxSpeed << endl;
    cout << "Model Year : " << this->modelYear << endl;
}
Car::Car(char fuelType[100], int ModelYear, int MaxSpeed, int numOfDoors, int trunkCapacity) : Vehicle(fuelType, ModelYear, MaxSpeed)
{
    this->NumberOfDoors = numOfDoors;
    this->TrunkCapacity = trunkCapacity;
}
void Car::displayVehicleInfo()
{
    Vehicle::display();
    cout << "Number of doors : " << this->NumberOfDoors;
    cout << "\nTrunk capacity : " << this->TrunkCapacity << endl;
}
void Car::drive()
{
    cout << "Driving the car...\n";
}
void Car::honk()
{
    cout << "Honking the horn...\n";
}
SportsCar::SportsCar(char fuelType[100], int ModelYear, int MaxSpeed, int topSpeed, int aeroDynamics) : Car(fuelType, ModelYear, MaxSpeed, 2, 0)
{
    this->topSpeed = topSpeed;
    this->aeroDynamics = aeroDynamics;
}
void SportsCar::displayVehicleInfo()
{
    Vehicle::display();
    cout << "Top Speed : " << this->topSpeed;
    cout << "\nAeroDynamics: " << this->aeroDynamics << endl;
}
void SportsCar::race()
{
    cout << "Racing the sports car...\n";
}
int main()
{
    char fueltype[100] = "Gasoline";
    // Create instances of Car and SportsCar
    Car familyCar(fueltype, 2022, 300, 4, 500);
    SportsCar sportsCar(fueltype, 2022, 400, 2, 300);
    // Display information and specific behaviors for each vehicle
    familyCar.displayVehicleInfo();
    familyCar.drive();
    familyCar.honk();
    cout << endl;
    sportsCar.displayVehicleInfo();
    sportsCar.drive();
    sportsCar.honk();
    sportsCar.race();
    cout << endl;
    return 0;
}
