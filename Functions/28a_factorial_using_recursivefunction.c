#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and display the factorial
    printf("Factorial of %d is %d\n", num, factorial(num));
    printf ("\nLab 28(A): Samriddhi Gautam : BIT28");
    return 0;
}