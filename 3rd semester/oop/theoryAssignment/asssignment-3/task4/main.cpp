#include "task.h"
#include <iostream>
using namespace std;
ElectronicDevice::ElectronicDevice(char powerSorce[100], char brand[100], char model[100])
{
    this->brand = brand;
    this->model = model;
    this->powerSource = powerSorce;
}
Television::Television(char powerSorce[100], char brand[100], char model[100], int screenSize, char resolution[100]) : ElectronicDevice(powerSorce, brand, model)
{
    this->screenSize = screenSize;
    this->resolution = resolution;
}
SmartTV::SmartTV(char powerSorce[100], char brand[100], char model[100], int screenSize, char resolution[100], bool internetActivity) : Television(powerSorce, brand, model, screenSize, resolution)
{
    this->internetActivity = internetActivity;
}
void ElectronicDevice::displayDeviceInfo()
{
    cout << "Electronic Device Information : " << endl;
    cout << "Power Source : " << this->powerSource << endl;
    cout << "Brand : " << this->brand << endl;
    cout << "Model : " << this->model << endl;
}
void Television::displayDeviceInfo()
{
    ElectronicDevice::displayDeviceInfo();
    cout << "Screen Size : " << this->screenSize << endl;
    cout << "Resolution : " << this->resolution << endl;
}
void SmartTV::accessSmartFeatures()
{
    cout << "Accessing smart features.....\n";
}
void Television::turnOn(){
    cout<<"Turning on Television.....\n";
}
void Television::changeChannel(){
    cout<<"Changing Channels.....\n";
}
void SmartTV::displayDeviceInfo(){
    ElectronicDevice::displayDeviceInfo();
    if(this->internetActivity){
        cout<<"Internet Acitivity : true"<<endl;
    }
    else{
        cout<<"Internet Acitivity : false"<<endl;
    }
}
int main()
{
    char basicPowerSource[100] = "Electricity";
    char basicBrand[100] = "Sony";
    char basicModel[100] = "Bravia";
    char basicResolution[100] = "1080p";
    char smartPowerSource[100] = "Electricity";
    char smartBrand[100] = "Samsung";
    char smartModel[100] = "QLED";
    char smartResolution[100] = "4K";

    // Create instances of T elevision and SmartT V
    Television basicTV(basicPowerSource, basicBrand, basicModel, 42, basicResolution);
    SmartTV smartTV(smartPowerSource, smartBrand, smartModel, 55, smartResolution, true);
    basicTV.displayDeviceInfo();
    basicTV.turnOn();
    basicTV.changeChannel();
    cout << endl;
    smartTV.displayDeviceInfo();
    smartTV.turnOn();
    smartTV.changeChannel();
    smartTV.accessSmartFeatures();
    cout << endl;
    return 0;
}
