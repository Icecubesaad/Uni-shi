#include <iostream>
#include "task.h"
using namespace std;
char undefinedSp[100]="undefined";
Animal::Animal(){
	this->name = new char[100];
	int iterator = 0;
	while (undefinedSp[iterator]!='\0')
	{
		this->name[iterator] = undefinedSp[iterator];
		iterator++;
	}
	this->name[iterator] = '\0';
	iterator = 0;
	while (undefinedSp[iterator] != '\0')
	{
		this->type[iterator] = undefinedSp[iterator];
		iterator++;
	}
	this->type[iterator] = '\0';
}
Animal::Animal(char name[100], char type[100]){
	this->name = name;
	this->type = type;
}
void Animal::displayInfo(){
	cout << "Name : " << this->name<<endl;
	cout << "type : " << this->type << endl;
}
Mammal::Mammal():Animal({undefinedSp},{undefinedSp}){
	this->furColor = new char[100];
	int iterator = 0;
	while (undefinedSp[iterator] != '\0')
	{
		this->furColor[iterator] = undefinedSp[iterator];
		iterator++;
	}
	this->furColor[iterator] = '\0';
}
Mammal::Mammal(char name[100], char type[100], char* furColor):Animal(name,type){
	this->furColor = furColor;
}
void Mammal::displayInfo(){
	Animal::displayInfo();
	cout << "Fur Color : " << this->furColor << endl;
}
Fish::Fish(){
    this->scaleColor = new char[100];
	int iterator = 0;
	while (undefinedSp[iterator]!='\0')
	{
		this->scaleColor[iterator] = undefinedSp[iterator];
		iterator++;
	}
	this->scaleColor[iterator] = '\0';
}
Fish::Fish(char name[100], char type[100], char scaleColor[100]):Animal(name,type){
    this->scaleColor=scaleColor;
}
void Fish::displayInfo(){
    Animal::displayInfo();
    cout<<"Scale color : "<<this->scaleColor<<endl;
}
Bird::Bird():Animal({undefinedSp},{undefinedSp}){
	this->wingSpan = 0.00;
}
Bird::Bird(char name[100], char type[100], double wingSpan):Animal(name,type){
	this->wingSpan = wingSpan;
}
void Bird::displayInfo(){
	Animal::displayInfo();
	cout << "Wing span : " << this->wingSpan<<endl;
}
Whale::Whale():Fish(undefinedSp, undefinedSp, undefinedSp){
	this->size = undefinedSp;
}
Whale::Whale(char name[100], char type[100], char scaleColor[100], char size[100]):Fish(name,type,scaleColor){
	this->size = size;
}
void Whale::displayInfo(){
	Fish::displayInfo();
	cout << "size : " << this->size<<endl;
}
Eagle::Eagle():Bird(undefinedSp,undefinedSp,0.00){
	this->prey = undefinedSp;
}
Eagle::Eagle(char name[100], char type[100], double wingSpan, char prey[100]):Bird(name,type,wingSpan){
	this->prey = prey;
}
void Eagle::displayInfo(){
	Bird::displayInfo();
	cout << "Prey : " << this->prey<<endl;
}
Zoo::Zoo(){
	totalAnimals = 0;
}
void Zoo::addAnimal(Animal* newanimal){
	this->animals[totalAnimals] = newanimal;	// newanimal is a Animal type pointer and can contain the address of derived class objects for e.g: eagle, whale;
	// this pointer can call these objects and access the public members of it.
	// if the base and child classes have the same name member functions then the pointer will only call the function respective to its type.
	// if you want to call the function of the object pointed by pointer newanimal then you have to make the main base function virtual and the derived classes functions override.
    totalAnimals++;
}
void Zoo::displayZooInfo(){
	for (int i = 0; i < this->totalAnimals; i++)
	{
        
        animals[i]->displayInfo();
        cout<<endl;
	}
}
int main(){
    char whaleName[100] = "Whale";
    char whaleType[100] = "Fish";
    char whaleColor[100] = "grey";
    char whaleWeight[100] = "300kg";
    char eagleName[100] = "Eagle";
    char eagleType[100] = "Bird";
    char eaglePrey[100] = "rat";
    Whale w1(whaleName, whaleType, whaleColor, whaleWeight);
    Eagle e1(eagleName, eagleType, 9.8, eaglePrey);
	Zoo z1;
	z1.addAnimal(&w1);
	z1.addAnimal(&e1);
	z1.displayZooInfo();
}