#include <stdio.h>

int main() {
    int i, j, spaces;
    int rows = 5;  // Number of rows

    for (i = 1; i <= rows; i++) {  // Outer loop for each row
        // Inner loop for printing spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        // Inner loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }
    printf ("Lab16(vii) : Samriddhi Gautam : BIT28");
    return 0;
}
