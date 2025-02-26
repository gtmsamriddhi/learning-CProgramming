#include <stdio.h>

int main() {
    // Create and initialize a 2D array
    int matrix[3][4] = {
        {1, 2, 3, 4},    // Row 1
        {5, 6, 7, 8},    // Row 2
        {9, 10, 11, 12}  // Row 3
    };

    // Print the 2D array
    printf("2D Array:\n");
    for (int i = 0; i < 3; i++) {          // Loop through rows
        for (int j = 0; j < 4; j++) {      // Loop through columns
            printf("%d\t", matrix[i][j]);  // Print each element
        }
        printf("\n");  // Move to the next row
    }
    printf ("\nLab 19(a) : Samriddhi Gautam : BIT28");
    return 0;
}