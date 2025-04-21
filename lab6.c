// Program Statement 6:
// Given an ISBN, design a C program to search and display the book if present in the library.
// Use binary search to design the program.

#include <stdio.h>

// Function prototype (optional in this small code)
int main()
{
    int a[100], n, i, key, low = 0, high, mid, pos = -1;

    printf("Enter the number of books (max 100):\n");
    scanf("%d", &n);

    printf("Enter the ISBN numbers of the books (in sorted order):\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the ISBN to be searched:\n");
    scanf("%d", &key);

    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            pos = mid; // ISBN found
            break;
        }
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (pos == -1)
        printf("Book with ISBN %d not found in the library.\n", key);
    else
        printf("Book with ISBN %d found at position %d.\n", key, pos + 1); // +1 for human-readable index

    return 0;
}

/*
Sample Input/Output:

Enter the number of books (max 100):
5
Enter the ISBN numbers of the books (in sorted order):
1010 2020 3030 4040 5050
Enter the ISBN to be searched:
3030
Book with ISBN 3030 found at position 3.

---

Enter the number of books (max 100):
5
Enter the ISBN numbers of the books (in sorted order):
1010 2020 3030 4040 5050
Enter the ISBN to be searched:
9999
Book with ISBN 9999 not found in the library.
*/
