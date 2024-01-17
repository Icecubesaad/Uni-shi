class Vehicle{
	char* model;
	int year;
public:
	Vehicle();
	Vehicle(char name[100], int year);
	void display();
	void setValues(char name[100], int year);
};
class Car :public Vehicle{
	int numDoors;
public:
	Car();
	Car(char name[100], int year, int numDoors);
	void display();
};
class Motorcycle :private Vehicle{
	int numWheels;
public:
	Motorcycle();
	Motorcycle(char name[100], int year, int numDoors);
	void display();
};
class Truck :protected Vehicle{
	float CargoCapacity;
public:
	Truck();
	Truck(char name[100], int year, float CargoCapacity);
	void display();
};