#include <stdio.h>

// Recursive function to find the nth Fibonacci term
int fibonacci(int n) {
    if (n <= 1) // Base case
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;

    // Input the term number
    printf("Enter the term number (n): ");
    scanf("%d", &n);

    // Calculate and display the nth Fibonacci term
    printf("The %dth term of the Fibonacci sequence is %d\n", n, fibonacci(n));
    printf ("\nLab 28(b): Samriddhi Gautam : BIT28");
    return 0;
}