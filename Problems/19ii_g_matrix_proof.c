#include <stdio.h>
#include <stdbool.h>

int main() {
    int A[3][4], B[4][3], BA[4][4], AB[3][3];

    // Input elements for matrix A
    printf("Enter elements of matrix A (3x4):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for matrix B
    printf("Enter elements of matrix B (4x3):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply B and A
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            BA[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                BA[i][j] += B[i][k] * A[k][j];
            }
        }
    }

    // Multiply A and B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            AB[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying the matrices
    printf("Matrix BA:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", BA[i][j]);
        }
        printf("\n");
    }

    printf("Matrix AB:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", AB[i][j]);
        }
        printf("\n");
    }

    // Verify if B * A is equal to A * B
    bool equal = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (BA[i][j] != AB[i][j]) {
                equal = false;
                break;
            }
        }
        if (!equal) break;
    }

    if (equal) {
        printf("Matrices B * A and A * B are equal.\n");
    } else {
        printf("Matrices B * A and A * B are not equal.\n");
    }

    return 0;
}
