#include <iostream>
#include "task.h"
using namespace std;
char undefined[100]="undefined";
Vehicle::Vehicle(){
    this->brand=undefined;
    this->model=undefined;
}
Vehicle::Vehicle(char brand[100], char model[100]){
    this->brand=brand;
    this->model=model;
}
void Vehicle::displayInfo(){
    cout<<"Brand : "<<this->brand<<endl;
    cout<<"Model : "<<this->model<<endl;
}
Car::Car():Vehicle(undefined,undefined){
    this->numDoors=4;
}
Car::Car(char brand[100], char model[100], int numDoors):Vehicle(brand,model){
    this->numDoors=numDoors;
}
void Car::displayInfo(){
    Vehicle::displayInfo();
    cout<<"Number of doors : "<<this->numDoors;
}
MotorCycle::MotorCycle():Vehicle(undefined,undefined){
    this->numWheels=2;
}
MotorCycle::MotorCycle(char brand[100], char model[100], int numDoors):Vehicle(brand,model){
    this->numWheels=numWheels;
}
void MotorCycle::displayInfo(){
    Vehicle::displayInfo();
    cout<<"Number of wheels : "<<endl;
}
Truck::Truck():Vehicle(undefined,undefined){
    this->cargoCapacity=0.00;
}
Truck::Truck(char brand[100], char model[100], double cargoCapacity){
    this->cargoCapacity=cargoCapacity;
}
void Truck::displayInfo(){
    Vehicle::displayInfo();
    cout<<"Cargo capacity : "<<this->cargoCapacity<<endl;
}
LuxuryCar::LuxuryCar():Car(undefined,undefined,4){
    this->luxuryFeatures=undefined;
}
LuxuryCar::LuxuryCar(char brand[100], char model[100], int numDoors,char LuxuryFeatures[100]):Car(brand,model,numDoors){
    this->luxuryFeatures=LuxuryFeatures;
}
void LuxuryCar::displayInfo(){
    Car::displayInfo();
    cout<<"Luxury Features : "<<this->luxuryFeatures<<endl;
}
DirtBike::DirtBike():MotorCycle(undefined,undefined,2){
   this->offRoadCapability=false; 
}
DirtBike::DirtBike(char brand[100], char model[100], int numWheels,bool offRoadCapability):MotorCycle(brand,model,numWheels){
    this->offRoadCapability=offRoadCapability;
}
void DirtBike::displayInfo(){
    MotorCycle::displayInfo();
    if(this->offRoadCapability){

    cout<<"OffRoad capacbility : true\n";
    }
    else{
        cout<<"OffRoad capacbility : false\n";
    }
}
RentalAgencyClass::RentalAgencyClass(){
    totalVehicles=0;
}
void RentalAgencyClass::addVehicle(Vehicle* vehicle){
    vehicles[totalVehicles]=vehicle;
    totalVehicles++;
}
void RentalAgencyClass::displayRentalInfo(){
    for (int i = 0; i < totalVehicles; i++)
    {
        vehicles[i]->displayInfo();
    }
}
int main(){
    char brand[100]={"suzuki"};
    char modelbike[100]={"cd70"};
    char modelCar[100]={"mehran"};
    char truck[100]={"some truck"};
    char luxury[100]={"comfortable"};
    Car c1(brand,modelCar,4);
    MotorCycle m1(brand,modelbike,2);
    LuxuryCar l1(brand,modelbike,4,luxury);
    DirtBike db1(brand,modelbike,2,true);
    RentalAgencyClass r1;
    r1.addVehicle(&c1);
    r1.addVehicle(&m1);
    r1.addVehicle(&l1);
    r1.addVehicle(&db1);
    r1.displayRentalInfo();
}
