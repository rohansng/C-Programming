// Program Statement 8: Design, develop and execute a program in C to read two matrices A(M × N) and B(P × Q) 
// and compute the product of A and B if multiplication is possible.

// Program to find Matrix Multiplication
#include <stdio.h>

int main() 
{
    int a[10][10], b[10][10], c[10][10];  // Matrices A, B, and result C
    int i, j, m, n, p, q, k;

    // Input order of Matrix A
    printf("Enter the order of Matrix A (rows and columns): \n");
    scanf("%d %d", &m, &n);
    if (m < 1 || n < 1) 
    {
        printf("Error: Kindly enter valid order for Matrix A\n");
        return -1;
    }

    // Input order of Matrix B
    printf("Enter the order of Matrix B (rows and columns): \n");
    scanf("%d %d", &p, &q);
    if (p < 1 || q < 1) 
    {
        printf("Error: Kindly enter valid order for Matrix B\n");
        return -1;
    }

    // Check if multiplication is possible
    if (n != p) 
    {
        printf("Error: Matrix multiplication is not possible. Columns of A must equal rows of B.\n");
        return -1;
    }

    // Input elements of Matrix A
    printf("Enter the elements of Matrix A:\n");
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    // Input elements of Matrix B
    printf("Enter the elements of Matrix B:\n");
    for (i = 0; i < p; ++i)
        for (j = 0; j < q; ++j)
            scanf("%d", &b[i][j]);

    // Initialize and compute Matrix C = A * B
    for (i = 0; i < m; ++i) 
    {
        for (j = 0; j < q; ++j) 
        {
            c[i][j] = 0;
            for (k = 0; k < n; ++k) // use n instead of p for better clarity
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    // Output the result matrix
    printf("Multiplication of the two matrices is:\n");
    for (i = 0; i < m; ++i) 
    {
        for (j = 0; j < q; ++j)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}

/*

Input:
Enter the order of Matrix A (rows and columns): 
2 3
Enter the order of Matrix B (rows and columns): 
3 2
Enter the elements of Matrix A:
1 2 3
4 5 6
Enter the elements of Matrix B:
7 8
9 10
11 12

Output:
Multiplication of the two matrices is:
58	64	
139	154	

*/
