#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Check for matrix multiplication compatibility
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n");
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    // Input Matrix 1
    printf("Enter elements
