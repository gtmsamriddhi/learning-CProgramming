#include <stdio.h>

// Function to multiply two n*n matrices
void multiplyMatrices(int n, int matrix1[n][n], int matrix2[n][n], int result[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0; // Initialize the result matrix element to 0
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int n;

    // Input the size of the matrices
    printf("Enter the size of the matrices (n): ");
    scanf("%d", &n);

    int matrix1[n][n], matrix2[n][n], result[n][n];

    // Input the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the matrices
    multiplyMatrices(n, matrix1, matrix2, result);

    // Display the resulting matrix
    printf("Resulting matrix after multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    printf ("\nLab 26(e): Samriddhi Gautam : BIT28");
    return 0;
}