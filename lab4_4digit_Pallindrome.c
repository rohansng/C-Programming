// Program Statement 4: A Criminal leaves a four-digit number as his calling card.  
// Design an algorithm and develop a C program to test whether the four-digit number left by the criminal is a palindrome or not.  

// Program to find whether the number is Palindrome or not  
#include <stdio.h>  

int main()  
{  
    int original, n, reversed, remainder;  

    printf("Enter a four-digit number:\n");  
    scanf("%d", &n);  

    // Check if the number is a valid four-digit number  
    if (n > 9999 || n < 1000)  
    {  
        printf("Error: Invalid entry of the number\n");  
        return 0;  
    }  

    original = n;  
    reversed = 0;  

    // Reverse the number  
    while (n != 0)  
    {  
        remainder = n % 10;  
        n = n / 10;  
        reversed = reversed * 10 + remainder;  
    }  

    printf("The reverse of %d is %d\n", original, reversed);  

    // Check if the number is a palindrome  
    if (original == reversed)  
        printf("It is a Palindrome\n");  
    else  
        printf("It is not a Palindrome\n");  

    return 0;  
}  

/*
Output:
Test Case 1:
Input: 1221
The reverse of 1221 is 1221  
It is a Palindrome  

Test Case 2:
Input: 1234
The reverse of 1234 is 4321  
It is not a Palindrome  

Test Case 3 (Invalid Input):
Input: 999
Error: Invalid entry of the number  

*/