#include <stdio.h>
#include <string.h>

// Define the Course structure
struct Course {
    char courseName[100];
    char courseCode[10];
};

// Define the Student structure with an array of Courses
struct Student {
    int id;
    char name[50];
    int age;
    struct Course courses[3];  // Array of 3 courses
};

// Function to display student information
void displayStudentInfo(struct Student student) {
    printf("Student ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Courses Enrolled:\n");

    // Loop through each course for the student
    for (int i = 0; i < 3; i++) {
        printf("  Course %d:\n", i + 1);
        printf("    Course Name: %s\n", student.courses[i].courseName);
        printf("    Course Code: %s\n", student.courses[i].courseCode);
    }
    printf("\n");
}

int main() {
    // Initialize data for 2 students
    struct Student students[2];

    // Student 1 data
    students[0].id = 1;
    strcpy(students[0].name, "Alice");
    students[0].age = 20;
    strcpy(students[0].courses[0].courseName, "Introduction to Programming");
    strcpy(students[0].courses[0].courseCode, "CS101");
    strcpy(students[0].courses[1].courseName, "Data Structures");
    strcpy(students[0].courses[1].courseCode, "CS102");
    strcpy(students[0].courses[2].courseName, "Algorithms");
    strcpy(students[0].courses[2].courseCode, "CS103");

    // Student 2 data
    students[1].id = 2;
    strcpy(students[1].name, "Bob");
    students[1].age = 21;
    strcpy(students[1].courses[0].courseName, "Calculus I");
    strcpy(students[1].courses[0].courseCode, "MATH101");
    strcpy(students[1].courses[1].courseName, "Physics I");
    strcpy(students[1].courses[1].courseCode, "PHYS101");
    strcpy(students[1].courses[2].courseName, "Computer Networks");
    strcpy(students[1].courses[2].courseCode, "CS201");

    // Display information for each student
    for (int i = 0; i < 2; i++) {
        displayStudentInfo(students[i]);
    }

    return 0;
}
