# Student Management System

**Course:** BCA 1st Semester | OOP Using C++  
**Project:** Module 2 Mini Project  
**Author:** Amal Shan C (Roll No: 8, Batch: FS1)

## Overview
A C++ console application designed to manage student records, validate marks, handle interactive mark re-evaluations, and generate final Pass/Fail results using core Object-Oriented Programming principles.

## Features
- **Student Record Storage:** Initializes and displays a batch of student records (Name, Roll Number, and Marks).
- **Input Validation:** Ensures all marks fall strictly within the valid range (`0.0` to `100.0`), automatically re-prompting until a valid score is entered.
- **Interactive Re-evaluation:** Allows updating any student's marks by searching their Roll Number, with error handling for non-existent Roll Numbers.
- **Result Generation:** Evaluates and prints each student's final status (`Pass` for marks `>= 40.0`, `Fail` otherwise).

## OOP Concepts Demonstrated
- **Classes & Objects:** Defined a `Student` class and managed multiple instances using an array of objects (`Student batch[3]`).
- **Encapsulation:** Kept data members (`name`, `roll_no`, `marks`) `private` and exposed controlled access via `public` getters (`get_name`, `get_roll_no`, `get_marks`) and a validated setter (`set_marks`).
- **Constructors & `this` Pointer:** Used a parameterized constructor to initialize object state cleanly and resolve naming conflicts with `this->`.
- **Objects as Function Arguments:** Passed `Student` objects to a standalone `print_result()` function.

## Project Structure
```text
student_management_system/
├── student_management_system.cpp   # Main C++ source code
└── README.md                       # Project documentation and usage guide
```

## Prerequisites
- A C++ compiler such as **GCC (`g++`)** or **Clang (`clang++`)**

## Compilation & Execution Instructions

1. Clone the repository:
```bash
git clone [https://github.com/Shan091/student_management_system.git](https://github.com/Shan091/student_management_system.git)
cd student_management_system
```

2. Compile the program:
```bash
g++ student_management_system.cpp -o student_management_system
```

3. Execute the compiled program:
- On Windows:
```bash
student_management_system.exe
```
- On Linux / macOS:
```bash
./student_management_system
```

## Sample Output
```text
--- Student Details ---
Name: Alice
Roll No: 101
Marks: 95.5

Name: Bob
Roll No: 102
Marks: 88

Name: Charlie
Roll No: 103
Marks: 76.5


Do you want to re-evaluate any student's marks? (y/n): y
Enter Roll No: 103
Enter new marks for Charlie: 105
Invalid marks (105) for Charlie. Enter valid marks (0 to 100): 82
Re-evaluate another student? (y/n): n

--- Updated Student Details ---
Name: Alice
Roll No: 101
Marks: 95.5
Result: Pass

Name: Bob
Roll No: 102
Marks: 88
Result: Pass

Name: Charlie
Roll No: 103
Marks: 82
Result: Pass
```
