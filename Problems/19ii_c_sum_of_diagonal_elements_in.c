#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum_diagonal = 0;

    // Input elements for the matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < 3; i++) {
        sum_diagonal += matrix[i][i];
    }

    // Display the sum of the diagonal elements
    printf("Sum of diagonal elements: %d\n", sum_diagonal);
    
    printf ("\nLab 19(c) : Samriddhi Gautam : BIT28");
    return 0;
}
