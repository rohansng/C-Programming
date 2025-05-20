// Program Statement 1: Secure life, an insurance company issues special returns to its customers on leap years.  
// Given a year, write a C program to find whether the customer is due for special returns or not. (use ternary operator)

// Program to find whether the year is a Leap year or not  
#include <stdio.h>  

int main()  
{  
    int year;  
    printf("Enter the year\n");  
    scanf("%d", &year);  

    // A year is a leap year if it is divisible by 4 but not by 100, except those years divisible by 400  
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ?  
    printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year);  

    return 0;  
}  



/*Output:
Test Case 1:
Input: 2024
Output: 2024 is a leap year

Test Case 2:
Input: 2023
Output: 2023 is not a leap year

Test Case 3:
Input: 2000
Output: 2000 is a leap year

Test Case 4:
Input: 1900
Output: 1900 is not a leap year 
*/