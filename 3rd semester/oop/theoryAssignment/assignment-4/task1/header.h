#pragma once
class Vehicle
{
private:
    char* brand;

public:
    Vehicle(char brand[100]);
    virtual void displayInfo();
};
class Car : public Vehicle
{
private:
    int numDoors;

public:
    Car(char brand[100], int numDoors);
    void displayInfo()override;
};
class SportsCar :public Car {
    bool convertible;
public:
    SportsCar(char brand[100], int numDoors, bool Convertible);
    void displayInfo();
};