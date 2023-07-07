#include <iostream>
using namespace std;

const int MAX_STUDENTS = 5;

void calculatePercentageAndGrade(int RollNumbers[], int CSMarks[], int MathMarks[], float percentages[], char grades[], int numStudents)
{
    for (int i = 0; i < numStudents; i++)
    {
        percentages[i] = (CSMarks[i] + MathMarks[i]) / 2.0;

        if (percentages[i] < 50)
            grades[i] = 'F';
        else if (percentages[i] < 60)
            grades[i] = 'D';
        else if (percentages[i] < 75)
            grades[i] = 'C';
        else if (percentages[i] <= 90)
            grades[i] = 'B';
        else
            grades[i] = 'A';
    }
}

int findStudentIndex(int RollNumbers[], int numStudents, int rollNumber)
{
    for (int i = 0; i < numStudents; i++)
    {
        if (RollNumbers[i] == rollNumber)
            return i;
    }
    return -1;
}

void updateRollNumber(int RollNumbers[], int numStudents)
{
    int rollNumber, newRollNumber;
    cout << "\nEnter Roll Number of student to update: ";
    cin >> rollNumber;

    int index = findStudentIndex(RollNumbers, numStudents, rollNumber);
    if (index == -1)
    {
        cout << "Student with Roll Number " << rollNumber << " does not exist. " << endl;
        return;
    }

    cout << "Enter new Roll Number: ";
    cin >> newRollNumber;

    RollNumbers[index] = newRollNumber;

    cout << "Roll Number updated successfully. " << endl;
}

void updateCSMarks(int RollNumbers[], int CSMarks[], int MathMarks[], float percentages[], char grades[], int numStudents)
{
    int rollNumber, newCSMarks;
    cout << "\nEnter Roll Number of student: ";
    cin >> rollNumber;

    int index = findStudentIndex(RollNumbers, numStudents, rollNumber);
    if (index == -1)
    {
        cout << "Student with Roll Number " << rollNumber << " does not exist.\n";
        return;
    }

    cout << "Enter new CS Marks (<= 100): ";
    cin >> newCSMarks;
    while (newCSMarks > 100)
    {
        cout << "Invalid input. Enter new CS Marks (<= 100): ";
        cin >> newCSMarks;
    }

    CSMarks[index] = newCSMarks;

    cout << "CS Marks updated successfully.\n";

    calculatePercentageAndGrade(RollNumbers, CSMarks, MathMarks, percentages, grades, numStudents);
}

void updateAllCSMarks(int CSMarks[], int numStudents)
{
    int newCSMarks;
    cout << "Enter new CS Marks (<= 100): " << endl;
    cin >> newCSMarks;
    while (newCSMarks > 100)
    {
        cout << "Invalid input. Enter new CS Marks (<= 100): ";
        cin >> newCSMarks;
    }

    for (int i = 0; i < numStudents; i++)
    {
        CSMarks[i] = newCSMarks;
    }

    cout << "CS Marks updated for all students successfully. " << endl;
}

void updateMathMarks(int RollNumbers[], int MathMarks[], int numStudents)
{
    int rollNumber, newMathMarks;
    cout << "Enter Roll Number of student: " << endl;
    cin >> rollNumber;

    int index = findStudentIndex(RollNumbers, numStudents, rollNumber);
    if (index == -1)
    {
        cout << "Student with Roll Number " << rollNumber << " does not exist." << endl;
        return;
    }

    cout << "Enter new Mathematics Marks (<= 100): ";
    cin >> newMathMarks;
    while (newMathMarks > 100)
    {
        cout << "Invalid input. Enter new Mathematics Marks (<= 100): ";
        cin >> newMathMarks;
    }

    MathMarks[index] = newMathMarks;

    cout << "Mathematics Marks updated successfully." << endl;
}

void updateAllMathMarks(int MathMarks[], int numStudents)
{
    int newMathMarks;
    cout << "Enter new Mathematics Marks (<= 100): " << endl;
    cin >> newMathMarks;
    while (newMathMarks > 100)
    {
        cout << "Invalid input. Enter new Mathematics Marks (<= 100): ";
        cin >> newMathMarks;
    }

    for (int i = 0; i < numStudents; i++)
    {
        MathMarks[i] = newMathMarks;
    }

    cout << "Mathematics Marks updated for all students successfully. " << endl;
}

