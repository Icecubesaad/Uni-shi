#pragma once
class Vehicle
{
private:
    char *brand;
    char *model;

public:
    Vehicle();
    Vehicle(char brand[100], char model[100]);
    virtual void displayInfo();
};
class Car : public Vehicle
{
private:
    int numDoors;

public:
    Car();
    Car(char brand[100], char model[100], int numDoors);
    void displayInfo()override;
};
class MotorCycle : public Vehicle
{
private:
    int numWheels;

public:
    MotorCycle();
    MotorCycle(char brand[100], char model[100], int numWheels);
    void displayInfo()override;
};
class Truck : public Vehicle
{
private:
    double cargoCapacity;

public:
    Truck();
    Truck(char brand[100], char model[100], double cargoCapacity);
    void displayInfo()override;
};
class LuxuryCar:public Car
{
    private:
        char* luxuryFeatures;
    public:
        LuxuryCar();
        LuxuryCar(char brand[100], char model[100], int numDoors,char LuxuryFeatures[100]);
        void displayInfo()override;
};
class DirtBike:public MotorCycle{
    private:
        bool offRoadCapability;
    public:
        DirtBike();
        DirtBike(char brand[100], char model[100], int numWheels,bool offRoadCapability);
        void displayInfo()override;
};
class RentalAgencyClass{
    private:
        Vehicle* vehicles[100];
        int totalVehicles;
    public:
    RentalAgencyClass();
        void addVehicle(Vehicle* vehicle);
        void displayRentalInfo();
};
