
/*
Program Statement 12 & 13:

The local government school needs simple recording software which accepts names 
of the students in random order and prepares the nominal roll in alphabetical order. 
Help the school by designing a simple C program to sort the given names and 
display them using file handling functions.

Solution:

In this program:
- We assume that a file named "student_names.txt" exists in the same directory, 
  containing one student name per line.
- The program reads all names from the file.
- It sorts them alphabetically using the `qsort()` function.
- The sorted names are written to a new file called "sorted_names.txt".
- The sorted list is also printed to the console.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

// Function to compare two strings for sorting in alphabetical order
int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char names[MAX_NAME_LENGTH][MAX_NAME_LENGTH];
    int numNames = 0;

    // Open the input file for reading student names
    FILE *file = fopen("student_names.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Read names from the file
    char name[MAX_NAME_LENGTH];
    while (fgets(name, sizeof(name), file) != NULL) {
        name[strcspn(name, "\n")] = '\0';  // Remove newline character
        strcpy(names[numNames], name);
        numNames++;
    }

    // Close the input file
    fclose(file);

    // Sort the names in alphabetical order
    qsort(names, numNames, sizeof(names[0]), compare);

    // Open a new file for writing the sorted names
    file = fopen("sorted_names.txt", "w");
    if (file == NULL) {
        printf("Failed to create the output file.\n");
        return 1;
    }

    // Write the sorted names to the file and display them
    printf("Sorted names:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);         // Display on console
        fprintf(file, "%s\n", names[i]);  // Write to file
    }

    // Close the output file
    fclose(file);

    return 0;
}

/*
Instructions to Run:

1. Create a file named `student_names.txt` in the same directory as this program.
2. Add names to the file, each on a new line. Example:
   Zoya
   Aarav
   Lakshmi
   Nikhil

3. Save this program as `name_sorter.c`.
4. Compile using a C compiler:
   gcc name_sorter.c -o name_sorter
5. Run the program:
   ./name_sorter

Output:
Sorted names:
Aarav
Lakshmi
Nikhil
Zoya

Also creates/updates `sorted_names.txt` with the sorted names.
*/