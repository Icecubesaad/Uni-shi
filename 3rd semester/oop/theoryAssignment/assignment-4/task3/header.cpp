#include "header.h"
#include <iostream>
using namespace std;
Manager::Manager(int id, char name[], int expreince, int teamSize):Employee(id,name,expreince)
{
	this->teamSize = teamSize;
}

void Manager::manageTeam()
{
	cout << "Managing team size of " << teamSize << " people.\n";
}

Employee::Employee(int id, char name[], int expereince)
{
	this->experience = expereince;
	this->name = name;
	this->id = id;
}

void Employee::displayInfo()
{
	cout << "Employee name : " << this->name << endl;
	cout << "Employee id : " << this->id << endl;
	cout << "Employee Experience : " << this->experience << endl;
}

int Employee::getExperience()
{
	return this->experience;
}

TeamLead::TeamLead(int id, char name[], int  experience, int teamSize):Employee(id,name,experience)
{
	this->teamSize = teamSize;
}

void TeamLead::LeadTeam()
{
	cout << "Leading team of " << teamSize << " people\n";
}

void ManagerTeamLead::selectEmployees()
{
	if (m->getExperience() > 2) {
		cout << "Manger : ";
		m->displayInfo();
	}
	if (t->getExperience() > 2) {
		cout << "Team Lead : ";
		t->displayInfo();
	}

}

ManagerTeamLead::ManagerTeamLead(Manager& m, TeamLead& t):Manager(m.id,m.name,m.experience,m.teamSize),TeamLead(t.id,t.name,t.experience,t.teamSize)
{
	this->m = &m;
	this->t = &t;
}
