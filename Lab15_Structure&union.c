// Program Statement 15:
// Nidhi, a second semester engineering student, wants to learn the difference between 
// structure and union in C programming. This program demonstrates that with an example 
// where we read and print her details using both structure and union.

/* 
    Structure definition for Student_Structure.
    In structures, each member has its own memory.
    So all members can hold and retain values simultaneously.
*/

#include <stdio.h>
#include <string.h>

struct Student_Structure {
    int rollNumber;
    char name[100];
    float cgpa;
};

/* 
    Union definition for Student_Union.
    In unions, all members share the same memory.
    So only one member can hold a value at any time.
    Writing to one member overwrites the others.
*/
union Student_Union {
    int rollNumber;
    char name[100];
    float cgpa;
};

int main() {
    // Using Structure to store Nidhi's data
    struct Student_Structure studentStructure;

    printf("Enter Nidhi's roll number: ");
    scanf("%d", &studentStructure.rollNumber);  // Reading roll number

    printf("Enter Nidhi's name: ");
    scanf(" %[^\n]s", studentStructure.name);   // Reading name (with space)

    printf("Enter Nidhi's CGPA: ");
    scanf("%f", &studentStructure.cgpa);        // Reading CGPA

    // Displaying the values stored in the structure
    printf("\nStudent details using Structure:\n");
    printf("Roll Number: %d\n", studentStructure.rollNumber);
    printf("Name: %s\n", studentStructure.name);
    printf("CGPA: %.2f\n", studentStructure.cgpa);

    /*
        Now demonstrating the same using Union.
        Since union shares memory among members, assigning one value will overwrite the previous.
    */
    union Student_Union studentUnion;

    printf("\nEnter Nidhi's roll number: ");
    scanf("%d", &studentUnion.rollNumber);  // Stores roll number

    printf("Enter Nidhi's name: ");
    scanf(" %[^\n]s", studentUnion.name);   // Overwrites roll number

    printf("Enter Nidhi's CGPA: ");
    scanf("%f", &studentUnion.cgpa);        // Overwrites name

    /*
        Displaying values stored in the union.
        Only the last written value (CGPA) will be correct.
        Roll number and name will be corrupted or garbage.
    */
    printf("\nStudent details using Union:\n");
    printf("Roll Number: %d\n", studentUnion.rollNumber);  // Likely incorrect
    printf("Name: %s\n", studentUnion.name);               // Likely incorrect
    printf("CGPA: %.2f\n", studentUnion.cgpa);             // Correct

    return 0;
}

/*
Expected Output Example:

Enter Nidhi's roll number: 101
Enter Nidhi's name: Nidhi Sharma
Enter Nidhi's CGPA: 9.1

Student details using Structure:
Roll Number: 101
Name: Nidhi Sharma
CGPA: 9.10

Enter Nidhi's roll number: 101
Enter Nidhi's name: Nidhi Sharma
Enter Nidhi's CGPA: 9.1

Student details using Union:
Roll Number: <garbage or incorrect>
Name: <garbage or incorrect>
CGPA: 9.10

Conclusion:
- In STRUCTURE, all fields hold valid data as each has its own memory.
- In UNION, only the last written field (cgpa) is valid, others are lost due to memory sharing.
*/
