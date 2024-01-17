#include <iostream>

using namespace std;

class Student {
	char name[100];
	int ID;
	float grade;

public:
	Student() {
		name[0] = '\0';
		ID = 0;
		grade = 0;
	}

	Student(int Id, float grades, char nameP[100]) {
		int iterator = 0;
		while (nameP[iterator] != '\0') {
			name[iterator] = nameP[iterator];
			iterator++;
		}
		
		name[iterator] = '\0'; // Null-terminate the name array
		ID = Id;
		grade = grades;
	}

	char* getName() {
		return name;
	}

	void setName() {
	    char namep[100];
	    cin.getline(namep,100);
		int iterator = 0;
		while (namep[iterator] != '\0') {
			name[iterator] = namep[iterator];
			iterator++;
		}
		name[iterator] = '\0'; // Null-terminate the name array
	}

	int getStudentID() {
		return ID;
	}

	void setStudentID(int IDp) {
		ID = IDp;
	}

	float getGrade() {
		return grade;
	}

	void setGrade(float gradep) {
		grade = gradep;
	}

	void displayStudentInfo() {
		int iterator = 0;
		cout << "Student name : ";
		while (name[iterator] != '\0') {
			cout << name[iterator];
			iterator++;
		}
		cout << endl;
		cout << " Student grades : " << grade;
		cout << "\nStudent Id : " << ID << endl;
	}

	~Student() {
		cout << "Destroying object of ID : " << ID << endl;
	}
};

int main() {
	Student DefaultStudent;
	char name[100] = {"saad"};
	Student ParameterStudent(9, 7, name);
	ParameterStudent.displayStudentInfo();
	ParameterStudent.setName();
	ParameterStudent.displayStudentInfo();

	return 0;
}