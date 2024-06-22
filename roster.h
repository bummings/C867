#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"

class Roster  {
    public:
        Roster();
        ~Roster();  // destructor

        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
        void remove(string studentID);
        void printAll() const;
        void printAverageDaysInCourse(string studentID) const;
        void printInvalidEmails() const;
        void printByDegreeProgram(DegreeProgram degreeProgram) const;



    private:
        // this is an array of pointers to Student objects
        Student* classRosterArray[5]; 
        
        // index of last indexed student
        int lastIndex = -1; 
};

#endif
