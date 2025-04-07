// Program Statement 5:  
// The books in the library are randomly placed on the shelves.  
// Design a C program that sorts the books based on the ISBN using bubble sort.  

// Program to sort an array in ascending order using the Bubble Sort method  
#include <stdio.h>  

int main()  
{  
    int a[100], n, i, j, temp;  

    printf("Enter the number of elements (max 100):\n");  
    scanf("%d", &n);  

    // Check for valid range  
    if (n > 100 || n <= 0)  
    {  
        printf("Error: Invalid range\n");  
        return 0;  
    }  

    printf("Enter the ISBN numbers:\n");  
    for (i = 0; i < n; i++)  
        scanf("%d", &a[i]);  

    // Bubble Sort  
    for (i = 0; i < n - 1; i++)  
    {  
        for (j = 0; j < n - i - 1; j++)  
        {  
            if (a[j] > a[j + 1])  
            {  
                temp = a[j];  
                a[j] = a[j + 1];  
                a[j + 1] = temp;  
            }  
        }  
    }  

    printf("Sorted ISBN numbers:\n");  
    for (i = 0; i < n; i++)  
        printf("%d\t", a[i]);  

    printf("\n");  

    return 0;  
}  

/*
Output:
Test Case 1:

Input:
Enter the number of elements (max 100):
5
Enter the ISBN numbers:
9783 1234 5678 4321 9876

Output:
Sorted ISBN numbers:
1234    4321    5678    9783    9876

Test Case 2 (Invalid Input):
Input:
Enter the number of elements (max 100):
105

Output:
Error: Invalid range
*/