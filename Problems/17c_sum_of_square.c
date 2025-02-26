#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of squares from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i * i; // Add the square of i to the sum
    }

    // Display the result
    printf("Sum of squares from 1 to %d is: %d\n", n, sum);
    
    printf ("\nLab17(c) : Samriddhi Gautam : BIT28");
    return 0;
}