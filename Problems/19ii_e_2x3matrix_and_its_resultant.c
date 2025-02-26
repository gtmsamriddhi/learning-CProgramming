#include <stdio.h>

int main() {
    int matrix1[2][3], matrix2[2][3], result[2][3];

    // Input for the first matrix
    printf("Enter elements of the first 2x3 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second 2x3 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the resultant matrix
    printf("Resultant Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    printf ("\n Lab19(e) : Samriddhi Gautam : BIT28");
    return 0;
}
