#include <stdio.h>

int main() {
    int i, j;
    int n = 7;  // Number of terms
    double sum = 0.0, fact;

    // Loop to calculate sum of first 7 terms
    for (i = 1; i <= n; i++) {
        fact = 1;  // Reset factorial for each term

        // Calculate factorial of i
        for (j = 1; j <= i; j++) {
            fact *= j;
        }

        sum += (i / fact);  // Add current term to sum
    }

    // Print result
    printf("Sum of first %d terms of the series: %.6lf\n", n, sum);
     printf ("\nLab 20(b): Samriddhi Gautam : BIT28");
    return 0;
}