void sortData(int RollNumbers[], int CSMarks[], int MathMarks[], float percentages[], char grades[], int numStudents)
{
    for (int i = 0; i < numStudents - 1; i++)
    {
        for (int j = 0; j < numStudents - i - 1; j++)
        {
            if (RollNumbers[j] > RollNumbers[j + 1])
            {
                // Swap Roll Numbers
                int tempRollNumber = RollNumbers[j];
                RollNumbers[j] = RollNumbers[j + 1];
                RollNumbers[j + 1] = tempRollNumber;

                // Swap CS Marks
                int tempCSMarks = CSMarks[j];
                CSMarks[j] = CSMarks[j + 1];
                CSMarks[j + 1] = tempCSMarks;

                // Swap Mathematics Marks
                int tempMathMarks = MathMarks[j];
                MathMarks[j] = MathMarks[j + 1];
                MathMarks[j + 1] = tempMathMarks;

                // Swap Percentages
                float tempPercentage = percentages[j];
                percentages[j] = percentages[j + 1];
                percentages[j + 1] = tempPercentage;

                // Swap Grades
                char tempGrade = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = tempGrade;
            }
        }
    }
}

void displayData(int RollNumbers[], int CSMarks[], int MathMarks[], float percentages[], char grades[], int numStudents)
{
    cout << "Roll No.\tCS Marks\tMathematics Marks\tPercentage\tGrade\n";
    for (int i = 0; i < numStudents; i++)
    {
        cout << RollNumbers[i] << "\t\t" << CSMarks[i] << "\t\t" << MathMarks[i] << "\t\t" << percentages[i] << "\t\t" << grades[i] << endl;
    }
}

int main()
{
    int RollNumbers[MAX_STUDENTS];
    int CSMarks[MAX_STUDENTS];
    int MathMarks[MAX_STUDENTS];
    float percentages[MAX_STUDENTS];
    char grades[MAX_STUDENTS];
    int numStudents = 0;

    int choice;
    do
    {
        cout << "\n--- Student Report Management ---\n";
        cout << "1. Add Student\n";
        cout << "2. Update Roll Number\n";
        cout << "3. Update CS Marks\n";
        cout << "4. Update Mathematics Marks\n";
        cout << "5. Update CS Marks for all Students\n";
        cout << "6. Update Mathematics Marks for all Students\n";
        cout << "7. Sort Data\n";
        cout << "8. Display Data\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (numStudents < MAX_STUDENTS)
                {
                    cout << "\nEnter Roll Number: ";
                    cin >> RollNumbers[numStudents];

                    cout << "Enter CS Marks (<= 100): ";
                    cin >> CSMarks[numStudents];
                    while (CSMarks[numStudents] > 100)
                    {
                        cout << "Invalid input. Enter CS Marks (<= 100): ";
                        cin >> CSMarks[numStudents];
                    }

                    cout << "Enter Mathematics Marks (<= 100): ";
                    cin >> MathMarks[numStudents];
                    while (MathMarks[numStudents] > 100)
                    {
                        cout << "Invalid input. Enter Mathematics Marks (<= 100): ";
                        cin >> MathMarks[numStudents];
                    }

                    calculatePercentageAndGrade(RollNumbers, CSMarks, MathMarks, percentages, grades, numStudents + 1);

                    numStudents++;

                    cout << "Student added successfully. " << endl;
                }
                else
                {
                    cout << "Maximum number of students reached." << endl;
                }
                break;

            case 2:
                updateRollNumber(RollNumbers, numStudents);
                break;

            case 3:
                updateCSMarks(RollNumbers, CSMarks, MathMarks, percentages, grades, numStudents);
                break;

            case 4:
                updateMathMarks(RollNumbers, MathMarks, numStudents);
                break;

            case 5:
                updateAllCSMarks(CSMarks, numStudents);
                calculatePercentageAndGrade(RollNumbers, CSMarks, MathMarks, percentages, grades, numStudents);
                break;

            case 6:
                updateAllMathMarks(MathMarks, numStudents);
                calculatePercentageAndGrade(RollNumbers, CSMarks, MathMarks, percentages, grades, numStudents);
                break;

            case 7:
                sortData(RollNumbers, CSMarks, MathMarks, percentages, grades, numStudents);
                cout << "Data sorted successfully." << endl;
                break;

            case 8:
                displayData(RollNumbers, CSMarks, MathMarks, percentages, grades, numStudents);
                break;

            case 9:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 9);

    return 0;
}
