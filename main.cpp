// G++ snippet: compile all and run without warnings
// g++ -o main *.cpp -w && ./main

#include <iostream>
#include "degree.h"
#include "roster.h"

using namespace std;

int main() {
  // this is the array for the student roster- you will need to loop over this and instantiate them one by one as Student objects from the Student class ;)
  // const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Edd,Burke,hello@bummings.io,37,14,19,20,SOFTWARE \n" };
  
  Roster classRoster;

  classRoster.add("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, DegreeProgram::SECURITY);
  classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, DegreeProgram::NETWORK);
  classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, DegreeProgram::SOFTWARE);
  classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, DegreeProgram::SECURITY);
  classRoster.add("A5", "Edd", "Burke", "eabummings@gmail.com", 37, 1,2,3, DegreeProgram::SOFTWARE);

  classRoster.printAll();
    

  // Print students by a specific Degree Program
  cout << "\nPrinting students in the NETWORK degree program:\n";
  
  classRoster.printByDegreeProgram(DegreeProgram::NETWORK);

  // Print average days in course for student
  cout << "\nPrinting avg days in course for student A1: \n";
  classRoster.printAverageDaysInCourse("A1");

  // Print all invalid emails
  cout << "\nPrinting invalid emails:\n";
    classRoster.printInvalidEmails();

  return 0;
}