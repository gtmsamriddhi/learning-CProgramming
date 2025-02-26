#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    // Input dimensions for the first matrix
    printf("\nEnter the number of rows and columns for the first matrix (m1 n1): ");
    scanf("%d %d", &m1, &n1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix (m2 n2): ");
    scanf("%d %d", &m2, &n2);

    // Check if matrices can be multiplied
    if (n1 != m2) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    // Define the matrices
    int matrix1[m1][n1], matrix2[m2][n2], product[m1][n2];

    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the product matrix to zero
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply the matrices
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            for(int k = 0; k < n1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product matrix
    printf("Product of the matrices:\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
  printf ("\n Lab19(f) : Samriddhi Gautam : BIT28");
    return 0;
}
