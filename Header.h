#pragma once
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int birthYear;
    int birthMonth;
    int birthdate;
    bool standing;

    Person(string fullName, int birthY, int birthM, int birthD);
    void setDown();
    void setUp();
    string getAge();
    void setName(string fullName);
};