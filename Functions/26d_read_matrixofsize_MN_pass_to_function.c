#include <stdio.h>

// Function to increase each element of the matrix by 2
void increaseMatrix(int m, int n, int matrix[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] += 2;
        }
    }
}

int main() {
    int m, n;

    // Input the order of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Pass the matrix to the function
    increaseMatrix(m, n, matrix);

    // Display the updated matrix
    printf("Matrix after increasing each element by 2:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf ("\nLab 26(d): Samriddhi Gautam : BIT28");
    return 0;
}