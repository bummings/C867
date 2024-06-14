#include "student.h"
#include <iostream>


Student::Student() {
    this->studentID = "A5";
    this->firstName = "Edd";
    this->lastName = "Burke";
    this->emailAddress = "hello@bummings.io";
    this->age = 37;
    this->daysInCourse[0] = 10;
    this->daysInCourse[1] = 20;
    this->daysInCourse[2] = 30;
    this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    // loop over all days in course values
    for (int i = 0; i < 3; i++) {
        this->daysInCourse[i] = daysInCourse[i];
    }
    this->degreeProgram = degreeProgram;
}

// getters
string Student::getFirstName() const {
    return firstName;
}

string Student::getLastName() const {
    return lastName;
}

// this method helps print out a string for the enum of DegreeType, as it will just return an indice for the value. 
void Student::print() {
    string degree_string;
    if (degreeProgram == DegreeProgram::SOFTWARE) {
        degree_string = "Software";
    }
    else if (degreeProgram == DegreeProgram::SECURITY) {
        degree_string = "Security";
    } else if (degreeProgram == DegreeProgram::NETWORK) {
        degree_string = "Network";
    }
    cout << studentID << endl;
}