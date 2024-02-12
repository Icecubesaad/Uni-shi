class Employee {
public:
	int id;
	char* name;
	int experience;
	Employee(int id, char name[], int expereince);
	virtual void displayInfo();
	int getExperience();
};
class Manager :public Employee {
public:
	int teamSize;
	Manager(int id, char name[], int expreince, int teamSize);
	void manageTeam();
};
class TeamLead :public Employee {
public:
	int teamSize;
	TeamLead(int  id, char name[], int experience, int teamSize);
	void  LeadTeam();
};
class ManagerTeamLead :public Manager, public TeamLead {
	Manager* m;
	TeamLead* t;
public:
	ManagerTeamLead(Manager& m, TeamLead& t);
	void selectEmployees();
};
