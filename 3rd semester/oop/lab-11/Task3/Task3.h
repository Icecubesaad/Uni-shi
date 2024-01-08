class Employee{
	char* name;
public:
	Employee();
	Employee(char name[100]);
	void display();
	void setValues(char name[100]);
};
class Manager :public Employee{
	char* departement;
public:
	Manager();
	Manager(char name[100], char departement[100]);
	void display();
};
class Engineer :private Employee{
	char* project;
public:
	Engineer();
	Engineer(char name[100],  char project[100]);
	void display();
	
};
class Clerk :protected Employee
{
	char* task;
public:
	Clerk();
	Clerk(char name[100], char task[100]);
	void display();
};