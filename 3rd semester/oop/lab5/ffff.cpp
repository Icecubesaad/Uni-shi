#include <iostream>
#include "Person.h"
using namespace std;
Person::Person(const char* n, int a) : age(a) {
        int length = 0;
        while (n[length] != '\0') {
            ++length;
        }

        name = new char[length + 1];

        for (int i = 0; i <= length; ++i) {
            name[i] = n[i];
        }
    }
Person::Person(const Person& other) : age(other.age) {
        int length = 0;
        while (other.name[length] != '\0') {
            ++length;
        }

        name = new char[length + 1];

        for (int i = 0; i <= length; ++i) {
            name[i] = other.name[i];
        }
    }
Person::~Person() {
        delete[] name;
    }
const char* Person::getName() const {
        return name;
    }
 void Person::setName(const char* n) {
        delete[] name; 

        int length = 0;
        while (n[length] != '\0') {
            ++length;
        }

        name = new char[length + 1];

        for (int i = 0; i <= length; ++i) {
            name[i] = n[i];
        }
    }
 void Person::setAge(int a) { age = a; }
 const int Person::getAge() { return age; }

int main() {
    Person p1("Alice", 25);
    Person p2 = p1; 
    p1.setName("Bob");
    cout << "Modified name of p2: " << p2.getName() << std::endl;

    return 0;
}


