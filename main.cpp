// G++ snippet: compile all and run without warnings
// g++ -o main *.cpp -w && ./main

#include <iostream>
#include "degree.h"
#include "roster.h"

using namespace std;

int main() {
  
  cout << "C867: Scripting and Programming: Applications" << endl;
  cout << "Student ID: 010752490 \nName: Edd Burke\n\n" << endl;

  // instantiate Roster object
  Roster classRoster;

  // add all Students to Roster
  classRoster.add("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, DegreeProgram::SECURITY);
  classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, DegreeProgram::NETWORK);
  classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, DegreeProgram::SOFTWARE);
  classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, DegreeProgram::SECURITY);
  classRoster.add("A5", "Edd", "Burke", "eabummings@gmail.com", 37, 1,2,3, DegreeProgram::SOFTWARE);

  
  classRoster.printAll();
  
  // Print all invalid emails
  cout << "\nPrinting invalid emails:\n";
    classRoster.printInvalidEmails();

  // Print average days in course for all students
    cout << "\nPrinting average days in course for all students:\n";
    classRoster.printAverageDaysInCourse();

  // Print students by a specific Degree Program
  cout << "\nPrinting students in the Software degree program:\n";  
  
  classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

  cout << "\nRemoving student with ID: A3\n";
  classRoster.remove("A3");
  cout << "Removed student with ID: A3 \n\n";

  classRoster.printAll();

  
  //expected: the above line should print a message saying such a student with this ID was not found.
  cout << "\nRemoving student with ID: A3\n";
  classRoster.remove("A3");

  return 0;
}