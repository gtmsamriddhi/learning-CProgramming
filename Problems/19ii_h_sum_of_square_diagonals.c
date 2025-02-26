#include <stdio.h>

int main() {
    int n;
    printf("\nEnter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements for the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of squares of the diagonal elements
    int sum_of_squares = 0;
    for (int i = 0; i < n; i++) {
        sum_of_squares += matrix[i][i] * matrix[i][i];
    }

    // Display the result
    printf("Sum of squares of the diagonal elements: %d\n", sum_of_squares);
    printf ("\n Lab19(h) : Samriddhi Gautam : BIT28");
    return 0;
}
