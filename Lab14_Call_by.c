// Program Statement 14:
// Design a C program to demonstrate passing or returning a structure to/from a function 
// using call by value and call by reference method.
// Structure used: Employee with EMPID, EMPNAME, EMPSAL, DEPARTMENT.

/* 
   Structure definition for Employee.
   Contains:
   - EMPID: Employee ID (integer)
   - EMPNAME: Name of the employee (string)
   - EMPSAL: Salary of the employee (float)
   - DEPARTMENT: Department name (string)
*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int EMPID;
    char EMPNAME[100];
    float EMPSAL;
    char DEPARTMENT[100];
};

/*
   Function: modifyEmployeeCallByValue
   Purpose: Demonstrates call by value by trying to modify the structure passed.
   Note: Changes here will not reflect in the main function.
   Parameters:
   - emp: structure passed by value.
*/
void modifyEmployeeCallByValue(struct Employee emp) {
    emp.EMPID = 1001;
    strcpy(emp.EMPNAME, "John");
    emp.EMPSAL = 5000.0;
    strcpy(emp.DEPARTMENT, "IT");
    // These changes will not reflect in main as emp is a local copy.
}

/*
   Function: modifyEmployeeCallByReference
   Purpose: Demonstrates call by reference by modifying the structure using pointer.
   Note: Changes here will reflect in the original structure in main.
   Parameters:
   - emp: pointer to structure (passed by reference).
*/
void modifyEmployeeCallByReference(struct Employee *emp) {
    emp->EMPID = 1002;
    strcpy(emp->EMPNAME, "Jane");
    emp->EMPSAL = 6000.0;
    strcpy(emp->DEPARTMENT, "HR");
    // These changes will reflect in main as we are using a pointer to structure.
}

/*
   Function: displayEmployee
   Purpose: Displays the contents of the Employee structure.
   Parameters:
   - emp: structure passed by value for display purpose.
*/
void displayEmployee(struct Employee emp) {
    printf("EMPID: %d\n", emp.EMPID);
    printf("EMPNAME: %s\n", emp.EMPNAME);
    printf("EMPSAL: %.2f\n", emp.EMPSAL);
    printf("DEPARTMENT: %s\n", emp.DEPARTMENT);
}

/*
   Main Function:
   - Creates two Employee structures: emp1 and emp2.
   - Demonstrates call by value (emp1 remains unchanged).
   - Demonstrates call by reference (emp2 gets updated).
*/
int main() {
    struct Employee emp1, emp2;

    // Call by value: emp1 is passed to function, changes won't reflect in main.
    modifyEmployeeCallByValue(emp1);
    printf("Employee details after modification using call by value:\n");
    displayEmployee(emp1);  // Output will show default/garbage values

    printf("\n");

    // Call by reference: emp2 is passed by address, changes will reflect.
    modifyEmployeeCallByReference(&emp2);
    printf("Employee details after modification using call by reference:\n");
    displayEmployee(emp2);  // Output will show updated values

    return 0;
}

/* 
Expected Output:

Employee details after modification using call by value:
EMPID: 0
EMPNAME: 
EMPSAL: 0.00
DEPARTMENT: 

Employee details after modification using call by reference:
EMPID: 1002
EMPNAME: Jane
EMPSAL: 6000.00
DEPARTMENT: HR

This output proves that call by value doesn't change the original structure,
while call by reference does.
*/
