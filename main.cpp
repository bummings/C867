// g++ -o main *.cpp && ./main

#include <iostream>
#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;

int main() {
  DegreeProgram currentProgram = SECURITY;
  cout << "🎾 OK OK 🎾" << endl;

  // this is the array for the student roster- you will need to loop over this and instantiate them one by one as Student objects from the Student class ;)
  // const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Edd,Burke,hello@bummings.io,37,14,19,20,SOFTWARE \n" };
  const string studentData[] = {
    "A1,Eddy,Fresh,lol@gmail.com,38,10,10,10,NETWORK", 
    "A2,Loro,Ipso,email2@lol.com,17,15,15,20,SECURITY"
    "A3,Faux,kno,email3@lol.com,47,25,25,30,SECURITY"
    "A4,Graf,Iq,email4@lol.com,57,35,35,60,SECURITY"
    "A5,Itchy,Springer,email5@lol.com,97,85,86,20,SECURITY"
  };

  cout << "Testing now for example class roster and print method: \n\n\n";
  
  Roster classRoster;

  classRoster.add("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, DegreeProgram::SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, DegreeProgram::NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, DegreeProgram::SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, DegreeProgram::SECURITY);
    classRoster.add("A5", "YourFirstName", "YourLastName", "YourEmail@example.com", 37, 1,2,3, DegreeProgram::SOFTWARE);

    classRoster.printAll();
    
    
    


  int numStudents = sizeof(studentData) / sizeof(studentData[0]);
  cout << "size: " << numStudents << "\n\n";
  cout << "\n\n\n";

  for (int i; i < numStudents; i++) {
    cout << "STUDENT CREATED \n";
  }

  cout << studentData[1];

  if (currentProgram == SECURITY) {
    cout << "\n Student in array placement [1] is: Security\n";
  }
  else {
    cout << "Who knows man\n";
  };

  // Print students by degree program
    cout << "\nPrinting students in the NETWORK degree program:\n";
    classRoster.printByDegreeProgram(DegreeProgram::NETWORK);


  cout << "\n\nNow creating a Student" << endl;  
  // test student
  Student edd;

  // you will need to implement the getters and setters on the student object obv.
  cout << "First name: " << edd.getFirstName() << endl;
  cout << "Last name: " << edd.getLastName() << endl;
  cout << "Email: " << edd.getEmailAddress() << endl;

  cout << "\n\nModifying name with setter now 🤯 " << endl;

  edd.setFirstName("Updated Edd ");
  edd.setLastName("Updated Bummings");
  edd.setEmailAddress("updatedEmailAddress@lol.com");

  cout << " \nUpdated student: 😇"<< endl;

  cout << "First name: " << edd.getFirstName() << endl;
  cout << "Last name: " << edd.getLastName() << endl;
  cout << "Email: " << edd.getEmailAddress() << endl;

  return 0;
}