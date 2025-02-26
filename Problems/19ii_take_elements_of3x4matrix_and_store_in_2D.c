#include <stdio.h>

int main() {
    int matrix[3][4];
    int i, j;

    // Input elements into the 3x4 matrix
    printf("Enter the elements of the 3x4 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the contents of the 2D array
    printf("\nThe 3x4 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nLab19(b) : Samriddhi Gautam : BIT28");
    return 0;
}