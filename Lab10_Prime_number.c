
// Question:
// Write a C program that checks whether a number picked by the participant is a prime number or not.
// If the number is prime, print a congratulatory message indicating the participant has won a prize.
// Otherwise, print a message stating they haven't won.



#include <stdio.h>

int main() {
    int pickedNumber;

    // Input the number picked by the participant
    printf("Enter the picked number: ");
    scanf("%d", &pickedNumber);

    int isPrime = 1; // 1 indicates prime, 0 indicates not prime

    if (pickedNumber <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= pickedNumber; i++) {
            if (pickedNumber % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Congratulations! You've won the prize. The picked number %d is prime.\n", pickedNumber);
    } else {
        printf("Sorry, you haven't won the prize. The picked number %d is not prime.\n", pickedNumber);
    }

    return 0;
}


// Sample Output:
// Case 1:
// Enter the picked number: 21
// Sorry, you haven't won the prize. The picked number 21 is not prime.
//
// Case 2:
// Enter the picked number: 7
// Congratulations! You've won the prize. The picked number 7 is prime.
