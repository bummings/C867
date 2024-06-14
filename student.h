#include <string>
#include "degree.h"

using namespace std;

class Student {
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
        string getFirstName() const;
        void setFirstName(const string& firstName); 
        
        string getLastName() const;
        void setLastName(const string& lastName); 
        


        void print();
};
