#include <stdio.h>

int main() {
    int a, b, c, count = 0;

    printf("Pythagorean triplets with side lengths between 50 and 80:\n");

    // Loop through all possible values of a, b, and c
    for (a = 50; a <= 80; a++) {
        for (b = a; b <= 80; b++) {  // b should be ≥ a to avoid duplicates
            for (c = b; c <= 80; c++) {  // c should be ≥ b
                if ((a * a + b * b) == (c * c)) {  // Check Pythagorean condition
                    printf("(%d, %d, %d)\n", a, b, c);
                    count++;
                }
            }
        }
    }

    // Display total count of triplets found
    printf("\nTotal Pythagorean triplets: %d\n", count);
     printf ("\nLab 20(d): Samriddhi Gautam : BIT28");
    return 0;
}
