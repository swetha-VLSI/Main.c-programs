# Student Record Manager (C)

A beginner-friendly C project demonstrating **structs**, **header/source file separation**, functions, input validation, and a Makefile.

## Features
- Add a student record (roll number, name, marks)
- Display all records
- Search by roll number
- Reject duplicate roll numbers and marks outside 0–100
- Organised into a header file and source files

## Project files
- `main.c` — menu and program entry point
- `student.c` — student record functions
- `student.h` — `Student` struct and function declarations
- `Makefile` — build and clean commands

## Build and run

With GCC and Make installed, run:

```bash
make
./student_manager
```

To compile without Make:

```bash
gcc -Wall -Wextra -std=c11 main.c student.c -o student_manager
./student_manager
```

To remove the compiled program:

```bash
make clean
```

On Windows, run the compiled program as `student_manager.exe` (or `.\student_manager.exe` in PowerShell).

## Sample run

```text
=== Student Record Manager ===
1. Add student
2. Display all students
3. Search by roll number
4. Exit
Choose an option: 1
Enter roll number: 101
Enter student name: Arun Kumar
Enter marks (0-100): 87.5
Student added successfully.

Choose an option: 2

Roll No    Name                           Marks
------------------------------------------------------
101        Arun Kumar                     87.50
```

*Note: records are stored in memory while the program runs; they are not saved after exit.*
