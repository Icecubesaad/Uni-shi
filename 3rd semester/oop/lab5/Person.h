#pragma once

class Person {
private:
    char* name;
    int age;

public:
    Person(const char* n, int a) ;
    Person(const Person& other);
    ~Person() ;
    const char* getName() const ;
    void setName(const char* n) ;
    const int getAge();
    void setAge(int n);
};
