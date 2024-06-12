/*
//  Implement functions:
//
//    Getters:
//      - Return values of `studentID`, `firstName`, `lastName`,
//        `emailAddress`, `age`, `daysInCourse`, `degreeProgram`
//
//    Setters:
//      - Set values for `studentID`, `firstName`, `lastName`,
//        `emailAddress`, `age`, `daysInCourse`, `degreeProgram`
//
//    Constructor:
//      - Init all member variables using parameters
//
//    print():
//      - Display student data in the specified format
//
//
//
//  Demonstrate program functionality:
//
//    Print information: course title, programming language, your student
//    ID, your name
//
//    Create `classRoster` instance:  Instantiate the `Roster` class
//
//    Add students: add each studewnt from the `studentData` tabl to
//    `classRoster`
//
//    Release destructor: release dynamically allocated memory in `Roster`
//
//
//
*/

#include <iostream>
#include "degree.h"

using namespace std;

int main()
{
  DegreeProgram currentProgram = SECURITY;
  cout << "OK OK" << endl;

  const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Edd,Burke,hello@bummings.io,37,14,19,20,SOFTWARE" };

  cout << studentData[3];

  if (currentProgram == SECURITY) {
    cout << "Security";
  }
  else {
    cout << "Who knows man";
  };

  return 0;
}
