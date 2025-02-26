#include <stdio.h>

int main() {
    int n1, n2, count = 0;  // Declare variables

    // Step 1: Ask the user to enter two numbers
    printf("Enter two numbers (n1 < n2): ");
    scanf("%d %d", &n1, &n2);

    // Step 2: Check if n1 is actually less than n2
    if (n1 >= n2) {
        printf("Invalid input! Ensure that n1 is less than n2.\n");
        return 1; 
    }

    printf("Odd numbers between %d and %d are:\n", n1, n2);

    for (int num = n1; num < n2; num++) {  
        if (num % 2 != 0) {  
            printf("%d ", num);  
            count++;  
        }
    }
    printf("\nTotal odd numbers: %d\n", count);
    printf ("\n Lab 19(e): Samriddhi Gautam : BIT28");
    return 0;
}