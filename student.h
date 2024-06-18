#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"

using namespace std;

class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;

public:
    Student(); // default, no arg
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);

    // getters & setters

    // student ID
    string getStudentID() const;
    void setStudentID(const int &studentID);

    // first name
    string getFirstName() const;
    void setFirstName(const string &firstName);

    // last name
    string getLastName() const;
    void setLastName(const string &lastName);

    // email address
    string getEmailAddress() const;
    void setEmailAddress(const string &emailAddress);

    // age
    int getAge() const;
    void setAge(const int &age);

    // days in course
    const int *getDaysInCourse() const;
    void setDaysInCourse(int daysInCourse[]);

    // degree program
    DegreeProgram getDegreeProgram() const;
    void setDegreeProgram(const DegreeProgram &degreeProgram);

    void print();
};

#endif