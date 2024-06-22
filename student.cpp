#include "student.h"
#include <iostream>

// default constructor
Student::Student() {
    this->studentID = "A5";
    this->firstName = "Edward";
    this->lastName = "Burke";
    this->emailAddress = "eabummings@gmail.com";
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

// getters && setters
// ID
string Student::getStudentID() const {
    return studentID;
}

void Student::setStudentID(const string &studentID) {
    this->studentID = studentID;
}

// first name
string Student::getFirstName() const {
    return firstName;
}
void Student::setFirstName(const string &firstName) {
    this->firstName = firstName;
}

// last name
string Student::getLastName() const {
    return lastName;
}
void Student::setLastName(const string &lastName) {
    this->lastName = lastName;
}

// email address
string Student::getEmailAddress() const {
    return emailAddress;
}
void Student::setEmailAddress(const string &emailAddress) {
    this->emailAddress = emailAddress;
}

// age
int Student::getAge() const {
    return age;
}
void Student::setAge(const int &age) {
    this->age = age;
}

// days in course
const int *Student::getDaysInCourse() const {
    return daysInCourse;
}

// loop over days in course and add to array one by one
void Student::setDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < 3; ++i) {
        this->daysInCourse[i] = daysInCourse[i];
    }
}

// degree program
DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

// this helper method will print out a string for the enum of DegreeType, as without it, we will only have returned an indice for the value, as enums return the value and not the string.
void Student::print() const {
    string degree_string;
    if (degreeProgram == DegreeProgram::SOFTWARE) {
        degree_string = "Software";
    } else if (degreeProgram == DegreeProgram::SECURITY) {
        degree_string = "Security";
    } else if (degreeProgram == DegreeProgram::NETWORK) {
        degree_string = "Network";
    }
    cout << "ID: " << studentID << "\t"
         << "First Name: " << firstName <<"   "
         << "Last Name: " << lastName << "  "
         << "Email: " << emailAddress << "  "
         << "Age: " << age << "  "
         << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}  "
         << "Degree Program: " << degree_string << endl;

}