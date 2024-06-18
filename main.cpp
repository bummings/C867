#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;

int main()
{
  DegreeProgram currentProgram = SECURITY;
  cout << "🎾 OK OK 🎾" << endl;

  // this is the array for the student roster- you will need to loop over this and instantiate them one by one as Student objects from the Student class ;)
  // const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Edd,Burke,hello@bummings.io,37,14,19,20,SOFTWARE \n" };
  const string studentData[] = {"A1,Eddy,Fresh,lol@gmail.com,38,10,10,10,NETWORK", "A2,Loro,Ipso,loroipso@lol.com,27,15,15,20,"};

  int numStudents = sizeof(studentData) / sizeof(studentData[0]);
  cout << "size: " << numStudents << "\n\n";
  cout << "\n\n\n";

  for (int i; i < numStudents; i++)
  {
    cout << "ANOTHER ONE";
  }

  cout << studentData[1];

  if (currentProgram == SECURITY)
  {
    cout << "\nSecurity\n";
  }
  else
  {
    cout << "Who knows man\n";
  };

  cout << "Going to attempt to create a Student" << endl;

  Student edd;

  // you will need to implement the getters and setters on the student object obv.
  cout << "First name: " << edd.getFirstName() << endl;
  cout << "Last name: " << edd.getLastName() << endl;
  cout << "Email: " << edd.getEmailAddress() << endl;

  cout << "Modifying name with setter now 🤯 " << endl;

  edd.setFirstName("Edd ");
  edd.setLastName("Bummings");
  edd.setEmailAddress("updatedEmailAddress@lol.com");

  cout << "Updated student 😇 \n\n"
       << endl;

  cout << "First name: " << edd.getFirstName() << endl;
  cout << "Last name: " << edd.getLastName() << endl;
  cout << "Email: " << edd.getEmailAddress() << endl;

  return 0;
}