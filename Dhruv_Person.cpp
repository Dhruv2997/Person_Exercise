#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    string userName, newName;
    int bDate, bMonth, bYear, menuChoice;

    cout << "Enter Person Name -> ";
    cin >> userName;
    cout << "Enter Person Birth Date -> ";
    cin >> bDate;
    cout << "Enter Person Birth Month -> ";
    cin >> bMonth;
    cout << "Enter Person Birth Year -> ";
    cin >> bYear;

    Person person(userName, bYear, bMonth, bDate);

    while (true) {
        cout << "*** Menu ***" << endl;
        cout << "1. Display Person" << endl;
        cout << "2. Display Age" << endl;
        cout << "3. Set Name" << endl;
        cout << "4. Sit Down" << endl;
        cout << "5. Stand Up" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter Your Choice -> ";
        cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
            cout << "Person Name is -> " << person.name << endl;
            cout << "Person Birthdate is -> " << person.getAge() << endl;
            cout << "Person Standing Status is -> " << person.standing << endl;
            break;

        case 2:
            cout << person.name + " Birthdate is -> " << person.getAge() << endl;
            break;

        case 3:
            cout << "Set Person Name ->";
            cin >> newName;
            person.setName(newName);
            cout << person.name + " Updated Successfully." << endl;
            break;

        case 4:
            person.setDown();
            cout << person.name + " is now Sitting." << endl;
            break;

        case 5:
            person.setUp();
            cout << person.name + " is now Standing." << endl;
            break;

        case 6:
            exit(0);
            break;

        default:
            cout << "Invalid Choice! Please enter valid choice." << endl;
            break;
        }
    }

    return 0;
}