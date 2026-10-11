#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    int roll_no;
    char name[NAME_LENGTH];
    float marks;
} Student;

void addStudent(Student students[], int *count);
void displayStudents(const Student students[], int count);
void searchStudent(const Student students[], int count);

#endif
