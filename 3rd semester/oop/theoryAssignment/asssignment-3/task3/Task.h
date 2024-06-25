#pragma once
class Vehicle{
    char* fuelType;
    int modelYear;
    int maxSpeed;
    public:
        Vehicle(char fuelType[100],int ModelYear, int MaxSpeed);
        void display();
};
class Car:protected Vehicle{
    int NumberOfDoors;
    int TrunkCapacity;
    public:
    Car(char fuelType[100],int ModelYear, int MaxSpeed,int numOfDoors, int trunkCapacity);
    void displayVehicleInfo();
    void honk();
    void drive();
};
class SportsCar:public Car{
    int topSpeed;
    int aeroDynamics;
    public:
    SportsCar(char fuelType[100],int ModelYear, int MaxSpeed,int topSpeed, int aeroDynamics);
    void displayVehicleInfo();
    void race();
};