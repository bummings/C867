#include <iostream>
#include "roster.h"

using namespace std;

Roster::Roster() {}

// avoid memory leaks
Roster::~Roster() {
    for (int i = 0; i <= lastIndex; i++) {
        delete classRosterArray[i];
    }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int daysInCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
}

void Roster::remove(string studentID) {
    bool found = false;
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[lastIndex];
            classRosterArray[lastIndex] = nullptr;
            lastIndex--;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Cannot find student with the ID: " << studentID; 
    }
}

void Roster::printAll() const {
    for (int i = 0; i <= lastIndex; ++i) {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) const {
   for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            const int* days = classRosterArray[i]->getDaysInCourse();
            double average = (days[0] + days[1] + days[2] / 3.0);
            cout << "Student ID: " << studentID << ", avg. days in course: " << average << endl;
            return; 
        }
   } 
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    for (int i = 0; i<= lastIndex; ++i) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

/* 
validate the following for each email address string
that is evaluated:
    1. no spaces
    2. valid domain ending (.com, .net, etc)
    3. valid characters (a-z, A-Z, 0-9, @, .)
    4. contains a single @ and at least one . after
*/
void Roster::printInvalidEmails() const {
    for (int i = 0; i <= lastIndex; ++i) {
        string email = classRosterArray[i]->getEmailAddress();

        // spaces
        if (email.find(' ') != string::npos) {
            cout << "Invalid e-mail: " << email << endl;
            continue;
        }
        // valid domain ending (.com, .net)
        if (email.find(".com") == string::npos && email.find(".net") == string::npos) {
            cout << "Invalid e-mail: " << email << endl;
            continue;
        }
        // valid characters 
        bool valid = true;
        for (char character : email) {
            if (!isalnum(character) && character != '@' && character != '.' && character != '_') {
                valid = false;
                break;
            }
        }
        if (!valid) {
            cout << "Invalid e-mail: " << email << endl;
            continue;
        }
        // Check for exactly one '@'
        size_t atPos = email.find('@');
        if (atPos == string::npos || email.find('@', atPos + 1) != string::npos) {
            cout << "Invalid e-mail: " << email << endl;
            continue;
        }
        // Check for at least one '.' after '@'
        if (email.find('.', atPos) == string::npos) {
            cout << "Invalid e-mail: " << email << endl;
            continue;
        }
    }
}

