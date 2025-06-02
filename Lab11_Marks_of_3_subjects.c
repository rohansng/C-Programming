// Program Statement 11:
// In the university to maintain student database for result calculation, 
// using structures design a C program that accepts the details such as 
// Roll No, Student Name and Marks of three subjects of ‘n’ students, 
// and print their details along with their total marks.

#include <stdio.h>

// Define a structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    int marks[3];      // Array to store marks for three subjects
    int totalMarks;
};

int main() {
    int n; // Number of students

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures to store student information
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); // Read full name with spaces

        printf("Enter marks for three subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculate total marks and print student details
    printf("\nStudent Details and Total Marks:\n");
    for (int i = 0; i < n; i++) {
        students[i].totalMarks = 0; // Initialize total marks

        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks for three subjects: ");

        for (int j = 0; j < 3; j++) {
            students[i].totalMarks += students[i].marks[j]; // Sum marks
            printf("%d ", students[i].marks[j]);
        }

        printf("\nTotal Marks: %d\n", students[i].totalMarks);
    }

    return 0;
}

/*
Sample Output:

Enter the number of students: 2
Enter details for Student 1:
Roll Number: 1
Name: a
Enter marks for three subjects:
Subject 1: 35
Subject 2: 67
Subject 3: 45
Enter details for Student 2:
Roll Number: 2
Name: b
Enter marks for three subjects:
Subject 1: 78
Subject 2: 45
Subject 3: 23

Student Details and Total Marks:
Student 1:
Roll Number: 1
Name: a
Marks for three subjects: 35 67 45 
Total Marks: 147
Student 2:
Roll Number: 2
Name: b
Marks for three subjects: 78 45 23 
Total Marks: 146
*/
