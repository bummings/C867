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

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    for (int i = 0; i<= lastIndex; ++i) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

// remaining methods printAverageDaysInCourse, printInvalidEmails, printByDegreeProgram

