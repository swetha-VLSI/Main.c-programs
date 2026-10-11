#include <stdio.h>
#include "student.h"

int main(void) {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\\n=== Student Record Manager ===\\n");
        printf("1. Add student\\n");
        printf("2. Display all students\\n");
        printf("3. Search by roll number\\n");
        printf("4. Exit\\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Please enter a number from 1 to 4.\\n");
            while (getchar() != '\\n') {}
            continue;
        }

        switch (choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: printf("Goodbye!\\n"); break;
            default: printf("Invalid choice. Try again.\\n");
        }
    } while (choice != 4);

    return 0;
}
