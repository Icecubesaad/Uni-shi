#pragma once
class ElectronicDevice
{
    char *powerSource;
    char *brand;
    char *model;

public:
    ElectronicDevice(char powerSorce[100], char brand[100], char model[100]);
    void displayDeviceInfo();
};
class Television : protected ElectronicDevice
{
    int screenSize;
    char *resolution;

public:
    Television(char powerSorce[100], char brand[100], char model[100], int screenSize, char resolution[100]);
    void displayDeviceInfo();
    void turnOn();
    void changeChannel();
};
class SmartTV : public Television
{
    bool internetActivity;

public:
    SmartTV(char powerSorce[100], char brand[100], char model[100], int screenSize, char resolution[100], bool internetActivity);
    void displayDeviceInfo();
    void accessSmartFeatures();
};