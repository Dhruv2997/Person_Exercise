#include "Header.h"

Person::Person(string fullName, int birthY, int birthM, int birthD) {
    name = fullName;
    birthYear = birthY;
    birthMonth = birthM;
    birthdate = birthD;
    standing = false;
}

void Person::setDown() {
    standing = false;
}

void Person::setUp() {
    standing = true;
}

string Person::getAge() {
    string date = to_string(birthdate) + "-" + to_string(birthMonth) + "-" + to_string(birthYear);
    return date;
}

void Person::setName(string fullName) {
    name = fullName;
}
