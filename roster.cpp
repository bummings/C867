#include <iostream>
#include "roster.h"

using namespace std;

Roster::Roster() {}

Roster::~Roster()
{
    for (int i = 0; i <= lastIndex; i++)
    {
        delete classRosterArray;
    }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    int daysInCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3};
    classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
}

void Roster::remove(string StudentID)
{
    bool found = false;
    for (int i = 0; i <= lastIndex; ++i)
    {
        if (classRosterArray[i]->getStudentID() == StudentID)
            ;
    }
}