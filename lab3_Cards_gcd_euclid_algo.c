// Program Statement 3: A person is making identical balloon arrangements for a party.  
// He has X maroon balloons and Y white balloons.  
// He wants each arrangement to have the same number of each color.  
// Design a C program to find the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) using Euclid’s algorithm  
// to make use of every balloon.  

// Program to find GCD and LCM of any two numbers  
#include <stdio.h>  

int main()  
{  
    int num1, num2, gcd, lcm, remainder, numerator, denominator;  

    printf("Enter two numbers:\n");  
    scanf("%d %d", &num1, &num2);  

    // To find numerator and denominator  
    numerator = (num1 > num2) ? num1 : num2;  
    denominator = (num1 < num2) ? num1 : num2;  

    remainder = numerator % denominator;  

    while (remainder != 0)  
    {  
        numerator = denominator;  
        denominator = remainder;  
        remainder = numerator % denominator;  
    }  

    gcd = denominator;  
    lcm = (num1 * num2) / gcd;  

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);  
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);  

    return 0;  
}  

/*
Output:

Test Case 1:
Input: 12 18
GCD of 12 and 18 = 6  
LCM of 12 and 18 = 36  

Test Case 2:
Input: 48 60
GCD of 48 and 60 = 12  
LCM of 48 and 60 = 240  

Test Case 3:
Input: 25 30
GCD of 25 and 30 = 5  
LCM of 25 and 30 = 150  

*/