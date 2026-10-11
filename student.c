#include <stdio.h>
#include <string.h>
#include "student.h"

void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Student list is full.\\n");
        return;
    }

    Student s;
    printf("Enter roll number: ");
    if (scanf("%d", &s.roll_no) != 1) {
        printf("Invalid roll number.\\n");
        while (getchar() != '\\n') {}
        return;
    }

    for (int i = 0; i < *count; i++) {
        if (students[i].roll_no == s.roll_no) {
            printf("That roll number already exists.\\n");
            return;
        }
    }

    printf("Enter student name: ");
    scanf(" %49[^\\n]", s.name);
    printf("Enter marks (0-100): ");
    if (scanf("%f", &s.marks) != 1 || s.marks < 0 || s.marks > 100) {
        printf("Invalid marks. Enter a value from 0 to 100.\\n");
        while (getchar() != '\\n') {}
        return;
    }

    students[*count] = s;
    (*count)++;
    printf("Student added successfully.\\n");
}

void displayStudents(const Student students[], int count) {
    if (count == 0) {
        printf("No student records yet.\\n");
        return;
    }

    printf("\\n%-10s %-30s %-10s\\n", "Roll No", "Name", "Marks");
    printf("------------------------------------------------------\\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-30s %-10.2f\\n",
               students[i].roll_no, students[i].name, students[i].marks);
    }
}

void searchStudent(const Student students[], int count) {
    int roll, found = 0;
    printf("Enter roll number to search: ");
    if (scanf("%d", &roll) != 1) {
        printf("Invalid roll number.\\n");
        while (getchar() != '\\n') {}
        return;
    }

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll) {
            printf("Record found: Roll No: %d | Name: %s | Marks: %.2f\\n",
                   students[i].roll_no, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("No student found with roll number %d.\\n", roll);
}
