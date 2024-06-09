## Enumerations

- **DegreeProgram**
  - SECURITY
  - NETWORK
  - SOFTWARE

## Classes

### Student Class

- **Variables:**
  - `studentID`
  - `firstName`
  - `lastName`
  - `emailAddress`
  - `age`
  - `daysInCourse`
  - `degreeProgram`
- **Functions:**
  - Getters and setters for each variable
  - Constructor
  - `print()`

### Roster Class

- **Variables:**
  - `classRosterArray`
- **Functions:**
  - `add()`
  - `remove()`
  - `printAll()`
  - `printAverageDaysInCourse()`
  - `printInvalidEmails()`
  - `printByDegreeProgram()`

## Main Function


### Assignment Summary

#### Task Requirements

- **A. Modify Student Data Table**

  - Add your personal information (student ID, first name, last name, email address, age, days to complete courses, degree program) as the last entry in the `studentData Table`.

- **B. Create a C++ Project**

  - Create the following files in your IDE:
    - `degree.h`
    - `student.h` and `student.cpp`
    - `roster.h` and `roster.cpp`
    - `main.cpp`

- **C. Define Enumerated Data Type**

  - In `degree.h`, define an enum `DegreeProgram` with the values:
    - `SECURITY`
    - `NETWORK`
    - `SOFTWARE`

- **D. Create Student Class**

  - **D1. Define Variables in `student.h` and `student.cpp`:**
    - `studentID` (string)
    - `firstName` (string)
    - `lastName` (string)
    - `emailAddress` (string)
    - `age` (int)
    - Array `daysInCourse` (int[3])
    - `degreeProgram` (DegreeProgram)
  - **D2. Implement Functions:**
    - **Accessors (Getters):**
      - Return values of `studentID`, `firstName`, `lastName`, `emailAddress`, `age`, `daysInCourse`, `degreeProgram`.
    - **Mutators (Setters):**
      - Set values for `studentID`, `firstName`, `lastName`, `emailAddress`, `age`, `daysInCourse`, `degreeProgram`.
    - **Constructor:**
      - Initialize all member variables using parameters.
    - **print():**
      - Display student data.

- **E. Create Roster Class**

  - **E1. Define Array of Pointers in `roster.h` and `roster.cpp`:**
    - `classRosterArray` to hold data from `studentData Table`.
  - **E2. Populate `classRosterArray`:**
    - Parse data from `studentData Table`.
    - Create `Student` objects and add to `classRosterArray`.
  - **E3. Implement Functions:**
    - **add() Function:**
      - Parameters: `studentID`, `firstName`, `lastName`, `emailAddress`, `age`, `daysInCourse1`, `daysInCourse2`, `daysInCourse3`, `degreeProgram`.
      - Create and add `Student` objects to the roster.
    - **remove() Function:**
      - Parameter: `studentID`.
      - Remove student by ID, print error if not found.
    - **printAll() Function:**
      - Loop through `classRosterArray` and call `print()` for each student.
    - **printAverageDaysInCourse() Function:**
      - Parameter: `studentID`.
      - Calculate and print average days in courses for the student.
    - **printInvalidEmails() Function:**
      - Validate and print invalid email addresses (must include '@' and '.', and no spaces).
    - **printByDegreeProgram() Function:**
      - Parameter: `degreeProgram`.
      - Print student data for specified degree program.

- **F. Demonstrate Program Functionality in `main.cpp`**

  - **F1. Print Information:**
    - Print course title, programming language, your student ID, and your name.
  - **F2. Create `classRoster` Instance:**
    - Instantiate the `Roster` class.
  - **F3. Add Students:**
    - Add each student from the `studentData Table` to `classRoster`.
  - **F4. Implement Pseudo Code:**
    - `classRoster.printAll()`
    - `classRoster.printInvalidEmails()`
    - Loop through `classRosterArray` and call `printAverageDaysInCourse()` for each student.
    - `classRoster.printByDegreeProgram(SOFTWARE)`
    - `classRoster.remove("A3")`
    - `classRoster.printAll()`
    - `classRoster.remove("A3")` (print error if not found)
  - **F5. Implement Destructor:**
    - Release dynamically allocated memory in `Roster`.

- **G. Professional Communication**
  - Ensure clarity and professionalism in the content and presentation of your submission.

### Strategy for Completion

1. **Setup Project Environment**

   - Open your IDE and create a new C++ project.
   - Create the required files (`degree.h`, `student.h`, `student.cpp`, `roster.h`, `roster.cpp`, `main.cpp`).

2. **Define DegreeProgram Enum**

   - In `degree.h`, define the `DegreeProgram` enum with `SECURITY`, `NETWORK`, and `SOFTWARE`.

3. **Implement Student Class**

   - In `student.h`, declare the `Student` class with the specified variables.
   - In `student.cpp`, define the constructor, getters, setters, and `print()` function.

4. **Implement Roster Class**

   - In `roster.h`, declare the `Roster` class and `classRosterArray`.
   - In `roster.cpp`, define the constructor, destructor, and functions (`add()`, `remove()`, `printAll()`, etc.).

5. **Write Main Function**

   - In `main.cpp`, print the required information.
   - Create an instance of the `Roster` class.
   - Add students to `classRoster` and implement the pseudo code.

6. **Test and Debug**

   - Compile and run your code to ensure all functions work as expected.
   - Test each function individually and verify output.
