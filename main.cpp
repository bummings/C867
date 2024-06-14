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
#include "student.h"

using namespace std;

int main()
{
  DegreeProgram currentProgram = SECURITY;
  cout << "🎾 OK OK 🎾" << endl;

  // this is the array for the student roster- you will need to loop over this and instantiate them one by one as Student objects from the Student class ;) 
  const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Edd,Burke,hello@bummings.io,37,14,19,20,SOFTWARE \n" };

  cout << studentData[3];

  if (currentProgram == SECURITY) {
    cout << "\nSecurity\n";
  }
  else {
    cout << "Who knows man\n";
  };

  cout << "Going to attempt to create a Student" << endl;
  
  Student edd;

  // you will need to implement the getters and setters on the student object obv.
cout << "First name: " << edd.getFirstName() << endl;  

cout << "Modifying name with setter now 🤯 " << endl;

edd.setFirstName("Edward ");

cout << "New name: " << edd.getFirstName() << endl;

  return 0;
}