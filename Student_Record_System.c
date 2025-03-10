#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

struct Student {
    int rollNumber;
    char name[NAME_LENGTH];
    float marks;
    char grade;
};

struct Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("\nMaximum student limit reached!\n");
        return;
    }

    struct Student s;
    printf("\nEnter Roll Number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Assign Grade based on Marks
    if (s.marks >= 90) s.grade = 'A';
    else if (s.marks >= 75) s.grade = 'B';
    else if (s.marks >= 50) s.grade = 'C';
    else s.grade = 'F';

    students[studentCount++] = s;
    printf("\nStudent added successfully!\n");
}

void displayStudents() {
    if (studentCount == 0) {
        printf("\nNo students to display!\n");
        return;
    }

    printf("\n%-10s %-20s %-10s %-10s\n", "Roll No", "Name", "Marks", "Grade");
    int i;
    for ( i = 0; i < studentCount; i++) {
    	
        printf("%-10d %-20s %-10.2f %-10c\n", students[i].rollNumber, students[i].name, students[i].marks, students[i].grade);
    }
}

void modifyStudent() {
    int rollNumber, found = 0;
    printf("\nEnter Roll Number of the student to modify: ");
    scanf("%d", &rollNumber);
	int i;
    for ( i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            printf("\nEnter new Name: ");
            scanf("%s", students[i].name);
            printf("Enter new Marks: ");
            scanf("%f", &students[i].marks);

            // Update grade based on new marks
            if (students[i].marks >= 90) students[i].grade = 'A';
            else if (students[i].marks >= 75) students[i].grade = 'B';
            else if (students[i].marks >= 50) students[i].grade = 'C';
            else students[i].grade = 'F';

            printf("\nStudent record updated successfully!\n");
            break;
        }
    }

    if (!found) printf("\nStudent with Roll Number %d not found!\n", rollNumber);
}

void deleteStudent() {
    int rollNumber, found = 0;
    printf("\nEnter Roll Number of the student to delete: ");
    scanf("%d", &rollNumber);
	int i;
    for (i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            int j;
            for (j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("\nStudent record deleted successfully!\n");
            break;
        }
    }

    if (!found) printf("\nStudent with Roll Number %d not found!\n", rollNumber);
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Modify Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: modifyStudent(); break;
            case 4: deleteStudent(); break;
            case 5: exit(0);
            default: printf("\nInvalid choice!\n");
        }
    }

    return 0;
}

