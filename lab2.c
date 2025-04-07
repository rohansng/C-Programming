// Program Statement 2: The tallest of the three pupils are to be selected for the basketball tournament held in the university next year.  
// Write a C program using branching statements to find the candidate selected for the tournament. (if else)

// Program to find the tallest of three people  
#include <stdio.h>  

int main()  
{   
    int tallest;  
    int ht_p1, ht_p2, ht_p3;  

    printf("Enter the height of three persons in cm\n");  
    scanf("%d %d %d", &ht_p1, &ht_p2, &ht_p3);  

    if (ht_p1 < ht_p2)  
    {  
        if (ht_p2 < ht_p3)  
            tallest = ht_p3;  
        else  
            tallest = ht_p2;  
    }  
    else  
    {  
        if (ht_p1 < ht_p3)  
            tallest = ht_p3;  
        else  
            tallest = ht_p1;  
    }  

    printf("Tallest is %d cm\n", tallest);  

    return 0;  
}  

/*
Output:
Test Case 1:
Input: 175 180 165
Output: Tallest is 180 cm

Test Case 2:
Input: 190 185 195
Output: Tallest is 195 cm

Test Case 3:
Input: 170 170 170
Output: Tallest is 170 cm
*/