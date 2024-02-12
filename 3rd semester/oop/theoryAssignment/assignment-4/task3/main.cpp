#include "header.h"
int main() {
	char name[] = "saad";
	Manager m1(23, name, 3, 50);
	TeamLead l1(54, name, 1, 10);
	ManagerTeamLead mt1(m1,l1);
	mt1.selectEmployees();
}