class Animal{
private:
	char* name;
	char* type;
public:
	Animal();
	Animal(char name[100], char type[100]);
	virtual void displayInfo();
};
class Mammal :public Animal{
	char* furColor;
public:
	Mammal();
	Mammal(char name[100], char type[100], char* furColor);
	void displayInfo() override;
};
class Bird :public Animal{
	double wingSpan;
public:
	Bird();
	Bird(char name[100], char type[100], double wingSpan);
	void displayInfo() override;
};
class Fish:public Animal{
    char* scaleColor;
    public:
        Fish();
        Fish(char name[100], char type[100], char scaleColor[100]);
        void displayInfo() override;
};
class Whale :public Fish{
	char* size;
public:
	Whale();
	Whale(char name[100], char type[100], char furColor[100],char size[100]);
	void displayInfo() override;
};
class Eagle :public Bird{
	char* prey;
public:
	Eagle();
	Eagle(char name[100], char type[100], double wingSpan, char prey[100]);
	void displayInfo() override;
};
class Zoo{
	int totalAnimals;
	Animal* animals[100];
public:
	Zoo();
	void addAnimal(Animal* newanimal);
	void displayZooInfo();
};